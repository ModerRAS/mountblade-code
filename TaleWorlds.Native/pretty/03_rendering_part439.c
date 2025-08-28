#include "TaleWorlds.Native.Split.h"

// 03_rendering_part439.c - 5 个函数

// 函数: void FUN_180509f20(longlong param_1,undefined8 *param_2,uint *param_3)
void FUN_180509f20(longlong param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  float *pfVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uStackX_8;
  undefined8 uStackX_18;
  float fStack_2d0;
  undefined8 uStack_2c8;
  ulonglong uStack_2c0;
  ulonglong uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_254;
  undefined8 uStack_23c;
  ulonglong uStack_218;
  ulonglong uStack_210;
  undefined8 uStack_1c0;
  
  uStack_280 = 0xfffffffffffffffe;
  uVar10 = FUN_1801b4cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x8d8) + 0x18));
  fStack_2d0 = *(float *)(param_2 + 1);
  uVar20 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar14 = *param_2;
  uStackX_8 = uVar14;
  cVar7 = FUN_18063e7e0(uVar10,param_2);
  if (cVar7 == '\0') {
    FUN_18063ee10(uVar10,param_2,&uStackX_8);
    uVar14 = uStackX_8;
  }
  if (-100.0 <= fStack_2d0) {
    if (2521.0 <= fStack_2d0) {
      fStack_2d0 = 2521.0;
    }
  }
  else {
    fStack_2d0 = -100.0;
  }
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_23c = 0;
  uStack_1c0 = 0;
  func_0x0001805aeed0(&uStack_278);
  lVar3 = *(longlong *)(param_1 + 0x6d8);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) {
    func_0x0001805350e0(lVar3,param_1 + 0x520,*(undefined4 *)(lVar3 + 0x8c0));
  }
  FUN_1805a3a20(param_1 + 0x28);
  FUN_1805af0d0(&uStack_278,param_1,1);
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar12 = *(longlong *)(param_1 + 0x8d8);
  *(undefined8 *)(lVar3 + 0xc) = uVar14;
  *(ulonglong *)(lVar3 + 0x14) = CONCAT44(uVar20,fStack_2d0);
  *(undefined1 *)(lVar3 + 0xd4) = 0;
  *(undefined4 *)(lVar3 + 0xb0) = 0;
  *(undefined4 *)(lVar3 + 0xb4) = 0;
  *(undefined4 *)(lVar3 + 0xb8) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0xbc) = 0x7f7fffff;
  uVar15 = 0;
  uVar13 = 0;
  *(undefined4 *)(lVar3 + 0xd0) = 0;
  *(undefined8 *)(lVar3 + 0xc0) = 0;
  *(undefined8 *)(lVar3 + 200) = 0;
  uVar14 = *(undefined8 *)(lVar3 + 0xc);
  uVar10 = *(undefined8 *)(lVar3 + 0x14);
  cVar7 = '\0';
  uVar11 = uVar15;
  do {
    if (99 < (int)uVar11) break;
    uVar18 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar18;
    if (uVar18 == 0x32) {
      *(undefined8 *)(lVar3 + 0xc) = uVar14;
      *(undefined8 *)(lVar3 + 0x14) = uVar10;
    }
    FUN_1801aa0f0(*(undefined8 *)(lVar12 + 0x18),lVar3 + 0xc,0,lVar3 + 0xa0,0x51b189,
                  (byte)((uint)uStack_254 >> 8) & 1);
    cVar8 = *(char *)(lVar3 + 0xd4);
    if (cVar8 == '\0') {
      uVar18 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748);
      uVar18 = uVar18 >> 0x11 ^ uVar18;
      uVar18 = uVar18 << 5 ^ uVar18;
      *(uint *)(param_1 + 0x748) = uVar18;
      *(float *)(lVar3 + 0xc) =
           ((float)(uVar18 - 1) * 2.3283064e-12 + *(float *)(lVar3 + 0xc)) - 0.005;
      uVar18 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748);
      uVar18 = uVar18 >> 0x11 ^ uVar18;
      uVar18 = uVar18 << 5 ^ uVar18;
      *(uint *)(param_1 + 0x748) = uVar18;
      *(float *)(lVar3 + 0x10) =
           ((float)(uVar18 - 1) * 2.3283064e-12 + *(float *)(lVar3 + 0x10)) - 0.005;
      cVar8 = *(char *)(lVar3 + 0xd4);
      cVar7 = cVar8;
    }
    else {
      cVar7 = *(char *)(lVar3 + 0xd4);
    }
  } while (cVar8 == '\0');
  if (((uStack_218 | uStack_210) >> 9 & 1) == 0) {
    *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)(lVar3 + 0xd0);
  }
  *(undefined8 *)(lVar3 + 0x68) = *(undefined8 *)(lVar3 + 0xb0);
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar3 + 0xf8) = *(undefined8 *)(lVar3 + 0xc);
  *(undefined8 *)(lVar3 + 0x100) = *(undefined8 *)(lVar3 + 0x14);
  *(undefined4 *)(lVar3 + 0x78) = *(undefined4 *)(lVar3 + 0x108);
  uVar20 = atan2f(*param_3 ^ 0x80000000,param_3[1]);
  *(undefined4 *)(lVar3 + 0x34) = uVar20;
  pfVar2 = (float *)(lVar3 + 0x178);
  *pfVar2 = *(float *)(lVar3 + 0xc);
  *(undefined4 *)(lVar3 + 0x17c) = *(undefined4 *)(lVar3 + 0x10);
  *(undefined4 *)(lVar3 + 0x180) = *(undefined4 *)(lVar3 + 0x14);
  *(undefined4 *)(lVar3 + 0x184) = *(undefined4 *)(lVar3 + 0x18);
  if (((cVar7 != '\0') && (*(longlong *)(lVar3 + 0xc0) != 0)) &&
     (*(longlong *)(*(longlong *)(lVar3 + 0xc0) + 0x10) != 0)) {
    *(undefined1 *)(param_1 + 0x418) = 0;
    uVar11 = uVar15;
    if (*(longlong *)(lVar3 + 0xc0) != 0) {
      uVar11 = *(ulonglong *)(*(longlong *)(lVar3 + 0xc0) + 0x10);
    }
    uVar14 = *(undefined8 *)(uVar11 + 0x78);
    *(undefined8 *)(param_1 + 0x41c) = *(undefined8 *)(uVar11 + 0x70);
    *(undefined8 *)(param_1 + 0x424) = uVar14;
    uVar14 = *(undefined8 *)(uVar11 + 0x88);
    *(undefined8 *)(param_1 + 0x42c) = *(undefined8 *)(uVar11 + 0x80);
    *(undefined8 *)(param_1 + 0x434) = uVar14;
    uVar14 = *(undefined8 *)(uVar11 + 0x98);
    *(undefined8 *)(param_1 + 0x43c) = *(undefined8 *)(uVar11 + 0x90);
    *(undefined8 *)(param_1 + 0x444) = uVar14;
    uVar14 = *(undefined8 *)(uVar11 + 0xa8);
    *(undefined8 *)(param_1 + 0x44c) = *(undefined8 *)(uVar11 + 0xa0);
    *(undefined8 *)(param_1 + 0x454) = uVar14;
    uVar14 = *(undefined8 *)(uVar11 + 0x78);
    *(undefined8 *)(param_1 + 0x45c) = *(undefined8 *)(uVar11 + 0x70);
    *(undefined8 *)(param_1 + 0x464) = uVar14;
    uVar14 = *(undefined8 *)(uVar11 + 0x88);
    *(undefined8 *)(param_1 + 0x46c) = *(undefined8 *)(uVar11 + 0x80);
    *(undefined8 *)(param_1 + 0x474) = uVar14;
    uVar20 = *(undefined4 *)(uVar11 + 0x94);
    uVar5 = *(undefined4 *)(uVar11 + 0x98);
    uVar6 = *(undefined4 *)(uVar11 + 0x9c);
    *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(uVar11 + 0x90);
    *(undefined4 *)(param_1 + 0x480) = uVar20;
    *(undefined4 *)(param_1 + 0x484) = uVar5;
    *(undefined4 *)(param_1 + 0x488) = uVar6;
    uVar14 = *(undefined8 *)(uVar11 + 0xa8);
    *(undefined8 *)(param_1 + 0x48c) = *(undefined8 *)(uVar11 + 0xa0);
    *(undefined8 *)(param_1 + 0x494) = uVar14;
  }
  if (((*(longlong *)(param_1 + 0x6d8) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x6d8) + 0x8be) != '\0')) &&
     ((*(uint *)(param_1 + 0x56c) & 0x800) != 0)) {
    lVar12 = *(longlong *)(param_1 + 0x728);
    *(undefined4 *)(lVar12 + 0x80) = 0;
    *(undefined4 *)(lVar12 + 0x84) = 0;
    *(undefined4 *)(lVar12 + 0x88) = 0;
    *(undefined4 *)(lVar12 + 0x8c) = 0;
    func_0x000180577960(*(undefined8 *)(param_1 + 0x590),*(longlong *)(param_1 + 0x20) + 0xc);
  }
  FUN_18051b660(param_1);
  if (*(int *)(param_1 + 0x6a0) < 0) {
    lVar12 = *(longlong *)(param_1 + 0x8d8);
    fVar21 = (*pfVar2 - *(float *)(lVar12 + 0x98d230)) * *(float *)(lVar12 + 0x98d244);
    if (fVar21 <= 0.0) {
      fVar21 = fVar21 - 0.9999999;
    }
    uVar18 = (uint)fVar21;
    fVar21 = *(float *)(lVar12 + 0x98d244) *
             (*(float *)(lVar3 + 0x17c) - *(float *)(lVar12 + 0x98d234));
    if (fVar21 <= 0.0) {
      fVar21 = fVar21 - 0.9999999;
    }
    iVar9 = (int)fVar21;
    uVar1 = *(int *)(lVar12 + 0x98d238) - 1;
    if ((-1 < (int)uVar18) && (uVar13 = uVar18, (int)uVar1 < (int)uVar18)) {
      uVar13 = uVar1;
    }
    iVar17 = *(int *)(lVar12 + 0x98d23c) + -1;
    if (iVar9 < 0) {
      iVar9 = 0;
      uStackX_18 = (ulonglong)uVar13;
    }
    else {
      if (iVar17 < iVar9) {
        iVar9 = iVar17;
      }
      uStackX_18 = CONCAT44(iVar9,uVar13);
    }
    plVar16 = (longlong *)
              ((longlong)(int)(iVar9 * *(int *)(lVar12 + 0x98d238) + uVar13) * 9 +
              *(longlong *)(lVar12 + 0x98d248));
    *(undefined8 *)(param_1 + 0x698) = *(undefined8 *)pfVar2;
    *(ulonglong *)(param_1 + 0x6a0) = uStackX_18;
    plVar4 = plVar16 + 1;
    do {
      do {
      } while ((char)*plVar4 != '\0');
      LOCK();
      bVar19 = (char)*plVar4 == '\0';
      if (bVar19) {
        *(undefined1 *)plVar4 = 1;
      }
      UNLOCK();
    } while (!bVar19);
    *(longlong *)(param_1 + 0x6a8) = *plVar16;
    *plVar16 = param_1 + 0x690;
    *(undefined1 *)plVar4 = 0;
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x8d8) + 0x98d250);
    (**(code **)(*plVar4 + 8))(plVar4,param_1,pfVar2);
  }
  else {
    FUN_180531590(*(longlong *)(param_1 + 0x8d8) + 0x98d230,param_1 + 0x690,pfVar2);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x8d8) + 0x98d250);
    (**(code **)(*plVar4 + 0x10))(plVar4,param_1,pfVar2);
  }
  *(undefined8 *)(param_1 + 0x4c4) = 0;
  *(undefined8 *)(param_1 + 0x4cc) = 0;
  *(undefined8 *)(param_1 + 0x49c) = *(undefined8 *)param_3;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  uVar20 = atan2f(*param_3 ^ 0x80000000,param_3[1]);
  *(undefined4 *)(param_1 + 0x4ac) = uVar20;
  *(undefined1 *)(param_1 + 0x4d4) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)(param_1 + 0x4c0) = 0xffffffff;
  FUN_180524d80(param_1);
  if ((*(int *)(param_1 + 0x570) == 1) && (lVar3 = *(longlong *)(param_1 + 0x6e0), lVar3 != 0)) {
    uVar11 = *(ulonglong *)(param_1 + 0x9d8);
    lVar12 = *(longlong *)(param_1 + 0x20);
    if ((uVar11 == 0) ||
       (cVar7 = FUN_18038d0a0(uVar11,lVar12 + 0xc), uStack_2c0 = uVar11, cVar7 == '\0')) {
      uStack_2c0 = uVar15;
    }
    uStack_2c8 = *(undefined8 *)(*(longlong *)(param_1 + 0x8d8) + 0x18);
    uStack_2b0 = *(undefined4 *)(lVar12 + 0xc);
    uStack_2ac = *(undefined4 *)(lVar12 + 0x10);
    uStack_290 = *(undefined8 *)(lVar12 + 0xc);
    uStack_2a8 = *(undefined4 *)(lVar12 + 0x14);
    uStack_2a4 = *(undefined4 *)(lVar12 + 0x18);
    uStack_2a0 = *(undefined4 *)(lVar12 + 0xb0);
    uStack_29c = *(undefined4 *)(lVar12 + 0xb4);
    uStack_298 = *(undefined4 *)(lVar12 + 0xb8);
    uStack_294 = *(undefined4 *)(lVar12 + 0xbc);
    uStack_288 = 3;
    uStack_2b8 = uVar11;
    func_0x0001805e51e0(lVar3 + 0x178,&uStack_2c8);
  }
  lVar3 = *(longlong *)(param_1 + 0x6d8);
  if ((((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) && (*(longlong *)(lVar3 + 0x8a8) != 0))
     && ((lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x260), lVar3 != 0 &&
         (lVar12 = *(longlong *)(lVar3 + 0x1a8), uVar11 = uVar15,
         *(longlong *)(lVar3 + 0x1b0) - lVar12 >> 3 != 0)))) {
    do {
      iVar9 = (**(code **)(**(longlong **)(uVar11 + lVar12) + 0x98))();
      if (iVar9 == 3) {
        *(undefined1 *)(*(longlong *)(*(longlong *)(lVar3 + 0x1a8) + uVar11) + 0x44) = 1;
      }
      uVar13 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar13;
      lVar12 = *(longlong *)(lVar3 + 0x1a8);
      uVar11 = uVar11 + 8;
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)(*(longlong *)(lVar3 + 0x1b0) - lVar12 >> 3));
  }
  return;
}



