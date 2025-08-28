#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part068.c - 7 个函数

// 函数: void FUN_18069f51a(void)
void FUN_18069f51a(void)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  uint uVar5;
  uint uVar6;
  longlong unaff_R13;
  int8_t unaff_R14B;
  longlong lVar7;
  bool bVar8;
  
  *(int8_t *)(unaff_R13 + 0x4416) = unaff_R14B;
  iVar2 = FUN_18069bbd0();
  if (iVar2 != 0) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      iVar2 = 7;
      do {
        uVar6 = ((uint)((*(int *)(unaff_RBX + 0x1c) + -1) * 0x80) >> 8) + 1;
        if (*(int *)(unaff_RBX + 0x18) < 0) {
          FUN_18069ec80();
        }
        uVar4 = *(ulonglong *)(unaff_RBX + 0x10);
        uVar3 = (ulonglong)uVar6 << 0x38;
        bVar8 = uVar3 <= uVar4;
        if (bVar8) {
          uVar6 = *(int *)(unaff_RBX + 0x1c) - uVar6;
          uVar4 = uVar4 - uVar3;
        }
        bVar1 = (&unknown_var_8608_ptr)[uVar6];
        *(int *)(unaff_RBX + 0x18) = *(int *)(unaff_RBX + 0x18) - (uint)bVar1;
        uVar5 = uVar5 | (uint)bVar8 << ((byte)iVar2 & 0x1f);
        *(ulonglong *)(unaff_RBX + 0x10) = uVar4 << (bVar1 & 0x3f);
        iVar2 = iVar2 + -1;
        *(uint *)(unaff_RBX + 0x1c) = uVar6 << (bVar1 & 0x1f);
      } while (-1 < iVar2);
      *(char *)(lVar7 + 0x308b + unaff_R13) = (char)uVar5;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 4);
  }
  iVar2 = FUN_18069bbd0();
  if (iVar2 != 0) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      iVar2 = 7;
      do {
        uVar6 = ((uint)((*(int *)(unaff_RBX + 0x1c) + -1) * 0x80) >> 8) + 1;
        if (*(int *)(unaff_RBX + 0x18) < 0) {
          FUN_18069ec80();
        }
        uVar4 = *(ulonglong *)(unaff_RBX + 0x10);
        uVar3 = (ulonglong)uVar6 << 0x38;
        bVar8 = uVar3 <= uVar4;
        if (bVar8) {
          uVar6 = *(int *)(unaff_RBX + 0x1c) - uVar6;
          uVar4 = uVar4 - uVar3;
        }
        bVar1 = (&unknown_var_8608_ptr)[uVar6];
        *(int *)(unaff_RBX + 0x18) = *(int *)(unaff_RBX + 0x18) - (uint)bVar1;
        uVar5 = uVar5 | (uint)bVar8 << ((byte)iVar2 & 0x1f);
        *(ulonglong *)(unaff_RBX + 0x10) = uVar4 << (bVar1 & 0x3f);
        iVar2 = iVar2 + -1;
        *(uint *)(unaff_RBX + 0x1c) = uVar6 << (bVar1 & 0x1f);
      } while (-1 < iVar2);
      *(char *)(lVar7 + 0x308f + unaff_R13) = (char)uVar5;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 3);
  }
  FUN_1806a0150();
  return;
}





// 函数: void FUN_18069f682(void)
void FUN_18069f682(void)

{
  return;
}



int FUN_18069f6a0(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  cVar2 = '\0';
  do {
    uVar5 = ((uint)*(byte *)(((longlong)cVar2 >> 1) + param_2) * (*(int *)(param_1 + 0x1c) + -1) >>
            8) + 1;
    if (*(int *)(param_1 + 0x18) < 0) {
      FUN_18069ec80(param_1);
    }
    uVar4 = *(ulonglong *)(param_1 + 0x10);
    uVar3 = (ulonglong)uVar5 << 0x38;
    bVar6 = uVar3 <= uVar4;
    if (bVar6) {
      uVar5 = *(int *)(param_1 + 0x1c) - uVar5;
      uVar4 = uVar4 - uVar3;
    }
    bVar1 = (&unknown_var_8608_ptr)[uVar5];
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar4 << (bVar1 & 0x3f);
    *(uint *)(param_1 + 0x1c) = uVar5 << (bVar1 & 0x1f);
    cVar2 = (&unknown_var_3784_ptr)[(longlong)(int)(uint)bVar6 + (longlong)cVar2];
  } while ('\0' < cVar2);
  return -(int)cVar2;
}





