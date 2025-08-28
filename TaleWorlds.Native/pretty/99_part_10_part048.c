#include "TaleWorlds.Native.Split.h"

// 99_part_10_part048.c - 5 个函数

// 函数: void FUN_1806c48ac(uint param_1,uint64_t param_2,longlong param_3)
void FUN_1806c48ac(uint param_1,uint64_t param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint64_t uVar3;
  char cVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  longlong in_RAX;
  ulonglong uVar8;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong lVar9;
  uint uVar10;
  longlong unaff_R12;
  longlong *unaff_R14;
  longlong *unaff_R15;
  int32_t extraout_XMM0_Da;
  longlong in_stack_00000040;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  longlong in_stack_00000060;
  uint64_t *in_stack_00000070;
  longlong in_stack_00000078;
  
code_r0x0001806c48ac:
  lVar5 = unaff_R12;
  if (param_1 != 0xffffffff) {
    lVar5 = in_RAX + param_3;
  }
  do {
    do {
      lVar5 = *(longlong *)(lVar5 + 8);
      do {
        lVar9 = *unaff_R15;
        *(longlong *)(unaff_RBP + -0x30) = unaff_R12;
        *(int32_t *)(unaff_RBP + -0x40) = 0;
        *(int32_t *)(unaff_RBP + -0x3c) = 0;
        *(int32_t *)(unaff_RBP + -0x38) = 0;
        *(int32_t *)(unaff_RBP + -0x34) = 0x3f800000;
        *(int *)(unaff_RBP + -0x28) = (int)unaff_R12;
        uVar6 = (**(code **)(lVar9 + 0x88))(0,lVar5,unaff_RBP + -0x40);
        plVar2 = (longlong *)unaff_RBX[5];
        *(longlong *)(unaff_RBP + 0x3a8) = unaff_R12;
        (**(code **)(*plVar2 + 8))(plVar2,&UNK_180a06958,unaff_RBP + 0x3a8);
        uVar3 = *(uint64_t *)(unaff_RBP + 0x3a8);
        *(uint64_t *)(unaff_RBP + -0x48) = uVar3;
        puVar7 = (uint64_t *)FUN_1806d3700(&stack0x00000070,unaff_RBP + -0x48,unaff_RBP + 0x390);
        if (*(char *)(unaff_RBP + 0x390) == (char)unaff_R12) {
          *puVar7 = uVar3;
          puVar7[1] = uVar6;
        }
        __0PxArticulationLinkGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -0x20);
        uStack0000000000000050 = (int32_t)unaff_RBX[2];
        uStack0000000000000054 = *(int32_t *)((longlong)unaff_RBX + 0x14);
        uStack0000000000000058 = (int32_t)unaff_RBX[3];
        uStack000000000000005c = *(int32_t *)((longlong)unaff_RBX + 0x1c);
        in_stack_00000060 = unaff_RBX[4];
        cVar4 = FUN_1806c32a0(&stack0x00000050,*unaff_RBX,unaff_RBX[1],unaff_RBX[5],uVar6);
        if (cVar4 == '\0') {
          *(int8_t *)unaff_RBX[10] = 1;
        }
        (**(code **)(*unaff_R14 + 8))(extraout_XMM0_Da,uVar6,*(uint64_t *)(unaff_RBP + 0x3a8));
        if (((char)unaff_RBX[9] == '\0') ||
           (cVar4 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x28))(), cVar4 == '\0')) {
          lVar5 = unaff_RBX[1];
          if (*(int *)(lVar5 + 0x10) != 0) {
            lVar9 = *unaff_RBX;
            uVar1 = *(uint *)(*(longlong *)(lVar5 + 8) + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 4
                             );
            if (uVar1 < *(uint *)(lVar9 + 0x10)) {
              do {
                if (*(int *)(lVar9 + 0x10) != 0) {
                  uVar8 = (ulonglong)(*(int *)(lVar9 + 0x10) - 1);
                  if ((*(char *)(*(longlong *)(lVar9 + 8) + 8 + uVar8 * 0x18) != '\0') &&
                     (*(char *)(*(longlong *)(lVar9 + 8) + 0x10 + uVar8 * 0x18) != '\0')) {
                    (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
                    lVar9 = *unaff_RBX;
                  }
                  *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
                  lVar9 = *unaff_RBX;
                }
                *(int8_t *)(unaff_RBX + 9) = 1;
                uVar10 = *(uint *)(lVar9 + 0x10);
                if ((uVar10 != 0) &&
                   (*(char *)(*(longlong *)(lVar9 + 8) + 0x10 + (ulonglong)(uVar10 - 1) * 0x18) ==
                    '\0')) {
                  *(int8_t *)(unaff_RBX + 9) = 0;
                  uVar10 = *(uint *)(lVar9 + 0x10);
                }
              } while (uVar1 < uVar10);
              lVar5 = unaff_RBX[1];
            }
            *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
          }
          if (in_stack_00000078 != 0) {
            (**(code **)(*(longlong *)*in_stack_00000070 + 0x10))();
          }
          return;
        }
        in_stack_00000040 = unaff_R12;
        cVar4 = (**(code **)(*(longlong *)unaff_RBX[5] + 8))
                          ((longlong *)unaff_RBX[5],&UNK_18094c0b0,&stack0x00000040);
        lVar5 = unaff_R12;
      } while (cVar4 == '\0');
    } while ((*(int *)(unaff_RBP + -0x54) == (int)unaff_R12) ||
            (uVar8 = ~(in_stack_00000040 << 0x20) + in_stack_00000040, uVar8 = uVar8 ^ uVar8 >> 0x16
            , uVar8 = uVar8 + ~(uVar8 << 0xd), uVar8 = (uVar8 >> 8 ^ uVar8) * 9,
            uVar8 = uVar8 ^ uVar8 >> 0xf, uVar8 = uVar8 + ~(uVar8 << 0x1b),
            param_1 = *(uint *)(*(longlong *)(unaff_RBP + -0x70) +
                               ((uVar8 >> 0x1f ^ uVar8) &
                               (ulonglong)(*(int *)(unaff_RBP + -100) - 1)) * 4),
            param_1 == 0xffffffff));
    param_3 = *(longlong *)(unaff_RBP + -0x80);
    do {
      in_RAX = (ulonglong)param_1 * 0x10;
      if (*(longlong *)(in_RAX + param_3) == in_stack_00000040) goto code_r0x0001806c48ac;
      param_1 = *(uint *)(*(longlong *)(unaff_RBP + -0x78) + (ulonglong)param_1 * 4);
    } while (param_1 != 0xffffffff);
  } while( true );
}



