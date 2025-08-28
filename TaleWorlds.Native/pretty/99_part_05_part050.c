#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part050.c - 12 个函数

// 函数: void FUN_1802f9e8b(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_1802f9e8b(longlong param_1,uint64_t param_2,longlong param_3)

{
  uint64_t *puVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong in_RAX;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  char *pcVar8;
  uint unaff_EBX;
  uint uVar9;
  ulonglong uVar10;
  char cVar11;
  longlong unaff_R15;
  char in_stack_00000050;
  
  bVar3 = false;
  if (in_RAX - param_3 >> 3 != 0) {
    uVar10 = (ulonglong)unaff_EBX;
    uVar9 = unaff_EBX;
    do {
      plVar2 = *(longlong **)(uVar10 + param_3);
      iVar4 = (**(code **)(*plVar2 + 0x98))(plVar2);
      if ((iVar4 != 2) || ((plVar2[0xb] - plVar2[10] & 0xfffffffffffffff8U) != 0)) {
        bVar3 = true;
        break;
      }
      param_3 = *(longlong *)(param_1 + 0xd0);
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 + 8;
      bVar3 = false;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0xd8) - param_3 >> 3));
  }
  puVar1 = (uint64_t *)(unaff_R15 + 0xb0);
  uVar9 = (int)param_1 - *(int *)(unaff_R15 + 0x18);
  cVar11 = (char)(uVar9 >> 8);
  if (bVar3) {
    pcVar8 = (char *)*puVar1;
    uVar10 = (longlong)*(char **)(unaff_R15 + 0xb8) - (longlong)pcVar8;
    if (*(char **)(unaff_R15 + 0xb8) != pcVar8) {
      do {
        if (*pcVar8 == cVar11) {
          return;
        }
        unaff_EBX = unaff_EBX + 1;
        pcVar8 = pcVar8 + 1;
      } while ((ulonglong)(longlong)(int)unaff_EBX < uVar10);
    }
    in_stack_00000050 = cVar11;
    FUN_180194a50(puVar1,&stack0x00000050);
    return;
  }
  pcVar8 = (char *)*puVar1;
  pcVar6 = pcVar8;
  if (*(char **)(unaff_R15 + 0xb8) != pcVar8) {
    while (*pcVar6 != cVar11) {
      unaff_EBX = unaff_EBX + 1;
      pcVar6 = pcVar6 + 1;
      if ((ulonglong)((longlong)*(char **)(unaff_R15 + 0xb8) - (longlong)pcVar8) <=
          (ulonglong)(longlong)(int)unaff_EBX) {
        return;
      }
    }
    uVar10 = *(ulonglong *)(unaff_R15 + 0xb8);
    uVar5 = memchr(pcVar8,(longlong)(ulonglong)uVar9 >> 8 & 0xff,uVar10 - (longlong)pcVar8);
    uVar7 = uVar10;
    if (uVar5 != 0) {
      uVar7 = uVar5;
    }
    uVar5 = uVar7 + 1;
    if (uVar5 < uVar10) {
                    // WARNING: Subroutine does not return
      memmove(uVar7,uVar5,uVar10 - uVar5);
    }
    *(ulonglong *)(unaff_R15 + 0xb8) = uVar10 - 1;
  }
  return;
}