// 函数: void FUN_18069f770(longlong param_1,char *param_2)
void FUN_18069f770(longlong param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 0x1e7c);
  param_1 = param_1 + 0x42c0;
  param_2[2] = '\0';
  cVar2 = FUN_18069f8f0(param_1,&unknown_var_4168_ptr);
  *param_2 = cVar2;
  if (cVar2 == '\x04') {
    uVar6 = 0;
    piVar5 = (int *)(param_2 + 8);
    param_2[3] = '\x01';
    do {
      if ((uVar6 & 0xfffffffc) == 0) {
        cVar2 = param_2[(longlong)iVar1 * -0x4c];
        if (cVar2 == '\0') {
LAB_18069f812:
          iVar3 = 0;
        }
        else if (cVar2 == '\x01') {
          iVar3 = 2;
        }
        else if (cVar2 == '\x02') {
          iVar3 = 3;
        }
        else if (cVar2 == '\x03') {
          iVar3 = 1;
        }
        else {
          if (cVar2 != '\x04') goto LAB_18069f812;
          iVar3 = *(int *)((char *)((0x34 - (longlong)param_2) + (longlong)piVar5) +
                          (longlong)(param_2 + (longlong)iVar1 * -0x4c));
        }
      }
      else {
        iVar3 = piVar5[-3];
      }
      if ((uVar6 & 3) == 0) {
        cVar2 = param_2[-0x4c];
        if (cVar2 == '\0') {
LAB_18069f85f:
          iVar4 = 0;
        }
        else if (cVar2 == '\x01') {
          iVar4 = 2;
        }
        else if (cVar2 == '\x02') {
          iVar4 = 3;
        }
        else if (cVar2 == '\x03') {
          iVar4 = 1;
        }
        else {
          if (cVar2 != '\x04') goto LAB_18069f85f;
          iVar4 = piVar5[-0xf];
        }
      }
      else {
        iVar4 = *piVar5;
      }
      piVar5 = piVar5 + 1;
      iVar3 = FUN_18069f6a0(param_1,&unknown_var_4240_ptr + ((longlong)iVar4 + (longlong)iVar3 * 10) * 9);
      uVar6 = uVar6 + 1;
      *piVar5 = iVar3;
    } while ((int)uVar6 < 0x10);
  }
  cVar2 = FUN_1806a02d0(param_1,&unknown_var_3804_ptr);
  param_2[1] = cVar2;
  return;
}





// 函数: void FUN_18069f7a6(void)
void FUN_18069f7a6(void)

{
  int8_t uVar1;
  int32_t uVar2;
  int32_t *puVar3;
  int iVar4;
  longlong unaff_RDI;
  
  iVar4 = 0;
  puVar3 = (int32_t *)(unaff_RDI + 8);
  *(int8_t *)(unaff_RDI + 3) = 1;
  do {
    puVar3 = puVar3 + 1;
    uVar2 = FUN_18069f6a0();
    iVar4 = iVar4 + 1;
    *puVar3 = uVar2;
  } while (iVar4 < 0x10);
  uVar1 = FUN_1806a02d0();
  *(int8_t *)(unaff_RDI + 1) = uVar1;
  return;
}





// 函数: void FUN_18069f8cb(void)
void FUN_18069f8cb(void)

{
  int8_t uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_1806a02d0();
  *(int8_t *)(unaff_RDI + 1) = uVar1;
  return;
}



