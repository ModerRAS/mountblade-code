#include "TaleWorlds.Native.Split.h"

// 99_part_09_part028_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805cabae(void)
void FUN_1805cabae(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0001805cb527)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_1805cac10(ulonglong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float extraout_XMM0_Da;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStackX_8;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [72];
  undefined8 uStack_a0;
  undefined8 uStack_70;
  
  uVar15 = (uint)param_1[2];
  if ((uVar15 & 0x20) == 0) {
    uVar15 = uVar15 | 0x20;
    uVar10 = *(ulonglong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
    param_1[0x15] = uVar10;
    *(uint *)(param_1 + 2) = uVar15;
  }
  else {
    uVar10 = param_1[0x15];
  }
  if (uVar10 == 0) {
LAB_1805cae3d:
    FUN_1805ce8c0(param_1);
    iVar5 = *(int *)((longlong)param_1 + 0x178c);
    if ((iVar5 == 0) || (iVar5 == 1)) {
      FUN_1805ccf90(param_1);
      iVar5 = *(int *)((longlong)param_1 + 0x178c);
    }
    if (iVar5 == 6) {
      piVar12 = (int *)FUN_1805ce220(param_1);
    }
    else if (iVar5 == 7) {
      piVar12 = (int *)FUN_1805cefa0(param_1);
    }
    else if (iVar5 == 8) {
      piVar12 = (int *)FUN_1805cfd80(param_1);
    }
    else if (iVar5 == 9) {
      piVar12 = (int *)FUN_1805d0390(param_1);
    }
    else if ((iVar5 != 10) || (piVar12 = (int *)*param_1, piVar12[0xad] == 0)) {
      piVar12 = (int *)func_0x0001805cef70(param_1);
    }
    if ((*(int *)((longlong)param_1 + 0x178c) == 0) &&
       (piVar12 = (int *)*param_1, piVar12[0x7f] - 1U < 2)) {
      uVar15 = *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
      piVar12 = (int *)(ulonglong)uVar15;
      *(uint *)((longlong)param_1 + 0x158c) = uVar15;
    }
                    // WARNING: Read-only address (ram,0x000180a401f0) is written
    return piVar12;
  }
  if ((uVar15 & 0x20) == 0) {
    uVar15 = uVar15 | 0x20;
    param_1[0x15] = *(ulonglong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
    *(uint *)(param_1 + 2) = uVar15;
    uVar10 = param_1[0x15];
  }
  if ((*(int *)(uVar10 + 0x30) < 1) ||
     (((*(uint *)((longlong)*(int *)(uVar10 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(uVar10 + 0xd0)) >>
        9 & 1) != 0 && (*(short *)(uVar10 + 8) < 1)))) goto LAB_1805cae3d;
  if ((uVar15 & 0x20) == 0) {
    param_1[0x15] = *(ulonglong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
    *(uint *)(param_1 + 2) = uVar15 | 0x20;
    uVar10 = param_1[0x15];
  }
  if ((*(byte *)((longlong)*(int *)(uVar10 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(uVar10 + 0xd0)) >>
       1 & 1) == 0) goto LAB_1805cae3d;
  iVar5 = (int)param_1[0x295];
  bVar3 = false;
  if (iVar5 == 0) {
    if ((*(uint *)((longlong)param_1 + 0x1484) >> 3 & 1) == 0) {
LAB_1805cad41:
      if (*(int *)((longlong)param_1 + 0x178c) == 0) {
        FUN_1805cb7f0();
        bVar3 = true;
      }
    }
  }
  else if (((iVar5 - 2U & 0xfffffff9) == 0) && (iVar5 != 8)) goto LAB_1805cad41;
  uVar15 = *(uint *)((longlong)param_1 + 0x178c);
  if (uVar15 == 6) {
    fVar23 = 1.0;
    if (((((int)param_1[0x2f1] != 0) &&
         (0.0 <= (float)(longlong)
                        (*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) -
                        param_1[0x2ed]) * 1e-05)) && (*(uint *)((longlong)param_1 + 0x178c) < 10))
       && ((0x241U >> (*(uint *)((longlong)param_1 + 0x178c) & 0x1f) & 1) != 0)) {
      uStack_70 = 0x1805ce2c4;
      lVar11 = func_0x0001805b7270(param_1 + 1);
      if (lVar11 == 0) {
        param_1[0x2f1] = 0;
        param_1[0x2ed] =
             *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) + 0x8000000000000000;
        piVar12 = (int *)*param_1;
        if (((int *)*param_1)[0x7f] - 1U < 2) {
          uVar15 = *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
          *(uint *)((longlong)param_1 + 0x158c) = uVar15;
          piVar12 = (int *)(ulonglong)uVar15;
        }
        goto FUN_1805ce79d;
      }
      uStack_70 = 0x1805ce324;
      cVar4 = FUN_1805b7d90(param_1);
      if (cVar4 != '\0') {
        param_1[0x2ed] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) - 100;
        piVar12 = (int *)0x64;
        goto FUN_1805ce79d;
      }
    }
    uStack_70 = 0x1805ce353;
    cVar4 = func_0x0001805b7d30(param_1);
    if (cVar4 == '\0') {
      *(uint *)((longlong)param_1 + 0x159c) = *(uint *)((longlong)param_1 + 0x159c) | 0x4000;
    }
    puVar9 = param_1 + 1;
    uStack_70 = 0x1805ce36d;
    piVar12 = (int *)FUN_1805b7660(puVar9);
    if (*piVar12 == 2) goto FUN_1805ce79d;
    if ((0.0 < (float)(longlong)
                      (*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ec] * 8) -
                      param_1[0x2eb]) * 1e-05) &&
       (*(undefined4 *)((longlong)param_1 + 0x178c) = 0, *(int *)(*param_1 + 0x1fc) - 1U < 2)) {
      *(uint *)((longlong)param_1 + 0x158c) =
           *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
    }
    uStack_70 = 0x1805ce3d7;
    piVar12 = (int *)FUN_1805b7660(puVar9);
    if (*piVar12 == 1) {
      if ((param_1[2] & 0x80) == 0) {
        uStack_70 = 0x1805ce5f8;
        piVar12 = (int *)FUN_1805d4440(puVar9);
      }
      if ((*(char *)((longlong)param_1 + 0xd5) != '\0') &&
         (piVar12 = (int *)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2dd] * 8) -
                           param_1[0x2dc]),
         0.0 < (float)(longlong)
                      (*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2dd] * 8) -
                      param_1[0x2dc]) * 1e-05)) {
        uStack_70 = 0x1805ce635;
        lVar11 = func_0x0001805b6e80(puVar9);
        if (lVar11 != 0) {
          uStack_70 = 0x1805ce63f;
          lVar11 = func_0x0001805b6e80();
          if ((0 < *(int *)(lVar11 + 0x30)) &&
             (((*(uint *)((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x50 +
                         *(longlong *)(lVar11 + 0xd0)) >> 9 & 1) == 0 ||
              (0 < *(short *)(lVar11 + 8))))) {
            uStack_70 = 0x1805ce673;
            lVar11 = func_0x0001805b6e80(puVar9);
            piVar12 = _DAT_180c95ff0;
            if ((*(byte *)(_DAT_180c95ff0 +
                          (longlong)
                          *(int *)((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 100 +
                                  *(longlong *)(lVar11 + 0xd0)) * 0x5c + 0x50) & 0x10) != 0)
            goto FUN_1805ce79d;
          }
        }
        fVar25 = *(float *)(*param_1 + 0x2e8);
        uVar15 = (uint)param_1[0x272] << 0xd ^ (uint)param_1[0x272];
        uVar15 = uVar15 >> 0x11 ^ uVar15;
        uVar15 = uVar15 << 5 ^ uVar15;
        *(uint *)(param_1 + 0x272) = uVar15;
        uStack_70 = 0x1805ce6de;
        FUN_1805b7740(puVar9);
        uStack_70 = 0x1805ce702;
        piVar12 = (int *)powf((float)(uVar15 - 1) * 2.3283064e-10);
        if (1.0 - extraout_XMM0_Da < fVar25) {
          uStack_70 = 0x1805ce71b;
          cVar4 = func_0x0001805b7bd0(param_1);
          if (cVar4 == '\0') {
            uStack_70 = 0x1805ce724;
            piVar12 = (int *)FUN_1805d06b0();
            if ((char)piVar12 != '\0') goto FUN_1805ce79d;
          }
          param_1[0x2e9] =
               *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
               (longlong)(*(float *)(*param_1 + 0x2ec) * 100000.0);
          *(undefined4 *)((longlong)param_1 + 0x178c) = 7;
          *(undefined1 *)(param_1 + 0x2e4) = 0;
          piVar12 = (int *)(longlong)(*(float *)(*param_1 + 0x2ec) * -100000.0);
          param_1[0x2de] =
               *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2df] * 8) - (longlong)piVar12
          ;
        }
      }
      goto FUN_1805ce79d;
    }
    if ((param_1[2] & 0x80) == 0) {
      uStack_70 = 0x1805ce3ee;
      FUN_1805d4440(puVar9);
    }
    if (*(char *)((longlong)param_1 + 0xd5) != '\0') {
      if ((param_1[2] & 0x10000000) == 0) {
        uStack_70 = 0x1805ce40c;
        FUN_1805d5680(puVar9);
      }
      if (((int)param_1[0x24] < 2) &&
         (0.0 < (float)(longlong)
                       (*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2dd] * 8) -
                       param_1[0x2dc]) * 1e-05)) {
        uStack_70 = 0x1805ce449;
        lVar11 = func_0x0001805b6e80(puVar9);
        if (lVar11 != 0) {
          uStack_70 = 0x1805ce453;
          lVar11 = func_0x0001805b6e80();
          if ((0 < *(int *)(lVar11 + 0x30)) &&
             (((*(uint *)((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x50 +
                         *(longlong *)(lVar11 + 0xd0)) >> 9 & 1) == 0 ||
              (0 < *(short *)(lVar11 + 8))))) {
            uStack_70 = 0x1805ce487;
            lVar11 = func_0x0001805b6e80(puVar9);
            if ((*(byte *)(_DAT_180c95ff0 +
                          (longlong)
                          *(int *)((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 100 +
                                  *(longlong *)(lVar11 + 0xd0)) * 0x5c + 0x50) & 0x10) != 0)
            goto LAB_1805ce5b6;
          }
        }
        if (0.0 < (float)(longlong)
                         (*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2df] * 8) -
                         param_1[0x2de]) * 1e-05) {
          uStack_70 = 0x1805ce4ea;
          piVar12 = (int *)FUN_1805b7660(puVar9);
          if (*piVar12 == 3) {
            fVar25 = *(float *)(*param_1 + 0x350);
          }
          else {
            fVar25 = *(float *)(*param_1 + 0x2e8);
          }
          uVar15 = (uint)param_1[0x272] << 0xd ^ (uint)param_1[0x272];
          uVar15 = uVar15 >> 0x11 ^ uVar15;
          uVar15 = uVar15 << 5 ^ uVar15;
          *(uint *)(param_1 + 0x272) = uVar15;
          uStack_70 = 0x1805ce52d;
          FUN_1805b7740(puVar9);
          uStack_70 = 0x1805ce551;
          fVar19 = (float)powf((float)(uVar15 - 1) * 2.3283064e-10);
          if (fVar25 <= 1.0 - fVar19) goto LAB_1805ce5b6;
        }
        uStack_70 = 0x1805ce566;
        cVar4 = func_0x0001805b7bd0(param_1);
        if (cVar4 == '\0') {
          uStack_70 = 0x1805ce56f;
          cVar4 = FUN_1805d06b0();
          if (cVar4 != '\0') goto LAB_1805ce5b6;
        }
        piVar12 = (int *)(longlong)(*(float *)(*param_1 + 0x2ec) * 100000.0);
        param_1[0x2e9] =
             *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) - (longlong)piVar12;
        *(undefined4 *)((longlong)param_1 + 0x178c) = 7;
        *(undefined1 *)(param_1 + 0x2e4) = 0;
        goto FUN_1805ce79d;
      }
    }
