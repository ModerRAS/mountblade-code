#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_05_part032.c - 19 个函数
// 函数: void DataStructure_ebcf1(void)
void DataStructure_ebcf1(void)
{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t lVar4;
  int64_t lVar5;
  char unaff_R12B;
  lVar5 = 0;
  iVar3 = (int)(in_RAX >> 3);
  lVar4 = lVar5;
  if (0 < iVar3) {
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(unaff_RBX + 0x1e0) + lVar4 * 8);
      (**(code **)(*plVar1 + 0x1b8))(plVar1);
      cVar2 = (**(code **)(*plVar1 + 0x138))(plVar1);
      if (cVar2 != '\0') {
        GenericFunction_1801985e0(*(uint64_t *)(unaff_RBX + 0x20),plVar1,0);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if (((*(int64_t *)(unaff_RBX + 0x260) != 0) &&
      (DataStructure_fa820(), (*(byte *)(*(int64_t *)(unaff_RBX + 0x260) + 0xa8) >> 2 & 1) != 0)) &&
     (*(short *)(unaff_RBX + 0x2b0) = *(short *)(unaff_RBX + 0x2b0) + 1,
     *(int64_t *)(unaff_RBX + 0x168) != 0)) {
    Function_bcb0dca9();
  }
  if ((((unaff_R12B != '\0') &&
       (iVar3 = (int)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3),
       0 < iVar3)) &&
      ((((*(byte *)(unaff_RBX + 0x2e8) & 0x10) != 0 ||
        ((*(int64_t **)(unaff_RBX + 0x270) != (int64_t *)0x0 &&
         (cVar2 = (**(code **)(**(int64_t **)(unaff_RBX + 0x270) + 0x70))(), cVar2 != '\0')))) ||
       ((*(uint *)(unaff_RBX + 0x2ac) & 0x800000) == 0)))) && (0 < (int64_t)iVar3)) {
    do {
      if ((*(uint *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x1c0) + lVar5 * 8) + 0x2ac) &
          0x20000000) == 0) {
        DataStructure_ebcb0();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  if ((*(int64_t *)(unaff_RBX + 0x260) != 0) &&
     (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x260) + 0x28) == 0)) {
    RenderingSystem_005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      DataStructure_e7e20();
    }
    else {
      UltraHighFreq_DataProcessor1(*(int64_t *)(unaff_RBX + 0x28),*(int64_t *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(int16_t *)(unaff_RBX + 0x2b0) = *(int16_t *)(unaff_RBX + 0x2b4);
  }
  return;
}
// 函数: void DataStructure_ebd12(void)
void DataStructure_ebd12(void)
{
  int64_t *plVar1;
  char cVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int iVar3;
  uint64_t uVar4;
  uint64_t unaff_RDI;
  char unaff_R12B;
  uVar4 = unaff_RDI & 0xffffffff;
  do {
    plVar1 = *(int64_t **)(*(int64_t *)(unaff_RBX + 0x1e0) + uVar4 * 8);
    (**(code **)(*plVar1 + 0x1b8))(plVar1);
    cVar2 = (**(code **)(*plVar1 + 0x138))(plVar1);
    if (cVar2 != '\0') {
      GenericFunction_1801985e0(*(uint64_t *)(unaff_RBX + 0x20),plVar1,0);
    }
    uVar4 = uVar4 + 1;
  } while ((int64_t)uVar4 < unaff_RBP);
  if (*(int64_t *)(unaff_RBX + 0x260) != 0) {
    DataStructure_fa820();
    if ((*(byte *)(*(int64_t *)(unaff_RBX + 0x260) + 0xa8) >> 2 & 1) != 0) {
      *(short *)(unaff_RBX + 0x2b0) = *(short *)(unaff_RBX + 0x2b0) + 1;
      if (*(int64_t *)(unaff_RBX + 0x168) != 0) {
        Function_bcb0dca9();
      }
    }
  }
  if ((unaff_R12B == '\0') ||
     (iVar3 = (int)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3),
     iVar3 < 1)) goto LAB_1802ebe3a;
  if ((*(byte *)(unaff_RBX + 0x2e8) & 0x10) == 0) {
    if (*(int64_t **)(unaff_RBX + 0x270) != (int64_t *)0x0) {
      cVar2 = (**(code **)(**(int64_t **)(unaff_RBX + 0x270) + 0x70))();
      if (cVar2 != '\0') goto LAB_1802ebe08;
    }
    if ((*(uint *)(unaff_RBX + 0x2ac) & 0x800000) != 0) goto LAB_1802ebe3a;
  }
LAB_1802ebe08:
  if (0 < (int64_t)iVar3) {
    do {
      if ((*(uint *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x1c0) + unaff_RDI * 8) + 0x2ac) &
          0x20000000) == 0) {
        DataStructure_ebcb0();
      }
      unaff_RDI = unaff_RDI + 1;
    } while ((int64_t)unaff_RDI < (int64_t)iVar3);
  }
