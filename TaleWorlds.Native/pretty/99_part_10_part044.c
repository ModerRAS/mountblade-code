#include "TaleWorlds.Native.Split.h"

// 99_part_10_part044.c - 2 个函数

// 函数: void FUN_1806c2a6d(void)
void FUN_1806c2a6d(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 *unaff_RBP;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar19;
  undefined8 *unaff_R12;
  longlong *unaff_R13;
  longlong *unaff_R15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar20;
  undefined *in_stack_00000020;
  undefined *in_stack_00000040;
  uint uStack0000000000000048;
  undefined4 uStack000000000000004c;
  longlong in_stack_00000050;
  longlong in_stack_00000060;
  longlong in_stack_00000068;
  longlong in_stack_00000070;
  longlong in_stack_00000078;
  
  cVar9 = FUN_1806d56e0();
  uVar20 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  if (cVar9 != '\0') {
    cVar9 = FUN_1806d5620();
    uVar20 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
    if (cVar9 != '\0') {
      lVar12 = unaff_RBP[0x2a];
      do {
        pcVar11 = (char *)(**(code **)(*unaff_R15 + 0x40))();
        unaff_RBP[0x2a] = pcVar11;
        uVar20 = extraout_XMM0_Da;
        if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) {
          lVar12 = _strtoui64(pcVar11,unaff_RBP + 0x2a,10);
          uVar20 = extraout_XMM0_Da_00;
        }
        if (lVar12 != 0) {
          lVar13 = (**(code **)(*unaff_R13 + 0x50))(uVar20,lVar12);
          uVar20 = extraout_XMM0_Da_01;
          if (lVar13 == 0) {
            uVar14 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
            in_stack_00000020 = &UNK_18094c870;
            uVar20 = _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                               (uVar14,4,&UNK_18094c930,0x6c,&UNK_18094c870);
          }
          unaff_RBP[0x2d] = lVar13;
          if (lVar13 == 0) {
            *(undefined1 *)unaff_RDI[10] = 1;
          }
          else if (*(uint *)(unaff_RSI + 1) < (*(uint *)((longlong)unaff_RSI + 0xc) & 0x7fffffff)) {
            *(longlong *)(*unaff_RSI + (ulonglong)*(uint *)(unaff_RSI + 1) * 8) = lVar13;
            *(int *)(unaff_RSI + 1) = (int)unaff_RSI[1] + 1;
          }
          else {
            FUN_1806d5870(uVar20,unaff_RBP + 0x2d);
          }
        }
        uVar20 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
        if ((char)unaff_RDI[9] == '\0') break;
        cVar9 = (**(code **)(*(longlong *)unaff_RDI[5] + 0x28))();
        uVar20 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
      } while (cVar9 != '\0');
      unaff_R12 = (undefined8 *)unaff_RBP[0x2b];
    }
  }
  FUN_1806d6eb0();
  lVar12 = unaff_RDI[1];
  uVar2 = *(undefined4 *)(*unaff_RDI + 0x10);
  uVar3 = *(uint *)(lVar12 + 0x14);
  uVar19 = *(uint *)(lVar12 + 0x10);
  *(undefined4 *)(unaff_RBP + 0x2a) = uVar2;
  if (uVar19 < (uVar3 & 0x7fffffff)) {
    *(undefined4 *)(*(longlong *)(lVar12 + 8) + (ulonglong)uVar19 * 4) = uVar2;
    *(int *)(lVar12 + 0x10) = *(int *)(lVar12 + 0x10) + 1;
  }
  else {
    FUN_1806d5770(lVar12,unaff_RBP + 0x2a);
  }
  FUN_1806d56e0();
  lVar12 = *unaff_RDI;
  in_stack_00000040 = &UNK_18094c830;
  in_stack_00000050 = CONCAT71(in_stack_00000050._1_7_,(char)unaff_RDI[9]);
  uVar3 = *(uint *)(lVar12 + 0x10);
  uStack0000000000000048 = uStack0000000000000048 & 0xffffff00;
  if (uVar3 < (*(uint *)(lVar12 + 0x14) & 0x7fffffff)) {
    lVar13 = *(longlong *)(lVar12 + 8);
    puVar1 = (undefined4 *)(lVar13 + (ulonglong)uVar3 * 0x18);
    *puVar1 = 0x8094c830;
    puVar1[1] = 1;
    puVar1[2] = uStack0000000000000048;
    puVar1[3] = uStack000000000000004c;
    *(longlong *)(lVar13 + 0x10 + (ulonglong)uVar3 * 0x18) = in_stack_00000050;
    *(int *)(lVar12 + 0x10) = *(int *)(lVar12 + 0x10) + 1;
  }
  else {
    FUN_1806d5b60(lVar12,&stack0x00000040);
  }
  cVar9 = FUN_1806d56e0();
  if ((cVar9 == '\0') || (cVar9 = FUN_1806d5620(), cVar9 == '\0')) goto LAB_1806c326c;
  if ((char)unaff_RDI[9] == '\0') {
    puVar15 = &DAT_18098bc73;
  }
  else {
    puVar15 = (undefined *)(**(code **)(*(longlong *)unaff_RDI[5] + 0x38))();
  }
  iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar15,&UNK_18094c048);
  if (iVar10 == 0) {
    plVar16 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
    puVar17 = (undefined8 *)
              (**(code **)(*plVar16 + 8))
                        (plVar16,8,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar20,0xad));
    *puVar17 = 0;
    __0PxSphereGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
    __0PxSphereGeometryGeneratedInfo_physx__QEAA_XZ(&stack0x00000040);
    lVar8 = unaff_RDI[3];
    lVar13 = *unaff_RDI;
    lVar4 = unaff_RDI[1];
    lVar5 = unaff_RDI[5];
    lVar6 = unaff_RDI[7];
    lVar7 = unaff_RDI[8];
    lVar12 = unaff_RDI[4];
    unaff_RBP[-4] = unaff_RDI[2];
    unaff_RBP[-3] = lVar8;
    unaff_RBP[-6] = lVar13;
    unaff_RBP[-5] = lVar4;
    unaff_RBP[-1] = lVar5;
    *(undefined1 *)(unaff_RBP + 0x2a) = 0;
    unaff_RBP[5] = 0;
    unaff_RBP[6] = 0;
    *unaff_RBP = puVar17;
    unaff_RBP[-2] = lVar12;
    unaff_RBP[1] = lVar6;
    unaff_RBP[2] = lVar7;
    *(undefined1 *)(unaff_RBP + 3) = 1;
    unaff_RBP[4] = unaff_RBP + 0x2a;
    FUN_1806c0f20(unaff_RBP + -6,&stack0x00000040,0);