LAB_1805ce5b6:
    *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
    piVar12 = (int *)*param_1;
    if (((int *)*param_1)[0x7f] - 1U < 2) {
      uVar15 = *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
      *(uint *)((longlong)param_1 + 0x158c) = uVar15;
      piVar12 = (int *)(ulonglong)uVar15;
    }
FUN_1805ce79d:
    if (*(int *)((longlong)param_1 + 0x178c) == 6) {
      if ((param_1[2] & 0x10000000) == 0) {
        uStack_70 = 0x1805ce7bb;
        FUN_1805d5680(param_1 + 1);
      }
      if ((1 < (int)param_1[0x24]) ||
         (0.0 <= (float)(longlong)
                        (*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2df] * 8) -
                        param_1[0x2de]) * 1e-05)) {
        uVar10 = *param_1;
        uStack_70 = 0x1805ce824;
        cVar4 = func_0x00018051f6a0(uVar10);
        if (cVar4 != '\0') {
          fVar23 = 0.6667;
        }
        fVar25 = *(float *)(uVar10 + 0x314);
        uVar15 = (uint)param_1[0x272] << 0xd ^ (uint)param_1[0x272];
        uVar15 = uVar15 >> 0x11 ^ uVar15;
        uVar15 = uVar15 << 5 ^ uVar15;
        piVar12 = (int *)(ulonglong)uVar15;
        *(uint *)(param_1 + 0x272) = uVar15;
        if ((float)(uVar15 - 1) * 2.3283064e-10 < fVar23 * fVar25) {
          piVar12 = *(int **)(&DAT_180c8ed30 + (longlong)(int)param_1[0x293] * 8);
          param_1[0x292] = (ulonglong)piVar12;
        }
      }
      else {
        piVar12 = (int *)*param_1;
        *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
        if (piVar12[0x7f] - 1U < 2) {
          uVar15 = *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
          piVar12 = (int *)(ulonglong)uVar15;
          *(uint *)((longlong)param_1 + 0x158c) = uVar15;
        }
      }
    }
    return piVar12;
  }
  if (uVar15 != 2) {
    if (uVar15 == 3) {
      iVar5 = 3;
      if (0.0 < (float)(longlong)
                       (*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
                       param_1[0x2e9]) * 1e-05) {
        iVar5 = 0;
        *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
      }
      if ((((int)param_1[0x2f1] != 0) &&
          (-100.0 <= (float)(longlong)
                            (*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) -
                            param_1[0x2ed]) * 1e-05)) && (iVar5 == 0)) {
        return (int *)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) -
                      param_1[0x2ed]);
      }
      goto code_r0x0001805caef0;
    }
    if (uVar15 == 4) {
      if ((float)(longlong)
                 (*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) - param_1[0x2e9]
                 ) * 1e-05 < 1.0) {
        *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) | 0x200;
      }
      if (*(int *)(*param_1 + 0x564) == -1) {
        if ((param_1[2] & 0x200) == 0) {
          uStack_a0 = 0x1805cc926;
          func_0x0001805d4cd0(param_1 + 1);
        }
        if (param_1[0x1d] != 0) {
          if ((param_1[2] & 0x200) == 0) {
            uStack_a0 = 0x1805cc946;
            func_0x0001805d4cd0(param_1 + 1);
          }
          if ((char)param_1[0x20] != '\0') {
            if (((uint)param_1[2] >> 0x13 & 1) == 0) {
              if (((uint)param_1[2] >> 9 & 1) == 0) {
                uStack_a0 = 0x1805cc970;
                func_0x0001805d4cd0(param_1 + 1);
              }
              uVar10 = param_1[0x1d];
              if (uVar10 == 0) {
                fVar23 = 0.0;
              }
              else {
                if (((uint)param_1[2] >> 0x12 & 1) == 0) {
                  if (((uint)param_1[2] >> 9 & 1) == 0) {
                    uStack_a0 = 0x1805cc999;
                    func_0x0001805d4cd0(param_1 + 1);
                    uVar10 = param_1[0x1d];
                  }
                  if (uVar10 == 0) {
                    param_1[0x10] = 0;
                    param_1[0x11] = 0;
                  }
                  else {
                    if ((param_1[2] & 0x200) == 0) {
                      uStack_a0 = 0x1805cc9b8;
                      func_0x0001805d4cd0(param_1 + 1);
                      uVar10 = param_1[0x1d];
                    }
                    uVar17 = *(ulonglong *)(*(longlong *)(uVar10 + 0x20) + 0x204);
                    param_1[0x10] = *(ulonglong *)(*(longlong *)(uVar10 + 0x20) + 0x1fc);
                    param_1[0x11] = uVar17;
                  }
                  *(uint *)(param_1 + 2) = (uint)param_1[2] | 0x40000;
                }
                fVar23 = *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
                         *(float *)((longlong)param_1 + 0x84) * *(float *)((longlong)param_1 + 0x84)
                         + *(float *)(param_1 + 0x11) * *(float *)(param_1 + 0x11);
              }
              *(float *)((longlong)param_1 + 0x7c) = fVar23;
              *(uint *)(param_1 + 2) = (uint)param_1[2] | 0x80000;
            }
            if (2.25 < *(float *)((longlong)param_1 + 0x7c) ||
                *(float *)((longlong)param_1 + 0x7c) == 2.25) goto FUN_1805ccc2c;
          }
          if ((*(longlong *)(*param_1 + 0x658) != 0) && ((int)param_1[0x295] != 6)) {
            uStack_a0 = 0x1805cca76;
            puVar9 = (ulonglong *)FUN_1805b6c30(param_1 + 1);
            uVar10 = *puVar9;
            uStackX_8._4_4_ = (float)(uVar10 >> 0x20);
            fVar25 = uStackX_8._4_4_;
            uStackX_8._0_4_ = (float)uVar10;
            fVar23 = (float)uStackX_8;
            fVar19 = uStackX_8._4_4_ * uStackX_8._4_4_ + (float)uStackX_8 * (float)uStackX_8;
            fVar19 = (float)(fVar19 <= 1.1754944e-38) * 1.1754944e-38 + fVar19;
            auVar20 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
            fVar22 = auVar20._0_4_;
            fVar19 = fVar22 * 0.5 * ((float)DAT_180a401f0 - fVar19 * fVar22 * fVar22);
            uStack_a0 = 0x1805ccaff;
            uStackX_8 = uVar10;
            pfVar6 = (float *)FUN_1805b6920(param_1 + 1);
            fVar23 = fVar25 * fVar19 * pfVar6[1] + fVar23 * fVar19 * *pfVar6;
            if ((fVar23 < -0.5) && (*(int *)(*(longlong *)(*param_1 + 0x590) + 0x2498) != -1)) {
              plVar13 = *(longlong **)(*(longlong *)(*param_1 + 0x658) + 0x210);
              pcVar2 = *(code **)(*plVar13 + 0xb8);
              uStack_a0 = 0x1805ccb73;
              pfVar6 = (float *)FUN_1805b6c30(param_1 + 1);
              fVar25 = pfVar6[1];
              fVar19 = *pfVar6;
              fVar22 = pfVar6[2];
              uStack_a0 = 0x1805ccb8b;
              pfVar6 = (float *)FUN_1805b6980(param_1 + 1);
              uStack_a0 = 0x1805ccb98;
              fVar18 = (float)(*pcVar2)(plVar13,1);
              if ((*pfVar6 / (SQRT(fVar19 * fVar19 + fVar25 * fVar25 + fVar22 * fVar22) + 0.1)) *
                  (-1.0 / fVar23) - 0.5 < fVar18) {
                *(undefined4 *)(param_1 + 0x277) = 0;
                *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
                *(undefined1 *)((longlong)param_1 + 0x13bd) = 1;
              }
            }
          }
        }
      }