// 函数: void FUN_1802f9eae(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_1802f9eae(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  uint64_t *puVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  ulonglong uVar6;
  char *pcVar7;
  uint unaff_EBX;
  int unaff_EBP;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  char unaff_R12B;
  longlong unaff_R14;
  longlong unaff_R15;
  char in_stack_00000050;
  
  uVar8 = (ulonglong)unaff_EBX;
  while( true ) {
    plVar2 = *(longlong **)(uVar8 + param_3);
    iVar3 = (**(code **)(*plVar2 + 0x98))(plVar2);
    if ((iVar3 != 2) || ((plVar2[0xb] - plVar2[10] & 0xfffffffffffffff8U) != 0)) break;
    param_3 = *(longlong *)(unaff_R14 + 0xd0);
    unaff_EBP = unaff_EBP + 1;
    uVar8 = uVar8 + 8;
    if ((ulonglong)(*(longlong *)(unaff_R14 + 0xd8) - param_3 >> 3) <=
        (ulonglong)(longlong)unaff_EBP) {
LAB_1802f9f0d:
      puVar1 = (uint64_t *)(unaff_R15 + 0xb0);
      uVar10 = (int)unaff_R14 - *(int *)(unaff_R15 + 0x18);
      cVar9 = (char)(uVar10 >> 8);
      if (unaff_R12B != '\0') {
        pcVar7 = (char *)*puVar1;
        uVar8 = (longlong)*(char **)(unaff_R15 + 0xb8) - (longlong)pcVar7;
        if (*(char **)(unaff_R15 + 0xb8) != pcVar7) {
          do {
            if (*pcVar7 == cVar9) {
              return;
            }
            unaff_EBX = unaff_EBX + 1;
            pcVar7 = pcVar7 + 1;
          } while ((ulonglong)(longlong)(int)unaff_EBX < uVar8);
        }
        in_stack_00000050 = cVar9;
        FUN_180194a50(puVar1,&stack0x00000050);
        return;
      }
      pcVar7 = (char *)*puVar1;
      pcVar5 = pcVar7;
      if (*(char **)(unaff_R15 + 0xb8) != pcVar7) {
        while (*pcVar5 != cVar9) {
          unaff_EBX = unaff_EBX + 1;
          pcVar5 = pcVar5 + 1;
          if ((ulonglong)((longlong)*(char **)(unaff_R15 + 0xb8) - (longlong)pcVar7) <=
              (ulonglong)(longlong)(int)unaff_EBX) {
            return;
          }
        }
        uVar8 = *(ulonglong *)(unaff_R15 + 0xb8);
        uVar4 = memchr(pcVar7,(longlong)(ulonglong)uVar10 >> 8 & 0xff,uVar8 - (longlong)pcVar7);
        uVar6 = uVar8;
        if (uVar4 != 0) {
          uVar6 = uVar4;
        }
        uVar4 = uVar6 + 1;
        if (uVar4 < uVar8) {
                    // WARNING: Subroutine does not return
          memmove(uVar6,uVar4,uVar8 - uVar4);
        }
        *(ulonglong *)(unaff_R15 + 0xb8) = uVar8 - 1;
      }
      return;
    }
  }
  unaff_R12B = '\x01';
  goto LAB_1802f9f0d;
}






// 函数: void FUN_1802f9f17(void)
void FUN_1802f9f17(void)

