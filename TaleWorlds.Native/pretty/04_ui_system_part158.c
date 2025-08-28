#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part158.c - 6 个函数

// 函数: void FUN_1807604ec(void)
void FUN_1807604ec(void)

{
  int iVar1;
  longlong unaff_RBX;
  int8_t *in_stack_00000040;
  
  iVar1 = FUN_180743700();
  if (iVar1 == 0) {
    *in_stack_00000040 = 0x11;
    *(longlong *)(in_stack_00000040 + 8) = unaff_RBX;
    func_0x000180743b40(*(uint64_t *)(unaff_RBX + 0xa8),in_stack_00000040,1);
  }
  return;
}



uint64_t FUN_180760540(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    func_0x000180743c20(lVar1,7);
  }
  lVar2 = *(longlong *)(param_1 + 0x210);
  if ((lVar2 == 0) || (lVar4 = lVar2, *(char *)(lVar2 + 0x212) == '\0')) {
    lVar4 = 0;
  }
  if ((lVar2 == 0) || (lVar5 = lVar2 + 0x214, *(char *)(lVar2 + 0x426) == '\0')) {
    lVar5 = 0;
  }
  if (lVar4 != 0) {
    *(int32_t *)(lVar4 + 0x20c) = 0;
    *(int16_t *)(lVar4 + 0x210) = 0;
                    // WARNING: Subroutine does not return
    memset(lVar4,0,0x208);
  }
  if (lVar5 != 0) {
    *(int32_t *)(lVar5 + 0x20c) = 0;
    *(int16_t *)(lVar5 + 0x210) = 0;
                    // WARNING: Subroutine does not return
    memset(lVar5,0,0x208);
  }
  if ((lVar1 != 0) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,7);
  }
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x40) == 0)) {
    uVar3 = 0;
  }
  else {
    *(longlong *)(param_1 + 0xb0) = param_1;
    uVar3 = (**(code **)(lVar1 + 0x40))();
  }
  return uVar3;
}



uint64_t
FUN_180760650(longlong *param_1,longlong param_2,longlong param_3,uint64_t param_4,uint *param_5,
             uint *param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong *puVar3;
  int8_t auVar4 [16];
  int8_t uVar5;
  int iVar6;
  int32_t uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if (param_3 == 0) {
    param_3 = param_1[6];
  }
  else {
    param_1[6] = param_3;
  }
  uVar9 = 0;
  *param_1 = param_1[1];
  *(int8_t *)((longlong)param_1 + 0x29) = *(int8_t *)(param_3 + 0x29);
  if (*(int *)(param_3 + 0x24) == 0) {
    *param_6 = 0;
    *(int32_t *)((longlong)param_1 + 0x24) = 0;
  }
  uVar1 = *param_6;
  if (uVar1 != 0) {
    puVar3 = (ulonglong *)param_1[6];
    uVar2 = *param_5;
    uVar8 = (ulonglong)*(uint *)(param_1 + 4) * (ulonglong)*(uint *)((longlong)puVar3 + 0x24) >>
            0x14;
    uVar7 = (int32_t)uVar8;
    if (0xffffffff < uVar8) {
      uVar7 = 0xffffffff;
    }
    uVar8 = param_1[2];
    *(int32_t *)((longlong)param_1 + 0x24) = uVar7;
    if (uVar8 != 0) {
      if (*puVar3 <= uVar8) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar8 - *puVar3;
        auVar4 = auVar4 / ZEXT416(*(uint *)((longlong)puVar3 + 0x24));
        if (auVar4._0_8_ < (ulonglong)uVar1) {
          iVar6 = auVar4._0_4_;
          *param_5 = *param_5 + iVar6;
          *param_6 = *param_6 - iVar6;
        }
        else {
          *param_5 = uVar1;
          *param_6 = 0;
        }
      }
      *(int32_t *)(param_2 + 0x30) = 1;
    }
    uVar8 = param_1[3];
    if (uVar8 != 0) {
      puVar3 = (ulonglong *)param_1[6];
      if (uVar8 < puVar3[1]) {
        if ((*puVar3 < uVar8) &&
           (uVar9 = ((int)((uVar8 - *puVar3) / (ulonglong)*(uint *)((longlong)puVar3 + 0x24)) -
                    *param_5) + uVar2, *param_6 < uVar9)) {
          return 0x1c;
        }
        *param_6 = uVar9;
        uVar5 = *(int8_t *)((longlong)param_1 + 0x29);
        if ((char)param_1[5] != '\0') {
          uVar5 = 1;
        }
        *(int8_t *)((longlong)param_1 + 0x29) = uVar5;
      }
      *(int32_t *)(param_2 + 0x30) = 1;
    }
    param_1[1] = (ulonglong)*param_6 * (ulonglong)*(uint *)((longlong)param_1 + 0x24) + *param_1;
  }
  return 0;
}



