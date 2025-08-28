#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: SystemOutputManager */
#define SystemOutputManager SystemOutputManager


#include "SystemOutputManager0_definition.h"
/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part054.c - 8 个函数

// 函数: void FUN_1805d6382(void)
void FUN_1805d6382(void)

{
  uint64_t uVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  char *pcVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  int64_t lVar10;
  char cVar11;
  int unaff_R14D;
  float fVar12;
  
  if ((*(byte *)(unaff_RSI + 0x56c) & 1) != 0) goto FUN_1805d6797;
  if ((*(byte *)(unaff_RSI + 0x56c) & 0x20) != 0) {
    uVar8 = *(uint *)((int64_t)unaff_RBX + 0x1484);
    uVar7 = uVar8 & 0xfffffffe;
    *(uint *)((int64_t)unaff_RBX + 0x1484) = uVar7;
    if ((uVar8 >> 1 & 1) == 0) {
      *(uint *)((int64_t)unaff_RBX + 0x1484) = uVar7 | 2;
      *(int8_t *)(*(int64_t *)(*unaff_RBX + 0x738) + 0x180) = 1;
    }
                    // WARNING: Subroutine does not return
    AdvancedSystemController(*(int32_t *)(*(int64_t *)(*unaff_RBX + 0x20) + 0x34));
  }
  uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
  uVar8 = uVar8 ^ uVar8 >> 0x11;
  uVar8 = uVar8 ^ uVar8 << 5;
  *(uint *)(unaff_RBX + 0x272) = uVar8;
  *(float *)((int64_t)unaff_RBX + 0x14ac) =
       (float)(uVar8 - 1) * 2.3283064e-10 + 1.0 + *(float *)((int64_t)unaff_RBX + 0x14ac);
  if (((((int)unaff_RBX[0x404] < 0) ||
       (lVar10 = unaff_RBX[0x291] + 0x30a0 + (int64_t)(int)unaff_RBX[0x404] * 0xa60,
       *(int *)(lVar10 + 0x568) != 1)) || ((*(byte *)(lVar10 + 0x56c) & 8) == 0)) ||
     (cVar2 = func_0x000180508270(*unaff_RBX,lVar10), cVar2 == '\0')) goto FUN_1805d6797;
  lVar4 = func_0x0001805b7270(unaff_RBX + 1);
  if (lVar4 != 0) {
    cVar2 = func_0x0001805d1da0();
    cVar11 = (char)unaff_R14D;
    if (cVar2 != '\0') {
      if ((char)unaff_RBX[0x438] == cVar11) {
        iVar3 = *(int *)((int64_t)unaff_RBX + 0x14b4);
      }
      else {
        iVar3 = *(int *)((int64_t)unaff_RBX + 0x21c4);
      }
      if ((int)unaff_RBX[0x404] == iVar3) goto LAB_1805d6666;
    }
    pcVar5 = (char *)FUN_1805b73f0(unaff_RBX + 1);
    if (((*pcVar5 == cVar11) && (pfVar6 = (float *)FUN_1805b7450(unaff_RBX + 1), *pfVar6 == 0.0)) &&
       (pfVar6 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1), 2.0 < *pfVar6)) {
      cVar2 = func_0x0001805b7d30();
      if (((cVar2 == '\0') && (cVar2 = func_0x0001805b7cd0(), cVar2 == '\0')) &&
         ((pcVar5 = (char *)FUN_1805b7080(unaff_RBX + 1), *pcVar5 == cVar11 &&
          (((pcVar5 = (char *)func_0x0001805b71d0(unaff_RBX + 1), *pcVar5 == cVar11 &&
            (lVar4 = *(int64_t *)(*(int64_t *)(lVar10 + 0x8f8) + 0x9e8), lVar4 != 0)) &&
           ((*(byte *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar4 + 0xd0))
             >> 1 & 1) != 0)))))) {
        fVar12 = *(float *)(*(int64_t *)(lVar10 + 0x20) + 0x14) -
                 *(float *)(*(int64_t *)(*unaff_RBX + 0x6d8) + 0x8ec);
        uVar9 = 0x2000;
        if (0.0 < fVar12) {
          uVar9 = 0x1000;
        }
        func_0x0001805d8950(fVar12,uVar9);
      }
      FUN_180508010();
      goto FUN_1805d6797;
    }
  }
