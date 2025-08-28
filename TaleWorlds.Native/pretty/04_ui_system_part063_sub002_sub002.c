#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part063_sub002_sub002.c - 1 个函数

// 函数: void FUN_18069a490(longlong param_1)
void FUN_18069a490(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  byte *pbVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  char cVar14;
  int8_t uVar15;
  int iVar16;
  int32_t uVar17;
  int32_t uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint64_t *puVar23;
  ulonglong uVar24;
  uint64_t *puVar25;
  uint uVar26;
  byte *pbVar27;
  int iVar28;
  byte *pbVar29;
  int *piVar30;
  longlong lVar31;
  byte *pbVar32;
  char *pcVar33;
  longlong lVar34;
  uint uVar35;
  void *puVar36;
  ulonglong uVar37;
  bool bVar38;
  int8_t auStack_b8 [32];
  uint64_t uStack_98;
  byte *pbStack_88;
  longlong lStack_80;
  int *piStack_78;
  void *puStack_68;
  int32_t uStack_60;
  longlong lStack_58;
  uint64_t *puStack_50;
  longlong alStack_48 [2];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  pbVar3 = *(byte **)(param_1 + 0x4310);
  lStack_58 = param_1 + 0x12c0;
  uStack_60 = *(int32_t *)(param_1 + 0x4424);
  lVar1 = param_1 + 0x42c0;
  uVar37 = 0;
  puVar4 = *(uint64_t **)(param_1 + 0x12a0);
  pbVar32 = pbVar3 + *(uint *)(param_1 + 0x4358);
  *(int32_t *)(param_1 + 0xfc0) = 0;
  *(int32_t *)(puVar4 + 0x11) = 0;
  pbStack_88 = pbVar3;
  lStack_80 = param_1;
  puStack_50 = puVar4;
  if ((longlong)pbVar32 - (longlong)pbVar3 < 3) {
    if (*(int *)(param_1 + 0x441c) == 0) {
      FUN_18066d370(lStack_58,7,&UNK_180948ca0);
    }
    *(int32_t *)(param_1 + 0x1e64) = 1;
    *(int32_t *)(param_1 + 0x34e0) = 0;
    *(int32_t *)(param_1 + 0x1e68) = 1;
    puStack_68 = (void *)0x0;
    pbVar29 = pbVar3;
  }
  else {
    pbVar27 = pbVar3;
    if (*(code **)(param_1 + 0x4430) != (code *)0x0) {
      if ((ulonglong)((longlong)pbVar32 - (longlong)pbVar3) < 0xb) {
        iVar16 = (int)pbVar32 - (int)pbVar3;
      }
      else {
        iVar16 = 10;
      }
      (**(code **)(param_1 + 0x4430))(*(uint64_t *)(param_1 + 0x4438),pbVar3,alStack_48,iVar16);
      pbVar27 = (byte *)alStack_48;
    }
    *(uint *)(param_1 + 0x1e64) = *pbVar27 & 1;
    *(uint *)(param_1 + 0x34e0) = *pbVar27 >> 1 & 7;
    *(uint *)(param_1 + 0x1e68) = *pbVar27 >> 4 & 1;
    puStack_68 = (void *)
                 ((longlong)(int)((uint)*(ushort *)(pbVar27 + 1) << 8) >> 5 |
                 (ulonglong)(*pbVar27 >> 5));
    if ((*(int *)(param_1 + 0x441c) == 0) &&
       ((pbVar32 < pbVar3 + (longlong)puStack_68 || (pbVar3 + (longlong)puStack_68 < pbVar3)))) {
      FUN_18066d370(param_1 + 0x12c0,7,&UNK_180948cb8);
    }
    pbVar29 = pbVar3 + 3;
    pbStack_88 = pbVar29;
    func_0x00018066e860(param_1 + 0x12c0);
    if (*(int *)(param_1 + 0x1e64) == 0) {
      if (((*(int *)(param_1 + 0x441c) == 0) || (pbVar3 + 6 < pbVar32)) &&
         ((pbVar27[3] != 0x9d || ((pbVar27[4] != 1 || (pbVar27[5] != 0x2a)))))) {
        FUN_18066d370(param_1 + 0x12c0,5,&UNK_180948ce8);
      }
      if ((*(int *)(param_1 + 0x441c) == 0) || (pbVar3 + 9 < pbVar32)) {
        *(uint *)(param_1 + 0x1a20) = *(ushort *)(pbVar27 + 6) & 0x3fff;
        *(uint *)(param_1 + 0x1a28) = (uint)(pbVar27[7] >> 6);
        *(uint *)(param_1 + 0x1a24) = *(ushort *)(pbVar27 + 8) & 0x3fff;
        *(uint *)(param_1 + 0x1a2c) = (uint)(pbVar27[9] >> 6);
      }
      pbVar29 = pbVar3 + 10;
      pbStack_88 = pbVar29;
    }
    else {
      uVar5 = puVar4[1];
      *(uint64_t *)(param_1 + 0xde0) = *puVar4;
      *(uint64_t *)(param_1 + 0xde8) = uVar5;
      uVar5 = puVar4[3];
      *(uint64_t *)(param_1 + 0xdf0) = puVar4[2];
      *(uint64_t *)(param_1 + 0xdf8) = uVar5;
      uVar5 = puVar4[5];
      *(uint64_t *)(param_1 + 0xe00) = puVar4[4];
      *(uint64_t *)(param_1 + 0xe08) = uVar5;
      uVar5 = puVar4[7];
      *(uint64_t *)(param_1 + 0xe10) = puVar4[6];
      *(uint64_t *)(param_1 + 0xe18) = uVar5;
      uVar5 = puVar4[9];
      *(uint64_t *)(param_1 + 0xe20) = puVar4[8];
      *(uint64_t *)(param_1 + 0xe28) = uVar5;
      uVar5 = puVar4[0xb];
      *(uint64_t *)(param_1 + 0xe30) = puVar4[10];
      *(uint64_t *)(param_1 + 0xe38) = uVar5;
      uVar5 = puVar4[0xd];
      *(uint64_t *)(param_1 + 0xe40) = puVar4[0xc];
      *(uint64_t *)(param_1 + 0xe48) = uVar5;
      uVar5 = puVar4[0xf];
      *(uint64_t *)(param_1 + 0xe50) = puVar4[0xe];
      *(uint64_t *)(param_1 + 0xe58) = uVar5;
      uVar5 = puVar4[0x11];
      *(uint64_t *)(param_1 + 0xe60) = puVar4[0x10];
      *(uint64_t *)(param_1 + 0xe68) = uVar5;
      uVar5 = puVar4[1];
      *(uint64_t *)(param_1 + 0xe70) = *puVar4;
      *(uint64_t *)(param_1 + 0xe78) = uVar5;
      uVar5 = puVar4[3];
      *(uint64_t *)(param_1 + 0xe80) = puVar4[2];
      *(uint64_t *)(param_1 + 0xe88) = uVar5;
      uVar5 = puVar4[5];
      *(uint64_t *)(param_1 + 0xe90) = puVar4[4];
      *(uint64_t *)(param_1 + 0xe98) = uVar5;
      uVar5 = puVar4[7];
      *(uint64_t *)(param_1 + 0xea0) = puVar4[6];
      *(uint64_t *)(param_1 + 0xea8) = uVar5;
      uVar5 = puVar4[9];
      *(uint64_t *)(param_1 + 0xeb0) = puVar4[8];
      *(uint64_t *)(param_1 + 0xeb8) = uVar5;
      uVar5 = puVar4[0xb];
      *(uint64_t *)(param_1 + 0xec0) = puVar4[10];
      *(uint64_t *)(param_1 + 0xec8) = uVar5;
      uVar5 = puVar4[0xd];
      *(uint64_t *)(param_1 + 0xed0) = puVar4[0xc];
      *(uint64_t *)(param_1 + 0xed8) = uVar5;
      uVar5 = puVar4[0xf];
      *(uint64_t *)(param_1 + 0xee0) = puVar4[0xe];
      *(uint64_t *)(param_1 + 0xee8) = uVar5;
      uVar17 = *(int32_t *)((longlong)puVar4 + 0x84);
      uVar18 = *(int32_t *)(puVar4 + 0x11);
      uVar6 = *(int32_t *)((longlong)puVar4 + 0x8c);
      *(int32_t *)(param_1 + 0xef0) = *(int32_t *)(puVar4 + 0x10);
      *(int32_t *)(param_1 + 0xef4) = uVar17;
      *(int32_t *)(param_1 + 0xef8) = uVar18;
      *(int32_t *)(param_1 + 0xefc) = uVar6;
    }
  }
  if ((*(int *)(param_1 + 0x4420) == 0) && (*(int *)(param_1 + 0x1e64) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_b8);
  }
  FUN_180699f40(param_1);
  uStack_98 = *(uint64_t *)(param_1 + 0x4438);
  iVar16 = FUN_18069ed90(lVar1,pbVar29,(int)pbVar32 - (int)pbVar29,*(uint64_t *)(param_1 + 0x4430)
                        );
  if (iVar16 != 0) {
    FUN_18066d370(param_1 + 0x12c0,2,&UNK_180948d00);
  }
  if (*(int *)(param_1 + 0x1e64) == 0) {
    FUN_18069bbd0(lVar1,0x80);
    uVar17 = FUN_18069bbd0(lVar1,0x80);
    *(int32_t *)(param_1 + 0x1a30) = uVar17;
  }
  cVar14 = FUN_18069bbd0(lVar1,0x80);
  *(char *)(param_1 + 0xf60) = cVar14;
  uVar17 = 0;
  lVar34 = param_1;
  if (cVar14 == '\0') {
    *(int16_t *)(param_1 + 0xf61) = 0;
  }
  else {
    uVar15 = FUN_18069bbd0(lVar1,0x80);
    *(int8_t *)(param_1 + 0xf61) = uVar15;
    cVar14 = FUN_18069bbd0(lVar1,0x80);
    *(char *)(param_1 + 0xf62) = cVar14;
    if (cVar14 != '\0') {
      uVar15 = FUN_18069bbd0(lVar1,0x80);
      *(int8_t *)(param_1 + 0xf63) = uVar15;
      piStack_78 = (int *)&UNK_1809495b0;
      *(uint64_t *)(param_1 + 0xf67) = 0;
      alStack_48[0] = param_1 + -0x180948649;
      do {
        pcVar33 = (char *)(alStack_48[0] + (longlong)piStack_78);
        lVar34 = 4;
        piVar30 = piStack_78;
        do {
          uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
          if (*(int *)(param_1 + 0x42d8) < 0) {
            FUN_18069ec80(lVar1);
          }
          uVar24 = *(ulonglong *)(param_1 + 0x42d0);
          uVar20 = (ulonglong)uVar26 << 0x38;
          bVar38 = uVar24 < uVar20;
          if (!bVar38) {
            uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
            uVar24 = uVar24 - uVar20;
          }
          bVar2 = (&UNK_1809495c0)[uVar26];
          *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
          *(ulonglong *)(param_1 + 0x42d0) = uVar24 << (bVar2 & 0x3f);
          *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
          if (bVar38) {
            *pcVar33 = '\0';
          }
          else {
            iVar16 = *piVar30;
            uVar24 = uVar37;
            cVar14 = '\0';
            while (iVar16 = iVar16 + -1, -1 < iVar16) {
              uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
              if (*(int *)(param_1 + 0x42d8) < 0) {
                FUN_18069ec80(lVar1);
              }
              uVar20 = *(ulonglong *)(param_1 + 0x42d0);
              uVar21 = (ulonglong)uVar26 << 0x38;
              bVar38 = uVar21 <= uVar20;
              if (bVar38) {
                uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
                uVar20 = uVar20 - uVar21;
              }
              bVar2 = (&UNK_1809495c0)[uVar26];
              *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
              uVar35 = (uint)uVar24 | (uint)bVar38 << ((byte)iVar16 & 0x1f);
              uVar24 = (ulonglong)uVar35;
              cVar14 = (char)uVar35;
              *(ulonglong *)(param_1 + 0x42d0) = uVar20 << (bVar2 & 0x3f);
              *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
            }
            *pcVar33 = cVar14;
            uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
            if (*(int *)(param_1 + 0x42d8) < 0) {
              FUN_18069ec80(lVar1);
            }
            uVar24 = *(ulonglong *)(param_1 + 0x42d0);
            uVar20 = (ulonglong)uVar26 << 0x38;
            bVar38 = uVar20 <= uVar24;
            if (bVar38) {
              uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
              uVar24 = uVar24 - uVar20;
            }
            bVar2 = (&UNK_1809495c0)[uVar26];
            *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
            *(ulonglong *)(param_1 + 0x42d0) = uVar24 << (bVar2 & 0x3f);
            *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
            piVar30 = piStack_78;
            if (bVar38) {
              *pcVar33 = -*pcVar33;
            }
          }
          pcVar33 = pcVar33 + 1;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        piStack_78 = piVar30 + 1;
        lVar34 = lStack_80;
      } while ((longlong)piStack_78 < 0x1809495b8);
    }
    lVar31 = lStack_80;
    if (*(char *)(lVar34 + 0xf61) != '\0') {
      *(int16_t *)(lVar34 + 0xf64) = 0xffff;
      *(int8_t *)(lVar34 + 0xf66) = 0xff;
      uVar24 = uVar37;
      do {
        uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
        if (*(int *)(param_1 + 0x42d8) < 0) {
          FUN_18069ec80(lVar1);
        }
        uVar20 = *(ulonglong *)(param_1 + 0x42d0);
        uVar21 = (ulonglong)uVar26 << 0x38;
        bVar38 = uVar21 <= uVar20;
        if (bVar38) {
          uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
          uVar20 = uVar20 - uVar21;
        }
        bVar2 = (&UNK_1809495c0)[uVar26];
        *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
        *(ulonglong *)(param_1 + 0x42d0) = uVar20 << (bVar2 & 0x3f);
        *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
        if (bVar38) {
          iVar16 = 7;
          uVar20 = uVar37;
          do {
            uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
            if (*(int *)(param_1 + 0x42d8) < 0) {
              FUN_18069ec80(lVar1);
            }
            uVar21 = *(ulonglong *)(param_1 + 0x42d0);
            uVar22 = (ulonglong)uVar26 << 0x38;
            bVar38 = uVar22 <= uVar21;
            if (bVar38) {
              uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
              uVar21 = uVar21 - uVar22;
            }
            bVar2 = (&UNK_1809495c0)[uVar26];
            *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
            uVar35 = (uint)uVar20 | (uint)bVar38 << ((byte)iVar16 & 0x1f);
            uVar20 = (ulonglong)uVar35;
            *(ulonglong *)(param_1 + 0x42d0) = uVar21 << (bVar2 & 0x3f);
            iVar16 = iVar16 + -1;
            *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
          } while (-1 < iVar16);
          *(char *)(uVar24 + 0xf64 + lVar31) = (char)uVar35;
        }
        uVar24 = uVar24 + 1;
        lVar34 = lStack_80;
      } while ((longlong)uVar24 < 3);
    }
  }
  iVar16 = 2;
  uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
  if (*(int *)(param_1 + 0x42d8) < 0) {
    FUN_18069ec80(lVar1);
  }
  uVar24 = *(ulonglong *)(param_1 + 0x42d0);
  uVar20 = (ulonglong)uVar26 << 0x38;
  bVar38 = uVar20 <= uVar24;
  if (bVar38) {
    uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
    uVar24 = uVar24 - uVar20;
  }
  iVar28 = 5;
  bVar2 = (&UNK_1809495c0)[uVar26];
  *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
  *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
  *(ulonglong *)(param_1 + 0x42d0) = uVar24 << (bVar2 & 0x3f);
  *(uint *)(lVar34 + 0x1ec0) = (uint)bVar38;
  uVar24 = uVar37;
  do {
    uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
    if (*(int *)(param_1 + 0x42d8) < 0) {
      FUN_18069ec80(lVar1);
    }
    uVar20 = *(ulonglong *)(param_1 + 0x42d0);
    uVar21 = (ulonglong)uVar26 << 0x38;
    bVar38 = uVar21 <= uVar20;
    if (bVar38) {
      uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
      uVar20 = uVar20 - uVar21;
    }
    bVar2 = (&UNK_1809495c0)[uVar26];
    *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
    uVar35 = (uint)uVar24 | (uint)bVar38 << ((byte)iVar28 & 0x1f);
    uVar24 = (ulonglong)uVar35;
    *(ulonglong *)(param_1 + 0x42d0) = uVar20 << (bVar2 & 0x3f);
    iVar28 = iVar28 + -1;
    *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
  } while (-1 < iVar28);
  *(uint *)(lVar34 + 0x2be0) = uVar35;
  uVar24 = uVar37;
  do {
    uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
    if (*(int *)(param_1 + 0x42d8) < 0) {
      FUN_18069ec80(lVar1);
    }
    uVar20 = *(ulonglong *)(param_1 + 0x42d0);
    uVar21 = (ulonglong)uVar26 << 0x38;
    bVar38 = uVar21 <= uVar20;
    if (bVar38) {
      uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
      uVar20 = uVar20 - uVar21;
    }
    bVar2 = (&UNK_1809495c0)[uVar26];
    *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
    uVar35 = (uint)uVar24 | (uint)bVar38 << ((byte)iVar16 & 0x1f);
    uVar24 = (ulonglong)uVar35;
    *(ulonglong *)(param_1 + 0x42d0) = uVar20 << (bVar2 & 0x3f);
    iVar16 = iVar16 + -1;
    *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
  } while (-1 < iVar16);
  *(uint *)(lVar34 + 0x2be8) = uVar35;
  *(int8_t *)(lVar34 + 0xf70) = 0;
  uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
  if (*(int *)(param_1 + 0x42d8) < 0) {
    FUN_18069ec80(lVar1);
  }
  uVar24 = *(ulonglong *)(param_1 + 0x42d0);
  uVar20 = (ulonglong)uVar26;
  bVar38 = uVar20 << 0x38 <= uVar24;
  if (bVar38) {
    uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
    uVar24 = uVar24 - (uVar20 << 0x38);
  }
  bVar2 = (&UNK_1809495c0)[uVar26];
  *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
  *(ulonglong *)(param_1 + 0x42d0) = uVar24 << (bVar2 & 0x3f);
  *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
  *(bool *)(lVar34 + 0xf6f) = bVar38;
  lVar31 = lVar34 + 0x12c0;
  if (bVar38) {
    uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
    if (*(int *)(param_1 + 0x42d8) < 0) {
      FUN_18069ec80(lVar1);
    }
    uVar24 = *(ulonglong *)(param_1 + 0x42d0);
    uVar20 = (ulonglong)uVar26;
    bVar38 = uVar20 << 0x38 <= uVar24;
    if (bVar38) {
      uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
      uVar24 = uVar24 - (uVar20 << 0x38);
    }
    bVar2 = (&UNK_1809495c0)[uVar26];
    *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
    *(ulonglong *)(param_1 + 0x42d0) = uVar24 << (bVar2 & 0x3f);
    *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
    *(bool *)(lVar34 + 0xf70) = bVar38;
    uVar24 = uVar37;
    if (bVar38) {
      do {
        uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
        if (*(int *)(param_1 + 0x42d8) < 0) {
          FUN_18069ec80(lVar1);
        }
        uVar20 = *(ulonglong *)(param_1 + 0x42d0);
        uVar21 = (ulonglong)uVar26 << 0x38;
        bVar38 = uVar21 <= uVar20;
        if (bVar38) {
          uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
          uVar20 = uVar20 - uVar21;
        }
        bVar2 = (&UNK_1809495c0)[uVar26];
        *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
        *(ulonglong *)(param_1 + 0x42d0) = uVar20 << (bVar2 & 0x3f);
        *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
        lVar19 = lStack_80;
        if (bVar38) {
          iVar16 = 5;
          uVar20 = uVar37;
          do {
            uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
            if (*(int *)(param_1 + 0x42d8) < 0) {
              FUN_18069ec80(lVar1);
            }
            lVar19 = lStack_80;
            uVar21 = *(ulonglong *)(param_1 + 0x42d0);
            uVar22 = (ulonglong)uVar26 << 0x38;
            bVar38 = uVar22 <= uVar21;
            if (bVar38) {
              uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
              uVar21 = uVar21 - uVar22;
            }
            bVar2 = (&UNK_1809495c0)[uVar26];
            *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
            uVar35 = (uint)uVar20 | (uint)bVar38 << ((byte)iVar16 & 0x1f);
            uVar20 = (ulonglong)uVar35;
            *(ulonglong *)(param_1 + 0x42d0) = uVar21 << (bVar2 & 0x3f);
            iVar16 = iVar16 + -1;
            *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
          } while (-1 < iVar16);
          *(char *)(uVar24 + 0xf75 + lStack_80) = (char)uVar35;
          uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
          if (*(int *)(param_1 + 0x42d8) < 0) {
            FUN_18069ec80(lVar1);
          }
          uVar20 = *(ulonglong *)(param_1 + 0x42d0);
          uVar21 = (ulonglong)uVar26 << 0x38;
          bVar38 = uVar21 <= uVar20;
          if (bVar38) {
            uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
            uVar20 = uVar20 - uVar21;
          }
          bVar2 = (&UNK_1809495c0)[uVar26];
          *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
          *(ulonglong *)(param_1 + 0x42d0) = uVar20 << (bVar2 & 0x3f);
          *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
          if (bVar38) {
            *(char *)(uVar24 + 0xf75 + lVar19) = -*(char *)(uVar24 + 0xf75 + lVar19);
          }
        }
        uVar24 = uVar24 + 1;
        uVar20 = uVar37;
      } while ((longlong)uVar24 < 4);
      do {
        uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
        if (*(int *)(param_1 + 0x42d8) < 0) {
          FUN_18069ec80(lVar1);
        }
        uVar24 = *(ulonglong *)(param_1 + 0x42d0);
        uVar21 = (ulonglong)uVar26 << 0x38;
        bVar38 = uVar21 <= uVar24;
        if (bVar38) {
          uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
          uVar24 = uVar24 - uVar21;
        }
        bVar2 = (&UNK_1809495c0)[uVar26];
        *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
        *(ulonglong *)(param_1 + 0x42d0) = uVar24 << (bVar2 & 0x3f);
        *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
        if (bVar38) {
          iVar16 = 5;
          uVar24 = uVar37;
          do {
            uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
            if (*(int *)(param_1 + 0x42d8) < 0) {
              FUN_18069ec80(lVar1);
            }
            uVar21 = *(ulonglong *)(param_1 + 0x42d0);
            uVar22 = (ulonglong)uVar26 << 0x38;
            bVar38 = uVar22 <= uVar21;
            if (bVar38) {
              uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
              uVar21 = uVar21 - uVar22;
            }
            bVar2 = (&UNK_1809495c0)[uVar26];
            *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
            uVar35 = (uint)uVar24 | (uint)bVar38 << ((byte)iVar16 & 0x1f);
            uVar24 = (ulonglong)uVar35;
            *(ulonglong *)(param_1 + 0x42d0) = uVar21 << (bVar2 & 0x3f);
            iVar16 = iVar16 + -1;
            *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
          } while (-1 < iVar16);
          *(char *)(uVar20 + 0xf7d + lVar19) = (char)uVar35;
          uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
          if (*(int *)(param_1 + 0x42d8) < 0) {
            FUN_18069ec80(lVar1);
          }
          uVar24 = *(ulonglong *)(param_1 + 0x42d0);
          uVar21 = (ulonglong)uVar26 << 0x38;
          bVar38 = uVar21 <= uVar24;
          if (bVar38) {
            uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
            uVar24 = uVar24 - uVar21;
          }
          bVar2 = (&UNK_1809495c0)[uVar26];
          *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
          *(ulonglong *)(param_1 + 0x42d0) = uVar24 << (bVar2 & 0x3f);
          *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
          if (bVar38) {
            *(char *)(uVar20 + 0xf7d + lVar19) = -*(char *)(uVar20 + 0xf7d + lVar19);
          }
        }
        uVar20 = uVar20 + 1;
        lVar34 = lStack_80;
        lVar31 = lStack_58;
      } while ((longlong)uVar20 < 4);
    }
  }
  FUN_18069a210(lVar34,pbStack_88 + (longlong)puStack_68);
  *(longlong *)(lVar34 + 0xfb8) = lVar34 + 0x4140;
  iVar16 = 6;
  uVar24 = uVar37;
  do {
    uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
    if (*(int *)(param_1 + 0x42d8) < 0) {
      FUN_18069ec80(lVar1);
    }
    uVar20 = *(ulonglong *)(param_1 + 0x42d0);
    uVar21 = (ulonglong)uVar26 << 0x38;
    bVar38 = uVar21 <= uVar20;
    if (bVar38) {
      uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
      uVar20 = uVar20 - uVar21;
    }
    bVar2 = (&UNK_1809495c0)[uVar26];
    *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
    uVar35 = (uint)uVar24 | (uint)bVar38 << ((byte)iVar16 & 0x1f);
    uVar24 = (ulonglong)uVar35;
    *(ulonglong *)(param_1 + 0x42d0) = uVar20 << (bVar2 & 0x3f);
    iVar16 = iVar16 + -1;
    *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
  } while (-1 < iVar16);
  *(uint *)(lVar31 + 0xbd0) = uVar35;
  pbStack_88 = (byte *)((ulonglong)pbStack_88 & 0xffffffff00000000);
  uVar18 = FUN_180699e30(lVar1,*(int32_t *)(lVar31 + 0xbd4),&pbStack_88);
  *(int32_t *)(lVar31 + 0xbd4) = uVar18;
  uVar18 = FUN_180699e30(lVar1,*(int32_t *)(lVar31 + 0xbd8),&pbStack_88);
  *(int32_t *)(lVar31 + 0xbd8) = uVar18;
  uVar18 = FUN_180699e30(lVar1,*(int32_t *)(lVar31 + 0xbdc),&pbStack_88);
  *(int32_t *)(lVar31 + 0xbdc) = uVar18;
  uVar18 = FUN_180699e30(lVar1,*(int32_t *)(lVar31 + 0xbe0),&pbStack_88);
  *(int32_t *)(lVar31 + 0xbe0) = uVar18;
  uVar18 = FUN_180699e30(lVar1,*(int32_t *)(lVar31 + 0xbe4),&pbStack_88);
  lVar34 = lStack_80;
  *(int32_t *)(lVar31 + 0xbe4) = uVar18;
  if ((int)pbStack_88 != 0) {
    FUN_18069bb20(lStack_80);
  }
  func_0x00018069ba40(lVar34,lVar34);
  if (*(int *)(lVar31 + 0xba4) != 0) {
    uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
    if (*(int *)(param_1 + 0x42d8) < 0) {
      FUN_18069ec80(lVar1);
    }
    uVar24 = *(ulonglong *)(param_1 + 0x42d0);
    uVar20 = (ulonglong)uVar26 << 0x38;
    bVar38 = uVar20 <= uVar24;
    if (bVar38) {
      uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
      uVar24 = uVar24 - uVar20;
    }
    bVar2 = (&UNK_1809495c0)[uVar26];
    *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
    *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
    *(ulonglong *)(param_1 + 0x42d0) = uVar24 << (bVar2 & 0x3f);
    *(uint *)(lVar31 + 0x1930) = (uint)bVar38;
    uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
    if (*(int *)(param_1 + 0x42d8) < 0) {
      FUN_18069ec80(lVar1);
    }
    uVar24 = *(ulonglong *)(param_1 + 0x42d0);
    uVar20 = (ulonglong)uVar26 << 0x38;
    bVar38 = uVar20 <= uVar24;
    if (bVar38) {
      uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
      uVar24 = uVar24 - uVar20;
    }
    bVar2 = (&UNK_1809495c0)[uVar26];
    *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
    *(ulonglong *)(param_1 + 0x42d0) = uVar24 << (bVar2 & 0x3f);
    *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
    *(uint *)(lVar31 + 0x1934) = (uint)bVar38;
    *(int32_t *)(lVar31 + 0x1938) = 0;
    if (*(int *)(lVar31 + 0x1930) == 0) {
      iVar16 = 1;
      uVar24 = uVar37;
      do {
        uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
        if (*(int *)(param_1 + 0x42d8) < 0) {
          FUN_18069ec80(lVar1);
        }
        uVar20 = *(ulonglong *)(param_1 + 0x42d0);
        uVar21 = (ulonglong)uVar26 << 0x38;
        bVar38 = uVar21 <= uVar20;
        if (bVar38) {
          uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
          uVar20 = uVar20 - uVar21;
        }
        bVar2 = (&UNK_1809495c0)[uVar26];
        *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
        uVar35 = (uint)uVar24 | (uint)bVar38 << ((byte)iVar16 & 0x1f);
        uVar24 = (ulonglong)uVar35;
        *(ulonglong *)(param_1 + 0x42d0) = uVar20 << (bVar2 & 0x3f);
        iVar16 = iVar16 + -1;
        *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
      } while (-1 < iVar16);
      *(uint *)(lVar31 + 0x1938) = uVar35;
    }
    *(int32_t *)(lVar31 + 0x193c) = 0;
    if (*(int *)(lVar31 + 0x1934) == 0) {
      iVar16 = 1;
      uVar24 = uVar37;
      do {
        uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
        if (*(int *)(param_1 + 0x42d8) < 0) {
          FUN_18069ec80(lVar1);
        }
        uVar20 = *(ulonglong *)(param_1 + 0x42d0);
        uVar21 = (ulonglong)uVar26 << 0x38;
        bVar38 = uVar21 <= uVar20;
        if (bVar38) {
          uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
          uVar20 = uVar20 - uVar21;
        }
        bVar2 = (&UNK_1809495c0)[uVar26];
        *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
        uVar35 = (uint)uVar24 | (uint)bVar38 << ((byte)iVar16 & 0x1f);
        uVar24 = (ulonglong)uVar35;
        *(ulonglong *)(param_1 + 0x42d0) = uVar20 << (bVar2 & 0x3f);
        iVar16 = iVar16 + -1;
        *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
      } while (-1 < iVar16);
      *(uint *)(lVar31 + 0x193c) = uVar35;
    }
    uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
    if (*(int *)(param_1 + 0x42d8) < 0) {
      FUN_18069ec80(lVar1);
    }
    uVar24 = *(ulonglong *)(param_1 + 0x42d0);
    uVar20 = (ulonglong)uVar26 << 0x38;
    bVar38 = uVar20 <= uVar24;
    if (bVar38) {
      uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
      uVar24 = uVar24 - uVar20;
    }
    bVar2 = (&UNK_1809495c0)[uVar26];
    *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
    *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
    *(ulonglong *)(param_1 + 0x42d0) = uVar24 << (bVar2 & 0x3f);
    *(uint *)(lVar31 + 0x194c) = (uint)bVar38;
    uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
    if (*(int *)(param_1 + 0x42d8) < 0) {
      FUN_18069ec80(lVar1);
    }
    uVar24 = *(ulonglong *)(param_1 + 0x42d0);
    uVar20 = (ulonglong)uVar26 << 0x38;
    bVar38 = uVar20 <= uVar24;
    if (bVar38) {
      uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
      uVar24 = uVar24 - uVar20;
    }
    bVar2 = (&UNK_1809495c0)[uVar26];
    *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
    *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
    *(ulonglong *)(param_1 + 0x42d0) = uVar24 << (bVar2 & 0x3f);
    *(uint *)(lVar31 + 0x1950) = (uint)bVar38;
  }
  uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
  if (*(int *)(param_1 + 0x42d8) < 0) {
    FUN_18069ec80(lVar1);
  }
  uVar24 = *(ulonglong *)(param_1 + 0x42d0);
  uVar20 = (ulonglong)uVar26 << 0x38;
  bVar38 = uVar20 <= uVar24;
  if (bVar38) {
    uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
    uVar24 = uVar24 - uVar20;
  }
  uVar35 = (uint)bVar38;
  bVar2 = (&UNK_1809495c0)[uVar26];
  *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
  *(ulonglong *)(param_1 + 0x42d0) = uVar24 << (bVar2 & 0x3f);
  *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
  *(uint *)(lVar31 + 0x1940) = uVar35;
  if (uVar35 == 0) {
    lVar19 = 8;
    puVar4 = (uint64_t *)(lVar31 + 0x1969);
    puVar13 = (uint64_t *)(lVar31 + 0x1dc2);
    do {
      puVar25 = puVar13;
      puVar23 = puVar4;
      uVar5 = puVar25[1];
      uVar9 = puVar25[2];
      uVar10 = puVar25[3];
      *puVar23 = *puVar25;
      puVar23[1] = uVar5;
      uVar5 = puVar25[4];
      uVar11 = puVar25[5];
      puVar23[2] = uVar9;
      puVar23[3] = uVar10;
      uVar9 = puVar25[6];
      uVar10 = puVar25[7];
      puVar23[4] = uVar5;
      puVar23[5] = uVar11;
      uVar5 = puVar25[8];
      uVar11 = puVar25[9];
      puVar23[6] = uVar9;
      puVar23[7] = uVar10;
      uVar9 = puVar25[10];
      uVar10 = puVar25[0xb];
      puVar23[8] = uVar5;
      puVar23[9] = uVar11;
      uVar5 = puVar25[0xc];
      uVar11 = puVar25[0xd];
      puVar23[10] = uVar9;
      puVar23[0xb] = uVar10;
      uVar9 = puVar25[0xe];
      uVar10 = puVar25[0xf];
      puVar23[0xc] = uVar5;
      puVar23[0xd] = uVar11;
      puVar23[0xe] = uVar9;
      puVar23[0xf] = uVar10;
      lVar19 = lVar19 + -1;
      puVar4 = puVar23 + 0x10;
      puVar13 = puVar25 + 0x10;
    } while (lVar19 != 0);
    uVar9 = puVar25[0x11];
    uVar5 = puVar25[0x1a];
    uVar10 = puVar25[0x12];
    uVar11 = puVar25[0x13];
    puVar23[0x10] = puVar25[0x10];
    puVar23[0x11] = uVar9;
    uVar9 = puVar25[0x14];
    uVar12 = puVar25[0x15];
    puVar23[0x12] = uVar10;
    puVar23[0x13] = uVar11;
    uVar10 = puVar25[0x16];
    uVar11 = puVar25[0x17];
    puVar23[0x14] = uVar9;
    puVar23[0x15] = uVar12;
    uVar18 = *(int32_t *)(puVar25 + 0x18);
    uVar6 = *(int32_t *)((longlong)puVar25 + 0xc4);
    uVar7 = *(int32_t *)(puVar25 + 0x19);
    uVar8 = *(int32_t *)((longlong)puVar25 + 0xcc);
    puVar23[0x16] = uVar10;
    puVar23[0x17] = uVar11;
    *(int32_t *)(puVar23 + 0x18) = uVar18;
    *(int32_t *)((longlong)puVar23 + 0xc4) = uVar6;
    *(int32_t *)(puVar23 + 0x19) = uVar7;
    *(int32_t *)((longlong)puVar23 + 0xcc) = uVar8;
    puVar23[0x1a] = uVar5;
    *(int8_t *)(puVar23 + 0x1b) = *(int8_t *)(puVar25 + 0x1b);
  }
  if (*(int *)(lVar31 + 0xba4) != 0) {
    uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
    if (*(int *)(param_1 + 0x42d8) < 0) {
      FUN_18069ec80(lVar1);
    }
    uVar24 = *(ulonglong *)(param_1 + 0x42d0);
    uVar20 = (ulonglong)uVar26 << 0x38;
    bVar38 = uVar24 < uVar20;
    if (!bVar38) {
      uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
      uVar24 = uVar24 - uVar20;
    }
    bVar2 = (&UNK_1809495c0)[uVar26];
    *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
    *(ulonglong *)(param_1 + 0x42d0) = uVar24 << (bVar2 & 0x3f);
    *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
    if (bVar38) goto LAB_18069b66c;
  }
  uVar17 = 1;
LAB_18069b66c:
  *(int32_t *)(lVar31 + 0x192c) = uVar17;
  puVar36 = &UNK_180949110;
  *(int32_t *)(lVar34 + 0x4424) = 1;
  piStack_78 = (int *)(lVar31 + -0x18094733b);
  lVar31 = lVar31 + -0x180947346;
  lStack_58 = lVar31;
  do {
    alStack_48[0] = 8;
    do {
      pbStack_88 = (byte *)0x0;
      uVar24 = uVar37;
      puStack_68 = puVar36;
      do {
        do {
          pbVar3 = puVar36 + uVar24;
          pbVar32 = pbVar3 + (longlong)piStack_78;
          uVar26 = ((*(int *)(param_1 + 0x42dc) + -1) * (uint)*pbVar3 >> 8) + 1;
          if (*(int *)(param_1 + 0x42d8) < 0) {
            FUN_18069ec80(lVar1);
          }
          uVar20 = *(ulonglong *)(param_1 + 0x42d0);
          uVar21 = (ulonglong)uVar26 << 0x38;
          bVar38 = uVar21 <= uVar20;
          if (bVar38) {
            uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
            uVar20 = uVar20 - uVar21;
          }
          bVar2 = (&UNK_1809495c0)[uVar26];
          *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
          *(ulonglong *)(param_1 + 0x42d0) = uVar20 << (bVar2 & 0x3f);
          *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
          if (bVar38) {
            iVar16 = 7;
            uVar20 = uVar37;
            do {
              uVar26 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
              if (*(int *)(param_1 + 0x42d8) < 0) {
                FUN_18069ec80(lVar1);
              }
              uVar21 = *(ulonglong *)(param_1 + 0x42d0);
              uVar22 = (ulonglong)uVar26 << 0x38;
              bVar38 = uVar22 <= uVar21;
              if (bVar38) {
                uVar26 = *(int *)(param_1 + 0x42dc) - uVar26;
                uVar21 = uVar21 - uVar22;
              }
              bVar2 = (&UNK_1809495c0)[uVar26];
              *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
              uVar35 = (uint)uVar20 | (uint)bVar38 << ((byte)iVar16 & 0x1f);
              uVar20 = (ulonglong)uVar35;
              *(ulonglong *)(param_1 + 0x42d0) = uVar21 << (bVar2 & 0x3f);
              iVar16 = iVar16 + -1;
              *(uint *)(param_1 + 0x42dc) = uVar26 << (bVar2 & 0x1f);
            } while (-1 < iVar16);
            *pbVar32 = (byte)uVar35;
            lVar31 = lStack_58;
            puVar36 = puStack_68;
          }
          if ((0 < (longlong)pbStack_88) && (*pbVar32 != puVar36[uVar24 + lVar31])) {
            *(int32_t *)(lStack_80 + 0x4424) = 0;
          }
          uVar24 = uVar24 + 1;
        } while ((longlong)uVar24 < 0xb);
        pbStack_88 = pbStack_88 + 1;
        puVar36 = puVar36 + 0xb;
        uVar24 = uVar37;
        puStack_68 = puVar36;
      } while ((longlong)pbStack_88 < 3);
      alStack_48[0] = alStack_48[0] + -1;
    } while (alStack_48[0] != 0);
  } while ((longlong)puVar36 < 0x180949530);
                    // WARNING: Subroutine does not return
  memset(lStack_80 + 0x180,0,800);
}







