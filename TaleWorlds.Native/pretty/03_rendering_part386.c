#include "TaleWorlds.Native.Split.h"

// 03_rendering_part386.c - 8 个函数

// 函数: void FUN_18047dc00(longlong param_1)
void FUN_18047dc00(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if (((*(uint *)(param_1 + 0x80) & 0x100) == 0) || (cVar2 = FUN_18047eb90(), cVar2 == '\0')) {
    cVar2 = FUN_18047f140(param_1);
    if (cVar2 != '\0') {
      uVar3 = *(undefined1 *)(param_1 + 0x74);
      if ((*(int *)(*(longlong *)(param_1 + 0x48) + 8) != 6) ||
         ((*(byte *)(*(longlong *)(param_1 + 0x48) + 0xc) & 4) != 0)) {
        puVar5 = (undefined8 *)FUN_1808fc418();
        *puVar5 = &UNK_180a2bd18;
        puVar5[1] = 6;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = &UNK_180a2bd08;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[3] = *(undefined8 *)(param_1 + 0x48);
        lVar6 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(lVar6 + 0x10) != 0) {
          puVar5[2] = *(longlong *)(lVar6 + 0x10);
          *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0x18) = puVar5;
          lVar6 = *(longlong *)(param_1 + 0x48);
        }
        *(undefined8 **)(lVar6 + 0x10) = puVar5;
        *(undefined8 **)(param_1 + 0x48) = puVar5;
      }
      if ((*(uint *)(param_1 + 0x50) >> 8 & 1) == 0) {
        if ((*(uint *)(param_1 + 0x50) >> 0xb & 1) != 0) {
          uVar3 = FUN_18047c260(*(undefined8 *)(param_1 + 0x58),uVar3);
        }
      }
      else {
        uVar3 = _tolower___ctype_D_std__QEBADD_Z
                          (*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8),uVar3);
      }
      lVar6 = *(longlong *)(param_1 + 0x48);
      uVar4 = *(uint *)(lVar6 + 0x24);
      if (*(uint *)(lVar6 + 0x20) <= uVar4) {
        lVar7 = realloc(*(undefined8 *)(lVar6 + 0x28),uVar4 + 0x10);
        if (lVar7 == 0) {
          __Xbad_alloc_std__YAXXZ();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(longlong *)(lVar6 + 0x28) = lVar7;
        *(uint *)(lVar6 + 0x20) = uVar4 + 0x10;
        uVar4 = *(uint *)(lVar6 + 0x24);
      }
      *(undefined1 *)((ulonglong)uVar4 + *(longlong *)(lVar6 + 0x28)) = uVar3;
      *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + 1;
      return;
    }
    if (((*(uint *)(param_1 + 0x80) & 0x20000) == 0) ||
       (cVar2 = FUN_18047ec40(param_1,1), cVar2 == '\0')) {
      FUN_18047b390();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x74);
    uVar8 = (ulonglong)(int)uVar4;
    if (uVar4 != 0) {
      if (((((*(uint *)(param_1 + 0x80) & 0x200) == 0) || (uVar4 < 10)) &&
          (uVar8 <= *(uint *)(param_1 + 0x18))) &&
         ((uVar8 < *(ulonglong *)(param_1 + 0x38) &&
          ((*(uint *)(*(longlong *)(param_1 + 0x20) + (uVar8 >> 5) * 4) & 1 << ((byte)uVar4 & 0x1f))
           != 0)))) {
        puVar5 = (undefined8 *)FUN_1808fc418(0x28);
        *puVar5 = &UNK_180a2bd18;
        puVar5[1] = 0xf;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = &UNK_180a2bb88;
        *(uint *)(puVar5 + 4) = uVar4;
        puVar5[3] = *(undefined8 *)(param_1 + 0x48);
        lVar6 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(lVar6 + 0x10) != 0) {
          puVar5[2] = *(longlong *)(lVar6 + 0x10);
          *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0x18) = puVar5;
          lVar6 = *(longlong *)(param_1 + 0x48);
        }
        *(undefined8 **)(lVar6 + 0x10) = puVar5;
        *(undefined8 **)(param_1 + 0x48) = puVar5;
        return;
      }
      FUN_18047b390();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((*(uint *)(param_1 + 0x80) & 0x100000) == 0) {
      FUN_18047b390();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_18047df40(param_1 + 0x40,uVar8 & 0xff);
  }
  return;
}





