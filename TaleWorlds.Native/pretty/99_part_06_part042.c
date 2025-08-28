#include "TaleWorlds.Native.Split.h"

// 99_part_06_part042.c - 8 个函数

// 函数: void FUN_1803cf700(longlong param_1)
void FUN_1803cf700(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x280) == 0) {
    puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3,0xfffffffffffffffe);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 3;
    puVar1[4] = param_1;
    *(undefined8 **)(param_1 + 0x280) = puVar1;
  }
  return;
}



ulonglong FUN_1803cf770(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  uVar9 = 0;
  bVar1 = *(byte *)(param_1 + 0x2d);
  bVar11 = 0;
  uVar14 = 0;
  if (lVar4 != 0) {
    bVar2 = *(byte *)(lVar4 + 0x2b);
    puStack_70 = *(undefined4 **)(param_1 + 0x18);
    bVar11 = bVar2 & 1;
    puStack_68 = (undefined4 *)
                 (*(longlong *)(param_1 + 0x20) + (ulonglong)*(byte *)(param_1 + 0x2c) * 4);
    lStack_78 = lVar4;
    if ((char)bVar2 < '\0') {
      uVar14 = 0x20;
    }
    else {
      uVar14 = 0x10;
      if ((bVar2 & 2) != 0) {
        uVar14 = 0x40;
      }
    }
  }
  uVar3 = *(ushort *)(param_1 + 0x30);
  uVar15 = 0;
  lVar4 = *(longlong *)(param_1 + 0x20);
  uVar12 = 0;
  bVar5 = false;
  if (bVar1 != 0) {
    do {
      if (uVar15 != 0) {
        if (uVar12 < *(byte *)(lStack_78 + 0x29)) {
          puStack_70 = (undefined4 *)
                       ((longlong)puStack_70 +
                       (ulonglong)((*(byte *)(lStack_78 + 0x29) - uVar12) * uVar14));
        }
        lStack_78 = lStack_78 + 0x30;
      }
      uVar15 = uVar15 + 1;
      uVar12 = 0;
      bVar6 = bVar5;
      if (*(char *)(lStack_78 + 0x29) != '\0') {
        do {
          if (bVar5) {
            puStack_70 = (undefined4 *)((longlong)puStack_70 + (ulonglong)uVar14);
            puStack_68 = puStack_68 + 1;
          }
          lVar10 = uVar9 * 0x30;
          uVar12 = uVar12 + 1;
          bVar5 = true;
          *(undefined4 *)(lVar10 + param_2) = *puStack_70;
          *(undefined4 *)(lVar10 + 4 + param_2) = puStack_70[1];
          *(undefined4 *)(lVar10 + 8 + param_2) = puStack_70[2];
          *(undefined4 *)(lVar10 + 0xc + param_2) = puStack_70[3];
          *(undefined4 *)(lVar10 + 0x10 + param_2) = *(undefined4 *)(lStack_78 + 0x10);
          *(undefined4 *)(lVar10 + 0x14 + param_2) = *(undefined4 *)(lStack_78 + 0x14);
          *(undefined4 *)(lVar10 + 0x18 + param_2) = *(undefined4 *)(lStack_78 + 0x18);
          if ((uVar3 & 0x20) == 0) {
            *(undefined4 *)(lVar10 + 0x1c + param_2) = 0xffffffff;
            if (bVar11 == 0) goto LAB_1803cf8d1;
            uVar7 = *puStack_68;
          }
          else {
            if (bVar11 == 0) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = *puStack_68;
            }
            *(undefined4 *)(lVar10 + 0x1c + param_2) = uVar7;
LAB_1803cf8d1:
            uVar7 = 0xffffffff;
          }
          *(undefined4 *)(lVar10 + 0x2c + param_2) = uVar7;
          if ((uVar3 & 0x10) == 0) {
            fVar17 = 0.0;
            fVar18 = 0.0;
            fVar16 = 0.0;
          }
          else {
            fVar16 = *(float *)(lVar4 + uVar9 * 4);
            fVar17 = fVar16 * *(float *)(lVar10 + 0x18 + param_2);
            fVar18 = fVar16 * *(float *)(lVar10 + 0x14 + param_2);
            fVar16 = fVar16 * *(float *)(lVar10 + 0x10 + param_2);
          }
          uVar13 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar13;
          pfVar8 = (float *)(param_2 + 0x20 + lVar10);
          *pfVar8 = fVar16;
          pfVar8[1] = fVar18;
          pfVar8[2] = fVar17;
          if (uVar13 == 8) {
            return 8;
          }
          bVar6 = true;
        } while (uVar12 < *(byte *)(lStack_78 + 0x29));
      }
      bVar5 = bVar6;
    } while (uVar15 < bVar1);
  }
  return uVar9;
}



