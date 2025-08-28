#include "TaleWorlds.Native.Split.h"

// 99_part_03_part072.c - 6 个函数

// 函数: void FUN_18023d240(longlong *param_1)
void FUN_18023d240(longlong *param_1)

{
  uint64_t *puVar1;
  int iVar2;
  longlong *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  code *pcVar20;
  longlong lVar21;
  longlong *plVar22;
  int32_t *puVar23;
  int32_t *puVar24;
  uint64_t uVar25;
  longlong *plVar26;
  int **ppiVar27;
  ulonglong uVar28;
  longlong lVar29;
  int32_t *puVar30;
  ulonglong uVar31;
  int iVar32;
  uint uVar33;
  int32_t *puVar34;
  int8_t auStack_238 [32];
  uint64_t *puStack_218;
  int **ppiStack_210;
  int aiStack_208 [2];
  longlong *plStack_200;
  longlong *plStack_1f8;
  longlong **pplStack_1f0;
  longlong **pplStack_1e8;
  uint64_t uStack_1e0;
  longlong *plStack_1d8;
  uint64_t *puStack_1d0;
  uint64_t uStack_1c8;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  code *pcStack_1b8;
  code *pcStack_1b0;
  int *apiStack_1a8 [2];
  code *pcStack_198;
  void *puStack_190;
  uint64_t uStack_188;
  int32_t uStack_180;
  int32_t uStack_17c;
  code *pcStack_178;
  code *pcStack_170;
  int *apiStack_168 [2];
  code *pcStack_158;
  void *puStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [128];
  int32_t uStack_80;
  longlong lStack_78;
  longlong *plStack_70;
  ulonglong uStack_38;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  uStack_140 = 0;
  uStack_138 = 0;
  puVar23 = (int32_t *)0x0;
  uStack_130 = 0;
  uStack_128 = 3;
  plVar26 = param_1 + 0x1a;
  iVar32 = 0;
  aiStack_208[0] = 0;
  lVar29 = param_1[0x1b];
  lVar21 = *plVar26;
  puVar30 = puVar23;
  puVar24 = puVar23;
  puVar34 = puVar23;
  plStack_1f8 = param_1;
  if (lVar29 - lVar21 >> 5 != 0) {
    do {
      if (*(int *)(lVar21 + (longlong)puVar30) == 1) {
        puVar19 = (uint64_t *)
                  FUN_18062b1e0(_DAT_180c8ed18,0x70,8,CONCAT71((int7)((ulonglong)lVar21 >> 8),3));
        puVar1 = uStack_1e0;
        *puVar19 = 0;
        puVar19[1] = 0;
        *(int16_t *)(puVar19 + 2) = 0;
        *(int8_t *)((longlong)puVar19 + 0x12) = 3;
        *(int32_t *)((longlong)puVar19 + 0x62) = 0;
        *(uint64_t *)((longlong)puVar19 + 0x54) = 0;
        *(int32_t *)((longlong)puVar19 + 0x5c) = 0;
        *(int16_t *)(puVar19 + 0xc) = 0;
        *(int8_t *)((longlong)puVar19 + 0x66) = 0;
        *(uint64_t *)((longlong)puVar19 + 0x14) = 0;
        *(uint64_t *)((longlong)puVar19 + 0x1c) = 0;
        *(uint64_t *)((longlong)puVar19 + 0x24) = 0;
        *(uint64_t *)((longlong)puVar19 + 0x2c) = 0;
        *(uint64_t *)((longlong)puVar19 + 0x34) = 0;
        *(uint64_t *)((longlong)puVar19 + 0x3c) = 0;
        *(uint64_t *)((longlong)puVar19 + 0x44) = 0;
        *(uint64_t *)((longlong)puVar19 + 0x4c) = 0;
        lVar29 = *(longlong *)(*plVar26 + 8 + (longlong)puVar30);
        if (*(longlong *)(lVar29 + 0xa8) != 0) {
          uVar4 = *(int32_t *)(lVar29 + 0x2e8);
          uVar5 = *(int32_t *)(lVar29 + 0x2ec);
          uVar6 = *(int32_t *)(lVar29 + 0x2f0);
          uVar7 = *(int32_t *)(lVar29 + 0x2f4);
          uVar8 = *(int32_t *)(lVar29 + 0x2f8);
          uVar9 = *(int32_t *)(lVar29 + 0x2fc);
          uVar10 = *(int32_t *)(lVar29 + 0x300);
          uVar11 = *(int32_t *)(lVar29 + 0x304);
          uVar12 = *(int32_t *)(lVar29 + 0x308);
          uVar13 = *(int32_t *)(lVar29 + 0x30c);
          uVar14 = *(int32_t *)(lVar29 + 0x310);
          uVar15 = *(uint64_t *)(lVar29 + 0x314);
          uVar16 = *(uint64_t *)(lVar29 + 0x31c);
          uVar17 = *(uint64_t *)(lVar29 + 0x324);
          uVar18 = *(uint64_t *)(lVar29 + 0x32c);
          uVar25 = *(uint64_t *)(lVar29 + 0x334);
          *(int32_t *)((longlong)puVar19 + 0x14) = *(int32_t *)(lVar29 + 0x2e4);
          *(int32_t *)(puVar19 + 3) = uVar4;
          *(int32_t *)((longlong)puVar19 + 0x1c) = uVar5;
          *(int32_t *)(puVar19 + 4) = uVar6;
          *(int32_t *)((longlong)puVar19 + 0x24) = uVar7;
          *(int32_t *)(puVar19 + 5) = uVar8;
          *(int32_t *)((longlong)puVar19 + 0x2c) = uVar9;
          *(int32_t *)(puVar19 + 6) = uVar10;
          *(int32_t *)((longlong)puVar19 + 0x34) = uVar11;
          *(int32_t *)(puVar19 + 7) = uVar12;
          *(int32_t *)((longlong)puVar19 + 0x3c) = uVar13;
          *(int32_t *)(puVar19 + 8) = uVar14;
          *(uint64_t *)((longlong)puVar19 + 0x44) = uVar15;
          *(uint64_t *)((longlong)puVar19 + 0x4c) = uVar16;
          *(uint64_t *)((longlong)puVar19 + 0x54) = uVar17;
          *(uint64_t *)((longlong)puVar19 + 0x5c) = uVar18;
          *(uint64_t *)((longlong)puVar19 + 100) = uVar25;
          uStack_1e0._0_4_ = SUB84(puVar19,0);
          uStack_1e0._4_4_ = (int32_t)((ulonglong)puVar19 >> 0x20);
          if (*(char *)(*plVar26 + 0x18 + (longlong)puVar30) == '\0') {
            plStack_1d8 = (longlong *)aiStack_208;
            plVar3 = *(longlong **)
                      (*(longlong *)(*(longlong *)(*plVar26 + 8 + (longlong)puVar30) + 0xa8) + 0x88)
            ;
            pcStack_158 = (code *)&UNK_18023de90;
            puStack_150 = &UNK_18014f180;
            apiStack_168[0] = aiStack_208;
            pcStack_178 = (code *)&UNK_18023df70;
            pcStack_170 = FUN_18023ded0;
            uStack_180 = (int32_t)uStack_1e0;
            uStack_17c = uStack_1e0._4_4_;
            ppiStack_210 = apiStack_168;
            puStack_218 = &uStack_188;
            uStack_1e0 = puVar1;
            puStack_1d0 = puVar19;
            uStack_188 = (int *)plStack_1d8;
            (**(code **)(*plVar3 + 0x70))
                      (plVar3,&DAT_180a01050,
                       *(longlong *)(*(longlong *)(*plVar26 + 8 + (longlong)puVar30) + 0xa8) + 0xc,0
                      );
            if (pcStack_178 != (code *)0x0) {
              (*pcStack_178)(&uStack_188,0,0);
            }
            if (pcStack_158 != (code *)0x0) {
              ppiVar27 = apiStack_168;
              pcVar20 = pcStack_158;
              goto LAB_18023d57c;
            }
          }
          else {
            *(char *)((longlong)puVar19 + 0x65) = *(char *)((longlong)puVar19 + 0x65) + -1;
            *(ushort *)((longlong)puVar19 + 0x5c) = *(ushort *)((longlong)puVar19 + 0x5c) >> 1;
            *(ushort *)((longlong)puVar19 + 0x5e) = *(ushort *)((longlong)puVar19 + 0x5e) >> 1;
            pplStack_1e8 = (longlong **)aiStack_208;
            plVar3 = *(longlong **)
                      (*(longlong *)(*(longlong *)(*plVar26 + 8 + (longlong)puVar30) + 0xa8) + 0x88)
            ;
            pcStack_198 = (code *)&UNK_18023dfb0;
            puStack_190 = &UNK_18014f180;
            apiStack_1a8[0] = aiStack_208;
            pcStack_1b8 = (code *)&UNK_18023dff0;
            pcStack_1b0 = FUN_18023ded0;
            uStack_1c0 = (int32_t)uStack_1e0;
            uStack_1bc = uStack_1e0._4_4_;
            ppiStack_210 = apiStack_1a8;
            puStack_218 = &uStack_1c8;
            uStack_1e0 = puVar19;
            uStack_1c8 = (int *)pplStack_1e8;
            (**(code **)(*plVar3 + 0x70))
                      (plVar3,&DAT_180a00fb0,
                       *(longlong *)(*(longlong *)(*plVar26 + 8 + (longlong)puVar30) + 0xa8) + 0xc,0
                      );
            if (pcStack_1b8 != (code *)0x0) {
              (*pcStack_1b8)(&uStack_1c8,0,0);
            }
            if (pcStack_198 != (code *)0x0) {
              ppiVar27 = apiStack_1a8;
              pcVar20 = pcStack_198;
LAB_18023d57c:
              (*pcVar20)(ppiVar27,0,0);
            }
          }
        }
        puVar24 = (int32_t *)(ulonglong)((int)puVar24 + 1);
        *(int32_t *)((longlong)puVar30 + *plVar26) = 2;
        *(uint64_t **)(*plVar26 + 0x10 + (longlong)puVar30) = puVar19;
        lVar21 = *plVar26;
      }
      iVar32 = (int)puVar24;
      uVar33 = (int)puVar34 + 1;
      lVar29 = param_1[0x1b];
      puVar30 = puVar30 + 8;
      puVar34 = (int32_t *)(ulonglong)uVar33;
    } while ((ulonglong)(longlong)(int)uVar33 < (ulonglong)(lVar29 - lVar21 >> 5));
  }
  plVar3 = plStack_1f8;
  puVar30 = puVar23;
  puVar24 = puVar23;
  if (lVar29 - lVar21 >> 5 != 0) {
    do {
      if ((*(int *)(lVar21 + (longlong)puVar30) == 3) &&
         (iVar2 = *(int *)(*(longlong *)(lVar21 + 8 + (longlong)puVar30) + 0x380), iVar2 != 2)) {
        FUN_1800b4e00(iVar2,*(uint64_t *)(*plVar26 + 8 + (longlong)puVar30),(int)plVar3[0x1f]);
      }
      uVar33 = (int)puVar24 + 1;
      lVar21 = *plVar26;
      puVar30 = puVar30 + 8;
      puVar24 = (int32_t *)(ulonglong)uVar33;
    } while ((ulonglong)(longlong)(int)uVar33 < (ulonglong)(param_1[0x1b] - lVar21 >> 5));
  }
  while (lVar29 = _DAT_180c82868, iVar32 != aiStack_208[0]) {
    lVar21 = FUN_18005e890(_DAT_180c82868);
    if (lVar21 != 0) {
      plVar22 = (longlong *)FUN_18005e890(lVar29);
      (**(code **)(*plVar22 + 0x20))(plVar22,0);
    }
  }
  plStack_70 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x40,8,3);
  plVar22 = plStack_70 + 1;
  *plVar22 = 0;
  plStack_70[2] = 0;
  plStack_70[3] = 0;
  *(int32_t *)(plStack_70 + 4) = 3;
  plStack_70[5] = 0;
  plStack_70[7] = 0;
  *(int32_t *)(plStack_70 + 6) = 0xffffffff;
  plStack_200 = plStack_70;
  if (plVar22 != plVar26) {
    lVar29 = param_1[0x1b];
    puVar30 = (int32_t *)*plVar26;
    uVar31 = lVar29 - (longlong)puVar30 >> 5;
    puVar24 = (int32_t *)*plVar22;
    if ((ulonglong)(plStack_70[3] - (longlong)puVar24 >> 5) < uVar31) {
      pplStack_1f0 = (longlong **)plVar22;
      if (uVar31 != 0) {
        puVar23 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,uVar31 << 5,(char)plStack_70[4]);
      }
      if (0 < (longlong)uVar31) {
        puVar24 = puVar23;
        uVar28 = uVar31;
        do {
          puVar34 = (int32_t *)((longlong)puVar24 + ((longlong)puVar30 - (longlong)puVar23));
          uVar4 = puVar34[1];
          uVar5 = puVar34[2];
          uVar6 = puVar34[3];
          *puVar24 = *puVar34;
          puVar24[1] = uVar4;
          puVar24[2] = uVar5;
          puVar24[3] = uVar6;
          puVar1 = (uint64_t *)
                   ((longlong)puVar24 + ((longlong)puVar30 - (longlong)puVar23) + 0x10);
          uVar25 = puVar1[1];
          *(uint64_t *)(puVar24 + 4) = *puVar1;
          *(uint64_t *)(puVar24 + 6) = uVar25;
          uVar28 = uVar28 - 1;
          puVar24 = puVar24 + 8;
        } while (0 < (longlong)uVar28);
      }
      if (*plVar22 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *plVar22 = (longlong)puVar23;
      puVar23 = puVar23 + uVar31 * 8;
      plStack_70[3] = (longlong)puVar23;
    }
    else {
      puVar23 = (int32_t *)plStack_70[2];
      uVar28 = (longlong)puVar23 - (longlong)puVar24 >> 5;
      if (uVar31 <= uVar28) {
        for (; 0 < (longlong)uVar31; uVar31 = uVar31 - 1) {
          uVar4 = puVar30[1];
          uVar5 = puVar30[2];
          uVar6 = puVar30[3];
          *puVar24 = *puVar30;
          puVar24[1] = uVar4;
          puVar24[2] = uVar5;
          puVar24[3] = uVar6;
          uVar25 = *(uint64_t *)(puVar30 + 6);
          *(uint64_t *)(puVar24 + 4) = *(uint64_t *)(puVar30 + 4);
          *(uint64_t *)(puVar24 + 6) = uVar25;
          puVar30 = puVar30 + 8;
          puVar24 = puVar24 + 8;
        }
        plStack_70[2] = (longlong)puVar24;
        goto LAB_18023d7f3;
      }
      puVar34 = puVar30 + uVar28 * 8;
      if (0 < (longlong)uVar28) {
        do {
          uVar4 = puVar30[1];
          uVar5 = puVar30[2];
          uVar6 = puVar30[3];
          *puVar24 = *puVar30;
          puVar24[1] = uVar4;
          puVar24[2] = uVar5;
          puVar24[3] = uVar6;
          uVar25 = *(uint64_t *)(puVar30 + 6);
          *(uint64_t *)(puVar24 + 4) = *(uint64_t *)(puVar30 + 4);
          *(uint64_t *)(puVar24 + 6) = uVar25;
          uVar28 = uVar28 - 1;
          puVar30 = puVar30 + 8;
          puVar24 = puVar24 + 8;
        } while (0 < (longlong)uVar28);
        puVar23 = (int32_t *)plStack_70[2];
      }
      lVar29 = lVar29 - (longlong)puVar34 >> 5;
      if (0 < lVar29) {
        lVar21 = (longlong)puVar34 - (longlong)puVar23;
        do {
          puVar30 = (int32_t *)((longlong)puVar23 + lVar21);
          uVar4 = puVar30[1];
          uVar5 = puVar30[2];
          uVar6 = puVar30[3];
          *puVar23 = *puVar30;
          puVar23[1] = uVar4;
          puVar23[2] = uVar5;
          puVar23[3] = uVar6;
          puVar1 = (uint64_t *)((longlong)(puVar23 + 4) + lVar21);
          uVar25 = puVar1[1];
          *(uint64_t *)(puVar23 + 4) = *puVar1;
          *(uint64_t *)(puVar23 + 6) = uVar25;
          lVar29 = lVar29 + -1;
          puVar23 = puVar23 + 8;
        } while (0 < lVar29);
      }
    }
    plStack_70[2] = (longlong)puVar23;
  }
