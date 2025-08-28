#include "TaleWorlds.Native.Split.h"

// 03_rendering_part065.c - 10 个函数

// 函数: void FUN_180301d10(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180301d10(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  longlong *plStack_80;
  ulonglong uStack_78;
  longlong lStack_68;
  uint64_t uStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  int8_t uStack_48;
  int8_t uStack_47;
  int8_t uStack_46;
  int32_t uStack_44;
  int8_t uStack_40;
  uint64_t uStack_38;
  longlong lStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  uint64_t uStack_10;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0xffffffff;
    uStack_46 = 0;
    uStack_44 = 0xffffffff;
    uStack_40 = 1;
    uStack_38 = 0;
    lStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 3;
    uStack_10 = 0;
    _uStack_48 = CONCAT11(*(int8_t *)(param_1 + 0x6c2),1);
    FUN_1801a3620(*(uint64_t *)(param_1 + 0x6d0),&uStack_58,param_3,param_4,0xfffffffffffffffe);
    FUN_1801c2360(*(longlong *)(param_1 + 0x6d0) + 0x60830,&plStack_80);
LAB_180301de0:
    if (uStack_78 != *(ulonglong *)(*(longlong *)(param_1 + 0x6d0) + 0x60838)) {
      *(byte *)(lStack_68 + 0x2e9) = *(byte *)(lStack_68 + 0x2e9) | 2;
      lVar1 = *plStack_80;
      do {
        uStack_78 = uStack_78 + 1;
        lVar2 = (uStack_78 & 0xffffffff) * 0x10;
        lVar3 = lVar2 + 8 + lVar1;
        if ((*(ulonglong *)(lVar2 + lVar1) & 0xffffffff00000000) == 0) {
          lVar3 = 0;
        }
        if (lVar3 != 0) {
          lStack_68 = *(longlong *)(lVar1 + 8 + (uStack_78 & 0xffffffff) * 0x10);
          break;
        }
      } while (uStack_78 != plStack_80[1]);
      goto LAB_180301de0;
    }
    FUN_1800b6620();
    if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(float *)(param_1 + 0xe4) = (float)(_DAT_180c8ed30 % 1000000000) * 1e-05;
  }
  uVar4 = FUN_180302c30(param_1);
  *(uint64_t *)(param_1 + 0x518) = uVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180301ec0(longlong *param_1)

{
  longlong lVar1;
  
  if (*(code **)(*param_1 + 0x90) == (code *)&UNK_180302310) {
    lVar1 = param_1[0xda];
    if ((((*(longlong **)(lVar1 + 0x318) != (longlong *)0x0) && (*(char *)(lVar1 + 0x2a61) != '\0'))
        && (*(char *)(lVar1 + 0x2a62) != '\0')) && (*(int *)(_DAT_180c8a9c8 + 0xaf0) != 0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x318) + 0x38))();
      return 0;
    }
  }
  else {
    (**(code **)(*param_1 + 0x90))();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180301f30(ulonglong param_1,longlong *param_2)
void FUN_180301f30(ulonglong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  bool bVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x6d0);
  *(longlong **)(param_1 + 0x6d0) = param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  lVar2 = *(longlong *)(param_1 + 0x6d0);
  if (lVar2 == 0) {
    return;
  }
  puVar6 = (uint64_t *)(lVar2 + 0x60b98);
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(lVar2 + 0x60bc0));
  *(ulonglong *)(lVar4 + 0x20) = param_1;
  bVar8 = true;
  puVar3 = puVar6;
  puVar5 = *(uint64_t **)(lVar2 + 0x60ba8);
  while (puVar5 != (uint64_t *)0x0) {
    bVar8 = param_1 < (ulonglong)puVar5[4];
    puVar3 = puVar5;
    if (bVar8) {
      puVar5 = (uint64_t *)puVar5[1];
    }
    else {
      puVar5 = (uint64_t *)*puVar5;
    }
  }
  puVar5 = puVar3;
  if (bVar8) {
    if (puVar3 == *(uint64_t **)(lVar2 + 0x60ba0)) goto LAB_18030200e;
    puVar5 = (uint64_t *)func_0x00018066b9a0(puVar3);
  }
  if (*(ulonglong *)(lVar4 + 0x20) <= (ulonglong)puVar5[4]) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar4);
  }
