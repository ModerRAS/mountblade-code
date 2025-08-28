#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part056.c - 8 个函数
// 
// 核心引擎渲染和对象管理模块
// 包含引擎关闭、渲染比例设置、对象状态管理等功能
// 
// 全局变量说明:
// _DAT_180c86950 - 引擎核心数据结构指针
// _DAT_180c82868 - 引擎管理器实例
// _DAT_180c86890 - 渲染系统配置
// _DAT_180c86870 - 时间和性能计数器
// _DAT_180c86938 - 引擎全局状态

// 函数: void cleanup_engine_shutdown(ulonglong param_1)
void cleanup_engine_shutdown(ulonglong param_1)

{
  int *piVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  longlong *plVar6;
  char *pcVar7;
  int8_t uVar8;
  int32_t uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint64_t uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong **pplVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  void *puVar21;
  int iVar22;
  longlong *plVar23;
  int iVar24;
  byte bVar25;
  ulonglong uVar26;
  int8_t auStack_2b8 [32];
  longlong **pplStack_298;
  longlong *plStack_290;
  int32_t auStack_288 [2];
  longlong *plStack_280;
  longlong *plStack_278;
  longlong *plStack_270;
  longlong *plStack_268;
  longlong **pplStack_260;
  longlong **pplStack_258;
  uint uStack_250;
  uint uStack_24c;
  int32_t uStack_248;
  int32_t uStack_244;
  int32_t uStack_240;
  int32_t uStack_23c;
  int32_t uStack_238;
  int32_t uStack_234;
  int32_t uStack_230;
  int8_t uStack_22c;
  uint64_t uStack_22b;
  int32_t uStack_220;
  int8_t uStack_21c;
  longlong lStack_218;
  longlong lStack_210;
  uint64_t uStack_208;
  int32_t uStack_200;
  longlong *plStack_1f8;
  longlong *plStack_1f0;
  longlong *plStack_1e8;
  longlong *plStack_1e0;
  longlong *plStack_1d8;
  longlong *plStack_1d0;
  longlong *plStack_1c8;
  longlong *plStack_1c0;
  longlong lStack_1b8;
  uint64_t uStack_1b0;
  int32_t uStack_1a8;
  int32_t uStack_1a4;
  int32_t uStack_1a0;
  int32_t uStack_19c;
  int32_t uStack_198;
  int32_t uStack_194;
  void *puStack_190;
  void *puStack_188;
  uint64_t uStack_180;
  longlong *aplStack_178 [2];
  void *puStack_168;
  code *pcStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  int32_t uStack_140;
  void *puStack_138;
  void *puStack_130;
  int32_t uStack_128;
  uint8_t auStack_120 [72];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  plVar6 = _DAT_180c86950;
  uStack_180 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_2b8;
  iVar24 = 0;
  plVar13 = (longlong *)_DAT_180c86950[0x30e];
  lVar20 = _DAT_180c86950[0x30d];
  if ((longlong)plVar13 - lVar20 >> 3 != 0) {
    pplStack_298 = (longlong **)0x0;
    do {
      if ((*(longlong *)((longlong)pplStack_298 + lVar20) == 0) ||
         (plVar13 = (longlong *)plVar6[0x30e],
         *(int *)(*(longlong *)((longlong)pplStack_298 + lVar20) + 8) == 1)) {
        plVar18 = (longlong *)plVar6[0x30d];
        lVar20 = (longlong)plVar13 - (longlong)plVar18 >> 3;
        if ((lVar20 != 0) &&
           (pplVar17 = pplStack_298, iVar22 = iVar24, (ulonglong)(longlong)iVar24 < lVar20 - 1U)) {
          do {
            plVar13 = *(longlong **)((longlong)(pplVar17 + 1) + (longlong)plVar18);
            if (plVar13 != (longlong *)0x0) {
              plStack_1f8 = plVar13;
              (**(code **)(*plVar13 + 0x28))(plVar13);
            }
            plStack_1f8 = *(longlong **)((longlong)pplVar17 + (longlong)plVar18);
            *(longlong **)((longlong)pplVar17 + (longlong)plVar18) = plVar13;
            if (plStack_1f8 != (longlong *)0x0) {
              (**(code **)(*plStack_1f8 + 0x38))();
            }
            iVar22 = iVar22 + 1;
            plVar13 = (longlong *)plVar6[0x30e];
            plVar18 = (longlong *)plVar6[0x30d];
            pplVar17 = pplVar17 + 1;
          } while ((ulonglong)(longlong)iVar22 < ((longlong)plVar13 - (longlong)plVar18 >> 3) - 1U);
        }
        uVar14 = (longlong)plVar13 - (longlong)plVar18 >> 3;
        uVar26 = uVar14 - 1;
        if (uVar14 < uVar26) {
          if (plVar6[0x30f] - (longlong)plVar13 >> 3 == -1) {
            for (lVar20 = 0x1fffffffffffffff; lVar20 != 0; lVar20 = lVar20 + -1) {
              *plVar13 = 0;
              plVar13 = plVar13 + 1;
            }
            plVar13 = (longlong *)(plVar6[0x30e] + -8);
          }
          else {
            uVar19 = uVar14 * 2;
            if (uVar14 == 0) {
              uVar19 = 1;
            }
            if (uVar19 < uVar26) {
              uVar19 = uVar26;
            }
            if (uVar19 == 0) {
              plVar10 = (longlong *)0x0;
              plVar23 = plVar10;
            }
            else {
              plVar10 = (longlong *)FUN_18062b420(_DAT_180c8ed18,uVar19 * 8,(char)plVar6[0x310]);
              plVar13 = (longlong *)plVar6[0x30e];
              plVar18 = (longlong *)plVar6[0x30d];
              plVar23 = plVar10;
            }
            for (; plVar18 != plVar13; plVar18 = plVar18 + 1) {
              *plVar10 = *plVar18;
              *plVar18 = 0;
              plVar10 = plVar10 + 1;
            }
            plVar13 = plVar10;
            for (lVar20 = 0x1fffffffffffffff; lVar20 != 0; lVar20 = lVar20 + -1) {
              *plVar13 = 0;
              plVar13 = plVar13 + 1;
            }
            plVar13 = plVar10 + -1;
            plVar18 = (longlong *)plVar6[0x30e];
            plVar10 = (longlong *)plVar6[0x30d];
            if (plVar10 != plVar18) {
              do {
                if ((longlong *)*plVar10 != (longlong *)0x0) {
                  (**(code **)(*(longlong *)*plVar10 + 0x38))();
                }
                plVar10 = plVar10 + 1;
              } while (plVar10 != plVar18);
              plVar10 = (longlong *)plVar6[0x30d];
            }
            if (plVar10 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(plVar10);
            }
            plVar6[0x30d] = (longlong)plVar23;
            plVar6[0x30f] = (longlong)(plVar23 + uVar19);
          }
        }
        else {
          plVar10 = plVar18 + uVar26;
          if (plVar10 != plVar13) {
            do {
              if ((longlong *)*plVar10 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar10 + 0x38))();
              }
              plVar10 = plVar10 + 1;
            } while (plVar10 != plVar13);
            plVar18 = (longlong *)plVar6[0x30d];
          }
          plVar13 = plVar18 + uVar26;
        }
        plVar6[0x30e] = (longlong)plVar13;
      }
      else {
        iVar24 = iVar24 + 1;
        pplStack_298 = pplStack_298 + 1;
      }
      lVar20 = plVar6[0x30d];
      param_1 = (longlong)plVar13 - lVar20 >> 3;
    } while ((ulonglong)(longlong)iVar24 < param_1);
  }
  lVar20 = _DAT_180c82868;
  uVar26 = 0;
  if ((char)plVar6[0x2fd] == '\0') {
    if ((_DAT_180c8a9c0 != 0) &&
       (plVar13 = *(longlong **)(_DAT_180c8a9c0 + 0x220), plVar13 != (longlong *)0x0)) {
      pplStack_298 = &plStack_268;
      plStack_268 = plVar13;
      (**(code **)(*plVar13 + 0x28))();
      FUN_18005e110(lVar20,&plStack_268);
    }
    FUN_1800f9350();
    lVar20 = plVar6[0x30d];
    uVar14 = uVar26;
    if (plVar6[0x30e] - lVar20 >> 3 != 0) {
      do {
        plVar13 = *(longlong **)(lVar20 + uVar14);
        if ((*(char *)((longlong)plVar13 + 0xde) == '\0') &&
           (*(char *)((longlong)plVar13 + 0xdd) != '\0')) {
          (**(code **)(*plVar13 + 0x90))();
        }
        uVar16 = (int)uVar26 + 1;
        uVar26 = (ulonglong)uVar16;
        lVar20 = plVar6[0x30d];
        uVar14 = uVar14 + 8;
      } while ((ulonglong)(longlong)(int)uVar16 < (ulonglong)(plVar6[0x30e] - lVar20 >> 3));
    }
  }
  else {
    FUN_1800f9090(param_1,*plVar6);
    lVar20 = plVar6[0x30d];
    uVar14 = uVar26;
    uVar19 = uVar26;
    if (plVar6[0x30e] - lVar20 >> 3 != 0) {
      do {
        plVar13 = *(longlong **)(uVar19 + lVar20);
        if ((*(char *)((longlong)plVar13 + 0xde) == '\0') &&
           (*(char *)((longlong)plVar13 + 0xdd) != '\0')) {
          (**(code **)(*plVar13 + 0xe8))(plVar13,*plVar6);
        }
        uVar16 = (int)uVar14 + 1;
        lVar20 = plVar6[0x30d];
        uVar14 = (ulonglong)uVar16;
        uVar19 = uVar19 + 8;
      } while ((ulonglong)(longlong)(int)uVar16 < (ulonglong)(plVar6[0x30e] - lVar20 >> 3));
    }
    lVar20 = _DAT_180c82868;
    if ((_DAT_180c8a9c0 != 0) &&
       (plVar13 = *(longlong **)(_DAT_180c8a9c0 + 0x220), plVar13 != (longlong *)0x0)) {
      pplStack_298 = &plStack_280;
      plStack_280 = plVar13;
      (**(code **)(*plVar13 + 0x28))();
      FUN_18005e110(lVar20,&plStack_280);
    }
    if (*(int *)(_DAT_180c8a9c8 + 0x380) != 0) {
      FUN_1800f9350();
    }
    lVar20 = plVar6[0x30d];
    uVar14 = uVar26;
    uVar19 = uVar26;
    if (plVar6[0x30e] - lVar20 >> 3 != 0) {
      do {
        lVar20 = *(longlong *)(uVar19 + lVar20);
        if ((*(char *)(lVar20 + 0xde) == '\0') && (*(char *)(lVar20 + 0xdd) != '\0')) {
          FUN_180244e10(lVar20,*plVar6);
        }
        uVar16 = (int)uVar14 + 1;
        lVar20 = plVar6[0x30d];
        uVar14 = (ulonglong)uVar16;
        uVar19 = uVar19 + 8;
      } while ((ulonglong)(longlong)(int)uVar16 < (ulonglong)(plVar6[0x30e] - lVar20 >> 3));
    }
    if (*(int *)(_DAT_180c8a9c8 + 0x380) == 0) {
      FUN_1800f9350();
    }
    lVar20 = _DAT_180c82868;
    if ((_DAT_180c8a9c0 != 0) &&
       (plVar13 = *(longlong **)(_DAT_180c8a9c0 + 0x228), plVar13 != (longlong *)0x0)) {
      pplStack_298 = &plStack_278;
      plStack_278 = plVar13;
      (**(code **)(*plVar13 + 0x28))();
      FUN_18005e6a0(lVar20,&plStack_278,0);
      plStack_1f0 = *(longlong **)(_DAT_180c8a9c0 + 0x228);
      *(uint64_t *)(_DAT_180c8a9c0 + 0x228) = 0;
      if (plStack_1f0 != (longlong *)0x0) {
        (**(code **)(*plStack_1f0 + 0x38))();
      }
    }
    lVar20 = plVar6[0x30d];
    uVar14 = uVar26;
    uVar19 = uVar26;
    if (plVar6[0x30e] - lVar20 >> 3 != 0) {
      do {
        plVar13 = *(longlong **)(uVar19 + lVar20);
        if ((*(char *)((longlong)plVar13 + 0xde) == '\0') &&
           (*(char *)((longlong)plVar13 + 0xdd) != '\0')) {
          (**(code **)(*plVar13 + 0xe0))(plVar13,*plVar6);
        }
        uVar16 = (int)uVar14 + 1;
        lVar20 = plVar6[0x30d];
        uVar14 = (ulonglong)uVar16;
        uVar19 = uVar19 + 8;
      } while ((ulonglong)(longlong)(int)uVar16 < (ulonglong)(plVar6[0x30e] - lVar20 >> 3));
    }
    lVar11 = _DAT_180c86880;
    lVar20 = *(longlong *)(_DAT_180c86880 + 0x18);
    uVar14 = uVar26;
    if (*(longlong *)(_DAT_180c86880 + 0x20) - lVar20 >> 3 != 0) {
      do {
        lVar15 = _DAT_180c82868;
        lVar20 = *(longlong *)(uVar26 + lVar20);
        plVar13 = *(longlong **)(lVar20 + 0x1b0);
        if (plVar13 != (longlong *)0x0) {
          pplStack_298 = &plStack_270;
          plStack_270 = plVar13;
          (**(code **)(*plVar13 + 0x28))();
          FUN_18005e6a0(lVar15,&plStack_270,0);
          plStack_1e8 = *(longlong **)(lVar20 + 0x1b0);
          *(uint64_t *)(lVar20 + 0x1b0) = 0;
          if (plStack_1e8 != (longlong *)0x0) {
            (**(code **)(*plStack_1e8 + 0x38))();
          }
        }
        uVar16 = (int)uVar14 + 1;
        uVar26 = uVar26 + 8;
        lVar20 = *(longlong *)(lVar11 + 0x18);
        uVar14 = (ulonglong)uVar16;
      } while ((ulonglong)(longlong)(int)uVar16 <
               (ulonglong)(*(longlong *)(lVar11 + 0x20) - lVar20 >> 3));
    }
  }
  lVar11 = 0;
  auStack_288[0] = 0x3f800000;
  lVar20 = 0;
  bVar25 = 0;
  if ((char)plVar6[0x2bf] == '\0') {
    lVar20 = FUN_1800daa50();
    *(int8_t *)(lVar20 + 0x11c35) = 1;
    *(uint64_t *)(lVar20 + 0x11c18) = 0;
    *(int32_t *)(lVar20 + 0x11c20) = *(int32_t *)((longlong)plVar6 + 0x17ec);
    *(int *)(lVar20 + 0x11c24) = (int)plVar6[0x2fe];
    *(int32_t *)(lVar20 + 4) = 6;
    *(int32_t *)(lVar20 + 0x9a2c) = 10000;
    lVar11 = 2;
    plVar13 = (longlong *)(lVar20 + 0x30);
    plVar18 = plVar6 + 0x2d4;
    do {
      plVar23 = plVar18;
      plVar10 = plVar13;
      lVar15 = plVar23[1];
      *plVar10 = *plVar23;
      plVar10[1] = lVar15;
      lVar15 = plVar23[3];
      plVar10[2] = plVar23[2];
      plVar10[3] = lVar15;
      lVar15 = plVar23[5];
      plVar10[4] = plVar23[4];
      plVar10[5] = lVar15;
      lVar15 = plVar23[7];
      plVar10[6] = plVar23[6];
      plVar10[7] = lVar15;
      lVar15 = plVar23[9];
      plVar10[8] = plVar23[8];
      plVar10[9] = lVar15;
      lVar15 = plVar23[0xb];
      plVar10[10] = plVar23[10];
      plVar10[0xb] = lVar15;
      lVar15 = plVar23[0xd];
      plVar10[0xc] = plVar23[0xc];
      plVar10[0xd] = lVar15;
      lVar15 = plVar23[0xf];
      plVar10[0xe] = plVar23[0xe];
      plVar10[0xf] = lVar15;
      lVar11 = lVar11 + -1;
      plVar13 = plVar10 + 0x10;
      plVar18 = plVar23 + 0x10;
    } while (lVar11 != 0);
    lVar11 = plVar23[0x11];
    plVar10[0x10] = plVar23[0x10];
    plVar10[0x11] = lVar11;
    lVar11 = plVar23[0x13];
    plVar10[0x12] = plVar23[0x12];
    plVar10[0x13] = lVar11;
    uVar9 = *(int32_t *)((longlong)plVar23 + 0xa4);
    lVar11 = plVar23[0x15];
    uVar3 = *(int32_t *)((longlong)plVar23 + 0xac);
    *(int *)(plVar10 + 0x14) = (int)plVar23[0x14];
    *(int32_t *)((longlong)plVar10 + 0xa4) = uVar9;
    *(int *)(plVar10 + 0x15) = (int)lVar11;
    *(int32_t *)((longlong)plVar10 + 0xac) = uVar3;
    uVar9 = *(int32_t *)((longlong)plVar23 + 0xb4);
    lVar11 = plVar23[0x17];
    uVar3 = *(int32_t *)((longlong)plVar23 + 0xbc);
    *(int *)(plVar10 + 0x16) = (int)plVar23[0x16];
    *(int32_t *)((longlong)plVar10 + 0xb4) = uVar9;
    *(int *)(plVar10 + 0x17) = (int)lVar11;
    *(int32_t *)((longlong)plVar10 + 0xbc) = uVar3;
    FUN_18024b8d0(lVar20);
    FUN_180094b30(lVar20,&UNK_180a013b0);
    if ((int)(_DAT_180c86950[0x30e] - _DAT_180c86950[0x30d] >> 3) == 0) {
      *(int8_t *)(lVar20 + 0x12c0a) = 1;
    }
    plVar13 = *(longlong **)(_DAT_180c86938 + 0x121e0);
    if (plVar13 != (longlong *)0x0) {
      plStack_1e0 = plVar13;
      (**(code **)(*plVar13 + 0x28))(plVar13);
    }
    plStack_1e0 = *(longlong **)(lVar20 + 0x9690);
    *(longlong **)(lVar20 + 0x9690) = plVar13;
    if (plStack_1e0 != (longlong *)0x0) {
      (**(code **)(*plStack_1e0 + 0x38))();
    }
    plStack_1d8 = *(longlong **)(lVar20 + 0x96a8);
    *(uint64_t *)(lVar20 + 0x96a8) = 0;
    if (plStack_1d8 != (longlong *)0x0) {
      (**(code **)(*plStack_1d8 + 0x38))();
    }
    *(int8_t *)(lVar20 + 0x1c60) = 1;
    if (((*(int *)(lVar20 + 0x124bc) == 0) && (*(int *)(lVar20 + 0x2920) == 0)) &&
       ((*(int *)(lVar20 + 0x2108) == 0 && (*(int *)(lVar20 + 0x1fe0) == 0)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((*(int *)(_DAT_180c86890 + 0x12d8) == 0x12) || ((*(byte *)(lVar20 + 0x1bd8) & 0x20) == 0))
       || (((*(longlong *)(lVar20 + 0x99b8) == 0 ||
            ((*(uint *)(*(longlong *)(lVar20 + 0x99b8) + 0x98) & 0x8000101e) == 0)) &&
           (((*(char *)(lVar20 + 0x124c4) == '\0' && (!bVar5)) && (*(int *)(lVar20 + 0x1bdc) == 0)))
           ))) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    *(int8_t *)(lVar20 + 0x1c61) = uVar8;
    if (*(int *)(lVar20 + 8) != -1) {
      bVar25 = (byte)*(int32_t *)(lVar20 + 0x18);
    }
    *(byte *)(lVar20 + 0x1c62) = bVar25 & 1;
    uVar9 = func_0x00018024c420(lVar20);
    *(int32_t *)(lVar20 + 0x1c64) = uVar9;
    FUN_180090710(plVar6 + 6,lVar20,auStack_288);
  }
  else {
    lVar15 = plVar6[0x2c0];
    if (((lVar15 == 0) ||
        (*(short *)(lVar15 + 0x32c) != *(short *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x32c)))
       || (*(short *)(lVar15 + 0x32e) != *(short *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x32e)
          )) {
      uStack_248 = 1;
      uStack_244 = 1;
      uStack_23c = 0;
      uStack_238 = 0;
      uStack_234 = 0;
      uStack_230 = 0x3f800000;
      uStack_22b = 1;
      uStack_22c = 0;
      uStack_220 = 0xffffffff;
      uStack_21c = 0;
      uStack_240 = 7;
      uStack_250 = (uint)*(ushort *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x32c);
      uStack_24c = (uint)*(ushort *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x32e);
      puStack_138 = &UNK_1809fcc58;
      puStack_130 = auStack_120;
      auStack_120[0] = 0;
      uStack_128 = 0x12;
      strcpy_s(auStack_120,0x40,&UNK_180a013e0);
      puStack_d8 = &UNK_1809fcc28;
      puStack_d0 = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = uStack_128;
      puVar21 = &system_buffer_ptr;
      if (puStack_130 != (void *)0x0) {
        puVar21 = puStack_130;
      }
      strcpy_s(auStack_c0,0x80,puVar21);
      plVar13 = (longlong *)FUN_1800b1230(_DAT_180c86930,&plStack_1c8,&puStack_d8,&uStack_250);
      plVar13 = (longlong *)*plVar13;
      if (plVar13 != (longlong *)0x0) {
        plStack_1d0 = plVar13;
        (**(code **)(*plVar13 + 0x28))(plVar13);
      }
      plStack_1d0 = (longlong *)plVar6[0x2c0];
      plVar6[0x2c0] = (longlong)plVar13;
      if (plStack_1d0 != (longlong *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      if (plStack_1c8 != (longlong *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      puStack_d8 = &UNK_18098bcb0;
      puStack_138 = &UNK_18098bcb0;
    }
    lStack_218 = 0;
    lStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 3;
    FUN_1800da760(_DAT_180c86890,*plVar6,&lStack_218);
    iVar24 = 0;
    lVar15 = lStack_218;
    if (lStack_210 - lStack_218 >> 3 != 0) {
      do {
        lVar2 = *(longlong *)(lVar15 + lVar11);
        if (*(longlong *)(lVar2 + 0x9690) == *(longlong *)(_DAT_180c86938 + 0x121e0)) {
          if (*(int *)(lVar2 + 8) == -1) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(uint *)(lVar2 + 0x18);
          }
          if ((uVar16 & 1) == 0) {
            plVar13 = (longlong *)plVar6[0x2c0];
            if (plVar13 != (longlong *)0x0) {
              plStack_1c0 = plVar13;
              (**(code **)(*plVar13 + 0x28))(plVar13);
            }
            plStack_1c0 = *(longlong **)(lVar2 + 0x9690);
            *(longlong **)(lVar2 + 0x9690) = plVar13;
            lVar15 = lStack_218;
            if (plStack_1c0 != (longlong *)0x0) {
              (**(code **)(*plStack_1c0 + 0x38))();
              lVar15 = lStack_218;
            }
          }
        }
        iVar24 = iVar24 + 1;
        lVar11 = lVar11 + 8;
      } while ((ulonglong)(longlong)iVar24 < (ulonglong)(lStack_210 - lVar15 >> 3));
    }
    if (lStack_218 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((char)plVar6[0x2bf] == '\0') {
    lVar11 = *plVar6;
    LOCK();
    piVar1 = (int *)(lVar11 + 0x11a48);
    iVar24 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(longlong *)(lVar11 + 0x9a48 + (longlong)iVar24 * 8) = lVar20;
    uVar9 = *(int32_t *)(lVar11 + 0x9a38);
    uVar3 = *(int32_t *)(lVar11 + 0x9a3c);
    uVar4 = *(int32_t *)(lVar11 + 0x9a40);
    *(int32_t *)(lVar20 + 0x9a34) = *(int32_t *)(lVar11 + 0x9a34);
    *(int32_t *)(lVar20 + 0x9a38) = uVar9;
    *(int32_t *)(lVar20 + 0x9a3c) = uVar3;
    *(int32_t *)(lVar20 + 0x9a40) = uVar4;
    FUN_180092b20(plVar6,*plVar6);
  }
  pcVar7 = _DAT_180c8a980;
  if (*_DAT_180c8a980 != '\0') {
    FUN_1800f1850(_DAT_180c8a980);
    *pcVar7 = '\0';
  }
  if (pcVar7[1] != '\0') {
    FUN_1800f1ff0(pcVar7);
    pcVar7[1] = '\0';
  }
  if (pcVar7[2] != '\0') {
    FUN_1800f25a0(pcVar7);
    pcVar7[2] = '\0';
  }
  if (pcVar7[3] != '\0') {
    FUN_1800f2940(pcVar7);
    pcVar7[3] = '\0';
  }
  lVar20 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(&lStack_1b8);
    lVar20 = lStack_1b8;
  }
  *(double *)(_DAT_180c86870 + 0x70) =
       ((double)(lVar20 - _DAT_180c8ed48) * _DAT_180c8ed50 - *(double *)(_DAT_180c86870 + 0x68)) *
       1000.0;
  uVar9 = *(int32_t *)(_DAT_180c86890 + 0x2808);
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 3;
  lVar20 = *plVar6;
  pplVar17 = (longlong **)(_DAT_180c86890 + 0x68);
  pplStack_258 = pplVar17;
  iVar24 = _Mtx_lock(pplVar17);
  if (iVar24 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar24);
  }
  uVar12 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
  pplStack_298 = (longlong **)&uStack_1a0;
  puStack_190 = &UNK_180093fd0;
  puStack_188 = &UNK_180093fc0;
  uStack_1b0._0_4_ = (int32_t)lVar20;
  uStack_1b0._4_4_ = (int32_t)((ulonglong)lVar20 >> 0x20);
  uStack_1a0 = (int32_t)uStack_1b0;
  uStack_19c = uStack_1b0._4_4_;
  uStack_194 = uStack_1a4;
  uStack_1b0 = lVar20;
  uStack_1a8 = uVar9;
  uStack_198 = uVar9;
  plVar13 = (longlong *)FUN_18006b640(uVar12,&uStack_1a0);
  lVar20 = _DAT_180c86890;
  if (plVar13 != (longlong *)0x0) {
    pplStack_260 = (longlong **)plVar13;
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  pplStack_260 = *(longlong ***)(lVar20 + 0x60);
  *(longlong **)(lVar20 + 0x60) = plVar13;
  if (pplStack_260 != (longlong **)0x0) {
    (*(code *)(*pplStack_260)[7])();
  }
  *(uint64_t *)(*(longlong *)(_DAT_180c86890 + 0x60) + 0x18) = 0xfffffffffffffffe;
  iVar24 = _Mtx_unlock(pplVar17);
  if (iVar24 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar24);
  }
  lVar20 = _DAT_180c82868;
  if (*(int *)(_DAT_180c8a9c8 + 0x3f0) == 0) {
    pplStack_258 = &plStack_290;
    plStack_290 = *(longlong **)(_DAT_180c86890 + 0x60);
    if (plStack_290 != (longlong *)0x0) {
      (**(code **)(*plStack_290 + 0x28))();
    }
    pplStack_260 = &plStack_290;
    (**(code **)(*plStack_290 + 0x78))();
    lVar11 = FUN_18005eb80(lVar20 + 0x548);
    if (lVar11 != 0) {
      FUN_18005f220(lVar11,&plStack_290);
    }
    do {
      iVar24 = ReleaseSemaphore(*(uint64_t *)(lVar20 + 0x68),1,0);
    } while (iVar24 == 0);
    if (plStack_290 != (longlong *)0x0) {
      (**(code **)(*plStack_290 + 0x38))();
    }
  }
  else {
    (**(code **)(**(longlong **)(_DAT_180c86890 + 0x60) + 0x60))();
    plVar13 = *(longlong **)(_DAT_180c86890 + 0x60);
    if (*(code **)(*plVar13 + 0x70) == (code *)&UNK_180049530) {
      LOCK();
      *(int8_t *)(plVar13 + 2) = 1;
      UNLOCK();
      FUN_1800466d0(plVar13 + 4);
    }
    else {
      (**(code **)(*plVar13 + 0x70))();
    }
  }
  FUN_180055fa0();
  (**(code **)(**(longlong **)(_DAT_180c86870 + 0x2b0) + 0xa8))();
  uVar9 = FUN_1801b5480(_DAT_180c86890 + 0xb8);
  if (*(char *)(_DAT_180c86890 + 0x12dc) != '\0') {
    pplStack_258 = aplStack_178;
    puStack_168 = &UNK_180093fa0;
    pcStack_160 = _guard_check_icall;
    uVar9 = FUN_18005c650(aplStack_178);
  }
  FUN_1800d36c0(uVar9,*plVar6);
  *plVar6 = 0;
  *(int8_t *)(plVar6 + 1) = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_2b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void set_render_aspect_ratio(uint64_t param_1,int param_2,int param_3)
void set_render_aspect_ratio(uint64_t param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = _DAT_180c86950;
  fVar7 = (float)param_2;
  fVar9 = (float)param_3;
  if ((*(float *)(_DAT_180c86950 + 0x17ec) != fVar7) ||
     (fVar6 = *(float *)(_DAT_180c86950 + 0x17ec), fVar8 = *(float *)(_DAT_180c86950 + 0x17f0),
     *(float *)(_DAT_180c86950 + 0x17f0) != fVar9)) {
    *(float *)(_DAT_180c86950 + 0x17ec) = fVar7;
    *(float *)(lVar2 + 0x17f0) = fVar9;
    lVar3 = *(longlong *)(lVar2 + 0x1868);
    iVar4 = 0;
    fVar6 = fVar7;
    fVar8 = fVar9;
    if (*(longlong *)(lVar2 + 0x1870) - lVar3 >> 3 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(lVar5 + lVar3);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0xf8))
                    (plVar1,(int)*(float *)(lVar2 + 0x17ec),(int)*(float *)(lVar2 + 0x17f0));
        }
        lVar3 = *(longlong *)(lVar2 + 0x1868);
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 8;
      } while ((ulonglong)(longlong)iVar4 < (ulonglong)(*(longlong *)(lVar2 + 0x1870) - lVar3 >> 3))
      ;
      fVar6 = *(float *)(lVar2 + 0x17ec);
      fVar8 = *(float *)(lVar2 + 0x17f0);
    }
  }
  fVar7 = SQRT(fVar8 / fVar6);
  *(float *)(lVar2 + 0x17f4) = fVar7;
  *(float *)(lVar2 + 0x17f8) = 1.0 / fVar7;
  *(float *)(lVar2 + 0x17fc) = (fVar8 / fVar6) * 1.3333334;
  return;
}





// 函数: void update_render_ratio_for_objects(float param_1,longlong param_2,float param_3)
void update_render_ratio_for_objects(float param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  int iVar2;
  longlong lVar3;
  float fVar4;
  
  iVar2 = 0;
  if (in_RAX >> 3 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + param_2);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xf8))
                  (plVar1,(int)*(float *)(unaff_RBX + 0x17ec),(int)*(float *)(unaff_RBX + 0x17f0));
      }
      param_2 = *(longlong *)(unaff_RBX + 0x1868);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while ((ulonglong)(longlong)iVar2 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1870) - param_2 >> 3));
    param_1 = *(float *)(unaff_RBX + 0x17ec);
    param_3 = *(float *)(unaff_RBX + 0x17f0);
  }
  fVar4 = SQRT(param_3 / param_1);
  *(float *)(unaff_RBX + 0x17f4) = fVar4;
  *(float *)(unaff_RBX + 0x17f8) = 1.0 / fVar4;
  *(float *)(unaff_RBX + 0x17fc) = (param_3 / param_1) * 1.3333334;
  return;
}