LAB_1805d6666:
  lVar4 = func_0x0001805b6e80(unaff_RBX + 1);
  if ((lVar4 != 0) && (unaff_R14D < *(int *)(lVar4 + 0x30))) {
    uVar1 = *(uint64_t *)
             ((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar4 + 0xd0));
    if (((((uVar1 >> 9 & 1) == 0) || ((short)unaff_R14D < *(short *)(lVar4 + 8))) &&
        ((((uVar1 >> 1 & 1) != 0 &&
          (lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x8f8) + 0x9e8), lVar10 != 0)) &&
         (unaff_R14D < *(int *)(lVar10 + 0x30))))) &&
       ((((uVar1 = *(uint64_t *)
                    ((int64_t)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar10 + 0xd0))
          , (uVar1 >> 9 & 1) == 0 || ((short)unaff_R14D < *(short *)(lVar10 + 8))) &&
         ((uVar1 & 1) != 0)) &&
        ((float)(*(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) -
                unaff_RBX[0x273]) * 1e-05 < -1.5)))) {
      uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar8 = uVar8 ^ uVar8 >> 0x11;
      uVar8 = uVar8 ^ uVar8 << 5;
      *(uint *)(unaff_RBX + 0x272) = uVar8;
      unaff_RBX[0x273] =
           *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) -
           (int64_t)((float)(uVar8 - 1) * -3.4924597e-05);
    }
  }
FUN_1805d6797:
  *(int32_t *)(unaff_RBX + 0x404) = 0xffffffff;
  return;
}






// 函数: void FUN_1805d6396(void)
void FUN_1805d6396(void)

{
  uint64_t uVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  char *pcVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t *unaff_RBX;
  int64_t lVar10;
  char cVar11;
  int unaff_R14D;
  bool in_ZF;
  float fVar12;
  
  if (!in_ZF) {
    uVar8 = *(uint *)((int64_t)unaff_RBX + 0x1484);
    uVar7 = uVar8 & 0xfffffffe;
    *(uint *)((int64_t)unaff_RBX + 0x1484) = uVar7;
    if ((uVar8 >> 1 & 1) == 0) {
      *(uint *)((int64_t)unaff_RBX + 0x1484) = uVar7 | 2;
      *(int8_t *)(*(int64_t *)(*unaff_RBX + 0x738) + 0x180) = 1;
    }
                    // WARNING: Subroutine does not return
    AdvancedSystemController(*(int32_t *)(*(int64_t *)(*unaff_RBX + 0x20) + 0x34));
  }
  uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
  uVar8 = uVar8 ^ uVar8 >> 0x11;
  uVar8 = uVar8 ^ uVar8 << 5;
  *(uint *)(unaff_RBX + 0x272) = uVar8;
  *(float *)((int64_t)unaff_RBX + 0x14ac) =
       (float)(uVar8 - 1) * 2.3283064e-10 + 1.0 + *(float *)((int64_t)unaff_RBX + 0x14ac);
  if ((((int)unaff_RBX[0x404] < 0) ||
      (lVar10 = unaff_RBX[0x291] + 0x30a0 + (int64_t)(int)unaff_RBX[0x404] * 0xa60,
      *(int *)(lVar10 + 0x568) != 1)) || ((*(byte *)(lVar10 + 0x56c) & 8) == 0)) goto LAB_1805d678f;
  cVar2 = func_0x000180508270(*unaff_RBX,lVar10);
  if (cVar2 == '\0') goto LAB_1805d678f;
  lVar4 = func_0x0001805b7270(unaff_RBX + 1);
  if (lVar4 != 0) {
    cVar2 = func_0x0001805d1da0();
    cVar11 = (char)unaff_R14D;
    if (cVar2 != '\0') {
      if ((char)unaff_RBX[0x438] == cVar11) {
        iVar3 = *(int *)((int64_t)unaff_RBX + 0x14b4);
      }
      else {
        iVar3 = *(int *)((int64_t)unaff_RBX + 0x21c4);
      }
      if ((int)unaff_RBX[0x404] == iVar3) goto LAB_1805d6666;
    }
    pcVar5 = (char *)FUN_1805b73f0(unaff_RBX + 1);
    if (*pcVar5 == cVar11) {
      pfVar6 = (float *)FUN_1805b7450(unaff_RBX + 1);
      if (*pfVar6 == 0.0) {
        pfVar6 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1);
        if (2.0 < *pfVar6) {
          cVar2 = func_0x0001805b7d30();
          if (cVar2 == '\0') {
            cVar2 = func_0x0001805b7cd0();
            if (cVar2 == '\0') {
              pcVar5 = (char *)FUN_1805b7080(unaff_RBX + 1);
              if (*pcVar5 == cVar11) {
                pcVar5 = (char *)func_0x0001805b71d0(unaff_RBX + 1);
                if (((*pcVar5 == cVar11) &&
                    (lVar4 = *(int64_t *)(*(int64_t *)(lVar10 + 0x8f8) + 0x9e8), lVar4 != 0)) &&
                   ((*(byte *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 +
                              *(int64_t *)(lVar4 + 0xd0)) >> 1 & 1) != 0)) {
                  fVar12 = *(float *)(*(int64_t *)(lVar10 + 0x20) + 0x14) -
                           *(float *)(*(int64_t *)(*unaff_RBX + 0x6d8) + 0x8ec);
                  uVar9 = 0x2000;
                  if (0.0 < fVar12) {
                    uVar9 = 0x1000;
                  }
                  func_0x0001805d8950(fVar12,uVar9);
                }
              }
            }
          }
          FUN_180508010();
          goto LAB_1805d678f;
        }
      }
    }
  }