LAB_18030200e:
  if ((puVar3 == puVar6) || (*(ulonglong *)(lVar4 + 0x20) < (ulonglong)puVar3[4])) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,puVar3,puVar6,uVar7,uVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_180302090(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = param_3[1] - *(float *)(param_1 + 0x7d4);
  fVar5 = *param_3 - *(float *)(param_1 + 2000);
  fVar8 = param_3[2] - *(float *)(param_1 + 0x7d8);
  fVar1 = *(float *)(param_1 + 0x28);
  fVar2 = *(float *)(param_1 + 0x20);
  fVar3 = *(float *)(_DAT_180c86950 + 0x17f0);
  fVar6 = *(float *)(param_1 + 0x7a4) * fVar4 + *(float *)(param_1 + 0x7a0) * fVar5 +
          *(float *)(param_1 + 0x7a8) * fVar8;
  fVar7 = *(float *)(param_1 + 0x7b4) * fVar4 + *(float *)(param_1 + 0x7b0) * fVar5 +
          *(float *)(param_1 + 0x7b8) * fVar8;
  fVar4 = *(float *)(param_1 + 0x7c4) * fVar4 + *(float *)(param_1 + 0x7c0) * fVar5 +
          *(float *)(param_1 + 0x7c8) * fVar8;
  if (*(char *)(param_1 + 0x7e0) != '\0') {
    fVar5 = 1.0 / fVar4;
    fVar6 = -(*(float *)(param_1 + 0x7f4) * fVar6 * fVar5);
    fVar7 = -(*(float *)(param_1 + 0x7f4) * fVar7 * fVar5);
    if (0.0 < fVar4) {
      fVar6 = -1.0;
      fVar7 = -1.0;
    }
  }
  fVar4 = *(float *)(param_1 + 0x7f0);
  fVar5 = *(float *)(param_1 + 0x7ec);
  *param_2 = ((fVar6 - *(float *)(param_1 + 0x7e4)) *
             ((*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x1c)) /
             *(float *)(_DAT_180c86950 + 0x17ec))) /
             (*(float *)(param_1 + 0x7e8) - *(float *)(param_1 + 0x7e4));
  param_2[1] = 1.0 - ((fVar7 - fVar4) * ((fVar1 - fVar2) / fVar3)) / (fVar5 - fVar4);
  return param_2;
}





// 函数: void FUN_180302270(longlong param_1,uint64_t param_2)
void FUN_180302270(longlong param_1,uint64_t param_2)