LAB_18023d7f3:
  *(int *)plStack_70 = (int)plVar3[0x19];
  *(int32_t *)((longlong)plStack_70 + 4) = *(int32_t *)((longlong)plVar3 + 0xcc);
  *(int *)(plStack_70 + 5) = (int)plVar3[0x1e];
  *(int32_t *)((longlong)plStack_70 + 0x2c) = *(int32_t *)((longlong)plVar3 + 0xf4);
  plStack_70[7] = plVar3[0x20];
  *(int *)(plStack_70 + 6) = (int)plVar3[0x1f];
  pplStack_1f0 = (longlong **)&puStack_118;
  puStack_118 = &UNK_1809fcc28;
  puStack_110 = auStack_100;
  uStack_108 = 0;
  auStack_100[0] = 0;
  uStack_80 = 1;
  lStack_78 = plVar3[0x18];
  uVar25 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
  plVar26 = (longlong *)FUN_18005ce30(uVar25,&puStack_118);
  plStack_1d8 = plVar26;
  if (plVar26 != (longlong *)0x0) {
    (**(code **)(*plVar26 + 0x28))(plVar26);
  }
  lVar29 = _DAT_180c82868;
  pplStack_1f0 = &plStack_200;
  plStack_200 = plVar26;
  if (plVar26 != (longlong *)0x0) {
    (**(code **)(*plVar26 + 0x28))(plVar26);
  }
  pplStack_1e8 = &plStack_200;
  puVar1 = *(uint64_t **)(*(longlong *)(lVar29 + 8) + 8);
  pcVar20 = *(code **)*puVar1;
  pplStack_1f0 = &plStack_1f8;
  plStack_1f8 = plStack_200;
  if (plStack_200 != (longlong *)0x0) {
    (**(code **)(*plStack_200 + 0x28))();
  }
  (*pcVar20)(puVar1,&plStack_1f8);
  if (plStack_200 != (longlong *)0x0) {
    (**(code **)(*plStack_200 + 0x38))();
  }
  if (plVar26 != (longlong *)0x0) {
    (**(code **)(*plVar26 + 0x38))(plVar26);
  }
  pplStack_1e8 = (longlong **)&puStack_118;
  puStack_118 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18023d990(uint64_t *param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  int8_t auStack_80 [104];
  
  uVar2 = 0xfffffffffffffffe;
  lVar1 = FUN_18023c2e0(auStack_80);
  param_1[2] = FUN_18023e880;
  param_1[3] = &UNK_18023e870;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x60,8,DAT_180bf65bc,uVar2);
  FUN_18023c2e0(uVar2,lVar1);
  *param_1 = uVar2;
  if (*(code **)(lVar1 + 0x20) != (code *)0x0) {
    (**(code **)(lVar1 + 0x20))(lVar1 + 0x10,0,0);
  }
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x10,0,0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18023da60(uint64_t *param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  int8_t auStack_50 [56];
  
  uVar2 = 0xfffffffffffffffe;
  lVar1 = FUN_18023c3b0(auStack_50);
  param_1[2] = FUN_18023e750;
  param_1[3] = &UNK_18023e740;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,DAT_180bf65bc,uVar2);
  FUN_18023c3b0(uVar2,lVar1);
  *param_1 = uVar2;
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0);
  }
  if (*(code **)(param_2 + 0x18) != (code *)0x0) {
    (**(code **)(param_2 + 0x18))(param_2 + 8,0,0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18023db30(uint64_t *param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  int8_t auStack_50 [56];
  
  uVar2 = 0xfffffffffffffffe;
  lVar1 = FUN_18023c3b0(auStack_50);
  param_1[2] = FUN_18023e620;
  param_1[3] = FUN_18023e4f0;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,DAT_180bf65bc,uVar2);
  FUN_18023c3b0(uVar2,lVar1);
  *param_1 = uVar2;
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0);
  }
  if (*(code **)(param_2 + 0x18) != (code *)0x0) {
    (**(code **)(param_2 + 0x18))(param_2 + 8,0,0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18023dc00(uint64_t *param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  int8_t auStack_50 [56];
  
  uVar2 = 0xfffffffffffffffe;
  lVar1 = FUN_18023c3b0(auStack_50);
  param_1[2] = FUN_18023e3d0;
  param_1[3] = FUN_18023e240;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,DAT_180bf65bc,uVar2);
  FUN_18023c3b0(uVar2,lVar1);
  *param_1 = uVar2;
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0);
  }
  if (*(code **)(param_2 + 0x18) != (code *)0x0) {
    (**(code **)(param_2 + 0x18))(param_2 + 8,0,0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023dcd0(longlong *param_1,ulonglong param_2)
void FUN_18023dcd0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  uint64_t *puVar2;
  int8_t *puVar3;
  ulonglong uVar4;
  int8_t *puVar5;
  ulonglong uVar6;
  
  puVar3 = (int8_t *)param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - (longlong)puVar3) / 0x14)) {
    uVar6 = param_2;
    if (param_2 != 0) {
      do {
        *puVar3 = 0;
        *(uint64_t *)(puVar3 + 4) = 0;
        *(uint64_t *)(puVar3 + 0xc) = 0;
        puVar3 = puVar3 + 0x14;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar3 = (int8_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar3 + param_2 * 0x14);
    return;
  }
  puVar5 = (int8_t *)*param_1;
  lVar1 = ((longlong)puVar3 - (longlong)puVar5) / 0x14;
  uVar6 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < lVar1 + param_2) {
    uVar6 = lVar1 + param_2;
  }
  lVar1 = 0;
  if (uVar6 != 0) {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar6 * 0x14,(char)param_1[3]);
    puVar5 = (int8_t *)*param_1;
    puVar3 = (int8_t *)param_1[1];
  }
  if (puVar5 != puVar3) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,puVar5,(longlong)puVar3 - (longlong)puVar5);
  }
  if (param_2 != 0) {
    puVar2 = (uint64_t *)(lVar1 + 4);
    uVar4 = param_2;
    do {
      *(int8_t *)((longlong)puVar2 + -4) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (uint64_t *)((longlong)puVar2 + 0x14);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (*param_1 == 0) {
    *param_1 = lVar1;
    param_1[2] = lVar1 + uVar6 * 0x14;
    param_1[1] = lVar1 + param_2 * 0x14;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023dd1c(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_18023dd1c(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  longlong in_RAX;
  longlong lVar1;
  uint64_t *puVar2;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  longlong lVar3;
  longlong unaff_R14;
  ulonglong uVar4;
  
  lVar1 = SUB168(SEXT816(in_RAX) * SEXT816(param_1 - param_4),8);
  lVar1 = (lVar1 >> 3) - (lVar1 >> 0x3f);
  uVar4 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (ulonglong)(lVar1 + unaff_R14)) {
    uVar4 = lVar1 + unaff_R14;
  }
  lVar1 = 0;
  if (uVar4 != 0) {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar4 * 0x14,(char)unaff_RSI[3]);
    param_4 = *unaff_RSI;
    unaff_RBX = unaff_RSI[1];
  }
  if (param_4 != unaff_RBX) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_4,unaff_RBX - param_4);
  }
  if (unaff_R14 != 0) {
    puVar2 = (uint64_t *)(lVar1 + 4);
    lVar3 = unaff_R14;
    do {
      *(int8_t *)((longlong)puVar2 + -4) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (uint64_t *)((longlong)puVar2 + 0x14);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*unaff_RSI == 0) {
    *unaff_RSI = lVar1;
    unaff_RSI[2] = lVar1 + uVar4 * 0x14;
    unaff_RSI[1] = lVar1 + unaff_R14 * 0x14;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_18023de32(void)
void FUN_18023de32(void)

{
  longlong lVar1;
  int8_t *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_R14;
  
  lVar1 = unaff_R14;
  if (unaff_R14 != 0) {
    do {
      *unaff_RBX = 0;
      *(uint64_t *)(unaff_RBX + 4) = 0;
      *(uint64_t *)(unaff_RBX + 0xc) = 0;
      unaff_RBX = unaff_RBX + 0x14;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    unaff_RBX = *(int8_t **)(unaff_RSI + 8);
  }
  *(int8_t **)(unaff_RSI + 8) = unaff_RBX + unaff_R14 * 0x14;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18023ded0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t *param_4)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  
  lVar4 = FUN_18062b420(_DAT_180c8ed18,param_2,3);
  if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar4,*(uint64_t *)(param_1 + 8),(longlong)(int)param_2);
  }
  plVar2 = (longlong *)param_4[1];
  if ((((char)plVar2[2] == '\0') && (*(char *)((longlong)plVar2 + 0x11) == '\0')) && (*plVar2 != 0))
  {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(int8_t *)(plVar2 + 2) = 0;
  *plVar2 = 0;
  plVar2[1] = param_2;
  piVar3 = (int *)*param_4;
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 1;
  UNLOCK();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023e030(longlong param_1,longlong param_2,uint64_t param_3,uint64_t *param_4)
void FUN_18023e030(longlong param_1,longlong param_2,uint64_t param_3,uint64_t *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_18062b420(_DAT_180c8ed18,param_2,3);
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar2,*(uint64_t *)(param_1 + 8),(longlong)(int)param_2);
  }
  plVar1 = *(longlong **)*param_4;
  if ((((char)plVar1[2] == '\0') && (*(char *)((longlong)plVar1 + 0x11) == '\0')) && (*plVar1 != 0))
  {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *plVar1 = 0;
  plVar1[1] = param_2;
  *(int8_t *)(plVar1 + 2) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18023e120(longlong *param_1,longlong *param_2,int param_3,uint64_t param_4)

{
  longlong lVar1;
  
  if (param_3 == 3) {
    return 0x180c03e40;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0x20) != (code *)0x0) {
        (**(code **)(lVar1 + 0x20))(lVar1 + 0x10,0,0,param_4,0xfffffffffffffffe);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x38,8,DAT_180bf65bc);
      FUN_18023cb40(lVar1,*param_2);
      *param_1 = lVar1;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023e240(longlong param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)
void FUN_18023e240(longlong param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_e8 [32];
  longlong lStack_c8;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  longlong lStack_a8;
  uint64_t uStack_a0;
  int16_t uStack_98;
  int8_t uStack_96;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  uint64_t uStack_7c;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  int32_t uStack_4c;
  int16_t uStack_48;
  int16_t uStack_46;
  int16_t uStack_44;
  int8_t uStack_42;
  uint8_t uStack_41;
  ulonglong uStack_38;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  param_4 = (longlong *)*param_4;
  lStack_a8 = *(longlong *)(param_1 + 8);
  uVar2 = 0;
  uStack_96 = 3;
  lStack_c8 = *param_4;
  uStack_94 = *(uint64_t *)(lStack_c8 + 0x2e4);
  uStack_8c = *(uint64_t *)(lStack_c8 + 0x2ec);
  uStack_84 = *(uint64_t *)(lStack_c8 + 0x2f4);
  uStack_7c = *(uint64_t *)(lStack_c8 + 0x2fc);
  uStack_74 = *(uint64_t *)(lStack_c8 + 0x304);
  uStack_6c = *(uint64_t *)(lStack_c8 + 0x30c);
  uStack_64 = *(uint64_t *)(lStack_c8 + 0x314);
  uStack_5c = *(uint64_t *)(lStack_c8 + 0x31c);
  uStack_54 = *(uint64_t *)(lStack_c8 + 0x324);
  uStack_4c = *(int32_t *)(lStack_c8 + 0x32c);
  uStack_48 = (int16_t)*(int32_t *)(lStack_c8 + 0x330);
  uStack_46 = (int16_t)((uint)*(int32_t *)(lStack_c8 + 0x330) >> 0x10);
  uVar1 = *(uint64_t *)(lStack_c8 + 0x334);
  uStack_44 = (int16_t)uVar1;
  uStack_42 = (int8_t)((ulonglong)uVar1 >> 0x10);
  uStack_41 = (uint8_t)((ulonglong)uVar1 >> 0x18);
  uStack_98 = 1;
  uStack_c0 = (int32_t)param_4[5];
  if (*(int *)(_DAT_180c86920 + 0x3f0) == 0) {
    uVar2 = 2;
  }
  else if (*(int *)(_DAT_180c86920 + 0x3f0) == 1) {
    uVar2 = 1;
  }
  uStack_a0 = param_2;
  FUN_1800a5810(_DAT_180c86938,&lStack_a8,1,uVar2);
  (**(code **)(*(longlong *)*param_4 + 0x38))();
  if (param_4[3] != 0) {
    (*(code *)param_4[4])(1,*param_4);
  }
  if (uStack_98._1_1_ == '\0') {
    if (((char)uStack_98 == '\0') && (lStack_a8 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18023e3d0(longlong *param_1,longlong *param_2,int param_3,uint64_t param_4)

{
  longlong lVar1;
  
  if (param_3 == 3) {
    return 0x180c03f00;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0,param_4,0xfffffffffffffffe);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,DAT_180bf65bc);
      FUN_18023c3b0(lVar1,*param_2);
      *param_1 = lVar1;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