int FUN_18069f8f0(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  cVar2 = '\0';
  do {
    uVar5 = ((uint)*(byte *)(((longlong)cVar2 >> 1) + param_2) * (*(int *)(param_1 + 0x1c) + -1) >>
            8) + 1;
    if (*(int *)(param_1 + 0x18) < 0) {
      FUN_18069ec80(param_1);
    }
    uVar4 = *(ulonglong *)(param_1 + 0x10);
    uVar3 = (ulonglong)uVar5 << 0x38;
    bVar6 = uVar3 <= uVar4;
    if (bVar6) {
      uVar5 = *(int *)(param_1 + 0x1c) - uVar5;
      uVar4 = uVar4 - uVar3;
    }
    bVar1 = (&unknown_var_8608_ptr)[uVar5];
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar4 << (bVar1 & 0x3f);
    *(uint *)(param_1 + 0x1c) = uVar5 << (bVar1 & 0x1f);
    cVar2 = (&unknown_var_3816_ptr)[(longlong)(int)(uint)bVar6 + (longlong)cVar2];
  } while ('\0' < cVar2);
  return -(int)cVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18069f9c0(longlong param_1,longlong param_2,char *param_3)
void FUN_18069f9c0(longlong param_1,longlong param_2,char *param_3)

{
  longlong lVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int32_t uVar11;
  longlong lVar12;
  int iVar13;
  int32_t *puVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  int8_t auStack_f8 [32];
  char *pcStack_d8;
  int32_t uStack_d0;
  longlong lStack_c8;
  int iStack_c0;
  int32_t uStack_b8;
  int iStack_b0;
  int iStack_a8;
  uint64_t uStack_98;
  uint *puStack_90;
  int iStack_88;
  char *pcStack_80;
  char *pcStack_78;
  longlong lStack_70;
  int32_t uStack_68;
  uint64_t uStack_64;
  uint64_t uStack_58;
  int iStack_50;
  int iStack_4c;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  lVar1 = param_1 + 0x42c0;
  lStack_70 = param_2;
  cVar6 = FUN_18069bbd0(lVar1,*(int8_t *)(param_1 + 0x4414));
  param_3[2] = cVar6;
  if (cVar6 == '\0') {
    param_3[4] = '\0';
    param_3[5] = '\0';
    param_3[6] = '\0';
    param_3[7] = '\0';
    cVar6 = FUN_1806a03a0(lVar1,param_1 + 0x308b);
    *param_3 = cVar6;
    if (cVar6 == '\x04') {
      param_3[3] = '\x01';
      puVar14 = (int32_t *)(param_2 + 0xc);
      lVar12 = 0x10;
      do {
        uVar11 = FUN_18069f6a0(lVar1,param_1 + 0x3082);
        *puVar14 = uVar11;
        puVar14 = puVar14 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    cVar6 = FUN_1806a02d0(lVar1,param_1 + 0x308f);
    param_3[1] = cVar6;
    goto LAB_18069fefd;
  }
  puStack_90 = &uStack_68;
  pcStack_80 = (char *)(param_2 + -0x4c);
  iVar8 = *(int *)(param_1 + 0xf08);
  piVar17 = (int *)&uStack_58;
  param_3[10] = '\0';
  pcStack_78 = (char *)(param_2 + (longlong)iVar8 * -0x4c);
  iVar8 = FUN_18069bbd0(lVar1,*(int8_t *)(param_1 + 0x4415));
  if (iVar8 != 0) {
    cVar6 = FUN_18069bbd0(lVar1,*(int8_t *)(param_1 + 0x4416));
    param_3[2] = cVar6 + '\x02';
  }
  uVar16 = uStack_98._4_4_;
  uVar15 = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  iStack_4c = 0;
  iStack_50 = 0;
  uStack_58 = 0;
  iVar8 = 0;
  if (pcStack_78[2] != 0) {
    uVar2 = *(uint *)(pcStack_78 + 4);
    uVar15 = 0;
    if (uVar2 != 0) {
      puStack_90 = (uint *)&uStack_64;
      uVar15 = uVar2;
      if (*(int *)(param_1 + 0x2c04 + (ulonglong)(byte)pcStack_78[2] * 4) !=
          *(int *)(param_1 + 0x2c04 + (ulonglong)(byte)param_3[2] * 4)) {
        uStack_64._0_2_ = (short)uVar2;
        uStack_64._0_4_ = CONCAT22(-(short)(uVar2 >> 0x10),-(short)uStack_64);
        uVar15 = (uint)uStack_64;
      }
      uStack_64 = (ulonglong)uVar15;
      piVar17 = (int *)((longlong)&uStack_58 + 4);
    }
    *piVar17 = *piVar17 + 2;
    iVar8 = (int)uStack_58;
  }
  uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
  if (pcStack_80[2] != 0) {
    uVar2 = *(uint *)(pcStack_80 + 4);
    if (uVar2 == 0) {
      iVar8 = iVar8 + 2;
      uStack_58 = CONCAT44(uStack_58._4_4_,iVar8);
    }
    else {
      uStack_98._0_4_ = uVar2;
      if (*(int *)(param_1 + 0x2c04 + (ulonglong)(byte)pcStack_80[2] * 4) !=
          *(int *)(param_1 + 0x2c04 + (ulonglong)(byte)param_3[2] * 4)) {
        uStack_98._0_2_ = (short)uVar2;
        uStack_98._2_2_ = (short)(uVar2 >> 0x10);
        uStack_98._0_4_ = CONCAT22(-uStack_98._2_2_,-(short)uStack_98);
      }
      if ((uint)uStack_98 != *puStack_90) {
        puStack_90 = puStack_90 + 1;
        piVar17 = piVar17 + 1;
        *puStack_90 = (uint)uStack_98;
        uVar15 = (uint)uStack_64;
      }
      *piVar17 = *piVar17 + 2;
      uStack_98 = CONCAT44(uVar16,iStack_50);
      iVar8 = (int)uStack_58;
    }
  }
  if (pcStack_78[-0x4a] == 0) {
LAB_18069fbb4:
    iVar10 = (uint)uStack_98;
  }
  else {
    uVar16 = *(uint *)(pcStack_78 + -0x48);
    if (uVar16 == 0) {
      iVar8 = iVar8 + 1;
      goto LAB_18069fbb4;
    }
    uStack_98._0_4_ = uVar16;
    if (*(int *)(param_1 + 0x2c04 + (ulonglong)(byte)pcStack_78[-0x4a] * 4) !=
        *(int *)(param_1 + 0x2c04 + (ulonglong)(byte)param_3[2] * 4)) {
      uStack_98._0_2_ = (short)uVar16;
      uStack_98._2_2_ = (short)(uVar16 >> 0x10);
      uStack_98._0_4_ = CONCAT22(-uStack_98._2_2_,-(short)uStack_98);
    }
    if ((uint)uStack_98 != *puStack_90) {
      puStack_90 = puStack_90 + 1;
      piVar17 = piVar17 + 1;
      *puStack_90 = (uint)uStack_98;
      uVar15 = (uint)uStack_64;
    }
    *piVar17 = *piVar17 + 1;
    iVar10 = iStack_50;
    iVar8 = (int)uStack_58;
  }
  iVar9 = FUN_18069bbd0(lVar1,*(int32_t *)(&unknown_var_1232_ptr + (longlong)iVar8 * 0x10));
  if (iVar9 == 0) {
    *param_3 = '\a';
    param_3[4] = '\0';
    param_3[5] = '\0';
    param_3[6] = '\0';
    param_3[7] = '\0';
    goto LAB_18069fefd;
  }
  iVar13 = (uint)(*puStack_90 == uVar15 && 0 < iStack_4c) + uStack_58._4_4_;
  iVar9 = iVar10;
  uVar16 = uVar15;
  if (iVar13 < iVar10) {
    uVar16 = uStack_64._4_4_;
    uStack_64 = CONCAT44(uVar15,uStack_64._4_4_);
    iVar9 = iVar13;
    iVar13 = iVar10;
  }
  uStack_98 = CONCAT44(uStack_98._4_4_,iVar13);
  iVar10 = FUN_18069bbd0(lVar1,*(int32_t *)(&unknown_var_1236_ptr + (longlong)iVar13 * 0x10));
  if (iVar10 == 0) {
    *param_3 = '\x05';
    *(uint *)(param_3 + 4) = uVar16;
  }
  else {
    iVar10 = FUN_18069bbd0(lVar1,*(int32_t *)(&unknown_var_1240_ptr + (longlong)iVar9 * 0x10));
    pcVar4 = pcStack_78;
    pcVar3 = pcStack_80;
    if (iVar10 != 0) {
      iVar9 = *(int *)(param_1 + 0xf8c) + -0x80;
      iVar13 = *(int *)(param_1 + 0xf90) + 0x80;
      iVar10 = *(int *)(param_1 + 0xf88) + 0x80;
      uStack_58 = param_1 + 0x34b5;
      iStack_88 = *(int *)(param_1 + 0xf84) + -0x80;
      puStack_90 = (uint *)CONCAT44(puStack_90._4_4_,iVar10);
      lVar12 = (longlong)(int)(uint)(iVar8 <= (int)(uint)uStack_98);
      uStack_98 = lVar12 * 4;
      iVar8 = (int)*(short *)((longlong)&uStack_68 + uStack_98 + 2);
      if (iVar8 < iStack_88) {
        sVar7 = *(short *)(param_1 + 0xf84) + -0x80;
LAB_18069fcd2:
        *(short *)((longlong)&uStack_68 + uStack_98 + 2) = sVar7;
      }
      else if (iVar10 < iVar8) {
        sVar7 = *(short *)(param_1 + 0xf88) + 0x80;
        goto LAB_18069fcd2;
      }
      if (*(short *)(&uStack_68 + lVar12) < iVar9) {
        sVar7 = *(short *)(param_1 + 0xf8c) + -0x80;
LAB_18069fcfe:
        *(short *)(&uStack_68 + lVar12) = sVar7;
      }
      else if (iVar13 < *(short *)(&uStack_68 + lVar12)) {
        sVar7 = *(short *)(param_1 + 0xf90) + 0x80;
        goto LAB_18069fcfe;
      }
      iVar8 = FUN_18069bbd0(lVar1,*(int32_t *)
                                   (&unknown_var_1244_ptr +
                                   ((ulonglong)(pcStack_78[-0x4c] == '\t') +
                                   ((ulonglong)(*pcStack_80 == '\t') +
                                   (ulonglong)(*pcStack_78 == '\t')) * 2) * 0x10));
      lVar5 = uStack_58;
      lVar12 = lStack_70;
      if (iVar8 == 0) {
        sVar7 = FUN_18069ff30(lVar1,uStack_58);
        *(short *)(param_3 + 4) = sVar7 * 2;
        sVar7 = FUN_18069ff30(lVar1,lVar5 + 0x13);
        *(short *)(param_3 + 6) = sVar7 * 2;
        *(short *)(param_3 + 4) =
             *(short *)(param_3 + 4) + *(short *)((longlong)&uStack_68 + uStack_98);
        *(short *)(param_3 + 6) =
             *(short *)(param_3 + 6) + *(short *)((longlong)&uStack_68 + uStack_98 + 2);
        *param_3 = '\b';
        param_3[10] = ((*(short *)(param_3 + 6) < iStack_88 ||
                       (int)puStack_90 < *(short *)(param_3 + 6)) ||
                      iVar13 < *(short *)(param_3 + 4)) || *(short *)(param_3 + 4) < iVar9;
      }
      else {
        uStack_d0 = *(int32_t *)((longlong)&uStack_68 + uStack_98);
        uStack_b8 = (int)puStack_90;
        iStack_c0 = iStack_88;
        lStack_c8 = uStack_58;
        pcStack_d8 = param_3;
        iStack_b0 = iVar9;
        iStack_a8 = iVar13;
        FUN_18069ef30(lVar1,lStack_70,pcVar3,pcVar4);
        *(int32_t *)(param_3 + 4) = *(int32_t *)(lVar12 + 0x48);
        *param_3 = '\t';
        param_3[3] = '\x01';
      }
      goto LAB_18069fefd;
    }
    *(uint *)(param_3 + 4) = uStack_64._4_4_;
    *param_3 = '\x06';
  }
  if ((int)*(short *)(param_3 + 6) < *(int *)(param_1 + 0xf84) + -0x80) {
    sVar7 = *(short *)(param_1 + 0xf84) + -0x80;
LAB_18069fe59:
    *(short *)(param_3 + 6) = sVar7;
  }
  else if (*(int *)(param_1 + 0xf88) + 0x80 < (int)*(short *)(param_3 + 6)) {
    sVar7 = *(short *)(param_1 + 0xf88) + 0x80;
    goto LAB_18069fe59;
  }
  if ((int)*(short *)(param_3 + 4) < *(int *)(param_1 + 0xf8c) + -0x80) {
    *(short *)(param_3 + 4) = *(short *)(param_1 + 0xf8c) + -0x80;
  }
  else if (*(int *)(param_1 + 0xf90) + 0x80 < (int)*(short *)(param_3 + 4)) {
    *(short *)(param_3 + 4) = *(short *)(param_1 + 0xf90) + 0x80;
  }
LAB_18069fefd:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_f8);
}



uint FUN_18069ff30(longlong param_1,int8_t *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  
  uVar7 = 0;
  iVar3 = FUN_18069bbd0(param_1,*param_2);
  if (iVar3 == 0) {
    cVar2 = '\0';
    do {
      uVar7 = ((uint)(byte)param_2[((longlong)cVar2 >> 1) + 2] * (*(int *)(param_1 + 0x1c) + -1) >>
              8) + 1;
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_18069ec80(param_1);
      }
      uVar6 = *(ulonglong *)(param_1 + 0x10);
      uVar5 = (ulonglong)uVar7 << 0x38;
      bVar10 = uVar5 <= uVar6;
      if (bVar10) {
        uVar7 = *(int *)(param_1 + 0x1c) - uVar7;
        uVar6 = uVar6 - uVar5;
      }
      bVar1 = (&unknown_var_8608_ptr)[uVar7];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      *(ulonglong *)(param_1 + 0x10) = uVar6 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 0x1c) = uVar7 << (bVar1 & 0x1f);
      cVar2 = (&unknown_var_4152_ptr)[(longlong)(int)(uint)bVar10 + (longlong)cVar2];
    } while ('\0' < cVar2);
    uVar7 = -(int)cVar2;
  }
  else {
    pbVar9 = param_2 + 9;
    iVar3 = 0;
    do {
      uVar8 = ((*(int *)(param_1 + 0x1c) + -1) * (uint)*pbVar9 >> 8) + 1;
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_18069ec80(param_1);
      }
      uVar6 = *(ulonglong *)(param_1 + 0x10);
      uVar5 = (ulonglong)uVar8 << 0x38;
      bVar10 = uVar5 <= uVar6;
      if (bVar10) {
        uVar8 = *(int *)(param_1 + 0x1c) - uVar8;
        uVar6 = uVar6 - uVar5;
      }
      pbVar9 = pbVar9 + 1;
      bVar1 = (&unknown_var_8608_ptr)[uVar8];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      bVar4 = (byte)iVar3;
      iVar3 = iVar3 + 1;
      uVar7 = uVar7 + ((uint)bVar10 << (bVar4 & 0x1f));
      *(ulonglong *)(param_1 + 0x10) = uVar6 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 0x1c) = uVar8 << (bVar1 & 0x1f);
    } while (iVar3 < 3);
    iVar3 = 9;
    pbVar9 = param_2 + 0x12;
    do {
      uVar8 = ((*(int *)(param_1 + 0x1c) + -1) * (uint)*pbVar9 >> 8) + 1;
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_18069ec80(param_1);
      }
      uVar6 = *(ulonglong *)(param_1 + 0x10);
      uVar5 = (ulonglong)uVar8 << 0x38;
      bVar10 = uVar5 <= uVar6;
      if (bVar10) {
        uVar8 = *(int *)(param_1 + 0x1c) - uVar8;
        uVar6 = uVar6 - uVar5;
      }
      pbVar9 = pbVar9 + -1;
      bVar1 = (&unknown_var_8608_ptr)[uVar8];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      bVar4 = (byte)iVar3;
      iVar3 = iVar3 + -1;
      uVar7 = uVar7 + ((uint)bVar10 << (bVar4 & 0x1f));
      *(ulonglong *)(param_1 + 0x10) = uVar6 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 0x1c) = uVar8 << (bVar1 & 0x1f);
    } while (3 < iVar3);
    if ((uVar7 & 0xfff0) != 0) {
      iVar3 = FUN_18069bbd0(param_1,param_2[0xc]);
      if (iVar3 == 0) goto LAB_1806a011c;
    }
    uVar7 = uVar7 + 8;
  }