{
  uint64_t *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  ulonglong uVar4;
  char *pcVar5;
  int unaff_EBX;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  char unaff_R12B;
  int unaff_R14D;
  longlong unaff_R15;
  char in_stack_00000050;
  
  puVar1 = (uint64_t *)(unaff_R15 + 0xb0);
  uVar8 = unaff_R14D - *(int *)(unaff_R15 + 0x18);
  cVar7 = (char)(uVar8 >> 8);
  if (unaff_R12B != '\0') {
    pcVar5 = (char *)*puVar1;
    uVar6 = (longlong)*(char **)(unaff_R15 + 0xb8) - (longlong)pcVar5;
    if (*(char **)(unaff_R15 + 0xb8) != pcVar5) {
      do {
        if (*pcVar5 == cVar7) {
          return;
        }
        unaff_EBX = unaff_EBX + 1;
        pcVar5 = pcVar5 + 1;
      } while ((ulonglong)(longlong)unaff_EBX < uVar6);
    }
    in_stack_00000050 = cVar7;
    FUN_180194a50(puVar1,&stack0x00000050);
    return;
  }
  pcVar5 = (char *)*puVar1;
  pcVar3 = pcVar5;
  if (*(char **)(unaff_R15 + 0xb8) != pcVar5) {
    while (*pcVar3 != cVar7) {
      unaff_EBX = unaff_EBX + 1;
      pcVar3 = pcVar3 + 1;
      if ((ulonglong)((longlong)*(char **)(unaff_R15 + 0xb8) - (longlong)pcVar5) <=
          (ulonglong)(longlong)unaff_EBX) {
        return;
      }
    }
    uVar6 = *(ulonglong *)(unaff_R15 + 0xb8);
    uVar2 = memchr(pcVar5,(longlong)(ulonglong)uVar8 >> 8 & 0xff,uVar6 - (longlong)pcVar5);
    uVar4 = uVar6;
    if (uVar2 != 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 + 1;
    if (uVar2 < uVar6) {
                    // WARNING: Subroutine does not return
      memmove(uVar4,uVar2,uVar6 - uVar2);
    }
    *(ulonglong *)(unaff_R15 + 0xb8) = uVar6 - 1;
  }
  return;
}






// 函数: void FUN_1802f9f3d(uint64_t *param_1,uint64_t param_2,uint64_t param_3,char param_4)
void FUN_1802f9f3d(uint64_t *param_1,uint64_t param_2,uint64_t param_3,char param_4)

{
  char *pcVar1;
  int unaff_EBX;
  ulonglong uVar2;
  char cStack0000000000000050;
  
  pcVar1 = (char *)*param_1;
  uVar2 = (longlong)param_1[1] - (longlong)pcVar1;
  if ((char *)param_1[1] != pcVar1) {
    do {
      if (*pcVar1 == param_4) {
        return;
      }
      unaff_EBX = unaff_EBX + 1;
      pcVar1 = pcVar1 + 1;
    } while ((ulonglong)(longlong)unaff_EBX < uVar2);
  }
  cStack0000000000000050 = param_4;
  FUN_180194a50(param_1,&stack0x00000050);
  return;
}



uint64_t *
FUN_1802fa010(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xb;
  strcpy_s(param_2[1],0x80,&unknown_var_2160_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fa090(longlong param_1,longlong param_2,longlong param_3)
void FUN_1802fa090(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint uVar4;
  longlong *plVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  char cVar12;
  uint64_t uVar13;
  longlong lVar14;
  int8_t *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  char cVar19;
  char cVar20;
  
  *(longlong *)(param_1 + 0x208) = param_2;
  *(int8_t *)(param_1 + 0x20) = *(int8_t *)(param_2 + 0x148);
  FUN_1802fffb0();
  cVar20 = '\0';
  if ('\0' < *(char *)(param_1 + 0x20)) {
    do {
      lVar14 = *(longlong *)(param_1 + 0x18);
      lVar18 = (longlong)cVar20 * 0x1b0 + *(longlong *)(param_2 + 0x140);
      lVar17 = (longlong)cVar20 * 0x100;
      *(int8_t *)(lVar17 + 0xa0 + lVar14) = *(int8_t *)(lVar18 + 0xf0);
      cVar12 = *(char *)(lVar18 + 0xf1);
      *(char *)(lVar17 + 0xa1 + lVar14) = cVar12;
      if (cVar12 < '\x01') {
        *(uint64_t *)(lVar17 + 0xa8 + lVar14) = 0;
      }
      else {
        if (cVar12 == '\0') {
          cVar12 = '\0';
          uVar13 = 0;
        }
        else {
          uVar13 = FUN_18062b420(_DAT_180c8ed18,(longlong)cVar12);
          cVar12 = *(char *)(lVar17 + 0xa1 + lVar14);
        }
        cVar19 = '\0';
        *(uint64_t *)(lVar17 + 0xa8 + lVar14) = uVar13;
        if ('\0' < cVar12) {
          do {
            lVar16 = (longlong)cVar19;
            cVar19 = cVar19 + '\x01';
            *(int8_t *)(lVar16 + *(longlong *)(lVar17 + 0xa8 + lVar14)) =
                 *(int8_t *)(lVar16 + *(longlong *)(lVar18 + 0xf8));
          } while (cVar19 < *(char *)(lVar17 + 0xa1 + lVar14));
        }
      }
      uVar13 = *(uint64_t *)(lVar18 + 0x80);
      uVar9 = *(uint64_t *)(lVar18 + 0x88);
      uVar10 = *(uint64_t *)(lVar18 + 0x98);
      puVar2 = (uint64_t *)(lVar17 + 0x30 + lVar14);
      *puVar2 = *(uint64_t *)(lVar18 + 0x90);
      puVar2[1] = uVar10;
      puVar2 = (uint64_t *)(lVar17 + 0x40 + lVar14);
      *puVar2 = uVar13;
      puVar2[1] = uVar9;
      uVar13 = *(uint64_t *)(lVar18 + 0x30);
      uVar9 = *(uint64_t *)(lVar18 + 0x38);
      uVar10 = *(uint64_t *)(lVar18 + 0x40);
      uVar11 = *(uint64_t *)(lVar18 + 0x48);
      do {
        LOCK();
        puVar1 = (uint *)(lVar17 + lVar14);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 1;
        UNLOCK();
      } while ((uVar4 & 1) != 0);
      puVar2 = (uint64_t *)(lVar17 + 4 + lVar14);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2 = (uint64_t *)(lVar17 + 0x14 + lVar14);
      *puVar2 = uVar13;
      puVar2[1] = uVar9;
      *(int32_t *)(lVar17 + lVar14) = 0;
      cVar20 = cVar20 + '\x01';
      uVar13 = *(uint64_t *)(lVar18 + 0xa8);
      puVar2 = (uint64_t *)(lVar17 + 0x60 + lVar14);
      *puVar2 = *(uint64_t *)(lVar18 + 0xa0);
      puVar2[1] = uVar13;
      uVar13 = *(uint64_t *)(lVar18 + 0xb8);
      puVar2 = (uint64_t *)(lVar17 + 0x70 + lVar14);
      *puVar2 = *(uint64_t *)(lVar18 + 0xb0);
      puVar2[1] = uVar13;
      uVar6 = *(int32_t *)(lVar18 + 0xc4);
      uVar7 = *(int32_t *)(lVar18 + 200);
      uVar8 = *(int32_t *)(lVar18 + 0xcc);
      puVar3 = (int32_t *)(lVar17 + 0x80 + lVar14);
      *puVar3 = *(int32_t *)(lVar18 + 0xc0);
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      uVar13 = *(uint64_t *)(lVar18 + 0xd8);
      puVar2 = (uint64_t *)(lVar17 + 0x90 + lVar14);
      *puVar2 = *(uint64_t *)(lVar18 + 0xd0);
      puVar2[1] = uVar13;
    } while (cVar20 < *(char *)(param_1 + 0x20));
  }
  plVar5 = *(longlong **)(param_1 + 0x210);
  if (plVar5 != (longlong *)0x0) {
    lVar14 = __RTCastToVoid(plVar5);
    (**(code **)(*plVar5 + 0x20))(plVar5,0);
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar14);
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x208);
  *(longlong *)(param_1 + 0x210) = param_3;
  lVar17 = (longlong)*(char *)(lVar14 + 0x148);
  if (0 < lVar17) {
    puVar15 = (int8_t *)(param_3 + 8);
    do {
      *puVar15 = puVar15[(lVar14 - param_3) + 0xb8];
      puVar15 = puVar15 + 1;
    } while ((longlong)(puVar15 + (-8 - param_3)) < lVar17);
  }
  if (*(float *)(param_1 + 0x3c) < 0.0) {
    *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
    return;
  }
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fa098(longlong param_1,longlong param_2,longlong param_3)
void FUN_1802fa098(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint uVar4;
  longlong *plVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  char cVar12;
  longlong in_RAX;
  uint64_t uVar13;
  longlong lVar14;
  int8_t *puVar15;
  longlong lVar16;
  uint64_t unaff_RBX;
  longlong lVar17;
  longlong lVar18;
  uint64_t unaff_RDI;
  char cVar19;
  uint64_t unaff_R13;
  char cVar20;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  *(longlong *)(param_1 + 0x208) = param_2;
  *(int8_t *)(param_1 + 0x20) = *(int8_t *)(param_2 + 0x148);
  FUN_1802fffb0();
  cVar20 = '\0';
  if ('\0' < *(char *)(param_1 + 0x20)) {
    do {
      lVar14 = *(longlong *)(param_1 + 0x18);
      lVar18 = (longlong)cVar20 * 0x1b0 + *(longlong *)(param_2 + 0x140);
      lVar17 = (longlong)cVar20 * 0x100;
      *(int8_t *)(lVar17 + 0xa0 + lVar14) = *(int8_t *)(lVar18 + 0xf0);
      cVar12 = *(char *)(lVar18 + 0xf1);
      *(char *)(lVar17 + 0xa1 + lVar14) = cVar12;
      if (cVar12 < '\x01') {
        *(uint64_t *)(lVar17 + 0xa8 + lVar14) = 0;
      }
      else {
        if (cVar12 == '\0') {
          cVar12 = '\0';
          uVar13 = 0;
        }
        else {
          uVar13 = FUN_18062b420(_DAT_180c8ed18,(longlong)cVar12);
          cVar12 = *(char *)(lVar17 + 0xa1 + lVar14);
        }
        cVar19 = '\0';
        *(uint64_t *)(lVar17 + 0xa8 + lVar14) = uVar13;
        if ('\0' < cVar12) {
          do {
            lVar16 = (longlong)cVar19;
            cVar19 = cVar19 + '\x01';
            *(int8_t *)(lVar16 + *(longlong *)(lVar17 + 0xa8 + lVar14)) =
                 *(int8_t *)(lVar16 + *(longlong *)(lVar18 + 0xf8));
          } while (cVar19 < *(char *)(lVar17 + 0xa1 + lVar14));
        }
      }
      uVar13 = *(uint64_t *)(lVar18 + 0x80);
      uVar9 = *(uint64_t *)(lVar18 + 0x88);
      uVar10 = *(uint64_t *)(lVar18 + 0x98);
      puVar2 = (uint64_t *)(lVar17 + 0x30 + lVar14);
      *puVar2 = *(uint64_t *)(lVar18 + 0x90);
      puVar2[1] = uVar10;
      puVar2 = (uint64_t *)(lVar17 + 0x40 + lVar14);
      *puVar2 = uVar13;
      puVar2[1] = uVar9;
      uVar13 = *(uint64_t *)(lVar18 + 0x30);
      uVar9 = *(uint64_t *)(lVar18 + 0x38);
      uVar10 = *(uint64_t *)(lVar18 + 0x40);
      uVar11 = *(uint64_t *)(lVar18 + 0x48);
      do {
        LOCK();
        puVar1 = (uint *)(lVar17 + lVar14);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 1;
        UNLOCK();
      } while ((uVar4 & 1) != 0);
      puVar2 = (uint64_t *)(lVar17 + 4 + lVar14);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2 = (uint64_t *)(lVar17 + 0x14 + lVar14);
      *puVar2 = uVar13;
      puVar2[1] = uVar9;
      *(int32_t *)(lVar17 + lVar14) = 0;
      cVar20 = cVar20 + '\x01';
      uVar13 = *(uint64_t *)(lVar18 + 0xa8);
      puVar2 = (uint64_t *)(lVar17 + 0x60 + lVar14);
      *puVar2 = *(uint64_t *)(lVar18 + 0xa0);
      puVar2[1] = uVar13;
      uVar13 = *(uint64_t *)(lVar18 + 0xb8);
      puVar2 = (uint64_t *)(lVar17 + 0x70 + lVar14);
      *puVar2 = *(uint64_t *)(lVar18 + 0xb0);
      puVar2[1] = uVar13;
      uVar6 = *(int32_t *)(lVar18 + 0xc4);
      uVar7 = *(int32_t *)(lVar18 + 200);
      uVar8 = *(int32_t *)(lVar18 + 0xcc);
      puVar3 = (int32_t *)(lVar17 + 0x80 + lVar14);
      *puVar3 = *(int32_t *)(lVar18 + 0xc0);
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      uVar13 = *(uint64_t *)(lVar18 + 0xd8);
      puVar2 = (uint64_t *)(lVar17 + 0x90 + lVar14);
      *puVar2 = *(uint64_t *)(lVar18 + 0xd0);
      puVar2[1] = uVar13;
    } while (cVar20 < *(char *)(param_1 + 0x20));
  }
  plVar5 = *(longlong **)(param_1 + 0x210);
  if (plVar5 != (longlong *)0x0) {
    lVar14 = __RTCastToVoid(plVar5);
    (**(code **)(*plVar5 + 0x20))(plVar5,0);
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar14);
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x208);
  *(longlong *)(param_1 + 0x210) = param_3;
  lVar17 = (longlong)*(char *)(lVar14 + 0x148);
  if (0 < lVar17) {
    puVar15 = (int8_t *)(param_3 + 8);
    do {
      *puVar15 = puVar15[(lVar14 - param_3) + 0xb8];
      puVar15 = puVar15 + 1;
    } while ((longlong)(puVar15 + (-8 - param_3)) < lVar17);
  }
  if (*(float *)(param_1 + 0x3c) < 0.0) {
    *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
    return;
  }
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fa0aa(longlong param_1,longlong param_2)
void FUN_1802fa0aa(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint uVar4;
  longlong *plVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  char cVar12;
  longlong in_RAX;
  uint64_t uVar13;
  longlong lVar14;
  int8_t *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong unaff_RBP;
  longlong lVar18;
  char cVar19;
  longlong unaff_R13;
  char cVar20;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  *(longlong *)(param_1 + 0x208) = param_2;
  *(int8_t *)(param_1 + 0x20) = *(int8_t *)(param_2 + 0x148);
  FUN_1802fffb0();
  cVar20 = '\0';
  if ('\0' < *(char *)(unaff_RBP + 0x20)) {
    do {
      lVar14 = *(longlong *)(unaff_RBP + 0x18);
      lVar18 = (longlong)cVar20 * 0x1b0 + *(longlong *)(param_2 + 0x140);
      lVar17 = (longlong)cVar20 * 0x100;
      *(int8_t *)(lVar17 + 0xa0 + lVar14) = *(int8_t *)(lVar18 + 0xf0);
      cVar12 = *(char *)(lVar18 + 0xf1);
      *(char *)(lVar17 + 0xa1 + lVar14) = cVar12;
      if (cVar12 < '\x01') {
        *(uint64_t *)(lVar17 + 0xa8 + lVar14) = 0;
      }
      else {
        if (cVar12 == '\0') {
          cVar12 = '\0';
          uVar13 = 0;
        }
        else {
          uVar13 = FUN_18062b420(_DAT_180c8ed18,(longlong)cVar12);
          cVar12 = *(char *)(lVar17 + 0xa1 + lVar14);
        }
        cVar19 = '\0';
        *(uint64_t *)(lVar17 + 0xa8 + lVar14) = uVar13;
        if ('\0' < cVar12) {
          do {
            lVar16 = (longlong)cVar19;
            cVar19 = cVar19 + '\x01';
            *(int8_t *)(lVar16 + *(longlong *)(lVar17 + 0xa8 + lVar14)) =
                 *(int8_t *)(lVar16 + *(longlong *)(lVar18 + 0xf8));
          } while (cVar19 < *(char *)(lVar17 + 0xa1 + lVar14));
        }
      }
      uVar13 = *(uint64_t *)(lVar18 + 0x80);
      uVar9 = *(uint64_t *)(lVar18 + 0x88);
      uVar10 = *(uint64_t *)(lVar18 + 0x98);
      puVar2 = (uint64_t *)(lVar17 + 0x30 + lVar14);
      *puVar2 = *(uint64_t *)(lVar18 + 0x90);
      puVar2[1] = uVar10;
      puVar2 = (uint64_t *)(lVar17 + 0x40 + lVar14);
      *puVar2 = uVar13;
      puVar2[1] = uVar9;
      uVar13 = *(uint64_t *)(lVar18 + 0x30);
      uVar9 = *(uint64_t *)(lVar18 + 0x38);
      uVar10 = *(uint64_t *)(lVar18 + 0x40);
      uVar11 = *(uint64_t *)(lVar18 + 0x48);
      do {
        LOCK();
        puVar1 = (uint *)(lVar17 + lVar14);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 1;
        UNLOCK();
      } while ((uVar4 & 1) != 0);
      puVar2 = (uint64_t *)(lVar17 + 4 + lVar14);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2 = (uint64_t *)(lVar17 + 0x14 + lVar14);
      *puVar2 = uVar13;
      puVar2[1] = uVar9;
      *(int32_t *)(lVar17 + lVar14) = 0;
      cVar20 = cVar20 + '\x01';
      uVar13 = *(uint64_t *)(lVar18 + 0xa8);
      puVar2 = (uint64_t *)(lVar17 + 0x60 + lVar14);
      *puVar2 = *(uint64_t *)(lVar18 + 0xa0);
      puVar2[1] = uVar13;
      uVar13 = *(uint64_t *)(lVar18 + 0xb8);
      puVar2 = (uint64_t *)(lVar17 + 0x70 + lVar14);
      *puVar2 = *(uint64_t *)(lVar18 + 0xb0);
      puVar2[1] = uVar13;
      uVar6 = *(int32_t *)(lVar18 + 0xc4);
      uVar7 = *(int32_t *)(lVar18 + 200);
      uVar8 = *(int32_t *)(lVar18 + 0xcc);
      puVar3 = (int32_t *)(lVar17 + 0x80 + lVar14);
      *puVar3 = *(int32_t *)(lVar18 + 0xc0);
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      uVar13 = *(uint64_t *)(lVar18 + 0xd8);
      puVar2 = (uint64_t *)(lVar17 + 0x90 + lVar14);
      *puVar2 = *(uint64_t *)(lVar18 + 0xd0);
      puVar2[1] = uVar13;
    } while (cVar20 < *(char *)(unaff_RBP + 0x20));
  }
  plVar5 = *(longlong **)(unaff_RBP + 0x210);
  if (plVar5 != (longlong *)0x0) {
    lVar14 = __RTCastToVoid(plVar5);
    (**(code **)(*plVar5 + 0x20))(plVar5,0);
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar14);
    }
  }
  lVar14 = *(longlong *)(unaff_RBP + 0x208);
  *(longlong *)(unaff_RBP + 0x210) = unaff_R13;
  lVar17 = (longlong)*(char *)(lVar14 + 0x148);
  if (0 < lVar17) {
    puVar15 = (int8_t *)(unaff_R13 + 8);
    do {
      *puVar15 = puVar15[(lVar14 - unaff_R13) + 0xb8];
      puVar15 = puVar15 + 1;
    } while ((longlong)(puVar15 + (-8 - unaff_R13)) < lVar17);
  }
  if (*(float *)(unaff_RBP + 0x3c) < 0.0) {
    *(int32_t *)(unaff_RBP + 0x34) = 0x3dcccccd;
    return;
  }
  *(float *)(unaff_RBP + 0x34) = *(float *)(unaff_RBP + 0x3c) + 1.1920929e-07;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fa0d8(void)
void FUN_1802fa0d8(void)

{
  uint *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint uVar4;
  longlong *plVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  char cVar12;
  uint64_t uVar13;
  longlong lVar14;
  int8_t *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong unaff_RBP;
  longlong lVar18;
  char cVar19;
  longlong unaff_R13;
  char unaff_R14B;
  longlong unaff_R15;
  
  do {
    lVar14 = *(longlong *)(unaff_RBP + 0x18);
    lVar18 = (longlong)unaff_R14B * 0x1b0 + *(longlong *)(unaff_R15 + 0x140);
    lVar17 = (longlong)unaff_R14B * 0x100;
    *(int8_t *)(lVar17 + 0xa0 + lVar14) = *(int8_t *)(lVar18 + 0xf0);
    cVar12 = *(char *)(lVar18 + 0xf1);
    *(char *)(lVar17 + 0xa1 + lVar14) = cVar12;
    if (cVar12 < '\x01') {
      *(uint64_t *)(lVar17 + 0xa8 + lVar14) = 0;
    }
    else {
      if (cVar12 == '\0') {
        cVar12 = '\0';
        uVar13 = 0;
      }
      else {
        uVar13 = FUN_18062b420(_DAT_180c8ed18,(longlong)cVar12);
        cVar12 = *(char *)(lVar17 + 0xa1 + lVar14);
      }
      cVar19 = '\0';
      *(uint64_t *)(lVar17 + 0xa8 + lVar14) = uVar13;
      if ('\0' < cVar12) {
        do {
          lVar16 = (longlong)cVar19;
          cVar19 = cVar19 + '\x01';
          *(int8_t *)(lVar16 + *(longlong *)(lVar17 + 0xa8 + lVar14)) =
               *(int8_t *)(lVar16 + *(longlong *)(lVar18 + 0xf8));
        } while (cVar19 < *(char *)(lVar17 + 0xa1 + lVar14));
      }
    }
    uVar13 = *(uint64_t *)(lVar18 + 0x80);
    uVar9 = *(uint64_t *)(lVar18 + 0x88);
    uVar10 = *(uint64_t *)(lVar18 + 0x98);
    puVar2 = (uint64_t *)(lVar17 + 0x30 + lVar14);
    *puVar2 = *(uint64_t *)(lVar18 + 0x90);
    puVar2[1] = uVar10;
    puVar2 = (uint64_t *)(lVar17 + 0x40 + lVar14);
    *puVar2 = uVar13;
    puVar2[1] = uVar9;
    uVar13 = *(uint64_t *)(lVar18 + 0x30);
    uVar9 = *(uint64_t *)(lVar18 + 0x38);
    uVar10 = *(uint64_t *)(lVar18 + 0x40);
    uVar11 = *(uint64_t *)(lVar18 + 0x48);
    do {
      LOCK();
      puVar1 = (uint *)(lVar17 + lVar14);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 1;
      UNLOCK();
    } while ((uVar4 & 1) != 0);
    puVar2 = (uint64_t *)(lVar17 + 4 + lVar14);
    *puVar2 = uVar10;
    puVar2[1] = uVar11;
    puVar2 = (uint64_t *)(lVar17 + 0x14 + lVar14);
    *puVar2 = uVar13;
    puVar2[1] = uVar9;
    *(int32_t *)(lVar17 + lVar14) = 0;
    unaff_R14B = unaff_R14B + '\x01';
    uVar13 = *(uint64_t *)(lVar18 + 0xa8);
    puVar2 = (uint64_t *)(lVar17 + 0x60 + lVar14);
    *puVar2 = *(uint64_t *)(lVar18 + 0xa0);
    puVar2[1] = uVar13;
    uVar13 = *(uint64_t *)(lVar18 + 0xb8);
    puVar2 = (uint64_t *)(lVar17 + 0x70 + lVar14);
    *puVar2 = *(uint64_t *)(lVar18 + 0xb0);
    puVar2[1] = uVar13;
    uVar6 = *(int32_t *)(lVar18 + 0xc4);
    uVar7 = *(int32_t *)(lVar18 + 200);
    uVar8 = *(int32_t *)(lVar18 + 0xcc);
    puVar3 = (int32_t *)(lVar17 + 0x80 + lVar14);
    *puVar3 = *(int32_t *)(lVar18 + 0xc0);
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    uVar6 = *(int32_t *)(lVar18 + 0xd4);
    uVar7 = *(int32_t *)(lVar18 + 0xd8);
    uVar8 = *(int32_t *)(lVar18 + 0xdc);
    puVar3 = (int32_t *)(lVar17 + 0x90 + lVar14);
    *puVar3 = *(int32_t *)(lVar18 + 0xd0);
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
  } while (unaff_R14B < *(char *)(unaff_RBP + 0x20));
  plVar5 = *(longlong **)(unaff_RBP + 0x210);
  if (plVar5 != (longlong *)0x0) {
    lVar14 = __RTCastToVoid(plVar5);
    (**(code **)(*plVar5 + 0x20))(plVar5,0);
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar14);
    }
  }
  lVar14 = *(longlong *)(unaff_RBP + 0x208);
  *(longlong *)(unaff_RBP + 0x210) = unaff_R13;
  lVar17 = (longlong)*(char *)(lVar14 + 0x148);
  if (0 < lVar17) {
    puVar15 = (int8_t *)(unaff_R13 + 8);
    do {
      *puVar15 = puVar15[(lVar14 - unaff_R13) + 0xb8];
      puVar15 = puVar15 + 1;
    } while ((longlong)(puVar15 + (-8 - unaff_R13)) < lVar17);
  }
  if (*(float *)(unaff_RBP + 0x3c) < 0.0) {
    *(int32_t *)(unaff_RBP + 0x34) = 0x3dcccccd;
    return;
  }
  *(float *)(unaff_RBP + 0x34) = *(float *)(unaff_RBP + 0x3c) + 1.1920929e-07;
  return;
}