LAB_1805d6666:
  lVar4 = func_0x0001805b6e80(unaff_RBX + 1);
  if ((lVar4 != 0) && (unaff_R14D < *(int *)(lVar4 + 0x30))) {
    uVar1 = *(uint64_t *)
             ((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar4 + 0xd0));
    if (((((uVar1 >> 9 & 1) == 0) || ((short)unaff_R14D < *(short *)(lVar4 + 8))) &&
        ((((uVar1 >> 1 & 1) != 0 &&
          (lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x8f8) + 0x9e8), lVar10 != 0)) &&
         (unaff_R14D < *(int *)(lVar10 + 0x30))))) &&
       ((((uVar1 = *(uint64_t *)
                    ((int64_t)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar10 + 0xd0))
          , (uVar1 >> 9 & 1) == 0 || ((short)unaff_R14D < *(short *)(lVar10 + 8))) &&
         ((uVar1 & 1) != 0)) &&
        ((float)(*(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) -
                unaff_RBX[0x273]) * 1e-05 < -1.5)))) {
      uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar8 = uVar8 ^ uVar8 >> 0x11;
      uVar8 = uVar8 ^ uVar8 << 5;
      *(uint *)(unaff_RBX + 0x272) = uVar8;
      unaff_RBX[0x273] =
           *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) -
           (int64_t)((float)(uVar8 - 1) * -3.4924597e-05);
    }
  }
LAB_1805d678f:
  *(int32_t *)(unaff_RBX + 0x404) = 0xffffffff;
  return;
}






// 函数: void FUN_1805d6797(void)
void FUN_1805d6797(void)

{
  int64_t unaff_RBX;
  
  *(int32_t *)(unaff_RBX + 0x2020) = 0xffffffff;
  return;
}






