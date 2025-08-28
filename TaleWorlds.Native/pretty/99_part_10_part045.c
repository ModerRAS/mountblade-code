#include "TaleWorlds.Native.Split.h"

// 99_part_10_part045.c - 1 个函数

// 函数: void FUN_1806c2b8c(void)
void FUN_1806c2b8c(void)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  char cVar9;
  int iVar10;
  void *puVar11;
  int64_t *plVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t *unaff_RBP;
  int64_t *unaff_RDI;
  uint uVar17;
  uint64_t *unaff_R12;
  uint64_t in_stack_00000020;
  int32_t uVar18;
  void *in_stack_00000040;
  uint uStack0000000000000048;
  int32_t uStack000000000000004c;
  int64_t in_stack_00000050;
  int64_t in_stack_00000060;
  int64_t in_stack_00000068;
  int64_t in_stack_00000070;
  int64_t in_stack_00000078;
  
  uVar18 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  FUN_1806d6eb0();
  lVar16 = unaff_RDI[1];
  uVar2 = *(int32_t *)(*unaff_RDI + 0x10);
  uVar3 = *(uint *)(lVar16 + 0x14);
  uVar17 = *(uint *)(lVar16 + 0x10);
  *(int32_t *)(unaff_RBP + 0x2a) = uVar2;
  if (uVar17 < (uVar3 & 0x7fffffff)) {
    *(int32_t *)(*(int64_t *)(lVar16 + 8) + (uint64_t)uVar17 * 4) = uVar2;
    *(int *)(lVar16 + 0x10) = *(int *)(lVar16 + 0x10) + 1;
  }
  else {
    FUN_1806d5770(lVar16,unaff_RBP + 0x2a);
  }
  FUN_1806d56e0();
  lVar16 = *unaff_RDI;
  in_stack_00000040 = &ui_system_data_1520_ptr;
  in_stack_00000050 = CONCAT71(in_stack_00000050._1_7_,(char)unaff_RDI[9]);
  uVar3 = *(uint *)(lVar16 + 0x10);
  uStack0000000000000048 = uStack0000000000000048 & 0xffffff00;
  if (uVar3 < (*(uint *)(lVar16 + 0x14) & 0x7fffffff)) {
    lVar14 = *(int64_t *)(lVar16 + 8);
    puVar1 = (int32_t *)(lVar14 + (uint64_t)uVar3 * 0x18);
    *puVar1 = 0x8094c830;
    puVar1[1] = 1;
    puVar1[2] = uStack0000000000000048;
    puVar1[3] = uStack000000000000004c;
    *(int64_t *)(lVar14 + 0x10 + (uint64_t)uVar3 * 0x18) = in_stack_00000050;
    *(int *)(lVar16 + 0x10) = *(int *)(lVar16 + 0x10) + 1;
  }
  else {
    FUN_1806d5b60(lVar16,&stack0x00000040);
  }
  cVar9 = FUN_1806d56e0();
  if ((cVar9 == '\0') || (cVar9 = FUN_1806d5620(), cVar9 == '\0')) goto LAB_1806c326c;
  if ((char)unaff_RDI[9] == '\0') {
    puVar11 = &system_buffer_ptr;
  }
  else {
    puVar11 = (void *)(**(code **)(*(int64_t *)unaff_RDI[5] + 0x38))();
  }
  iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar11,&processed_var_9496_ptr);
  if (iVar10 == 0) {
    plVar12 = (int64_t *)(**(code **)(*(int64_t *)unaff_RDI[7] + 0x18))();
    puVar13 = (uint64_t *)
              (**(code **)(*plVar12 + 8))
                        (plVar12,8,&ui_system_data_1872_ptr,&ui_system_data_1776_ptr,CONCAT44(uVar18,0xad));
    *puVar13 = 0;
    __0PxSphereGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
    __0PxSphereGeometryGeneratedInfo_physx__QEAA_XZ(&stack0x00000040);
    lVar8 = unaff_RDI[3];
    lVar14 = *unaff_RDI;
    lVar4 = unaff_RDI[1];
    lVar5 = unaff_RDI[5];
    lVar6 = unaff_RDI[7];
    lVar7 = unaff_RDI[8];
    lVar16 = unaff_RDI[4];
    unaff_RBP[-4] = unaff_RDI[2];
    unaff_RBP[-3] = lVar8;
    unaff_RBP[-6] = lVar14;
    unaff_RBP[-5] = lVar4;
    unaff_RBP[-1] = lVar5;
    *(int8_t *)(unaff_RBP + 0x2a) = 0;
    unaff_RBP[5] = 0;
    unaff_RBP[6] = 0;
    *unaff_RBP = puVar13;
    unaff_RBP[-2] = lVar16;
    unaff_RBP[1] = lVar6;
    unaff_RBP[2] = lVar7;
    *(int8_t *)(unaff_RBP + 3) = 1;
    unaff_RBP[4] = unaff_RBP + 0x2a;
    FUN_1806c0f20(unaff_RBP + -6,&stack0x00000040,0);
LAB_1806c3258:
    cVar9 = *(char *)(unaff_RBP + 0x2a);
joined_r0x0001806c2e65:
    if (cVar9 == '\0') {
      *(int8_t *)unaff_RDI[10] = 1;
    }
  }
  else {
    iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar11,&processed_var_9520_ptr);
    if (iVar10 != 0) {
      iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar11,&processed_var_9448_ptr);
      if (iVar10 != 0) {
        iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar11,&processed_var_9432_ptr);
        if (iVar10 == 0) {
          plVar12 = (int64_t *)(**(code **)(*(int64_t *)unaff_RDI[7] + 0x18))();
          puVar13 = (uint64_t *)
                    (**(code **)(*plVar12 + 8))
                              (plVar12,0x10,&ui_system_data_1872_ptr,&ui_system_data_1776_ptr,CONCAT44(uVar18,0xad));
          *puVar13 = 3;
          puVar13[1] = 0;
          __0PxBoxGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
          __0PxBoxGeometryGeneratedInfo_physx__QEAA_XZ(&stack0x00000040);
          lVar8 = unaff_RDI[3];
          lVar14 = unaff_RDI[7];
          lVar4 = *unaff_RDI;
          lVar5 = unaff_RDI[1];
          lVar6 = unaff_RDI[5];
          lVar7 = unaff_RDI[8];
          lVar16 = unaff_RDI[4];
          unaff_RBP[-4] = unaff_RDI[2];
          unaff_RBP[-3] = lVar8;
          unaff_RBP[1] = lVar14;
          unaff_RBP[-6] = lVar4;
          unaff_RBP[-5] = lVar5;
          unaff_RBP[-1] = lVar6;
          *(int8_t *)(unaff_RBP + 0x2a) = 0;
          unaff_RBP[5] = 0;
          unaff_RBP[6] = 0;
          *unaff_RBP = puVar13;
          unaff_RBP[-2] = lVar16;
          unaff_RBP[2] = lVar7;
          *(int8_t *)(unaff_RBP + 3) = 1;
          unaff_RBP[4] = unaff_RBP + 0x2a;
          FUN_1806c0b60(unaff_RBP + -6,&stack0x00000040,0);
        }
        else {
          iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar11,&processed_var_9472_ptr);
          if (iVar10 == 0) {
            plVar12 = (int64_t *)(**(code **)(*(int64_t *)unaff_RDI[7] + 0x18))();
            puVar13 = (uint64_t *)
                      (**(code **)(*plVar12 + 8))
                                (plVar12,0x30,&ui_system_data_1872_ptr,&ui_system_data_1776_ptr,CONCAT44(uVar18,0xad));
            *(int32_t *)puVar13 = 4;
            *(int32_t *)((int64_t)puVar13 + 4) = 0x3f800000;
            *(int32_t *)(puVar13 + 1) = 0x3f800000;
            *(uint64_t *)((int64_t)puVar13 + 0xc) = 0x3f800000;
            *(uint64_t *)((int64_t)puVar13 + 0x14) = 0;
            *(int32_t *)((int64_t)puVar13 + 0x1c) = 0x3f800000;
            puVar13[4] = 0;
            *(int8_t *)(puVar13 + 5) = 1;
            *(int16_t *)((int64_t)puVar13 + 0x29) = 0;
            *(int8_t *)((int64_t)puVar13 + 0x2b) = 0;
            __0PxConvexMeshGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
            __0PxConvexMeshGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -6);
            in_stack_00000070 = unaff_RDI[2];
            in_stack_00000078 = unaff_RDI[3];
            in_stack_00000060 = *unaff_RDI;
            in_stack_00000068 = unaff_RDI[1];
            lVar14 = unaff_RDI[7];
            lVar4 = unaff_RDI[8];
            lVar16 = unaff_RDI[4];
            unaff_RBP[-0xf] = unaff_RDI[5];
            unaff_RBP[-0xd] = lVar14;
            *(int8_t *)(unaff_RBP + 0x2a) = 0;
            unaff_RBP[-9] = 0;
            unaff_RBP[-8] = 0;
            unaff_RBP[-0xe] = puVar13;
            unaff_RBP[-0x10] = lVar16;
            unaff_RBP[-0xc] = lVar4;
            *(int8_t *)(unaff_RBP + -0xb) = 1;
            unaff_RBP[-10] = unaff_RBP + 0x2a;
            FUN_1806c6f10(unaff_RBP + -6,&stack0x00000060,0);
          }
          else {
            iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar11,&processed_var_9536_ptr);
            if (iVar10 == 0) {
              plVar12 = (int64_t *)(**(code **)(*(int64_t *)unaff_RDI[7] + 0x18))();
              puVar13 = (uint64_t *)
                        (**(code **)(*plVar12 + 8))
                                  (plVar12,0x30,&ui_system_data_1872_ptr,&ui_system_data_1776_ptr,CONCAT44(uVar18,0xad))
              ;
              *(int32_t *)puVar13 = 5;
              *(int32_t *)((int64_t)puVar13 + 4) = 0x3f800000;
              *(int32_t *)(puVar13 + 1) = 0x3f800000;
              *(uint64_t *)((int64_t)puVar13 + 0xc) = 0x3f800000;
              *(uint64_t *)((int64_t)puVar13 + 0x14) = 0;
              *(int32_t *)((int64_t)puVar13 + 0x1c) = 0x3f800000;
              *(int8_t *)(puVar13 + 4) = 0;
              *(int16_t *)((int64_t)puVar13 + 0x21) = 0;
              *(int8_t *)((int64_t)puVar13 + 0x23) = 0;
              puVar13[5] = 0;
              __0PxTriangleMeshGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
              __0PxTriangleMeshGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -6);
              in_stack_00000070 = unaff_RDI[2];
              in_stack_00000078 = unaff_RDI[3];
              in_stack_00000060 = *unaff_RDI;
              in_stack_00000068 = unaff_RDI[1];
              lVar14 = unaff_RDI[7];
              lVar4 = unaff_RDI[8];
              lVar16 = unaff_RDI[4];
              unaff_RBP[-0xf] = unaff_RDI[5];
              unaff_RBP[-0xd] = lVar14;
              *(int8_t *)(unaff_RBP + 0x2a) = 0;
              unaff_RBP[-9] = 0;
              unaff_RBP[-8] = 0;
              unaff_RBP[-0xe] = puVar13;
              unaff_RBP[-0x10] = lVar16;
              unaff_RBP[-0xc] = lVar4;
              *(int8_t *)(unaff_RBP + -0xb) = 1;
              unaff_RBP[-10] = unaff_RBP + 0x2a;
              FUN_1806cbbd0(unaff_RBP + -6,&stack0x00000060,0);
            }
            else {
              iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar11,&processed_var_9560_ptr);
              if (iVar10 != 0) goto LAB_1806c326c;
              plVar12 = (int64_t *)(**(code **)(*(int64_t *)unaff_RDI[7] + 0x18))();
              puVar13 = (uint64_t *)
                        (**(code **)(*plVar12 + 8))
                                  (plVar12,0x20,&ui_system_data_1872_ptr,&ui_system_data_1776_ptr,CONCAT44(uVar18,0xad))
              ;
              puVar13[1] = 0;
              *(int32_t *)puVar13 = 6;
              *(int32_t *)(puVar13 + 2) = 0x3f800000;
              *(int32_t *)((int64_t)puVar13 + 0x14) = 0x3f800000;
              *(int32_t *)(puVar13 + 3) = 0x3f800000;
              *(int8_t *)((int64_t)puVar13 + 0x1c) = 0;
              *(int16_t *)((int64_t)puVar13 + 0x1d) = 0;
              *(int8_t *)((int64_t)puVar13 + 0x1f) = 0;
              __0PxHeightFieldGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
              __0PxHeightFieldGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -6);
              in_stack_00000070 = unaff_RDI[2];
              in_stack_00000078 = unaff_RDI[3];
              in_stack_00000060 = *unaff_RDI;
              in_stack_00000068 = unaff_RDI[1];
              lVar14 = unaff_RDI[7];
              lVar4 = unaff_RDI[8];
              lVar16 = unaff_RDI[4];
              unaff_RBP[-0xf] = unaff_RDI[5];
              unaff_RBP[-0xd] = lVar14;
              *(int8_t *)(unaff_RBP + 0x2a) = 0;
              unaff_RBP[-9] = 0;
              unaff_RBP[-8] = 0;
              unaff_RBP[-0xe] = puVar13;
              unaff_RBP[-0x10] = lVar16;
              unaff_RBP[-0xc] = lVar4;
              *(int8_t *)(unaff_RBP + -0xb) = 1;
              unaff_RBP[-10] = unaff_RBP + 0x2a;
              FUN_1806c89f0(unaff_RBP + -6,&stack0x00000060,0);
            }
          }
        }
        goto LAB_1806c3258;
      }
      plVar12 = (int64_t *)(**(code **)(*(int64_t *)unaff_RDI[7] + 0x18))();
      puVar13 = (uint64_t *)
                (**(code **)(*plVar12 + 8))
                          (plVar12,0xc,&ui_system_data_1872_ptr,&ui_system_data_1776_ptr,CONCAT44(uVar18,0xad));
      *(int32_t *)(puVar13 + 1) = 0;
      *puVar13 = 2;
      __0PxCapsuleGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -6);
      __0PxCapsuleGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
      in_stack_00000040 = (void *)unaff_RDI[2];
      uStack0000000000000048 = *(uint *)(unaff_RDI + 3);
      uStack000000000000004c = *(int32_t *)((int64_t)unaff_RDI + 0x1c);
      in_stack_00000050 = unaff_RDI[4];
      cVar9 = FUN_1806c36a0(&stack0x00000040,*unaff_RDI,unaff_RDI[1],unaff_RDI[5],puVar13);
      goto joined_r0x0001806c2e65;
    }
    plVar12 = (int64_t *)(**(code **)(*(int64_t *)unaff_RDI[7] + 0x18))();
    puVar13 = (uint64_t *)
              (**(code **)(*plVar12 + 8))
                        (plVar12,4,&ui_system_data_1872_ptr,&ui_system_data_1776_ptr,CONCAT44(uVar18,0xad));
    *(int32_t *)puVar13 = 1;
    __0PxPlaneGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0x2a);
    __0PxPlaneGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0x2d);
  }
  *unaff_R12 = puVar13;
