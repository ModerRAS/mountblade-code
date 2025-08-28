#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part265.c - 5 个函数

// 函数: void FUN_180414010(int64_t param_1,int64_t param_2,int64_t param_3,int64_t *param_4,int param_5,
void FUN_180414010(int64_t param_1,int64_t param_2,int64_t param_3,int64_t *param_4,int param_5,
                  int param_6)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  byte bVar3;
  uint64_t uVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int64_t lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int64_t lVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  byte *pbVar18;
  int64_t lVar19;
  int iVar20;
  int64_t lVar21;
  bool bVar22;
  int8_t auStack_b8 [32];
  int64_t lStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint64_t uStack_70;
  
  uStack_70 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  lVar21 = (int64_t)param_5;
  if (lVar21 < param_6) {
    piVar16 = (int *)(param_2 + 0x50 + lVar21 * 0x58);
    lVar14 = param_6 - lVar21;
    piVar17 = (int *)(param_3 + lVar21 * 0xc + 8);
    do {
      if ((*(byte *)(piVar16 + -1) & 2) == 0) {
        iVar12 = param_5 * 3;
        iVar20 = 0;
        lVar19 = 0;
        bVar6 = true;
        do {
          if (iVar12 <= iVar20) {
            if (bVar6) goto LAB_18041412d;
            break;
          }
          bVar22 = piVar17[-2] != *(int *)(param_3 + lVar19 * 4);
          bVar5 = false;
          if (bVar22) {
            bVar5 = bVar6;
          }
          if (bVar22) {
            iVar20 = iVar20 + 1;
          }
          if (bVar22) {
            lVar19 = lVar19 + 1;
          }
          bVar6 = bVar5;
        } while (bVar5);
        iVar11 = iVar20 / 3 + (iVar20 >> 0x1f) +
                 (int)(((int64_t)iVar20 / 3 + ((int64_t)iVar20 >> 0x3f) & 0xffffffffU) >> 0x1f);
        lVar19 = (int64_t)iVar11 * 0x58;
        lVar19 = (int64_t)
                 (int)((uint)*(byte *)((iVar20 + iVar11 * -3) + param_2 + 0x54 + lVar19) +
                      *(int *)(param_2 + 0x50 + lVar19));
        puVar1 = (uint64_t *)(param_1 + lVar19 * 0x28);
        uVar4 = puVar1[1];
        lVar10 = (int64_t)(int)((uint)*(byte *)(piVar16 + 1) + *piVar16);
        puVar2 = (uint64_t *)(param_1 + lVar10 * 0x28);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (uint64_t *)(param_1 + 0x10 + lVar19 * 0x28);
        uVar4 = puVar1[1];
        puVar2 = (uint64_t *)(param_1 + 0x10 + lVar10 * 0x28);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        *(uint64_t *)(param_1 + 0x20 + lVar10 * 0x28) =
             *(uint64_t *)(param_1 + 0x20 + lVar19 * 0x28);
LAB_18041412d:
        iVar20 = 0;
        lVar19 = 0;
        bVar6 = true;
        do {
          if (iVar12 <= iVar20) {
            if (bVar6) goto LAB_1804141cd;
            break;
          }
          bVar22 = piVar17[-1] != *(int *)(param_3 + lVar19 * 4);
          bVar5 = false;
          if (bVar22) {
            bVar5 = bVar6;
          }
          if (bVar22) {
            iVar20 = iVar20 + 1;
          }
          if (bVar22) {
            lVar19 = lVar19 + 1;
          }
          bVar6 = bVar5;
        } while (bVar5);
        iVar11 = iVar20 / 3 + (iVar20 >> 0x1f) +
                 (int)(((int64_t)iVar20 / 3 + ((int64_t)iVar20 >> 0x3f) & 0xffffffffU) >> 0x1f);
        lVar19 = (int64_t)iVar11 * 0x58;
        lVar19 = (int64_t)
                 (int)((uint)*(byte *)((iVar20 + iVar11 * -3) + param_2 + 0x54 + lVar19) +
                      *(int *)(param_2 + 0x50 + lVar19));
        puVar1 = (uint64_t *)(param_1 + lVar19 * 0x28);
        uVar4 = puVar1[1];
        lVar10 = (int64_t)(int)((uint)*(byte *)((int64_t)piVar16 + 5) + *piVar16);
        puVar2 = (uint64_t *)(param_1 + lVar10 * 0x28);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (uint64_t *)(param_1 + 0x10 + lVar19 * 0x28);
        uVar4 = puVar1[1];
        puVar2 = (uint64_t *)(param_1 + 0x10 + lVar10 * 0x28);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        *(uint64_t *)(param_1 + 0x20 + lVar10 * 0x28) =
             *(uint64_t *)(param_1 + 0x20 + lVar19 * 0x28);
LAB_1804141cd:
        iVar20 = 0;
        lVar19 = 0;
        bVar6 = true;
        do {
          if (iVar12 <= iVar20) {
            if (bVar6) goto LAB_18041426d;
            break;
          }
          bVar22 = *piVar17 != *(int *)(param_3 + lVar19 * 4);
          bVar5 = false;
          if (bVar22) {
            bVar5 = bVar6;
          }
          if (bVar22) {
            iVar20 = iVar20 + 1;
          }
          if (bVar22) {
            lVar19 = lVar19 + 1;
          }
          bVar6 = bVar5;
        } while (bVar5);
        iVar12 = iVar20 / 3 + (iVar20 >> 0x1f) +
                 (int)(((int64_t)iVar20 / 3 + ((int64_t)iVar20 >> 0x3f) & 0xffffffffU) >> 0x1f);
        lVar19 = (int64_t)iVar12 * 0x58;
        lVar19 = (int64_t)
                 (int)((uint)*(byte *)((iVar20 + iVar12 * -3) + param_2 + 0x54 + lVar19) +
                      *(int *)(param_2 + 0x50 + lVar19));
        puVar1 = (uint64_t *)(param_1 + lVar19 * 0x28);
        uVar4 = puVar1[1];
        lVar10 = (int64_t)(int)((uint)*(byte *)((int64_t)piVar16 + 6) + *piVar16);
        puVar2 = (uint64_t *)(param_1 + lVar10 * 0x28);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (uint64_t *)(param_1 + 0x10 + lVar19 * 0x28);
        uVar4 = puVar1[1];
        puVar2 = (uint64_t *)(param_1 + 0x10 + lVar10 * 0x28);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        *(uint64_t *)(param_1 + 0x20 + lVar10 * 0x28) =
             *(uint64_t *)(param_1 + 0x20 + lVar19 * 0x28);
      }
LAB_18041426d:
      piVar17 = piVar17 + 3;
      piVar16 = piVar16 + 0x16;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  lStack_98 = lVar21;
  if (0 < lVar21) {
    pbVar18 = (byte *)(param_2 + 0x55);
    lVar14 = 0;
    do {
      if ((pbVar18[-9] & 2) != 0) {
        uVar13 = 1 << (pbVar18[1] & 0x1f) | 1 << (*pbVar18 & 0x1f) | 1 << (pbVar18[-1] & 0x1f);
        if ((uVar13 & 2) == 0) {
          uVar15 = 1;
        }
        else if ((uVar13 & 4) == 0) {
          uVar15 = 2;
        }
        else {
          uVar15 = 0;
          if ((uVar13 & 8) == 0) {
            uVar15 = 3;
          }
        }
        iVar12 = *(int *)(pbVar18 + -0xd);
        (**(code **)(*param_4 + 0x10))(param_4,&fStack_90,(int)(iVar12 * 4 | uVar15) >> 2,uVar15);
        fVar9 = fStack_88;
        fVar8 = fStack_8c;
        fVar7 = fStack_90;
        for (lVar19 = 0; lVar21 = lStack_98, lVar19 < 3; lVar19 = lVar19 + 1) {
          bVar3 = pbVar18[lVar19 + -1];
          uVar13 = bVar3 & 3;
          (**(code **)(*param_4 + 0x10))(param_4,&fStack_80,(int)(uVar13 | iVar12 * 4) >> 2,uVar13);
          if (((fStack_80 == fVar7) && (fStack_7c == fVar8)) && (fStack_78 == fVar9)) {
            lVar21 = (int64_t)(int)(*(int *)(pbVar18 + -5) + (uint)bVar3);
            lVar19 = (int64_t)(int)(*(int *)(pbVar18 + -5) + uVar15);
            puVar1 = (uint64_t *)(param_1 + lVar21 * 0x28);
            uVar4 = puVar1[1];
            puVar2 = (uint64_t *)(param_1 + lVar19 * 0x28);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar1 = (uint64_t *)(param_1 + 0x10 + lVar21 * 0x28);
            uVar4 = puVar1[1];
            puVar2 = (uint64_t *)(param_1 + 0x10 + lVar19 * 0x28);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            *(uint64_t *)(param_1 + 0x20 + lVar19 * 0x28) =
                 *(uint64_t *)(param_1 + 0x20 + lVar21 * 0x28);
            lVar21 = lStack_98;
            break;
          }
        }
      }
      lVar14 = lVar14 + 1;
      pbVar18 = pbVar18 + 0x58;
    } while (lVar14 < lVar21);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_70 ^ (uint64_t)auStack_b8);
}





// 函数: void FUN_180414294(float param_1)
void FUN_180414294(float param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  byte bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int64_t in_RAX;
  int64_t lVar9;
  uint uVar10;
  int64_t lVar11;
  uint uVar12;
  byte *unaff_RDI;
  int64_t unaff_R12;
  int64_t *unaff_R13;
  int64_t lVar13;
  int64_t lStackX_20;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  uint64_t in_stack_00000048;
  
  lVar13 = 0;
  do {
    if ((unaff_RDI[-9] & 2) != 0) {
      uVar10 = 1 << (unaff_RDI[1] & 0x1f) | 1 << (*unaff_RDI & 0x1f) | 1 << (unaff_RDI[-1] & 0x1f);
      if ((uVar10 & 2) == 0) {
        uVar12 = 1;
      }
      else if ((uVar10 & 4) == 0) {
        uVar12 = 2;
      }
      else {
        uVar12 = 0;
        if ((uVar10 & 8) == 0) {
          uVar12 = 3;
        }
      }
      iVar5 = *(int *)(unaff_RDI + -0xd);
      param_1 = (float)(**(code **)(*unaff_R13 + 0x10))
                                 (param_1,&stack0x00000028,(int)(iVar5 * 4 | uVar12) >> 2,uVar12);
      fVar8 = in_stack_00000030;
      fVar7 = fStack000000000000002c;
      fVar6 = fStack0000000000000028;
      for (lVar11 = 0; in_RAX = lStackX_20, lVar11 < 3; lVar11 = lVar11 + 1) {
        bVar4 = unaff_RDI[lVar11 + -1];
        uVar10 = bVar4 & 3;
        (**(code **)(*unaff_R13 + 0x10))
                  (param_1,&stack0x00000038,(int)(uVar10 | iVar5 * 4) >> 2,uVar10);
        param_1 = fStack0000000000000038;
        if (((fStack0000000000000038 == fVar6) &&
            (param_1 = fStack000000000000003c, fStack000000000000003c == fVar7)) &&
           (param_1 = in_stack_00000040, in_stack_00000040 == fVar8)) {
          lVar11 = (int64_t)(int)(*(int *)(unaff_RDI + -5) + (uint)bVar4);
          lVar9 = (int64_t)(int)(*(int *)(unaff_RDI + -5) + uVar12);
          puVar1 = (uint64_t *)(unaff_R12 + lVar11 * 0x28);
          uVar3 = puVar1[1];
          puVar2 = (uint64_t *)(unaff_R12 + lVar9 * 0x28);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (uint64_t *)(unaff_R12 + 0x10 + lVar11 * 0x28);
          uVar3 = puVar1[1];
          puVar2 = (uint64_t *)(unaff_R12 + 0x10 + lVar9 * 0x28);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          uVar3 = *(uint64_t *)(unaff_R12 + 0x20 + lVar11 * 0x28);
          param_1 = (float)uVar3;
          *(uint64_t *)(unaff_R12 + 0x20 + lVar9 * 0x28) = uVar3;
          break;
        }
      }
    }
    lVar13 = lVar13 + 1;
    unaff_RDI = unaff_RDI + 0x58;
    if (in_RAX <= lVar13) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}





// 函数: void FUN_1804143f6(void)
void FUN_1804143f6(void)

{
  uint64_t in_stack_00000048;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180414420(uint64_t param_1,int8_t (*param_2) [16],int64_t param_3)
void FUN_180414420(uint64_t param_1,int8_t (*param_2) [16],int64_t param_3)

{
  int8_t auVar1 [16];
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  void *puVar5;
  void *puVar6;
  int8_t auStack_168 [32];
  void *puStack_148;
  void *puStack_140;
  uint uStack_138;
  uint uStack_130;
  uint uStack_128;
  uint uStack_120;
  uint uStack_118;
  uint uStack_110;
  uint uStack_108;
  uint uStack_100;
  void *puStack_f8;
  void *puStack_f0;
  int32_t uStack_e0;
  uint64_t uStack_d8;
  int8_t *puStack_d0;
  void *puStack_c8;
  void *puStack_c0;
  int32_t uStack_b8;
  uint8_t auStack_b0 [72];
  int8_t auStack_68 [40];
  uint64_t uStack_40;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  lVar4 = *system_main_module_state;
  puStack_d0 = auStack_68;
  uVar3 = SystemCore_EncryptionEngine0(auStack_68,param_1);
  iVar2 = FUN_180142220(lVar4,uVar3);
  if ((iVar2 < 0) ||
     (lVar4 = *(int64_t *)(*system_main_module_state + 0x888),
     (uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar4 >> 5) <= (uint64_t)(int64_t)iVar2)
     ) {
    lVar4 = FUN_180628ca0();
  }
  else {
    lVar4 = (int64_t)iVar2 * 0x20 + lVar4;
  }
  CoreEngineDataTransformer(&puStack_f8,lVar4);
  *(int32_t *)(param_3 + 0x10) = 0;
  **(int8_t **)(param_3 + 8) = 0;
  puStack_c8 = &unknown_var_3480_ptr;
  puStack_c0 = auStack_b0;
  uStack_b8 = 0;
  auStack_b0[0] = 0;
  auVar1 = *param_2;
  uStack_100 = (uint)auVar1[0xf];
  uStack_108 = auVar1._14_2_ & 0xff;
  uStack_110 = auVar1._12_4_ >> 8 & 0xff;
  uStack_118 = auVar1._12_4_ & 0xff;
  uStack_120 = auVar1._11_4_ & 0xff;
  uStack_128 = auVar1._10_4_ & 0xff;
  uStack_130 = auVar1._9_4_ & 0xff;
  uStack_138 = (uint)auVar1[8];
  puStack_140 = (void *)CONCAT44(puStack_140._4_4_,(uint)auVar1._6_2_);
  puStack_148 = (void *)CONCAT44(puStack_148._4_4_,(uint)auVar1._4_2_);
  FUN_180626eb0(auStack_68,0x28,&unknown_var_6768_ptr,auVar1._0_8_);
  (**(code **)(puStack_c8 + 0x18))(&puStack_c8,auStack_68,0x24);
  puStack_140 = &system_buffer_ptr;
  if (render_system_control_memory != (void *)0x0) {
    puStack_140 = render_system_control_memory;
  }
  puStack_148 = &system_buffer_ptr;
  if (puStack_c0 != (void *)0x0) {
    puStack_148 = puStack_c0;
  }
  puVar6 = &system_buffer_ptr;
  if (render_system_control_memory != (void *)0x0) {
    puVar6 = render_system_control_memory;
  }
  puVar5 = &system_buffer_ptr;
  if (puStack_f0 != (void *)0x0) {
    puVar5 = puStack_f0;
  }
  FUN_1802e5050(param_3,&unknown_var_9128_ptr,puVar5,puVar6);
  puStack_c8 = &system_state_ptr;
  puStack_f8 = &system_data_buffer_ptr;
  if (puStack_f0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_f0 = (void *)0x0;
  uStack_e0 = 0;
  puStack_f8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804146b0(uint64_t param_1,int64_t param_2,uint64_t param_3,int32_t *param_4)
void FUN_1804146b0(uint64_t param_1,int64_t param_2,uint64_t param_3,int32_t *param_4)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  char cVar9;
  int iVar10;
  int64_t *plVar11;
  int64_t lVar12;
  void *puVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint uVar18;
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  uint uStack_78;
  uint uStack_74;
  int64_t alStack_70 [2];
  uint64_t uStack_60;
  int iStack_58;
  int iStack_54;
  uint uStack_50;
  uint64_t uStack_4c;
  uint64_t uStack_40;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  *(int32_t *)(param_2 + 0x50) = *param_4;
  *(int32_t *)(param_2 + 0x54) = uVar5;
  *(int32_t *)(param_2 + 0x58) = uVar6;
  *(int32_t *)(param_2 + 0x5c) = uVar7;
  FUN_180414420(param_3,(int32_t *)(param_2 + 0x50),param_2 + 0x60);
  *(uint64_t *)(param_2 + 0x38) = *(uint64_t *)(param_2 + 0x30);
  FUN_1800ba100(param_2);
  *(int8_t *)(param_2 + 0xf8) = 1;
  alStack_70[0] = -1;
  puVar13 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x68) != (void *)0x0) {
    puVar13 = *(void **)(param_2 + 0x68);
  }
  cVar9 = FUN_18063ba00(alStack_70,puVar13,5,0x105);
  lVar4 = alStack_70[0];
  if (cVar9 != '\0') {
    uVar17 = 0;
    uVar14 = uVar17;
    do {
      uVar15 = 0x1000000;
      if (0x14 - uVar14 < 0x1000000) {
        uVar15 = 0x14 - uVar14 & 0xffffffff;
      }
      uStack_78 = 0;
      uStack_88 = 0;
      iVar10 = ReadFile(lVar4,(int64_t)&iStack_58 + uVar14,uVar15,&uStack_78);
      uVar15 = uVar17;
    } while (((iVar10 != 0) && (uVar15 = uVar14, uStack_78 != 0)) &&
            (uVar14 = uVar14 + uStack_78, uVar15 = uVar14, uVar14 < 0x14));
    if ((((int)uVar15 == 0x14) && (iStack_58 == 0x30434452)) && (iStack_54 == 0)) {
      plVar11 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
      *plVar11 = 0;
      plVar11[1] = 0;
      plVar11[2] = 0;
      *(int16_t *)(plVar11 + 3) = 0;
      *(int8_t *)((int64_t)plVar11 + 0x1a) = 3;
      if ((int)uStack_4c != 0) {
        uVar15 = uStack_4c & 0xffffffff;
        System_BufferManager(plVar11,uStack_4c & 0xffffffff);
        lVar12 = plVar11[1];
        uVar14 = uVar17;
        if (uVar15 != 0) {
          do {
            uVar16 = 0x1000000;
            if (uVar15 - uVar14 < 0x1000000) {
              uVar16 = uVar15 - uVar14 & 0xffffffff;
            }
            uStack_74 = 0;
            uStack_88 = 0;
            iVar10 = ReadFile(lVar4,lVar12 + uVar14,uVar16,&uStack_74);
          } while (((iVar10 != 0) && (uStack_74 != 0)) &&
                  (uVar14 = uVar14 + uStack_74, uVar14 < uVar15));
        }
      }
      uVar15 = (uint64_t)uStack_50;
      uVar14 = (*(int64_t *)(param_2 + 0x38) - *(int64_t *)(param_2 + 0x30)) / 0x90;
      if (uVar14 < uVar15) {
        FUN_180415580(param_2 + 0x30,uVar15 - uVar14);
      }
      else {
        *(uint64_t *)(param_2 + 0x38) = uVar15 * 0x90 + *(int64_t *)(param_2 + 0x30);
      }
      uVar14 = uVar17;
      if (uStack_50 != 0) {
        do {
          uVar8 = ((uint64_t *)plVar11[1])[1];
          puVar1 = (uint64_t *)(*(int64_t *)(param_2 + 0x30) + 0x10 + uVar17);
          *puVar1 = *(uint64_t *)plVar11[1];
          puVar1[1] = uVar8;
          plVar11[1] = plVar11[1] + 0x10;
          uVar8 = ((uint64_t *)plVar11[1])[1];
          puVar1 = (uint64_t *)(*(int64_t *)(param_2 + 0x30) + 0x20 + uVar17);
          *puVar1 = *(uint64_t *)plVar11[1];
          puVar1[1] = uVar8;
          plVar11[1] = plVar11[1] + 0x10;
          uVar8 = ((uint64_t *)plVar11[1])[1];
          puVar1 = (uint64_t *)(uVar17 + *(int64_t *)(param_2 + 0x30));
          *puVar1 = *(uint64_t *)plVar11[1];
          puVar1[1] = uVar8;
          plVar11[1] = plVar11[1] + 0x10;
          *(uint64_t *)(*(int64_t *)(param_2 + 0x30) + 0x30 + uVar17) = *(uint64_t *)plVar11[1]
          ;
          plVar11[1] = plVar11[1] + 8;
          *(uint64_t *)(*(int64_t *)(param_2 + 0x30) + 0x38 + uVar17) = *(uint64_t *)plVar11[1]
          ;
          plVar11[1] = plVar11[1] + 8;
          *(uint64_t *)(*(int64_t *)(param_2 + 0x30) + 0x40 + uVar17) = *(uint64_t *)plVar11[1]
          ;
          plVar11[1] = plVar11[1] + 8;
          *(int32_t *)(*(int64_t *)(param_2 + 0x30) + 0x88 + uVar17) = *(int32_t *)plVar11[1]
          ;
          plVar11[1] = plVar11[1] + 4;
          puVar3 = (uint64_t *)plVar11[1];
          lVar12 = (int64_t)(int)uVar14;
          lVar4 = *(int64_t *)(param_2 + 0x30);
          uVar8 = puVar3[1];
          puVar1 = (uint64_t *)(lVar4 + 0x48 + lVar12 * 0x90);
          *puVar1 = *puVar3;
          puVar1[1] = uVar8;
          uVar8 = puVar3[3];
          puVar1 = (uint64_t *)(lVar4 + 0x58 + lVar12 * 0x90);
          *puVar1 = puVar3[2];
          puVar1[1] = uVar8;
          uVar5 = *(int32_t *)((int64_t)puVar3 + 0x24);
          uVar6 = *(int32_t *)(puVar3 + 5);
          uVar7 = *(int32_t *)((int64_t)puVar3 + 0x2c);
          puVar2 = (int32_t *)(lVar4 + 0x68 + lVar12 * 0x90);
          *puVar2 = *(int32_t *)(puVar3 + 4);
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          uVar8 = puVar3[7];
          puVar1 = (uint64_t *)(lVar4 + 0x78 + lVar12 * 0x90);
          *puVar1 = puVar3[6];
          puVar1[1] = uVar8;
          lVar4 = plVar11[1];
          plVar11[1] = lVar4 + 0x44;
          *(int8_t *)(*(int64_t *)(param_2 + 0x30) + uVar17 + 0x8c) =
               *(int8_t *)(lVar4 + 0x44);
          plVar11[1] = plVar11[1] + 1;
          uVar18 = (int)uVar14 + 1;
          uVar17 = uVar17 + 0x90;
          uVar14 = (uint64_t)uVar18;
        } while (uVar18 < uStack_50);
      }
      FUN_180415af0(param_2);
      if (((char)plVar11[3] == '\0') && (*plVar11 != 0)) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar11);
    }
  }
  if (lVar4 != -1) {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
    UNLOCK();
    CloseHandle(alStack_70[0]);
    alStack_70[0] = -1;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180414a60(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,int64_t param_6,int64_t *param_7,int64_t param_8)

{
  code *pcVar1;
  char cVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  void *puVar7;
  int iVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t uStackX_8;
  int64_t *plStackX_10;
  int64_t alStack_158 [2];
  uint64_t *puStack_148;
  int64_t lStack_140;
  void **ppuStack_138;
  int8_t auStack_128 [24];
  char cStack_110;
  void *puStack_108;
  int64_t lStack_100;
  int32_t uStack_f0;
  void *puStack_e8;
  int8_t uStack_e0;
  uint64_t uStack_d8;
  int8_t auStack_d0 [56];
  int64_t lStack_98;
  int64_t lStack_90;
  uint64_t uStack_88;
  int32_t uStack_40;
  char cStack_3c;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStackX_8 = param_1;
  if (*(int *)(param_2 + 0x70) == 0) {
    if (param_6 != 0) {
      iVar8 = *(int *)(param_6 + 0x10) + 0x1b;
      CoreEngineDataBufferProcessor(param_6,iVar8);
      puVar6 = (int32_t *)((uint64_t)*(uint *)(param_6 + 0x10) + *(int64_t *)(param_6 + 8));
      *puVar6 = 0x68636143;
      puVar6[1] = 0x61702065;
      puVar6[2] = 0x63206874;
      puVar6[3] = 0x6f6e6e61;
      *(uint64_t *)(puVar6 + 4) = 0x706d652065622074;
      puVar6[6] = 0xa7974;
      *(int *)(param_6 + 0x10) = iVar8;
    }
    lVar14 = *(int64_t *)(param_8 + 0x38);
  }
  else {
    cVar2 = FUN_180381130(param_2,param_4,param_5,param_3);
    if (cVar2 != '\0') {
      plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
      uVar10 = 0;
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
      *(int16_t *)(plVar3 + 3) = 0;
      *(int8_t *)((int64_t)plVar3 + 0x1a) = 3;
      *(int8_t *)((int64_t)plVar3 + 0x1a) = 10;
      alStack_158[0] = -1;
      puVar7 = &system_buffer_ptr;
      if (*(void **)(param_2 + 0x68) != (void *)0x0) {
        puVar7 = *(void **)(param_2 + 0x68);
      }
      plStackX_10 = plVar3;
      cVar2 = FUN_18063ba00(alStack_158,puVar7,5,0x105);
      if (cVar2 == '\0') {
        if (alStack_158[0] != -1) {
          LOCK();
          SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
          UNLOCK();
          CloseHandle(alStack_158[0]);
          alStack_158[0] = -1;
        }
        if (plVar3 != (int64_t *)0x0) {
          if (((char)plVar3[3] == '\0') && (*plVar3 != 0)) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar3);
        }
        plStackX_10 = (int64_t *)0x0;
        lVar14 = *(int64_t *)(param_8 + 0x38);
      }
      else {
        if ((param_7 != (int64_t *)0x0) && (cStack_3c != '\0')) {
          FUN_1800623b0(system_message_context,0,0x80000000000,9,&unknown_var_9184_ptr);
        }
        lVar14 = alStack_158[0];
        uVar9 = (uint)uStack_88;
        if ((param_7 != (int64_t *)0x0) && (cStack_3c == '\0')) {
          lStack_98 = lStack_98 + *param_7;
          uVar9 = (uint)param_7[1];
        }
        SetFilePointerEx(alStack_158[0],lStack_98,auStack_d0,0);
        if (uVar9 != 0) {
          uVar13 = (uint64_t)uVar9;
          lVar12 = plVar3[1];
          if ((uint64_t)((plVar3[2] - lVar12) + *plVar3) <= uVar13) {
            System_BufferManager(plVar3,uVar13 + (lVar12 - *plVar3));
            lVar12 = plVar3[1];
          }
          if (uVar13 != 0) {
            while( true ) {
              uVar11 = 0x1000000;
              if (uVar13 - uVar10 < 0x1000000) {
                uVar11 = uVar13 - uVar10 & 0xffffffff;
              }
              uStackX_8 = uStackX_8 & 0xffffffff00000000;
              iVar8 = ReadFile(lVar14,uVar10 + lVar12,uVar11,&uStackX_8,0);
              if (iVar8 == 0) break;
              if (((int)uStackX_8 == 0) ||
                 (uVar10 = uVar10 + (uStackX_8 & 0xffffffff), uVar13 <= uVar10)) break;
            }
          }
        }
        if (lVar14 != -1) {
          LOCK();
          SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
          UNLOCK();
          CloseHandle(alStack_158[0]);
          lVar14 = -1;
          alStack_158[0] = -1;
        }
        if (cStack_3c == '\0') {
          if (param_7 != (int64_t *)0x0) {
            lStack_90 = param_7[1];
          }
          lStack_140 = lStack_90;
          if (*(int64_t *)(param_8 + 0x38) == 0) {
            __Xbad_function_call_std__YAXXZ();
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return uVar5;
          }
          (**(code **)(*(int64_t *)(param_8 + 0x38) + 0x20))(plVar3,lStack_90,uStack_40);
          if (lVar14 != -1) {
            LOCK();
            SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
            UNLOCK();
            CloseHandle(alStack_158[0]);
            alStack_158[0] = -1;
          }
          FUN_1800bc110(&plStackX_10);
          lVar14 = *(int64_t *)(param_8 + 0x38);
          if (lVar14 != 0) {
            uStackX_8 = lVar14 + 8;
            if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
              (**(code **)(lVar14 + 0x18))(uStackX_8,0,0);
            }
            if (lVar14 != param_8) {
              free(lVar14,0x28);
            }
            *(uint64_t *)(param_8 + 0x38) = 0;
          }
          return 1;
        }
        puVar4 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *(int16_t *)(puVar4 + 3) = 0;
        *(int8_t *)((int64_t)puVar4 + 0x1a) = 10;
        uVar10 = lStack_90 + 1;
        puStack_148 = puVar4;
        if ((uint64_t)puVar4[2] < uVar10) {
          System_BufferManager(puVar4,uVar10);
        }
        puStack_e8 = &unknown_var_3856_ptr;
        uStack_e0 = 1;
        FUN_18021f710(&puStack_e8,auStack_128,*plVar3,uStack_88,*puVar4,uVar10);
        if (cStack_110 == '\0') {
          if (param_7 == (int64_t *)0x0) {
            lVar12 = *(int64_t *)(param_8 + 0x38);
            if (lVar12 == 0) {
              __Xbad_function_call_std__YAXXZ();
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return uVar5;
            }
          }
          else {
            FUN_180639d80(puVar4,*param_7);
            lVar12 = *(int64_t *)(param_8 + 0x38);
            if (lVar12 == 0) {
              __Xbad_function_call_std__YAXXZ();
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return uVar5;
            }
            lStack_90 = param_7[1];
          }
          (**(code **)(lVar12 + 0x20))(puVar4,lStack_90,uStack_40);
          ppuStack_138 = &puStack_108;
          puStack_108 = &system_data_buffer_ptr;
          if (lStack_100 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_100 = 0;
          uStack_f0 = 0;
          puStack_108 = &system_state_ptr;
          FUN_1800bc110(&puStack_148);
          if (lVar14 != -1) {
            LOCK();
            SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
            UNLOCK();
            CloseHandle(alStack_158[0]);
            alStack_158[0] = -1;
          }
          FUN_1800bc110(&plStackX_10);
          lVar14 = *(int64_t *)(param_8 + 0x38);
          if (lVar14 != 0) {
            uStackX_8 = lVar14 + 8;
            if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
              (**(code **)(lVar14 + 0x18))(uStackX_8,0,0);
            }
            if (lVar14 != param_8) {
              free(lVar14,0x28);
            }
            *(uint64_t *)(param_8 + 0x38) = 0;
          }
          return 1;
        }
        if (param_6 != 0) {
          System_DataHandler(param_6,&unknown_var_9328_ptr);
        }
        ppuStack_138 = &puStack_108;
        puStack_108 = &system_data_buffer_ptr;
        if (lStack_100 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_100 = 0;
        uStack_f0 = 0;
        puStack_108 = &system_state_ptr;
        FUN_1800bc110(&puStack_148);
        if (lVar14 != -1) {
          LOCK();
          SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
          UNLOCK();
          CloseHandle(alStack_158[0]);
          alStack_158[0] = -1;
        }
        FUN_1800bc110(&plStackX_10);
        lVar14 = *(int64_t *)(param_8 + 0x38);
      }
      if (lVar14 == 0) {
        return 0;
      }
      uStackX_8 = lVar14 + 8;
      if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
        (**(code **)(lVar14 + 0x18))(uStackX_8,0,0);
      }
      if (lVar14 != param_8) {
        free(lVar14,0x28);
      }
      goto LAB_1804150f9;
    }
    lVar14 = *(int64_t *)(param_8 + 0x38);
  }
  if (lVar14 == 0) {
    return 0;
  }
  uStackX_8 = lVar14 + 8;
  if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
    (**(code **)(lVar14 + 0x18))(uStackX_8,0,0);
  }
  if (lVar14 != param_8) {
    free(lVar14,0x28);
  }
LAB_1804150f9:
  *(uint64_t *)(param_8 + 0x38) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