// 函数: void FUN_1805d67c0(int64_t param_1,int64_t *param_2,int32_t param_3)
void FUN_1805d67c0(int64_t param_1,int64_t *param_2,int32_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  
  lVar2 = param_1;
  func_0x000180508000(param_1,&memory_allocator_3320_ptr,&memory_allocator_3288_ptr,*(uint64_t *)(param_1 + 0x20f0),
                      param_2,*(int32_t *)(param_1 + 0x209c),param_3);
  *(int32_t *)(lVar2 + 0x209c) = param_3;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = *(int64_t **)(param_1 + 0x20f0);
  *(int64_t **)(param_1 + 0x20f0) = param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if (param_2 == (int64_t *)0x0) {
    param_2 = (int64_t *)&system_data_ad20;
  }
  else {
    param_2 = param_2 + 0x14;
  }
  lVar2 = param_2[1];
  *(int64_t *)(param_1 + 0x20f8) = *param_2;
  *(int64_t *)(param_1 + 0x2100) = lVar2;
  *(int32_t *)(param_1 + 0x2108) = 0xffffffff;
  *(ushort *)(param_1 + 0x130) = *(ushort *)(param_1 + 0x130) | 0x200;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d6890(int64_t *param_1)
void FUN_1805d6890(int64_t *param_1)

{
  char cVar1;
  float *pfVar2;
  int8_t auStack_1a8 [48];
  int32_t uStack_178;
  int64_t lStack_160;
  int64_t *plStack_158;
  int64_t lStack_150;
  uint64_t uStack_d8;
  
  uStack_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1a8;
  lStack_150 = *(int64_t *)(*(int64_t *)(*param_1 + 0x8f8) + 0x9e8);
  plStack_158 = param_1;
  if ((((lStack_150 == 0) ||
       ((*(byte *)((int64_t)*(int *)(lStack_150 + 0xf0) * 0xa0 + 0x50 +
                  *(int64_t *)(lStack_150 + 0xd0)) >> 1 & 1) == 0)) && ((int)param_1[0x295] != 6))
     && ((cVar1 = func_0x000180522f60(*param_1), cVar1 == '\0' ||
         (pfVar2 = (float *)FUN_1805b69b0(param_1 + 1), *pfVar2 <= 0.0)))) {
    uStack_178 = 0x1010101;
    lStack_160 = *(int64_t *)(*param_1 + 0x20) + 0xc;
                    // WARNING: Subroutine does not return
    AdvancedSystemController(*(int32_t *)(*(int64_t *)(*param_1 + 0x20) + 0x34));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_d8 ^ (uint64_t)auStack_1a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1805d7bf0(int64_t *param_1)

{
  int8_t uVar1;
  int iVar2;
  int *piVar3;
  int64_t lVar4;
  char *pcVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  uint64_t uVar9;
  char cVar10;
  int64_t lVar11;
  int8_t auStack_28 [20];
  float fStack_14;
  
  uVar9 = 0;
  lVar4 = *param_1;
  iVar2 = -1;
  lVar11 = system_system_config;
  if (((*(int *)(lVar4 + 0x1fc) == 7) && ((*(uint *)(lVar4 + 0x4c8) & 0x7c00) != 0)) &&
     ((*(uint *)(lVar4 + 0x56c) & 0x4000) != 0)) {
    lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x8f8) + 0x9f0);
    if (lVar4 == 0) {
LAB_1805d7c8a:
      lVar4 = func_0x0001805b6e80(param_1 + 1);
      lVar11 = system_system_config;
      if (lVar4 != 0) {
        uVar1 = func_0x000180525320(*param_1);
        lVar11 = system_system_config;
        piVar3 = (int *)func_0x00018054fc00((int64_t)
                                            *(int *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 100 +
                                                    *(int64_t *)(lVar4 + 0xd0)) * 0x170 +
                                            system_system_config,uVar1);
        if (piVar3 != (int *)0x0) goto LAB_1805d7cdc;
      }
    }
    else {
      uVar1 = func_0x000180525320();
      lVar11 = system_system_config;
      piVar3 = (int *)func_0x00018054fc00((int64_t)
                                          *(int *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 100 +
                                                  *(int64_t *)(lVar4 + 0xd0)) * 0x170 +
                                          system_system_config,uVar1);
      if (piVar3 == (int *)0x0) goto LAB_1805d7c8a;
LAB_1805d7cdc:
      iVar8 = *piVar3;
      if (*piVar3 != -1) goto LAB_1805d7d58;
    }
  }
  if ((((*(uint *)(*param_1 + 0x56c) & 0x800) == 0) ||
      (lVar4 = *(int64_t *)(*param_1 + 0x590), lVar4 == 0)) || (*(char *)(lVar4 + 0x34bc) == '\0'))
  {
    cVar10 = '\0';
  }
  else {
    cVar10 = '\x01';
  }
  iVar8 = iVar2;
  if (0 < *(int *)(lVar11 + 0x70)) {
    pcVar5 = (char *)(*(int64_t *)(lVar11 + 0x68) + 0x10);
    uVar6 = uVar9;
    uVar7 = uVar9;
    do {
      if (*pcVar5 == cVar10) {
        piVar3 = (int *)(*(int64_t *)(lVar11 + 0x68) + (int64_t)(int)uVar7 * 0x14);
        if (piVar3 != (int *)0x0) {
          iVar8 = *piVar3;
        }
        break;
      }
      uVar7 = (uint64_t)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
      pcVar5 = pcVar5 + 0x14;
    } while ((int64_t)uVar6 < (int64_t)*(int *)(lVar11 + 0x70));
  }
LAB_1805d7d58:
  iVar2 = SystemCacheManager(&system_data_5f30,*(int32_t *)(*(int64_t *)(*param_1 + 0x590) + 0xac),iVar8
                       );
  iVar2 = *(int *)(system_system_config + (int64_t)iVar2 * 4);
  if (iVar2 != -1) {
    uVar9 = *(uint64_t *)(system_system_config + (int64_t)iVar2 * 8);
  }
  lVar4 = (int64_t)*(short *)(uVar9 + 0x7e) * 0x68 + system_system_config;
  FUN_18040c880(*(uint64_t *)(*(int64_t *)(*param_1 + 0x658) + 0x208),auStack_28,uVar9,
                *(int8_t *)(lVar4 + 100),
                (*(float *)(lVar4 + 0x28) + *(float *)(lVar4 + 0x20)) * 0.5,1);
  return fStack_14 * *(float *)(*(int64_t *)(*param_1 + 0x6d8) + 0x8c0);
}






// 函数: void FUN_1805d7e10(uint64_t *param_1)
void FUN_1805d7e10(uint64_t *param_1)

{
  uint uStack_3c;
  uint uStack_34;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  *(int8_t *)(param_1 + 2) = 0;
  *param_1 = *(uint64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 1) * 8);
  *(int32_t *)((int64_t)param_1 + 0x3d4) = 0;
  *(int32_t *)(param_1 + 0x7b) = 0xffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x14) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x1c) = (uint64_t)uStack_3c << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x24) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x2c) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x34) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 0x3c) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x44) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x4c) = 0;
  param_1[10] = 0xf149f2caffffffff;
  param_1[0xb] = (uint64_t)uStack_3c << 0x20;
  param_1[0xc] = (uint64_t)uStack_34 << 0x20;
  param_1[0xd] = uStack_30;
  param_1[0xe] = uStack_28;
  param_1[0xf] = uStack_20;
  param_1[0x10] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x11) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x8c) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x94) = (uint64_t)uStack_3c << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x9c) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0xa4) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0xac) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 0xb4) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0xbc) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0xc4) = 0;
  param_1[0x19] = 0xf149f2caffffffff;
  param_1[0x1a] = (uint64_t)uStack_3c << 0x20;
  param_1[0x1b] = (uint64_t)uStack_34 << 0x20;
  param_1[0x1c] = uStack_30;
  param_1[0x1d] = uStack_28;
  param_1[0x1e] = uStack_20;
  param_1[0x1f] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x104) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x10c) = (uint64_t)uStack_3c << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x114) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x11c) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x124) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 300) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x134) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x13c) = 0;
  param_1[0x28] = 0xf149f2caffffffff;
  param_1[0x29] = (uint64_t)uStack_3c << 0x20;
  param_1[0x2a] = (uint64_t)uStack_34 << 0x20;
  param_1[0x2b] = uStack_30;
  param_1[0x2c] = uStack_28;
  param_1[0x2d] = uStack_20;
  param_1[0x2e] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x2f) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x17c) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x184) = (uint64_t)uStack_3c << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x18c) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x194) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x19c) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 0x1a4) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x1ac) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x1b4) = 0;
  param_1[0x37] = 0xf149f2caffffffff;
  param_1[0x38] = (uint64_t)uStack_3c << 0x20;
  param_1[0x39] = (uint64_t)uStack_34 << 0x20;
  param_1[0x3a] = uStack_30;
  param_1[0x3b] = uStack_28;
  param_1[0x3c] = uStack_20;
  param_1[0x3d] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x3e) = 0;
  *(uint64_t *)((int64_t)param_1 + 500) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x1fc) = (uint64_t)uStack_3c << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x204) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x20c) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x214) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 0x21c) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x224) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x22c) = 0;
  param_1[0x46] = 0xf149f2caffffffff;
  param_1[0x47] = (uint64_t)uStack_3c << 0x20;
  param_1[0x48] = (uint64_t)uStack_34 << 0x20;
  param_1[0x49] = uStack_30;
  param_1[0x4a] = uStack_28;
  param_1[0x4b] = uStack_20;
  param_1[0x4c] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x4d) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x26c) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x274) = (uint64_t)uStack_3c << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x27c) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x284) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x28c) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 0x294) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x29c) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x2a4) = 0;
  param_1[0x55] = 0xf149f2caffffffff;
  param_1[0x56] = (uint64_t)uStack_3c << 0x20;
  param_1[0x57] = (uint64_t)uStack_34 << 0x20;
  param_1[0x58] = uStack_30;
  param_1[0x59] = uStack_28;
  param_1[0x5a] = uStack_20;
  param_1[0x5b] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x5c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2e4) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x2ec) = (uint64_t)uStack_3c << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x2f4) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x2fc) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x304) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 0x30c) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x314) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x31c) = 0;
  param_1[100] = 0xf149f2caffffffff;
  param_1[0x65] = (uint64_t)uStack_3c << 0x20;
  param_1[0x66] = (uint64_t)uStack_34 << 0x20;
  param_1[0x67] = uStack_30;
  param_1[0x68] = uStack_28;
  param_1[0x69] = uStack_20;
  param_1[0x6a] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x6b) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x35c) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x364) = (uint64_t)uStack_3c << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x36c) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x374) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x37c) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 900) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x38c) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x394) = 0;
  param_1[0x73] = 0xf149f2caffffffff;
  param_1[0x74] = (uint64_t)uStack_3c << 0x20;
  param_1[0x75] = (uint64_t)uStack_34 << 0x20;
  param_1[0x76] = uStack_30;
  param_1[0x77] = uStack_28;
  param_1[0x78] = uStack_20;
  param_1[0x79] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x7a) = 0;
  return;
}






