#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part064.c - 4 个函数

// 函数: void FUN_1803e4ba0(int64_t param_1,uint64_t param_2)
void FUN_1803e4ba0(int64_t param_1,uint64_t param_2)

{
  code *pcVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  char cVar10;
  uint64_t uVar11;
  int64_t *plStack_50;
  int64_t *plStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  
  uVar11 = 0xfffffffffffffffe;
  plStack_50 = (int64_t *)0x0;
  plStack_48 = (int64_t *)0x0;
  uStack_40 = 0;
  uStack_38 = 3;
  iVar6 = 0;
  if (*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 4 != 0) {
    do {
      FUN_1803e4d40(param_1,iVar6,0,param_2,0xffffffff,&plStack_50,uVar11);
      iVar6 = iVar6 + 1;
    } while ((uint64_t)(int64_t)iVar6 <
             (uint64_t)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 4));
  }
  uVar11 = system_context_ptr;
  uVar8 = (int64_t)plStack_48 - (int64_t)plStack_50 >> 3;
  plVar9 = plStack_50;
  do {
    bVar3 = false;
    uVar7 = 0;
    plVar2 = plStack_48;
    plVar5 = plVar9;
    if (uVar8 == 0) break;
    do {
      plVar2 = plVar9 + uVar7;
      plVar5 = (int64_t *)*plVar2;
      pcVar1 = *(code **)(*plVar5 + 0x68);
      if (pcVar1 == (code *)&processed_var_9696_ptr) {
        cVar10 = (char)plVar5[2] != '\0';
        plVar9 = plStack_50;
      }
      else {
        cVar10 = (*pcVar1)();
      }
      if (cVar10 == '\0') {
        bVar3 = true;
        plVar5 = (int64_t *)FUN_18005e890(uVar11);
        cVar10 = (**(code **)(*plVar5 + 0x20))(plVar5,0);
        if (cVar10 == '\0') {
          plVar2 = (int64_t *)*plVar2;
          pcVar1 = *(code **)(*plVar2 + 0x80);
          if (pcVar1 == (code *)&ui_system_data_1840_ptr) {
            FUN_1800496b0(plVar2 + 4);
          }
          else {
            (*pcVar1)();
          }
        }
      }
      uVar7 = (uint64_t)((int)uVar7 + 1);
    } while (uVar7 < uVar8);
    plVar2 = plStack_48;
    plVar5 = plVar9;
  } while (bVar3);
  for (; plVar4 = plStack_48, plVar9 != plStack_48; plVar9 = plVar9 + 1) {
    plStack_48 = plVar2;
    if ((int64_t *)*plVar9 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar9 + 0x38))();
    }
    plVar2 = plStack_48;
    plStack_48 = plVar4;
  }
  if (plVar5 != (int64_t *)0x0) {
    plStack_48 = plVar2;
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(plVar5);
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e4d40(int64_t *******param_1,int param_2,byte param_3,int64_t param_4,uint param_5,
void FUN_1803e4d40(int64_t *******param_1,int param_2,byte param_3,int64_t param_4,uint param_5,
                  int64_t ******param_6)

{
  int64_t ******pppppplVar1;
  int64_t *plVar2;
  int8_t auVar3 [16];
  byte bVar4;
  int64_t ***ppplVar5;
  uint uVar6;
  int64_t *******ppppppplVar7;
  uint64_t uVar8;
  int64_t ****pppplVar9;
  uint64_t uVar10;
  int64_t ******pppppplVar11;
  uint64_t *puVar12;
  int64_t *****ppppplVar13;
  int64_t *****ppppplVar14;
  int iVar15;
  int64_t ****pppplVar16;
  int iVar17;
  uint64_t *puVar18;
  int64_t *****ppppplVar19;
  int64_t *******ppppppplVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  int64_t lVar24;
  uint64_t uVar25;
  int64_t lVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint uVar29;
  uint64_t uVar30;
  int8_t auStack_248 [32];
  int8_t uStack_228;
  byte bStack_218;
  int64_t *******ppppppplStack_210;
  int64_t *******ppppppplStack_208;
  uint64_t uStack_200;
  int64_t *****ppppplStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_1e8;
  int64_t *******ppppppplStack_1e0;
  int64_t *******ppppppplStack_1d8;
  int64_t *******ppppppplStack_1d0;
  uint uStack_1c8;
  uint uStack_1c4;
  int64_t *****ppppplStack_1c0;
  int64_t ****pppplStack_1b8;
  int64_t ****pppplStack_1b0;
  int32_t uStack_1a8;
  uint64_t uStack_1a0;
  int32_t uStack_198;
  int64_t *******ppppppplStack_190;
  uint uStack_188;
  int iStack_184;
  int64_t *******ppppppplStack_180;
  int64_t lStack_178;
  int64_t *******ppppppplStack_170;
  int64_t ******pppppplStack_168;
  int64_t ***ppplStack_160;
  int8_t auStack_158 [16];
  uint64_t uStack_148;
  int64_t *****ppppplStack_138;
  int8_t *puStack_130;
  int32_t uStack_128;
  int8_t auStack_120 [128];
  int32_t uStack_a0;
  int64_t ******pppppplStack_98;
  int64_t ******pppppplStack_90;
  uint64_t uStack_58;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  uVar21 = (uint)param_3;
  ppppppplStack_208 = (int64_t *******)param_6;
  auVar3 = *(int8_t (*) [16])(param_1[0x1e] + (int64_t)param_2 * 2);
  ppppppplVar20 = (int64_t *******)(auVar3._0_8_ >> 0x20);
  uVar29 = auVar3._8_4_;
  ppppppplStack_180 = (int64_t *******)CONCAT44(ppppppplStack_180._4_4_,uVar29);
  bStack_218 = param_3;
  ppppppplStack_210 = param_1;
  ppppppplStack_1e0 = ppppppplVar20;
  iStack_184 = param_2;
  lStack_178 = param_4;
  auStack_158 = auVar3;
  ppppppplVar7 = (int64_t *******)FUN_1803e74c0(auVar3._8_8_,auStack_158);
  uVar6 = auVar3._4_4_;
  uVar22 = 1;
  if (1 < (int)uVar6) {
    uVar22 = uVar6;
  }
  ppppppplStack_1d8 = (int64_t *******)CONCAT44(ppppppplStack_1d8._4_4_,uVar22);
  uVar22 = 1;
  if (1 < (int)uVar29) {
    uVar22 = uVar29;
  }
  ppppppplStack_1d0 = (int64_t *******)CONCAT44(ppppppplStack_1d0._4_4_,uVar22);
  iVar17 = -1;
  if (uVar22 != 0) {
    uVar8 = (uint64_t)uVar22;
    do {
      iVar17 = iVar17 + 1;
      uVar22 = (uint)uVar8;
      uVar8 = uVar8 >> 1;
    } while (1 < uVar22);
  }
  iVar15 = -1;
  for (; uVar6 != 0; uVar6 = uVar6 >> 1) {
    iVar15 = iVar15 + 1;
  }
  if (iVar17 < iVar15) {
    iVar17 = iVar15;
  }
  uVar6 = iVar17 + 1;
  if (auStack_158._0_4_ == 0xb) {
    uVar6 = 1;
  }
  uStack_188 = 0x7fffffff;
  pppppplVar11 = *ppppppplVar7;
  uVar25 = (int64_t)ppppppplVar7[1] - (int64_t)pppppplVar11 >> 4;
  uVar27 = 0;
  uVar8 = uVar27;
  if (uVar25 != 0) {
    do {
      if ((*pppppplVar11 != (int64_t *****)0x0) &&
         (bVar4 = *(byte *)((int64_t)*pppppplVar11 + 0x335), bVar4 < uStack_188)) {
        uStack_188 = (uint)bVar4;
      }
      uVar22 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar22;
      pppppplVar11 = pppppplVar11 + 2;
    } while ((uint64_t)(int64_t)(int)uVar22 < uVar25);
  }
  if (uVar6 <= uStack_188) {
    uStack_188 = uVar6;
  }
  pppppplStack_168 = &ppppplStack_1c0;
  ppppplStack_1c0 = (int64_t *****)0x0;
  pppplStack_1b8 = (int64_t ****)0x0;
  pppplStack_1b0 = (int64_t ****)0x0;
  uStack_1a8 = 3;
  uStack_1a0 = 0;
  ppppppplStack_190 = (int64_t *******)0x0;
  uStack_198 = 0xffffffff;
  uVar8 = (int64_t)ppppppplVar7[1] - (int64_t)*ppppppplVar7 >> 4;
  uVar25 = (uint64_t)param_5;
  if (param_5 == 0xffffffff) {
    uVar25 = uVar8 & 0xffffffff;
  }
  ppppppplStack_170 = ppppppplVar7;
  if (0 < (int)uVar25) {
    uVar28 = uVar25;
    uVar30 = uVar27;
    do {
      ppplVar5 = uStack_1e8;
      pppplVar9 = (int64_t ****)0x0;
      ppppplStack_1f8 = (int64_t *****)0x0;
      uStack_1f0 = (int64_t ***)0x0;
      uStack_1e8 = (int64_t ***)((uint64_t)uStack_1e8 & 0xffffffffffffff00);
      if ((int64_t)uVar30 < (int64_t)(int)uVar8) {
        pppppplStack_168 = *(int64_t *******)((int64_t)*ppppppplVar7 + uVar27);
        ppplStack_160 = (int64_t ***)((int64_t *)((int64_t)*ppppppplVar7 + uVar27))[1];
        if (ppplStack_160 == (int64_t ***)0x0) {
          if (pppppplStack_168 == (int64_t ******)0x0) goto LAB_1803e4f65;
          uStack_200 = (int64_t ***)CONCAT44(uStack_200._4_4_,uVar21 * 2 + 1);
          uStack_1e8 = (int64_t ***)
                       CONCAT71(SUB87(ppplVar5,1),
                                (uint)*(ushort *)((int64_t)pppppplStack_168 + 0x32c) !=
                                (uint)ppppppplVar20);
          ppppplStack_1f8 = (int64_t *****)pppppplStack_168;
        }
        else {
          uStack_200 = (int64_t ***)CONCAT44(uStack_200._4_4_,2);
          uStack_1f0 = ppplStack_160;
        }
      }
      else {
LAB_1803e4f65:
        uStack_200 = (int64_t ***)((uint64_t)uStack_200._4_4_ << 0x20);
      }
      if (pppplStack_1b8 < pppplStack_1b0) {
        *pppplStack_1b8 = uStack_200;
        pppplStack_1b8[1] = (int64_t ***)ppppplStack_1f8;
        pppplStack_1b8[2] = uStack_1f0;
        pppplStack_1b8[3] = uStack_1e8;
        pppplVar16 = pppplStack_1b8;
      }
      else {
        lVar26 = (int64_t)pppplStack_1b8 - (int64_t)ppppplStack_1c0 >> 5;
        if (lVar26 == 0) {
          lVar26 = 1;
LAB_1803e4fb4:
          pppplVar9 = (int64_t ****)
                      CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar26 << 5,(int8_t)uStack_1a8);
        }
        else {
          lVar26 = lVar26 * 2;
          if (lVar26 != 0) goto LAB_1803e4fb4;
        }
        pppplVar16 = pppplVar9;
        ppppplVar13 = ppppplStack_1c0;
        for (lVar24 = (int64_t)pppplStack_1b8 - (int64_t)ppppplStack_1c0 >> 5; 0 < lVar24;
            lVar24 = lVar24 + -1) {
          ppplVar5 = ((int64_t ****)ppppplVar13)[1];
          *pppplVar16 = (int64_t ***)*ppppplVar13;
          pppplVar16[1] = ppplVar5;
          ppplVar5 = ((int64_t ****)ppppplVar13)[3];
          pppplVar16[2] = ((int64_t ****)ppppplVar13)[2];
          pppplVar16[3] = ppplVar5;
          ppppplVar13 = (int64_t *****)((int64_t ****)ppppplVar13 + 4);
          pppplVar16 = pppplVar16 + 4;
        }
        *pppplVar16 = uStack_200;
        pppplVar16[1] = (int64_t ***)ppppplStack_1f8;
        *(int32_t *)(pppplVar16 + 2) = (int32_t)uStack_1f0;
        *(int32_t *)((int64_t)pppplVar16 + 0x14) = uStack_1f0._4_4_;
        *(uint *)(pppplVar16 + 3) = (uint)uStack_1e8;
        *(uint *)((int64_t)pppplVar16 + 0x1c) = uStack_1e8._4_4_;
        if (ppppplStack_1c0 != (int64_t *****)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        pppplStack_1b0 = pppplVar9 + lVar26 * 4;
        uVar21 = (uint)bStack_218;
        ppppppplVar20 = ppppppplStack_1e0;
        ppppppplVar7 = ppppppplStack_170;
        ppppplStack_1c0 = (int64_t *****)pppplVar9;
      }
      pppplStack_1b8 = pppplVar16 + 4;
      uVar30 = uVar30 + 1;
      uVar27 = uVar27 + 0x10;
      uVar28 = uVar28 - 1;
      param_1 = ppppppplStack_210;
    } while (uVar28 != 0);
  }
  uVar6 = uStack_188;
  if ((*(int64_t *)(lStack_178 + 0x198) != 0) && (auStack_158._0_4_ == 0xb)) goto LAB_1803e577e;
  uVar10 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
  pppppplVar11 = (int64_t ******)FUN_18023a2e0(uVar10,0);
  pppppplStack_168 = pppppplVar11;
  if (pppppplVar11 != (int64_t ******)0x0) {
    (*(code *)(*pppppplVar11)[5])(pppppplVar11);
  }
  uVar22 = 0;
  uStack_200 = (int64_t ***)&system_data_buffer_ptr;
  uStack_1e8 = (int64_t ***)0x0;
  ppppplStack_1f8 = (int64_t *****)0x0;
  uStack_1f0 = (int64_t ***)((uint64_t)uStack_1f0 & 0xffffffff00000000);
  puVar12 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x15,0x13);
  *(int8_t *)puVar12 = 0;
  uVar8 = (uint64_t)puVar12 & 0xffffffffffc00000;
  if (uVar8 != 0) {
    lVar26 = ((int64_t)puVar12 - uVar8 >> 0x10) * 0x50 + 0x80 + uVar8;
    puVar23 = (uint *)(lVar26 - (uint64_t)*(uint *)(lVar26 + 4));
    if ((*(byte *)((int64_t)puVar23 + 0xe) & 2) == 0) {
      uVar22 = puVar23[7];
      if (0x3ffffff < uVar22) {
        uVar22 = *puVar23 << 0x10;
      }
    }
    else {
      uVar22 = puVar23[7];
      if (uVar22 < 0x4000000) {
        uVar27 = (uint64_t)uVar22;
      }
      else {
        uVar27 = (uint64_t)*puVar23 << 0x10;
      }
      if (0x3ffffff < uVar22) {
        uVar22 = *puVar23 << 0x10;
      }
      uVar22 = uVar22 - (int)(((int64_t)puVar12 -
                              (((int64_t)((int64_t)puVar23 + (-0x80 - uVar8)) / 0x50) * 0x10000 +
                              uVar8)) % uVar27);
    }
  }
  *puVar12 = 0x5f6e696172726574;
  puVar12[1] = 0x72615f726579616c;
  *(int32_t *)(puVar12 + 2) = 0x5f796172;
  *(int8_t *)((int64_t)puVar12 + 0x14) = 0;
  uStack_1f0 = (int64_t ***)CONCAT44(uStack_1f0._4_4_,0x14);
  ppppplVar13 = param_1[0x32][0xd];
  iVar17 = *(int *)(ppppplVar13 + 0x9d);
  ppppplStack_1f8 = (int64_t *****)puVar12;
  uStack_1e8._0_4_ = uVar22;
  if (0 < iVar17) {
    if ((iVar17 != -0x14) && (uVar22 < iVar17 + 0x15U)) {
      uStack_228 = 0x13;
      puVar12 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar12,iVar17 + 0x15U,0x10);
      ppppplStack_1f8 = (int64_t *****)puVar12;
      uStack_1e8._0_4_ = CoreMemoryPoolCleaner(puVar12);
      iVar17 = *(int *)(ppppplVar13 + 0x9d);
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar12 + 0x14),ppppplVar13[0x9c],(int64_t)(iVar17 + 1));
  }
  puVar18 = (uint64_t *)&system_buffer_ptr;
  if (puVar12 != (uint64_t *)0x0) {
    puVar18 = puVar12;
  }
  (*(code *)pppppplVar11[2][2])(pppppplVar11 + 2,puVar18);
  *(short *)((int64_t)pppppplVar11 + 0x32c) = (short)ppppppplVar20;
  *(short *)((int64_t)pppppplVar11 + 0x32e) = (short)ppppppplStack_180;
  *(char *)((int64_t)pppppplVar11 + 0x335) = (char)uVar6;
  *(uint *)((int64_t)pppppplVar11 + 0x35c) = uVar6;
  *(int32_t *)((int64_t)pppppplVar11 + 0x324) = auStack_158._0_4_;
  *(short *)((int64_t)pppppplVar11 + 0x332) = (short)uVar25;
  uStack_1c4 = 1;
  uStack_1c8 = bStack_218 ^ 1;
  uStack_1a0 = CONCAT44(ppppppplStack_1d0._0_4_,(int)ppppppplStack_1d8);
  uStack_198 = *(int32_t *)((int64_t)param_1[0x32][0xd] + 0xa4);
  ppppppplStack_190 = param_1;
  if (bStack_218 == 0) {
    ppppppplVar20 = (int64_t *******)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x108,8,3);
    ppppppplStack_1e0 = ppppppplVar20;
    FUN_180049830(ppppppplVar20);
    *ppppppplVar20 = (int64_t ******)&processed_var_8576_ptr;
    ppppppplVar20[0x18] = (int64_t ******)0x0;
    ppppppplStack_210 = ppppppplVar20 + 0x1a;
    *ppppppplStack_210 = (int64_t ******)0x0;
    ppppppplVar20[0x1b] = (int64_t ******)0x0;
    ppppppplVar20[0x1c] = (int64_t ******)0x0;
    *(int32_t *)(ppppppplVar20 + 0x1d) = 3;
    ppppppplVar20[0x1e] = (int64_t ******)0x0;
    ppppppplVar20[0x20] = (int64_t ******)0x0;
    *(int32_t *)(ppppppplVar20 + 0x1f) = 0xffffffff;
    ppppppplStack_170 = ppppppplVar20 + 0x19;
    FUN_180056f10(ppppppplVar20 + 0x18,pppppplVar11);
    FUN_18023d080(ppppppplVar20 + 0x19,&uStack_1c8);
    ppppppplVar20[3] = (int64_t ******)0xfffffffffffffffc;
    ppppppplStack_180 = ppppppplVar20;
    (*(code *)(*ppppppplVar20)[5])(ppppppplVar20);
    ppppppplVar20[3] = (int64_t ******)0xfffffffffffffffc;
    uVar10 = system_context_ptr;
    ppppppplStack_1e0 = (int64_t *******)&ppppppplStack_210;
    ppppppplStack_210 = ppppppplVar20;
    (*(code *)(*ppppppplVar20)[5])(ppppppplVar20);
    FUN_18005e110(uVar10,&ppppppplStack_210);
    uVar10 = system_context_ptr;
    ppppppplStack_1e0 = (int64_t *******)&ppppppplStack_1d0;
    ppppppplStack_1d0 = ppppppplVar20;
    (*(code *)(*ppppppplVar20)[5])(ppppppplVar20);
    FUN_18005e6a0(uVar10,&ppppppplStack_1d0,0);
    ppppppplStack_1d8 = ppppppplVar20;
    (*(code *)(*ppppppplVar20)[5])(ppppppplVar20);
    FUN_1800b87c0(ppppppplStack_208,&ppppppplStack_1d8);
    if (ppppppplStack_1d8 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_1d8)[7])();
    }
    (*(code *)(*ppppppplVar20)[7])(ppppppplVar20);
  }
  else {
    pppppplStack_90 = (int64_t ******)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x40,8,3);
    ppppplVar19 = ppppplStack_1c0;
    pppppplVar1 = pppppplStack_90 + 1;
    ppppplVar13 = (int64_t *****)0x0;
    *pppppplVar1 = (int64_t *****)0x0;
    pppppplStack_90[2] = (int64_t *****)0x0;
    pppppplStack_90[3] = (int64_t *****)0x0;
    *(uint *)(pppppplStack_90 + 4) = 3;
    pppppplStack_90[5] = (int64_t *****)0x0;
    pppppplStack_90[7] = (int64_t *****)0x0;
    *(uint *)(pppppplStack_90 + 6) = 0xffffffff;
    ppppppplStack_1e0 = (int64_t *******)pppppplVar1;
    if (pppppplVar1 != &ppppplStack_1c0) {
      uVar8 = (int64_t)pppplStack_1b8 - (int64_t)ppppplStack_1c0 >> 5;
      ppppplVar14 = *pppppplVar1;
      if ((uint64_t)((int64_t)pppppplStack_90[3] - (int64_t)ppppplVar14 >> 5) < uVar8) {
        ppppppplStack_208 = (int64_t *******)pppppplStack_90;
        if (uVar8 != 0) {
          ppppplVar13 = (int64_t *****)
                        CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar8 << 5,*(int8_t *)(pppppplStack_90 + 4)
                                     );
        }
        if (0 < (int64_t)uVar8) {
          ppppplVar14 = ppppplVar13;
          uVar25 = uVar8;
          do {
            puVar18 = (uint64_t *)
                      ((int64_t)ppppplVar14 + ((int64_t)ppppplVar19 - (int64_t)ppppplVar13));
            pppplVar9 = (int64_t ****)puVar18[1];
            *ppppplVar14 = (int64_t ****)*puVar18;
            ppppplVar14[1] = pppplVar9;
            puVar18 = (uint64_t *)
                      ((int64_t)ppppplVar14 +
                      ((int64_t)ppppplVar19 - (int64_t)ppppplVar13) + 0x10);
            pppplVar9 = (int64_t ****)puVar18[1];
            ppppplVar14[2] = (int64_t ****)*puVar18;
            ppppplVar14[3] = pppplVar9;
            uVar25 = uVar25 - 1;
            ppppplVar14 = ppppplVar14 + 4;
          } while (0 < (int64_t)uVar25);
        }
        if (*pppppplVar1 != (int64_t *****)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        *pppppplVar1 = ppppplVar13;
        ppppplVar13 = ppppplVar13 + uVar8 * 4;
        pppppplStack_90[3] = ppppplVar13;
      }
      else {
        ppppplVar13 = pppppplStack_90[2];
        uVar25 = (int64_t)ppppplVar13 - (int64_t)ppppplVar14 >> 5;
        if (uVar8 <= uVar25) {
          for (; 0 < (int64_t)uVar8; uVar8 = uVar8 - 1) {
            pppplVar9 = (int64_t ****)((int64_t ****)ppppplVar19)[1];
            *ppppplVar14 = *ppppplVar19;
            ppppplVar14[1] = pppplVar9;
            pppplVar9 = (int64_t ****)((int64_t ****)ppppplVar19)[3];
            ppppplVar14[2] = (int64_t ****)((int64_t ****)ppppplVar19)[2];
            ppppplVar14[3] = pppplVar9;
            ppppplVar14 = ppppplVar14 + 4;
            ppppplVar19 = (int64_t *****)((int64_t ****)ppppplVar19 + 4);
          }
          pppppplStack_90[2] = ppppplVar14;
          goto LAB_1803e54a3;
        }
        lVar26 = uVar25 * 4;
        if (0 < (int64_t)uVar25) {
          do {
            pppplVar9 = (int64_t ****)((int64_t ****)ppppplVar19)[1];
            *ppppplVar14 = *ppppplVar19;
            ppppplVar14[1] = pppplVar9;
            pppplVar9 = (int64_t ****)((int64_t ****)ppppplVar19)[3];
            ppppplVar14[2] = (int64_t ****)((int64_t ****)ppppplVar19)[2];
            ppppplVar14[3] = pppplVar9;
            uVar25 = uVar25 - 1;
            ppppplVar14 = ppppplVar14 + 4;
            ppppplVar19 = (int64_t *****)((int64_t ****)ppppplVar19 + 4);
          } while (0 < (int64_t)uVar25);
          ppppplVar13 = pppppplStack_90[2];
        }
        lVar24 = (int64_t)pppplStack_1b8 - (int64_t)(ppppplStack_1c0 + lVar26) >> 5;
        if (0 < lVar24) {
          lVar26 = (int64_t)(ppppplStack_1c0 + lVar26) - (int64_t)ppppplVar13;
          do {
            puVar18 = (uint64_t *)((int64_t)ppppplVar13 + lVar26);
            pppplVar9 = (int64_t ****)puVar18[1];
            *ppppplVar13 = (int64_t ****)*puVar18;
            ppppplVar13[1] = pppplVar9;
            puVar18 = (uint64_t *)((int64_t)(ppppplVar13 + 2) + lVar26);
            pppplVar9 = (int64_t ****)puVar18[1];
            ppppplVar13[2] = (int64_t ****)*puVar18;
            ppppplVar13[3] = pppplVar9;
            lVar24 = lVar24 + -1;
            ppppplVar13 = ppppplVar13 + 4;
          } while (0 < lVar24);
        }
      }
      pppppplStack_90[2] = ppppplVar13;
    }