// 函数: void apply_aspect_ratio_to_objects(uint64_t param_1,longlong param_2)
void apply_aspect_ratio_to_objects(uint64_t param_1,longlong param_2)

{
  longlong *plVar1;
  longlong unaff_RBX;
  uint unaff_ESI;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = (ulonglong)unaff_ESI;
  do {
    plVar1 = *(longlong **)(uVar2 + param_2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xf8))
                (plVar1,(int)*(float *)(unaff_RBX + 0x17ec),(int)*(float *)(unaff_RBX + 0x17f0));
    }
    param_2 = *(longlong *)(unaff_RBX + 0x1868);
    unaff_ESI = unaff_ESI + 1;
    uVar2 = uVar2 + 8;
  } while ((ulonglong)(longlong)(int)unaff_ESI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x1870) - param_2 >> 3));
  fVar4 = *(float *)(unaff_RBX + 0x17f0) / *(float *)(unaff_RBX + 0x17ec);
  fVar3 = SQRT(fVar4);
  *(float *)(unaff_RBX + 0x17f4) = fVar3;
  *(float *)(unaff_RBX + 0x17f8) = 1.0 / fVar3;
  *(float *)(unaff_RBX + 0x17fc) = fVar4 * 1.3333334;
  return;
}





// 函数: void calculate_aspect_ratio_values(float param_1,uint64_t param_2,float param_3)
void calculate_aspect_ratio_values(float param_1,uint64_t param_2,float param_3)