float * FUN_18050a660(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_58 [16];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  FUN_18050a770(param_1,auStack_58);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8);
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x8c0);
  fVar6 = ABS(*(float *)(*(longlong *)(param_1 + 0x590) + 0x2590));
  param_2[3] = 3.4028235e+38;
  fStack_28 = fStack_28 - fStack_48 * 0.45 * fVar6 * fVar1;
  fStack_24 = fStack_24 - fStack_44 * 0.45 * fVar6 * fVar1;
  fVar2 = *(float *)(lVar5 + 0x70);
  fVar3 = *(float *)(lVar5 + 0x80);
  fVar4 = *(float *)(lVar5 + 0xa0);
  param_2[1] = fStack_24 * *(float *)(lVar5 + 0x84) + fStack_28 * *(float *)(lVar5 + 0x74) +
               *(float *)(lVar5 + 0xa4);
  *param_2 = fStack_24 * fVar3 + fStack_28 * fVar2 + fVar4;
  param_2[2] = (fStack_20 - fStack_40 * 0.45 * fVar6 * fVar1) * *(float *)(lVar5 + 0x98) +
               *(float *)(lVar5 + 0xa8);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050a770(longlong param_1,undefined8 *param_2)
void FUN_18050a770(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  uint *puVar9;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [16];
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  puVar9 = (uint *)((longlong)
                    *(char *)(*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x260) +
                               0x210) + 0xde) * 0x100 +
                   *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18));
  do {
    LOCK();
    uVar1 = *puVar9;
    *puVar9 = *puVar9 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStack_a8 = puVar9[1];
  uStack_a4 = puVar9[2];
  uStack_a0 = puVar9[3];
  uStack_9c = puVar9[4];
  fVar5 = (float)puVar9[5];
  fVar6 = (float)puVar9[6];
  fVar7 = (float)puVar9[7];
  uStack_8c = puVar9[8];
  *puVar9 = 0;
  fStack_98 = fVar5;
  fStack_94 = fVar6;
  fStack_90 = fVar7;
  uStack_58 = uStack_a8;
  uStack_54 = uStack_a4;
  uStack_50 = uStack_a0;
  uStack_4c = uStack_9c;
  fStack_48 = fVar5;
  fStack_44 = fVar6;
  fStack_40 = fVar7;
  uStack_3c = uStack_8c;
  pfVar8 = (float *)FUN_1801c0fb0(&uStack_a8,auStack_b8,param_1 + 0x8a0);
  fVar2 = *pfVar8;
  fVar3 = pfVar8[1];
  fVar4 = pfVar8[2];
  uStack_8c = 0x7f7fffff;
  fStack_98 = fVar5 + fVar2;
  fStack_94 = fVar6 + fVar3;
  fStack_90 = fVar7 + fVar4;
  FUN_18063b5f0(&uStack_88,&uStack_a8);
  *param_2 = uStack_88;
  param_2[1] = uStack_80;
  *(undefined4 *)(param_2 + 2) = uStack_78;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_74;
  *(undefined4 *)(param_2 + 3) = uStack_70;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_6c;
  *(undefined4 *)(param_2 + 4) = uStack_68;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_64;
  *(undefined4 *)(param_2 + 5) = uStack_60;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_5c;
  *(float *)(param_2 + 6) = fVar5 + fVar2;
  *(float *)((longlong)param_2 + 0x34) = fVar6 + fVar3;
  *(float *)(param_2 + 7) = fVar7 + fVar4;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050a8c0(longlong param_1)
void FUN_18050a8c0(longlong param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  uint *puVar13;
  longlong lVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_208 [32];
  float fStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined4 uStack_1d4;
  float fStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  uint uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  ulonglong uStack_b8;
  
  uStack_b8 = _DAT_180bf00a8 ^ (ulonglong)auStack_208;
  if ((*(uint *)(param_1 + 0x56c) & 0x800) == 0) {
    lVar14 = *(longlong *)(param_1 + 0x6d8);
    fStack_1e8 = *(float *)(lVar14 + 0x8c0) * *(float *)(param_1 + 0x8c0);
  }
  else {
    if (*(int *)(param_1 + 0x564) < 0) {
      lVar10 = *(longlong *)(param_1 + 0x590);
      lVar14 = *(longlong *)(param_1 + 0x6d8);
      if ((*(byte *)(lVar10 + 0x3424) & 0x10) == 0) {
        fStack_1e8 = *(float *)(lVar14 + 0x8c0) * *(float *)(param_1 + 0x8c0);
      }
      else {
        fStack_1e8 = *(float *)(lVar14 + 0x8c0) * *(float *)(param_1 + 0x8c4);
      }
    }
    else {
      lVar12 = (longlong)*(int *)(param_1 + 0x564) * 0xa60;
      lVar6 = *(longlong *)(lVar12 + 0x3778 + *(longlong *)(param_1 + 0x8d8));
      if ((lVar6 == 0) || (*(char *)(lVar6 + 0x8be) == '\0')) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      lVar14 = *(longlong *)(param_1 + 0x6d8);
      if (bVar9) {
        lVar10 = *(longlong *)(param_1 + 0x590);
        fStack_1e8 = *(float *)(lVar12 + 0x396c + *(longlong *)(param_1 + 0x8d8)) *
                     *(float *)(lVar6 + 0x8c0) +
                     *(float *)(lVar14 + 0x8c0) * *(float *)(param_1 + 0x8c8);
      }
      else {
        lVar10 = *(longlong *)(param_1 + 0x590);
        fStack_1e8 = *(float *)(lVar14 + 0x8c0) * *(float *)(param_1 + 0x8c0);
      }
    }
    if (-1 < *(char *)(lVar10 + 0x2601)) {
      puVar13 = (uint *)((longlong)*(char *)(lVar10 + 0x2601) * 0x100 +
                        *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18));
      do {
        LOCK();
        uVar1 = *puVar13;
        *puVar13 = *puVar13 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      uStack_158 = *(undefined8 *)(puVar13 + 1);
      uStack_150 = *(undefined8 *)(puVar13 + 3);
      fStack_148 = (float)puVar13[5];
      fStack_144 = (float)puVar13[6];
      fStack_140 = (float)puVar13[7];
      uStack_13c = puVar13[8];
      *puVar13 = 0;
      lVar14 = *(longlong *)(param_1 + 0x6d8);
      lVar10 = *(longlong *)(lVar14 + 0x8a8);
      uStack_1ac = 0x7f7fffff;
      fStack_1b8 = fStack_144 * *(float *)(lVar10 + 0x80) + fStack_148 * *(float *)(lVar10 + 0x70) +
                   *(float *)(lVar10 + 0xa0);
      fStack_1b0 = fStack_140 * *(float *)(lVar10 + 0x98) + *(float *)(lVar10 + 0xa8);
      fStack_1b4 = fStack_148 * *(float *)(lVar10 + 0x74) + fStack_144 * *(float *)(lVar10 + 0x84) +
                   *(float *)(lVar10 + 0xa4);
      uStack_118 = uStack_158;
      uStack_110 = uStack_150;
      fStack_108 = fStack_148;
      fStack_104 = fStack_144;
      fStack_100 = fStack_140;
      uStack_fc = uStack_13c;
    }
  }
  cVar5 = *(char *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar14 + 0x8a8) + 0x260) + 0x210) +
                   0xe1);
  if (cVar5 < '\0') {
    fStack_1a8 = NAN;
    fStack_1a4 = NAN;
    fStack_1a0 = NAN;
    uStack_19c = 0x7fc00000;
    uStack_198 = 0xffc00000;
    uStack_190 = 0;
  }
  else {
    puVar13 = (uint *)((longlong)cVar5 * 0x100 +
                      *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18));
    do {
      LOCK();
      uVar1 = *puVar13;
      *puVar13 = *puVar13 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack_138 = *(undefined8 *)(puVar13 + 1);
    uStack_130 = *(undefined8 *)(puVar13 + 3);
    fStack_128 = (float)puVar13[5];
    fStack_124 = (float)puVar13[6];
    fStack_120 = (float)puVar13[7];
    uStack_11c = puVar13[8];
    *puVar13 = 0;
    lVar14 = *(longlong *)(param_1 + 0x6d8);
    lVar10 = *(longlong *)(lVar14 + 0x8a8);
    fStack_1e0 = fStack_124 * *(float *)(lVar10 + 0x80) + fStack_128 * *(float *)(lVar10 + 0x70) +
                 *(float *)(lVar10 + 0xa0);
    fStack_1dc = fStack_128 * *(float *)(lVar10 + 0x74) + fStack_124 * *(float *)(lVar10 + 0x84) +
                 *(float *)(lVar10 + 0xa4);
    fStack_1d8 = fStack_120 * *(float *)(lVar10 + 0x98) + *(float *)(lVar10 + 0xa8);
    uStack_198 = CONCAT44(fStack_120,fStack_120 * *(float *)(lVar14 + 0x8c0));
    uStack_190 = CONCAT44(fStack_120,fStack_120);
    uStack_19c = 0x7f7fffff;
    uStack_1d4 = 0x7f7fffff;
    fStack_1a8 = fStack_1e0;
    fStack_1a4 = fStack_1dc;
    fStack_1a0 = fStack_1d8;
    uStack_f8 = uStack_138;
    uStack_f0 = uStack_130;
    fStack_e8 = fStack_128;
    fStack_e4 = fStack_124;
    fStack_e0 = fStack_120;
    uStack_dc = uStack_11c;
  }
  uVar16 = 0x7fc00000;
  fVar21 = NAN;
  fVar22 = NAN;
  fVar15 = NAN;
  cVar5 = *(char *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar14 + 0x8a8) + 0x260) + 0x210) +
                   0xde);
  fVar17 = fVar15;
  fVar18 = fVar22;
  fVar19 = fVar21;
  uVar20 = uVar16;
  if (-1 < cVar5) {
    puVar13 = (uint *)((longlong)cVar5 * 0x100 +
                      *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18));
    do {
      LOCK();
      uVar1 = *puVar13;
      *puVar13 = *puVar13 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    fStack_1c8 = (float)puVar13[5];
    fVar7 = (float)puVar13[6];
    fVar8 = (float)puVar13[7];
    uStack_1bc = puVar13[8];
    uStack_188 = *(undefined8 *)(puVar13 + 1);
    uStack_180 = *(undefined8 *)(puVar13 + 3);
    *puVar13 = 0;
    lVar14 = *(longlong *)(param_1 + 0x6d8);
    lVar10 = *(longlong *)(lVar14 + 0x8a8);
    uStack_1d4 = 0x7f7fffff;
    fVar17 = *(float *)(lVar10 + 0x70);
    fVar18 = *(float *)(lVar10 + 0x74);
    fVar19 = *(float *)(lVar10 + 0x98);
    fVar2 = *(float *)(lVar10 + 0xa0);
    fVar3 = *(float *)(lVar10 + 0xa4);
    fVar4 = *(float *)(lVar10 + 0xa8);
    fStack_1d0 = fVar17 * fStack_1c8 + *(float *)(lVar10 + 0x80) * fVar7 + fVar2;
    fVar21 = fVar19 * fVar8 + fVar4;
    fVar22 = fVar18 * fStack_1c8 + *(float *)(lVar10 + 0x84) * fVar7 + fVar3;
    fStack_1c4 = fVar7;
    fStack_1c0 = fVar8;
    fStack_178 = fStack_1c8;
    fStack_174 = fVar7;
    fStack_170 = fVar8;
    uStack_16c = uStack_1bc;
    uStack_d8 = uStack_188;
    uStack_d0 = uStack_180;
    fStack_c8 = fStack_1c8;
    fStack_c4 = fVar7;
    fStack_c0 = fVar8;
    uStack_bc = uStack_1bc;
    pfVar11 = (float *)FUN_1801c0fb0(&uStack_188,auStack_168,lVar14 + 0x920);
    uStack_1bc = 0x7f7fffff;
    fVar15 = fStack_1d0;
    uVar16 = uStack_1d4;
    fVar17 = *(float *)(lVar10 + 0x80) * (fVar7 + pfVar11[1]) + fVar17 * (fStack_1c8 + *pfVar11) +
             fVar2;
    fVar18 = *(float *)(lVar10 + 0x84) * (fVar7 + pfVar11[1]) + fVar18 * (fStack_1c8 + *pfVar11) +
             fVar3;
    fVar19 = (fVar8 + pfVar11[2]) * fVar19 + fVar4;
    uVar20 = 0x7f7fffff;
  }
  *(ulonglong *)(lVar14 + 0x8c4) = CONCAT44(fStack_1a4,fStack_1a8);
  *(ulonglong *)(lVar14 + 0x8cc) = CONCAT44(uStack_19c,fStack_1a0);
  *(undefined4 *)(lVar14 + 0x908) = (undefined4)uStack_198;
  *(float *)(lVar14 + 0x8f4) = fStack_1b8;
  *(float *)(lVar14 + 0x8f8) = fStack_1b4;
  *(float *)(lVar14 + 0x8fc) = fStack_1b0;
  *(undefined4 *)(lVar14 + 0x900) = uStack_1ac;
  *(float *)(lVar14 + 0x904) = fStack_1e8;
  *(float *)(lVar14 + 0x8d4) = fVar15;
  *(float *)(lVar14 + 0x8d8) = fVar22;
  *(float *)(lVar14 + 0x8dc) = fVar21;
  *(undefined4 *)(lVar14 + 0x8e0) = uVar16;
  *(float *)(lVar14 + 0x8e4) = fVar17;
  *(float *)(lVar14 + 0x8e8) = fVar18;
  *(float *)(lVar14 + 0x8ec) = fVar19;
  *(undefined4 *)(lVar14 + 0x8f0) = uVar20;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)auStack_208);
}