FUN_1805ccc2c:
      if (*(int *)(*param_1 + 0x564) == -1) {
        *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) & 0xfffffff0;
        param_1[0x4b] = 0;
        param_1[0x4c] = 0;
      }
      if (((uint)param_1[2] & 0x20) == 0) {
        plVar13 = *(longlong **)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
        param_1[0x15] = (ulonglong)plVar13;
        *(uint *)(param_1 + 2) = (uint)param_1[2] | 0x20;
      }
      else {
        plVar13 = (longlong *)param_1[0x15];
      }
      if ((*plVar13 != 0) && (0 < *(short *)(*plVar13 + 8))) {
        *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
      }
      if ((*(int *)(*(longlong *)(*param_1 + 0x590) + 0x2498) == -1) &&
         (1.0 < (float)(longlong)
                       (*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
                       param_1[0x2e9]) * 1e-05)) {
        *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
      }
      if (((int)param_1[0x2f1] != 0) &&
         (-100.0 <= (float)(longlong)
                           (*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) -
                           param_1[0x2ed]) * 1e-05)) {
        uVar15 = *(uint *)((longlong)param_1 + 0x178c);
        if ((uVar15 < 10) && ((0x241U >> (uVar15 & 0x1f) & 1) != 0)) {
          return (int *)(ulonglong)uVar15;
        }
      }
      uStack_a0 = 0x1805ccd43;
      piVar12 = (int *)FUN_1805caef0(param_1);
                    // WARNING: Read-only address (ram,0x000180a401f0) is written
      return piVar12;
    }
    if (uVar15 != 5) {
      *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
      return (int *)(ulonglong)uVar15;
    }
    uVar10 = *param_1;
    if (*(int *)(uVar10 + 0x564) == -1) {
LAB_1805ccf58:
      *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
    }
    else {
      if ((char)param_1[0x438] == '\0') {
        iVar5 = *(int *)((longlong)param_1 + 0x14b4);
      }
      else {
        iVar5 = *(int *)((longlong)param_1 + 0x21c4);
      }
      if (iVar5 < 0) goto LAB_1805ccf58;
      lVar11 = *(longlong *)((longlong)iVar5 * 0xa60 + 0x3778 + param_1[0x291]);
      if (((lVar11 == 0) || (*(char *)(lVar11 + 0x8be) == '\0')) ||
         (0.5 < *(float *)(*(longlong *)
                            ((longlong)*(int *)(uVar10 + 0x564) * 0xa60 + 0x30c0 +
                            *(longlong *)(uVar10 + 0x8d8)) + 0x20))) goto LAB_1805ccf58;
      if ((char)param_1[0x438] == '\0') {
        iVar5 = *(int *)((longlong)param_1 + 0x14b4);
      }
      else {
        iVar5 = *(int *)((longlong)param_1 + 0x21c4);
      }
      lVar11 = *(longlong *)((longlong)iVar5 * 0xa60 + 0x30c0 + param_1[0x291]);
      fVar19 = *(float *)(lVar11 + 0xc) - *(float *)(*(longlong *)(uVar10 + 0x20) + 0xc);
      fVar22 = *(float *)(lVar11 + 0x10) - *(float *)(*(longlong *)(uVar10 + 0x20) + 0x10);
      fVar23 = fVar22 * fVar22 + fVar19 * fVar19;
      uVar10 = *(ulonglong *)(*(longlong *)(*(longlong *)(uVar10 + 0x6d8) + 0x8a8) + 0x40);
      fVar23 = (float)(fVar23 <= 1.1754944e-38) * 1.1754944e-38 + fVar23;
      auVar20 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
      fVar25 = auVar20._0_4_;
      uStackX_8._0_4_ = (float)uVar10;
      uStackX_8._4_4_ = (float)(uVar10 >> 0x20);
      fVar23 = fVar25 * 0.5 * (3.0 - fVar23 * fVar25 * fVar25);
      fVar19 = fVar19 * fVar23;
      fVar22 = fVar22 * fVar23;
      if (fVar19 * (float)uStackX_8 + fVar22 * uStackX_8._4_4_ <= 0.0) {
        *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) | 0x20;
      }
      else {
        *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) | 0x10;
      }
      if (0.3 < (float)uStackX_8 * fVar22 - uStackX_8._4_4_ * fVar19) {
        *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
      }
      uStackX_8 = uVar10;
      if ((param_1[2] & 0x4000) == 0) {
        FUN_1805d53a0(param_1 + 1);
      }
      if (((*(char *)((longlong)param_1 + 0xc3) != '\0') && ((param_1[0x269] & 2) != 0)) &&
         (cVar4 = func_0x0001805b7d30(param_1), cVar4 == '\0')) {
        func_0x0001805d89b0(param_1,0x4000);
      }
    }
    piVar12 = (int *)func_0x0001805b7d30(param_1);
    if ((char)piVar12 != '\0') {
      return piVar12;
    }