undefined8 *
FUN_1803cf970(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a23d70;
  *param_1 = &UNK_180a23da0;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 * FUN_1803cf9c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a23da0;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}






// 函数: void FUN_1803cfa00(undefined8 *param_1)
void FUN_1803cfa00(undefined8 *param_1)

{
  *param_1 = &UNK_180a23d70;
  *param_1 = &UNK_180a23da0;
  return;
}



undefined8 * FUN_1803cfa30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a23f80;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}






// 函数: void FUN_1803cfa80(undefined8 *param_1)
void FUN_1803cfa80(undefined8 *param_1)

{
  *param_1 = &UNK_180a24208;
  param_1[2] = 0;
  *param_1 = &UNK_180a24188;
  return;
}



undefined8 * FUN_1803cfac0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a24188;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}



undefined8 *
FUN_1803cfb00(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a24208;
  param_1[2] = 0;
  *param_1 = &UNK_180a24188;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1803cfb80(longlong param_1)
void FUN_1803cfb80(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x20) == (code *)&UNK_1803cfb60) {
                    // WARNING: Could not recover jumptable at 0x0001803cfbab. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*(longlong *)plVar1[2] + 0x80))();
      return;
    }
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}



undefined8 * FUN_1803cfbc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a24258;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



undefined8 * FUN_1803cfc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a242b0;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



undefined8 * FUN_1803cfc40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a242c8;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