uint64_t FUN_180760790(longlong param_1,uint param_2,int32_t param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int8_t auVar5 [16];
  int8_t uVar6;
  int iVar7;
  int iVar8;
  int32_t uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  uVar13 = (ulonglong)param_2;
  iVar12 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  *(int32_t *)
   (*(longlong *)(*(longlong *)(param_1 + 0x20) + -8 + (longlong)*(int *)(param_1 + 0xc) * 8) + 0x24
   ) = 0x100000;
  iVar7 = *(int *)(param_1 + 0xc) + -1;
  lVar14 = (longlong)iVar7;
  if (iVar7 < 0) {
    return 0;
  }
  do {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar14 * 8);
    puVar2 = (ulonglong *)plVar1[6];
    lVar3 = plVar1[0xc];
    *plVar1 = plVar1[1];
    *(int8_t *)((longlong)plVar1 + 0x29) = *(int8_t *)((longlong)puVar2 + 0x29);
    if (*(uint *)((longlong)puVar2 + 0x24) == 0) {
      uVar13 = 0;
      *(int32_t *)((longlong)plVar1 + 0x24) = 0;
    }
    else {
      iVar7 = (int)uVar13;
      if (iVar7 != 0) {
        uVar4 = plVar1[2];
        uVar11 = (ulonglong)*(uint *)(plVar1 + 4) * (ulonglong)*(uint *)((longlong)puVar2 + 0x24) >>
                 0x14;
        uVar9 = (int32_t)uVar11;
        if (0xffffffff < uVar11) {
          uVar9 = 0xffffffff;
        }
        *(int32_t *)((longlong)plVar1 + 0x24) = uVar9;
        iVar8 = iVar12;
        if (uVar4 != 0) {
          if (*puVar2 <= uVar4) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar4 - *puVar2;
            auVar5 = auVar5 / ZEXT416(*(uint *)((longlong)puVar2 + 0x24));
            if (auVar5._0_8_ < uVar13) {
              iVar8 = auVar5._0_4_;
              uVar13 = (ulonglong)(uint)(iVar7 - iVar8);
              iVar8 = iVar12 + iVar8;
            }
            else {
              uVar13 = 0;
              iVar8 = iVar7;
            }
          }
          *(int32_t *)(param_1 + 0x30) = 1;
        }
        uVar4 = plVar1[3];
        if (uVar4 != 0) {
          puVar2 = (ulonglong *)plVar1[6];
          if (uVar4 < puVar2[1]) {
            if (*puVar2 < uVar4) {
              uVar10 = ((int)((uVar4 - *puVar2) / (ulonglong)*(uint *)((longlong)puVar2 + 0x24)) -
                       iVar8) + iVar12;
              iVar12 = iVar8;
              if ((uint)uVar13 < uVar10) goto LAB_1807608dd;
              uVar13 = (ulonglong)uVar10;
            }
            else {
              uVar13 = 0;
            }
            uVar6 = *(int8_t *)((longlong)plVar1 + 0x29);
            if ((char)plVar1[5] != '\0') {
              uVar6 = 1;
            }
            *(int8_t *)((longlong)plVar1 + 0x29) = uVar6;
          }
          *(int32_t *)(param_1 + 0x30) = 1;
        }
        plVar1[1] = *(uint *)((longlong)plVar1 + 0x24) * uVar13 + *plVar1;
        iVar12 = iVar8;
      }
    }