{
  void *puVar1;
  longlong lVar2;
  void *puVar3;
  
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    puVar1 = *(void **)(*(longlong *)(param_1 + 0x6d0) + 0x4e0);
    puVar3 = &system_buffer_ptr;
    if (puVar1 != (void *)0x0) {
      puVar3 = puVar1;
    }
    lVar2 = strstr(puVar3,&UNK_180a0b780);
    if (lVar2 == 0) {
      if (*(char *)(param_1 + 0xdd) == '\0') {
        return;
      }
      lVar2 = *(longlong *)(param_1 + 0x6d0);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x6d0);
      if (*(char *)(lVar2 + 0xa8) != '\0') {
        return;
      }
    }
    FUN_1800571e0(param_2,lVar2 + 0xa0);
    FUN_1800571e0(param_2,*(longlong *)(param_1 + 0x6d0) + 0xa4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180302370(longlong *param_1,longlong *param_2)
void FUN_180302370(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  char cVar13;
  int8_t uVar14;
  int32_t uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  uint64_t uVar19;
  int8_t auStack_298 [32];
  int32_t uStack_278;
  longlong *plStack_268;
  int iStack_260;
  int iStack_25c;
  uint64_t uStack_258;
  longlong *plStack_250;
  longlong *plStack_248;
  uint uStack_240;
  uint uStack_23c;
  int32_t uStack_238;
  uint64_t uStack_234;
  int32_t uStack_22c;
  int32_t uStack_228;
  longlong *plStack_220;
  uint uStack_218;
  uint uStack_214;
  int32_t uStack_210;
  int32_t uStack_20c;
  int32_t uStack_208;
  uint64_t uStack_204;
  uint64_t uStack_1fc;
  int8_t uStack_1f4;
  uint64_t uStack_1f3;
  int32_t uStack_1e8;
  int8_t uStack_1e4;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong *plStack_1d0;
  longlong *plStack_1c8;
  longlong *plStack_1c0;
  longlong *plStack_1b8;
  longlong *plStack_1b0;
  longlong *plStack_1a8;
  uint64_t uStack_1a0;
  void *puStack_198;
  int8_t *puStack_190;
  int32_t uStack_188;
  int8_t auStack_180 [136];
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [136];
  ulonglong uStack_58;
  
  uStack_1a0 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_298;
  lVar1 = param_1[0xa3];
  lVar2 = param_1[0xda];
  iVar18 = 0;
  lVar16 = *(longlong *)(lVar2 + 0x60be8);
  plStack_248 = param_2;
  if (*(longlong *)(lVar2 + 0x60bf0) - lVar16 >> 6 != 0) {
    lVar17 = 0;
    do {
      plVar12 = *(longlong **)(lVar17 + 0x38 + lVar16);
      lStack_1e0 = lVar2;
      lStack_1d8 = lVar1;
      if (plVar12 == (longlong *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*plVar12 + 0x10))(plVar12,&lStack_1d8);
      iVar18 = iVar18 + 1;
      lVar17 = lVar17 + 0x40;
      lVar16 = *(longlong *)(lVar2 + 0x60be8);
    } while ((ulonglong)(longlong)iVar18 < (ulonglong)(*(longlong *)(lVar2 + 0x60bf0) - lVar16 >> 6)
            );
  }
  if (*(char *)(lVar2 + 0x10) == '\0') {
    FUN_18019ad80(lVar2,lVar1);
  }
  *(int8_t *)(lVar2 + 0x10) = 0;
  iStack_25c = (int)*(float *)(lVar1 + 0x11c24);
  iStack_260 = (int)*(float *)(lVar1 + 0x11c20);
  lVar2 = *(longlong *)(_DAT_180c86890 + 0x7ab8);
  if ((lVar2 == 0) ||
     (cVar9 = (**(code **)(**(longlong **)(lVar1 + 0x3580) + 0x78))(), cVar9 == '\0')) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  cVar13 = (char)param_1[0x10];
  if (cVar13 != cVar9) {
    *(char *)(param_1 + 0x10) = cVar9;
    (**(code **)(*param_1 + 0x70))(param_1);
    cVar13 = (char)param_1[0x10];
  }
  if (cVar13 == '\0') {
    plVar12 = (longlong *)CONCAT44(iStack_25c,iStack_260);
  }
  else if ((*(char *)(lVar2 + 0xd8) == '\0') || (*(int *)(_DAT_180c86920 + 0x540) + -1 < 0)) {
    plVar12 = (longlong *)CONCAT44(iStack_25c,iStack_260);
    plStack_250 = plVar12;
  }
  else {
    FUN_1802aa800(lVar2,&plStack_250);
    plVar12 = plStack_250;
  }
  plStack_268 = plVar12;
  uStack_258 = plVar12;
  if (*(int *)(lVar1 + 0x1bdc) == 0) {
    *(int *)(lVar1 + 0x3588) = (int)param_1[8];
    *(int32_t *)(lVar1 + 0x358c) = *(int32_t *)((longlong)param_1 + 0x44);
    *(int *)(lVar1 + 0x3590) = (int)*(float *)(param_1 + 9);
    *(int *)(lVar1 + 0x3594) = (int)*(float *)((longlong)param_1 + 0x4c);
    *(longlong *)(lVar1 + 0x3598) = param_1[0xb];
    *(longlong *)(lVar1 + 0x35a0) = param_1[0xc];
    *(longlong *)(lVar1 + 0x35a8) = param_1[0xd];
    *(longlong *)(lVar1 + 0x35b0) = param_1[0xe];
    *(longlong *)(lVar1 + 0x35b8) = param_1[10];
    uVar19 = *(uint64_t *)((longlong)param_1 + 0x24);
    *(uint64_t *)(lVar1 + 0x11c18) = *(uint64_t *)((longlong)param_1 + 0x1c);
    *(uint64_t *)(lVar1 + 0x11c20) = uVar19;
    *(uint64_t *)(lVar1 + 0x11c28) = *(uint64_t *)((longlong)param_1 + 0x2c);
    *(float *)(lVar1 + 0x11c20) = (float)(int)plVar12;
    *(float *)(lVar1 + 0x11c24) = (float)(int)((ulonglong)plVar12 >> 0x20);
  }
  else {
    uVar10 = *(uint *)(lVar1 + 0x1be0);
    uVar11 = *(uint *)(lVar1 + 0x1be4);
    *(uint *)(lVar1 + 0x3588) = uVar10;
    *(uint *)(lVar1 + 0x358c) = uVar11;
    *(uint *)(lVar1 + 0x3590) = uVar10;
    *(uint *)(lVar1 + 0x3594) = uVar11;
    *(float *)(lVar1 + 0x11c20) = (float)(int)uVar10;
    *(float *)(lVar1 + 0x11c24) = (float)(int)uVar11;
    uStack_278 = *(int32_t *)(lVar1 + 0x148);
    FUN_180286e40(lVar1 + 0x30);
    FUN_18024b8d0(lVar1);
    lVar2 = param_1[0xca];
    lVar16 = param_1[0xcb];
    bVar5 = true;
    if ((lVar2 == 0) || (*(ushort *)(lVar2 + 0x32c) != uVar10)) {
      bVar5 = false;
    }
    if ((lVar2 == 0) || (*(ushort *)(lVar2 + 0x32e) != uVar11)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((lVar16 == 0) || (*(ushort *)(lVar16 + 0x32c) != uVar10)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((lVar16 == 0) || (*(ushort *)(lVar16 + 0x32e) != uVar11)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (((((lVar2 == 0) || (lVar16 == 0)) || (!bVar5)) || ((!bVar6 || (!bVar7)))) || (!bVar8)) {
      do {
        plStack_1d0 = (longlong *)param_1[0xca];
        param_1[0xca] = 0;
        if (plStack_1d0 != (longlong *)0x0) {
          (**(code **)(*plStack_1d0 + 0x38))();
        }
        plStack_1c8 = (longlong *)param_1[0xcb];
        param_1[0xcb] = 0;
        if (plStack_1c8 != (longlong *)0x0) {
          (**(code **)(*plStack_1c8 + 0x38))();
        }
        *(float *)(lVar1 + 0x11c20) = (float)(int)uVar10;
        *(float *)(lVar1 + 0x11c24) = (float)(int)uVar11;
        uStack_210 = 1;
        uStack_20c = 1;
        uStack_204 = 0;
        uStack_1fc = 0x3f80000000000000;
        uStack_1f3 = 1;
        uStack_1f4 = 0;
        uStack_1e4 = 0;
        uStack_208 = 1;
        uStack_1e8 = *(int32_t *)(param_1[0xda] + 0xa0);
        puStack_198 = &UNK_1809fcc28;
        puStack_190 = auStack_180;
        auStack_180[0] = 0;
        uStack_188 = 0xe;
        uStack_218 = uVar10;
        uStack_214 = uVar11;
        strcpy_s(auStack_180,0x80,&UNK_180a19e38);
        plVar12 = (longlong *)FUN_1800b1230(_DAT_180c86930,&plStack_1b8,&puStack_198,&uStack_218);
        lVar2 = *plVar12;
        *plVar12 = 0;
        plStack_1c0 = (longlong *)param_1[0xca];
        param_1[0xca] = lVar2;
        if (plStack_1c0 != (longlong *)0x0) {
          (**(code **)(*plStack_1c0 + 0x38))();
        }
        if (plStack_1b8 != (longlong *)0x0) {
          (**(code **)(*plStack_1b8 + 0x38))();
        }
        puStack_198 = &UNK_18098bcb0;
        uStack_238 = 1;
        uStack_22c = 0x1018a;
        uStack_234 = 0x2f;
        uStack_228 = *(int32_t *)(param_1[0xda] + 0xa0);
        puStack_f8 = &UNK_1809fcc28;
        puStack_f0 = auStack_e0;
        auStack_e0[0] = 0;
        uStack_e8 = 0xe;
        uStack_240 = uVar10;
        uStack_23c = uVar11;
        uVar19 = strcpy_s(auStack_e0,0x80,&UNK_180a19e28);
        plVar12 = (longlong *)FUN_1800b1d80(uVar19,&plStack_1a8,&puStack_f8,&uStack_240);
        lVar2 = *plVar12;
        *plVar12 = 0;
        plStack_1b0 = (longlong *)param_1[0xcb];
        param_1[0xcb] = lVar2;
        if (plStack_1b0 != (longlong *)0x0) {
          (**(code **)(*plStack_1b0 + 0x38))();
        }
        if (plStack_1a8 != (longlong *)0x0) {
          (**(code **)(*plStack_1a8 + 0x38))();
        }
        puStack_f8 = &UNK_18098bcb0;
        uVar10 = (int)uVar10 / 2;
        uVar11 = (int)uVar11 / 2;
      } while ((param_1[0xca] == 0) ||
              (plVar12 = plStack_268, param_2 = plStack_248, param_1[0xcb] == 0));
    }
    *(uint64_t *)(lVar1 + 0x11c18) = 0;
    *(int32_t *)(lVar1 + 0x11c28) = 0;
    *(int32_t *)(lVar1 + 0x11c2c) = 0x3f800000;
    *(float *)(lVar1 + 0x11c20) = (float)(int)plVar12;
    *(float *)(lVar1 + 0x11c24) = (float)uStack_258._4_4_;
    plVar12 = (longlong *)param_1[0xca];
    if (plVar12 != (longlong *)0x0) {
      plStack_248 = plVar12;
      (**(code **)(*plVar12 + 0x28))(plVar12);
    }
    plStack_248 = *(longlong **)(lVar1 + 0x9690);
    *(longlong **)(lVar1 + 0x9690) = plVar12;
    if (plStack_248 != (longlong *)0x0) {
      (**(code **)(*plStack_248 + 0x38))();
    }
    plVar12 = (longlong *)param_1[0xcb];
    if (plVar12 != (longlong *)0x0) {
      plStack_268 = plVar12;
      (**(code **)(*plVar12 + 0x28))(plVar12);
    }
    plStack_268 = *(longlong **)(lVar1 + 0x96a8);
    *(longlong **)(lVar1 + 0x96a8) = plVar12;
    if (plStack_268 != (longlong *)0x0) {
      (**(code **)(*plStack_268 + 0x38))();
    }
    *(int8_t *)(lVar1 + 0x124c4) = 1;
    *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) & 0xfbffffff;
  }
  uVar15 = 0x26;
  if ((char)param_1[3] != '\0') {
    uVar15 = 0x1e;
  }
  *(int32_t *)(param_1[0xa3] + 0x9714) = uVar15;
  FUN_18019da10(param_1[0xda],lVar1);
  *(int *)(param_1 + 0x1c) = (int)param_1[0x1c] + 1;
  plVar12 = (longlong *)param_1[0xcd];
  if (plVar12 != (longlong *)0x0) {
    plStack_220 = plVar12;
    (**(code **)(*plVar12 + 0x28))(plVar12);
  }
  plStack_220 = *(longlong **)(lVar1 + 0x9688);
  *(longlong **)(lVar1 + 0x9688) = plVar12;
  if (plStack_220 != (longlong *)0x0) {
    (**(code **)(*plStack_220 + 0x38))();
  }
  if ((param_1[0xa3] != 0) && (lVar2 = param_1[0xa6], lVar2 != 0)) {
    if (*(char *)(_DAT_180c86890 + 0x1504) == '\0') {
      if ((char)param_1[0x21] == '\x01') {
        *(int8_t *)(param_1 + 0x21) = 0;
        *(int32_t *)(lVar2 + 0x94) = *(int32_t *)((longlong)param_1 + 0x104);
      }
    }
    else {
      if (((char)param_1[0x21] == '\0') &&
         (*(int8_t *)(param_1 + 0x21) = 1, *(char *)((longlong)param_1 + 0x109) == '\0')) {
        *(int32_t *)((longlong)param_1 + 0x104) = *(int32_t *)(lVar2 + 0x94);
      }
      *(uint *)(lVar2 + 0x94) = *(uint *)(lVar2 + 0x94) & 0x7fffd8f7;
    }
  }
  *(bool *)(*(longlong *)(lVar1 + 0x3580) + 0x10a) = *(int *)(lVar1 + 0x2480) != 0;
  if ((*(char *)(lVar1 + 0x9a31) == '\0') || (*(char *)(lVar1 + 0x9a32) == '\0')) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  *(int8_t *)(*(longlong *)(lVar1 + 0x3580) + 0x10b) = uVar14;
  if (*(char *)((longlong)param_1 + 0x821) == '\0') {
    lVar2 = param_1[0xda];
    puVar3 = *(uint64_t **)(lVar2 + 0x2670);
    if (puVar3 != (uint64_t *)0x0) {
      if ((void *)*puVar3 == &UNK_180a0c2b8) {
        cVar9 = *(char *)(puVar3 + 2) != '\0';
      }
      else {
        cVar9 = (**(code **)((void *)*puVar3 + 0x68))();
      }
      uVar19 = _DAT_180c82868;
      if (cVar9 == '\0') {
        plStack_220 = &uStack_258;
        uStack_258 = *(longlong **)(lVar2 + 0x2670);
        if (uStack_258 != (longlong *)0x0) {
          (**(code **)(*uStack_258 + 0x28))();
        }
        FUN_18005e6a0(uVar19,&uStack_258,0);
      }
    }
    FUN_18024cb50(param_2,lVar1);
    FUN_180246810(lVar1);
  }
  else {
    if ((char)param_1[0x104] != '\0') {
      uVar19 = FUN_180244ff0(lVar1);
      FUN_180056f10(param_1 + 0xcd,uVar19);
    }
    LOCK();
    plVar12 = param_2 + 0x2349;
    lVar2 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + 1;
    UNLOCK();
    param_2[(longlong)(int)lVar2 + 0x1349] = lVar1;
    uVar19 = *(uint64_t *)((longlong)param_2 + 0x9a3c);
    *(uint64_t *)(lVar1 + 0x9a34) = *(uint64_t *)((longlong)param_2 + 0x9a34);
    *(uint64_t *)(lVar1 + 0x9a3c) = uVar19;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_298);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180302c30(longlong param_1)
void FUN_180302c30(longlong param_1)

{
  int8_t auStack_a8 [72];
  uint64_t uStack_60;
  ulonglong uStack_30;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  *(int8_t *)(param_1 + 0x878) = 1;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x118,0,0x400);
}





// 函数: void FUN_1803033b0(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803033b0(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  if ((lVar1 != 0) && (param_2 != *(char *)(param_1 + 0x10c))) {
    if ((param_2 == '\0') || (*(char *)(lVar1 + 0x27b8) != '\0')) {
      plVar2 = *(longlong **)(lVar1 + 0x81f8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
        FUN_180198980(lVar1,plVar2,param_3,param_4,0x3b);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x38))();
        }
        plVar2 = *(longlong **)(lVar1 + 0x81f8);
        *(uint64_t *)(lVar1 + 0x81f8) = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x38))();
        }
      }
      *(int8_t *)(*(longlong *)(param_1 + 0x6d0) + 0x27b8) = 0;
    }
    else {
      *(int8_t *)(lVar1 + 0x27b8) = 1;
      FUN_1801b32d0(*(uint64_t *)(param_1 + 0x6d0));
    }
    *(char *)(param_1 + 0x10c) = param_2;
  }
  return;
}