// 函数: void FUN_18047dd90(longlong *param_1)
void FUN_18047dd90(longlong *param_1)

{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  
  iVar6 = *(int *)((longlong)param_1 + 0x7c);
  iVar10 = -1;
  iVar9 = 0;
  if (iVar6 == 0x2a) goto LAB_18047ddbb;
  if (iVar6 == 0x2b) {
    iVar9 = 1;
    goto LAB_18047ddbb;
  }
  if (iVar6 == 0x3f) {
    iVar10 = 1;
    iVar9 = 0;
    goto LAB_18047ddbb;
  }
  if (iVar6 != 0x7b) {
    return;
  }
  func_0x00018047c980();
  cVar5 = FUN_18047eb90(param_1);
  if (cVar5 == '\0') {
    FUN_18047b390();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *(int *)((longlong)param_1 + 0x7c);
  iVar9 = *(int *)((longlong)param_1 + 0x74);
  iVar4 = iVar9;
  if (iVar6 == 0x2c) {
    func_0x00018047c980(param_1);
    if (*(int *)((longlong)param_1 + 0x7c) != 0x7d) {
      cVar5 = FUN_18047eb90(param_1);
      if (cVar5 == '\0') {
        FUN_18047b390();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)((longlong)param_1 + 0x7c);
      iVar4 = *(int *)((longlong)param_1 + 0x74);
      goto LAB_18047ded8;
    }
  }
  else {
LAB_18047ded8:
    iVar10 = iVar4;
    if (iVar6 != 0x7d) goto LAB_18047df2f;
  }
  if ((iVar10 == -1) || (iVar9 <= iVar10)) {
LAB_18047ddbb:
    *(uint *)(param_1[9] + 0xc) = *(uint *)(param_1[9] + 0xc) | 4;
    pcVar7 = (char *)*param_1;
    if (pcVar7 != (char *)param_1[2]) {
      if (((*pcVar7 == '\\') && (pcVar1 = pcVar7 + 1, pcVar1 != (char *)param_1[2])) &&
         ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
          (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
        pcVar7 = pcVar1;
      }
      *param_1 = (longlong)(pcVar7 + 1);
    }
    FUN_18047b3a0(param_1);
    uVar2 = *(uint *)(param_1 + 0x10);
    if (((uVar2 >> 10 & 1) == 0) || (*(int *)((longlong)param_1 + 0x7c) != 0x3f)) {
      uVar8 = 1;
    }
    else {
      pcVar7 = (char *)*param_1;
      uVar8 = 0;
      if (pcVar7 != (char *)param_1[2]) {
        if (((*pcVar7 == '\\') && (pcVar1 = pcVar7 + 1, pcVar1 != (char *)param_1[2])) &&
           ((((uVar2 & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
            (((uVar2 & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
          pcVar7 = pcVar1;
        }
        *param_1 = (longlong)(pcVar7 + 1);
      }
      FUN_18047b3a0(param_1);
    }
    FUN_18047f800(param_1 + 8,iVar9,iVar10,uVar8);
    return;
  }
LAB_18047df2f:
  FUN_18047b390();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}





// 函数: void FUN_18047ddbf(void)
void FUN_18047ddbf(void)

{
  char *pcVar1;
  uint uVar2;
  longlong in_RAX;
  char *pcVar3;
  longlong *unaff_RBX;
  undefined1 uVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  *(uint *)(in_RAX + 0xc) = *(uint *)(in_RAX + 0xc) | 4;
  pcVar3 = (char *)*unaff_RBX;
  if (pcVar3 != (char *)unaff_RBX[2]) {
    if ((*pcVar3 == '\\') && (pcVar1 = pcVar3 + 1, pcVar1 != (char *)unaff_RBX[2])) {
      if ((((*(uint *)(unaff_RBX + 0x10) & 8) == 0) && ((byte)(*pcVar1 - 0x28U) < 2)) ||
         (((*(uint *)(unaff_RBX + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))) {
        pcVar3 = pcVar1;
      }
    }
    *unaff_RBX = (longlong)(pcVar3 + 1);
  }
  FUN_18047b3a0();
  uVar2 = *(uint *)(unaff_RBX + 0x10);
  if (((uVar2 >> 10 & 1) == 0) || (*(int *)((longlong)unaff_RBX + 0x7c) != 0x3f)) {
    uVar4 = 1;
  }
  else {
    pcVar3 = (char *)*unaff_RBX;
    uVar4 = 0;
    if (pcVar3 != (char *)unaff_RBX[2]) {
      if (((*pcVar3 == '\\') && (pcVar1 = pcVar3 + 1, pcVar1 != (char *)unaff_RBX[2])) &&
         ((((uVar2 & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
          (((uVar2 & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
        pcVar3 = pcVar1;
      }
      *unaff_RBX = (longlong)(pcVar3 + 1);
    }
    FUN_18047b3a0();
  }
  FUN_18047f800(unaff_RBX + 8,unaff_ESI,unaff_EDI,uVar4);
  return;
}





// 函数: void FUN_18047de84(void)
void FUN_18047de84(void)

{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  char *pcVar6;
  longlong *unaff_RBX;
  undefined1 uVar7;
  int unaff_ESI;
  int unaff_EDI;
  int iVar8;
  
  if (in_EAX == 0x3f) {
    unaff_EDI = 1;
    goto LAB_18047ddbb;
  }
  if (in_EAX != 0x7b) {
    return;
  }
  func_0x00018047c980();
  cVar4 = FUN_18047eb90();
  if (cVar4 == '\0') {
    FUN_18047b390();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)((longlong)unaff_RBX + 0x7c);
  unaff_ESI = *(int *)((longlong)unaff_RBX + 0x74);
  iVar8 = unaff_ESI;
  if (iVar5 == 0x2c) {
    func_0x00018047c980();
    if (*(int *)((longlong)unaff_RBX + 0x7c) != 0x7d) {
      cVar4 = FUN_18047eb90();
      if (cVar4 == '\0') {
        FUN_18047b390();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)((longlong)unaff_RBX + 0x7c);
      iVar8 = *(int *)((longlong)unaff_RBX + 0x74);
      goto LAB_18047ded8;
    }
  }
  else {
LAB_18047ded8:
    unaff_EDI = iVar8;
    if (iVar5 != 0x7d) goto LAB_18047df2f;
  }
  if ((unaff_EDI == -1) || (unaff_ESI <= unaff_EDI)) {
LAB_18047ddbb:
    *(uint *)(unaff_RBX[9] + 0xc) = *(uint *)(unaff_RBX[9] + 0xc) | 4;
    pcVar6 = (char *)*unaff_RBX;
    if (pcVar6 != (char *)unaff_RBX[2]) {
      if (((*pcVar6 == '\\') && (pcVar1 = pcVar6 + 1, pcVar1 != (char *)unaff_RBX[2])) &&
         ((((*(uint *)(unaff_RBX + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
          (((*(uint *)(unaff_RBX + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
        pcVar6 = pcVar1;
      }
      *unaff_RBX = (longlong)(pcVar6 + 1);
    }
    FUN_18047b3a0();
    uVar2 = *(uint *)(unaff_RBX + 0x10);
    if (((uVar2 >> 10 & 1) == 0) || (*(int *)((longlong)unaff_RBX + 0x7c) != 0x3f)) {
      uVar7 = 1;
    }
    else {
      pcVar6 = (char *)*unaff_RBX;
      uVar7 = 0;
      if (pcVar6 != (char *)unaff_RBX[2]) {
        if (((*pcVar6 == '\\') && (pcVar1 = pcVar6 + 1, pcVar1 != (char *)unaff_RBX[2])) &&
           ((((uVar2 & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
            (((uVar2 & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
          pcVar6 = pcVar1;
        }
        *unaff_RBX = (longlong)(pcVar6 + 1);
      }
      FUN_18047b3a0();
    }
    FUN_18047f800(unaff_RBX + 8,unaff_ESI,unaff_EDI,uVar7);
    return;
  }
LAB_18047df2f:
  FUN_18047b390();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}





// 函数: void FUN_18047deef(void)
void FUN_18047deef(void)

{
  longlong unaff_RBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  FUN_18047f800(unaff_RBX + 0x40,unaff_ESI,unaff_EDI,1);
  return;
}





// 函数: void FUN_18047df09(void)
void FUN_18047df09(void)

{
  return;
}





// 函数: void FUN_18047df40(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18047df40(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)(param_1 + 8) + 8) != 6) ||
     ((*(byte *)(*(longlong *)(param_1 + 8) + 0xc) & 4) != 0)) {
    puVar3 = (undefined8 *)FUN_1808fc418();
    *puVar3 = &UNK_180a2bd18;
    puVar3[1] = 6;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &UNK_180a2bd08;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[3] = *(undefined8 *)(param_1 + 8);
    lVar4 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      puVar3[2] = *(longlong *)(lVar4 + 0x10);
      *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18) = puVar3;
      lVar4 = *(longlong *)(param_1 + 8);
    }
    *(undefined8 **)(lVar4 + 0x10) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3;
  }
  if ((*(uint *)(param_1 + 0x10) >> 8 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x10) >> 0xb & 1) != 0) {
      param_2 = FUN_18047c260(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4,uVar6);
    }
  }
  else {
    param_2 = _tolower___ctype_D_std__QEBADD_Z
                        (*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),param_2);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  uVar2 = *(uint *)(lVar4 + 0x24);
  if (*(uint *)(lVar4 + 0x20) <= uVar2) {
    lVar5 = realloc(*(undefined8 *)(lVar4 + 0x28),uVar2 + 0x10);
    if (lVar5 == 0) {
      __Xbad_alloc_std__YAXXZ();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(longlong *)(lVar4 + 0x28) = lVar5;
    *(uint *)(lVar4 + 0x20) = uVar2 + 0x10;
    uVar2 = *(uint *)(lVar4 + 0x24);
  }
  *(undefined1 *)((ulonglong)uVar2 + *(longlong *)(lVar4 + 0x28)) = param_2;
  *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + 1;
  return;
}



undefined8 FUN_18047e070(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lStack_b0;
  undefined8 uStack_a8;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  longlong lStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  plVar1 = param_1 + 1;
  FUN_18047db80(&lStack_b0,plVar1);
  lStack_98 = param_1[4];
  plVar2 = param_1 + 5;
  FUN_18047ea50(&lStack_90,plVar2);
  if (param_2 != 0) {
    do {
      *param_1 = lVar3;
      if (plVar1 != &lStack_b0) {
        FUN_18047ff70(plVar1,lStack_b0,uStack_a8);
        param_1[4] = lStack_98;
      }
      if (plVar2 != &lStack_90) {
        FUN_18047fdf0(plVar2,lStack_90,uStack_88);
      }
      cVar6 = FUN_18047cea0(param_1,*(undefined8 *)(param_2 + 0x10));
      if (cVar6 != '\0') {
        if ((char)param_1[0x19] == '\0') {
          uVar7 = 1;
        }
        else {
          lStack_78 = *param_1;
          FUN_18047db80(&lStack_70,plVar1);
          lStack_58 = param_1[4];
          FUN_18047ea50(&lStack_50,plVar2);
          lVar8 = *param_1 - lVar3;
          for (lVar4 = *(longlong *)(param_2 + 0x28); lVar4 != 0;
              lVar4 = *(longlong *)(lVar4 + 0x28)) {
            *param_1 = lVar3;
            if (plVar1 != &lStack_b0) {
              FUN_18047ff70(plVar1,lStack_b0,uStack_a8);
              param_1[4] = lStack_98;
            }
            if (plVar2 != &lStack_90) {
              FUN_18047fdf0(plVar2,lStack_90,uStack_88);
            }
            cVar6 = FUN_18047cea0(param_1,*(undefined8 *)(lVar4 + 0x10));
            if (cVar6 != '\0') {
              lVar5 = *param_1;
              lVar9 = lVar5 - lVar3;
              if (lVar8 < lVar9) {
                lStack_78 = lVar5;
                if (&lStack_70 != plVar1) {
                  FUN_18047ff70(&lStack_70,*plVar1,param_1[2]);
                  lStack_58 = param_1[4];
                }
                lVar8 = lVar9;
                if (&lStack_50 != plVar2) {
                  FUN_18047fdf0(&lStack_50,*plVar2,param_1[6]);
                }
              }
            }
          }
          *param_1 = lStack_78;
          if (plVar1 != &lStack_70) {
            FUN_18047ff70(plVar1,lStack_70,uStack_68);
            param_1[4] = lStack_58;
          }
          if (plVar2 != &lStack_50) {
            FUN_18047fdf0(plVar2,lStack_50,uStack_48);
          }
          uVar7 = 1;
          FUN_18047b1c0(&lStack_50);
          FUN_180257d60(&lStack_70);
        }
        goto LAB_18047e13c;
      }
      param_2 = *(longlong *)(param_2 + 0x28);
    } while (param_2 != 0);
  }
  uVar7 = 0;
LAB_18047e13c:
  FUN_18047b1c0(&lStack_90);
  FUN_180257d60(&lStack_b0);
  return uVar7;
}



ulonglong FUN_18047e2f0(longlong *param_1,longlong param_2,char param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  byte bVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  longlong *plStack_48;
  longlong *plStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*(int *)(param_2 + 0x34) == 1) {
    uVar5 = FUN_18047fb20();
    return uVar5;
  }
  bVar4 = 0;
  lStack_88 = *param_1;
  plStack_48 = param_1 + 1;
  FUN_18047db80(&lStack_80,plStack_48);
  lStack_68 = param_1[4];
  plStack_40 = param_1 + 5;
  FUN_18047ea50(&lStack_60,plStack_40);
  piVar6 = (int *)((ulonglong)*(uint *)(param_2 + 0x30) * 0x10 + param_1[0x10]);
  iVar1 = *piVar6;
  plStack_90 = *(longlong **)(piVar6 + 2);
  lStack_98 = *param_1;
  if ((param_4 == 0) || (*plStack_90 != lStack_98)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((*(int *)(param_2 + 0x24) < 0) || (param_4 < *(int *)(param_2 + 0x24))) {
    if (param_4 < *(int *)(param_2 + 0x20)) {
      if (bVar2) {
        *piVar6 = param_4 + 1;
        *(longlong **)(piVar6 + 2) = &lStack_98;
        bVar4 = FUN_18047cea0(param_1,*(undefined8 *)(param_2 + 0x10));
      }
      else {
        bVar4 = FUN_18047cea0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
      }
      goto LAB_18047e4d0;
    }
    if (param_3 != '\0') {
      if (bVar2) {
        *piVar6 = param_4 + 1;
        *(longlong **)(piVar6 + 2) = &lStack_98;
        bVar4 = FUN_18047cea0(param_1,*(undefined8 *)(param_2 + 0x10));
        if (bVar4 != 0) goto LAB_18047e529;
      }
      else if (1 < param_4) goto LAB_18047e4dd;
      *piVar6 = iVar1;
      *(longlong **)(piVar6 + 2) = plStack_90;
      FUN_18047db00(param_1,&lStack_88);
      bVar4 = FUN_18047cea0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
      goto LAB_18047e4d0;
    }
    bVar4 = FUN_18047cea0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
    if (bVar4 != 0) goto LAB_18047e529;
    if (bVar2) {
      FUN_18047db00(param_1,&lStack_88);
      *piVar6 = param_4 + 1;
      *(longlong **)(piVar6 + 2) = &lStack_98;
      bVar4 = FUN_18047cea0(param_1,*(undefined8 *)(param_2 + 0x10));
      goto LAB_18047e4d0;
    }
  }
  else {
    bVar4 = FUN_18047cea0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
LAB_18047e4d0:
    if (bVar4 != 0) goto LAB_18047e529;
  }
LAB_18047e4dd:
  plVar3 = plStack_48;
  *param_1 = lStack_88;
  if (plStack_48 != &lStack_80) {
    FUN_18047ff70(plStack_48,lStack_80,uStack_78);
    plVar3[3] = lStack_68;
  }
  if (plStack_40 != &lStack_60) {
    FUN_18047fdf0(plStack_40,lStack_60,uStack_58);
  }
LAB_18047e529:
  *piVar6 = iVar1;
  *(longlong **)(piVar6 + 2) = plStack_90;
  FUN_18047b1c0(&lStack_60);
  FUN_180257d60(&lStack_80);
  return (ulonglong)bVar4;
}



undefined8 FUN_18047e580(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  byte *pbVar11;
  byte bStackX_8;
  
  pbVar11 = (byte *)*param_1;
  bStackX_8 = *pbVar11;
  if ((*(uint *)(param_1 + 0x17) & 0x100) != 0) {
    bStackX_8 = _tolower___ctype_D_std__QEBADD_Z(*(undefined8 *)(param_1[0x1a] + 8));
    pbVar11 = (byte *)*param_1;
  }
  puVar9 = *(uint **)(param_2 + 0x20);
  pbVar8 = pbVar11 + 1;
  if (puVar9 != (uint *)0x0) {
    do {
      uVar7 = 0;
      if (puVar9[3] != 0) {
        uVar5 = *puVar9;
        do {
          uVar6 = 0;
          pbVar4 = pbVar11;
          if (uVar5 != 0) {
            pbVar3 = pbVar11;
            do {
              pbVar4 = pbVar3 + 1;
              if (*pbVar3 != *(byte *)(*(longlong *)(puVar9 + 4) + uVar7 + uVar6)) break;
              uVar6 = uVar6 + 1;
              pbVar3 = pbVar4;
            } while (uVar6 < uVar5);
          }
          pbVar3 = (byte *)param_1[0x14];
          if (pbVar4 == (byte *)param_1[0x14]) goto LAB_18047e661;
          uVar10 = (int)uVar7 + uVar5;
          uVar7 = (ulonglong)uVar10;
        } while (uVar10 < puVar9[3]);
      }
      puVar9 = *(uint **)(puVar9 + 6);
      pbVar3 = pbVar11;
    } while (puVar9 != (uint *)0x0);
LAB_18047e661:
    if (pbVar3 != pbVar11) {
LAB_18047e66e:
      uVar5 = 1;
      pbVar8 = pbVar3;
      goto LAB_18047e706;
    }
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (lVar1 != 0) {
    bVar2 = bStackX_8;
    if ((*(uint *)(param_1 + 0x17) & 0x800) != 0) {
      bVar2 = FUN_18047c260(param_1[0x1a]);
    }
    uVar7 = 0;
    if (*(uint *)(lVar1 + 4) != 0) {
      do {
        if ((*(byte *)(uVar7 + *(longlong *)(lVar1 + 8)) <= bVar2) &&
           (pbVar3 = pbVar8,
           bVar2 <= *(byte *)((ulonglong)((int)uVar7 + 1) + *(longlong *)(lVar1 + 8))))
        goto LAB_18047e66e;
        uVar5 = (int)uVar7 + 2;
        uVar7 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar1 + 4));
    }
  }
  if ((*(longlong *)(param_2 + 0x28) == 0) ||
     (uVar5 = 1,
     (*(byte *)((ulonglong)(bStackX_8 >> 3) + *(longlong *)(param_2 + 0x28)) &
     (byte)(1 << (bStackX_8 & 7))) == 0)) {
    uVar5 = 0;
  }
LAB_18047e706:
  if (uVar5 != (*(uint *)(param_2 + 0xc) & 1)) {
    *param_1 = (longlong)pbVar8;
    return 1;
  }
  return 0;
}



undefined8 FUN_18047e58c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  byte *pbVar11;
  byte bStack0000000000000060;
  longlong in_stack_00000068;
  
  pbVar11 = (byte *)*param_1;
  bStack0000000000000060 = *pbVar11;
  if ((*(uint *)(param_1 + 0x17) & 0x100) != 0) {
    bStack0000000000000060 = _tolower___ctype_D_std__QEBADD_Z(*(undefined8 *)(param_1[0x1a] + 8));
    pbVar11 = (byte *)*param_1;
  }
  bVar2 = bStack0000000000000060;
  puVar9 = *(uint **)(param_2 + 0x20);
  pbVar8 = pbVar11 + 1;
  if (puVar9 != (uint *)0x0) {
    do {
      uVar7 = 0;
      if (puVar9[3] != 0) {
        uVar5 = *puVar9;
        do {
          uVar6 = 0;
          pbVar4 = pbVar11;
          if (uVar5 != 0) {
            pbVar3 = pbVar11;
            do {
              pbVar4 = pbVar3 + 1;
              if (*pbVar3 != *(byte *)(*(longlong *)(puVar9 + 4) + uVar7 + uVar6)) break;
              uVar6 = uVar6 + 1;
              pbVar3 = pbVar4;
            } while (uVar6 < uVar5);
          }
          pbVar3 = (byte *)param_1[0x14];
          if (pbVar4 == (byte *)param_1[0x14]) goto LAB_18047e661;
          uVar10 = (int)uVar7 + uVar5;
          uVar7 = (ulonglong)uVar10;
        } while (uVar10 < puVar9[3]);
      }
      puVar9 = *(uint **)(puVar9 + 6);
      pbVar3 = pbVar11;
    } while (puVar9 != (uint *)0x0);
LAB_18047e661:
    param_2 = in_stack_00000068;
    if (pbVar3 != pbVar11) {
LAB_18047e66e:
      uVar5 = 1;
      pbVar8 = pbVar3;
      goto LAB_18047e706;
    }
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (lVar1 != 0) {
    if ((*(uint *)(param_1 + 0x17) & 0x800) != 0) {
      bStack0000000000000060 = FUN_18047c260(param_1[0x1a]);
    }
    uVar7 = 0;
    if (*(uint *)(lVar1 + 4) != 0) {
      do {
        if ((*(byte *)(uVar7 + *(longlong *)(lVar1 + 8)) <= bStack0000000000000060) &&
           (pbVar3 = pbVar8,
           bStack0000000000000060 <=
           *(byte *)((ulonglong)((int)uVar7 + 1) + *(longlong *)(lVar1 + 8)))) goto LAB_18047e66e;
        uVar5 = (int)uVar7 + 2;
        uVar7 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar1 + 4));
    }
  }
  if ((*(longlong *)(param_2 + 0x28) == 0) ||
     (uVar5 = 1,
     (*(byte *)((ulonglong)(bVar2 >> 3) + *(longlong *)(param_2 + 0x28)) & (byte)(1 << (bVar2 & 7)))
     == 0)) {
    uVar5 = 0;
  }
LAB_18047e706:
  if (uVar5 != (*(uint *)(param_2 + 0xc) & 1)) {
    *param_1 = (longlong)pbVar8;
    return 1;
  }
  return 0;
}



undefined1 FUN_18047e72f(void)

{
  return 0;
}



ulonglong FUN_18047e750(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = 0;
  if (*(uint *)(param_1 + 0xc4) != 0) {
    do {
      lVar1 = (uVar4 >> 5) * 4;
      uVar5 = 1 << ((byte)uVar4 & 0x1f);
      if (((*(uint *)(*(longlong *)(param_1 + 0x48) + lVar1) & uVar5) != 0) &&
         ((*(uint *)(lVar1 + *(longlong *)(param_1 + 8)) & uVar5) != 0)) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + uVar4 * 0x10);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar4 * 0x10);
        if (lVar1 != lVar2) {
          lVar3 = *(longlong *)(param_1 + 0x98);
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar1 - lVar3 < lVar2 - lVar3);
        }
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8 + uVar4 * 0x10);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + uVar4 * 0x10);
        if (lVar1 != lVar2) {
          lVar3 = *(longlong *)(param_1 + 0x98);
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar1 - lVar3 < lVar2 - lVar3);
        }
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0xc4));
  }
  return uVar4 & 0xffffffffffffff00;
}



undefined8 *
FUN_18047e8a0(undefined8 *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
             longlong param_6,uint param_7)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  char *pcStackX_8;
  
  *param_1 = param_3;
  if ((param_7 >> 8 & 1) == 0) {
    if ((param_7 >> 0xb & 1) == 0) {
      pcVar4 = param_2;
      pcVar3 = param_2;
      if (param_2 != param_3) {
        do {
          bVar5 = param_4 == param_5;
          pcVar3 = pcVar4;
          if (bVar5) goto LAB_18047ea02;
          cVar2 = *param_4;
          pcVar3 = pcVar4 + 1;
          param_4 = param_4 + 1;
          if (*pcVar4 != cVar2) goto LAB_18047ea06;
          pcVar4 = pcVar3;
        } while (pcVar3 != param_3);
      }
      bVar5 = param_4 == param_5;
LAB_18047ea02:
      if (bVar5) {
        param_2 = pcVar3;
      }
LAB_18047ea06:
      *param_1 = param_2;
    }
    else {
      pcVar4 = param_2;
      if (param_2 != param_3) {
        do {
          bVar5 = param_4 == param_5;
          if (bVar5) goto LAB_18047e9be;
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          cVar1 = *param_4;
          param_4 = param_4 + 1;
          cVar1 = FUN_18047c260(param_6,cVar1);
          cVar2 = FUN_18047c260(param_6,cVar2);
          if (cVar2 != cVar1) goto LAB_18047e9c2;
        } while (pcVar4 != param_3);
      }
      bVar5 = param_4 == param_5;
LAB_18047e9be:
      if (bVar5) {
        param_2 = pcVar4;
      }
LAB_18047e9c2:
      *param_1 = param_2;
    }
  }
  else {
    pcStackX_8 = param_2;
    if (param_2 == param_3) {
LAB_18047e955:
      if (param_4 == param_5) {
        param_2 = pcStackX_8;
      }
LAB_18047e95c:
      *param_1 = param_2;
    }
    else {
      do {
        if (param_4 == param_5) goto LAB_18047e955;
        cVar2 = *pcStackX_8;
        pcStackX_8 = pcStackX_8 + 1;
        cVar1 = *param_4;
        param_4 = param_4 + 1;
        cVar1 = _tolower___ctype_D_std__QEBADD_Z(*(undefined8 *)(param_6 + 8),cVar1);
        cVar2 = _tolower___ctype_D_std__QEBADD_Z(*(undefined8 *)(param_6 + 8),cVar2);
        if (cVar2 != cVar1) goto LAB_18047e95c;
      } while (pcStackX_8 != param_3);
      if (param_4 == param_5) {
        param_2 = pcStackX_8;
      }
      *param_1 = param_2;
    }
  }
  return param_1;
}





// 函数: void FUN_18047ea30(void)
void FUN_18047ea30(void)

{
  FUN_18047ead0();
  return;
}



undefined8 * FUN_18047ea50(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  cVar3 = FUN_18047eb30(param_1,param_2[1] - *param_2 >> 4);
  if (cVar3 != '\0') {
    puVar5 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_2[1];
    for (puVar4 = (undefined8 *)*param_2; puVar4 != puVar1; puVar4 = puVar4 + 2) {
      uVar2 = puVar4[1];
      *puVar5 = *puVar4;
      puVar5[1] = uVar2;
      puVar5 = puVar5 + 2;
    }
    param_1[1] = puVar5;
  }
  return param_1;
}