LAB_1806c3258:
    cVar9 = *(char *)(unaff_RBP + 0x2a);
joined_r0x0001806c2e65:
    if (cVar9 == '\0') {
      *(undefined1 *)unaff_RDI[10] = 1;
    }
  }
  else {
    iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar15,&UNK_18094c060);
    if (iVar10 != 0) {
      iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar15,&UNK_18094c018);
      if (iVar10 != 0) {
        iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar15,&UNK_18094c008);
        if (iVar10 == 0) {
          plVar16 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
          puVar17 = (undefined8 *)
                    (**(code **)(*plVar16 + 8))
                              (plVar16,0x10,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar20,0xad));
          *puVar17 = 3;
          puVar17[1] = 0;
          __0PxBoxGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
          __0PxBoxGeometryGeneratedInfo_physx__QEAA_XZ(&stack0x00000040);
          lVar8 = unaff_RDI[3];
          lVar13 = unaff_RDI[7];
          lVar4 = *unaff_RDI;
          lVar5 = unaff_RDI[1];
          lVar6 = unaff_RDI[5];
          lVar7 = unaff_RDI[8];
          lVar12 = unaff_RDI[4];
          unaff_RBP[-4] = unaff_RDI[2];
          unaff_RBP[-3] = lVar8;
          unaff_RBP[1] = lVar13;
          unaff_RBP[-6] = lVar4;
          unaff_RBP[-5] = lVar5;
          unaff_RBP[-1] = lVar6;
          *(undefined1 *)(unaff_RBP + 0x2a) = 0;
          unaff_RBP[5] = 0;
          unaff_RBP[6] = 0;
          *unaff_RBP = puVar17;
          unaff_RBP[-2] = lVar12;
          unaff_RBP[2] = lVar7;
          *(undefined1 *)(unaff_RBP + 3) = 1;
          unaff_RBP[4] = unaff_RBP + 0x2a;
          FUN_1806c0b60(unaff_RBP + -6,&stack0x00000040,0);
        }
        else {
          iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar15,&UNK_18094c030);
          if (iVar10 == 0) {
            plVar16 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
            puVar17 = (undefined8 *)
                      (**(code **)(*plVar16 + 8))
                                (plVar16,0x30,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar20,0xad));
            *(undefined4 *)puVar17 = 4;
            *(undefined4 *)((longlong)puVar17 + 4) = 0x3f800000;
            *(undefined4 *)(puVar17 + 1) = 0x3f800000;
            *(undefined8 *)((longlong)puVar17 + 0xc) = 0x3f800000;
            *(undefined8 *)((longlong)puVar17 + 0x14) = 0;
            *(undefined4 *)((longlong)puVar17 + 0x1c) = 0x3f800000;
            puVar17[4] = 0;
            *(undefined1 *)(puVar17 + 5) = 1;
            *(undefined2 *)((longlong)puVar17 + 0x29) = 0;
            *(undefined1 *)((longlong)puVar17 + 0x2b) = 0;
            __0PxConvexMeshGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
            __0PxConvexMeshGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -6);
            in_stack_00000070 = unaff_RDI[2];
            in_stack_00000078 = unaff_RDI[3];
            in_stack_00000060 = *unaff_RDI;
            in_stack_00000068 = unaff_RDI[1];
            lVar13 = unaff_RDI[7];
            lVar4 = unaff_RDI[8];
            lVar12 = unaff_RDI[4];
            unaff_RBP[-0xf] = unaff_RDI[5];
            unaff_RBP[-0xd] = lVar13;
            *(undefined1 *)(unaff_RBP + 0x2a) = 0;
            unaff_RBP[-9] = 0;
            unaff_RBP[-8] = 0;
            unaff_RBP[-0xe] = puVar17;
            unaff_RBP[-0x10] = lVar12;
            unaff_RBP[-0xc] = lVar4;
            *(undefined1 *)(unaff_RBP + -0xb) = 1;
            unaff_RBP[-10] = unaff_RBP + 0x2a;
            FUN_1806c6f10(unaff_RBP + -6,&stack0x00000060,0);
          }
          else {
            iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar15,&UNK_18094c070);
            if (iVar10 == 0) {
              plVar16 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
              puVar17 = (undefined8 *)
                        (**(code **)(*plVar16 + 8))
                                  (plVar16,0x30,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar20,0xad))
              ;
              *(undefined4 *)puVar17 = 5;
              *(undefined4 *)((longlong)puVar17 + 4) = 0x3f800000;
              *(undefined4 *)(puVar17 + 1) = 0x3f800000;
              *(undefined8 *)((longlong)puVar17 + 0xc) = 0x3f800000;
              *(undefined8 *)((longlong)puVar17 + 0x14) = 0;
              *(undefined4 *)((longlong)puVar17 + 0x1c) = 0x3f800000;
              *(undefined1 *)(puVar17 + 4) = 0;
              *(undefined2 *)((longlong)puVar17 + 0x21) = 0;
              *(undefined1 *)((longlong)puVar17 + 0x23) = 0;
              puVar17[5] = 0;
              __0PxTriangleMeshGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
              __0PxTriangleMeshGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -6);
              in_stack_00000070 = unaff_RDI[2];
              in_stack_00000078 = unaff_RDI[3];
              in_stack_00000060 = *unaff_RDI;
              in_stack_00000068 = unaff_RDI[1];
              lVar13 = unaff_RDI[7];
              lVar4 = unaff_RDI[8];
              lVar12 = unaff_RDI[4];
              unaff_RBP[-0xf] = unaff_RDI[5];
              unaff_RBP[-0xd] = lVar13;
              *(undefined1 *)(unaff_RBP + 0x2a) = 0;
              unaff_RBP[-9] = 0;
              unaff_RBP[-8] = 0;
              unaff_RBP[-0xe] = puVar17;
              unaff_RBP[-0x10] = lVar12;
              unaff_RBP[-0xc] = lVar4;
              *(undefined1 *)(unaff_RBP + -0xb) = 1;
              unaff_RBP[-10] = unaff_RBP + 0x2a;
              FUN_1806cbbd0(unaff_RBP + -6,&stack0x00000060,0);
            }
            else {
              iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar15,&UNK_18094c088);
              if (iVar10 != 0) goto LAB_1806c326c;
              plVar16 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
              puVar17 = (undefined8 *)
                        (**(code **)(*plVar16 + 8))
                                  (plVar16,0x20,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar20,0xad))
              ;
              puVar17[1] = 0;
              *(undefined4 *)puVar17 = 6;
              *(undefined4 *)(puVar17 + 2) = 0x3f800000;
              *(undefined4 *)((longlong)puVar17 + 0x14) = 0x3f800000;
              *(undefined4 *)(puVar17 + 3) = 0x3f800000;
              *(undefined1 *)((longlong)puVar17 + 0x1c) = 0;
              *(undefined2 *)((longlong)puVar17 + 0x1d) = 0;
              *(undefined1 *)((longlong)puVar17 + 0x1f) = 0;
              __0PxHeightFieldGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
              __0PxHeightFieldGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -6);
              in_stack_00000070 = unaff_RDI[2];
              in_stack_00000078 = unaff_RDI[3];
              in_stack_00000060 = *unaff_RDI;
              in_stack_00000068 = unaff_RDI[1];
              lVar13 = unaff_RDI[7];
              lVar4 = unaff_RDI[8];
              lVar12 = unaff_RDI[4];
              unaff_RBP[-0xf] = unaff_RDI[5];
              unaff_RBP[-0xd] = lVar13;
              *(undefined1 *)(unaff_RBP + 0x2a) = 0;
              unaff_RBP[-9] = 0;
              unaff_RBP[-8] = 0;
              unaff_RBP[-0xe] = puVar17;
              unaff_RBP[-0x10] = lVar12;
              unaff_RBP[-0xc] = lVar4;
              *(undefined1 *)(unaff_RBP + -0xb) = 1;
              unaff_RBP[-10] = unaff_RBP + 0x2a;
              FUN_1806c89f0(unaff_RBP + -6,&stack0x00000060,0);
            }
          }
        }
        goto LAB_1806c3258;
      }
      plVar16 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
      puVar17 = (undefined8 *)
                (**(code **)(*plVar16 + 8))
                          (plVar16,0xc,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar20,0xad));
      *(undefined4 *)(puVar17 + 1) = 0;
      *puVar17 = 2;
      __0PxCapsuleGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -6);
      __0PxCapsuleGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
      in_stack_00000040 = (undefined *)unaff_RDI[2];
      uStack0000000000000048 = *(uint *)(unaff_RDI + 3);
      uStack000000000000004c = *(undefined4 *)((longlong)unaff_RDI + 0x1c);
      in_stack_00000050 = unaff_RDI[4];
      cVar9 = FUN_1806c36a0(&stack0x00000040,*unaff_RDI,unaff_RDI[1],unaff_RDI[5],puVar17);
      goto joined_r0x0001806c2e65;
    }
    plVar16 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
    puVar17 = (undefined8 *)
              (**(code **)(*plVar16 + 8))
                        (plVar16,4,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar20,0xad));
    *(undefined4 *)puVar17 = 1;
    __0PxPlaneGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0x2a);
    __0PxPlaneGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0x2d);
  }
  *unaff_R12 = puVar17;