{
  longlong unaff_RBX;
  float fVar1;
  
  fVar1 = SQRT(param_3 / param_1);
  *(float *)(unaff_RBX + 0x17f4) = fVar1;
  *(float *)(unaff_RBX + 0x17f8) = 1.0 / fVar1;
  *(float *)(unaff_RBX + 0x17fc) = (param_3 / param_1) * 1.3333334;
  return;
}





// 函数: void update_aspect_ratio_cache(float param_1,uint64_t param_2,float param_3)
void update_aspect_ratio_cache(float param_1,uint64_t param_2,float param_3)

{
  longlong unaff_RBX;
  float fVar1;
  
  fVar1 = SQRT(param_3 / param_1);
  *(float *)(unaff_RBX + 0x17f4) = fVar1;
  *(float *)(unaff_RBX + 0x17f8) = 1.0 / fVar1;
  *(float *)(unaff_RBX + 0x17fc) = (param_3 / param_1) * 1.3333334;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void set_object_render_state(longlong param_1,char param_2)
void set_object_render_state(longlong param_1,char param_2)

{
  uint64_t uVar1;
  
  if (*(char *)(param_1 + 0x1609) != param_2) {
    if ((param_2 == '\0') || (*(char *)(_DAT_180c868d0 + 0x2028) == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    FUN_1801723a0(*(uint64_t *)(_DAT_180c86870 + 8),uVar1,*(int32_t *)(param_1 + 0x160c));
    *(char *)(param_1 + 0x1609) = param_2;
  }
  return;
}



float calculate_render_projection(float *param_1,float *param_2,float *param_3,float *param_4,int param_5,
                   int param_6,float *param_7)

{
  float fVar1;
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
  
  fVar1 = param_1[1];
  fVar2 = param_1[5];
  fVar3 = param_1[9];
  fVar4 = param_2[1];
  fVar5 = param_1[0xd];
  fVar6 = param_2[2];
  fVar7 = param_1[10];
  fVar8 = param_1[6];
  fVar9 = *param_2;
  fVar10 = param_1[2];
  fVar11 = param_1[0xe];
  fVar12 = fVar4 * param_1[7] + fVar9 * param_1[3] + fVar6 * param_1[0xb] + param_1[0xf];
  *param_3 = ((fVar4 * param_1[4] + fVar9 * *param_1 + fVar6 * param_1[8] + param_1[0xc]) / fVar12 +
             1.0) * 0.5 * (float)param_5;
  *param_4 = (0.5 - ((fVar9 * fVar1 + fVar4 * fVar2 + fVar6 * fVar3 + fVar5) / fVar12) * 0.5) *
             (float)param_6;
  *param_7 = fVar12;
  return fVar4 * fVar8 + fVar9 * fVar10 + fVar6 * fVar7 + fVar11;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