// 函数: void FUN_18050abe6(char param_1,longlong param_2)
void FUN_18050abe6(char param_1,longlong param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong in_RAX;
  float *pfVar18;
  longlong unaff_RBP;
  uint *puVar19;
  longlong lVar20;
  longlong lVar21;
  uint in_R11D;
  float fVar22;
  undefined4 uStackX_20;
  undefined4 uStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  uint uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  
  puVar19 = (uint *)((longlong)param_1 * 0x100 + *(longlong *)(in_RAX + 0x18));
  do {
    LOCK();
    uVar1 = *puVar19;
    *puVar19 = *puVar19 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  fStack0000000000000040 = (float)puVar19[5];
  fVar14 = (float)puVar19[6];
  fVar15 = (float)puVar19[7];
  uStack000000000000004c = puVar19[8];
  uVar16 = *(undefined8 *)(puVar19 + 1);
  uVar17 = *(undefined8 *)(puVar19 + 3);
  *(undefined8 *)(unaff_RBP + 0x30) = uVar16;
  *(undefined8 *)(unaff_RBP + 0x38) = uVar17;
  *(float *)(unaff_RBP + 0x40) = fStack0000000000000040;
  *(float *)(unaff_RBP + 0x44) = fVar14;
  *(float *)(unaff_RBP + 0x48) = fVar15;
  *(uint *)(unaff_RBP + 0x4c) = uStack000000000000004c;
  *puVar19 = in_R11D;
  lVar21 = *(longlong *)(param_2 + 0x6d8);
  *(undefined8 *)(unaff_RBP + -0x80) = uVar16;
  *(undefined8 *)(unaff_RBP + -0x78) = uVar17;
  lVar20 = *(longlong *)(lVar21 + 0x8a8);
  *(float *)(unaff_RBP + -0x70) = fStack0000000000000040;
  *(float *)(unaff_RBP + -0x6c) = fVar14;
  *(float *)(unaff_RBP + -0x68) = fVar15;
  *(uint *)(unaff_RBP + -100) = uStack000000000000004c;
  uStack0000000000000034 = 0x7f7fffff;
  fVar2 = *(float *)(lVar20 + 0x70);
  fVar3 = *(float *)(lVar20 + 0x74);
  fVar4 = *(float *)(lVar20 + 0x98);
  fVar5 = *(float *)(lVar20 + 0xa0);
  fVar6 = *(float *)(lVar20 + 0xa4);
  fVar7 = *(float *)(lVar20 + 0xa8);
  fVar22 = fVar3 * fStack0000000000000040;
  fVar8 = *(float *)(lVar20 + 0x84);
  fStack0000000000000038 =
       fVar2 * fStack0000000000000040 + *(float *)(lVar20 + 0x80) * fVar14 + fVar5;
  fStack0000000000000044 = fVar14;
  fStack0000000000000048 = fVar15;
  pfVar18 = (float *)FUN_1801c0fb0(unaff_RBP + -0x80,unaff_RBP + -0x60,lVar21 + 0x920);
  uStack000000000000004c = 0x7f7fffff;
  fVar9 = *(float *)(lVar20 + 0x80);
  fVar10 = *pfVar18;
  fVar11 = pfVar18[1];
  fVar12 = pfVar18[2];
  fVar13 = *(float *)(lVar20 + 0x84);
  *(undefined8 *)(lVar21 + 0x8c4) = in_stack_00000060;
  *(undefined8 *)(lVar21 + 0x8cc) = in_stack_00000068;
  *(undefined4 *)(lVar21 + 0x908) = in_stack_00000070;
  *(undefined4 *)(lVar21 + 0x8f4) = uStack0000000000000050;
  *(undefined4 *)(lVar21 + 0x8f8) = uStack0000000000000054;
  *(undefined4 *)(lVar21 + 0x8fc) = uStack0000000000000058;
  *(undefined4 *)(lVar21 + 0x900) = uStack000000000000005c;
  *(undefined4 *)(lVar21 + 0x904) = uStackX_20;
  *(float *)(lVar21 + 0x8d4) = fStack0000000000000038;
  *(float *)(lVar21 + 0x8d8) = fVar22 + fVar8 * fVar14 + fVar6;
  *(float *)(lVar21 + 0x8dc) = fVar4 * fVar15 + fVar7;
  *(undefined4 *)(lVar21 + 0x8e0) = uStack0000000000000034;
  *(float *)(lVar21 + 0x8e4) =
       fVar9 * (fVar14 + fVar11) + fVar2 * (fStack0000000000000040 + fVar10) + fVar5;
  *(float *)(lVar21 + 0x8e8) =
       fVar13 * (fVar14 + fVar11) + fVar3 * (fStack0000000000000040 + fVar10) + fVar6;
  *(float *)(lVar21 + 0x8ec) = (fVar15 + fVar12) * fVar4 + fVar7;
  *(undefined4 *)(lVar21 + 0x8f0) = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18050ae38(void)
void FUN_18050ae38(void)

{
  longlong unaff_RBP;
  longlong in_R10;
  undefined8 in_XMM3_Qa;
  undefined4 uVar1;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined4 uStackX_20;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  
  uVar1 = (undefined4)((ulonglong)in_XMM3_Qa >> 0x20);
  *(undefined8 *)(in_R10 + 0x8c4) = in_stack_00000060;
  *(undefined8 *)(in_R10 + 0x8cc) = in_stack_00000068;
  *(undefined4 *)(in_R10 + 0x908) = in_stack_00000070;
  *(undefined4 *)(in_R10 + 0x8f4) = uStack0000000000000050;
  *(undefined4 *)(in_R10 + 0x8f8) = uStack0000000000000054;
  *(undefined4 *)(in_R10 + 0x8fc) = uStack0000000000000058;
  *(undefined4 *)(in_R10 + 0x900) = uStack000000000000005c;
  *(undefined4 *)(in_R10 + 0x904) = uStackX_20;
  *(int *)(in_R10 + 0x8d4) = (int)in_XMM3_Qa;
  *(undefined4 *)(in_R10 + 0x8d8) = uVar1;
  *(undefined4 *)(in_R10 + 0x8dc) = in_XMM3_Dc;
  *(undefined4 *)(in_R10 + 0x8e0) = in_XMM3_Dd;
  *(int *)(in_R10 + 0x8e4) = (int)in_XMM3_Qa;
  *(undefined4 *)(in_R10 + 0x8e8) = uVar1;
  *(undefined4 *)(in_R10 + 0x8ec) = in_XMM3_Dc;
  *(undefined4 *)(in_R10 + 0x8f0) = in_XMM3_Dd;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
}





