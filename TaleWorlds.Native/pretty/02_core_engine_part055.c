#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part055.c - 1 个函数

// 函数: void FUN_180091430(void)
void FUN_180091430(void)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  int32_t uVar4;
  longlong lVar5;
  uint64_t uVar6;
  longlong *plVar7;
  int32_t uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  void *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int8_t auStack_158 [32];
  uint64_t uStack_138;
  longlong *plStack_130;
  longlong **pplStack_128;
  void *puStack_118;
  int32_t *puStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  int32_t uStack_e8;
  int32_t uStack_e4;
  int32_t uStack_e0;
  int32_t uStack_dc;
  longlong alStack_d8 [2];
  void *puStack_c8;
  void *puStack_c0;
  int32_t uStack_b8;
  undefined auStack_b0 [136];
  ulonglong uStack_28;
  
  plVar7 = _DAT_180c86950;
  alStack_d8[1] = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  if ((char)_DAT_180c86950[1] != '\x01') {
    *(int8_t *)(_DAT_180c86950 + 1) = 1;
    lVar9 = FUN_1800daa50();
    *plVar7 = lVar9;
    uVar16 = 0;
    puStack_c8 = &UNK_1809fcc28;
    puStack_c0 = auStack_b0;
    auStack_b0[0] = 0;
    uStack_b8 = 0x1d;
    strcpy_s(auStack_b0,0x80,&UNK_180a01340);
    puVar13 = &DAT_18098bc73;
    if (puStack_c0 != (void *)0x0) {
      puVar13 = puStack_c0;
    }
    (**(code **)(*(longlong *)(lVar9 + 0x3520) + 0x10))((longlong *)(lVar9 + 0x3520),puVar13);
    puStack_c8 = &UNK_18098bcb0;
    FUN_180094b30(*plVar7,&UNK_180a013a8);
    *(uint *)(*plVar7 + 4) = *(uint *)(*plVar7 + 4) | 0x8000000;
    *(uint *)(*plVar7 + 4) = *(uint *)(*plVar7 + 4) | 4;
    plVar11 = plVar7 + 0x2d4;
    *(int8_t *)(plVar7 + 0x2f4) = 0;
    *(int32_t *)((longlong)plVar7 + 0x17b4) = 0;
    *(int32_t *)(plVar7 + 0x2f7) = 0x43fa8000;
    *(int32_t *)((longlong)plVar7 + 0x17a4) = 0xbf000000;
    *(int32_t *)(plVar7 + 0x2f5) = 0x3f000000;
    *(int32_t *)(plVar7 + 0x2f6) = 0xbf000000;
    *(int32_t *)((longlong)plVar7 + 0x17ac) = 0x3f000000;
    FUN_1802864f0();
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0x3f800000;
    *(int32_t *)(plVar11 + 0x18) = 0x3f800000;
    *(int32_t *)((longlong)plVar11 + 0xc4) = 0;
    *(int32_t *)(plVar11 + 0x19) = 0;
    *(int32_t *)((longlong)plVar11 + 0xcc) = 0;
    *(int32_t *)(plVar11 + 0x1a) = 0;
    *(int32_t *)((longlong)plVar11 + 0xd4) = 0x3f800000;
    *(int32_t *)(plVar11 + 0x1b) = 0;
    *(int32_t *)((longlong)plVar11 + 0xdc) = 0;
    plVar11[0x1c] = 0;
    plVar11[0x1d] = 0x3f800000;
    *(int32_t *)(plVar11 + 0x1e) = 0x3f000000;
    *(int32_t *)((longlong)plVar11 + 0xf4) = 0x3f000000;
    *(int32_t *)(plVar11 + 0x1f) = 0x43c80000;
    *(int32_t *)((longlong)plVar11 + 0xfc) = 0x7f7fffff;
    FUN_1802864f0();
    lVar9 = *plVar7;
    lVar14 = 2;
    plVar2 = (longlong *)(lVar9 + 0x30);
    do {
      plVar12 = plVar11;
      plVar10 = plVar2;
      lVar5 = plVar12[1];
      *plVar10 = *plVar12;
      plVar10[1] = lVar5;
      lVar5 = plVar12[3];
      plVar10[2] = plVar12[2];
      plVar10[3] = lVar5;
      lVar5 = plVar12[5];
      plVar10[4] = plVar12[4];
      plVar10[5] = lVar5;
      lVar5 = plVar12[7];
      plVar10[6] = plVar12[6];
      plVar10[7] = lVar5;
      lVar5 = plVar12[9];
      plVar10[8] = plVar12[8];
      plVar10[9] = lVar5;
      lVar5 = plVar12[0xb];
      plVar10[10] = plVar12[10];
      plVar10[0xb] = lVar5;
      lVar5 = plVar12[0xd];
      plVar10[0xc] = plVar12[0xc];
      plVar10[0xd] = lVar5;
      lVar5 = plVar12[0xf];
      plVar10[0xe] = plVar12[0xe];
      plVar10[0xf] = lVar5;
      lVar14 = lVar14 + -1;
      plVar2 = plVar10 + 0x10;
      plVar11 = plVar12 + 0x10;
    } while (lVar14 != 0);
    lVar14 = plVar12[0x11];
    plVar10[0x10] = plVar12[0x10];
    plVar10[0x11] = lVar14;
    lVar14 = plVar12[0x13];
    plVar10[0x12] = plVar12[0x12];
    plVar10[0x13] = lVar14;
    uVar8 = *(int32_t *)((longlong)plVar12 + 0xa4);
    lVar14 = plVar12[0x15];
    uVar4 = *(int32_t *)((longlong)plVar12 + 0xac);
    *(int *)(plVar10 + 0x14) = (int)plVar12[0x14];
    *(int32_t *)((longlong)plVar10 + 0xa4) = uVar8;
    *(int *)(plVar10 + 0x15) = (int)lVar14;
    *(int32_t *)((longlong)plVar10 + 0xac) = uVar4;
    uVar8 = *(int32_t *)((longlong)plVar12 + 0xb4);
    lVar14 = plVar12[0x17];
    uVar4 = *(int32_t *)((longlong)plVar12 + 0xbc);
    *(int *)(plVar10 + 0x16) = (int)plVar12[0x16];
    *(int32_t *)((longlong)plVar10 + 0xb4) = uVar8;
    *(int *)(plVar10 + 0x17) = (int)lVar14;
    *(int32_t *)((longlong)plVar10 + 0xbc) = uVar4;
    FUN_18024b8d0(lVar9);
    lVar9 = *plVar7;
    plVar11 = *(longlong **)(_DAT_180c86938 + 0x121e0);
    if (plVar11 != (longlong *)0x0) {
      uStack_138 = plVar11;
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    uStack_138 = *(longlong **)(lVar9 + 0x9690);
    *(longlong **)(lVar9 + 0x9690) = plVar11;
    if (uStack_138 != (longlong *)0x0) {
      (**(code **)(*uStack_138 + 0x38))();
    }
    pplStack_128 = *(longlong ***)(*plVar7 + 0x96a8);
    *(uint64_t *)(*plVar7 + 0x96a8) = 0;
    if (pplStack_128 != (longlong **)0x0) {
      (*(code *)(*pplStack_128)[7])();
    }
    iVar1 = *(int *)(_DAT_180c8aa08 + 0x30c);
    if (iVar1 != 0) {
      puStack_118 = &UNK_180a3c3e0;
      uStack_100 = 0;
      puStack_110 = (int32_t *)0x0;
      uStack_108 = 0;
      puStack_110 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x1f,0x13);
      *(int8_t *)puStack_110 = 0;
      uVar8 = FUN_18064e990(puStack_110);
      *puStack_110 = 0x44414853;
      puStack_110[1] = 0x43205245;
      puStack_110[2] = 0x49504d4f;
      puStack_110[3] = 0x4954414c;
      *(uint64_t *)(puStack_110 + 4) = 0x5250204e49204e4f;
      puStack_110[6] = 0x4552474f;
      *(int16_t *)(puStack_110 + 7) = 0x5353;
      *(int8_t *)((longlong)puStack_110 + 0x1e) = 0;
      uStack_108 = 0x1e;
      uStack_100._0_4_ = uVar8;
      FUN_180628040(&puStack_118,&UNK_180a013b8,iVar1);
      puStack_118 = &UNK_180a3c3e0;
      if (puStack_110 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_110 = (int32_t *)0x0;
      uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
      puStack_118 = &UNK_18098bcb0;
    }
    lVar9 = _DAT_180c86870;
    if (DAT_180c82853 != '\0') {
      lVar14 = _DAT_180c8ed58;
      if (_DAT_180c8ed58 == 0) {
        QueryPerformanceCounter(alStack_d8);
        lVar14 = alStack_d8[0];
      }
      *(double *)(*(longlong *)(lVar9 + 0x48) + 0xc0) =
           (double)(lVar14 - _DAT_180c8ed48) * _DAT_180c8ed50;
    }
    uVar6 = _DAT_180c82868;
    if ((*(int *)(_DAT_180c8a9c8 + 0x3f0) == 0) &&
       (plVar11 = *(longlong **)(_DAT_180c86890 + 0x60), plVar11 != (longlong *)0x0)) {
      pplStack_128 = &plStack_130;
      plStack_130 = plVar11;
      (**(code **)(*plVar11 + 0x28))();
      FUN_18005e6a0(uVar6,&plStack_130,0);
    }
    if (((char)plVar7[0x2fd] != '\0') &&
       (lVar9 = plVar7[0x30d], uVar17 = uVar16, plVar7[0x30e] - lVar9 >> 3 != 0)) {
      do {
        plVar11 = *(longlong **)(uVar17 + lVar9);
        if ((plVar11 != (longlong *)0x0) &&
           ((*(char *)((longlong)plVar11 + 0xde) == '\0' &&
            (*(char *)((longlong)plVar11 + 0xdd) != '\0')))) {
          lVar9 = *plVar7;
          if (*(char *)((longlong)plVar11 + 0x81) != '\0') {
            lVar14 = *(longlong *)(_DAT_180c86870 + 0x254);
            plVar11[0xc] = plVar11[0xb];
            uStack_138._0_4_ = (float)lVar14;
            if (((float)uStack_138 != *(float *)(plVar11 + 0xb)) ||
               (uStack_138._4_4_ = (float)((ulonglong)lVar14 >> 0x20),
               uStack_138._4_4_ != *(float *)((longlong)plVar11 + 0x5c))) {
              plVar11[0xb] = lVar14;
              uStack_138 = (longlong *)lVar14;
              (**(code **)(*plVar11 + 0x70))(plVar11);
            }
            plVar2 = *(longlong **)(_DAT_180c86870 + 0x25c);
            plVar11[0xe] = plVar11[0xd];
            uStack_138._0_4_ = SUB84(plVar2,0);
            uStack_138 = plVar2;
            if (((float)uStack_138 != *(float *)(plVar11 + 0xd)) ||
               (uStack_138._4_4_ = (float)((ulonglong)plVar2 >> 0x20),
               bVar3 = uStack_138._4_4_ != *(float *)((longlong)plVar11 + 0x6c), bVar3)) {
              plVar11[0xd] = (longlong)plVar2;
              (**(code **)(*plVar11 + 0x70))(plVar11);
            }
          }
          (**(code **)(*plVar11 + 0xf0))(plVar11,lVar9);
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        lVar9 = plVar7[0x30d];
        uVar17 = uVar17 + 8;
      } while ((ulonglong)(longlong)(int)uVar15 < (ulonglong)(plVar7[0x30e] - lVar9 >> 3));
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