// 函数: void FUN_1802fa22d(void)
void FUN_1802fa22d(void)

{
  longlong *plVar1;
  longlong lVar2;
  int8_t *puVar3;
  longlong unaff_RBP;
  longlong lVar4;
  longlong unaff_R13;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x210);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = __RTCastToVoid(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  lVar2 = *(longlong *)(unaff_RBP + 0x208);
  *(longlong *)(unaff_RBP + 0x210) = unaff_R13;
  lVar4 = (longlong)*(char *)(lVar2 + 0x148);
  if (0 < lVar4) {
    puVar3 = (int8_t *)(unaff_R13 + 8);
    do {
      *puVar3 = puVar3[(lVar2 - unaff_R13) + 0xb8];
      puVar3 = puVar3 + 1;
    } while ((longlong)(puVar3 + (-8 - unaff_R13)) < lVar4);
  }
  if (0.0 <= *(float *)(unaff_RBP + 0x3c)) {
    *(float *)(unaff_RBP + 0x34) = *(float *)(unaff_RBP + 0x3c) + 1.1920929e-07;
    return;
  }
  *(int32_t *)(unaff_RBP + 0x34) = 0x3dcccccd;
  return;
}






// 函数: void FUN_1802fa243(void)
void FUN_1802fa243(void)