LAB_1806a011c:
  if (uVar7 != 0) {
    iVar3 = FUN_18069bbd0(param_1,param_2[1]);
    if (iVar3 != 0) {
      uVar7 = -uVar7;
    }
  }
  return uVar7;
}



uint FUN_18069ff39(longlong param_1,int8_t *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  
  uVar7 = 0;
  iVar3 = FUN_18069bbd0(param_1,*param_2);
  if (iVar3 == 0) {
    cVar2 = '\0';
    do {
      uVar7 = ((uint)(byte)param_2[((longlong)cVar2 >> 1) + 2] * (*(int *)(param_1 + 0x1c) + -1) >>
              8) + 1;
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_18069ec80(param_1);
      }
      uVar6 = *(ulonglong *)(param_1 + 0x10);
      uVar5 = (ulonglong)uVar7 << 0x38;
      bVar10 = uVar5 <= uVar6;
      if (bVar10) {
        uVar7 = *(int *)(param_1 + 0x1c) - uVar7;
        uVar6 = uVar6 - uVar5;
      }
      bVar1 = (&unknown_var_8608_ptr)[uVar7];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      *(ulonglong *)(param_1 + 0x10) = uVar6 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 0x1c) = uVar7 << (bVar1 & 0x1f);
      cVar2 = (&unknown_var_4152_ptr)[(longlong)(int)(uint)bVar10 + (longlong)cVar2];
    } while ('\0' < cVar2);
    uVar7 = -(int)cVar2;
  }
  else {
    pbVar9 = param_2 + 9;
    iVar3 = 0;
    do {
      uVar8 = ((*(int *)(param_1 + 0x1c) + -1) * (uint)*pbVar9 >> 8) + 1;
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_18069ec80(param_1);
      }
      uVar6 = *(ulonglong *)(param_1 + 0x10);
      uVar5 = (ulonglong)uVar8 << 0x38;
      bVar10 = uVar5 <= uVar6;
      if (bVar10) {
        uVar8 = *(int *)(param_1 + 0x1c) - uVar8;
        uVar6 = uVar6 - uVar5;
      }
      pbVar9 = pbVar9 + 1;
      bVar1 = (&unknown_var_8608_ptr)[uVar8];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      bVar4 = (byte)iVar3;
      iVar3 = iVar3 + 1;
      uVar7 = uVar7 + ((uint)bVar10 << (bVar4 & 0x1f));
      *(ulonglong *)(param_1 + 0x10) = uVar6 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 0x1c) = uVar8 << (bVar1 & 0x1f);
    } while (iVar3 < 3);
    iVar3 = 9;
    pbVar9 = param_2 + 0x12;
    do {
      uVar8 = ((*(int *)(param_1 + 0x1c) + -1) * (uint)*pbVar9 >> 8) + 1;
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_18069ec80(param_1);
      }
      uVar6 = *(ulonglong *)(param_1 + 0x10);
      uVar5 = (ulonglong)uVar8 << 0x38;
      bVar10 = uVar5 <= uVar6;
      if (bVar10) {
        uVar8 = *(int *)(param_1 + 0x1c) - uVar8;
        uVar6 = uVar6 - uVar5;
      }
      pbVar9 = pbVar9 + -1;
      bVar1 = (&unknown_var_8608_ptr)[uVar8];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      bVar4 = (byte)iVar3;
      iVar3 = iVar3 + -1;
      uVar7 = uVar7 + ((uint)bVar10 << (bVar4 & 0x1f));
      *(ulonglong *)(param_1 + 0x10) = uVar6 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 0x1c) = uVar8 << (bVar1 & 0x1f);
    } while (3 < iVar3);
    if ((uVar7 & 0xfff0) != 0) {
      iVar3 = FUN_18069bbd0(param_1,param_2[0xc]);
      if (iVar3 == 0) goto LAB_1806a011c;
    }
    uVar7 = uVar7 + 8;
  }
