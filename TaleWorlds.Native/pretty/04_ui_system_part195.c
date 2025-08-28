#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part195.c - 5 个函数

// 函数: void FUN_18077efd0(void)
void FUN_18077efd0(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c0ded4,0,0x5c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18077f380(int64_t param_1,int64_t param_2,int64_t param_3,uint param_4,uint param_5)
void FUN_18077f380(int64_t param_1,int64_t param_2,int64_t param_3,uint param_4,uint param_5)

{
  uint64_t uVar1;
  uint64_t uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint uVar14;
  float *pfVar16;
  int64_t lVar17;
  int64_t lVar18;
  float fVar19;
  int32_t uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int8_t auStack_198 [32];
  int64_t lStack_178;
  int64_t lStack_170;
  int32_t uStack_168;
  int32_t uStack_160;
  int32_t uStack_158;
  int32_t uStack_150;
  int32_t uStack_148;
  int32_t uStack_140;
  uint uStack_138;
  int64_t lStack_130;
  int64_t lStack_128;
  int64_t lStack_120;
  uint64_t uStack_118;
  int64_t lStack_110;
  float afStack_108 [32];
  uint64_t uStack_88;
  uint64_t uVar15;
  
  uStack_88 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_198;
  uStack_138 = param_4;
  lStack_128 = param_3;
  lStack_110 = param_2;
  if (param_2 != 0) {
    lStack_120 = param_2;
    if ((*(int *)(param_1 + 0x358) != 0) &&
       (lStack_120 = param_2, *(int64_t *)(param_1 + 200) != 0)) {
      lStack_120 = *(int64_t *)(param_1 + 200);
    }
    lVar17 = lStack_120;
    fVar19 = *(float *)(param_1 + 0x360);
    if ((fVar19 != *(float *)(param_1 + 0x218)) || (*(char *)(param_1 + 0x344) != '\0')) {
      *(float *)(param_1 + 0x218) = fVar19;
      fVar19 = (float)powf(0x41200000,fVar19 * 0.1);
      *(float *)(param_1 + 0x21c) = fVar19;
      *(float *)(param_1 + 0x220) = 1.0 / fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x364);
    if ((fVar19 != *(float *)(param_1 + 0x224)) || (*(char *)(param_1 + 0x344) != '\0')) {
      *(float *)(param_1 + 0x224) = fVar19;
      *(float *)(param_1 + 0x228) = 0.5 / fVar19 - 0.5;
    }
    if ((*(int *)(param_1 + 0x348) != *(int *)(param_1 + 0x370)) ||
       (*(char *)(param_1 + 0x344) != '\0')) {
      *(int *)(param_1 + 0x348) = *(int *)(param_1 + 0x370);
    }
    fVar19 = *(float *)(param_1 + 0x35c);
    if ((fVar19 != *(float *)(param_1 + 0x32c)) || (*(char *)(param_1 + 0x344) != '\0')) {
      *(float *)(param_1 + 0x32c) = fVar19;
      fVar19 = (float)expf(-3.11127 /
                           ((float)*(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0) * fVar19 * 0.001)
                          );
      *(float *)(param_1 + 0x330) = 1.0 - fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x368);
    if ((fVar19 != *(float *)(param_1 + 0x334)) || (*(char *)(param_1 + 0x344) != '\0')) {
      *(float *)(param_1 + 0x334) = fVar19;
      fVar19 = (float)expf(-3.11127 /
                           ((float)*(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0) * fVar19 * 0.001)
                          );
      *(float *)(param_1 + 0x338) = 1.0 - fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x36c);
    if ((fVar19 != *(float *)(param_1 + 0x33c)) || (*(char *)(param_1 + 0x344) != '\0')) {
      *(float *)(param_1 + 0x33c) = fVar19;
      if (-80.0 < fVar19) {
        uVar20 = powf(0x41200000);
      }
      else {
        uVar20 = 0;
      }
      *(int32_t *)(param_1 + 0x340) = uVar20;
    }
    uVar13 = 0;
    *(int8_t *)(param_1 + 0x344) = 0;
    lVar18 = (int64_t)(int)param_5;
    uStack_118 = 0;
    if (*(int64_t *)(param_1 + 0x350) != 0) {
      lStack_130 = 0;
      iVar6 = (**(code **)(*(int64_t *)(param_1 + 0xd8) + 0x40))(param_1 + 0xb0,&lStack_130,0,0);
      if (iVar6 != 0) goto LAB_18077fe2b;
      lVar8 = lStack_130 - *(int64_t *)(param_1 + 0x350);
      fVar19 = *(float *)(param_1 + 0x338);
      fVar27 = (float)lVar8;
      if (lVar8 < 0) {
        fVar27 = fVar27 + 1.8446744e+19;
      }
      fVar21 = (float)powf(1.0 - fVar19);
      uVar10 = uVar13;
      if (3 < lVar18) {
        pfVar16 = (float *)(param_1 + 0x2b0);
        lVar8 = (lVar18 - 4U >> 2) + 1;
        uVar10 = lVar8 * 4;
        fVar26 = fVar27 * fVar19 * fVar21;
        do {
          pfVar16[-0x21] = fVar21 * pfVar16[-0x21] + fVar26 * pfVar16[-1];
          pfVar16[-1] = fVar21 * pfVar16[-1];
          pfVar16[-0x20] = fVar26 * *pfVar16 + fVar21 * pfVar16[-0x20];
          *pfVar16 = fVar21 * *pfVar16;
          pfVar16[-0x1f] = fVar21 * pfVar16[-0x1f] + fVar26 * pfVar16[1];
          pfVar16[1] = fVar21 * pfVar16[1];
          pfVar16[-0x1e] = fVar21 * pfVar16[-0x1e] + fVar26 * pfVar16[2];
          pfVar16[2] = fVar21 * pfVar16[2];
          pfVar16 = pfVar16 + 4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if ((int64_t)uVar10 < lVar18) {
        pfVar16 = (float *)(param_1 + 0x2ac + uVar10 * 4);
        lVar8 = lVar18 - uVar10;
        do {
          pfVar16[-0x20] = fVar21 * pfVar16[-0x20] + fVar27 * fVar19 * fVar21 * *pfVar16;
          *pfVar16 = fVar21 * *pfVar16;
          pfVar16 = pfVar16 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      *(uint64_t *)(param_1 + 0x350) = 0;
    }
    if (param_5 == 8) {
      if (*(int *)(param_1 + 0x348) != 0) {
        uStack_140 = *(int32_t *)(param_1 + 0x220);
        lStack_170 = param_1 + 0x22c;
        uStack_148 = *(int32_t *)(param_1 + 0x21c);
        lStack_178 = param_1 + 0x2ac;
        uStack_150 = *(int32_t *)(param_1 + 0x338);
        uStack_158 = *(int32_t *)(param_1 + 0x330);
        uStack_160 = *(int32_t *)(param_1 + 0x340);
        uStack_168 = *(int32_t *)(param_1 + 0x228);
        (*(code *)ui_system_config[3])(param_2,param_3,lVar17,param_4);
        goto LAB_18077fe2b;
      }
    }
    else if (param_5 == 6) {
      if (*(int *)(param_1 + 0x348) != 0) {
        uStack_140 = *(int32_t *)(param_1 + 0x220);
        lStack_170 = param_1 + 0x22c;
        uStack_148 = *(int32_t *)(param_1 + 0x21c);
        lStack_178 = param_1 + 0x2ac;
        uStack_150 = *(int32_t *)(param_1 + 0x338);
        uStack_158 = *(int32_t *)(param_1 + 0x330);
        uStack_160 = *(int32_t *)(param_1 + 0x340);
        uStack_168 = *(int32_t *)(param_1 + 0x228);
        (*(code *)ui_system_config[2])(param_2,param_3,lVar17,param_4);
        goto LAB_18077fe2b;
      }
    }
    else if (param_5 == 2) {
      if (*(int *)(param_1 + 0x348) != 0) {
        uStack_140 = *(int32_t *)(param_1 + 0x220);
        lStack_170 = param_1 + 0x22c;
        uStack_148 = *(int32_t *)(param_1 + 0x21c);
        lStack_178 = param_1 + 0x2ac;
        uStack_150 = *(int32_t *)(param_1 + 0x338);
        uStack_158 = *(int32_t *)(param_1 + 0x330);
        uStack_160 = *(int32_t *)(param_1 + 0x340);
        uStack_168 = *(int32_t *)(param_1 + 0x228);
        (*(code *)ui_system_config[1])(param_2,param_3,lVar17,param_4);
        goto LAB_18077fe2b;
      }
    }
    else if (param_5 == 1) {
      if (*(int *)(param_1 + 0x348) != 0) {
        uStack_140 = *(int32_t *)(param_1 + 0x220);
        lStack_170 = param_1 + 0x22c;
        uStack_148 = *(int32_t *)(param_1 + 0x21c);
        lStack_178 = param_1 + 0x2ac;
        uStack_150 = *(int32_t *)(param_1 + 0x338);
        uStack_158 = *(int32_t *)(param_1 + 0x330);
        uStack_160 = *(int32_t *)(param_1 + 0x340);
        uStack_168 = *(int32_t *)(param_1 + 0x228);
        (*(code *)*ui_system_config)(param_2,param_3,lVar17,param_4);
        goto LAB_18077fe2b;
      }
    }
    else if (*(int *)(param_1 + 0x348) != 0) {
      uVar10 = uVar13;
      if (param_4 != 0) {
        do {
          fVar19 = 0.0;
          fVar27 = 0.0;
          fVar21 = 0.0;
          fVar26 = 0.0;
          uVar7 = (int)uVar10 * param_5;
          afStack_108[0] = 0.0;
          uVar1 = param_2 + (uint64_t)uVar7 * 4;
          pfVar16 = (float *)((uint64_t)uVar7 * 4 + lVar17);
          uVar2 = lStack_128 + (uint64_t)uVar7 * 4;
          if (0 < (int)param_5) {
            uVar11 = uVar13;
            uVar15 = uVar13;
            if ((7 < param_5) &&
               ((pfVar16 + (int)(param_5 - 1) < afStack_108 ||
                (uVar15 = 0, afStack_108 + (int)(param_5 - 1) < pfVar16)))) {
              uVar7 = param_5 & 0x80000007;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
              }
              fVar22 = 0.0;
              fVar23 = 0.0;
              fVar24 = 0.0;
              fVar25 = 0.0;
              uVar15 = uVar13;
              do {
                pfVar3 = pfVar16 + uVar11;
                uVar14 = (int)uVar15 + 8;
                uVar15 = (uint64_t)uVar14;
                fVar19 = fVar19 + *pfVar3 * *pfVar3;
                fVar27 = fVar27 + pfVar3[1] * pfVar3[1];
                fVar21 = fVar21 + pfVar3[2] * pfVar3[2];
                fVar26 = fVar26 + pfVar3[3] * pfVar3[3];
                pfVar3 = pfVar16 + uVar11 + 4;
                uVar11 = uVar11 + 8;
                fVar22 = fVar22 + *pfVar3 * *pfVar3;
                fVar23 = fVar23 + pfVar3[1] * pfVar3[1];
                fVar24 = fVar24 + pfVar3[2] * pfVar3[2];
                fVar25 = fVar25 + pfVar3[3] * pfVar3[3];
              } while ((int)uVar14 < (int)(param_5 - uVar7));
              afStack_108[0] = fVar21 + fVar24 + fVar19 + fVar22 + fVar26 + fVar25 + fVar27 + fVar23
              ;
            }
            fVar19 = afStack_108[0];
            if ((int)uVar15 < (int)param_5) {
              pfVar16 = pfVar16 + uVar11;
              uVar11 = (uint64_t)(param_5 - (int)uVar15);
              do {
                fVar27 = *pfVar16;
                pfVar16 = pfVar16 + 1;
                fVar19 = fVar19 + fVar27 * fVar27;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
          }
          fVar27 = *(float *)(param_1 + 0x22c);
          if (fVar19 <= fVar27) {
            fVar21 = *(float *)(param_1 + 0x338);
          }
          else {
            fVar21 = *(float *)(param_1 + 0x330);
          }
          fVar19 = (fVar19 - *(float *)(param_1 + 0x2ac)) * fVar21 + *(float *)(param_1 + 0x2ac);
          *(float *)(param_1 + 0x2ac) = fVar19;
          fVar27 = (fVar19 - fVar27) * fVar21 + fVar27;
          *(float *)(param_1 + 0x22c) = fVar27;
          fVar19 = *(float *)(param_1 + 0x340);
          if (*(float *)(param_1 + 0x21c) <= fVar27 && fVar27 != *(float *)(param_1 + 0x21c)) {
            fVar27 = (float)powf(fVar27 * *(float *)(param_1 + 0x220));
            fVar19 = fVar27 * fVar19;
          }
          uVar11 = uVar13;
          if (((0 < (int)param_5) && (0xf < param_5)) &&
             ((uVar1 + (int64_t)(int)(param_5 - 1) * 4 < uVar2 ||
              (uVar11 = 0, uVar2 + (int64_t)(int)(param_5 - 1) * 4 < uVar1)))) {
            uVar7 = param_5 & 0x8000000f;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
            }
            lVar8 = uVar1 - uVar2;
            pfVar16 = (float *)(uVar2 + 0x10);
            uVar11 = uVar13;
            do {
              pfVar4 = (float *)(lVar8 + -0x10 + (int64_t)pfVar16);
              fVar27 = pfVar4[1];
              fVar21 = pfVar4[2];
              fVar26 = pfVar4[3];
              uVar11 = uVar11 + 0x10;
              pfVar3 = (float *)(lVar8 + (int64_t)pfVar16);
              fVar22 = *pfVar3;
              fVar23 = pfVar3[1];
              fVar24 = pfVar3[2];
              fVar25 = pfVar3[3];
              pfVar3 = pfVar16 + 0x10;
              pfVar16[-4] = *pfVar4 * fVar19;
              pfVar16[-3] = fVar27 * fVar19;
              pfVar16[-2] = fVar21 * fVar19;
              pfVar16[-1] = fVar26 * fVar19;
              pfVar4 = (float *)(lVar8 + -0x30 + (int64_t)pfVar3);
              fVar27 = *pfVar4;
              fVar21 = pfVar4[1];
              fVar26 = pfVar4[2];
              fVar5 = pfVar4[3];
              *pfVar16 = fVar22 * fVar19;
              pfVar16[1] = fVar23 * fVar19;
              pfVar16[2] = fVar24 * fVar19;
              pfVar16[3] = fVar25 * fVar19;
              pfVar4 = (float *)(lVar8 + -0x20 + (int64_t)pfVar3);
              fVar22 = *pfVar4;
              fVar23 = pfVar4[1];
              fVar24 = pfVar4[2];
              fVar25 = pfVar4[3];
              pfVar16[4] = fVar27 * fVar19;
              pfVar16[5] = fVar21 * fVar19;
              pfVar16[6] = fVar26 * fVar19;
              pfVar16[7] = fVar5 * fVar19;
              pfVar16[8] = fVar22 * fVar19;
              pfVar16[9] = fVar23 * fVar19;
              pfVar16[10] = fVar24 * fVar19;
              pfVar16[0xb] = fVar25 * fVar19;
              pfVar16 = pfVar3;
            } while ((int64_t)uVar11 < (int64_t)(int)(param_5 - uVar7));
          }
          if ((int64_t)uVar11 < lVar18) {
            if (3 < (int64_t)(lVar18 - uVar11)) {
              lVar8 = uVar11 + 1;
              lVar9 = uVar1 - uVar2;
              lVar12 = ((lVar18 - uVar11) - 4 >> 2) + 1;
              uVar11 = uVar11 + lVar12 * 4;
              pfVar16 = (float *)(uVar2 + lVar8 * 4);
              do {
                pfVar3 = pfVar16 + 4;
                pfVar16[-1] = fVar19 * *(float *)(lVar9 + -0x14 + (int64_t)pfVar3);
                *pfVar16 = fVar19 * *(float *)((int64_t)pfVar16 + lVar9);
                pfVar16[1] = fVar19 * *(float *)(lVar9 + -0xc + (int64_t)pfVar3);
                pfVar16[2] = fVar19 * *(float *)(lVar9 + -8 + (int64_t)pfVar3);
                lVar12 = lVar12 + -1;
                pfVar16 = pfVar3;
              } while (lVar12 != 0);
            }
            if ((int64_t)uVar11 < lVar18) {
              lVar8 = lVar18 - uVar11;
              pfVar16 = (float *)(uVar2 + uVar11 * 4);
              do {
                *pfVar16 = fVar19 * *(float *)((int64_t)pfVar16 + (uVar1 - uVar2));
                lVar8 = lVar8 + -1;
                pfVar16 = pfVar16 + 1;
              } while (lVar8 != 0);
            }
          }
          uVar7 = (int)uVar10 + 1;
          uVar10 = (uint64_t)uVar7;
          param_2 = lStack_110;
        } while (uVar7 < uStack_138);
      }
      goto LAB_18077fe2b;
    }
    if (param_4 != 0) {
      do {
        iVar6 = (int)uVar13;
        uVar7 = iVar6 * param_5;
        lVar18 = lStack_128 + (uint64_t)uVar7 * 4;
        if (0 < (int)param_5) {
          lStack_130 = (int64_t)afStack_108 - param_1;
          pfVar16 = (float *)(param_1 + 0x22c);
          uVar13 = (uint64_t)param_5;
          do {
            fVar19 = *(float *)((((uint64_t)uVar7 * 4 + lVar17) - param_1) + -0x22c +
                               (int64_t)pfVar16);
            fVar27 = *pfVar16;
            fVar19 = fVar19 * fVar19;
            if (fVar19 <= fVar27) {
              fVar21 = *(float *)(param_1 + 0x338);
            }
            else {
              fVar21 = *(float *)(param_1 + 0x330);
            }
            fVar19 = (fVar19 - pfVar16[0x20]) * fVar21 + pfVar16[0x20];
            pfVar16[0x20] = fVar19;
            fVar27 = (fVar19 - fVar27) * fVar21 + fVar27;
            *pfVar16 = fVar27;
            fVar19 = *(float *)(param_1 + 0x340);
            if (*(float *)(param_1 + 0x21c) <= fVar27 && fVar27 != *(float *)(param_1 + 0x21c)) {
              fVar27 = (float)powf(fVar27 * *(float *)(param_1 + 0x220));
              fVar19 = fVar27 * fVar19;
            }
            *(float *)((lVar18 - param_1) + -0x22c + (int64_t)pfVar16) =
                 fVar19 * *(float *)(((param_2 + (uint64_t)uVar7 * 4) - param_1) + -0x22c +
                                    (int64_t)pfVar16);
            pfVar16 = pfVar16 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
          iVar6 = (int)uStack_118;
          lVar17 = lStack_120;
          param_4 = uStack_138;
        }
        uVar13 = (uint64_t)(iVar6 + 1U);
        param_2 = lStack_110;
        uStack_118 = uVar13;
      } while (iVar6 + 1U < param_4);
    }
  }
LAB_18077fe2b:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_88 ^ (uint64_t)auStack_198);
}



uint64_t FUN_18077fe80(int64_t *param_1)

{
  uint *puVar1;
  int64_t lVar2;
  
  lVar2 = *param_1;
  FUN_180765990(lVar2 + 0x220,0,1);
  puVar1 = (uint *)(lVar2 + 0x29c);
  *puVar1 = *puVar1 | 0x10;
  return 0;
}



uint64_t FUN_18077fef0(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)

{
  int64_t lVar1;
  void *puVar2;
  
  lVar1 = *param_1;
  if (param_2 - 0x21U < 0x20) {
    lVar1 = lVar1 + (int64_t)param_2 * 4;
    *param_3 = *(int32_t *)(lVar1 + 0x23d0);
    if (param_4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_4,0x20,&unknown_var_4576_ptr,*(int32_t *)(lVar1 + 0x23d0));
    }
  }
  else {
    if (param_2 != 0) {
      return 0x1f;
    }
    *param_3 = *(int32_t *)(lVar1 + 0x2450);
    if (param_4 != 0) {
      switch(*(int32_t *)(lVar1 + 0x2450)) {
      case 0:
        puVar2 = &unknown_var_3344_ptr;
        break;
      case 1:
        puVar2 = &unknown_var_8328_ptr;
        break;
      case 2:
        puVar2 = &unknown_var_8344_ptr;
        break;
      case 3:
        puVar2 = &unknown_var_8360_ptr;
        break;
      case 4:
        puVar2 = &unknown_var_8376_ptr;
        break;
      case 5:
        puVar2 = &unknown_var_8384_ptr;
        break;
      case 6:
        puVar2 = &unknown_var_8408_ptr;
        break;
      case 7:
        puVar2 = &unknown_var_8392_ptr;
        break;
      default:
        goto LAB_18077ffcd;
      }
      func_0x00018076b450(param_4,puVar2,0x20);
    }
  }
LAB_18077ffcd:
  return 0;
}



uint64_t FUN_180780020(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)

{
  int64_t lVar1;
  
  if (0x1f < param_2 - 1U) {
    return 0x1f;
  }
  lVar1 = *param_1;
  *param_3 = *(int32_t *)(lVar1 + 0x23cc + (int64_t)param_2 * 4);
  if (param_4 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_4,0x20,&unknown_var_2048_ptr,
                  (double)*(float *)(lVar1 + 0x23cc + (int64_t)param_2 * 4));
  }
  return 0;
}



uint64_t FUN_180780090(int64_t param_1,int param_2)

{
  float *pfVar1;
  int64_t lVar2;
  float fVar3;
  
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0x218) != *(int *)(param_1 + 0x2450)) {
      *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x2450);
      *(int8_t *)(param_1 + 0x23c8) = 1;
    }
    pfVar1 = (float *)(param_1 + 0x348);
    lVar2 = 4;
    do {
      if (-80.0 < pfVar1[0x822]) {
        fVar3 = (float)powf(0x41200000,pfVar1[0x822] * 0.05);
      }
      else {
        fVar3 = 0.0;
      }
      if (fVar3 != *pfVar1) {
        *pfVar1 = fVar3;
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (pfVar1[-0x20] != pfVar1[0x843]) {
        pfVar1[-0x20] = pfVar1[0x843];
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (-80.0 < pfVar1[0x823]) {
        fVar3 = (float)powf(0x41200000,pfVar1[0x823] * 0.05);
      }
      else {
        fVar3 = 0.0;
      }
      if (fVar3 != pfVar1[1]) {
        pfVar1[1] = fVar3;
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (pfVar1[-0x1f] != pfVar1[0x844]) {
        pfVar1[-0x1f] = pfVar1[0x844];
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (-80.0 < pfVar1[0x824]) {
        fVar3 = (float)powf(0x41200000,pfVar1[0x824] * 0.05);
      }
      else {
        fVar3 = 0.0;
      }
      if (fVar3 != pfVar1[2]) {
        pfVar1[2] = fVar3;
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (pfVar1[-0x1e] != pfVar1[0x845]) {
        pfVar1[-0x1e] = pfVar1[0x845];
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (-80.0 < pfVar1[0x825]) {
        fVar3 = (float)powf(0x41200000,pfVar1[0x825] * 0.05);
      }
      else {
        fVar3 = 0.0;
      }
      if (fVar3 != pfVar1[3]) {
        pfVar1[3] = fVar3;
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (pfVar1[-0x1d] != pfVar1[0x846]) {
        pfVar1[-0x1d] = pfVar1[0x846];
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (-80.0 < pfVar1[0x826]) {
        fVar3 = (float)powf(0x41200000,pfVar1[0x826] * 0.05);
      }
      else {
        fVar3 = 0.0;
      }
      if (fVar3 != pfVar1[4]) {
        pfVar1[4] = fVar3;
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (pfVar1[-0x1c] != pfVar1[0x847]) {
        pfVar1[-0x1c] = pfVar1[0x847];
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (-80.0 < pfVar1[0x827]) {
        fVar3 = (float)powf(0x41200000,pfVar1[0x827] * 0.05);
      }
      else {
        fVar3 = 0.0;
      }
      if (fVar3 != pfVar1[5]) {
        pfVar1[5] = fVar3;
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (pfVar1[-0x1b] != pfVar1[0x848]) {
        pfVar1[-0x1b] = pfVar1[0x848];
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (-80.0 < pfVar1[0x828]) {
        fVar3 = (float)powf(0x41200000,pfVar1[0x828] * 0.05);
      }
      else {
        fVar3 = 0.0;
      }
      if (fVar3 != pfVar1[6]) {
        pfVar1[6] = fVar3;
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (pfVar1[-0x1a] != pfVar1[0x849]) {
        pfVar1[-0x1a] = pfVar1[0x849];
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (-80.0 < pfVar1[0x829]) {
        fVar3 = (float)powf(0x41200000,pfVar1[0x829] * 0.05);
      }
      else {
        fVar3 = 0.0;
      }
      if (fVar3 != pfVar1[7]) {
        pfVar1[7] = fVar3;
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      if (pfVar1[-0x19] != pfVar1[0x84a]) {
        pfVar1[-0x19] = pfVar1[0x84a];
        *(int8_t *)(param_1 + 0x23c8) = 1;
      }
      pfVar1 = pfVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return 0;
}



uint64_t FUN_1807800a8(int64_t param_1,int8_t param_2)

{
  int in_EAX;
  float *pfVar1;
  int64_t lVar2;
  int64_t unaff_RDI;
  float fVar3;
  
  if (*(int *)(param_1 + 0x218) != in_EAX) {
    *(int *)(param_1 + 0x218) = in_EAX;
    *(int8_t *)(param_1 + 0x23c8) = param_2;
  }
  pfVar1 = (float *)(param_1 + 0x348);
  lVar2 = 4;
  do {
    if (-80.0 < pfVar1[0x822]) {
      fVar3 = (float)powf(0x41200000,pfVar1[0x822] * 0.05);
    }
    else {
      fVar3 = 0.0;
    }
    if (fVar3 != *pfVar1) {
      *pfVar1 = fVar3;
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (pfVar1[-0x20] != pfVar1[0x843]) {
      pfVar1[-0x20] = pfVar1[0x843];
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (-80.0 < pfVar1[0x823]) {
      fVar3 = (float)powf(0x41200000,pfVar1[0x823] * 0.05);
    }
    else {
      fVar3 = 0.0;
    }
    if (fVar3 != pfVar1[1]) {
      pfVar1[1] = fVar3;
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (pfVar1[-0x1f] != pfVar1[0x844]) {
      pfVar1[-0x1f] = pfVar1[0x844];
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (-80.0 < pfVar1[0x824]) {
      fVar3 = (float)powf(0x41200000,pfVar1[0x824] * 0.05);
    }
    else {
      fVar3 = 0.0;
    }
    if (fVar3 != pfVar1[2]) {
      pfVar1[2] = fVar3;
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (pfVar1[-0x1e] != pfVar1[0x845]) {
      pfVar1[-0x1e] = pfVar1[0x845];
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (-80.0 < pfVar1[0x825]) {
      fVar3 = (float)powf(0x41200000,pfVar1[0x825] * 0.05);
    }
    else {
      fVar3 = 0.0;
    }
    if (fVar3 != pfVar1[3]) {
      pfVar1[3] = fVar3;
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (pfVar1[-0x1d] != pfVar1[0x846]) {
      pfVar1[-0x1d] = pfVar1[0x846];
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (-80.0 < pfVar1[0x826]) {
      fVar3 = (float)powf(0x41200000,pfVar1[0x826] * 0.05);
    }
    else {
      fVar3 = 0.0;
    }
    if (fVar3 != pfVar1[4]) {
      pfVar1[4] = fVar3;
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (pfVar1[-0x1c] != pfVar1[0x847]) {
      pfVar1[-0x1c] = pfVar1[0x847];
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (-80.0 < pfVar1[0x827]) {
      fVar3 = (float)powf(0x41200000,pfVar1[0x827] * 0.05);
    }
    else {
      fVar3 = 0.0;
    }
    if (fVar3 != pfVar1[5]) {
      pfVar1[5] = fVar3;
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (pfVar1[-0x1b] != pfVar1[0x848]) {
      pfVar1[-0x1b] = pfVar1[0x848];
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (-80.0 < pfVar1[0x828]) {
      fVar3 = (float)powf(0x41200000,pfVar1[0x828] * 0.05);
    }
    else {
      fVar3 = 0.0;
    }
    if (fVar3 != pfVar1[6]) {
      pfVar1[6] = fVar3;
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (pfVar1[-0x1a] != pfVar1[0x849]) {
      pfVar1[-0x1a] = pfVar1[0x849];
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (-80.0 < pfVar1[0x829]) {
      fVar3 = (float)powf(0x41200000,pfVar1[0x829] * 0.05);
    }
    else {
      fVar3 = 0.0;
    }
    if (fVar3 != pfVar1[7]) {
      pfVar1[7] = fVar3;
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    if (pfVar1[-0x19] != pfVar1[0x84a]) {
      pfVar1[-0x19] = pfVar1[0x84a];
      *(int8_t *)(unaff_RDI + 0x23c8) = 1;
    }
    pfVar1 = pfVar1 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return 0;
}



uint64_t FUN_180780356(void)

{
  return 0;
}



uint64_t FUN_180780360(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int iVar5;
  
  LOCK();
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x10;
  UNLOCK();
  *(int8_t *)(param_1 + 0x23c8) = 0;
  iVar5 = 0;
  *(int32_t *)(param_1 + 0x23cc) = 0;
  *(int32_t *)(param_1 + 0x23d0) = 0x3f800000;
  *(int32_t *)(param_1 + 0x348) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23d4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x34c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23d8) = 0x3f800000;
  *(int32_t *)(param_1 + 0x350) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23dc) = 0x3f800000;
  *(int32_t *)(param_1 + 0x354) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23e0) = 0x3f800000;
  *(int32_t *)(param_1 + 0x358) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23e4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x35c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23e8) = 0x3f800000;
  *(int32_t *)(param_1 + 0x360) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23ec) = 0x3f800000;
  *(int32_t *)(param_1 + 0x364) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23f0) = 0x3f800000;
  *(int32_t *)(param_1 + 0x368) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23f4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x36c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23f8) = 0x3f800000;
  *(int32_t *)(param_1 + 0x370) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23fc) = 0x3f800000;
  *(int32_t *)(param_1 + 0x374) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2400) = 0x3f800000;
  *(int32_t *)(param_1 + 0x378) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2404) = 0x3f800000;
  *(int32_t *)(param_1 + 0x37c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2408) = 0x3f800000;
  *(int32_t *)(param_1 + 0x380) = 0x3f800000;
  *(int32_t *)(param_1 + 0x240c) = 0x3f800000;
  *(int32_t *)(param_1 + 900) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2410) = 0x3f800000;
  *(int32_t *)(param_1 + 0x388) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2414) = 0x3f800000;
  *(int32_t *)(param_1 + 0x38c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2418) = 0x3f800000;
  *(int32_t *)(param_1 + 0x390) = 0x3f800000;
  *(int32_t *)(param_1 + 0x241c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x394) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2420) = 0x3f800000;
  *(int32_t *)(param_1 + 0x398) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2424) = 0x3f800000;
  *(int32_t *)(param_1 + 0x39c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2428) = 0x3f800000;
  *(int32_t *)(param_1 + 0x3a0) = 0x3f800000;
  *(int32_t *)(param_1 + 0x242c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x3a4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2430) = 0x3f800000;
  *(int32_t *)(param_1 + 0x3a8) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2434) = 0x3f800000;
  *(int32_t *)(param_1 + 0x3ac) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2438) = 0x3f800000;
  *(int32_t *)(param_1 + 0x3b0) = 0x3f800000;
  *(int32_t *)(param_1 + 0x243c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x3b4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2440) = 0x3f800000;
  *(int32_t *)(param_1 + 0x3b8) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2444) = 0x3f800000;
  *(int32_t *)(param_1 + 0x3bc) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2448) = 0x3f800000;
  *(int32_t *)(param_1 + 0x3c0) = 0x3f800000;
  *(int32_t *)(param_1 + 0x244c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x3c4) = 0x3f800000;
  lVar2 = *(int64_t *)(param_1 + 0xe8);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar4 = 0;
    do {
      piVar1 = *(int **)(lVar4 + *(int64_t *)(lVar2 + 0x68));
      if ((*piVar1 == 1) &&
         (uVar3 = func_0x000180762af0(param_1,iVar5,piVar1[0xe]), (int)uVar3 != 0)) {
        return uVar3;
      }
      piVar1 = *(int **)(lVar4 + *(int64_t *)(*(int64_t *)(param_1 + 0xe8) + 0x68));
      if ((*piVar1 == 0) &&
         (uVar3 = func_0x000180762a70(param_1,iVar5,piVar1[0xe]), (int)uVar3 != 0)) {
        return uVar3;
      }
      lVar2 = *(int64_t *)(param_1 + 0xe8);
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar5 < *(int *)(lVar2 + 0x60));
  }
  func_0x000180763630(param_1 + 0x220,*(uint64_t *)(param_1 + 0xa8),0x3f800000);
  *(uint *)(param_1 + 0x29c) = *(uint *)(param_1 + 0x29c) | 0x10;
  *(code **)(param_1 + 0xb8) = FUN_180763100;
  return 0;
}





// 函数: void FUN_1807806c0(void)
void FUN_1807806c0(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c0edc4,0,0x5c);
}





// 函数: void FUN_1807808b0(void)
void FUN_1807808b0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180780a6e(void)
void FUN_180780a6e(void)

{
                    // WARNING: Subroutine does not return
  memset();
}