LAB_1806c326c:
  FUN_1806d6eb0();
  lVar16 = unaff_RDI[1];
  if (*(int *)(lVar16 + 0x10) != 0) {
    uVar3 = *(uint *)(*(int64_t *)(lVar16 + 8) + (uint64_t)(*(int *)(lVar16 + 0x10) - 1) * 4);
    lVar14 = *unaff_RDI;
    if (uVar3 < *(uint *)(lVar14 + 0x10)) {
      do {
        if (*(int *)(lVar14 + 0x10) != 0) {
          uVar15 = (uint64_t)(*(int *)(lVar14 + 0x10) - 1);
          if ((*(char *)(*(int64_t *)(lVar14 + 8) + 8 + uVar15 * 0x18) != '\0') &&
             (*(char *)(*(int64_t *)(lVar14 + 8) + 0x10 + uVar15 * 0x18) != '\0')) {
            (**(code **)(*(int64_t *)unaff_RDI[5] + 0x48))();
            lVar14 = *unaff_RDI;
          }
          *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + -1;
          lVar14 = *unaff_RDI;
        }
        *(int8_t *)(unaff_RDI + 9) = 1;
        uVar17 = *(uint *)(lVar14 + 0x10);
        if ((uVar17 != 0) &&
           (*(char *)(*(int64_t *)(lVar14 + 8) + 0x10 + (uint64_t)(uVar17 - 1) * 0x18) == '\0')) {
          *(int8_t *)(unaff_RDI + 9) = 0;
          uVar17 = *(uint *)(lVar14 + 0x10);
        }
      } while (uVar3 < uVar17);
      lVar16 = unaff_RDI[1];
    }
    *(int *)(lVar16 + 0x10) = *(int *)(lVar16 + 0x10) + -1;
  }
  return;
}