LAB_1806a011c:
  if (uVar7 != 0) {
    iVar3 = FUN_18069bbd0(param_1,param_2[1]);
    if (iVar3 != 0) {
      uVar7 = -uVar7;
    }
  }
  return uVar7;
}



uint FUN_18069ff67(void)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  uint unaff_ESI;
  uint uVar5;
  longlong unaff_R12;
  longlong unaff_R13;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  pbVar6 = (byte *)(unaff_R13 + 9);
  iVar7 = 0;
  do {
    uVar5 = ((*(int *)(unaff_RBX + 0x1c) + -1) * (uint)*pbVar6 >> 8) + 1;
    if (*(int *)(unaff_RBX + 0x18) < 0) {
      FUN_18069ec80();
    }
    uVar4 = *(ulonglong *)(unaff_RBX + 0x10);
    uVar3 = (ulonglong)uVar5 << 0x38;
    bVar8 = uVar3 <= uVar4;
    if (bVar8) {
      uVar5 = *(int *)(unaff_RBX + 0x1c) - uVar5;
      uVar4 = uVar4 - uVar3;
    }
    pbVar6 = pbVar6 + 1;
    bVar1 = *(byte *)((ulonglong)uVar5 + 0x9495c0 + unaff_R12);
    *(int *)(unaff_RBX + 0x18) = *(int *)(unaff_RBX + 0x18) - (uint)bVar1;
    bVar2 = (byte)iVar7;
    iVar7 = iVar7 + 1;
    unaff_ESI = unaff_ESI + ((uint)bVar8 << (bVar2 & 0x1f));
    *(ulonglong *)(unaff_RBX + 0x10) = uVar4 << (bVar1 & 0x3f);
    *(uint *)(unaff_RBX + 0x1c) = uVar5 << (bVar1 & 0x1f);
  } while (iVar7 < 3);
  iVar7 = 9;
  pbVar6 = (byte *)(unaff_R13 + 0x12);
  do {
    uVar5 = ((*(int *)(unaff_RBX + 0x1c) + -1) * (uint)*pbVar6 >> 8) + 1;
    if (*(int *)(unaff_RBX + 0x18) < 0) {
      FUN_18069ec80();
    }
    uVar4 = *(ulonglong *)(unaff_RBX + 0x10);
    uVar3 = (ulonglong)uVar5 << 0x38;
    bVar8 = uVar3 <= uVar4;
    if (bVar8) {
      uVar5 = *(int *)(unaff_RBX + 0x1c) - uVar5;
      uVar4 = uVar4 - uVar3;
    }
    pbVar6 = pbVar6 + -1;
    bVar1 = *(byte *)((ulonglong)uVar5 + 0x9495c0 + unaff_R12);
    *(int *)(unaff_RBX + 0x18) = *(int *)(unaff_RBX + 0x18) - (uint)bVar1;
    bVar2 = (byte)iVar7;
    iVar7 = iVar7 + -1;
    unaff_ESI = unaff_ESI + ((uint)bVar8 << (bVar2 & 0x1f));
    *(ulonglong *)(unaff_RBX + 0x10) = uVar4 << (bVar1 & 0x3f);
    *(uint *)(unaff_RBX + 0x1c) = uVar5 << (bVar1 & 0x1f);
  } while (3 < iVar7);
  if ((unaff_ESI & 0xfff0) != 0) {
    iVar7 = FUN_18069bbd0();
    if (iVar7 == 0) goto LAB_1806a011c;
  }
  unaff_ESI = unaff_ESI + 8;