code_r0x0001805caef0:
    lVar11 = func_0x0001805b7270(param_1 + 1);
    if (lVar11 == 0) {
      param_1[0x42f] = 0x7fc000007fc00000;
      param_1[0x430] = 0x7fc000007fc00000;
      return (int *)0x0;
    }
    pfVar6 = (float *)func_0x0001805b7cd0(param_1);
    uStackX_8 = CONCAT71(uStackX_8._1_7_,(char)pfVar6);
    fVar23 = *(float *)(*(longlong *)(*param_1 + 0x20) + 0x1d0);
    uVar15 = 0;
    uVar10 = param_1[0x291];
    param_1[0x42f] = 0;
    param_1[0x430] = 0;
    iVar5 = *(int *)(uVar10 + 0x87b318);
    if (0 < iVar5) {
      do {
        pfVar6 = *(float **)(*(longlong *)(uVar10 + 0x87b340) + (ulonglong)(uVar15 >> 4) * 8);
        if (pfVar6[(ulonglong)(uVar15 & 0xf) * 0x2f8 + 2] != 0.0) break;
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < iVar5);
    }
    if ((int)uVar15 < iVar5) {
      do {
        pfVar6 = *(float **)(uVar10 + 0x87b340);
        lVar11 = (ulonglong)(uVar15 & 0xf) * 0xbe0 +
                 *(longlong *)(pfVar6 + (ulonglong)(uVar15 >> 4) * 2);
        if (*(char *)(lVar11 + 0x3d1) == '\0') {
          if (*(char *)(lVar11 + 0x3d2) == '\0') {
            fStack_f8 = *(float *)(lVar11 + 0x8c);
            fStack_f4 = *(float *)(lVar11 + 0x90);
            fStack_f0 = *(float *)(lVar11 + 0x94);
            uStack_ec = *(undefined4 *)(lVar11 + 0x98);
          }
          else {
            (**(code **)(**(longlong **)(lVar11 + 0xe8) + 0xa0))
                      (*(longlong **)(lVar11 + 0xe8),&fStack_f8);
          }
          fVar25 = fStack_f8 * fStack_f8 + fStack_f4 * fStack_f4 + fStack_f0 * fStack_f0;
          auVar20 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
          fVar19 = auVar20._0_4_;
          fVar18 = fVar19 * 0.5 * (3.0 - fVar25 * fVar19 * fVar19);
          fVar25 = fStack_f4 * fVar18;
          fVar18 = fStack_f8 * fVar18;
          pfVar6 = (float *)(*(longlong *)(*param_1 + 0x20) + 0xc);
          fVar24 = *(float *)(lVar11 + 0x58) - *pfVar6;
          fVar26 = *(float *)(lVar11 + 0x5c) - *(float *)(*(longlong *)(*param_1 + 0x20) + 0x10);
          fVar19 = fVar25 * fVar25 + fVar18 * fVar18;
          auVar20 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
          fVar22 = auVar20._0_4_;
          fVar19 = fVar22 * 0.5 * (3.0 - fVar19 * fVar22 * fVar22);
          fVar25 = fVar25 * fVar19 * fVar26 + fVar18 * fVar19 * fVar24;
          if ((fVar26 * fVar26 + fVar24 * fVar24) - fVar25 * fVar25 < fVar23 * fVar23 * 36.0) {
                    // WARNING: Subroutine does not return
            FUN_1808fd400();
          }
        }
        uVar10 = param_1[0x291];
        uVar15 = uVar15 + 1;
        iVar5 = *(int *)(uVar10 + 0x87b318);
        if (iVar5 <= (int)uVar15) break;
        do {
          pfVar6 = *(float **)(*(longlong *)(uVar10 + 0x87b340) + (ulonglong)(uVar15 >> 4) * 8);
          if (pfVar6[(ulonglong)(uVar15 & 0xf) * 0x2f8 + 2] != 0.0) break;
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < iVar5);
      } while ((int)uVar15 < iVar5);
    }
    param_1[0x42f] = 0x7fc000007fc00000;
    param_1[0x430] = 0x7fc000007fc00000;
                    // WARNING: Read-only address (ram,0x000180a401f0) is written
    return (int *)((ulonglong)pfVar6 & 0xffffffffffffff00);
  }
  if ((param_1[2] & 0x80) == 0) {
    FUN_1805d4440(param_1 + 1);
  }
  if ((*(char *)((longlong)param_1 + 0xd6) == '\0') ||
     (((!bVar3 && ((param_1[0x269] & 2) == 0)) &&
      ((param_1[0x41e] == 0 ||
       ((1 < (int)param_1[0x295] - 5U &&
        (((*(byte *)((longlong)param_1 + 0x209c) & 1) == 0 || ((param_1[0x413] & 1) == 0)))))))))) {
    *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
    goto LAB_1805cc805;
  }
  *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) | 0x200;
  if (*(int *)(*param_1 + 0x564) == -1) {
    if (((uint)param_1[2] & 0x20) == 0) {
      uVar10 = *(ulonglong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
      param_1[0x15] = uVar10;
      *(uint *)(param_1 + 2) = (uint)param_1[2] | 0x20;
    }
    else {
      uVar10 = param_1[0x15];
    }
    if ((((*(uint *)((longlong)*(int *)(uVar10 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(uVar10 + 0xd0))
           >> 8 & 1) == 0) &&
        (-0.7 < (float)(longlong)
                       (*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
                       param_1[0x2e9]) * 1e-05)) && ((int)param_1[0x2f2] == 3)) {
      *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) & 0xfffffff0;
      param_1[0x4b] = 0;
      param_1[0x4c] = 0;
    }
  }
  uVar15 = (uint)param_1[2];
  if ((uVar15 >> 0xc & 1) == 0) {
    FUN_1805d4df0(param_1 + 1);
    uVar15 = (uint)param_1[2];
  }
  fVar23 = *(float *)(param_1 + 0x22);
  if ((uVar15 >> 0xc & 1) == 0) {
    FUN_1805d4df0(param_1 + 1);
    uVar15 = (uint)param_1[2];
  }
  fVar25 = *(float *)((longlong)param_1 + 0x10c);
  if ((uVar15 >> 0xc & 1) == 0) {
    FUN_1805d4df0(param_1 + 1);
  }
  fVar19 = *(float *)((longlong)param_1 + 0x114);
  uVar14 = 0xffffffff;
  bVar3 = fVar19 < fVar25;
  if (bVar3) {
    uVar10 = *param_1;
    lVar11 = *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(uVar10 + 0x268) * 8);
    lVar1 = *(longlong *)(uVar10 + 0x260);
    lVar7 = FUN_1805a0610(uVar10 + 0x28,1);
    if (lVar7 == 0) {
      uVar16 = 0xffffffff;
    }
    else {
      uVar16 = *(undefined4 *)(lVar7 + 0x1c);
    }
    iVar5 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(*(longlong *)(*param_1 + 0x590) + 0xac),
                          uVar16);
    iVar5 = *(int *)(_DAT_180c95f68 + (longlong)iVar5 * 4);
    if (iVar5 == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar5 * 8);
    }
    uVar10 = *param_1;
    fVar23 = *(float *)(lVar7 + 0x188);
    fVar25 = 1.0;
    lVar7 = *(longlong *)(*(longlong *)(uVar10 + 0x8f8) + 0x9e8);
    if (lVar7 != 0) {
      fVar25 = (float)*(int *)((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x68 +
                              *(longlong *)(lVar7 + 0xd0)) * 0.01;
    }
    fVar19 = *(float *)(uVar10 + 0x3ac);
    uVar15 = (uint)param_1[2];
    if ((uVar15 & 0x20) == 0) {
      uVar15 = uVar15 | 0x20;
      uVar17 = *(ulonglong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
      param_1[0x15] = uVar17;
      *(uint *)(param_1 + 2) = uVar15;
      uVar10 = *param_1;
    }
    else {
      uVar17 = param_1[0x15];
    }
    fVar22 = *(float *)(uVar10 + 0x3c8);
    fVar18 = *(float *)((longlong)*(int *)(uVar17 + 0xf0) * 0xa0 + 0x84 +
                       *(longlong *)(uVar17 + 0xd0));
    if ((uVar15 & 1) == 0) {
      FUN_1805d3210(param_1 + 1);
    }
    fVar18 = (0.02 / fVar18) * *(float *)(param_1 + 0xd);
    if (0.0 <= fVar18) {
      if (1.0 <= fVar18) {
        fVar18 = 1.0;
      }
    }
    else {
      fVar18 = 0.0;
    }
    fVar23 = (fVar22 + fVar23 / (fVar25 * fVar19) + fVar18 * 0.6) - (float)(lVar11 - lVar1) * 1e-05;
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
  }
  else {
    if ((param_1[2] & 0x1000) == 0) {
      FUN_1805d4df0(param_1 + 1);
      fVar19 = *(float *)((longlong)param_1 + 0x114);
    }
    fVar23 = (fVar19 - fVar25) / ((fVar23 - fVar25) + (fVar19 - fVar25));
    if (0.0 <= fVar23) {
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      fVar23 = fVar23 * 5.0;
    }
    else {
      fVar23 = 0.0;
    }
  }
  fVar19 = 1.0;
  fVar25 = 0.0;
  piVar12 = (int *)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
                   param_1[0x2e9]);
  if ((float)(longlong)piVar12 * 1e-05 <= fVar23) {
    return piVar12;
  }
  if ((bVar3) && (fVar23 != 0.0)) {
    return piVar12;
  }
  uVar10 = param_1[0x2f2];
  if ((param_1[0x41e] == 0) ||
     ((1 < (int)param_1[0x295] - 5U &&
      (((*(byte *)((longlong)param_1 + 0x209c) & 1) == 0 || ((param_1[0x413] & 1) == 0)))))) {
    uVar8 = FUN_1805b7970(param_1,auStack_e8);
    if ((char)param_1[0x438] == '\0') {
      uVar16 = *(undefined4 *)((longlong)param_1 + 0x14b4);
    }
    else {
      uVar16 = *(undefined4 *)((longlong)param_1 + 0x21c4);
    }
    iVar5 = FUN_1805bf5a0(param_1,uVar16,uVar8);
  }
  else {
    iVar5 = 3;
  }
  *(int *)(param_1 + 0x2f2) = iVar5;
  if ((int)uVar10 == 3) {
    if ((iVar5 == 3) && (*(int *)(*param_1 + 0x5f8) != 2)) {
      uVar8 = *(undefined8 *)((longlong)param_1 + 0x135c);
      uStackX_8._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
      uStackX_8._0_4_ = (float)uVar8;
      fVar23 = uStackX_8._4_4_ * uStackX_8._4_4_ + (float)uStackX_8 * (float)uStackX_8;
      auVar21 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
      auVar20._4_12_ = DAT_180a401f0._4_12_;
      auVar20._0_4_ = (float)DAT_180a401f0 - fVar23 * auVar21._0_4_ * auVar21._0_4_;
      uStackX_8 = uVar8;
                    // WARNING: Subroutine does not return
      FUN_1808fd400(iVar5 == 3,auVar20._0_8_);
    }
FUN_1805cc66f:
    if (iVar5 == 3) {
      lVar11 = FUN_1805a0610(*param_1 + 0x28,1);
      if (lVar11 != 0) {
        uVar14 = *(undefined4 *)(lVar11 + 0x34);
      }
      lVar11 = FUN_18053a5a0(&DAT_180c95f30,*(undefined4 *)(*(longlong *)(*param_1 + 0x590) + 0xac),
                             uVar14);
      fVar23 = *(float *)(lVar11 + 0x1d8);
      fVar19 = *(float *)(lVar11 + 0x188);
      if ((*(uint *)((longlong)param_1 + 0x209c) & 0x400) == 0) {
        fVar25 = -0.2;
      }
      uVar15 = (uint)param_1[0x272] << 0xd ^ (uint)param_1[0x272];
      uVar15 = uVar15 >> 0x11 ^ uVar15;
      uVar15 = uVar15 << 5 ^ uVar15;
      *(uint *)(param_1 + 0x272) = uVar15;
      param_1[0x2e9] =
           *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
           (longlong)(((fVar25 - (float)(uVar15 - 1) * 4.656613e-11) - fVar23 * fVar19) * 100000.0);
      *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f;
      *(undefined4 *)((longlong)param_1 + 0x178c) = 3;
      return (int *)(longlong)(int)param_1[0x2ea];
    }
  }
  else {
    if (iVar5 != 3) goto FUN_1805cc66f;
    param_1[0x2e9] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) + 50000;
  }
  if ((*(uint *)((longlong)param_1 + 0x1484) >> 4 & 1) != 0) {
    fVar19 = 0.0;
  }
  piVar12 = (int *)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
                   param_1[0x2e9]);
  fVar23 = (float)(longlong)piVar12 * 1e-05;
  if (fVar23 <= fVar19) {
    if (-1.0 <= fVar23) {
      return piVar12;
    }
    param_1[0x2e9] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) + 100000;
    return (int *)0xfffffffffffe7960;
  }
  if ((*(uint *)((longlong)param_1 + 0x209c) >> 0xb & 1) == 0) {
    FUN_1805be810(param_1,&uStackX_8);
    if ((int)uStackX_8 == -1) {
      puVar9 = (ulonglong *)FUN_1805bed80(param_1,&uStackX_8);
      uStackX_8 = *puVar9;
    }
    uVar10 = uStackX_8;
    if ((char)param_1[0x438] == '\0') {
      iVar5 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar5 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (((int)uStackX_8 != iVar5) && (-1 < (int)uStackX_8)) {
      FUN_1805d1c80(param_1,&uStackX_8);
      if ((int)param_1[0x295] == 2) {
        FUN_1805d9040(param_1 + 0x2f,uVar10 & 0xffffffff);
      }
      param_1[0x2e9] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) + 75000;
      return (int *)0xfffffffffffedb08;
    }
  }
  uVar15 = (uint)param_1[0x2f2];
  if (uVar15 == 3) {
    return (int *)(ulonglong)uVar15;
  }
  if ((uVar15 == 4) &&
     ((float)(longlong)
             (*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) - param_1[0x2e9]) *
      1e-05 <= 5.0)) {
    return (int *)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
                  param_1[0x2e9]);
  }