LAB_1802ebe3a:
  if ((*(int64_t *)(unaff_RBX + 0x260) != 0) &&
     (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x260) + 0x28) == 0)) {
    RenderingSystem_005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      DataStructure_e7e20();
    }
    else {
      UltraHighFreq_DataProcessor1(*(int64_t *)(unaff_RBX + 0x28),*(int64_t *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(int16_t *)(unaff_RBX + 0x2b0) = *(int16_t *)(unaff_RBX + 0x2b4);
  }
  return;
}
// 函数: void DataStructure_ebd72(uint64_t param_1,uint64_t param_2)
void DataStructure_ebd72(uint64_t param_1,uint64_t param_2)
{
  char cVar1;
  int64_t unaff_RBX;
  int iVar2;
  int64_t unaff_RDI;
  char unaff_R12B;
  if (*(int64_t *)(unaff_RBX + 0x260) != 0) {
    DataStructure_fa820(*(int64_t *)(unaff_RBX + 0x260),param_2,unaff_RBX + 0x70);
    if ((*(byte *)(*(int64_t *)(unaff_RBX + 0x260) + 0xa8) >> 2 & 1) != 0) {
      *(short *)(unaff_RBX + 0x2b0) = *(short *)(unaff_RBX + 0x2b0) + 1;
      if (*(int64_t *)(unaff_RBX + 0x168) != 0) {
        Function_bcb0dca9();
      }
    }
  }
  if ((unaff_R12B == '\0') ||
     (iVar2 = (int)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3),
     iVar2 < 1)) goto LAB_1802ebe3a;
  if ((*(byte *)(unaff_RBX + 0x2e8) & 0x10) == 0) {
    if (*(int64_t **)(unaff_RBX + 0x270) != (int64_t *)0x0) {
      cVar1 = (**(code **)(**(int64_t **)(unaff_RBX + 0x270) + 0x70))();
      if (cVar1 != '\0') goto LAB_1802ebe08;
    }
    if ((*(uint *)(unaff_RBX + 0x2ac) & 0x800000) != 0) goto LAB_1802ebe3a;
  }
LAB_1802ebe08:
  if (0 < (int64_t)iVar2) {
    do {
      if ((*(uint *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x1c0) + unaff_RDI * 8) + 0x2ac) &
          0x20000000) == 0) {
        DataStructure_ebcb0();
      }
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI < iVar2);
  }
LAB_1802ebe3a:
  if ((*(int64_t *)(unaff_RBX + 0x260) != 0) &&
     (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x260) + 0x28) == 0)) {
    RenderingSystem_005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      DataStructure_e7e20();
    }
    else {
      UltraHighFreq_DataProcessor1(*(int64_t *)(unaff_RBX + 0x28),*(int64_t *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(int16_t *)(unaff_RBX + 0x2b0) = *(int16_t *)(unaff_RBX + 0x2b4);
  }
  return;
}
// 函数: void DataStructure_ebd83(uint64_t param_1,uint64_t param_2)
void DataStructure_ebd83(uint64_t param_1,uint64_t param_2)
{
  char cVar1;
  int64_t unaff_RBX;
  int iVar2;
  int64_t unaff_RDI;
  char unaff_R12B;
  DataStructure_fa820(param_1,param_2,unaff_RBX + 0x70);
  if ((*(byte *)(*(int64_t *)(unaff_RBX + 0x260) + 0xa8) >> 2 & 1) != 0) {
    *(short *)(unaff_RBX + 0x2b0) = *(short *)(unaff_RBX + 0x2b0) + 1;
    if (*(int64_t *)(unaff_RBX + 0x168) != 0) {
      Function_bcb0dca9();
    }
  }
  if ((unaff_R12B == '\0') ||
     (iVar2 = (int)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3),
     iVar2 < 1)) goto LAB_1802ebe3a;
  if ((*(byte *)(unaff_RBX + 0x2e8) & 0x10) == 0) {
    if (*(int64_t **)(unaff_RBX + 0x270) != (int64_t *)0x0) {
      cVar1 = (**(code **)(**(int64_t **)(unaff_RBX + 0x270) + 0x70))();
      if (cVar1 != '\0') goto LAB_1802ebe08;
    }
    if ((*(uint *)(unaff_RBX + 0x2ac) & 0x800000) != 0) goto LAB_1802ebe3a;
  }
LAB_1802ebe08:
  if (0 < (int64_t)iVar2) {
    do {
      if ((*(uint *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x1c0) + unaff_RDI * 8) + 0x2ac) &
          0x20000000) == 0) {
        DataStructure_ebcb0();
      }
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI < iVar2);
  }