// 函数: void FUN_1803034a0(longlong param_1)
void FUN_1803034a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    FUN_1801c0f40(*(longlong *)(param_1 + 0x6d0) + 0xe0);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6d0) + 0x398);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0xf9) != '\0')) {
      if (*(longlong *)(lVar1 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar1 + 0x1d8) = 0;
      LOCK();
      *(int8_t *)(lVar1 + 0xf9) = 0;
      UNLOCK();
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6d0) + 0x3a0);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0xf9) != '\0')) {
      if (*(longlong *)(lVar1 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar1 + 0x1d8) = 0;
      LOCK();
      *(int8_t *)(lVar1 + 0xf9) = 0;
      UNLOCK();
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x27e8);
    if (plVar2 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000180303576. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar2 + 0x1b0))(plVar2,0xffffffff);
      return;
    }
  }
  return;
}





// 函数: void FUN_1803034b9(longlong param_1)
void FUN_1803034b9(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  
  FUN_1801c0f40(param_1 + 0xe0);
  lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x6d0) + 0x398);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0xf9) != '\0')) {
    if (*(longlong *)(lVar1 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(lVar1 + 0x1d8) = 0;
    LOCK();
    *(int8_t *)(lVar1 + 0xf9) = 0;
    UNLOCK();
  }
  lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x6d0) + 0x3a0);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0xf9) != '\0')) {
    if (*(longlong *)(lVar1 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(lVar1 + 0x1d8) = 0;
    LOCK();
    *(int8_t *)(lVar1 + 0xf9) = 0;
    UNLOCK();
  }
  plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x6d0) + 0x27e8);
  if (plVar2 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000180303576. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar2 + 0x1b0))(plVar2,0xffffffff);
    return;
  }
  return;
}