LAB_1807608dd:
    *(short *)(plVar1 + 10) = (short)iVar12;
    *(short *)((longlong)plVar1 + 0x52) = (short)uVar13;
    LOCK();
    *(uint *)((longlong)plVar1 + 0x5c) = *(uint *)((longlong)plVar1 + 0x5c) | 0x8000;
    UNLOCK();
    if ((*(byte *)(lVar3 + 0x11a) & 1) != 0) {
      *(longlong *)(lVar3 + 0xb0) = lVar3;
      (**(code **)(lVar3 + 0x120))((longlong *)(lVar3 + 0xb0),1,0,0);
    }
    lVar14 = lVar14 + -1;
    *(int32_t *)(plVar1 + 0xb) = param_3;
    if (lVar14 < 0) {
      return 0;
    }
  } while( true );
}



uint64_t FUN_1807607b9(longlong param_1,uint64_t param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int8_t auVar5 [16];
  byte bVar6;
  int iVar7;
  int32_t uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong unaff_RBP;
  uint unaff_ESI;
  uint uVar11;
  uint unaff_EDI;
  uint unaff_R12D;
  uint uVar12;
  longlong lVar13;
  int32_t unaff_R15D;
  
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + -8 + param_3 * 8) + 0x24) = 0x100000
  ;
  iVar7 = *(int *)(param_1 + 0xc) + -1;
  lVar13 = (longlong)iVar7;
  if (iVar7 < 0) {
    return 0;
  }
  uVar12 = unaff_R12D + 1;
  do {
    plVar1 = *(longlong **)(*(longlong *)(unaff_RBP + 0x20) + lVar13 * 8);
    puVar2 = (ulonglong *)plVar1[6];
    lVar3 = plVar1[0xc];
    *plVar1 = plVar1[1];
    *(int8_t *)((longlong)plVar1 + 0x29) = *(int8_t *)((longlong)puVar2 + 0x29);
    if (*(uint *)((longlong)puVar2 + 0x24) == 0) {
      *(uint *)((longlong)plVar1 + 0x24) = unaff_R12D;
      unaff_EDI = unaff_R12D;
    }
    else if (unaff_EDI != 0) {
      uVar4 = plVar1[2];
      uVar10 = (ulonglong)*(uint *)(plVar1 + 4) * (ulonglong)*(uint *)((longlong)puVar2 + 0x24) >>
               0x14;
      uVar8 = (int32_t)uVar10;
      if (0xffffffff < uVar10) {
        uVar8 = 0xffffffff;
      }
      *(int32_t *)((longlong)plVar1 + 0x24) = uVar8;
      uVar11 = unaff_ESI;
      if (uVar4 != 0) {
        uVar9 = unaff_EDI;
        if ((*puVar2 <= uVar4) &&
           (auVar5._8_8_ = 0, auVar5._0_8_ = uVar4 - *puVar2,
           auVar5 = auVar5 / ZEXT416(*(uint *)((longlong)puVar2 + 0x24)), uVar11 = unaff_EDI,
           uVar9 = unaff_R12D, auVar5._0_8_ < (ulonglong)unaff_EDI)) {
          iVar7 = auVar5._0_4_;
          uVar11 = unaff_ESI + iVar7;
          uVar9 = unaff_EDI - iVar7;
        }
        unaff_EDI = uVar9;
        *(uint *)(unaff_RBP + 0x30) = uVar12;
      }
      uVar4 = plVar1[3];
      if (uVar4 != 0) {
        puVar2 = (ulonglong *)plVar1[6];
        if (uVar4 < puVar2[1]) {
          uVar9 = unaff_R12D;
          if ((*puVar2 < uVar4) &&
             (uVar9 = ((int)((uVar4 - *puVar2) / (ulonglong)*(uint *)((longlong)puVar2 + 0x24)) -
                      uVar11) + unaff_ESI, unaff_ESI = uVar11, unaff_EDI < uVar9))
          goto LAB_1807608dd;
          unaff_EDI = uVar9;
          bVar6 = *(byte *)((longlong)plVar1 + 0x29);
          if ((char)plVar1[5] != (char)unaff_R12D) {
            bVar6 = (byte)uVar12;
          }
          *(byte *)((longlong)plVar1 + 0x29) = bVar6;
        }
        *(uint *)(unaff_RBP + 0x30) = uVar12;
      }
      plVar1[1] = (ulonglong)*(uint *)((longlong)plVar1 + 0x24) * (ulonglong)unaff_EDI + *plVar1;
      unaff_ESI = uVar11;
    }
LAB_1807608dd:
    *(short *)(plVar1 + 10) = (short)unaff_ESI;
    *(short *)((longlong)plVar1 + 0x52) = (short)unaff_EDI;
    LOCK();
    *(uint *)((longlong)plVar1 + 0x5c) = *(uint *)((longlong)plVar1 + 0x5c) | 0x8000;
    UNLOCK();
    if ((*(byte *)(lVar3 + 0x11a) & (byte)uVar12) != 0) {
      *(longlong *)(lVar3 + 0xb0) = lVar3;
      (**(code **)(lVar3 + 0x120))((longlong *)(lVar3 + 0xb0),(ulonglong)uVar12,0,0);
    }
    lVar13 = lVar13 - (ulonglong)uVar12;
    *(int32_t *)(plVar1 + 0xb) = unaff_R15D;
    if (lVar13 < 0) {
      return 0;
    }
  } while( true );
}