LAB_1805cc805:
  uVar15 = *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
  *(uint *)((longlong)param_1 + 0x158c) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
                    // WARNING: Read-only address (ram,0x000180a401f0) is written
  return (int *)(ulonglong)uVar15;
}



// WARNING: Removing unreachable block (ram,0x0001805cb527)

ulonglong FUN_1805caef0(longlong *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  
  lVar4 = func_0x0001805b7270(param_1 + 1);
  if (lVar4 == 0) {
    param_1[0x42f] = 0x7fc000007fc00000;
    param_1[0x430] = 0x7fc000007fc00000;
    return 0;
  }
  pfVar5 = (float *)func_0x0001805b7cd0(param_1);
  fVar1 = *(float *)(*(longlong *)(*param_1 + 0x20) + 0x1d0);
  uVar6 = 0;
  lVar4 = param_1[0x291];
  param_1[0x42f] = 0;
  param_1[0x430] = 0;
  iVar2 = *(int *)(lVar4 + 0x87b318);
  if (0 < iVar2) {
    do {
      pfVar5 = *(float **)(*(longlong *)(lVar4 + 0x87b340) + (ulonglong)(uVar6 >> 4) * 8);
      if (pfVar5[(ulonglong)(uVar6 & 0xf) * 0x2f8 + 2] != 0.0) break;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
  }
  if ((int)uVar6 < iVar2) {
    do {
      pfVar5 = *(float **)(lVar4 + 0x87b340);
      lVar4 = (ulonglong)(uVar6 & 0xf) * 0xbe0 + *(longlong *)(pfVar5 + (ulonglong)(uVar6 >> 4) * 2)
      ;
      if (*(char *)(lVar4 + 0x3d1) == '\0') {
        if (*(char *)(lVar4 + 0x3d2) == '\0') {
          fStack_f8 = *(float *)(lVar4 + 0x8c);
          fStack_f4 = *(float *)(lVar4 + 0x90);
          fStack_f0 = *(float *)(lVar4 + 0x94);
          uStack_ec = *(undefined4 *)(lVar4 + 0x98);
        }
        else {
          (**(code **)(**(longlong **)(lVar4 + 0xe8) + 0xa0))
                    (*(longlong **)(lVar4 + 0xe8),&fStack_f8);
        }
        fVar8 = fStack_f8 * fStack_f8 + fStack_f4 * fStack_f4 + fStack_f0 * fStack_f0;
        auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar7 = auVar10._0_4_;
        fVar11 = fVar7 * 0.5 * (3.0 - fVar8 * fVar7 * fVar7);
        fVar8 = fStack_f4 * fVar11;
        fVar11 = fStack_f8 * fVar11;
        lVar3 = *(longlong *)(*param_1 + 0x20);
        pfVar5 = (float *)(lVar3 + 0xc);
        fVar12 = *(float *)(lVar4 + 0x58) - *pfVar5;
        fVar13 = *(float *)(lVar4 + 0x5c) - *(float *)(lVar3 + 0x10);
        fVar7 = fVar8 * fVar8 + fVar11 * fVar11;
        auVar10 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar9 = auVar10._0_4_;
        fVar7 = fVar9 * 0.5 * (3.0 - fVar7 * fVar9 * fVar9);
        fVar8 = fVar8 * fVar7 * fVar13 + fVar11 * fVar7 * fVar12;
        if ((fVar13 * fVar13 + fVar12 * fVar12) - fVar8 * fVar8 < fVar1 * fVar1 * 36.0) {
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(undefined4 *)(*param_1 + 0x4ac));
        }
      }
      lVar4 = param_1[0x291];
      uVar6 = uVar6 + 1;
      iVar2 = *(int *)(lVar4 + 0x87b318);
      if (iVar2 <= (int)uVar6) break;
      do {
        pfVar5 = *(float **)(*(longlong *)(lVar4 + 0x87b340) + (ulonglong)(uVar6 >> 4) * 8);
        if (pfVar5[(ulonglong)(uVar6 & 0xf) * 0x2f8 + 2] != 0.0) break;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar2);
    } while ((int)uVar6 < iVar2);
  }
  param_1[0x42f] = 0x7fc000007fc00000;
  param_1[0x430] = 0x7fc000007fc00000;
  return (ulonglong)pfVar5 & 0xffffffffffffff00;
}