LAB_1802ebe3a:
  if ((*(int64_t *)(unaff_RBX + 0x260) != 0) &&
     (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x260) + 0x28) == 0)) {
    RenderingSystem_005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      DataStructure_e7e20();
    }
    else {
      UltraHighFreq_DataProcessor1(*(int64_t *)(unaff_RBX + 0x28),*(int64_t *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(int16_t *)(unaff_RBX + 0x2b0) = *(int16_t *)(unaff_RBX + 0x2b4);
  }
  return;
}
// 函数: void DataStructure_ebdd9(void)
void DataStructure_ebdd9(void)
{
  char cVar1;
  int64_t unaff_RBX;
  int unaff_ESI;
  int64_t unaff_RDI;
  if (unaff_ESI < 1) goto LAB_1802ebe3a;
  if ((*(byte *)(unaff_RBX + 0x2e8) & 0x10) == 0) {
    if (*(int64_t **)(unaff_RBX + 0x270) != (int64_t *)0x0) {
      cVar1 = (**(code **)(**(int64_t **)(unaff_RBX + 0x270) + 0x70))();
      if (cVar1 != '\0') goto LAB_1802ebe08;
    }
    if ((*(uint *)(unaff_RBX + 0x2ac) & 0x800000) != 0) goto LAB_1802ebe3a;
  }
LAB_1802ebe08:
  if (0 < (int64_t)unaff_ESI) {
    do {
      if ((*(uint *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x1c0) + unaff_RDI * 8) + 0x2ac) &
          0x20000000) == 0) {
        DataStructure_ebcb0();
      }
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI < unaff_ESI);
  }
