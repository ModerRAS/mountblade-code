#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part015.c - 21 个函数

// 函数: void FUN_1804a90f0(longlong param_1,float param_2)
void FUN_1804a90f0(longlong param_1,float param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  longlong lVar14;
  uint64_t *puVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int32_t uVar31;
  int32_t uVar32;
  float fVar33;
  int8_t auStack_1d8 [32];
  ulonglong *puStack_1b8;
  uint64_t uStack_1a8;
  float fStack_1a0;
  int iStack_198;
  int iStack_194;
  ulonglong uStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int32_t uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t uStack_15c;
  float fStack_158;
  float fStack_154;
  int32_t uStack_150;
  int32_t uStack_14c;
  longlong lStack_148;
  longlong lStack_140;
  uint64_t uStack_138;
  int32_t uStack_130;
  uint64_t uStack_128;
  int8_t auStack_120 [8];
  int8_t auStack_118 [8];
  void *puStack_110;
  int8_t *puStack_108;
  int32_t uStack_100;
  int8_t auStack_f8 [32];
  ulonglong uStack_d8;
  
  uStack_128 = 0xfffffffffffffffe;
  uStack_d8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1d8;
  fStack_1a0 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < system_system_config_memory) && (FUN_1808fcb90(&system_ptr_9e00), system_system_config_memory == -1)) {
    system_system_config_memory = 3;
    system_system_config_memory = &system_ptr_9e08;
    system_system_config_memory = &system_ptr_9e08;
    system_system_config_memory = (uint64_t *)0x0;
    system_system_config_memory = 0;
    system_system_config_memory = 0;
    FUN_1808fc820(FUN_180942aa0);
    FUN_1808fcb30(&system_ptr_9e00);
  }
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2908);
  if (lVar1 != 0) {
    lStack_148 = 0;
    lStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 3;
    FUN_1802e8c60(*(uint64_t *)(param_1 + 0x18),&lStack_148);
    iVar20 = 0;
    if (lStack_140 - lStack_148 >> 3 != 0) {
      fVar33 = (float)system_ptr_01f0;
      lVar19 = 0;
      do {
        uVar2 = *(ulonglong *)(lVar19 + lStack_148);
        fStack_188 = *(float *)(uVar2 + 0x70);
        fStack_184 = *(float *)(uVar2 + 0x74);
        fStack_180 = *(float *)(uVar2 + 0x78);
        uStack_17c = *(int32_t *)(uVar2 + 0x7c);
        fStack_178 = *(float *)(uVar2 + 0x80);
        fStack_174 = *(float *)(uVar2 + 0x84);
        fStack_170 = *(float *)(uVar2 + 0x88);
        uStack_16c = *(int32_t *)(uVar2 + 0x8c);
        fStack_168 = *(float *)(uVar2 + 0x90);
        fStack_164 = *(float *)(uVar2 + 0x94);
        fStack_160 = *(float *)(uVar2 + 0x98);
        uStack_15c = *(int32_t *)(uVar2 + 0x9c);
        fVar30 = *(float *)(uVar2 + 0xa0);
        fVar29 = *(float *)(uVar2 + 0xa4);
        uVar31 = *(int32_t *)(uVar2 + 0xa8);
        uVar32 = *(int32_t *)(uVar2 + 0xac);
        auVar22._4_4_ = fStack_180;
        auVar22._0_4_ = fStack_180;
        auVar22._8_4_ = fStack_180;
        auVar22._12_4_ = fStack_180;
        auVar21._4_12_ = auVar22._4_12_;
        auVar21._0_4_ = fStack_180 * fStack_180;
        fVar27 = fStack_188 * fStack_188 + fStack_184 * fStack_184 + auVar21._0_4_;
        auVar22 = rsqrtss(auVar21,ZEXT416((uint)fVar27));
        fVar28 = auVar22._0_4_;
        fVar28 = fVar28 * 0.5 * (fVar33 - fVar27 * fVar28 * fVar28);
        fStack_188 = fStack_188 * fVar28;
        fStack_184 = fStack_184 * fVar28;
        fStack_180 = fStack_180 * fVar28;
        auVar23._4_4_ = fStack_170;
        auVar23._0_4_ = fStack_170;
        auVar23._8_4_ = fStack_170;
        auVar23._12_4_ = fStack_170;
        auVar24._4_12_ = auVar23._4_12_;
        auVar24._0_4_ = fStack_170 * fStack_170;
        fVar27 = fStack_178 * fStack_178 + fStack_174 * fStack_174 + auVar24._0_4_;
        auVar22 = rsqrtss(auVar24,ZEXT416((uint)fVar27));
        fVar28 = auVar22._0_4_;
        fVar28 = fVar28 * 0.5 * (fVar33 - fVar27 * fVar28 * fVar28);
        fStack_178 = fStack_178 * fVar28;
        fStack_174 = fStack_174 * fVar28;
        fStack_170 = fStack_170 * fVar28;
        auVar25._4_4_ = fStack_160;
        auVar25._0_4_ = fStack_160;
        auVar25._8_4_ = fStack_160;
        auVar25._12_4_ = fStack_160;
        auVar26._4_12_ = auVar25._4_12_;
        auVar26._0_4_ = fStack_160 * fStack_160;
        fVar27 = fStack_168 * fStack_168 + fStack_164 * fStack_164 + auVar26._0_4_;
        auVar22 = rsqrtss(auVar26,ZEXT416((uint)fVar27));
        fVar28 = auVar22._0_4_;
        fVar28 = fVar28 * 0.5 * (fVar33 - fVar27 * fVar28 * fVar28);
        fStack_168 = fStack_168 * fVar28;
        fStack_164 = fStack_164 * fVar28;
        fStack_160 = fStack_160 * fVar28;
        uStack_190 = uVar2;
        fStack_158 = fVar30;
        fStack_154 = fVar29;
        uStack_150 = uVar31;
        uStack_14c = uVar32;
        cVar9 = FUN_1802eee20(uVar2,&unknown_var_4656_ptr);
        if ((cVar9 != '\0') &&
           (puVar15 = (uint64_t *)&system_ptr_9e08, puVar12 = system_system_config_memory,
           system_system_config_memory != (uint64_t *)0x0)) {
          do {
            if ((ulonglong)puVar12[4] < uVar2) {
              puVar13 = (uint64_t *)*puVar12;
            }
            else {
              puVar13 = (uint64_t *)puVar12[1];
              puVar15 = puVar12;
            }
            puVar12 = puVar13;
          } while (puVar13 != (uint64_t *)0x0);
          if ((puVar15 != (uint64_t *)&system_ptr_9e08) && ((ulonglong)puVar15[4] <= uVar2)) {
            if (*(char *)(lVar1 + 0x68) == '\0') {
              uStack_1a8 = 0;
              lVar14 = FUN_1803a5130(lVar1,&fStack_158,&iStack_198,&uStack_1a8);
              if ((*(longlong *)(lVar14 + 0x20) == 0) ||
                 ((*(longlong *)(lVar14 + 0x40) - *(longlong *)(lVar14 + 0x38) & 0xfffffffffffffff8U
                  ) == 0)) {
                lVar17 = 0;
              }
              else {
                iVar10 = *(int *)(lVar14 + 0xc);
                iVar18 = iVar10 * iStack_198 + iStack_194;
                iVar11 = iVar10 * iVar10 + -1;
                if (iVar18 < iVar10 * iVar10) {
                  iVar11 = iVar18;
                }
                iVar10 = 0;
                if (-1 < iVar11) {
                  iVar10 = iVar11;
                }
                lVar17 = *(longlong *)
                          (*(longlong *)(lVar14 + 0x38) +
                          (ulonglong)*(byte *)((longlong)iVar10 + *(longlong *)(lVar14 + 0x20)) * 8)
                ;
              }
              fVar30 = (float)iStack_194 + uStack_1a8._4_4_;
              fVar29 = (float)iStack_198 + (float)uStack_1a8;
              plVar16 = *(longlong **)(lVar14 + 0x60);
            }
            else {
              lVar17 = *(longlong *)(system_system_data_memory + 0x28);
              plVar16 = *(longlong **)(lVar1 + 0x50);
              fVar30 = 1.0 / *(float *)(lVar1 + 0x58);
              fVar29 = fStack_158 * fVar30 * (float)*(int *)(lVar1 + 0x60);
              fVar30 = fStack_154 * fVar30 * (float)*(int *)(lVar1 + 0x60);
            }
            (**(code **)(*plVar16 + 8))(plVar16,fVar30,fVar29);
            if (lVar17 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *(int *)(lVar17 + 100);
            }
            puStack_110 = &unknown_var_672_ptr;
            puStack_108 = auStack_f8;
            auStack_f8[0] = 0;
            uStack_100 = 5;
            strcpy_s(auStack_f8,0x20,&unknown_var_4688_ptr);
            lVar14 = system_system_data_memory;
            iVar11 = FUN_180191c00(system_system_data_memory,&puStack_110);
            if ((iVar11 == -1) ||
               (lVar17 = (longlong)iVar11 * 0x68 + *(longlong *)(lVar14 + 0x38), lVar17 == 0)) {
              lVar17 = *(longlong *)(lVar14 + 0x28);
            }
            puStack_110 = &system_state_ptr;
            lVar14 = *(longlong *)(system_system_memory + (longlong)*(int *)(lVar17 + 100) * 8);
            iVar10 = *(int *)(lVar14 + (longlong)iVar10 * 0x28);
            if (iVar10 < 0) {
              iVar10 = *(int *)(lVar14 + (longlong)
                                         *(int *)(*(longlong *)(system_system_data_memory + 0x28) + 100) * 0x28
                               );
            }
            uVar3 = *(uint64_t *)(param_1 + 0x70);
            puVar15 = (uint64_t *)&system_ptr_9e08;
            puVar12 = system_system_config_memory;
            while (puVar12 != (uint64_t *)0x0) {
              if ((ulonglong)puVar12[4] < uVar2) {
                puVar12 = (uint64_t *)*puVar12;
              }
              else {
                puVar15 = puVar12;
                puVar12 = (uint64_t *)puVar12[1];
              }
            }
            if ((puVar15 == (uint64_t *)&system_ptr_9e08) || (uVar2 < (ulonglong)puVar15[4])) {
              puStack_1b8 = &uStack_190;
              puVar15 = (uint64_t *)FUN_1804a9bd0(puStack_1b8,auStack_120);
              puVar15 = (uint64_t *)*puVar15;
            }
            FUN_1803a8720(uVar3,puVar15 + 0xb,&fStack_158,iVar10);
            fVar30 = fStack_158;
            fVar29 = fStack_154;
            uVar31 = uStack_150;
            uVar32 = uStack_14c;
          }
        }
        uVar3 = CONCAT44(fStack_184,fStack_188);
        uVar4 = CONCAT44(uStack_17c,fStack_180);
        uVar5 = CONCAT44(fStack_174,fStack_178);
        uVar6 = CONCAT44(uStack_16c,fStack_170);
        uVar7 = CONCAT44(fStack_164,fStack_168);
        uVar8 = CONCAT44(uStack_15c,fStack_160);
        puVar15 = (uint64_t *)&system_ptr_9e08;
        puVar12 = system_system_config_memory;
        while (puVar12 != (uint64_t *)0x0) {
          if ((ulonglong)puVar12[4] < uVar2) {
            puVar12 = (uint64_t *)*puVar12;
          }
          else {
            puVar15 = puVar12;
            puVar12 = (uint64_t *)puVar12[1];
          }
        }
        if ((puVar15 == (uint64_t *)&system_ptr_9e08) || (uVar2 < (ulonglong)puVar15[4])) {
          puStack_1b8 = &uStack_190;
          puVar15 = (uint64_t *)FUN_1804a9bd0(puStack_1b8,auStack_118);
          puVar15 = (uint64_t *)*puVar15;
        }
        puVar15[5] = uVar3;
        puVar15[6] = uVar4;
        puVar15[7] = uVar5;
        puVar15[8] = uVar6;
        puVar15[9] = uVar7;
        puVar15[10] = uVar8;
        *(float *)(puVar15 + 0xb) = fVar30;
        *(float *)((longlong)puVar15 + 0x5c) = fVar29;
        *(int32_t *)(puVar15 + 0xc) = uVar31;
        *(int32_t *)((longlong)puVar15 + 100) = uVar32;
        iVar20 = iVar20 + 1;
        lVar19 = lVar19 + 8;
        param_2 = fStack_1a0;
      } while ((ulonglong)(longlong)iVar20 < (ulonglong)(lStack_140 - lStack_148 >> 3));
    }
    system_system_config_memory = 0.0;
    if (lStack_148 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    system_system_config_memory = param_2 + 0.0;
    FUN_1803a7b10(*(uint64_t *)(param_1 + 0x70));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_1d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a9810(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804a9810(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = system_system_config_memory;
  if (system_system_config_memory != (uint64_t *)0x0) {
    FUN_1804a9b80(param_1,*system_system_config_memory,param_3,param_4,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a9880(longlong param_1,longlong param_2)
void FUN_1804a9880(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t uVar3;
  float fVar4;
  float fVar5;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int32_t uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int32_t uStack_4c;
  uint64_t uStack_30;
  
  if (*(int *)(param_2 + 0x10) == 0xc) {
    uStack_30 = 0x1804a98a2;
    iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&system_ptr_de40);
    if (iVar2 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      fStack_54 = (*(float *)(lVar1 + 0xa4) - *(float *)(lVar1 + 0x74)) - *(float *)(lVar1 + 0x84);
      fStack_64 = *(float *)(lVar1 + 0x74) + *(float *)(lVar1 + 0xa4) + *(float *)(lVar1 + 0x84);
      fStack_60 = *(float *)(lVar1 + 0x78) + *(float *)(lVar1 + 0xa8) + *(float *)(lVar1 + 0x88);
      fStack_50 = (*(float *)(lVar1 + 0xa8) - *(float *)(lVar1 + 0x78)) - *(float *)(lVar1 + 0x88);
      fVar4 = (*(float *)(lVar1 + 0xa0) - *(float *)(lVar1 + 0x70)) - *(float *)(lVar1 + 0x80);
      fVar5 = *(float *)(lVar1 + 0x70) + *(float *)(lVar1 + 0xa0) + *(float *)(lVar1 + 0x80);
      uStack_5c = 0x7f7fffff;
      uStack_4c = 0x7f7fffff;
      fStack_68 = fVar5;
      fStack_58 = fVar4;
      uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x560,8,3);
      uVar3 = FUN_1803a7870(uVar3,*(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x20),
                            (fVar5 - fVar4) * 0.02,&fStack_58,&fStack_68);
      *(uint64_t *)(param_1 + 0x70) = uVar3;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a98c0(longlong param_1)
void FUN_1804a98c0(longlong param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  float fVar3;
  float fVar4;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int32_t uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int32_t uStack_4c;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  fStack_54 = (*(float *)(lVar1 + 0xa4) - *(float *)(lVar1 + 0x74)) - *(float *)(lVar1 + 0x84);
  fStack_64 = *(float *)(lVar1 + 0x74) + *(float *)(lVar1 + 0xa4) + *(float *)(lVar1 + 0x84);
  fStack_60 = *(float *)(lVar1 + 0x78) + *(float *)(lVar1 + 0xa8) + *(float *)(lVar1 + 0x88);
  fStack_50 = (*(float *)(lVar1 + 0xa8) - *(float *)(lVar1 + 0x78)) - *(float *)(lVar1 + 0x88);
  fVar3 = (*(float *)(lVar1 + 0xa0) - *(float *)(lVar1 + 0x70)) - *(float *)(lVar1 + 0x80);
  fVar4 = *(float *)(lVar1 + 0x70) + *(float *)(lVar1 + 0xa0) + *(float *)(lVar1 + 0x80);
  uStack_5c = 0x7f7fffff;
  uStack_4c = 0x7f7fffff;
  fStack_68 = fVar4;
  fStack_58 = fVar3;
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x560,8,3);
  uVar2 = FUN_1803a7870(uVar2,*(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x20),
                        (fVar4 - fVar3) * 0.02,&fStack_58,&fStack_68);
  *(uint64_t *)(param_1 + 0x70) = uVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a9a20(uint64_t param_1)
void FUN_1804a9a20(uint64_t param_1)

{
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  uint64_t uStack_f0;
  void **appuStack_e8 [2];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [72];
  void *apuStack_78 [11];
  int32_t uStack_20;
  ulonglong uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &unknown_var_3480_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0xc;
  strcpy_s(auStack_c0,0x40,&system_ptr_de40);
  FUN_1800b8300(apuStack_78,&puStack_d8);
  uStack_20 = 0xb;
  uStack_f8 = 1;
  FUN_180180730(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &system_state_ptr;
  puStack_d8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a9b30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804a9b30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = system_system_config_memory;
  if (system_system_config_memory != (uint64_t *)0x0) {
    FUN_1804a9b80(param_1,*system_system_config_memory,param_3,param_4,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}






// 函数: void FUN_1804a9b80(uint64_t param_1,uint64_t *param_2)
void FUN_1804a9b80(uint64_t param_1,uint64_t *param_2)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1804a9b80(&system_ptr_9e08,*param_2);
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}






// 函数: void FUN_1804a9b8d(void)
void FUN_1804a9b8d(void)

{
  uint64_t *unaff_RBX;
  
  FUN_1804a9b80(&system_ptr_9e08,*unaff_RBX);
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a9bcd(void)
void FUN_1804a9bcd(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1804a9bd0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             ulonglong *param_5)

{
  longlong *plVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  bool bVar7;
  
  if ((param_4 == system_system_config_memory) || (param_4 == (longlong *)&system_ptr_9e08)) {
    if ((system_system_config_memory != 0) && (param_4 = system_system_config_memory, (ulonglong)system_system_config_memory[4] < *param_5)
       ) goto LAB_1804a9c41;
  }
  else {
    plVar1 = (longlong *)func_0x00018066bd70(param_4);
    if (((ulonglong)param_4[4] < *param_5) && (*param_5 < (ulonglong)plVar1[4])) {
      if (*param_4 != 0) {
        param_4 = plVar1;
      }
LAB_1804a9c41:
      if (param_4 != (longlong *)0x0) {
        FUN_1804a9d60();
        return param_2;
      }
    }
  }
  puVar5 = (uint64_t *)&system_ptr_9e08;
  bVar7 = true;
  if (system_system_config_memory != (uint64_t *)0x0) {
    puVar2 = system_system_config_memory;
    do {
      puVar5 = puVar2;
      bVar7 = *param_5 < (ulonglong)puVar5[4];
      if (bVar7) {
        puVar2 = (uint64_t *)puVar5[1];
      }
      else {
        puVar2 = (uint64_t *)*puVar5;
      }
    } while (puVar2 != (uint64_t *)0x0);
  }
  puVar2 = puVar5;
  if (bVar7) {
    if (puVar5 == system_system_config_memory) {
      uVar3 = *param_5;
      goto FUN_1804a9cc4;
    }
    puVar2 = (uint64_t *)func_0x00018066b9a0(puVar5);
  }
  uVar3 = *param_5;
  if (uVar3 <= (ulonglong)puVar2[4]) {
    *param_2 = puVar2;
    return param_2;
  }
FUN_1804a9cc4:
  if ((puVar5 == (uint64_t *)&system_ptr_9e08) || (uVar3 < (ulonglong)puVar5[4])) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  lVar4 = FUN_18062b420(system_memory_pool_ptr,0x68,system_ptr_9e30);
  *(ulonglong *)(lVar4 + 0x20) = *param_5;
  *(uint64_t *)(lVar4 + 0x28) = 0;
  *(uint64_t *)(lVar4 + 0x30) = 0;
  *(uint64_t *)(lVar4 + 0x38) = 0;
  *(uint64_t *)(lVar4 + 0x40) = 0;
  *(uint64_t *)(lVar4 + 0x48) = 0;
  *(uint64_t *)(lVar4 + 0x50) = 0;
  *(uint64_t *)(lVar4 + 0x58) = 0;
  *(uint64_t *)(lVar4 + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,puVar5,&system_ptr_9e08,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a9cc4(void)
void FUN_1804a9cc4(void)

{
  longlong lVar1;
  uint64_t *unaff_RDI;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x68,system_ptr_9e30);
  *(uint64_t *)(lVar1 + 0x20) = *unaff_RDI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(uint64_t *)(lVar1 + 0x38) = 0;
  *(uint64_t *)(lVar1 + 0x40) = 0;
  *(uint64_t *)(lVar1 + 0x48) = 0;
  *(uint64_t *)(lVar1 + 0x50) = 0;
  *(uint64_t *)(lVar1 + 0x58) = 0;
  *(uint64_t *)(lVar1 + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a9cdb(void)
void FUN_1804a9cdb(void)

{
  longlong lVar1;
  uint64_t *unaff_RDI;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x68,system_ptr_9e30);
  *(uint64_t *)(lVar1 + 0x20) = *unaff_RDI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(uint64_t *)(lVar1 + 0x38) = 0;
  *(uint64_t *)(lVar1 + 0x40) = 0;
  *(uint64_t *)(lVar1 + 0x48) = 0;
  *(uint64_t *)(lVar1 + 0x50) = 0;
  *(uint64_t *)(lVar1 + 0x58) = 0;
  *(uint64_t *)(lVar1 + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a9ce0(void)
void FUN_1804a9ce0(void)

{
  longlong lVar1;
  uint64_t *unaff_RDI;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x68,system_ptr_9e30);
  *(uint64_t *)(lVar1 + 0x20) = *unaff_RDI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(uint64_t *)(lVar1 + 0x38) = 0;
  *(uint64_t *)(lVar1 + 0x40) = 0;
  *(uint64_t *)(lVar1 + 0x48) = 0;
  *(uint64_t *)(lVar1 + 0x50) = 0;
  *(uint64_t *)(lVar1 + 0x58) = 0;
  *(uint64_t *)(lVar1 + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}






// 函数: void FUN_1804a9d44(void)
void FUN_1804a9d44(void)

{
  uint64_t unaff_RBX;
  uint64_t *unaff_R14;
  
  *unaff_R14 = unaff_RBX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a9d60(uint64_t param_1,uint64_t param_2,void *param_3,char param_4,
void FUN_1804a9d60(uint64_t param_1,uint64_t param_2,void *param_3,char param_4,
                  ulonglong *param_5)

{
  longlong lVar1;
  int32_t uVar2;
  
  if (((param_4 == '\0') && (param_3 != &system_ptr_9e08)) &&
     (*(ulonglong *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x68,system_ptr_9e30);
  *(ulonglong *)(lVar1 + 0x20) = *param_5;
  *(uint64_t *)(lVar1 + 0x28) = 0;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(uint64_t *)(lVar1 + 0x38) = 0;
  *(uint64_t *)(lVar1 + 0x40) = 0;
  *(uint64_t *)(lVar1 + 0x48) = 0;
  *(uint64_t *)(lVar1 + 0x50) = 0;
  *(uint64_t *)(lVar1 + 0x58) = 0;
  *(uint64_t *)(lVar1 + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,&system_ptr_9e08,uVar2);
}






// 函数: void FUN_1804a9e30(longlong *param_1)
void FUN_1804a9e30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (longlong *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 0x1c;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0xe0;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}






// 函数: void FUN_1804a9ee0(longlong *param_1)
void FUN_1804a9ee0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (longlong *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 0x1c;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0xe0;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}






// 函数: void FUN_1804a9f00(longlong *param_1)
void FUN_1804a9f00(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar3 = (uint64_t *)*param_1;
  if (puVar3 != (uint64_t *)0x0) {
    if ((uint64_t *)puVar3[3] != (uint64_t *)0x0) {
      *(uint64_t *)puVar3[3] = 0;
    }
    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  if ((param_1[6] != 0) && (*(longlong *)(param_1[6] + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = param_1[5];
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x3c1);
    lVar4 = *(longlong *)(lVar4 + 0x3b8);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = (uint64_t *)param_1[3];
  if (puVar3 == (uint64_t *)0x0) {
    return;
  }
  uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *puVar3 = *(uint64_t *)(lVar4 + 0x20);
      *(uint64_t **)(lVar4 + 0x20) = puVar3;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                          puVar3,uVar5,0xfffffffffffffffe);
    }
  }
  return;
}






// 函数: void FUN_1804a9f04(longlong *param_1)
void FUN_1804a9f04(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar3 = (uint64_t *)*param_1;
  if (puVar3 != (uint64_t *)0x0) {
    if ((uint64_t *)puVar3[3] != (uint64_t *)0x0) {
      *(uint64_t *)puVar3[3] = 0;
    }
    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  if ((param_1[6] != 0) && (*(longlong *)(param_1[6] + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = param_1[5];
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x3c1);
    lVar4 = *(longlong *)(lVar4 + 0x3b8);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = (uint64_t *)param_1[3];
  if (puVar3 == (uint64_t *)0x0) {
    return;
  }
  uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *puVar3 = *(uint64_t *)(lVar4 + 0x20);
      *(uint64_t **)(lVar4 + 0x20) = puVar3;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                          puVar3,uVar5,0xfffffffffffffffe);
    }
  }
  return;
}






// 函数: void FUN_1804a9f19(void)
void FUN_1804a9f19(void)

{
  uint64_t *unaff_RBX;
  
  if ((uint64_t *)unaff_RBX[3] != (uint64_t *)0x0) {
    *(uint64_t *)unaff_RBX[3] = 0;
  }
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a9f6f(void)
void FUN_1804a9f6f(void)

{
  int *piVar1;
  char *pcVar2;
  uint64_t *puVar3;
  longlong lVar4;
  longlong unaff_RSI;
  ulonglong uVar5;
  
  if ((*(longlong *)(unaff_RSI + 0x30) != 0) &&
     (*(longlong *)(*(longlong *)(unaff_RSI + 0x30) + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = *(longlong *)(unaff_RSI + 0x28);
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x3c1);
    lVar4 = *(longlong *)(lVar4 + 0x3b8);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = *(uint64_t **)(unaff_RSI + 0x18);
  if (puVar3 != (uint64_t *)0x0) {
    uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar3,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a9fd0(uint64_t *param_1)
void FUN_1804a9fd0(uint64_t *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1 & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((longlong)param_1 - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *param_1 = *(uint64_t *)(lVar2 + 0x20);
      *(uint64_t **)(lVar2 + 0x20) = param_1;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList),
                          param_1,uVar3,0xfffffffffffffffe);
    }
  }
  return;
}