LAB_1803e54a3:
    *(uint *)pppppplStack_90 = uStack_1c8;
    *(uint *)((int64_t)pppppplStack_90 + 4) = uStack_1c4;
    *(uint *)(pppppplStack_90 + 5) = (uint)uStack_1a0;
    *(uint *)((int64_t)pppppplStack_90 + 0x2c) = uStack_1a0._4_4_;
    pppppplStack_90[7] = (int64_t *****)ppppppplStack_190;
    ppppppplStack_208 = (int64_t *******)&ppppplStack_138;
    ppppplStack_138 = (int64_t *****)&memory_allocator_3432_ptr;
    puStack_130 = auStack_120;
    uStack_128 = 0;
    auStack_120[0] = 0;
    uStack_a0 = 1;
    pppppplStack_98 = pppppplVar11;
    uVar10 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    ppppppplVar20 = (int64_t *******)FUN_18005ce30(uVar10,&ppppplStack_138);
    ppppppplStack_1e0 = ppppppplVar20;
    if (ppppppplVar20 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplVar20)[5])(ppppppplVar20);
    }
    uVar10 = system_context_ptr;
    ppppppplStack_208 = (int64_t *******)&ppppppplStack_210;
    ppppppplStack_210 = ppppppplVar20;
    if (ppppppplVar20 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplVar20)[5])(ppppppplVar20);
    }
    FUN_18005e370(uVar10,&ppppppplStack_210);
    if (ppppppplVar20 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplVar20)[7])(ppppppplVar20);
    }
    ppppplStack_138 = (int64_t *****)&system_state_ptr;
  }
  lVar26 = lStack_178;
  uVar8 = (uint64_t)iStack_184;
  if ((uint64_t)(*(int64_t *)(lStack_178 + 0x108) - *(int64_t *)(lStack_178 + 0x100) >> 3) <=
      uVar8) {
    ppppppplStack_208 = (int64_t *******)0x0;
    FUN_1803e7430(lStack_178 + 0x100,(int64_t)(iStack_184 + 1),&ppppppplStack_208);
  }
  plVar2 = (int64_t *)(*(int64_t *)(lVar26 + 0x100) + uVar8 * 8);
  ppppppplStack_208 = (int64_t *******)pppppplVar11;
  (*(code *)(*pppppplVar11)[5])(pppppplVar11);
  ppppppplStack_208 = (int64_t *******)*plVar2;
  *plVar2 = (int64_t)pppppplVar11;
  if (ppppppplStack_208 != (int64_t *******)0x0) {
    (*(code *)(*ppppppplStack_208)[7])();
  }
  uStack_200 = (int64_t ***)&system_data_buffer_ptr;
  if (puVar12 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(puVar12);
  }
  ppppplStack_1f8 = (int64_t *****)0x0;
  uStack_1e8 = (int64_t ***)((uint64_t)uStack_1e8._4_4_ << 0x20);
  uStack_200 = (int64_t ***)&system_state_ptr;
  (*(code *)(*pppppplVar11)[7])(pppppplVar11);