// 函数: void FUN_180303569(longlong *param_1)
void FUN_180303569(longlong *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000180303576. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1b0))(param_1,0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180303590(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180303590(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  
  *param_1 = &UNK_180a19eb0;
  if ((_DAT_180c86890 != 0) && (*(int8_t **)(_DAT_180c86890 + 0x7ab8) != (int8_t *)0x0)) {
    **(int8_t **)(_DAT_180c86890 + 0x7ab8) = 1;
  }
  if (param_1[0xda] != 0) {
    FUN_1803048f0(param_1[0xda],param_1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_180095420(param_1 + 0xac);
  plVar1 = (longlong *)param_1[0xcb];
  param_1[0xcb] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0xca];
  param_1[0xca] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0xcc];
  param_1[0xcc] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  puVar2 = (uint64_t *)param_1[0xd9];
  if (puVar2 != (uint64_t *)0x0) {
    lVar3 = __RTCastToVoid(puVar2);
    (**(code **)*puVar2)(puVar2,0);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
  param_1[0x10b] = &UNK_180a3c3e0;
  if (param_1[0x10c] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x10c] = 0;
  *(int32_t *)(param_1 + 0x10e) = 0;
  param_1[0x10b] = &UNK_18098bcb0;
  param_1[0x106] = &UNK_180a3c3e0;
  if (param_1[0x107] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x107] = 0;
  *(int32_t *)(param_1 + 0x109) = 0;
  param_1[0x106] = &UNK_18098bcb0;
  if ((longlong *)param_1[0xda] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xda] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0xce,8,2,FUN_180045af0);
  if ((longlong *)param_1[0xcd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xcd] + 0x38))();
  }
  if ((longlong *)param_1[0xcc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xcc] + 0x38))();
  }
  if ((longlong *)param_1[0xcb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xcb] + 0x38))();
  }
  if ((longlong *)param_1[0xca] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xca] + 0x38))();
  }
  if ((longlong *)param_1[0xc9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc9] + 0x38))();
  }
  if ((longlong *)param_1[200] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[200] + 0x38))();
  }
  if ((longlong *)param_1[199] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[199] + 0x38))();
  }
  if ((longlong *)param_1[0xc6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc6] + 0x38))();
  }
  FUN_180095420(param_1 + 0xac);
  if ((longlong *)param_1[0xaf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xaf] + 0x38))();
  }
  if ((longlong *)param_1[0xae] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xae] + 0x38))();
  }
  if ((longlong *)param_1[0xab] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xab] + 0x38))();
  }
  if ((longlong *)param_1[0xaa] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xaa] + 0x38))();
  }
  if ((longlong *)param_1[0xa9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xa9] + 0x38))();
  }
  if ((longlong *)param_1[0xa8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xa8] + 0x38))();
  }
  if ((longlong *)param_1[0xa7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xa7] + 0x38))();
  }
  if ((longlong *)param_1[0xa6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xa6] + 0x38))();
  }
  *param_1 = &UNK_180a144f8;
  param_1[0x15] = &UNK_180a3c3e0;
  if (param_1[0x16] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x16] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  param_1[0x15] = &UNK_18098bcb0;
  param_1[0x11] = &UNK_180a3c3e0;
  if (param_1[0x12] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x12] = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  param_1[0x11] = &UNK_18098bcb0;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x38))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