ulonglong FUN_1805caf14(void)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  
  pfVar3 = (float *)func_0x0001805b7cd0();
  lVar5 = *unaff_RSI;
  *(char *)(unaff_RBP + 0x50) = (char)pfVar3;
  fVar6 = *(float *)(*(longlong *)(lVar5 + 0x20) + 0x1d0);
  fVar12 = fVar6 * fVar6 * 36.0;
  *(float *)(unaff_RBP + 0x60) = fVar12;
  uVar4 = 0;
  lVar5 = unaff_RSI[0x291];
  unaff_RSI[0x42f] = 0;
  unaff_RSI[0x430] = 0;
  fVar6 = 0.0;
  iVar1 = *(int *)(lVar5 + 0x87b318);
  *(undefined4 *)(unaff_RBP + 0x58) = 0;
  if (0 < iVar1) {
    do {
      pfVar3 = *(float **)(*(longlong *)(lVar5 + 0x87b340) + (ulonglong)(uVar4 >> 4) * 8);
      if (pfVar3[(ulonglong)(uVar4 & 0xf) * 0x2f8 + 2] != 0.0) break;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar1);
  }
  if ((int)uVar4 < iVar1) {
    do {
      pfVar3 = *(float **)(lVar5 + 0x87b340);
      lVar5 = (ulonglong)(uVar4 & 0xf) * 0xbe0 + *(longlong *)(pfVar3 + (ulonglong)(uVar4 >> 4) * 2)
      ;
      if (*(char *)(lVar5 + 0x3d1) == '\0') {
        if (*(char *)(lVar5 + 0x3d2) == '\0') {
          fStack0000000000000050 = *(float *)(lVar5 + 0x8c);
          fStack0000000000000054 = *(float *)(lVar5 + 0x90);
          fStack0000000000000058 = *(float *)(lVar5 + 0x94);
          uStack000000000000005c = *(undefined4 *)(lVar5 + 0x98);
        }
        else {
          (**(code **)(**(longlong **)(lVar5 + 0xe8) + 0xa0))
                    (*(longlong **)(lVar5 + 0xe8),&stack0x00000050);
        }
        fVar6 = *(float *)(lVar5 + 0x58);
        fVar13 = *(float *)(lVar5 + 0x5c);
        lVar5 = *unaff_RSI;
        fVar8 = fStack0000000000000050 * fStack0000000000000050 +
                fStack0000000000000054 * fStack0000000000000054 +
                fStack0000000000000058 * fStack0000000000000058;
        auVar11 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar9 = auVar11._0_4_;
        fVar8 = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
        *(ulonglong *)(unaff_RBP + 0x68) =
             CONCAT44(fStack0000000000000054 * fVar8,fStack0000000000000050 * fVar8);
        fVar8 = *(float *)(unaff_RBP + 0x6c);
        fVar9 = *(float *)(unaff_RBP + 0x68);
        lVar2 = *(longlong *)(lVar5 + 0x20);
        pfVar3 = (float *)(lVar2 + 0xc);
        fVar6 = fVar6 - *pfVar3;
        fVar13 = fVar13 - *(float *)(lVar2 + 0x10);
        fVar7 = fVar8 * fVar8 + fVar9 * fVar9;
        auVar11 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar10 = auVar11._0_4_;
        fVar7 = fVar10 * 0.5 * (3.0 - fVar7 * fVar10 * fVar10);
        fVar8 = fVar8 * fVar7 * fVar13 + fVar9 * fVar7 * fVar6;
        if ((fVar13 * fVar13 + fVar6 * fVar6) - fVar8 * fVar8 < fVar12) {
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(undefined4 *)(lVar5 + 0x4ac));
        }
        fVar6 = *(float *)(unaff_RBP + 0x58);
      }
      lVar5 = unaff_RSI[0x291];
      uVar4 = uVar4 + 1;
      iVar1 = *(int *)(lVar5 + 0x87b318);
      if (iVar1 <= (int)uVar4) break;
      do {
        pfVar3 = *(float **)(*(longlong *)(lVar5 + 0x87b340) + (ulonglong)(uVar4 >> 4) * 8);
        if (pfVar3[(ulonglong)(uVar4 & 0xf) * 0x2f8 + 2] != 0.0) break;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    } while ((int)uVar4 < iVar1);
  }
  if (fVar6 <= 0.0) {
    unaff_RSI[0x42f] = 0x7fc000007fc00000;
    unaff_RSI[0x430] = 0x7fc000007fc00000;
  }
  else {
    pfVar3 = (float *)*unaff_RSI;
    fVar6 = 1.0 / fVar6;
    *(float *)(unaff_RSI + 0x42f) = fVar6 * *(float *)(unaff_RSI + 0x42f);
    *(float *)((longlong)unaff_RSI + 0x217c) = fVar6 * *(float *)((longlong)unaff_RSI + 0x217c);
    *(float *)(unaff_RSI + 0x430) = fVar6 * *(float *)(unaff_RSI + 0x430);
    *(undefined4 *)((longlong)unaff_RSI + 0x2184) = 0x7f7fffff;
    lVar5 = *(longlong *)(pfVar3 + 0x1b6);
    fVar6 = *(float *)(lVar5 + 0x8c8);
    fVar12 = *(float *)(lVar5 + 0x8cc);
    *(float *)(unaff_RSI + 0x42f) = *(float *)(unaff_RSI + 0x42f) - *(float *)(lVar5 + 0x8c4);
    *(float *)((longlong)unaff_RSI + 0x217c) = *(float *)((longlong)unaff_RSI + 0x217c) - fVar6;
    *(float *)(unaff_RSI + 0x430) = *(float *)(unaff_RSI + 0x430) - fVar12;
    *(undefined4 *)((longlong)unaff_RSI + 0x2184) = 0x7f7fffff;
    unaff_RSI[0x42d] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x42e] * 8) + 400000;
  }
  return (ulonglong)pfVar3 & 0xffffffffffffff00;
}