LAB_1802ebe3a:
  if ((*(int64_t *)(unaff_RBX + 0x260) != 0) &&
     (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x260) + 0x28) == 0)) {
    RenderingSystem_005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      DataStructure_e7e20();
    }
    else {
      UltraHighFreq_DataProcessor1(*(int64_t *)(unaff_RBX + 0x28),*(int64_t *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(int16_t *)(unaff_RBX + 0x2b0) = *(int16_t *)(unaff_RBX + 0x2b4);
  }
  return;
}
// 函数: void DataStructure_ebe44(void)
void DataStructure_ebe44(void)
{
  int64_t unaff_RBX;
  if ((*(int64_t *)(unaff_RBX + 0x260) != 0) &&
     (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x260) + 0x28) == 0)) {
    RenderingSystem_005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      DataStructure_e7e20();
    }
    else {
      UltraHighFreq_DataProcessor1(*(int64_t *)(unaff_RBX + 0x28),*(int64_t *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(int16_t *)(unaff_RBX + 0x2b0) = *(int16_t *)(unaff_RBX + 0x2b4);
  }
  return;
}
// 函数: void DataStructure_ebe5a(int64_t param_1)
void DataStructure_ebe5a(int64_t param_1)
{
  int64_t unaff_RBX;
  if (*(int64_t *)(param_1 + 0x28) == 0) {
    RenderingSystem_005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      DataStructure_e7e20();
    }
    else {
      UltraHighFreq_DataProcessor1(*(int64_t *)(unaff_RBX + 0x28),*(int64_t *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(int16_t *)(unaff_RBX + 0x2b0) = *(int16_t *)(unaff_RBX + 0x2b4);
  }
  return;
}
// 函数: void DataStructure_ebec0(int64_t param_1)
void DataStructure_ebec0(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  int iVar8;
  if (((*(uint *)(param_1 + 0x2ac) & 0x200000) == 0) &&
     (bVar3 = (*(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x80) -
              *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x88)) * *(float *)(param_1 + 0x94)
              + (*(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x88) -
                *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x84)) *
                *(float *)(param_1 + 0x90) +
              (*(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x84) -
              *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x80)) * *(float *)(param_1 + 0x98)
              < 0.0, (bool)(*(byte *)(param_1 + 0x2e8) >> 2 & 1) != bVar3)) {
    lVar4 = *(int64_t *)(param_1 + 0xf0);
    iVar8 = 0;
    if (*(int64_t *)(param_1 + 0xf8) - lVar4 >> 3 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(int64_t **)(lVar5 + lVar4);
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x1a0))(plVar1,bVar3);
        }
        lVar4 = *(int64_t *)(param_1 + 0xf0);
        iVar8 = iVar8 + 1;
        lVar5 = lVar5 + 8;
      } while ((uint64_t)(int64_t)iVar8 < (uint64_t)(*(int64_t *)(param_1 + 0xf8) - lVar4 >> 3))
      ;
    }
    lVar4 = *(int64_t *)(param_1 + 0x260);
    if (lVar4 != 0) {
      iVar8 = 0;
      if (*(int64_t *)(lVar4 + 0x1b0) - *(int64_t *)(lVar4 + 0x1a8) >> 3 != 0) {
        lVar5 = 0;
        do {
          plVar1 = *(int64_t **)(lVar5 + *(int64_t *)(lVar4 + 0x1a8));
          (**(code **)(*plVar1 + 0x1a0))(plVar1,bVar3);
          lVar5 = lVar5 + 8;
          iVar8 = iVar8 + 1;
        } while ((uint64_t)(int64_t)iVar8 <
                 (uint64_t)(*(int64_t *)(lVar4 + 0x1b0) - *(int64_t *)(lVar4 + 0x1a8) >> 3));
      }
      iVar8 = 0;
      if ('\0' < *(char *)(lVar4 + 0x20)) {
        lVar5 = 0;
        do {
          lVar2 = *(int64_t *)(lVar4 + 0x18);
          iVar6 = 0;
          if (*(int64_t *)(lVar5 + 0xb8 + lVar2) - *(int64_t *)(lVar5 + 0xb0 + lVar2) >> 3 != 0) {
            lVar7 = 0;
            do {
              plVar1 = *(int64_t **)(lVar7 + *(int64_t *)(lVar5 + 0xb0 + lVar2));
              (**(code **)(*plVar1 + 0x1a0))(plVar1,bVar3);
              lVar7 = lVar7 + 8;
              iVar6 = iVar6 + 1;
            } while ((uint64_t)(int64_t)iVar6 <
                     (uint64_t)
                     (*(int64_t *)(lVar5 + 0xb8 + lVar2) - *(int64_t *)(lVar5 + 0xb0 + lVar2) >> 3
                     ));
          }
          iVar8 = iVar8 + 1;
          lVar5 = lVar5 + 0x100;
        } while (iVar8 < *(char *)(lVar4 + 0x20));
      }
    }
    *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) & 0xfb;
    *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) | bVar3 << 2;
  }
  return;
}
// 函数: void DataStructure_ebf08(float param_1,float param_2,float param_3,float param_4)
void DataStructure_ebf08(float param_1,float param_2,float param_3,float param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  byte in_AL;
  int64_t in_RCX;
  int64_t lVar3;
  uint64_t unaff_RBX;
  int64_t lVar4;
  int iVar5;
  char cVar6;
  uint64_t unaff_RSI;
  int64_t lVar7;
  int iVar8;
  uint64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  float in_XMM4_Da;
  float in_XMM5_Da;
  uint local_buffer_70;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R12;
  cVar6 = (param_3 * in_XMM4_Da - param_1 * param_2) * *(float *)(in_RCX + 0x94) +
          (*(float *)(in_RCX + 0x74) * param_2 - param_3 * param_4) * *(float *)(in_RCX + 0x90) +
          (in_XMM5_Da * param_4 - *(float *)(in_RCX + 0x74) * in_XMM4_Da) *
          *(float *)(in_RCX + 0x98) < 0.0;
  local_buffer_70 = (uint)(byte)cVar6;
  if ((in_AL >> 2 & 1) != cVar6) {
    lVar3 = *(int64_t *)(in_RCX + 0xf0);
    lVar4 = *(int64_t *)(in_RCX + 0xf8);
    *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
    *(uint64_t *)(in_R11 + -0x10) = unaff_RDI;
    iVar8 = 0;
    *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
    if (lVar4 - lVar3 >> 3 != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(int64_t **)(lVar4 + lVar3);
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x1a0))(plVar1,cVar6);
        }
        lVar3 = *(int64_t *)(unaff_R15 + 0xf0);
        iVar8 = iVar8 + 1;
        lVar4 = lVar4 + 8;
      } while ((uint64_t)(int64_t)iVar8 <
               (uint64_t)(*(int64_t *)(unaff_R15 + 0xf8) - lVar3 >> 3));
    }
    lVar3 = *(int64_t *)(unaff_R15 + 0x260);
    if (lVar3 != 0) {
      iVar8 = 0;
      if (*(int64_t *)(lVar3 + 0x1b0) - *(int64_t *)(lVar3 + 0x1a8) >> 3 != 0) {
        lVar4 = 0;
        do {
          plVar1 = *(int64_t **)(lVar4 + *(int64_t *)(lVar3 + 0x1a8));
          (**(code **)(*plVar1 + 0x1a0))(plVar1,cVar6);
          lVar4 = lVar4 + 8;
          iVar8 = iVar8 + 1;
        } while ((uint64_t)(int64_t)iVar8 <
                 (uint64_t)(*(int64_t *)(lVar3 + 0x1b0) - *(int64_t *)(lVar3 + 0x1a8) >> 3));
      }
      iVar8 = 0;
      if ('\0' < *(char *)(lVar3 + 0x20)) {
        lVar4 = 0;
        do {
          lVar2 = *(int64_t *)(lVar3 + 0x18);
          iVar5 = 0;
          if (*(int64_t *)(lVar4 + 0xb8 + lVar2) - *(int64_t *)(lVar4 + 0xb0 + lVar2) >> 3 != 0) {
            lVar7 = 0;
            do {
              plVar1 = *(int64_t **)(lVar7 + *(int64_t *)(lVar4 + 0xb0 + lVar2));
              (**(code **)(*plVar1 + 0x1a0))(plVar1,cVar6);
              lVar7 = lVar7 + 8;
              iVar5 = iVar5 + 1;
            } while ((uint64_t)(int64_t)iVar5 <
                     (uint64_t)
                     (*(int64_t *)(lVar4 + 0xb8 + lVar2) - *(int64_t *)(lVar4 + 0xb0 + lVar2) >> 3
                     ));
          }
          iVar8 = iVar8 + 1;
          lVar4 = lVar4 + 0x100;
        } while (iVar8 < *(char *)(lVar3 + 0x20));
        cVar6 = (char)local_buffer_70;
      }
    }
    *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
    *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | cVar6 << 2;
  }
  return;
}
// 函数: void DataStructure_ebf14(int64_t param_1,float param_2,float param_3,float param_4)
void DataStructure_ebf14(int64_t param_1,float param_2,float param_3,float param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  byte in_AL;
  int64_t lVar3;
  uint64_t unaff_RBX;
  int64_t lVar4;
  int iVar5;
  char cVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  float in_XMM0_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  uint local_buffer_70;
  cVar6 = (param_3 * in_XMM4_Da - in_XMM0_Da) * *(float *)(param_1 + 0x94) +
          (*(float *)(param_1 + 0x74) * param_2 - param_3 * param_4) * *(float *)(param_1 + 0x90) +
          (in_XMM5_Da * param_4 - *(float *)(param_1 + 0x74) * in_XMM4_Da) *
          *(float *)(param_1 + 0x98) < 0.0;
  local_buffer_70 = (uint)(byte)cVar6;
  if ((in_AL >> 2 & 1) != cVar6) {
    lVar3 = *(int64_t *)(param_1 + 0xf0);
    lVar4 = *(int64_t *)(param_1 + 0xf8);
    *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
    *(uint64_t *)(in_R11 + -0x10) = unaff_RDI;
    iVar8 = 0;
    *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
    if (lVar4 - lVar3 >> 3 != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(int64_t **)(lVar4 + lVar3);
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x1a0))(plVar1,cVar6);
        }
        lVar3 = *(int64_t *)(unaff_R15 + 0xf0);
        iVar8 = iVar8 + 1;
        lVar4 = lVar4 + 8;
      } while ((uint64_t)(int64_t)iVar8 <
               (uint64_t)(*(int64_t *)(unaff_R15 + 0xf8) - lVar3 >> 3));
    }
    lVar3 = *(int64_t *)(unaff_R15 + 0x260);
    if (lVar3 != 0) {
      iVar8 = 0;
      if (*(int64_t *)(lVar3 + 0x1b0) - *(int64_t *)(lVar3 + 0x1a8) >> 3 != 0) {
        lVar4 = 0;
        do {
          plVar1 = *(int64_t **)(lVar4 + *(int64_t *)(lVar3 + 0x1a8));
          (**(code **)(*plVar1 + 0x1a0))(plVar1,cVar6);
          lVar4 = lVar4 + 8;
          iVar8 = iVar8 + 1;
        } while ((uint64_t)(int64_t)iVar8 <
                 (uint64_t)(*(int64_t *)(lVar3 + 0x1b0) - *(int64_t *)(lVar3 + 0x1a8) >> 3));
      }
      iVar8 = 0;
      if ('\0' < *(char *)(lVar3 + 0x20)) {
        lVar4 = 0;
        do {
          lVar2 = *(int64_t *)(lVar3 + 0x18);
          iVar5 = 0;
          if (*(int64_t *)(lVar4 + 0xb8 + lVar2) - *(int64_t *)(lVar4 + 0xb0 + lVar2) >> 3 != 0) {
            lVar7 = 0;
            do {
              plVar1 = *(int64_t **)(lVar7 + *(int64_t *)(lVar4 + 0xb0 + lVar2));
              (**(code **)(*plVar1 + 0x1a0))(plVar1,cVar6);
              lVar7 = lVar7 + 8;
              iVar5 = iVar5 + 1;
            } while ((uint64_t)(int64_t)iVar5 <
                     (uint64_t)
                     (*(int64_t *)(lVar4 + 0xb8 + lVar2) - *(int64_t *)(lVar4 + 0xb0 + lVar2) >> 3
                     ));
          }
          iVar8 = iVar8 + 1;
          lVar4 = lVar4 + 0x100;
        } while (iVar8 < *(char *)(lVar3 + 0x20));
        cVar6 = (char)local_buffer_70;
      }
    }
    *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
    *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | cVar6 << 2;
  }
  return;
}
// 函数: void DataStructure_ebf93(int64_t param_1)
void DataStructure_ebf93(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t unaff_RBX;
  int64_t lVar4;
  int iVar5;
  char unaff_SIL;
  int64_t lVar6;
  int iVar7;
  uint64_t unaff_RDI;
  int64_t in_R11;
  int8_t unaff_R12B;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  char local_var_70;
  lVar3 = *(int64_t *)(param_1 + 0xf0);
  lVar4 = *(int64_t *)(param_1 + 0xf8);
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RDI;
  iVar7 = 0;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  if (lVar4 - lVar3 >> 3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(int64_t **)(lVar4 + lVar3);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
      }
      lVar3 = *(int64_t *)(unaff_R15 + 0xf0);
      iVar7 = iVar7 + 1;
      lVar4 = lVar4 + 8;
    } while ((uint64_t)(int64_t)iVar7 < (uint64_t)(*(int64_t *)(unaff_R15 + 0xf8) - lVar3 >> 3))
    ;
  }
  lVar3 = *(int64_t *)(unaff_R15 + 0x260);
  if (lVar3 != 0) {
    iVar7 = 0;
    if (*(int64_t *)(lVar3 + 0x1b0) - *(int64_t *)(lVar3 + 0x1a8) >> 3 != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(int64_t **)(lVar4 + *(int64_t *)(lVar3 + 0x1a8));
        (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
        lVar4 = lVar4 + 8;
        iVar7 = iVar7 + 1;
      } while ((uint64_t)(int64_t)iVar7 <
               (uint64_t)(*(int64_t *)(lVar3 + 0x1b0) - *(int64_t *)(lVar3 + 0x1a8) >> 3));
    }
    iVar7 = 0;
    if ('\0' < *(char *)(lVar3 + 0x20)) {
      lVar4 = 0;
      do {
        lVar2 = *(int64_t *)(lVar3 + 0x18);
        iVar5 = 0;
        if (*(int64_t *)(lVar4 + 0xb8 + lVar2) - *(int64_t *)(lVar4 + 0xb0 + lVar2) >> 3 != 0) {
          lVar6 = 0;
          do {
            plVar1 = *(int64_t **)(lVar6 + *(int64_t *)(lVar4 + 0xb0 + lVar2));
            (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
            lVar6 = lVar6 + 8;
            iVar5 = iVar5 + 1;
          } while ((uint64_t)(int64_t)iVar5 <
                   (uint64_t)
                   (*(int64_t *)(lVar4 + 0xb8 + lVar2) - *(int64_t *)(lVar4 + 0xb0 + lVar2) >> 3))
          ;
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 0x100;
        unaff_SIL = local_var_70;
      } while (iVar7 < *(char *)(lVar3 + 0x20));
    }
  }
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | unaff_SIL << 2;
  return;
}
// 函数: void DataStructure_ebfa4(uint64_t param_1,int64_t param_2)
void DataStructure_ebfa4(uint64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t in_RAX;
  uint64_t unaff_RBX;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  char unaff_SIL;
  int64_t lVar6;
  int iVar7;
  uint64_t unaff_RDI;
  int64_t in_R11;
  int8_t unaff_R12B;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  char local_var_70;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RDI;
  iVar7 = 0;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  if (in_RAX >> 3 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(int64_t **)(lVar3 + param_2);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
      }
      param_2 = *(int64_t *)(unaff_R15 + 0xf0);
      iVar7 = iVar7 + 1;
      lVar3 = lVar3 + 8;
    } while ((uint64_t)(int64_t)iVar7 <
             (uint64_t)(*(int64_t *)(unaff_R15 + 0xf8) - param_2 >> 3));
  }
  lVar3 = *(int64_t *)(unaff_R15 + 0x260);
  if (lVar3 != 0) {
    iVar7 = 0;
    if (*(int64_t *)(lVar3 + 0x1b0) - *(int64_t *)(lVar3 + 0x1a8) >> 3 != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(int64_t **)(lVar4 + *(int64_t *)(lVar3 + 0x1a8));
        (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
        lVar4 = lVar4 + 8;
        iVar7 = iVar7 + 1;
      } while ((uint64_t)(int64_t)iVar7 <
               (uint64_t)(*(int64_t *)(lVar3 + 0x1b0) - *(int64_t *)(lVar3 + 0x1a8) >> 3));
    }
    iVar7 = 0;
    if ('\0' < *(char *)(lVar3 + 0x20)) {
      lVar4 = 0;
      do {
        lVar2 = *(int64_t *)(lVar3 + 0x18);
        iVar5 = 0;
        if (*(int64_t *)(lVar4 + 0xb8 + lVar2) - *(int64_t *)(lVar4 + 0xb0 + lVar2) >> 3 != 0) {
          lVar6 = 0;
          do {
            plVar1 = *(int64_t **)(lVar6 + *(int64_t *)(lVar4 + 0xb0 + lVar2));
            (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
            lVar6 = lVar6 + 8;
            iVar5 = iVar5 + 1;
          } while ((uint64_t)(int64_t)iVar5 <
                   (uint64_t)
                   (*(int64_t *)(lVar4 + 0xb8 + lVar2) - *(int64_t *)(lVar4 + 0xb0 + lVar2) >> 3))
          ;
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 0x100;
        unaff_SIL = local_var_70;
      } while (iVar7 < *(char *)(lVar3 + 0x20));
    }
  }
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | unaff_SIL << 2;
  return;
}
// 函数: void DataStructure_ec01d(void)
void DataStructure_ec01d(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t in_RAX;
  int64_t lVar3;
  int iVar4;
  char unaff_SIL;
  int64_t lVar5;
  int unaff_EDI;
  int8_t unaff_R12B;
  int iVar6;
  int64_t unaff_R14;
  int64_t unaff_R15;
  char local_var_70;
  if (in_RAX != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(int64_t **)(lVar3 + *(int64_t *)(unaff_R14 + 0x1a8));
      (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
      lVar3 = lVar3 + 8;
      unaff_EDI = unaff_EDI + 1;
    } while ((uint64_t)(int64_t)unaff_EDI <
             (uint64_t)(*(int64_t *)(unaff_R14 + 0x1b0) - *(int64_t *)(unaff_R14 + 0x1a8) >> 3));
  }
  iVar6 = 0;
  if ('\0' < *(char *)(unaff_R14 + 0x20)) {
    lVar3 = 0;
    do {
      lVar2 = *(int64_t *)(unaff_R14 + 0x18);
      iVar4 = 0;
      if (*(int64_t *)(lVar3 + 0xb8 + lVar2) - *(int64_t *)(lVar3 + 0xb0 + lVar2) >> 3 != 0) {
        lVar5 = 0;
        do {
          plVar1 = *(int64_t **)(lVar5 + *(int64_t *)(lVar3 + 0xb0 + lVar2));
          (**(code **)(*plVar1 + 0x1a0))(plVar1,unaff_R12B);
          lVar5 = lVar5 + 8;
          iVar4 = iVar4 + 1;
        } while ((uint64_t)(int64_t)iVar4 <
                 (uint64_t)
                 (*(int64_t *)(lVar3 + 0xb8 + lVar2) - *(int64_t *)(lVar3 + 0xb0 + lVar2) >> 3));
      }
      iVar6 = iVar6 + 1;
      lVar3 = lVar3 + 0x100;
      unaff_SIL = local_var_70;
    } while (iVar6 < *(char *)(unaff_R14 + 0x20));
  }
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | unaff_SIL << 2;
  return;
}
// 函数: void DataStructure_ec075(void)
void DataStructure_ec075(void)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  int8_t unaff_R12B;
  int unaff_R13D;
  int64_t unaff_R14;
  int64_t unaff_R15;
  char local_var_70;
  lVar3 = 0;
  do {
    lVar1 = *(int64_t *)(unaff_R14 + 0x18);
    iVar4 = 0;
    if (*(int64_t *)(lVar3 + 0xb8 + lVar1) - *(int64_t *)(lVar3 + 0xb0 + lVar1) >> 3 != 0) {
      lVar5 = 0;
      do {
        plVar2 = *(int64_t **)(lVar5 + *(int64_t *)(lVar3 + 0xb0 + lVar1));
        (**(code **)(*plVar2 + 0x1a0))(plVar2,unaff_R12B);
        lVar5 = lVar5 + 8;
        iVar4 = iVar4 + 1;
      } while ((uint64_t)(int64_t)iVar4 <
               (uint64_t)
               (*(int64_t *)(lVar3 + 0xb8 + lVar1) - *(int64_t *)(lVar3 + 0xb0 + lVar1) >> 3));
    }
    unaff_R13D = unaff_R13D + 1;
    lVar3 = lVar3 + 0x100;
  } while (unaff_R13D < *(char *)(unaff_R14 + 0x20));
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | local_var_70 << 2;
  return;
}
// 函数: void DataStructure_ec10b(void)
void DataStructure_ec10b(void)
{
  char unaff_SIL;
  int64_t unaff_R15;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | unaff_SIL << 2;
  return;
}
// 函数: void DataStructure_ec110(void)
void DataStructure_ec110(void)
{
  char unaff_SIL;
  int64_t unaff_R15;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) & 0xfb;
  *(byte *)(unaff_R15 + 0x2e8) = *(byte *)(unaff_R15 + 0x2e8) | unaff_SIL << 2;
  return;
}
// 函数: void DataStructure_ec132(void)
void DataStructure_ec132(void)
{
  return;
}
// 函数: void DataStructure_ec13f(void)
void DataStructure_ec13f(void)
{
  return;
}
// 函数: void DataStructure_ec150(int64_t param_1,char param_2)
void DataStructure_ec150(int64_t param_1,char param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  if (param_2 != '\0') {
    RenderingSystem_82d30(param_1 + 0x270,param_1,param_1 + 0x70);
  }
  DataStructure_ebec0(param_1);
  if (((*(int64_t *)(param_1 + 0x20) != 0) &&
      (lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x170), lVar1 != 0)) &&
     (plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x20) + 0x29a8), plVar2 != (int64_t *)0x0)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,param_1 + 0x70);
  }
  if (((*(uint *)(param_1 + 0x2ac) & 0x1000) == 0) &&
     (lVar1 = *(int64_t *)(param_1 + 0x168), lVar1 != 0)) {
    *(short *)(lVar1 + 0x2b0) = *(short *)(lVar1 + 0x2b0) + 1;
    if (*(int64_t *)(lVar1 + 0x168) != 0) {
      Function_bcb0dca9();
    }
  }
  DataStructure_eebe0(param_1);
  *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) & 0xef;
  return;
}