uint64_t FUN_1806c48c0(longlong *param_1,uint64_t param_2)

{
  char cVar1;
  int iVar2;
  void *puVar3;
  char *apcStackX_8 [4];
  
  apcStackX_8[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar2 = *(int *)(*param_1 + 0x10);
    if (iVar2 == 0) {
      puVar3 = &UNK_18094c9c0;
    }
    else {
      puVar3 = *(void **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar2 - 1) * 0x18);
    }
    cVar1 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],puVar3,apcStackX_8)
    ;
    if (((cVar1 != '\0') && (apcStackX_8[0] != (char *)0x0)) && (*apcStackX_8[0] != '\0')) {
      iVar2 = _stricmp_shdfnd_physx__YAHPEBD0_Z(apcStackX_8[0],&UNK_180a06418);
      *(bool *)param_2 = iVar2 == 0;
      return 1;
    }
  }
  return 0;
}



uint64_t FUN_1806c4940(longlong *param_1,longlong *param_2,uint64_t param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  char *pcStackX_8;
  char *pcStackX_20;
  
  lVar2 = 0;
  *param_4 = 0;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_3,&pcStackX_8);
  if (cVar1 != '\0') {
    pcStackX_20 = pcStackX_8;
    if ((pcStackX_8 != (char *)0x0) && (*pcStackX_8 != '\0')) {
      lVar2 = _strtoui64(pcStackX_8,&pcStackX_20,10);
      if (lVar2 != 0) {
        lVar3 = (**(code **)(*param_2 + 0x50))(param_2,lVar2);
        if (lVar3 == 0) {
          uVar4 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
          _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                    (uVar4,4,&UNK_18094c930,0x6c,&UNK_18094c870,lVar2);
        }
        *param_4 = lVar3;
      }
    }
  }
  if ((*param_4 == 0) && (lVar2 != 0)) {
    return 0;
  }
  return 1;
}