LAB_1806c326c:
  FUN_1806d6eb0();
  lVar12 = unaff_RDI[1];
  if (*(int *)(lVar12 + 0x10) != 0) {
    uVar3 = *(uint *)(*(longlong *)(lVar12 + 8) + (ulonglong)(*(int *)(lVar12 + 0x10) - 1) * 4);
    lVar13 = *unaff_RDI;
    if (uVar3 < *(uint *)(lVar13 + 0x10)) {
      do {
        if (*(int *)(lVar13 + 0x10) != 0) {
          uVar18 = (ulonglong)(*(int *)(lVar13 + 0x10) - 1);
          if ((*(char *)(*(longlong *)(lVar13 + 8) + 8 + uVar18 * 0x18) != '\0') &&
             (*(char *)(*(longlong *)(lVar13 + 8) + 0x10 + uVar18 * 0x18) != '\0')) {
            (**(code **)(*(longlong *)unaff_RDI[5] + 0x48))();
            lVar13 = *unaff_RDI;
          }
          *(int *)(lVar13 + 0x10) = *(int *)(lVar13 + 0x10) + -1;
          lVar13 = *unaff_RDI;
        }
        *(undefined1 *)(unaff_RDI + 9) = 1;
        uVar19 = *(uint *)(lVar13 + 0x10);
        if ((uVar19 != 0) &&
           (*(char *)(*(longlong *)(lVar13 + 8) + 0x10 + (ulonglong)(uVar19 - 1) * 0x18) == '\0')) {
          *(undefined1 *)(unaff_RDI + 9) = 0;
          uVar19 = *(uint *)(lVar13 + 0x10);
        }
      } while (uVar3 < uVar19);
      lVar12 = unaff_RDI[1];
    }
    *(int *)(lVar12 + 0x10) = *(int *)(lVar12 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c2a92(void)
void FUN_1806c2a92(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  char *pcVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 *unaff_RBP;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar20;
  longlong *unaff_R13;
  longlong *unaff_R15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar21;
  undefined *in_stack_00000020;
  undefined *in_stack_00000040;
  uint uStack0000000000000048;
  undefined4 uStack000000000000004c;
  longlong in_stack_00000050;
  longlong in_stack_00000060;
  longlong in_stack_00000068;
  longlong in_stack_00000070;
  longlong in_stack_00000078;
  
  lVar13 = unaff_RBP[0x2a];
  do {
    pcVar12 = (char *)(**(code **)(*unaff_R15 + 0x40))();
    unaff_RBP[0x2a] = pcVar12;
    uVar21 = extraout_XMM0_Da;
    if ((pcVar12 != (char *)0x0) && (*pcVar12 != '\0')) {
      lVar13 = _strtoui64(pcVar12,unaff_RBP + 0x2a,10);
      uVar21 = extraout_XMM0_Da_00;
    }
    if (lVar13 != 0) {
      lVar14 = (**(code **)(*unaff_R13 + 0x50))(uVar21,lVar13);
      uVar21 = extraout_XMM0_Da_01;
      if (lVar14 == 0) {
        uVar15 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
        in_stack_00000020 = &UNK_18094c870;
        uVar21 = _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                           (uVar15,4,&UNK_18094c930,0x6c,&UNK_18094c870);
      }
      unaff_RBP[0x2d] = lVar14;
      if (lVar14 == 0) {
        *(undefined1 *)unaff_RDI[10] = 1;
      }
      else if (*(uint *)(unaff_RSI + 1) < (*(uint *)((longlong)unaff_RSI + 0xc) & 0x7fffffff)) {
        *(longlong *)(*unaff_RSI + (ulonglong)*(uint *)(unaff_RSI + 1) * 8) = lVar14;
        *(int *)(unaff_RSI + 1) = (int)unaff_RSI[1] + 1;
      }
      else {
        FUN_1806d5870(uVar21,unaff_RBP + 0x2d);
      }
    }
    uVar21 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
    if ((char)unaff_RDI[9] == '\0') break;
    cVar10 = (**(code **)(*(longlong *)unaff_RDI[5] + 0x28))();
    uVar21 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  } while (cVar10 != '\0');
  puVar4 = (undefined8 *)unaff_RBP[0x2b];
  FUN_1806d6eb0();
  lVar13 = unaff_RDI[1];
  uVar2 = *(undefined4 *)(*unaff_RDI + 0x10);
  uVar3 = *(uint *)(lVar13 + 0x14);
  uVar20 = *(uint *)(lVar13 + 0x10);
  *(undefined4 *)(unaff_RBP + 0x2a) = uVar2;
  if (uVar20 < (uVar3 & 0x7fffffff)) {
    *(undefined4 *)(*(longlong *)(lVar13 + 8) + (ulonglong)uVar20 * 4) = uVar2;
    *(int *)(lVar13 + 0x10) = *(int *)(lVar13 + 0x10) + 1;
  }
  else {
    FUN_1806d5770(lVar13,unaff_RBP + 0x2a);
  }
  FUN_1806d56e0();
  lVar13 = *unaff_RDI;
  in_stack_00000040 = &UNK_18094c830;
  in_stack_00000050 = CONCAT71(in_stack_00000050._1_7_,(char)unaff_RDI[9]);
  uVar3 = *(uint *)(lVar13 + 0x10);
  uStack0000000000000048 = uStack0000000000000048 & 0xffffff00;
  if (uVar3 < (*(uint *)(lVar13 + 0x14) & 0x7fffffff)) {
    lVar14 = *(longlong *)(lVar13 + 8);
    puVar1 = (undefined4 *)(lVar14 + (ulonglong)uVar3 * 0x18);
    *puVar1 = 0x8094c830;
    puVar1[1] = 1;
    puVar1[2] = uStack0000000000000048;
    puVar1[3] = uStack000000000000004c;
    *(longlong *)(lVar14 + 0x10 + (ulonglong)uVar3 * 0x18) = in_stack_00000050;
    *(int *)(lVar13 + 0x10) = *(int *)(lVar13 + 0x10) + 1;
  }
  else {
    FUN_1806d5b60(lVar13,&stack0x00000040);
  }
  cVar10 = FUN_1806d56e0();
  if ((cVar10 == '\0') || (cVar10 = FUN_1806d5620(), cVar10 == '\0')) goto LAB_1806c326c;
  if ((char)unaff_RDI[9] == '\0') {
    puVar16 = &DAT_18098bc73;
  }
  else {
    puVar16 = (undefined *)(**(code **)(*(longlong *)unaff_RDI[5] + 0x38))();
  }
  iVar11 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar16,&UNK_18094c048);
  if (iVar11 == 0) {
    plVar17 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
    puVar18 = (undefined8 *)
              (**(code **)(*plVar17 + 8))
                        (plVar17,8,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar21,0xad));
    *puVar18 = 0;
    __0PxSphereGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
    __0PxSphereGeometryGeneratedInfo_physx__QEAA_XZ(&stack0x00000040);
    lVar9 = unaff_RDI[3];
    lVar14 = *unaff_RDI;
    lVar5 = unaff_RDI[1];
    lVar6 = unaff_RDI[5];
    lVar7 = unaff_RDI[7];
    lVar8 = unaff_RDI[8];
    lVar13 = unaff_RDI[4];
    unaff_RBP[-4] = unaff_RDI[2];
    unaff_RBP[-3] = lVar9;
    unaff_RBP[-6] = lVar14;
    unaff_RBP[-5] = lVar5;
    unaff_RBP[-1] = lVar6;
    *(undefined1 *)(unaff_RBP + 0x2a) = 0;
    unaff_RBP[5] = 0;
    unaff_RBP[6] = 0;
    *unaff_RBP = puVar18;
    unaff_RBP[-2] = lVar13;
    unaff_RBP[1] = lVar7;
    unaff_RBP[2] = lVar8;
    *(undefined1 *)(unaff_RBP + 3) = 1;
    unaff_RBP[4] = unaff_RBP + 0x2a;
    FUN_1806c0f20(unaff_RBP + -6,&stack0x00000040,0);
LAB_1806c3258:
    cVar10 = *(char *)(unaff_RBP + 0x2a);
joined_r0x0001806c2e65:
    if (cVar10 == '\0') {
      *(undefined1 *)unaff_RDI[10] = 1;
    }
  }
  else {
    iVar11 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar16,&UNK_18094c060);
    if (iVar11 != 0) {
      iVar11 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar16,&UNK_18094c018);
      if (iVar11 != 0) {
        iVar11 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar16,&UNK_18094c008);
        if (iVar11 == 0) {
          plVar17 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
          puVar18 = (undefined8 *)
                    (**(code **)(*plVar17 + 8))
                              (plVar17,0x10,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar21,0xad));
          *puVar18 = 3;
          puVar18[1] = 0;
          __0PxBoxGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
          __0PxBoxGeometryGeneratedInfo_physx__QEAA_XZ(&stack0x00000040);
          lVar9 = unaff_RDI[3];
          lVar14 = unaff_RDI[7];
          lVar5 = *unaff_RDI;
          lVar6 = unaff_RDI[1];
          lVar7 = unaff_RDI[5];
          lVar8 = unaff_RDI[8];
          lVar13 = unaff_RDI[4];
          unaff_RBP[-4] = unaff_RDI[2];
          unaff_RBP[-3] = lVar9;
          unaff_RBP[1] = lVar14;
          unaff_RBP[-6] = lVar5;
          unaff_RBP[-5] = lVar6;
          unaff_RBP[-1] = lVar7;
          *(undefined1 *)(unaff_RBP + 0x2a) = 0;
          unaff_RBP[5] = 0;
          unaff_RBP[6] = 0;
          *unaff_RBP = puVar18;
          unaff_RBP[-2] = lVar13;
          unaff_RBP[2] = lVar8;
          *(undefined1 *)(unaff_RBP + 3) = 1;
          unaff_RBP[4] = unaff_RBP + 0x2a;
          FUN_1806c0b60(unaff_RBP + -6,&stack0x00000040,0);
        }
        else {
          iVar11 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar16,&UNK_18094c030);
          if (iVar11 == 0) {
            plVar17 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
            puVar18 = (undefined8 *)
                      (**(code **)(*plVar17 + 8))
                                (plVar17,0x30,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar21,0xad));
            *(undefined4 *)puVar18 = 4;
            *(undefined4 *)((longlong)puVar18 + 4) = 0x3f800000;
            *(undefined4 *)(puVar18 + 1) = 0x3f800000;
            *(undefined8 *)((longlong)puVar18 + 0xc) = 0x3f800000;
            *(undefined8 *)((longlong)puVar18 + 0x14) = 0;
            *(undefined4 *)((longlong)puVar18 + 0x1c) = 0x3f800000;
            puVar18[4] = 0;
            *(undefined1 *)(puVar18 + 5) = 1;
            *(undefined2 *)((longlong)puVar18 + 0x29) = 0;
            *(undefined1 *)((longlong)puVar18 + 0x2b) = 0;
            __0PxConvexMeshGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
            __0PxConvexMeshGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -6);
            in_stack_00000070 = unaff_RDI[2];
            in_stack_00000078 = unaff_RDI[3];
            in_stack_00000060 = *unaff_RDI;
            in_stack_00000068 = unaff_RDI[1];
            lVar14 = unaff_RDI[7];
            lVar5 = unaff_RDI[8];
            lVar13 = unaff_RDI[4];
            unaff_RBP[-0xf] = unaff_RDI[5];
            unaff_RBP[-0xd] = lVar14;
            *(undefined1 *)(unaff_RBP + 0x2a) = 0;
            unaff_RBP[-9] = 0;
            unaff_RBP[-8] = 0;
            unaff_RBP[-0xe] = puVar18;
            unaff_RBP[-0x10] = lVar13;
            unaff_RBP[-0xc] = lVar5;
            *(undefined1 *)(unaff_RBP + -0xb) = 1;
            unaff_RBP[-10] = unaff_RBP + 0x2a;
            FUN_1806c6f10(unaff_RBP + -6,&stack0x00000060,0);
          }
          else {
            iVar11 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar16,&UNK_18094c070);
            if (iVar11 == 0) {
              plVar17 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
              puVar18 = (undefined8 *)
                        (**(code **)(*plVar17 + 8))
                                  (plVar17,0x30,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar21,0xad))
              ;
              *(undefined4 *)puVar18 = 5;
              *(undefined4 *)((longlong)puVar18 + 4) = 0x3f800000;
              *(undefined4 *)(puVar18 + 1) = 0x3f800000;
              *(undefined8 *)((longlong)puVar18 + 0xc) = 0x3f800000;
              *(undefined8 *)((longlong)puVar18 + 0x14) = 0;
              *(undefined4 *)((longlong)puVar18 + 0x1c) = 0x3f800000;
              *(undefined1 *)(puVar18 + 4) = 0;
              *(undefined2 *)((longlong)puVar18 + 0x21) = 0;
              *(undefined1 *)((longlong)puVar18 + 0x23) = 0;
              puVar18[5] = 0;
              __0PxTriangleMeshGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
              __0PxTriangleMeshGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -6);
              in_stack_00000070 = unaff_RDI[2];
              in_stack_00000078 = unaff_RDI[3];
              in_stack_00000060 = *unaff_RDI;
              in_stack_00000068 = unaff_RDI[1];
              lVar14 = unaff_RDI[7];
              lVar5 = unaff_RDI[8];
              lVar13 = unaff_RDI[4];
              unaff_RBP[-0xf] = unaff_RDI[5];
              unaff_RBP[-0xd] = lVar14;
              *(undefined1 *)(unaff_RBP + 0x2a) = 0;
              unaff_RBP[-9] = 0;
              unaff_RBP[-8] = 0;
              unaff_RBP[-0xe] = puVar18;
              unaff_RBP[-0x10] = lVar13;
              unaff_RBP[-0xc] = lVar5;
              *(undefined1 *)(unaff_RBP + -0xb) = 1;
              unaff_RBP[-10] = unaff_RBP + 0x2a;
              FUN_1806cbbd0(unaff_RBP + -6,&stack0x00000060,0);
            }
            else {
              iVar11 = _stricmp_shdfnd_physx__YAHPEBD0_Z(puVar16,&UNK_18094c088);
              if (iVar11 != 0) goto LAB_1806c326c;
              plVar17 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
              puVar18 = (undefined8 *)
                        (**(code **)(*plVar17 + 8))
                                  (plVar17,0x20,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar21,0xad))
              ;
              puVar18[1] = 0;
              *(undefined4 *)puVar18 = 6;
              *(undefined4 *)(puVar18 + 2) = 0x3f800000;
              *(undefined4 *)((longlong)puVar18 + 0x14) = 0x3f800000;
              *(undefined4 *)(puVar18 + 3) = 0x3f800000;
              *(undefined1 *)((longlong)puVar18 + 0x1c) = 0;
              *(undefined2 *)((longlong)puVar18 + 0x1d) = 0;
              *(undefined1 *)((longlong)puVar18 + 0x1f) = 0;
              __0PxHeightFieldGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
              __0PxHeightFieldGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -6);
              in_stack_00000070 = unaff_RDI[2];
              in_stack_00000078 = unaff_RDI[3];
              in_stack_00000060 = *unaff_RDI;
              in_stack_00000068 = unaff_RDI[1];
              lVar14 = unaff_RDI[7];
              lVar5 = unaff_RDI[8];
              lVar13 = unaff_RDI[4];
              unaff_RBP[-0xf] = unaff_RDI[5];
              unaff_RBP[-0xd] = lVar14;
              *(undefined1 *)(unaff_RBP + 0x2a) = 0;
              unaff_RBP[-9] = 0;
              unaff_RBP[-8] = 0;
              unaff_RBP[-0xe] = puVar18;
              unaff_RBP[-0x10] = lVar13;
              unaff_RBP[-0xc] = lVar5;
              *(undefined1 *)(unaff_RBP + -0xb) = 1;
              unaff_RBP[-10] = unaff_RBP + 0x2a;
              FUN_1806c89f0(unaff_RBP + -6,&stack0x00000060,0);
            }
          }
        }
        goto LAB_1806c3258;
      }
      plVar17 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
      puVar18 = (undefined8 *)
                (**(code **)(*plVar17 + 8))
                          (plVar17,0xc,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar21,0xad));
      *(undefined4 *)(puVar18 + 1) = 0;
      *puVar18 = 2;
      __0PxCapsuleGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -6);
      __0PxCapsuleGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0xe);
      in_stack_00000040 = (undefined *)unaff_RDI[2];
      uStack0000000000000048 = *(uint *)(unaff_RDI + 3);
      uStack000000000000004c = *(undefined4 *)((longlong)unaff_RDI + 0x1c);
      in_stack_00000050 = unaff_RDI[4];
      cVar10 = FUN_1806c36a0(&stack0x00000040,*unaff_RDI,unaff_RDI[1],unaff_RDI[5],puVar18);
      goto joined_r0x0001806c2e65;
    }
    plVar17 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[7] + 0x18))();
    puVar18 = (undefined8 *)
              (**(code **)(*plVar17 + 8))
                        (plVar17,4,&UNK_18094c990,&UNK_18094c930,CONCAT44(uVar21,0xad));
    *(undefined4 *)puVar18 = 1;
    __0PxPlaneGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0x2a);
    __0PxPlaneGeometryGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0x2d);
  }
  *puVar4 = puVar18;