uint64_t FUN_180760940(void)

{
  return 0;
}



uint64_t FUN_180760953(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180760970(longlong param_1,longlong param_2,uint64_t param_3,int32_t param_4,
void FUN_180760970(longlong param_1,longlong param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5,int32_t param_6,int param_7,byte *param_8)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte *pbVar6;
  byte bVar7;
  int8_t auStack_198 [32];
  int32_t *puStack_178;
  int32_t *puStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  byte abStack_158 [8];
  byte *pbStack_150;
  int8_t auStack_148 [256];
  ulonglong uStack_48;
  
  pbVar6 = param_8;
  iVar3 = param_7;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_198;
  pbStack_150 = param_8;
  if (param_7 == *(int *)(param_1 + 0x58)) {
    if (param_8 != (byte *)0x0) {
      *param_8 = ~(byte)(*(uint *)(param_1 + 0x5c) >> 0x11) & 1;
    }
    goto FUN_180760c64;
  }
  if ((*(uint *)(param_1 + 0x5c) >> 0xd & 1) == 0) {
    param_6 = 0;
  }
  puStack_170 = &param_6;
  puStack_178 = &param_5;
  FUN_180760650(param_1);
  *(int16_t *)(param_1 + 0x52) = (int16_t)param_6;
  *(int16_t *)(param_1 + 0x50) = (int16_t)param_5;
  LOCK();
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x8000;
  UNLOCK();
  lVar4 = *(longlong *)(param_1 + 0x60);
  if ((*(byte *)(lVar4 + 0x11a) & 1) != 0) {
    *(longlong *)(lVar4 + 0xb0) = lVar4;
    iVar2 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x120))
                      (*(longlong *)(param_1 + 0x60) + 0xb0,1,0);
    if ((iVar2 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
      puStack_178 = (int32_t *)auStack_148;
      auStack_148[0] = 0;
                    // WARNING: Subroutine does not return
      FUN_180749ef0(iVar2,7,param_1,&unknown_var_1152_ptr);
    }
  }
  uVar1 = param_6;
  bVar7 = 0;
  if ((*(short *)(param_1 + 0x52) == 0) && (*(char *)(param_1 + 0x29) == '\0')) goto FUN_180760c64;
  *(int *)(param_1 + 0x58) = iVar3;
  abStack_158[0] = 0;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    plVar5 = *(longlong **)(param_1 + 0x70);
    if (plVar5 != (longlong *)(param_1 + 0x70)) {
      do {
        lVar4 = *(longlong *)(plVar5[2] + 0x58) + 8;
        if ((*(byte *)(plVar5[2] + 0x7c) & 4) == 0) {
          pbStack_168 = (byte *)CONCAT44(pbStack_168._4_4_,iVar3);
          puStack_170 = (int32_t *)CONCAT44(puStack_170._4_4_,uVar1);
          puStack_178 = (int32_t *)CONCAT44(puStack_178._4_4_,param_5);
          pbStack_160 = abStack_158;
          FUN_180760970(lVar4,param_2,param_1,param_4);
        }
        else {
          puStack_170 = (int32_t *)CONCAT44(puStack_170._4_4_,iVar3);
          puStack_178 = (int32_t *)CONCAT44(puStack_178._4_4_,uVar1);
          pbStack_168 = abStack_158;
          FUN_180762ee0(lVar4,param_2,param_4,param_5);
        }
        bVar7 = bVar7 | abStack_158[0];
        plVar5 = (longlong *)*plVar5;
        pbVar6 = pbStack_150;
      } while (plVar5 != (longlong *)(param_1 + 0x70));
      goto LAB_180760ba2;
    }
LAB_180760ba7:
    if (((*(uint *)(param_1 + 0x5c) & 0x11) == 0) &&
       (lVar4 = *(longlong *)(param_1 + 0x60), *(longlong *)(lVar4 + 0x128) != 0)) {
      *(longlong *)(lVar4 + 0xb0) = lVar4;
      puStack_170 = (int32_t *)CONCAT44(puStack_170._4_4_,1);
      puStack_178 = (int32_t *)CONCAT44(puStack_178._4_4_,1);
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x128))
                        (*(longlong *)(param_1 + 0x60) + 0xb0,*(int16_t *)(param_1 + 0x52),0,0);
      bVar7 = iVar3 != 6;
    }
    if (bVar7 != 0) goto LAB_180760c04;
    LOCK();
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x20000;
    UNLOCK();
  }
  else {
    pbStack_160 = abStack_158;
    pbStack_168 = (byte *)CONCAT44(pbStack_168._4_4_,iVar3);
    puStack_170 = (int32_t *)CONCAT44(puStack_170._4_4_,param_6);
    puStack_178 = (int32_t *)CONCAT44(puStack_178._4_4_,param_5);
    FUN_180760970(*(longlong *)(param_1 + 0x68) + 8,param_2,param_1,param_4);
    bVar7 = abStack_158[0];
LAB_180760ba2:
    if (bVar7 == 0) goto LAB_180760ba7;
LAB_180760c04:
    LOCK();
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffdffff;
    UNLOCK();
  }
  if (pbVar6 != (byte *)0x0) {
    *pbVar6 = bVar7;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x60) + 0xf8) != 0) {
    if ((*(uint *)(param_1 + 0x5c) >> 0x14 & 1) == 0) {
      FUN_18075a030(param_2,param_1);
    }
    if ((*(uint *)(param_1 + 0x5c) >> 0x13 & 1) == 0) {
      LOCK();
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x80000;
      UNLOCK();
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
    }
  }