// 函数: void FUN_1806c4a10(longlong *param_1,longlong *param_2)
void FUN_1806c4a10(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  void *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint64_t uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uStackX_8;
  int8_t auStack_298 [8];
  longlong *plStack_290;
  longlong lStack_288;
  ulonglong uStack_280;
  char *pcStack_278;
  longlong lStack_270;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong lStack_230;
  int8_t uStack_228;
  ulonglong *puStack_220;
  uint64_t uStack_218;
  uint64_t uStack_210;
  int8_t auStack_208 [472];
  uint64_t uStack_30;
  
  lVar8 = param_1[1];
  plVar11 = (longlong *)param_1[5];
  plVar2 = (longlong *)param_1[8];
  uStackX_8 = CONCAT44(uStackX_8._4_4_,*(int32_t *)(*param_1 + 0x10));
  plStack_290 = plVar11;
  if (*(uint *)(lVar8 + 0x10) < (*(uint *)(lVar8 + 0x14) & 0x7fffffff)) {
    *(int32_t *)(*(longlong *)(lVar8 + 8) + (ulonglong)*(uint *)(lVar8 + 0x10) * 4) =
         *(int32_t *)(*param_1 + 0x10);
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
  }
  else {
    FUN_1806d5770(lVar8,&uStackX_8);
  }
  cVar4 = FUN_1806d56e0(param_1);
  if (cVar4 != '\0') {
    cVar4 = FUN_1806d5620(param_1);
    uVar7 = uStackX_8;
    while (cVar4 != '\0') {
      if ((char)param_1[9] == '\0') {
        puVar6 = &system_buffer_ptr;
      }
      else {
        puVar6 = (void *)(**(code **)(*(longlong *)param_1[5] + 0x38))();
      }
      iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar6,&UNK_18094c840);
      if (iVar5 == 0) {
        pcStack_278 = (char *)(**(code **)(*plVar11 + 0x40))(plVar11);
        if ((pcStack_278 != (char *)0x0) && (*pcStack_278 != '\0')) {
          uVar7 = _strtoui64(pcStack_278,&pcStack_278,10);
        }
        if (uVar7 != 0) {
          lVar8 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar7);
          if (lVar8 == 0) {
            uVar9 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
            _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                      (uVar9,4,&UNK_18094c930,0x6c,&UNK_18094c870,uVar7);
            *(int8_t *)param_1[10] = 1;
            plVar11 = plStack_290;
          }
          else {
            (**(code **)(*param_2 + 0xa0))(param_2,lVar8);
            plVar11 = plStack_290;
          }
        }
      }
      else {
        lStack_288 = 0;
        uStack_280 = 0;
        uStackX_8 = 0;
        FUN_1806c2950(param_1,&uStackX_8,&lStack_288);
        lVar8 = lStack_288;
        uVar3 = uStackX_8;
        if ((int)uStack_280 != 0) {
          auStack_298[0] = 0xb;
          lVar10 = (**(code **)(*(longlong *)param_1[2] + 0xb8))
                             ((longlong *)param_1[2],uStackX_8,lStack_288,uStack_280 & 0xffff,1,
                              auStack_298);
          if (lVar10 != 0) {
            __0PxShapeGeneratedInfo_physx__QEAA_XZ(auStack_208);
            lStack_260 = param_1[2];
            lStack_258 = param_1[3];
            lStack_270 = *param_1;
            puStack_220 = &uStackX_8;
            lStack_268 = param_1[1];
            lStack_248 = param_1[5];
            lStack_238 = param_1[7];
            lStack_230 = param_1[8];
            lStack_250 = param_1[4];
            uStackX_8 = uStackX_8 & 0xffffffffffffff00;
            uStack_218 = 0;
            uStack_210 = 0;
            uStack_228 = 1;
            lStack_240 = lVar10;
            FUN_1806cb3f0(auStack_208,&lStack_270,0);
            if ((char)uStackX_8 != '\0') {
              *(int8_t *)param_1[10] = 1;
            }
            (**(code **)(*param_2 + 0xa0))(param_2,lVar10);
            (**(code **)(*plVar2 + 8))(plVar2,lVar10,0);
          }
        }
        plVar11 = (longlong *)(**(code **)(*(longlong *)param_1[7] + 0x18))();
        (**(code **)(*plVar11 + 0x10))(plVar11,uVar3);
        plVar11 = plStack_290;
        if ((((uStack_280 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_280)) &&
           (lVar8 != 0)) {
          plVar11 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
          (**(code **)(*plVar11 + 0x10))(plVar11,lVar8);
          plVar11 = plStack_290;
        }
      }
      if ((char)param_1[9] == '\0') break;
      cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
  }
  lVar8 = param_1[1];
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar1 = *(uint *)(*(longlong *)(lVar8 + 8) + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 4);
    lVar10 = *param_1;
    if (uVar1 < *(uint *)(lVar10 + 0x10)) {
      do {
        if (*(int *)(lVar10 + 0x10) != 0) {
          uVar7 = (ulonglong)(*(int *)(lVar10 + 0x10) - 1);
          if ((*(char *)(*(longlong *)(lVar10 + 8) + 8 + uVar7 * 0x18) != '\0') &&
             (*(char *)(*(longlong *)(lVar10 + 8) + 0x10 + uVar7 * 0x18) != '\0')) {
            uStack_30 = 0x1806d6f0d;
            (**(code **)(*(longlong *)param_1[5] + 0x48))();
            lVar10 = *param_1;
          }
          *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
          lVar10 = *param_1;
        }
        *(int8_t *)(param_1 + 9) = 1;
        uVar12 = *(uint *)(lVar10 + 0x10);
        if ((uVar12 != 0) &&
           (*(char *)(*(longlong *)(lVar10 + 8) + 0x10 + (ulonglong)(uVar12 - 1) * 0x18) == '\0')) {
          *(int8_t *)(param_1 + 9) = 0;
          uVar12 = *(uint *)(lVar10 + 0x10);
        }
      } while (uVar1 < uVar12);
      lVar8 = param_1[1];
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c4a99(void)
void FUN_1806c4a99(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint64_t uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  uint uVar13;
  longlong *unaff_R12;
  longlong *unaff_R13;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t uVar14;
  longlong *in_stack_00000038;
  longlong in_stack_00000040;
  int iStack0000000000000048;
  char *in_stack_00000050;
  longlong in_stack_00000058;
  longlong in_stack_00000060;
  longlong in_stack_00000068;
  longlong in_stack_00000070;
  longlong in_stack_00000078;
  
  lVar7 = *(longlong *)(unaff_RBP + 0x1d0);
  do {
    if ((char)unaff_RBX[9] == '\0') {
      puVar6 = &system_buffer_ptr;
    }
    else {
      puVar6 = (void *)(**(code **)(*(longlong *)unaff_RBX[5] + 0x38))();
    }
    iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar6,&UNK_18094c840);
    if (iVar5 == 0) {
      in_stack_00000050 = (char *)(**(code **)(*unaff_RDI + 0x40))(unaff_RDI);
      uVar14 = extraout_XMM0_Da_00;
      if ((in_stack_00000050 != (char *)0x0) && (*in_stack_00000050 != '\0')) {
        lVar7 = _strtoui64(in_stack_00000050,&stack0x00000050,10);
        uVar14 = extraout_XMM0_Da_01;
      }
      if (lVar7 != 0) {
        lVar8 = (**(code **)(*unaff_R13 + 0x50))(uVar14,lVar7);
        if (lVar8 == 0) {
          uVar9 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
          _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                    (uVar9,4,&UNK_18094c930,0x6c,&UNK_18094c870);
          *(int8_t *)unaff_RBX[10] = 1;
          unaff_RDI = in_stack_00000038;
        }
        else {
          (**(code **)(*unaff_R12 + 0xa0))(extraout_XMM0_Da_02,lVar8);
          unaff_RDI = in_stack_00000038;
        }
      }
    }
    else {
      in_stack_00000040 = 0;
      _iStack0000000000000048 = 0;
      *(uint64_t *)(unaff_RBP + 0x1d0) = 0;
      FUN_1806c2950(extraout_XMM0_Da,unaff_RBP + 0x1d0,&stack0x00000040);
      lVar8 = in_stack_00000040;
      uVar9 = *(uint64_t *)(unaff_RBP + 0x1d0);
      if (iStack0000000000000048 != 0) {
        lVar10 = (**(code **)(*(longlong *)unaff_RBX[2] + 0xb8))
                           ((longlong *)unaff_RBX[2],uVar9,in_stack_00000040,
                            _iStack0000000000000048 & 0xffff,1);
        if (lVar10 != 0) {
          __0PxShapeGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -0x40);
          in_stack_00000068 = unaff_RBX[2];
          in_stack_00000070 = unaff_RBX[3];
          in_stack_00000058 = *unaff_RBX;
          in_stack_00000060 = unaff_RBX[1];
          lVar2 = unaff_RBX[7];
          lVar3 = unaff_RBX[8];
          in_stack_00000078 = unaff_RBX[4];
          *(longlong *)(unaff_RBP + -0x80) = unaff_RBX[5];
          *(int8_t *)(unaff_RBP + 0x1d0) = 0;
          *(uint64_t *)(unaff_RBP + -0x50) = 0;
          *(uint64_t *)(unaff_RBP + -0x48) = 0;
          *(longlong *)(unaff_RBP + -0x78) = lVar10;
          *(longlong *)(unaff_RBP + -0x70) = lVar2;
          *(longlong *)(unaff_RBP + -0x68) = lVar3;
          *(int8_t *)(unaff_RBP + -0x60) = 1;
          *(longlong *)(unaff_RBP + -0x58) = unaff_RBP + 0x1d0;
          uVar14 = FUN_1806cb3f0(unaff_RBP + -0x40,&stack0x00000058,0);
          if (*(char *)(unaff_RBP + 0x1d0) != '\0') {
            *(int8_t *)unaff_RBX[10] = 1;
          }
          uVar14 = (**(code **)(*unaff_R12 + 0xa0))(uVar14,lVar10);
          (**(code **)(*unaff_R13 + 8))(uVar14,lVar10,0);
        }
      }
      plVar11 = (longlong *)(**(code **)(*(longlong *)unaff_RBX[7] + 0x18))();
      (**(code **)(*plVar11 + 0x10))(plVar11,uVar9);
      unaff_RDI = in_stack_00000038;
      if ((((_iStack0000000000000048 & 0x7fffffff00000000) != 0) &&
          (-1 < (longlong)_iStack0000000000000048)) && (lVar8 != 0)) {
        plVar11 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar11 + 0x10))(plVar11,lVar8);
      }
    }
  } while (((char)unaff_RBX[9] != '\0') &&
          (cVar4 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x28))(), cVar4 != '\0'));
  lVar7 = unaff_RBX[1];
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar1 = *(uint *)(*(longlong *)(lVar7 + 8) + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 4);
    lVar8 = *unaff_RBX;
    if (uVar1 < *(uint *)(lVar8 + 0x10)) {
      do {
        if (*(int *)(lVar8 + 0x10) != 0) {
          uVar12 = (ulonglong)(*(int *)(lVar8 + 0x10) - 1);
          if ((*(char *)(*(longlong *)(lVar8 + 8) + 8 + uVar12 * 0x18) != '\0') &&
             (*(char *)(*(longlong *)(lVar8 + 8) + 0x10 + uVar12 * 0x18) != '\0')) {
            (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
            lVar8 = *unaff_RBX;
          }
          *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
          lVar8 = *unaff_RBX;
        }
        *(int8_t *)(unaff_RBX + 9) = 1;
        uVar13 = *(uint *)(lVar8 + 0x10);
        if ((uVar13 != 0) &&
           (*(char *)(*(longlong *)(lVar8 + 8) + 0x10 + (ulonglong)(uVar13 - 1) * 0x18) == '\0')) {
          *(int8_t *)(unaff_RBX + 9) = 0;
          uVar13 = *(uint *)(lVar8 + 0x10);
        }
      } while (uVar1 < uVar13);
      lVar7 = unaff_RBX[1];
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c4d2e(void)
void FUN_1806c4d2e(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *unaff_RBX;
  uint uVar5;
  
  lVar4 = unaff_RBX[1];
  if (*(int *)(lVar4 + 0x10) != 0) {
    uVar1 = *(uint *)(*(longlong *)(lVar4 + 8) + (ulonglong)(*(int *)(lVar4 + 0x10) - 1) * 4);
    lVar2 = *unaff_RBX;
    if (uVar1 < *(uint *)(lVar2 + 0x10)) {
      do {
        if (*(int *)(lVar2 + 0x10) != 0) {
          uVar3 = (ulonglong)(*(int *)(lVar2 + 0x10) - 1);
          if ((*(char *)(*(longlong *)(lVar2 + 8) + 8 + uVar3 * 0x18) != '\0') &&
             (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
            (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
            lVar2 = *unaff_RBX;
          }
          *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
          lVar2 = *unaff_RBX;
        }
        *(int8_t *)(unaff_RBX + 9) = 1;
        uVar5 = *(uint *)(lVar2 + 0x10);
        if ((uVar5 != 0) &&
           (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 + (ulonglong)(uVar5 - 1) * 0x18) == '\0')) {
          *(int8_t *)(unaff_RBX + 9) = 0;
          uVar5 = *(uint *)(lVar2 + 0x10);
        }
      } while (uVar1 < uVar5);
      lVar4 = unaff_RBX[1];
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c4d50(char *param_1,int32_t *param_2)
void FUN_1806c4d50(char *param_1,int32_t *param_2)

{
  int32_t uVar1;
  char *apcStackX_8 [4];
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    apcStackX_8[0] = param_1;
    uVar1 = FUN_1806d80c0(param_1,apcStackX_8);
    *param_2 = uVar1;
    uVar1 = FUN_1806d80c0(apcStackX_8[0],apcStackX_8);
    param_2[1] = uVar1;
    uVar1 = FUN_1806d80c0(apcStackX_8[0],apcStackX_8);
    param_2[2] = uVar1;
    uVar1 = FUN_1806d80c0(apcStackX_8[0],apcStackX_8);
    param_2[3] = uVar1;
    uVar1 = FUN_1806d80c0(apcStackX_8[0],apcStackX_8);
    param_2[4] = uVar1;
    uVar1 = FUN_1806d80c0(apcStackX_8[0],apcStackX_8);
    param_2[5] = uVar1;
    uVar1 = FUN_1806d80c0(apcStackX_8[0],apcStackX_8);
    param_2[6] = uVar1;
  }
  return;
}