{
  longlong lVar1;
  int8_t *puVar2;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong lVar3;
  longlong unaff_R13;
  int32_t extraout_XMM0_Da;
  
  lVar1 = __RTCastToVoid();
  (**(code **)(*unaff_RBX + 0x20))(extraout_XMM0_Da,0);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  lVar1 = *(longlong *)(unaff_RBP + 0x208);
  *(longlong *)(unaff_RBP + 0x210) = unaff_R13;
  lVar3 = (longlong)*(char *)(lVar1 + 0x148);
  if (0 < lVar3) {
    puVar2 = (int8_t *)(unaff_R13 + 8);
    do {
      *puVar2 = puVar2[(lVar1 - unaff_R13) + 0xb8];
      puVar2 = puVar2 + 1;
    } while ((longlong)(puVar2 + (-8 - unaff_R13)) < lVar3);
  }
  if (0.0 <= *(float *)(unaff_RBP + 0x3c)) {
    *(float *)(unaff_RBP + 0x34) = *(float *)(unaff_RBP + 0x3c) + 1.1920929e-07;
    return;
  }
  *(int32_t *)(unaff_RBP + 0x34) = 0x3dcccccd;
  return;
}






// 函数: void FUN_1802fa296(uint64_t param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_1802fa296(uint64_t param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  int8_t *puVar1;
  longlong unaff_RBP;
  longlong unaff_R13;
  
  puVar1 = (int8_t *)(unaff_R13 + 8);
  do {
    *puVar1 = puVar1[(param_2 - unaff_R13) + -8];
    puVar1 = puVar1 + 1;
  } while ((longlong)(puVar1 + (-8 - unaff_R13)) < param_4);
  if (0.0 <= *(float *)(unaff_RBP + 0x3c)) {
    *(float *)(unaff_RBP + 0x34) = *(float *)(unaff_RBP + 0x3c) + 1.1920929e-07;
    return;
  }
  *(int32_t *)(unaff_RBP + 0x34) = 0x3dcccccd;
  return;
}






// 函数: void FUN_1802fa2d6(uint64_t param_1,float param_2)
void FUN_1802fa2d6(uint64_t param_1,float param_2)

{
  longlong unaff_RBP;
  
  *(float *)(unaff_RBP + 0x34) = param_2 + 1.1920929e-07;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