FUN_180760c64:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807609d5(void)
void FUN_1807609d5(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  uint in_EAX;
  int iVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_R13;
  int32_t unaff_R14D;
  bool bVar5;
  int32_t uVar7;
  int32_t *puVar6;
  int32_t *puStack0000000000000028;
  char *in_stack_00000048;
  ulonglong in_stack_00000150;
  int16_t uStack00000000000001c0;
  int16_t uStack00000000000001c8;
  
  if ((in_EAX >> 0xd & 1) == 0) {
    _uStack00000000000001c8 = 0;
  }
  puStack0000000000000028 = (int32_t *)&stack0x000001c8;
  puVar6 = (int32_t *)&stack0x000001c0;
  FUN_180760650();
  *(int16_t *)(unaff_RBX + 0x52) = uStack00000000000001c8;
  *(int16_t *)(unaff_RBX + 0x50) = uStack00000000000001c0;
  LOCK();
  *(uint *)(unaff_RBX + 0x5c) = *(uint *)(unaff_RBX + 0x5c) | 0x8000;
  UNLOCK();
  lVar1 = *(longlong *)(unaff_RBX + 0x60);
  if ((*(byte *)(lVar1 + 0x11a) & 1) != 0) {
    *(longlong *)(lVar1 + 0xb0) = lVar1;
    iVar4 = (**(code **)(*(longlong *)(unaff_RBX + 0x60) + 0x120))
                      (*(longlong *)(unaff_RBX + 0x60) + 0xb0,1,0,0,puVar6);
    if ((iVar4 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180749ef0(iVar4,7);
    }
  }
  uVar3 = _uStack00000000000001c8;
  uVar7 = (int32_t)((ulonglong)puVar6 >> 0x20);
  if ((*(short *)(unaff_RBX + 0x52) != 0) || (*(char *)(unaff_RBX + 0x29) != '\0')) {
    *(int32_t *)(unaff_RBX + 0x58) = unaff_R14D;
    if (*(longlong *)(unaff_RBX + 0x68) == 0) {
      for (puVar2 = *(uint64_t **)(unaff_RBX + 0x70); puVar2 != (uint64_t *)(unaff_RBX + 0x70);
          puVar2 = (uint64_t *)*puVar2) {
        puStack0000000000000028._4_4_ = (int32_t)((ulonglong)puStack0000000000000028 >> 0x20);
        uVar7 = (int32_t)((ulonglong)puVar6 >> 0x20);
        if ((*(byte *)(puVar2[2] + 0x7c) & 4) == 0) {
          puStack0000000000000028 = (int32_t *)CONCAT44(puStack0000000000000028._4_4_,uVar3);
          puVar6 = (int32_t *)CONCAT44(uVar7,_uStack00000000000001c0);
          FUN_180760970(*(longlong *)(puVar2[2] + 0x58) + 8);
        }
        else {
          puStack0000000000000028 = (int32_t *)CONCAT44(puStack0000000000000028._4_4_,unaff_R14D)
          ;
          puVar6 = (int32_t *)CONCAT44(uVar7,uVar3);
          FUN_180762ee0();
        }
        uVar7 = (int32_t)((ulonglong)puVar6 >> 0x20);
        unaff_R13 = in_stack_00000048;
      }
    }
    else {
      puStack0000000000000028 =
           (int32_t *)CONCAT44(puStack0000000000000028._4_4_,_uStack00000000000001c8);
      FUN_180760970(*(longlong *)(unaff_RBX + 0x68) + 8);
    }
    bVar5 = false;
    if (((*(uint *)(unaff_RBX + 0x5c) & 0x11) == 0) &&
       (lVar1 = *(longlong *)(unaff_RBX + 0x60), *(longlong *)(lVar1 + 0x128) != 0)) {
      *(longlong *)(lVar1 + 0xb0) = lVar1;
      puStack0000000000000028 = (int32_t *)CONCAT44(puStack0000000000000028._4_4_,1);
      iVar4 = (**(code **)(*(longlong *)(unaff_RBX + 0x60) + 0x128))
                        (*(longlong *)(unaff_RBX + 0x60) + 0xb0,*(int16_t *)(unaff_RBX + 0x52),0,
                         0,CONCAT44(uVar7,1));
      bVar5 = iVar4 != 6;
    }
    if (bVar5 == false) {
      LOCK();
      *(uint *)(unaff_RBX + 0x5c) = *(uint *)(unaff_RBX + 0x5c) | 0x20000;
      UNLOCK();
    }
    else {
      LOCK();
      *(uint *)(unaff_RBX + 0x5c) = *(uint *)(unaff_RBX + 0x5c) & 0xfffdffff;
      UNLOCK();
    }
    if (unaff_R13 != (char *)0x0) {
      *unaff_R13 = bVar5;
    }
    if (*(int *)(*(longlong *)(unaff_RBX + 0x60) + 0xf8) != 0) {
      if ((*(uint *)(unaff_RBX + 0x5c) >> 0x14 & 1) == 0) {
        FUN_18075a030();
      }
      if ((*(uint *)(unaff_RBX + 0x5c) >> 0x13 & 1) == 0) {
        LOCK();
        *(uint *)(unaff_RBX + 0x5c) = *(uint *)(unaff_RBX + 0x5c) | 0x80000;
        UNLOCK();
        *(int *)(unaff_RBP + 0x3c) = *(int *)(unaff_RBP + 0x3c) + 1;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180760ab7(longlong param_1)
void FUN_180760ab7(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  byte unaff_SIL;
  longlong *plVar3;
  byte *unaff_R13;
  int32_t unaff_R14D;
  byte bStack0000000000000040;
  byte *in_stack_00000048;
  ulonglong in_stack_00000150;
  
  *(int32_t *)(unaff_RBX + 0x58) = unaff_R14D;
  bStack0000000000000040 = 0;
  if (param_1 == 0) {
    plVar3 = *(longlong **)(unaff_RBX + 0x70);
    if (plVar3 != (longlong *)(unaff_RBX + 0x70)) {
      do {
        if ((*(byte *)(plVar3[2] + 0x7c) & 4) == 0) {
          FUN_180760970(*(longlong *)(plVar3[2] + 0x58) + 8);
        }
        else {
          FUN_180762ee0();
        }
        unaff_SIL = unaff_SIL | bStack0000000000000040;
        plVar3 = (longlong *)*plVar3;
        unaff_R13 = in_stack_00000048;
      } while (plVar3 != (longlong *)(unaff_RBX + 0x70));
      goto LAB_180760ba2;
    }
LAB_180760ba7:
    if (((*(uint *)(unaff_RBX + 0x5c) & 0x11) == 0) &&
       (lVar1 = *(longlong *)(unaff_RBX + 0x60), *(longlong *)(lVar1 + 0x128) != 0)) {
      *(longlong *)(lVar1 + 0xb0) = lVar1;
      iVar2 = (**(code **)(*(longlong *)(unaff_RBX + 0x60) + 0x128))
                        (*(longlong *)(unaff_RBX + 0x60) + 0xb0,*(int16_t *)(unaff_RBX + 0x52),0,
                         0,1);
      unaff_SIL = iVar2 != 6;
    }
    if (unaff_SIL == 0) {
      LOCK();
      *(uint *)(unaff_RBX + 0x5c) = *(uint *)(unaff_RBX + 0x5c) | 0x20000;
      UNLOCK();
      goto LAB_180760c0c;
    }
  }
  else {
    FUN_180760970(param_1 + 8);
    unaff_SIL = bStack0000000000000040;
LAB_180760ba2:
    if (unaff_SIL == 0) goto LAB_180760ba7;
  }
  LOCK();
  *(uint *)(unaff_RBX + 0x5c) = *(uint *)(unaff_RBX + 0x5c) & 0xfffdffff;
  UNLOCK();
LAB_180760c0c:
  if (unaff_R13 != (byte *)0x0) {
    *unaff_R13 = unaff_SIL;
  }
  if (*(int *)(*(longlong *)(unaff_RBX + 0x60) + 0xf8) != 0) {
    if ((*(uint *)(unaff_RBX + 0x5c) >> 0x14 & 1) == 0) {
      FUN_18075a030();
    }
    if ((*(uint *)(unaff_RBX + 0x5c) >> 0x13 & 1) == 0) {
      LOCK();
      *(uint *)(unaff_RBX + 0x5c) = *(uint *)(unaff_RBX + 0x5c) | 0x80000;
      UNLOCK();
      *(int *)(unaff_RBP + 0x3c) = *(int *)(unaff_RBP + 0x3c) + 1;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180760c21(void)
void FUN_180760c21(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  int8_t unaff_SIL;
  int8_t *unaff_R13;
  ulonglong in_stack_00000150;
  
  *unaff_R13 = unaff_SIL;
  if (*(int *)(*(longlong *)(unaff_RBX + 0x60) + 0xf8) != 0) {
    if ((*(uint *)(unaff_RBX + 0x5c) >> 0x14 & 1) == 0) {
      FUN_18075a030();
    }
    if ((*(uint *)(unaff_RBX + 0x5c) >> 0x13 & 1) == 0) {
      LOCK();
      *(uint *)(unaff_RBX + 0x5c) = *(uint *)(unaff_RBX + 0x5c) | 0x80000;
      UNLOCK();
      *(int *)(unaff_RBP + 0x3c) = *(int *)(unaff_RBP + 0x3c) + 1;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180760c64(void)
void FUN_180760c64(void)

{
  ulonglong in_stack_00000150;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_180760c90(longlong param_1,longlong param_2,int32_t param_3,int32_t param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int8_t auStackX_18 [16];
  
  *(short *)(param_2 + 0x5a) = (short)param_3;
  iVar5 = 0;
  *(int32_t *)(param_2 + 0x2c) = 0x100000;
  *(int16_t *)(param_2 + 0x58) = 0;
  auStackX_18[0] = 0;
  *(int32_t *)(param_1 + 0x3c) = 0;
  uVar3 = FUN_180760970(param_2 + 8,param_1,param_2 + 8,param_3,0,param_3,param_4,auStackX_18);
  if ((int)uVar3 == 0) {
    if (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0xc)) {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        lVar6 = 0;
        lVar4 = 0;
        do {
          lVar2 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20));
          if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar4) + 0x5c) >> 0x13 & 1)
              == 0) {
            LOCK();
            puVar1 = (uint *)(lVar2 + 0x5c);
            *puVar1 = *puVar1 & 0xffcfffff;
            UNLOCK();
          }
          else {
            iVar7 = iVar7 + 1;
            *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x20)) = lVar2;
            lVar6 = lVar6 + 8;
          }
          iVar5 = iVar5 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar5 < *(int *)(param_1 + 0xc));
      }
      *(int *)(param_1 + 0xc) = iVar7;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