// 函数: void FUN_1805d82f0(uint64_t *param_1)
void FUN_1805d82f0(uint64_t *param_1)

{
  int32_t uStack_3c;
  uint uStack_34;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  *(int8_t *)(param_1 + 2) = 0;
  *param_1 = *(uint64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 1) * 8);
  *(int32_t *)((int64_t)param_1 + 0x3d4) = 0;
  *(int32_t *)(param_1 + 0x7b) = 0xffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x14) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x1c) = CONCAT44(uStack_3c,0xf149f2ca);
  *(uint64_t *)((int64_t)param_1 + 0x24) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x2c) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x34) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 0x3c) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x44) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x4c) = 0;
  param_1[10] = 0xf149f2caffffffff;
  param_1[0xb] = CONCAT44(uStack_3c,0xf149f2ca);
  param_1[0xc] = (uint64_t)uStack_34 << 0x20;
  param_1[0xd] = uStack_30;
  param_1[0xe] = uStack_28;
  param_1[0xf] = uStack_20;
  param_1[0x10] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x11) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x8c) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x94) = CONCAT44(uStack_3c,0xf149f2ca);
  *(uint64_t *)((int64_t)param_1 + 0x9c) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0xa4) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0xac) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 0xb4) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0xbc) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0xc4) = 0;
  param_1[0x19] = 0xf149f2caffffffff;
  param_1[0x1a] = CONCAT44(uStack_3c,0xf149f2ca);
  param_1[0x1b] = (uint64_t)uStack_34 << 0x20;
  param_1[0x1c] = uStack_30;
  param_1[0x1d] = uStack_28;
  param_1[0x1e] = uStack_20;
  param_1[0x1f] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x104) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x10c) = CONCAT44(uStack_3c,0xf149f2ca);
  *(uint64_t *)((int64_t)param_1 + 0x114) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x11c) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x124) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 300) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x134) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x13c) = 0;
  param_1[0x28] = 0xf149f2caffffffff;
  param_1[0x29] = CONCAT44(uStack_3c,0xf149f2ca);
  param_1[0x2a] = (uint64_t)uStack_34 << 0x20;
  param_1[0x2b] = uStack_30;
  param_1[0x2c] = uStack_28;
  param_1[0x2d] = uStack_20;
  param_1[0x2e] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x2f) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x17c) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x184) = CONCAT44(uStack_3c,0xf149f2ca);
  *(uint64_t *)((int64_t)param_1 + 0x18c) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x194) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x19c) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 0x1a4) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x1ac) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x1b4) = 0;
  param_1[0x37] = 0xf149f2caffffffff;
  param_1[0x38] = CONCAT44(uStack_3c,0xf149f2ca);
  param_1[0x39] = (uint64_t)uStack_34 << 0x20;
  param_1[0x3a] = uStack_30;
  param_1[0x3b] = uStack_28;
  param_1[0x3c] = uStack_20;
  param_1[0x3d] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x3e) = 0;
  *(uint64_t *)((int64_t)param_1 + 500) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x1fc) = CONCAT44(uStack_3c,0xf149f2ca);
  *(uint64_t *)((int64_t)param_1 + 0x204) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x20c) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x214) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 0x21c) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x224) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x22c) = 0;
  param_1[0x46] = 0xf149f2caffffffff;
  param_1[0x47] = CONCAT44(uStack_3c,0xf149f2ca);
  param_1[0x48] = (uint64_t)uStack_34 << 0x20;
  param_1[0x49] = uStack_30;
  param_1[0x4a] = uStack_28;
  param_1[0x4b] = uStack_20;
  param_1[0x4c] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x4d) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x26c) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x274) = CONCAT44(uStack_3c,0xf149f2ca);
  *(uint64_t *)((int64_t)param_1 + 0x27c) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x284) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x28c) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 0x294) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x29c) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x2a4) = 0;
  param_1[0x55] = 0xf149f2caffffffff;
  param_1[0x56] = CONCAT44(uStack_3c,0xf149f2ca);
  param_1[0x57] = (uint64_t)uStack_34 << 0x20;
  param_1[0x58] = uStack_30;
  param_1[0x59] = uStack_28;
  param_1[0x5a] = uStack_20;
  param_1[0x5b] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x5c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2e4) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x2ec) = CONCAT44(uStack_3c,0xf149f2ca);
  *(uint64_t *)((int64_t)param_1 + 0x2f4) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x2fc) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x304) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 0x30c) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x314) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x31c) = 0;
  param_1[100] = 0xf149f2caffffffff;
  param_1[0x65] = CONCAT44(uStack_3c,0xf149f2ca);
  param_1[0x66] = (uint64_t)uStack_34 << 0x20;
  param_1[0x67] = uStack_30;
  param_1[0x68] = uStack_28;
  param_1[0x69] = uStack_20;
  param_1[0x6a] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x6b) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x35c) = 0xf149f2caffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x364) = CONCAT44(uStack_3c,0xf149f2ca);
  *(uint64_t *)((int64_t)param_1 + 0x36c) = (uint64_t)uStack_34 << 0x20;
  *(uint64_t *)((int64_t)param_1 + 0x374) = uStack_30;
  *(uint64_t *)((int64_t)param_1 + 0x37c) = uStack_28;
  *(uint64_t *)((int64_t)param_1 + 900) = uStack_20;
  *(uint64_t *)((int64_t)param_1 + 0x38c) = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)((int64_t)param_1 + 0x394) = 0;
  param_1[0x73] = 0xf149f2caffffffff;
  param_1[0x74] = CONCAT44(uStack_3c,0xf149f2ca);
  param_1[0x75] = (uint64_t)uStack_34 << 0x20;
  param_1[0x76] = uStack_30;
  param_1[0x77] = uStack_28;
  param_1[0x78] = uStack_20;
  param_1[0x79] = CONCAT44(0x7149f2ca,uStack_18);
  *(int32_t *)(param_1 + 0x7a) = 0;
  return;
}






// 函数: void FUN_1805d8810(int64_t *param_1)
void FUN_1805d8810(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (int64_t *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 0x48;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0x120;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (int64_t *)param_1[5];
    while (plVar3 < (int64_t *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *param_1 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