LAB_1806a011c:
  if (unaff_ESI != 0) {
    iVar7 = FUN_18069bbd0();
    if (iVar7 != 0) {
      unaff_ESI = -unaff_ESI;
    }
  }
  return unaff_ESI;
}



int FUN_1806a007d(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_18069bbd0();
  if (iVar1 != 0) {
    unaff_ESI = unaff_ESI + 8;
  }
  if (unaff_ESI != 0) {
    iVar1 = FUN_18069bbd0();
    if (iVar1 != 0) {
      unaff_ESI = -unaff_ESI;
    }
  }
  return unaff_ESI;
}



int FUN_1806a012f(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_18069bbd0();
  if (iVar1 != 0) {
    unaff_ESI = -unaff_ESI;
  }
  return unaff_ESI;
}





// 函数: void FUN_180700e20(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
void FUN_180700e20(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
                  float *param_6,float *param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar15 = *param_7;
  fVar1 = *param_6;
  if (((param_6[1] == 0.0) && (param_5 == 1)) && (param_8 == 0)) {
    iVar7 = 0;
    if (3 < param_3) {
      pfVar5 = (float *)(param_2 + 8);
      lVar10 = (longlong)(param_4 * 2);
      pfVar8 = (float *)(param_1 + lVar10 * 4);
      uVar4 = (param_3 - 4U >> 2) + 1;
      uVar11 = (ulonglong)uVar4;
      iVar7 = uVar4 * 4;
      do {
        fVar14 = pfVar8[-lVar10];
        fVar13 = pfVar8[param_4 - lVar10];
        fVar2 = pfVar8[param_4 * 3 - lVar10];
        pfVar5[-2] = fVar14 * 32768.0 - fVar15;
        fVar3 = *pfVar8;
        pfVar8 = pfVar8 + param_4 * 4;
        pfVar5[-1] = fVar13 * 32768.0 - fVar14 * 32768.0 * fVar1;
        *pfVar5 = fVar3 * 32768.0 - fVar13 * 32768.0 * fVar1;
        fVar15 = fVar2 * 32768.0 * fVar1;
        pfVar5[1] = fVar2 * 32768.0 - fVar3 * 32768.0 * fVar1;
        pfVar5 = pfVar5 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (iVar7 < param_3) {
      pfVar5 = (float *)(param_2 + (longlong)iVar7 * 4);
      pfVar8 = (float *)(param_1 + (longlong)(iVar7 * param_4) * 4);
      uVar11 = (ulonglong)(uint)(param_3 - iVar7);
      do {
        fVar14 = *pfVar8;
        pfVar8 = pfVar8 + param_4;
        fVar13 = fVar14 * 32768.0 - fVar15;
        fVar15 = fVar14 * 32768.0 * fVar1;
        *pfVar5 = fVar13;
        pfVar5 = pfVar5 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else {
    iVar7 = param_3 / param_5;
    if (param_5 != 1) {
                    // WARNING: Subroutine does not return
      memset(param_2,0,(longlong)param_3 * 4);
    }
    iVar12 = 0;
    if (3 < iVar7) {
      lVar10 = (longlong)(param_4 * 2);
      pfVar5 = (float *)(param_2 + 8);
      pfVar8 = (float *)(param_1 + lVar10 * 4);
      uVar4 = (iVar7 - 4U >> 2) + 1;
      uVar11 = (ulonglong)uVar4;
      iVar12 = uVar4 * 4;
      do {
        fVar14 = pfVar8[param_4 - lVar10];
        pfVar5[-2] = pfVar8[-lVar10] * 32768.0;
        fVar13 = *pfVar8;
        pfVar5[(longlong)param_5 + -2] = fVar14 * 32768.0;
        fVar14 = pfVar8[param_4 * 3 - lVar10];
        pfVar8 = pfVar8 + param_4 * 4;
        *pfVar5 = fVar13 * 32768.0;
        pfVar5[1] = fVar14 * 32768.0;
        pfVar5 = pfVar5 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    lVar10 = 0;
    if (iVar12 < iVar7) {
      pfVar5 = (float *)(param_2 + (longlong)iVar12 * 4);
      uVar11 = (ulonglong)(uint)(iVar7 - iVar12);
      pfVar8 = (float *)(param_1 + (longlong)(iVar12 * param_4) * 4);
      do {
        fVar14 = *pfVar8;
        pfVar8 = pfVar8 + param_4;
        *pfVar5 = fVar14 * 32768.0;
        pfVar5 = pfVar5 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (param_8 != 0) {
      iVar12 = 0;
      if (3 < iVar7) {
        pfVar5 = (float *)(param_2 + 8);
        uVar4 = (iVar7 - 4U >> 2) + 1;
        uVar11 = (ulonglong)uVar4;
        iVar12 = uVar4 * 4;
        do {
          fVar14 = pfVar5[-2];
          if (65536.0 <= fVar14) {
            fVar14 = 65536.0;
          }
          if (fVar14 < -65536.0) {
            fVar14 = -65536.0;
          }
          pfVar5[-2] = fVar14;
          fVar14 = pfVar5[-1];
          if (65536.0 <= fVar14) {
            fVar14 = 65536.0;
          }
          if (fVar14 < -65536.0) {
            fVar14 = -65536.0;
          }
          pfVar5[-1] = fVar14;
          fVar14 = *pfVar5;
          if (65536.0 <= fVar14) {
            fVar14 = 65536.0;
          }
          if (fVar14 < -65536.0) {
            fVar14 = -65536.0;
          }
          *pfVar5 = fVar14;
          fVar14 = pfVar5[1];
          if (65536.0 <= fVar14) {
            fVar14 = 65536.0;
          }
          if (fVar14 < -65536.0) {
            fVar14 = -65536.0;
          }
          pfVar5[1] = fVar14;
          pfVar5 = pfVar5 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (iVar12 < iVar7) {
        pfVar5 = (float *)(param_2 + (longlong)iVar12 * 4);
        uVar11 = (ulonglong)(uint)(iVar7 - iVar12);
        do {
          fVar14 = *pfVar5;
          if (65536.0 <= fVar14) {
            fVar14 = 65536.0;
          }
          if (fVar14 < -65536.0) {
            fVar14 = -65536.0;
          }
          *pfVar5 = fVar14;
          pfVar5 = pfVar5 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    lVar9 = (longlong)param_3;
    if (3 < lVar9) {
      pfVar5 = (float *)(param_2 + 8);
      lVar6 = (lVar9 - 4U >> 2) + 1;
      lVar10 = lVar6 * 4;
      do {
        fVar14 = pfVar5[-2];
        fVar13 = pfVar5[-1];
        pfVar5[-2] = fVar14 - fVar15;
        fVar2 = *pfVar5;
        pfVar5[-1] = fVar13 - fVar14 * fVar1;
        *pfVar5 = fVar2 - fVar13 * fVar1;
        fVar15 = pfVar5[1] * fVar1;
        pfVar5[1] = pfVar5[1] - fVar2 * fVar1;
        pfVar5 = pfVar5 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    for (; lVar10 < lVar9; lVar10 = lVar10 + 1) {
      fVar14 = *(float *)(param_2 + lVar10 * 4);
      fVar13 = fVar14 - fVar15;
      fVar15 = fVar14 * fVar1;
      *(float *)(param_2 + lVar10 * 4) = fVar13;
    }
  }
  *param_7 = fVar15;
  return;
}