LAB_1806c326c:
  FUN_1806d6eb0();
  lVar13 = unaff_RDI[1];
  if (*(int *)(lVar13 + 0x10) != 0) {
    uVar3 = *(uint *)(*(longlong *)(lVar13 + 8) + (ulonglong)(*(int *)(lVar13 + 0x10) - 1) * 4);
    lVar14 = *unaff_RDI;
    if (uVar3 < *(uint *)(lVar14 + 0x10)) {
      do {
        if (*(int *)(lVar14 + 0x10) != 0) {
          uVar19 = (ulonglong)(*(int *)(lVar14 + 0x10) - 1);
          if ((*(char *)(*(longlong *)(lVar14 + 8) + 8 + uVar19 * 0x18) != '\0') &&
             (*(char *)(*(longlong *)(lVar14 + 8) + 0x10 + uVar19 * 0x18) != '\0')) {
            (**(code **)(*(longlong *)unaff_RDI[5] + 0x48))();
            lVar14 = *unaff_RDI;
          }
          *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + -1;
          lVar14 = *unaff_RDI;
        }
        *(undefined1 *)(unaff_RDI + 9) = 1;
        uVar20 = *(uint *)(lVar14 + 0x10);
        if ((uVar20 != 0) &&
           (*(char *)(*(longlong *)(lVar14 + 8) + 0x10 + (ulonglong)(uVar20 - 1) * 0x18) == '\0')) {
          *(undefined1 *)(unaff_RDI + 9) = 0;
          uVar20 = *(uint *)(lVar14 + 0x10);
        }
      } while (uVar3 < uVar20);
      lVar13 = unaff_RDI[1];
    }
    *(int *)(lVar13 + 0x10) = *(int *)(lVar13 + 0x10) + -1;
  }
  return;
}






