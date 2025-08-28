#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part073.c - 3 个函数
// 函数: void function_30a720(int64_t param_1,int32_t param_2,float *param_3)
void function_30a720(int64_t param_1,int32_t param_2,float *param_3)
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
  int64_t lVar13;
  uint64_t *puVar14;
  int64_t *plVar15;
  char cVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  int64_t *plVar20;
  int64_t lVar21;
  int64_t lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint64_t stack_special_x_8;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  if (((*(char *)(param_1 + 0xbd) == '\0') &&
      (lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x20),
      *(char *)(lVar13 + 0x3f61) != '\0')) && (*(int *)(SYSTEM_STATE_MANAGER + 0x620) != -1)) {
    puVar14 = *(uint64_t **)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x30) == *(int *)(puVar14[0x79] + 0x10)) {
      if (*(char *)(param_1 + 0x42) != '\0') {
        if ((void *)*puVar14 == &processed_var_9304_ptr) {
          pfVar18 = (float *)(puVar14 + 0x66);
        }
        else {
          pfVar18 = (float *)(**(code **)((void *)*puVar14 + 0x158))(puVar14);
        }
        fVar35 = *param_3;
        fVar36 = param_3[1];
        fVar37 = param_3[2];
        fVar3 = param_3[3];
        fVar4 = param_3[4];
        fVar5 = param_3[5];
        fVar6 = param_3[6];
        fVar7 = param_3[7];
        fVar8 = param_3[8];
        fVar9 = param_3[9];
        fVar10 = param_3[10];
        fVar11 = param_3[0xb];
        fVar38 = pfVar18[1];
        fVar1 = *pfVar18;
        fVar2 = pfVar18[2];
        fVar23 = fVar38 * fVar4 + fVar1 * fVar35 + fVar2 * fVar8;
        fVar24 = fVar38 * fVar5 + fVar1 * fVar36 + fVar2 * fVar9;
        fVar25 = fVar38 * fVar6 + fVar1 * fVar37 + fVar2 * fVar10;
        fVar26 = fVar38 * fVar7 + fVar1 * fVar3 + fVar2 * fVar11;
        fVar38 = pfVar18[5];
        fVar1 = pfVar18[4];
        fVar2 = pfVar18[6];
        fVar27 = fVar38 * fVar4 + fVar1 * fVar35 + fVar2 * fVar8;
        fVar28 = fVar38 * fVar5 + fVar1 * fVar36 + fVar2 * fVar9;
        fVar29 = fVar38 * fVar6 + fVar1 * fVar37 + fVar2 * fVar10;
        fVar30 = fVar38 * fVar7 + fVar1 * fVar3 + fVar2 * fVar11;
        fVar38 = pfVar18[9];
        fVar1 = pfVar18[8];
        fVar2 = pfVar18[10];
        fVar31 = fVar38 * fVar4 + fVar1 * fVar35 + fVar2 * fVar8;
        fVar32 = fVar38 * fVar5 + fVar1 * fVar36 + fVar2 * fVar9;
        fVar33 = fVar38 * fVar6 + fVar1 * fVar37 + fVar2 * fVar10;
        fVar34 = fVar38 * fVar7 + fVar1 * fVar3 + fVar2 * fVar11;
        fVar38 = pfVar18[0xd];
        fVar1 = pfVar18[0xc];
        fVar2 = pfVar18[0xe];
        fVar35 = fVar38 * fVar4 + fVar1 * fVar35 + fVar2 * fVar8 + param_3[0xc];
        fVar36 = fVar38 * fVar5 + fVar1 * fVar36 + fVar2 * fVar9 + param_3[0xd];
        fVar37 = fVar38 * fVar6 + fVar1 * fVar37 + fVar2 * fVar10 + param_3[0xe];
        fVar38 = fVar38 * fVar7 + fVar1 * fVar3 + fVar2 * fVar11 + param_3[0xf];
        iVar17 = (int)(*(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x50) >> 3);
        if (0 < iVar17) {
          lVar22 = 0;
          do {
            fStack_98 = fVar23;
            fStack_94 = fVar24;
            fStack_90 = fVar25;
            fStack_8c = fVar26;
            fStack_88 = fVar27;
            fStack_84 = fVar28;
            fStack_80 = fVar29;
            fStack_7c = fVar30;
            fStack_78 = fVar31;
            fStack_74 = fVar32;
            fStack_70 = fVar33;
            fStack_6c = fVar34;
            fStack_68 = fVar35;
            fStack_64 = fVar36;
            fStack_60 = fVar37;
            fStack_5c = fVar38;
            if (*(int64_t *)(param_1 + 0x38) == 0) {
              plVar15 = *(int64_t **)(*(int64_t *)(param_1 + 0x48) + 0x38);
              lVar21 = 0;
              iVar19 = (int)(*(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x40) - (int64_t)plVar15
                            >> 4);
              if (0 < iVar19) {
                plVar20 = plVar15;
                do {
                  if (*(int64_t *)(*(int64_t *)(param_1 + 0x50) + lVar22 * 8) ==
                      *(int64_t *)(*plVar20 + 0x118)) {
                    lVar21 = plVar15[lVar21 * 2];
                    fVar1 = *(float *)(lVar21 + 0x124);
                    fVar2 = *(float *)(lVar21 + 0x120);
                    fVar3 = *(float *)(lVar21 + 0x128);
                    fVar4 = *(float *)(lVar21 + 0x134);
                    fVar5 = *(float *)(lVar21 + 0x130);
                    fVar6 = *(float *)(lVar21 + 0x138);
                    fVar7 = *(float *)(lVar21 + 0x144);
                    fVar8 = *(float *)(lVar21 + 0x140);
                    fVar9 = *(float *)(lVar21 + 0x148);
                    fVar10 = *(float *)(lVar21 + 0x154);
                    fVar11 = *(float *)(lVar21 + 0x150);
                    fVar12 = *(float *)(lVar21 + 0x158);
                    fStack_98 = fVar1 * fVar27 + fVar2 * fVar23 + fVar3 * fVar31;
                    fStack_94 = fVar1 * fVar28 + fVar2 * fVar24 + fVar3 * fVar32;
                    fStack_90 = fVar1 * fVar29 + fVar2 * fVar25 + fVar3 * fVar33;
                    fStack_8c = fVar1 * fVar30 + fVar2 * fVar26 + fVar3 * fVar34;
                    fStack_88 = fVar4 * fVar27 + fVar5 * fVar23 + fVar6 * fVar31;
                    fStack_84 = fVar4 * fVar28 + fVar5 * fVar24 + fVar6 * fVar32;
                    fStack_80 = fVar4 * fVar29 + fVar5 * fVar25 + fVar6 * fVar33;
                    fStack_7c = fVar4 * fVar30 + fVar5 * fVar26 + fVar6 * fVar34;
                    fStack_78 = fVar7 * fVar27 + fVar8 * fVar23 + fVar9 * fVar31;
                    fStack_74 = fVar7 * fVar28 + fVar8 * fVar24 + fVar9 * fVar32;
                    fStack_70 = fVar7 * fVar29 + fVar8 * fVar25 + fVar9 * fVar33;
                    fStack_6c = fVar7 * fVar30 + fVar8 * fVar26 + fVar9 * fVar34;
                    fStack_68 = fVar10 * fVar27 + fVar11 * fVar23 + fVar12 * fVar31 + fVar35;
                    fStack_64 = fVar10 * fVar28 + fVar11 * fVar24 + fVar12 * fVar32 + fVar36;
                    fStack_60 = fVar10 * fVar29 + fVar11 * fVar25 + fVar12 * fVar33 + fVar37;
                    fStack_5c = fVar10 * fVar30 + fVar11 * fVar26 + fVar12 * fVar34 + fVar38;
                    break;
                  }
                  lVar21 = lVar21 + 1;
                  plVar20 = plVar20 + 2;
                } while (lVar21 < iVar19);
              }
            }
            function_309bd0(*(uint64_t *)(*(int64_t *)(param_1 + 0x50) + lVar22 * 8),param_2,
                          *(int32_t *)(lVar13 + 0x60),*(int8_t *)(param_1 + 0x44),&fStack_98)
            ;
            lVar22 = lVar22 + 1;
          } while (lVar22 < iVar17);
        }
      }
    }
    else {
      stack_special_x_8 = 0;
      cVar16 = function_0f5a90(*(int *)(puVar14[0x79] + 0x10),param_1,param_3,&stack_special_x_8);
      if (cVar16 != '\0') {
        *(int32_t *)(param_1 + 0x30) =
             *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x3c8) + 0x10);
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_30aab0(int64_t param_1,int64_t param_2,int64_t param_3,float *param_4,char param_5,
void function_30aab0(int64_t param_1,int64_t param_2,int64_t param_3,float *param_4,char param_5,
                  int32_t param_6,int32_t param_7,int param_8,int32_t param_9)
{
  float fVar1;
  char cVar2;
  code *pcVar3;
  int64_t lVar4;
  bool bVar5;
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
  float fVar16;
  float fVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int iVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int64_t lVar25;
  int64_t lVar26;
  int64_t lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  if (*(char *)(param_1 + 0x42) != '\0') {
    pcVar3 = *(code **)(**(int64_t **)(param_1 + 0x48) + 0x158);
    if (pcVar3 == (code *)&rendering_buffer_2528_ptr) {
      pfVar21 = (float *)(*(int64_t **)(param_1 + 0x48) + 0x66);
    }
    else {
      pfVar21 = (float *)(*pcVar3)();
    }
    fVar6 = *param_4;
    fVar7 = param_4[1];
    fVar8 = param_4[2];
    fVar9 = param_4[3];
    fVar10 = param_4[4];
    fVar11 = param_4[5];
    fVar12 = param_4[6];
    fVar13 = param_4[7];
    fVar14 = param_4[8];
    fVar15 = param_4[9];
    fVar16 = param_4[10];
    fVar17 = param_4[0xb];
    fVar28 = pfVar21[1];
    fVar31 = *pfVar21;
    fVar30 = pfVar21[2];
    fVar29 = pfVar21[5];
    fVar32 = pfVar21[9];
    fVar33 = pfVar21[0xd];
    fVar1 = pfVar21[4];
    fStack_a8 = fVar28 * fVar10 + fVar31 * fVar6 + fVar30 * fVar14;
    fStack_a4 = fVar28 * fVar11 + fVar31 * fVar7 + fVar30 * fVar15;
    fStack_a0 = fVar28 * fVar12 + fVar31 * fVar8 + fVar30 * fVar16;
    fStack_9c = fVar28 * fVar13 + fVar31 * fVar9 + fVar30 * fVar17;
    fVar28 = pfVar21[6];
    fVar31 = pfVar21[8];
    fStack_98 = fVar29 * fVar10 + fVar1 * fVar6 + fVar28 * fVar14;
    fStack_94 = fVar29 * fVar11 + fVar1 * fVar7 + fVar28 * fVar15;
    fStack_90 = fVar29 * fVar12 + fVar1 * fVar8 + fVar28 * fVar16;
    fStack_8c = fVar29 * fVar13 + fVar1 * fVar9 + fVar28 * fVar17;
    fVar28 = pfVar21[10];
    fVar30 = pfVar21[0xc];
    fStack_88 = fVar32 * fVar10 + fVar31 * fVar6 + fVar28 * fVar14;
    fStack_84 = fVar32 * fVar11 + fVar31 * fVar7 + fVar28 * fVar15;
    fStack_80 = fVar32 * fVar12 + fVar31 * fVar8 + fVar28 * fVar16;
    fStack_7c = fVar32 * fVar13 + fVar31 * fVar9 + fVar28 * fVar17;
    fVar28 = pfVar21[0xe];
    fStack_78 = fVar33 * fVar10 + fVar30 * fVar6 + fVar28 * fVar14 + param_4[0xc];
    fStack_74 = fVar33 * fVar11 + fVar30 * fVar7 + fVar28 * fVar15 + param_4[0xd];
    fStack_70 = fVar33 * fVar12 + fVar30 * fVar8 + fVar28 * fVar16 + param_4[0xe];
    fStack_6c = fVar33 * fVar13 + fVar30 * fVar9 + fVar28 * fVar17 + param_4[0xf];
    if (((*(char *)(param_3 + 0x3f61) != '\0') && ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0)) &&
       (*(int *)(SYSTEM_STATE_MANAGER + 0x620) != -1)) {
      if (param_8 <= *(int *)(render_system_data_memory + 0x2f8)) {
        *(int8_t *)(param_1 + 0x44) = 1;
      }
      lVar27 = *(int64_t *)(param_1 + 0x48);
      if (*(int *)(lVar27 + 0x328) == *(int *)(system_main_module_state + 0x224)) {
        if (((*(char *)(param_1 + 0xbc) == '\0') &&
            ((*(byte *)(*(int64_t *)(lVar27 + 0x3c8) + 0x28) & 1) == 0)) &&
           (*(int *)(system_main_module_state + 0x224) + -1 != param_8)) {
          *(int8_t *)(param_1 + 0x44) = 1;
        }
        if (*(int *)(param_1 + 0x30) == *(int *)(*(int64_t *)(lVar27 + 0x3c8) + 0x10)) {
          fVar28 = (fStack_74 * 2.3 + fStack_78 * 1.7) * 8.0 + (float)system_error_code * 8e-05;
          uVar22 = (uint)fVar28;
          uVar23 = uVar22 & 0x800000ff;
          if ((int)uVar23 < 0) {
            uVar23 = (uVar23 - 1 | 0xffffff00) + 1;
          }
          pfVar21 = *(float **)(param_3 + 0x81f0);
          uVar24 = uVar23 + 1 & 0x800000ff;
          if ((int)uVar24 < 0) {
            uVar24 = (uVar24 - 1 | 0xffffff00) + 1;
          }
          fVar28 = ((*(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar24 * 4) -
                    *(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar23 * 4)) *
                    (fVar28 - (float)(int)uVar22) +
                   *(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar23 * 4)) * *pfVar21 + 1.0;
          if (*(int *)(param_1 + 0x70) == 1) {
            fVar31 = pfVar21[3];
            fVar29 = fVar31 * *(float *)(param_1 + 0x7c) * fVar28;
            fVar33 = fVar31 * *(float *)(param_1 + 0x74) * fVar28;
            _fStack_b0 = CONCAT44(0x7f7fffff,fVar29);
            fVar31 = fVar31 * *(float *)(param_1 + 0x78) * fVar28;
          }
          else if (*(int *)(param_1 + 0x70) == 2) {
            fVar30 = *(float *)(param_1 + 0x78);
            fVar32 = *(float *)(param_1 + 0x74);
            fVar1 = *(float *)(param_1 + 0x7c);
            fVar31 = fVar28 * pfVar21[3];
            fVar29 = (fStack_84 * fVar30 + fStack_88 * fVar32 + fStack_80 * fVar1) * fVar31;
            fVar33 = (fStack_a4 * fVar30 + fStack_a8 * fVar32 + fStack_a0 * fVar1) * fVar31;
            _fStack_b0 = CONCAT44(fStack_7c * fVar30 + fStack_7c * fVar32 + fStack_7c * fVar1,fVar29
                                 );
            fVar31 = (fStack_94 * fVar30 + fStack_98 * fVar32 + fStack_90 * fVar1) * fVar31;
          }
          else {
            fVar32 = pfVar21[3] * pfVar21[2];
            fVar30 = pfVar21[3] * pfVar21[1];
            fVar33 = fVar32 * fStack_a4 + fStack_a8 * fVar30 + fStack_a0 * 0.0;
            fVar31 = fVar32 * fStack_94 + fStack_98 * fVar30 + fStack_90 * 0.0;
            fVar29 = fVar32 * fStack_84 + fStack_88 * fVar30 + fStack_80 * 0.0;
            _fStack_b0 = CONCAT44(fVar32 * fStack_7c + fStack_7c * fVar30 + fStack_7c * 0.0,fVar29);
          }
          uVar19 = _fStack_b0;
          system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
          system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
          uVar22 = system_memory_flags << 5 ^ system_memory_flags;
          system_memory_flags = uVar22 << 0xd ^ uVar22;
          system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
          system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
          fVar30 = SQRT(fVar31 * fVar31 + fVar33 * fVar33 + fVar29 * fVar29);
          _fStack_b8 = CONCAT44(fVar31 + ((float)(system_memory_flags - 1) * 4.656613e-11 - 0.1) * fVar30
                                ,fVar33 + ((float)(uVar22 - 1) * 4.656613e-11 - 0.1) * fVar30);
          uVar18 = _fStack_b8;
          if (*(int64_t *)(param_1 + 0x38) == 0) {
            bVar5 = true;
            iVar20 = (int)(*(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x40) -
                           *(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x38) >> 4);
            lVar27 = (int64_t)iVar20;
            if (0 < iVar20) {
              lVar25 = 0;
              do {
                lVar26 = *(int64_t *)(lVar25 + *(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x38))
                ;
                lVar4 = *(int64_t *)(lVar26 + 0x118);
                if (lVar4 != 0) {
                  if (*(int *)(lVar4 + 0x118) < 1) {
                    bVar5 = false;
                  }
                  else {
                    *(int32_t *)(lVar4 + 0x110) = param_9;
                    _fStack_b8 = uVar18;
                    _fStack_b0 = uVar19;
                    function_24c560(param_2,lVar26,(int)param_5,param_6,param_7,&fStack_a8,
                                  *(int8_t *)(param_1 + 0x44),&fStack_b8,fVar28,
                                  *(int32_t *)(param_1 + 0xb8));
                    *(int32_t *)(lVar4 + 0x118) = 0;
                  }
                }
                lVar25 = lVar25 + 0x10;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
            }
            if ((*(char *)(param_1 + 0x44) != '\0') && (bVar5)) {
              *(int8_t *)(param_1 + 0x44) = 0;
            }
          }
          else {
            lVar27 = *(int64_t *)(*(int64_t *)(param_1 + 0x38) + 0x118);
            if (0 < *(int *)(lVar27 + 0x118)) {
              cVar2 = *(char *)(lVar27 + 0x13d);
              *(int32_t *)(lVar27 + 0x110) = param_9;
              function_24c560(param_2,*(uint64_t *)(param_1 + 0x38),(int)param_5,param_6,param_7,
                            &fStack_a8,*(int8_t *)(param_1 + 0x44),&fStack_b8,fVar28,
                            *(int32_t *)(param_1 + 0xb8));
              lVar25 = 0;
              if (((cVar2 == '\0') && (*(char *)(lVar27 + 0x13d) == '\x01')) &&
                 (iVar20 = (int)(*(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x40) -
                                 *(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x38) >> 4),
                 lVar26 = (int64_t)iVar20, 0 < iVar20)) {
                do {
                  lVar4 = *(int64_t *)
                           (*(int64_t *)
                             (*(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x38) + lVar25) + 0x118)
                  ;
                  if (lVar4 != 0) {
                    *(int8_t *)(lVar4 + 0x13d) = 1;
                  }
                  lVar25 = lVar25 + 0x10;
                  lVar26 = lVar26 + -1;
                } while (lVar26 != 0);
              }
              *(int8_t *)(param_1 + 0x44) = 0;
              *(int32_t *)(lVar27 + 0x118) = 0;
            }
          }
        }
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_30aade(int64_t *param_1)
void function_30aade(int64_t *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  int32_t uVar8;
  int32_t uVar9;
  int64_t lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  int64_t in_RAX;
  float *pfVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int64_t lVar29;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  float *unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar30;
  int64_t unaff_R13;
  int64_t lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int32_t unaff_XMM7_Da;
  float fVar35;
  int32_t unaff_XMM7_Db;
  float fVar36;
  int32_t unaff_XMM7_Dc;
  float fVar37;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar38;
  int32_t unaff_XMM8_Db;
  float fVar39;
  int32_t unaff_XMM8_Dc;
  float fVar40;
  int32_t unaff_XMM8_Dd;
  float fVar41;
  int32_t unaff_XMM9_Da;
  float fVar42;
  int32_t unaff_XMM9_Db;
  float fVar43;
  int32_t unaff_XMM9_Dc;
  float fVar44;
  int32_t unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM9_Dd;
  if (*(code **)(*param_1 + 0x158) == (code *)&rendering_buffer_2528_ptr) {
    pfVar25 = (float *)(param_1 + 0x66);
  }
  else {
    pfVar25 = (float *)(**(code **)(*param_1 + 0x158))();
  }
  cVar6 = *(char *)(unaff_RBX + 0x3f61);
  fVar12 = *unaff_RSI;
  fVar13 = unaff_RSI[1];
  fVar14 = unaff_RSI[2];
  fVar15 = unaff_RSI[3];
  fVar16 = unaff_RSI[4];
  fVar17 = unaff_RSI[5];
  fVar18 = unaff_RSI[6];
  fVar19 = unaff_RSI[7];
  fVar20 = unaff_RSI[8];
  fVar21 = unaff_RSI[9];
  fVar22 = unaff_RSI[10];
  fVar23 = unaff_RSI[0xb];
  fVar32 = pfVar25[1];
  fVar33 = *pfVar25;
  fVar34 = pfVar25[2];
  fVar1 = pfVar25[5];
  fVar2 = pfVar25[9];
  fVar3 = pfVar25[0xd];
  fVar4 = pfVar25[4];
  fVar35 = fVar32 * fVar16 + fVar33 * fVar12 + fVar34 * fVar20;
  fVar36 = fVar32 * fVar17 + fVar33 * fVar13 + fVar34 * fVar21;
  fVar37 = fVar32 * fVar18 + fVar33 * fVar14 + fVar34 * fVar22;
  fVar5 = pfVar25[6];
  fVar41 = pfVar25[8];
  *(float *)(unaff_RBP + -0x71) = fVar35;
  *(float *)(unaff_RBP + -0x6d) = fVar36;
  *(float *)(unaff_RBP + -0x69) = fVar37;
  *(float *)(unaff_RBP + -0x65) = fVar32 * fVar19 + fVar33 * fVar15 + fVar34 * fVar23;
  fVar42 = fVar1 * fVar16 + fVar4 * fVar12 + fVar5 * fVar20;
  fVar43 = fVar1 * fVar17 + fVar4 * fVar13 + fVar5 * fVar21;
  fVar44 = fVar1 * fVar18 + fVar4 * fVar14 + fVar5 * fVar22;
  fVar32 = pfVar25[10];
  fVar33 = pfVar25[0xc];
  fVar38 = fVar2 * fVar16 + fVar41 * fVar12 + fVar32 * fVar20;
  fVar39 = fVar2 * fVar17 + fVar41 * fVar13 + fVar32 * fVar21;
  fVar40 = fVar2 * fVar18 + fVar41 * fVar14 + fVar32 * fVar22;
  fVar41 = fVar2 * fVar19 + fVar41 * fVar15 + fVar32 * fVar23;
  *(float *)(unaff_RBP + -0x61) = fVar42;
  *(float *)(unaff_RBP + -0x5d) = fVar43;
  *(float *)(unaff_RBP + -0x59) = fVar44;
  *(float *)(unaff_RBP + -0x55) = fVar1 * fVar19 + fVar4 * fVar15 + fVar5 * fVar23;
  fVar32 = pfVar25[0xe];
  fVar34 = unaff_RSI[0xc];
  fVar1 = unaff_RSI[0xd];
  fVar2 = unaff_RSI[0xe];
  fVar4 = unaff_RSI[0xf];
  *(float *)(unaff_RBP + -0x51) = fVar38;
  *(float *)(unaff_RBP + -0x4d) = fVar39;
  *(float *)(unaff_RBP + -0x49) = fVar40;
  *(float *)(unaff_RBP + -0x45) = fVar41;
  *(float *)(unaff_RBP + -0x41) = fVar3 * fVar16 + fVar33 * fVar12 + fVar32 * fVar20 + fVar34;
  *(float *)(unaff_RBP + -0x3d) = fVar3 * fVar17 + fVar33 * fVar13 + fVar32 * fVar21 + fVar1;
  *(float *)(unaff_RBP + -0x39) = fVar3 * fVar18 + fVar33 * fVar14 + fVar32 * fVar22 + fVar2;
  *(float *)(unaff_RBP + -0x35) = fVar3 * fVar19 + fVar33 * fVar15 + fVar32 * fVar23 + fVar4;
  if (((cVar6 != '\0') && ((*(byte *)(unaff_R13 + 0x1bd8) & 0x20) != 0)) &&
     (*(int *)(SYSTEM_STATE_MANAGER + 0x620) != -1)) {
    iVar24 = *(int *)(unaff_RBP + 0x77);
    if (iVar24 <= *(int *)(render_system_data_memory + 0x2f8)) {
      *(int8_t *)(unaff_RDI + 0x44) = 1;
    }
    lVar31 = *(int64_t *)(unaff_RDI + 0x48);
    if (*(int *)(lVar31 + 0x328) == *(int *)(system_main_module_state + 0x224)) {
      if (((*(char *)(unaff_RDI + 0xbc) == '\0') &&
          ((*(byte *)(*(int64_t *)(lVar31 + 0x3c8) + 0x28) & 1) == 0)) &&
         (*(int *)(system_main_module_state + 0x224) + -1 != iVar24)) {
        *(int8_t *)(unaff_RDI + 0x44) = 1;
      }
      if (*(int *)(unaff_RDI + 0x30) == *(int *)(*(int64_t *)(lVar31 + 0x3c8) + 0x10)) {
        fVar32 = (*(float *)(unaff_RBP + -0x3d) * 2.3 + *(float *)(unaff_RBP + -0x41) * 1.7) * 8.0 +
                 (float)system_error_code * 8e-05;
        uVar26 = (uint)fVar32;
        uVar27 = uVar26 & 0x800000ff;
        if ((int)uVar27 < 0) {
          uVar27 = (uVar27 - 1 | 0xffffff00) + 1;
        }
        pfVar25 = *(float **)(unaff_RBX + 0x81f0);
        uVar28 = uVar27 + 1 & 0x800000ff;
        if ((int)uVar28 < 0) {
          uVar28 = (uVar28 - 1 | 0xffffff00) + 1;
        }
        fVar32 = ((*(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar28 * 4) -
                  *(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar27 * 4)) *
                  (fVar32 - (float)(int)uVar26) +
                 *(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar27 * 4)) * *pfVar25 + 1.0;
        if (*(int *)(unaff_RDI + 0x70) == 1) {
          fVar1 = pfVar25[3];
          fVar34 = *(float *)(unaff_RDI + 0x74);
          fVar2 = *(float *)(unaff_RDI + 0x78);
          fVar33 = fVar1 * *(float *)(unaff_RDI + 0x7c) * fVar32;
          *(int32_t *)(unaff_RBP + -0x75) = 0x7f7fffff;
          fVar34 = fVar1 * fVar34 * fVar32;
          *(float *)(unaff_RBP + -0x79) = fVar33;
          fVar32 = fVar1 * fVar2 * fVar32;
        }
        else if (*(int *)(unaff_RDI + 0x70) == 2) {
          fVar1 = *(float *)(unaff_RDI + 0x78);
          fVar2 = *(float *)(unaff_RDI + 0x74);
          fVar3 = *(float *)(unaff_RDI + 0x7c);
          fVar32 = fVar32 * pfVar25[3];
          fVar33 = (fVar39 * fVar1 + fVar38 * fVar2 + fVar40 * fVar3) * fVar32;
          *(float *)(unaff_RBP + -0x75) = fVar41 * fVar1 + fVar41 * fVar2 + fVar41 * fVar3;
          fVar34 = (fVar36 * fVar1 + fVar35 * fVar2 + fVar37 * fVar3) * fVar32;
          *(float *)(unaff_RBP + -0x79) = fVar33;
          fVar32 = (fVar43 * fVar1 + fVar42 * fVar2 + fVar44 * fVar3) * fVar32;
        }
        else {
          fVar33 = pfVar25[3] * pfVar25[2];
          fVar32 = pfVar25[3] * pfVar25[1];
          fVar34 = fVar33 * fVar36 + fVar35 * fVar32 + fVar37 * 0.0;
          fVar33 = fVar33 * fVar39 + fVar38 * fVar32 + fVar40 * 0.0;
          fVar32 = *(float *)(unaff_RBP + -0x7d);
        }
        system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
        system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
        system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
        system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
        system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
        system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
        lVar31 = *(int64_t *)(unaff_RDI + 0x38);
        *(float *)(unaff_RBP + -0x7d) =
             fVar32 + ((float)(system_memory_flags - 1) * 4.656613e-11 - 0.1) *
                      SQRT(fVar32 * fVar32 + fVar34 * fVar34 + fVar33 * fVar33);
        if (lVar31 == 0) {
          bVar11 = true;
          iVar24 = (int)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x48) + 0x40) -
                         *(int64_t *)(*(int64_t *)(unaff_RDI + 0x48) + 0x38) >> 4);
          lVar31 = (int64_t)iVar24;
          if (0 < iVar24) {
            uVar8 = *(int32_t *)(unaff_RBP + 0x7f);
            lVar29 = 0;
            do {
              lVar30 = *(int64_t *)(lVar29 + *(int64_t *)(*(int64_t *)(unaff_RDI + 0x48) + 0x38))
              ;
              lVar10 = *(int64_t *)(lVar30 + 0x118);
              if (lVar10 != 0) {
                if (*(int *)(lVar10 + 0x118) < 1) {
                  bVar11 = false;
                }
                else {
                  cVar6 = *(char *)(unaff_RBP + 0x5f);
                  uVar9 = *(int32_t *)(unaff_RBP + 0x67);
                  *(int32_t *)(lVar10 + 0x110) = uVar8;
                  function_24c560(*(int32_t *)(unaff_RDI + 0xb8),lVar30,(int)cVar6,uVar9,
                                *(int32_t *)(unaff_RBP + 0x6f));
                  *(int32_t *)(lVar10 + 0x118) = 0;
                }
              }
              lVar29 = lVar29 + 0x10;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
          }
          if ((*(char *)(unaff_RDI + 0x44) != '\0') && (bVar11)) {
            *(int8_t *)(unaff_RDI + 0x44) = 0;
          }
        }
        else {
          lVar31 = *(int64_t *)(lVar31 + 0x118);
          if (0 < *(int *)(lVar31 + 0x118)) {
            cVar6 = *(char *)(unaff_RBP + 0x5f);
            uVar8 = *(int32_t *)(unaff_RBP + 0x67);
            cVar7 = *(char *)(lVar31 + 0x13d);
            *(int32_t *)(lVar31 + 0x110) = *(int32_t *)(unaff_RBP + 0x7f);
            function_24c560(*(int32_t *)(unaff_RDI + 0xb8),*(uint64_t *)(unaff_RDI + 0x38),
                          (int)cVar6,uVar8,*(int32_t *)(unaff_RBP + 0x6f));
            lVar29 = 0;
            if (((cVar7 == '\0') && (*(char *)(lVar31 + 0x13d) == '\x01')) &&
               (iVar24 = (int)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x48) + 0x40) -
                               *(int64_t *)(*(int64_t *)(unaff_RDI + 0x48) + 0x38) >> 4),
               lVar30 = (int64_t)iVar24, 0 < iVar24)) {
              do {
                lVar10 = *(int64_t *)
                          (*(int64_t *)
                            (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x48) + 0x38) + lVar29) + 0x118
                          );
                if (lVar10 != 0) {
                  *(int8_t *)(lVar10 + 0x13d) = 1;
                }
                lVar29 = lVar29 + 0x10;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
            }
            *(int8_t *)(unaff_RDI + 0x44) = 0;
            *(int32_t *)(lVar31 + 0x118) = 0;
          }
        }
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address