LAB_1803e577e:
  pppppplStack_168 = &ppppplStack_1c0;
  if (ppppplStack_1c0 == (int64_t *****)0x0) {
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_248);
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






// 函数: void FUN_1803e57c0(int64_t param_1,int param_2,int param_3)
void FUN_1803e57c0(int64_t param_1,int param_2,int param_3)

{
  uint64_t *puVar1;
  ushort uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  bool bVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int *piVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint uVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  int iVar18;
  int8_t auStackX_20 [8];
  int iStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  int64_t alStack_38 [2];
  
  uVar12 = 0;
  alStack_38[1] = 0;
  iVar3 = *(int *)(&processed_var_6672_ptr + (int64_t)param_3 * 4);
  lVar4 = *(int64_t *)(param_1 + 400);
  alStack_38[0] =
       *(int64_t *)(*(int64_t *)(lVar4 + 0x80 + (int64_t)param_2 * 8) + 8 + (int64_t)iVar3 * 8);
  if (alStack_38[0] != 0) {
    uVar2 = *(ushort *)(alStack_38[0] + 0x32c);
    uVar14 = (uint)uVar2;
    uStack_40 = (uint)*(ushort *)(alStack_38[0] + 0x32e);
    uStack_44 = (uint)uVar2;
    if ((((lVar4 != 0) && (uStack_44 = uVar14, *(char *)(lVar4 + 0x1e50) != '\0')) &&
        (uVar2 == 0x800)) && (*(ushort *)(alStack_38[0] + 0x32e) == 0x800)) {
      uStack_44 = 0x400;
      uStack_40 = 0x400;
    }
    iStack_48 = *(int *)(alStack_38[0] + 0x324);
    iStack_3c = 0;
    uVar8 = FUN_1803e74c0(param_1,&iStack_48);
    FUN_180284cf0(uVar8,alStack_38);
    uVar17 = *(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 4;
    uVar9 = uVar12;
    uVar15 = uVar12;
    if (uVar17 != 0) {
      do {
        piVar10 = (int *)(uVar9 * 0x10 + *(int64_t *)(param_1 + 0xf0));
        if (((*piVar10 == iStack_48) && (piVar10[1] == uStack_44)) &&
           ((piVar10[2] == uStack_40 && (piVar10[3] == iStack_3c)))) goto LAB_1803e58e9;
        uVar14 = (int)uVar15 + 1;
        uVar9 = (int64_t)(int)uVar14;
        uVar15 = (uint64_t)uVar14;
      } while ((uint64_t)(int64_t)(int)uVar14 < uVar17);
    }
    FUN_1800863a0(param_1 + 0xf0,&iStack_48);
LAB_1803e58e9:
    plVar11 = (int64_t *)FUN_1803e74c0(param_1,&iStack_48);
    lVar4 = plVar11[1];
    lVar5 = *plVar11;
    uVar15 = *(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 4;
    uVar9 = uVar12;
    if (uVar15 != 0) {
      do {
        iVar18 = (int)uVar9;
        piVar10 = (int *)(uVar12 * 0x10 + *(int64_t *)(param_1 + 0xf0));
        if (((*piVar10 == iStack_48) && (piVar10[1] == uStack_44)) &&
           ((piVar10[2] == uStack_40 && (piVar10[3] == iStack_3c)))) goto LAB_1803e596c;
        uVar12 = (uint64_t)(int)(iVar18 + 1U);
        uVar9 = (uint64_t)(iVar18 + 1U);
      } while (uVar12 < uVar15);
    }
    iVar18 = -1;
LAB_1803e596c:
    puVar1 = (uint64_t *)(param_1 + 0x30);
    puVar16 = *(uint64_t **)(param_1 + 0x40);
    puVar7 = puVar1;
    while (puVar13 = puVar7, puVar7 = puVar16, puVar7 != (uint64_t *)0x0) {
      if ((*(int *)(puVar7 + 4) < param_2) ||
         ((*(int *)(puVar7 + 4) <= param_2 && (*(int *)((int64_t)puVar7 + 0x24) < iVar3)))) {
        puVar16 = (uint64_t *)*puVar7;
        bVar6 = true;
      }
      else {
        puVar16 = (uint64_t *)puVar7[1];
        bVar6 = false;
      }
      if (bVar6) {
        puVar7 = puVar13;
      }
    }
    if (((puVar13 == puVar1) || (param_2 < *(int *)(puVar13 + 4))) ||
       ((param_2 <= *(int *)(puVar13 + 4) && (iVar3 < *(int *)((int64_t)puVar13 + 0x24))))) {
      puVar13 = (uint64_t *)FUN_1803e77a0(puVar1,auStackX_20);
      puVar13 = (uint64_t *)*puVar13;
    }
    *(int *)((int64_t)puVar13 + 0x2c) = (int)(lVar4 - lVar5 >> 4) + -1;
    *(int *)(puVar13 + 5) = iVar18;
  }
  return;
}






// 函数: void FUN_1803e5817(int param_1,int64_t param_2,int param_3,int64_t param_4)
void FUN_1803e5817(int param_1,int64_t param_2,int param_3,int64_t param_4)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int *piVar8;
  int64_t *plVar9;
  uint64_t *puVar10;
  uint uVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int iVar15;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int unaff_EDI;
  int64_t in_R11;
  int unaff_R14D;
  int64_t unaff_R15;
  int iStack0000000000000030;
  int iStack0000000000000034;
  int iStack0000000000000038;
  int iStack000000000000003c;
  int32_t in_stack_00000080;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RSI;
  iStack0000000000000038 = param_3;
  if ((((param_4 != 0) && (*(char *)(param_4 + 0x1e50) != (char)unaff_RBX)) && (param_1 == 0x800))
     && (param_3 == 0x800)) {
    param_1 = 0x400;
    iStack0000000000000038 = 0x400;
  }
  iStack0000000000000030 = *(int *)(param_2 + 0x324);
  iStack000000000000003c = (int)unaff_RBX;
  iStack0000000000000034 = param_1;
  uVar6 = FUN_1803e74c0();
  FUN_180284cf0(uVar6,&stack0x00000040);
  uVar12 = unaff_RBX & 0xffffffff;
  uVar14 = *(int64_t *)(unaff_R15 + 0xf8) - *(int64_t *)(unaff_R15 + 0xf0) >> 4;
  uVar7 = unaff_RBX;
  if (uVar14 != 0) {
    do {
      piVar8 = (int *)(uVar7 * 0x10 + *(int64_t *)(unaff_R15 + 0xf0));
      if (((*piVar8 == iStack0000000000000030) && (piVar8[1] == iStack0000000000000034)) &&
         ((piVar8[2] == iStack0000000000000038 && (piVar8[3] == iStack000000000000003c))))
      goto LAB_1803e58e9;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (uint64_t)uVar11;
      uVar7 = (int64_t)(int)uVar11;
    } while ((uint64_t)(int64_t)(int)uVar11 < uVar14);
  }
  FUN_1800863a0(unaff_R15 + 0xf0,&stack0x00000030);
LAB_1803e58e9:
  plVar9 = (int64_t *)FUN_1803e74c0();
  lVar2 = plVar9[1];
  lVar3 = *plVar9;
  uVar12 = *(int64_t *)(unaff_R15 + 0xf8) - *(int64_t *)(unaff_R15 + 0xf0) >> 4;
  uVar7 = unaff_RBX;
  if (uVar12 != 0) {
    do {
      iVar15 = (int)uVar7;
      piVar8 = (int *)(unaff_RBX * 0x10 + *(int64_t *)(unaff_R15 + 0xf0));
      if (((*piVar8 == iStack0000000000000030) && (piVar8[1] == iStack0000000000000034)) &&
         ((piVar8[2] == iStack0000000000000038 && (piVar8[3] == iStack000000000000003c))))
      goto LAB_1803e596c;
      unaff_RBX = (uint64_t)(int)(iVar15 + 1U);
      uVar7 = (uint64_t)(iVar15 + 1U);
    } while (unaff_RBX < uVar12);
  }
  iVar15 = -1;
LAB_1803e596c:
  puVar1 = (uint64_t *)(unaff_R15 + 0x30);
  puVar13 = *(uint64_t **)(unaff_R15 + 0x40);
  puVar5 = puVar1;
  while (puVar10 = puVar5, puVar5 = puVar13, puVar5 != (uint64_t *)0x0) {
    if ((*(int *)(puVar5 + 4) < unaff_EDI) ||
       ((*(int *)(puVar5 + 4) <= unaff_EDI && (*(int *)((int64_t)puVar5 + 0x24) < unaff_R14D)))) {
      puVar13 = (uint64_t *)*puVar5;
      bVar4 = true;
    }
    else {
      puVar13 = (uint64_t *)puVar5[1];
      bVar4 = false;
    }
    if (bVar4) {
      puVar5 = puVar10;
    }
  }
  if (((puVar10 == puVar1) || (unaff_EDI < *(int *)(puVar10 + 4))) ||
     ((unaff_EDI <= *(int *)(puVar10 + 4) && (unaff_R14D < *(int *)((int64_t)puVar10 + 0x24))))) {
    puVar10 = (uint64_t *)FUN_1803e77a0(puVar1,&stack0x00000098);
    puVar10 = (uint64_t *)*puVar10;
  }
  *(int *)((int64_t)puVar10 + 0x2c) = (int)(lVar2 - lVar3 >> 4) + -1;
  *(int *)(puVar10 + 5) = iVar15;
  return;
}