undefined8 *
FUN_1803cfc90(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 0x12;
  strcpy_s(param_2[1],0x80,&UNK_180a24340,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803cfd10(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
void FUN_1803cfd10(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5,undefined4 param_6)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined1 auStack_288 [32];
  undefined1 uStack_268;
  undefined *puStack_258;
  undefined4 *puStack_250;
  undefined4 uStack_248;
  undefined2 uStack_244;
  undefined1 uStack_242;
  undefined1 uStack_241;
  undefined8 uStack_240;
  longlong *plStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined4 *puStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined4 *puStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  longlong *plStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined8 uStack_1b3;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  longlong *plStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined4 uStack_178;
  undefined1 auStack_170 [136];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_198 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_288;
  uStack_230 = CONCAT44(uStack_230._4_4_,param_2);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x24) = 0x19;
  uStack_244 = 0x18a;
  puStack_258 = (undefined *)CONCAT44(param_3,param_3);
  puStack_250 = (undefined4 *)0x1900000001;
  uStack_242 = *(undefined1 *)
                ((longlong)*(int *)(_DAT_180c86938 + 0x1d40) * 0xd0 + 0xcb +
                *(longlong *)(_DAT_180c86938 + 0x1d20));
  uStack_241 = 1;
  uStack_248 = 0x3f800000;
  uStack_240 = CONCAT44(uStack_240._4_4_,param_6);
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined4 *)0x0;
  uStack_1f8 = 0;
  uStack_1e8 = param_3;
  puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x13,0x13);
  *(undefined1 *)puVar4 = 0;
  puStack_200 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  *puVar4 = 0x616e7964;
  puVar4[1] = 0x5f63696d;
  puVar4[2] = 0x64617571;
  puVar4[3] = 0x6572745f;
  *(undefined2 *)(puVar4 + 4) = 0x5f65;
  *(undefined1 *)((longlong)puVar4 + 0x12) = 0;
  uStack_1f8 = 0x12;
  iVar3 = *(int *)(param_5 + 0x10);
  uStack_1f0._0_4_ = uVar2;
  if (0 < iVar3) {
    if ((iVar3 != -0x12) && (uVar2 < iVar3 + 0x13U)) {
      uStack_268 = 0x13;
      puVar4 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar4,iVar3 + 0x13U,0x10);
      puStack_200 = puVar4;
      uStack_1f0._0_4_ = FUN_18064e990(puVar4);
      iVar3 = *(int *)(param_5 + 0x10);
    }
                    // WARNING: Subroutine does not return
    memcpy((undefined1 *)((longlong)puVar4 + 0x12),*(undefined8 *)(param_5 + 8),
           (longlong)(iVar3 + 1));
  }
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined4 *)0x0;
  uStack_218 = 0;
  puVar5 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x12,0x13);
  *(undefined1 *)puVar5 = 0;
  puStack_220 = puVar5;
  uVar2 = FUN_18064e990(puVar5);
  *puVar5 = 0x74617473;
  puVar5[1] = 0x715f6369;
  puVar5[2] = 0x5f646175;
  puVar5[3] = 0x65657274;
  *(undefined2 *)(puVar5 + 4) = 0x5f;
  uStack_218 = 0x11;
  iVar3 = *(int *)(param_5 + 0x10);
  uStack_210._0_4_ = uVar2;
  if (0 < iVar3) {
    if ((iVar3 != -0x11) && (uVar2 < iVar3 + 0x12U)) {
      uStack_268 = 0x13;
      puVar5 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,iVar3 + 0x12U,0x10);
      puStack_220 = puVar5;
      uStack_210._0_4_ = FUN_18064e990(puVar5);
      iVar3 = *(int *)(param_5 + 0x10);
    }
                    // WARNING: Subroutine does not return
    memcpy((undefined1 *)((longlong)puVar5 + 0x11),*(undefined8 *)(param_5 + 8),
           (longlong)(iVar3 + 1));
  }
  puStack_188 = &UNK_1809fcc28;
  puStack_180 = auStack_170;
  auStack_170[0] = 0;
  uStack_178 = 0x12;
  puVar7 = (undefined4 *)&DAT_18098bc73;
  if (puVar4 != (undefined4 *)0x0) {
    puVar7 = puVar4;
  }
  uVar14 = strcpy_s(auStack_170,0x80,puVar7);
  puVar6 = (undefined8 *)FUN_1800b1d80(uVar14,&plStack_1e0,&puStack_188,&puStack_258);
  uVar1 = *puVar6;
  *puVar6 = 0;
  plStack_238 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  if (plStack_238 != (longlong *)0x0) {
    (**(code **)(*plStack_238 + 0x38))();
  }
  if (plStack_1e0 != (longlong *)0x0) {
    (**(code **)(*plStack_1e0 + 0x38))();
  }
  puStack_188 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x11;
  puVar7 = (undefined4 *)&DAT_18098bc73;
  if (puVar5 != (undefined4 *)0x0) {
    puVar7 = puVar5;
  }
  uVar14 = strcpy_s(auStack_d0,0x80,puVar7);
  puVar6 = (undefined8 *)FUN_1800b1d80(uVar14,&plStack_1a0,&puStack_e8,&puStack_258);
  uVar1 = *puVar6;
  *puVar6 = 0;
  plStack_238 = *(longlong **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  if (plStack_238 != (longlong *)0x0) {
    (**(code **)(*plStack_238 + 0x38))();
  }
  if (plStack_1a0 != (longlong *)0x0) {
    (**(code **)(*plStack_1a0 + 0x38))();
  }
  puStack_e8 = &UNK_18098bcb0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x357) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x357) = 1;
  puStack_258 = &UNK_180a3c3e0;
  uStack_240 = 0;
  puStack_250 = (undefined4 *)0x0;
  uStack_248 = 0;
  puVar7 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x15,0x13);
  *(undefined1 *)puVar7 = 0;
  puStack_250 = puVar7;
  uVar2 = FUN_18064e990(puVar7);
  *puVar7 = 0x706d6f63;
  puVar7[1] = 0x7469736f;
  puVar7[2] = 0x75715f65;
  puVar7[3] = 0x745f6461;
  puVar7[4] = 0x5f656572;
  *(undefined1 *)(puVar7 + 5) = 0;
  uStack_248 = 0x14;
  iVar3 = *(int *)(param_5 + 0x10);
  uStack_240._0_4_ = uVar2;
  if (0 < iVar3) {
    if ((iVar3 != -0x14) && (uVar2 < iVar3 + 0x15U)) {
      uStack_268 = 0x13;
      puVar7 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar7,iVar3 + 0x15U,0x10);
      puStack_250 = puVar7;
      uStack_240._0_4_ = FUN_18064e990(puVar7);
      iVar3 = *(int *)(param_5 + 0x10);
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar7 + 5,*(undefined8 *)(param_5 + 8),(longlong)(iVar3 + 1));
  }
  uStack_1d0 = 1;
  uStack_1cc = 1;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0x3f800000;
  uStack_1b3 = 1;
  uStack_1b4 = 0;
  uStack_1a4 = 0;
  uStack_1d8 = uStack_1e8;
  uStack_1d4 = uStack_1e8;
  uStack_1c8 = 0xc;
  uStack_1a8 = param_6;
  puVar6 = (undefined8 *)0x0;
  uVar2 = 0;
  puStack_188 = &UNK_1809fcc28;
  puStack_180 = auStack_170;
  auStack_170[0] = 0;
  uStack_178 = 0x14;
  puVar13 = (undefined4 *)&DAT_18098bc73;
  if (puVar7 != (undefined4 *)0x0) {
    puVar13 = puVar7;
  }
  strcpy_s(auStack_170,0x80,puVar13);
  puVar8 = (undefined8 *)FUN_1800b1230(_DAT_180c86930,&plStack_238,&puStack_188,&uStack_1d8);
  uVar1 = *puVar8;
  *puVar8 = 0;
  plStack_1e0 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  if (plStack_1e0 != (longlong *)0x0) {
    (**(code **)(*plStack_1e0 + 0x38))();
  }
  if (plStack_238 != (longlong *)0x0) {
    (**(code **)(*plStack_238 + 0x38))();
  }
  puStack_188 = &UNK_18098bcb0;
  iVar3 = 1;
  iVar12 = 1;
  puVar8 = puVar6;
  uVar10 = uVar2;
  if (1 < (int)uStack_230) {
    uVar2 = ((int)uStack_230 - 2U >> 1) + 1;
    uVar11 = (ulonglong)uVar2;
    uVar2 = uVar2 * 2;
    puVar9 = puVar6;
    do {
      uVar10 = (int)puVar9 + iVar3 * 4;
      puVar9 = (undefined8 *)(ulonglong)uVar10;
      iVar3 = iVar3 * 0x10;
      puVar8 = (undefined8 *)(ulonglong)(uint)((int)puVar8 + iVar3);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if ((int)uVar2 < (int)uStack_230) {
    iVar12 = iVar3 * 4 + 1;
  }
  iVar12 = iVar12 + (int)puVar8 + uVar10;
  *(int *)(param_1 + 0x20) = iVar12;
  puVar9 = puVar6;
  if (iVar12 != 0) {
    puVar9 = (undefined8 *)
             FUN_18062b420(_DAT_180c8ed18,(longlong)iVar12 * 0x30,
                           CONCAT71((int7)((ulonglong)puVar8 >> 8),0xc));
    puVar8 = puVar9 + 1;
    do {
      puVar8[-1] = 0;
      *(undefined4 *)puVar8 = 0;
      *(undefined2 *)((longlong)puVar8 + 0x25) = 0;
      uVar2 = (int)puVar6 + 1;
      puVar6 = (undefined8 *)(ulonglong)uVar2;
      puVar8 = puVar8 + 6;
    } while ((ulonglong)(longlong)(int)uVar2 < (ulonglong)(longlong)iVar12);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar9;
  uStack_230 = 0;
  *puVar9 = 0;
  *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x30) = 1;
  FUN_1803d0430(param_1,puVar9,0);
  puStack_258 = &UNK_180a3c3e0;
  if (puVar7 == (undefined4 *)0x0) {
    puStack_250 = (undefined4 *)0x0;
    uStack_240 = (ulonglong)uStack_240._4_4_ << 0x20;
    puStack_258 = &UNK_18098bcb0;
    puStack_228 = &UNK_180a3c3e0;
    if (puVar5 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
    puStack_220 = (undefined4 *)0x0;
    uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
    puStack_228 = &UNK_18098bcb0;
    puStack_208 = &UNK_180a3c3e0;
    if (puVar4 == (undefined4 *)0x0) {
      puStack_200 = (undefined4 *)0x0;
      uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
      puStack_208 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_288);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d0430(longlong param_1,float *param_2,int param_3)
void FUN_1803d0430(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  float fStack_58;
  float fStack_54;
  float afStack_50 [5];
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  ulonglong uStack_30;
  
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  param_3 = param_3 + 1;
  pfVar4 = param_2 + 7;
  if (param_3 == *(int *)(param_1 + 0x18)) {
    *pfVar4 = -NAN;
    param_2[8] = -NAN;
    param_2[9] = -NAN;
    param_2[10] = -NAN;
  }
  else {
    pfVar3 = afStack_50;
    afStack_50[0] = 0.0;
    afStack_50[1] = 0.0;
    lVar5 = 4;
    afStack_50[2] = 0.0;
    uStack_3c = 0;
    afStack_50[3] = 1.0 / (float)(uint)(1 << ((byte)param_3 & 0x1f));
    afStack_50[4] = afStack_50[3];
    fStack_38 = afStack_50[3];
    fStack_34 = afStack_50[3];
    do {
      fVar1 = *(float *)(param_1 + 0x30);
      fStack_54 = pfVar3[1];
      *(int *)(param_1 + 0x30) = (int)fVar1 + 1;
      *pfVar4 = fVar1;
      puVar2 = (undefined8 *)((longlong)(int)fVar1 * 0x30 + *(longlong *)(param_1 + 0x10));
      *(float *)((longlong)puVar2 + 0x14) = fVar1;
      *(float *)(puVar2 + 3) = param_2[5];
      fStack_54 = fStack_54 + param_2[1];
      fStack_58 = *param_2 + *pfVar3;
      *puVar2 = CONCAT44(fStack_54,fStack_58);
      FUN_1803d0430(param_1,puVar2,param_3);
      pfVar4 = pfVar4 + 1;
      pfVar3 = pfVar3 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_78);
}






// 函数: void FUN_1803d0486(byte param_1,float param_2)
void FUN_1803d0486(byte param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int in_EAX;
  undefined8 *puVar5;
  float *unaff_RBX;
  float *pfVar6;
  longlong unaff_RSI;
  undefined4 unaff_EDI;
  int *unaff_R14;
  longlong lVar7;
  undefined8 uStack0000000000000028;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  ulonglong in_stack_00000048;
  
  pfVar6 = (float *)&stack0x00000028;
  uStack0000000000000028 = 0;
  lVar7 = 4;
  uStack0000000000000030 = 0;
  uStack000000000000003c = 0;
  fStack0000000000000034 = param_2 / (float)(uint)(in_EAX << (param_1 & 0x1f));
  fStack0000000000000038 = fStack0000000000000034;
  fStack0000000000000040 = fStack0000000000000034;
  fStack0000000000000044 = fStack0000000000000034;
  do {
    iVar4 = *(int *)(unaff_RSI + 0x30);
    fVar1 = pfVar6[1];
    *(int *)(unaff_RSI + 0x30) = iVar4 + 1;
    *unaff_R14 = iVar4;
    puVar5 = (undefined8 *)((longlong)iVar4 * 0x30 + *(longlong *)(unaff_RSI + 0x10));
    *(int *)((longlong)puVar5 + 0x14) = iVar4;
    *(float *)(puVar5 + 3) = unaff_RBX[5];
    fVar2 = *unaff_RBX;
    fVar3 = *pfVar6;
    *puVar5 = CONCAT44(fVar1 + unaff_RBX[1],fVar2 + fVar3);
    FUN_1803d0430(fVar2 + fVar3,puVar5,unaff_EDI);
    unaff_R14 = unaff_R14 + 1;
    pfVar6 = pfVar6 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1803d054f(void)
void FUN_1803d054f(void)

{
  ulonglong in_stack_00000048;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}