ulonglong FUN_1805cb073(float param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  float *in_RAX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  uint unaff_EDI;
  longlong lVar3;
  longlong unaff_R15;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float unaff_XMM6_Da;
  float fVar9;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float fVar10;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  
  if ((int)unaff_EDI < param_2) {
    do {
      in_RAX = *(float **)(param_3 + 0x87b340);
      lVar3 = (ulonglong)(unaff_EDI & 0xf) * 0xbe0 +
              *(longlong *)(in_RAX + (ulonglong)(unaff_EDI >> 4) * 2);
      if (*(char *)(lVar3 + 0x3d1) == '\0') {
        if (*(char *)(lVar3 + 0x3d2) == '\0') {
          fStack0000000000000050 = *(float *)(lVar3 + 0x8c);
          fStack0000000000000054 = *(float *)(lVar3 + 0x90);
          fStack0000000000000058 = *(float *)(lVar3 + 0x94);
          uStack000000000000005c = *(undefined4 *)(lVar3 + 0x98);
        }
        else {
          (**(code **)(**(longlong **)(lVar3 + 0xe8) + 0xa0))
                    (*(longlong **)(lVar3 + 0xe8),&stack0x00000050);
        }
        fVar9 = *(float *)(lVar3 + 0x58);
        fVar10 = *(float *)(lVar3 + 0x5c);
        lVar3 = *unaff_RSI;
        fVar5 = fStack0000000000000050 * fStack0000000000000050 +
                fStack0000000000000054 * fStack0000000000000054 +
                fStack0000000000000058 * fStack0000000000000058;
        auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar6 = auVar8._0_4_;
        fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
        *(ulonglong *)(unaff_RBP + 0x68) =
             CONCAT44(fStack0000000000000054 * fVar5,fStack0000000000000050 * fVar5);
        fVar5 = *(float *)(unaff_RBP + 0x6c);
        fVar6 = *(float *)(unaff_RBP + 0x68);
        lVar2 = *(longlong *)(lVar3 + 0x20);
        in_RAX = (float *)(lVar2 + 0xc);
        fVar9 = fVar9 - *in_RAX;
        fVar10 = fVar10 - *(float *)(lVar2 + 0x10);
        fVar4 = fVar5 * fVar5 + fVar6 * fVar6;
        auVar8 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
        fVar7 = auVar8._0_4_;
        fVar4 = fVar7 * 0.5 * (3.0 - fVar4 * fVar7 * fVar7);
        fVar5 = fVar5 * fVar4 * fVar10 + fVar6 * fVar4 * fVar9;
        if ((fVar10 * fVar10 + fVar9 * fVar9) - fVar5 * fVar5 < unaff_XMM6_Da) {
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(undefined4 *)(lVar3 + 0x4ac));
        }
        param_1 = *(float *)(unaff_RBP + 0x58);
      }
      param_3 = unaff_RSI[0x291];
      unaff_EDI = unaff_EDI + 1;
      iVar1 = *(int *)(param_3 + 0x87b318);
      if (iVar1 <= (int)unaff_EDI) break;
      do {
        in_RAX = *(float **)(*(longlong *)(param_3 + 0x87b340) + (ulonglong)(unaff_EDI >> 4) * 8);
        if (in_RAX[(ulonglong)(unaff_EDI & 0xf) * 0x2f8 + 2] != 0.0) break;
        unaff_EDI = unaff_EDI + 1;
      } while ((int)unaff_EDI < iVar1);
    } while ((int)unaff_EDI < iVar1);
  }
  if (param_1 <= unaff_XMM13_Da) {
    unaff_RSI[0x42f] = 0x7fc000007fc00000;
    unaff_RSI[0x430] = 0x7fc000007fc00000;
  }
  else {
    in_RAX = (float *)*unaff_RSI;
    param_1 = unaff_XMM12_Da / param_1;
    *(float *)(unaff_RSI + 0x42f) = param_1 * *(float *)(unaff_RSI + 0x42f);
    *(float *)((longlong)unaff_RSI + 0x217c) = param_1 * *(float *)((longlong)unaff_RSI + 0x217c);
    *(float *)(unaff_RSI + 0x430) = param_1 * *(float *)(unaff_RSI + 0x430);
    *(undefined4 *)((longlong)unaff_RSI + 0x2184) = 0x7f7fffff;
    lVar3 = *(longlong *)(in_RAX + 0x1b6);
    fVar9 = *(float *)(lVar3 + 0x8c8);
    fVar10 = *(float *)(lVar3 + 0x8cc);
    *(float *)(unaff_RSI + 0x42f) = *(float *)(unaff_RSI + 0x42f) - *(float *)(lVar3 + 0x8c4);
    *(float *)((longlong)unaff_RSI + 0x217c) = *(float *)((longlong)unaff_RSI + 0x217c) - fVar9;
    *(float *)(unaff_RSI + 0x430) = *(float *)(unaff_RSI + 0x430) - fVar10;
    *(undefined4 *)((longlong)unaff_RSI + 0x2184) = 0x7f7fffff;
    unaff_RSI[0x42d] = *(longlong *)(unaff_R15 + (longlong)(int)unaff_RSI[0x42e] * 8) + 400000;
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



undefined8 FUN_1805cb691(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *unaff_RSI;
  longlong unaff_R14;
  int unaff_R15D;
  float fVar6;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  float unaff_XMM13_Da;
  float unaff_XMM15_Da;
  
  uVar5 = 0x2000;
  if (unaff_R15D == 4) {
    uVar5 = 0x1000;
  }
  *(undefined4 *)(unaff_RSI + 0x2f1) = uVar5;
  lVar4 = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x2ee] * 8);
  fVar6 = (float)(lVar4 - unaff_RSI[0x2ed]) * 1e-05;
  if ((fVar6 < -100.0) || (fVar6 < -unaff_XMM10_Da)) {
    unaff_RSI[0x2ed] = lVar4 - (longlong)(-unaff_XMM10_Da * 100000.0);
  }
  else if (unaff_XMM13_Da < fVar6) {
    unaff_RSI[0x2ed] = lVar4;
  }
  fVar6 = *(float *)(unaff_R14 + 0x5c);
  fVar1 = *(float *)(unaff_R14 + 0x60);
  lVar4 = *(longlong *)(*unaff_RSI + 0x20);
  fVar2 = *(float *)(lVar4 + 0x10);
  fVar3 = *(float *)(lVar4 + 0x14);
  *(float *)(unaff_RSI + 0x42f) =
       (unaff_XMM6_Da + *(float *)(unaff_R14 + 0x58)) * unaff_XMM15_Da - *(float *)(lVar4 + 0xc);
  *(float *)((longlong)unaff_RSI + 0x217c) = (unaff_XMM7_Da + fVar6) * unaff_XMM15_Da - fVar2;
  *(float *)(unaff_RSI + 0x430) = (unaff_XMM8_Da + fVar1) * unaff_XMM15_Da - fVar3;
  *(undefined4 *)((longlong)unaff_RSI + 0x2184) = 0x7f7fffff;
  unaff_RSI[0x42d] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x42e] * 8) + 400000;
  return CONCAT71((int7)((ulonglong)*unaff_RSI >> 8),1);
}



undefined1 FUN_1805cb7d0(void)

{
  longlong unaff_RSI;
  
  *(undefined8 *)(unaff_RSI + 0x2178) = 0x7fc000007fc00000;
  *(undefined8 *)(unaff_RSI + 0x2180) = 0x7fc000007fc00000;
  return 0;
}








