#include "TaleWorlds.Native.Split.h"
// 03_rendering_part386.c - 8 个函数
// 函数: void UISystem_7dc00(int64_t param_1)
void UISystem_7dc00(int64_t param_1)
{
  code *pcVar1;
  char cVar2;
  int8_t uVar3;
  uint uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  if (((*(uint *)(param_1 + 0x80) & 0x100) == 0) || (cVar2 = UISystem_7eb90(), cVar2 == '\0')) {
    cVar2 = UISystem_7f140(param_1);
    if (cVar2 != '\0') {
      uVar3 = *(int8_t *)(param_1 + 0x74);
      if ((*(int *)(*(int64_t *)(param_1 + 0x48) + 8) != 6) ||
         ((*(byte *)(*(int64_t *)(param_1 + 0x48) + 0xc) & 4) != 0)) {
        puVar5 = (uint64_t *)SystemRenderer();
        *puVar5 = &processed_var_6184_ptr;
        puVar5[1] = 6;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = &processed_var_6168_ptr;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[3] = *(uint64_t *)(param_1 + 0x48);
        lVar6 = *(int64_t *)(param_1 + 0x48);
        if (*(int64_t *)(lVar6 + 0x10) != 0) {
          puVar5[2] = *(int64_t *)(lVar6 + 0x10);
          *(uint64_t **)(*(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x10) + 0x18) = puVar5;
          lVar6 = *(int64_t *)(param_1 + 0x48);
        }
        *(uint64_t **)(lVar6 + 0x10) = puVar5;
        *(uint64_t **)(param_1 + 0x48) = puVar5;
      }
      if ((*(uint *)(param_1 + 0x50) >> 8 & 1) == 0) {
        if ((*(uint *)(param_1 + 0x50) >> 0xb & 1) != 0) {
          uVar3 = UISystem_7c260(*(uint64_t *)(param_1 + 0x58),uVar3);
        }
      }
      else {
        uVar3 = _tolower___ctype_D_std__QEBADD_Z
                          (*(uint64_t *)(*(int64_t *)(param_1 + 0x58) + 8),uVar3);
      }
      lVar6 = *(int64_t *)(param_1 + 0x48);
      uVar4 = *(uint *)(lVar6 + 0x24);
      if (*(uint *)(lVar6 + 0x20) <= uVar4) {
        lVar7 = realloc(*(uint64_t *)(lVar6 + 0x28),uVar4 + 0x10);
        if (lVar7 == 0) {
          __Xbad_alloc_std__YAXXZ();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(int64_t *)(lVar6 + 0x28) = lVar7;
        *(uint *)(lVar6 + 0x20) = uVar4 + 0x10;
        uVar4 = *(uint *)(lVar6 + 0x24);
      }
      *(int8_t *)((uint64_t)uVar4 + *(int64_t *)(lVar6 + 0x28)) = uVar3;
      *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + 1;
      return;
    }
    if (((*(uint *)(param_1 + 0x80) & 0x20000) == 0) ||
       (cVar2 = UISystem_7ec40(param_1,1), cVar2 == '\0')) {
      SystemCore_MemoryManager();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x74);
    uVar8 = (uint64_t)(int)uVar4;
    if (uVar4 != 0) {
      if (((((*(uint *)(param_1 + 0x80) & 0x200) == 0) || (uVar4 < 10)) &&
          (uVar8 <= *(uint *)(param_1 + 0x18))) &&
         ((uVar8 < *(uint64_t *)(param_1 + 0x38) &&
          ((*(uint *)(*(int64_t *)(param_1 + 0x20) + (uVar8 >> 5) * 4) & 1 << ((byte)uVar4 & 0x1f))
           != 0)))) {
        puVar5 = (uint64_t *)SystemRenderer(0x28);
        *puVar5 = &processed_var_6184_ptr;
        puVar5[1] = 0xf;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = &processed_var_5784_ptr;
        *(uint *)(puVar5 + 4) = uVar4;
        puVar5[3] = *(uint64_t *)(param_1 + 0x48);
        lVar6 = *(int64_t *)(param_1 + 0x48);
        if (*(int64_t *)(lVar6 + 0x10) != 0) {
          puVar5[2] = *(int64_t *)(lVar6 + 0x10);
          *(uint64_t **)(*(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x10) + 0x18) = puVar5;
          lVar6 = *(int64_t *)(param_1 + 0x48);
        }
        *(uint64_t **)(lVar6 + 0x10) = puVar5;
        *(uint64_t **)(param_1 + 0x48) = puVar5;
        return;
      }
      SystemCore_MemoryManager();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((*(uint *)(param_1 + 0x80) & 0x100000) == 0) {
      SystemCore_MemoryManager();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UISystem_7df40(param_1 + 0x40,uVar8 & 0xff);
  }
  return;
}
// 函数: void UISystem_7dd90(int64_t *param_1)
void UISystem_7dd90(int64_t *param_1)
{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int8_t uVar8;
  int iVar9;
  int iVar10;
  iVar6 = *(int *)((int64_t)param_1 + 0x7c);
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
  Function_59557d78();
  cVar5 = UISystem_7eb90(param_1);
  if (cVar5 == '\0') {
    SystemCore_MemoryManager();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *(int *)((int64_t)param_1 + 0x7c);
  iVar9 = *(int *)((int64_t)param_1 + 0x74);
  iVar4 = iVar9;
  if (iVar6 == 0x2c) {
    Function_59557d78(param_1);
    if (*(int *)((int64_t)param_1 + 0x7c) != 0x7d) {
      cVar5 = UISystem_7eb90(param_1);
      if (cVar5 == '\0') {
        SystemCore_MemoryManager();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)((int64_t)param_1 + 0x7c);
      iVar4 = *(int *)((int64_t)param_1 + 0x74);
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
      *param_1 = (int64_t)(pcVar7 + 1);
    }
    RenderingSystem_MaterialManager0(param_1);
    uVar2 = *(uint *)(param_1 + 0x10);
    if (((uVar2 >> 10 & 1) == 0) || (*(int *)((int64_t)param_1 + 0x7c) != 0x3f)) {
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
        *param_1 = (int64_t)(pcVar7 + 1);
      }
      RenderingSystem_MaterialManager0(param_1);
    }
    UISystem_7f800(param_1 + 8,iVar9,iVar10,uVar8);
    return;
  }
LAB_18047df2f:
  SystemCore_MemoryManager();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}
// 函数: void UISystem_7ddbf(void)
void UISystem_7ddbf(void)
{
  char *pcVar1;
  uint uVar2;
  int64_t in_RAX;
  char *pcVar3;
  int64_t *unaff_RBX;
  int8_t uVar4;
  int32_t unaff_ESI;
  int32_t unaff_EDI;
  *(uint *)(in_RAX + 0xc) = *(uint *)(in_RAX + 0xc) | 4;
  pcVar3 = (char *)*unaff_RBX;
  if (pcVar3 != (char *)unaff_RBX[2]) {
    if ((*pcVar3 == '\\') && (pcVar1 = pcVar3 + 1, pcVar1 != (char *)unaff_RBX[2])) {
      if ((((*(uint *)(unaff_RBX + 0x10) & 8) == 0) && ((byte)(*pcVar1 - 0x28U) < 2)) ||
         (((*(uint *)(unaff_RBX + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))) {
        pcVar3 = pcVar1;
      }
    }
    *unaff_RBX = (int64_t)(pcVar3 + 1);
  }
  RenderingSystem_MaterialManager0();
  uVar2 = *(uint *)(unaff_RBX + 0x10);
  if (((uVar2 >> 10 & 1) == 0) || (*(int *)((int64_t)unaff_RBX + 0x7c) != 0x3f)) {
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
      *unaff_RBX = (int64_t)(pcVar3 + 1);
    }
    RenderingSystem_MaterialManager0();
  }
  UISystem_7f800(unaff_RBX + 8,unaff_ESI,unaff_EDI,uVar4);
  return;
}
// 函数: void UISystem_7de84(void)
void UISystem_7de84(void)
{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  char *pcVar6;
  int64_t *unaff_RBX;
  int8_t uVar7;
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
  Function_59557d78();
  cVar4 = UISystem_7eb90();
  if (cVar4 == '\0') {
    SystemCore_MemoryManager();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)((int64_t)unaff_RBX + 0x7c);
  unaff_ESI = *(int *)((int64_t)unaff_RBX + 0x74);
  iVar8 = unaff_ESI;
  if (iVar5 == 0x2c) {
    Function_59557d78();
    if (*(int *)((int64_t)unaff_RBX + 0x7c) != 0x7d) {
      cVar4 = UISystem_7eb90();
      if (cVar4 == '\0') {
        SystemCore_MemoryManager();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)((int64_t)unaff_RBX + 0x7c);
      iVar8 = *(int *)((int64_t)unaff_RBX + 0x74);
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
      *unaff_RBX = (int64_t)(pcVar6 + 1);
    }
    RenderingSystem_MaterialManager0();
    uVar2 = *(uint *)(unaff_RBX + 0x10);
    if (((uVar2 >> 10 & 1) == 0) || (*(int *)((int64_t)unaff_RBX + 0x7c) != 0x3f)) {
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
        *unaff_RBX = (int64_t)(pcVar6 + 1);
      }
      RenderingSystem_MaterialManager0();
    }
    UISystem_7f800(unaff_RBX + 8,unaff_ESI,unaff_EDI,uVar7);
    return;
  }
LAB_18047df2f:
  SystemCore_MemoryManager();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}
// 函数: void UISystem_7deef(void)
void UISystem_7deef(void)
{
  int64_t unaff_RBX;
  int32_t unaff_ESI;
  int32_t unaff_EDI;
  UISystem_7f800(unaff_RBX + 0x40,unaff_ESI,unaff_EDI,1);
  return;
}
// 函数: void UISystem_7df09(void)
void UISystem_7df09(void)
{
  return;
}
// 函数: void UISystem_7df40(int64_t param_1,int8_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_7df40(int64_t param_1,int8_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  uint uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uVar6 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)(param_1 + 8) + 8) != 6) ||
     ((*(byte *)(*(int64_t *)(param_1 + 8) + 0xc) & 4) != 0)) {
    puVar3 = (uint64_t *)SystemRenderer();
    *puVar3 = &processed_var_6184_ptr;
    puVar3[1] = 6;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &processed_var_6168_ptr;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[3] = *(uint64_t *)(param_1 + 8);
    lVar4 = *(int64_t *)(param_1 + 8);
    if (*(int64_t *)(lVar4 + 0x10) != 0) {
      puVar3[2] = *(int64_t *)(lVar4 + 0x10);
      *(uint64_t **)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x10) + 0x18) = puVar3;
      lVar4 = *(int64_t *)(param_1 + 8);
    }
    *(uint64_t **)(lVar4 + 0x10) = puVar3;
    *(uint64_t **)(param_1 + 8) = puVar3;
  }
  if ((*(uint *)(param_1 + 0x10) >> 8 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x10) >> 0xb & 1) != 0) {
      param_2 = UISystem_7c260(*(uint64_t *)(param_1 + 0x18),param_2,param_3,param_4,uVar6);
    }
  }
  else {
    param_2 = _tolower___ctype_D_std__QEBADD_Z
                        (*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 8),param_2);
  }
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar2 = *(uint *)(lVar4 + 0x24);
  if (*(uint *)(lVar4 + 0x20) <= uVar2) {
    lVar5 = realloc(*(uint64_t *)(lVar4 + 0x28),uVar2 + 0x10);
    if (lVar5 == 0) {
      __Xbad_alloc_std__YAXXZ();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int64_t *)(lVar4 + 0x28) = lVar5;
    *(uint *)(lVar4 + 0x20) = uVar2 + 0x10;
    uVar2 = *(uint *)(lVar4 + 0x24);
  }
  *(int8_t *)((uint64_t)uVar2 + *(int64_t *)(lVar4 + 0x28)) = param_2;
  *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + 1;
  return;
}
uint64_t UISystem_7e070(int64_t *param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lStack_b0;
  uint64_t local_var_a8;
  int64_t lStack_98;
  int64_t lStack_90;
  uint64_t local_var_88;
  int64_t lStack_78;
  int64_t lStack_70;
  uint64_t local_var_68;
  int64_t lStack_58;
  int64_t lStack_50;
  uint64_t local_var_48;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  plVar1 = param_1 + 1;
  UISystem_7db80(&lStack_b0,plVar1);
  lStack_98 = param_1[4];
  plVar2 = param_1 + 5;
  UISystem_7ea50(&lStack_90,plVar2);
  if (param_2 != 0) {
    do {
      *param_1 = lVar3;
      if (plVar1 != &lStack_b0) {
        UISystem_7ff70(plVar1,lStack_b0,local_var_a8);
        param_1[4] = lStack_98;
      }
      if (plVar2 != &lStack_90) {
        UISystem_7fdf0(plVar2,lStack_90,local_var_88);
      }
      cVar6 = UISystem_7cea0(param_1,*(uint64_t *)(param_2 + 0x10));
      if (cVar6 != '\0') {
        if ((char)param_1[0x19] == '\0') {
          uVar7 = 1;
        }
        else {
          lStack_78 = *param_1;
          UISystem_7db80(&lStack_70,plVar1);
          lStack_58 = param_1[4];
          UISystem_7ea50(&lStack_50,plVar2);
          lVar8 = *param_1 - lVar3;
          for (lVar4 = *(int64_t *)(param_2 + 0x28); lVar4 != 0;
              lVar4 = *(int64_t *)(lVar4 + 0x28)) {
            *param_1 = lVar3;
            if (plVar1 != &lStack_b0) {
              UISystem_7ff70(plVar1,lStack_b0,local_var_a8);
              param_1[4] = lStack_98;
            }
            if (plVar2 != &lStack_90) {
              UISystem_7fdf0(plVar2,lStack_90,local_var_88);
            }
            cVar6 = UISystem_7cea0(param_1,*(uint64_t *)(lVar4 + 0x10));
            if (cVar6 != '\0') {
              lVar5 = *param_1;
              lVar9 = lVar5 - lVar3;
              if (lVar8 < lVar9) {
                lStack_78 = lVar5;
                if (&lStack_70 != plVar1) {
                  UISystem_7ff70(&lStack_70,*plVar1,param_1[2]);
                  lStack_58 = param_1[4];
                }
                lVar8 = lVar9;
                if (&lStack_50 != plVar2) {
                  UISystem_7fdf0(&lStack_50,*plVar2,param_1[6]);
                }
              }
            }
          }
          *param_1 = lStack_78;
          if (plVar1 != &lStack_70) {
            UISystem_7ff70(plVar1,lStack_70,local_var_68);
            param_1[4] = lStack_58;
          }
          if (plVar2 != &lStack_50) {
            UISystem_7fdf0(plVar2,lStack_50,local_var_48);
          }
          uVar7 = 1;
          UISystem_7b1c0(&lStack_50);
          DataStructure_57d60(&lStack_70);
        }
        goto LAB_18047e13c;
      }
      param_2 = *(int64_t *)(param_2 + 0x28);
    } while (param_2 != 0);
  }
  uVar7 = 0;
LAB_18047e13c:
  UISystem_7b1c0(&lStack_90);
  DataStructure_57d60(&lStack_b0);
  return uVar7;
}
uint64_t UISystem_7e2f0(int64_t *param_1,int64_t param_2,char param_3,int param_4)
{
  int iVar1;
  bool bVar2;
  int64_t *plVar3;
  byte bVar4;
  uint64_t uVar5;
  int *piVar6;
  int64_t lStack_98;
  int64_t *plStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  uint64_t local_var_78;
  int64_t lStack_68;
  int64_t lStack_60;
  uint64_t local_var_58;
  int64_t *plStack_48;
  int64_t *plStack_40;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  if (*(int *)(param_2 + 0x34) == 1) {
    uVar5 = UISystem_7fb20();
    return uVar5;
  }
  bVar4 = 0;
  lStack_88 = *param_1;
  plStack_48 = param_1 + 1;
  UISystem_7db80(&lStack_80,plStack_48);
  lStack_68 = param_1[4];
  plStack_40 = param_1 + 5;
  UISystem_7ea50(&lStack_60,plStack_40);
  piVar6 = (int *)((uint64_t)*(uint *)(param_2 + 0x30) * 0x10 + param_1[0x10]);
  iVar1 = *piVar6;
  plStack_90 = *(int64_t **)(piVar6 + 2);
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
        *(int64_t **)(piVar6 + 2) = &lStack_98;
        bVar4 = UISystem_7cea0(param_1,*(uint64_t *)(param_2 + 0x10));
      }
      else {
        bVar4 = UISystem_7cea0(param_1,*(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10));
      }
      goto LAB_18047e4d0;
    }
    if (param_3 != '\0') {
      if (bVar2) {
        *piVar6 = param_4 + 1;
        *(int64_t **)(piVar6 + 2) = &lStack_98;
        bVar4 = UISystem_7cea0(param_1,*(uint64_t *)(param_2 + 0x10));
        if (bVar4 != 0) goto LAB_18047e529;
      }
      else if (1 < param_4) goto LAB_18047e4dd;
      *piVar6 = iVar1;
      *(int64_t **)(piVar6 + 2) = plStack_90;
      UISystem_7db00(param_1,&lStack_88);
      bVar4 = UISystem_7cea0(param_1,*(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10));
      goto LAB_18047e4d0;
    }
    bVar4 = UISystem_7cea0(param_1,*(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10));
    if (bVar4 != 0) goto LAB_18047e529;
    if (bVar2) {
      UISystem_7db00(param_1,&lStack_88);
      *piVar6 = param_4 + 1;
      *(int64_t **)(piVar6 + 2) = &lStack_98;
      bVar4 = UISystem_7cea0(param_1,*(uint64_t *)(param_2 + 0x10));
      goto LAB_18047e4d0;
    }
  }
  else {
    bVar4 = UISystem_7cea0(param_1,*(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10));
LAB_18047e4d0:
    if (bVar4 != 0) goto LAB_18047e529;
  }
LAB_18047e4dd:
  plVar3 = plStack_48;
  *param_1 = lStack_88;
  if (plStack_48 != &lStack_80) {
    UISystem_7ff70(plStack_48,lStack_80,local_var_78);
    plVar3[3] = lStack_68;
  }
  if (plStack_40 != &lStack_60) {
    UISystem_7fdf0(plStack_40,lStack_60,local_var_58);
  }
LAB_18047e529:
  *piVar6 = iVar1;
  *(int64_t **)(piVar6 + 2) = plStack_90;
  UISystem_7b1c0(&lStack_60);
  DataStructure_57d60(&lStack_80);
  return (uint64_t)bVar4;
}
uint64_t UISystem_7e580(int64_t *param_1,int64_t param_2)
{
  int64_t lVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  byte *pbVar11;
  byte bStackX_8;
  pbVar11 = (byte *)*param_1;
  bStackX_8 = *pbVar11;
  if ((*(uint *)(param_1 + 0x17) & 0x100) != 0) {
    bStackX_8 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_1[0x1a] + 8));
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
              if (*pbVar3 != *(byte *)(*(int64_t *)(puVar9 + 4) + uVar7 + uVar6)) break;
              uVar6 = uVar6 + 1;
              pbVar3 = pbVar4;
            } while (uVar6 < uVar5);
          }
          pbVar3 = (byte *)param_1[0x14];
          if (pbVar4 == (byte *)param_1[0x14]) goto LAB_18047e661;
          uVar10 = (int)uVar7 + uVar5;
          uVar7 = (uint64_t)uVar10;
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
  lVar1 = *(int64_t *)(param_2 + 0x38);
  if (lVar1 != 0) {
    bVar2 = bStackX_8;
    if ((*(uint *)(param_1 + 0x17) & 0x800) != 0) {
      bVar2 = UISystem_7c260(param_1[0x1a]);
    }
    uVar7 = 0;
    if (*(uint *)(lVar1 + 4) != 0) {
      do {
        if ((*(byte *)(uVar7 + *(int64_t *)(lVar1 + 8)) <= bVar2) &&
           (pbVar3 = pbVar8,
           bVar2 <= *(byte *)((uint64_t)((int)uVar7 + 1) + *(int64_t *)(lVar1 + 8))))
        goto LAB_18047e66e;
        uVar5 = (int)uVar7 + 2;
        uVar7 = (uint64_t)uVar5;
      } while (uVar5 < *(uint *)(lVar1 + 4));
    }
  }
  if ((*(int64_t *)(param_2 + 0x28) == 0) ||
     (uVar5 = 1,
     (*(byte *)((uint64_t)(bStackX_8 >> 3) + *(int64_t *)(param_2 + 0x28)) &
     (byte)(1 << (bStackX_8 & 7))) == 0)) {
    uVar5 = 0;
  }
LAB_18047e706:
  if (uVar5 != (*(uint *)(param_2 + 0xc) & 1)) {
    *param_1 = (int64_t)pbVar8;
    return 1;
  }
  return 0;
}
uint64_t UISystem_7e58c(int64_t *param_1,int64_t param_2)
{
  int64_t lVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  byte *pbVar11;
  byte bStack0000000000000060;
  int64_t local_var_68;
  pbVar11 = (byte *)*param_1;
  bStack0000000000000060 = *pbVar11;
  if ((*(uint *)(param_1 + 0x17) & 0x100) != 0) {
    bStack0000000000000060 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_1[0x1a] + 8));
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
              if (*pbVar3 != *(byte *)(*(int64_t *)(puVar9 + 4) + uVar7 + uVar6)) break;
              uVar6 = uVar6 + 1;
              pbVar3 = pbVar4;
            } while (uVar6 < uVar5);
          }
          pbVar3 = (byte *)param_1[0x14];
          if (pbVar4 == (byte *)param_1[0x14]) goto LAB_18047e661;
          uVar10 = (int)uVar7 + uVar5;
          uVar7 = (uint64_t)uVar10;
        } while (uVar10 < puVar9[3]);
      }
      puVar9 = *(uint **)(puVar9 + 6);
      pbVar3 = pbVar11;
    } while (puVar9 != (uint *)0x0);
LAB_18047e661:
    param_2 = local_var_68;
    if (pbVar3 != pbVar11) {
LAB_18047e66e:
      uVar5 = 1;
      pbVar8 = pbVar3;
      goto LAB_18047e706;
    }
  }
  lVar1 = *(int64_t *)(param_2 + 0x38);
  if (lVar1 != 0) {
    if ((*(uint *)(param_1 + 0x17) & 0x800) != 0) {
      bStack0000000000000060 = UISystem_7c260(param_1[0x1a]);
    }
    uVar7 = 0;
    if (*(uint *)(lVar1 + 4) != 0) {
      do {
        if ((*(byte *)(uVar7 + *(int64_t *)(lVar1 + 8)) <= bStack0000000000000060) &&
           (pbVar3 = pbVar8,
           bStack0000000000000060 <=
           *(byte *)((uint64_t)((int)uVar7 + 1) + *(int64_t *)(lVar1 + 8)))) goto LAB_18047e66e;
        uVar5 = (int)uVar7 + 2;
        uVar7 = (uint64_t)uVar5;
      } while (uVar5 < *(uint *)(lVar1 + 4));
    }
  }
  if ((*(int64_t *)(param_2 + 0x28) == 0) ||
     (uVar5 = 1,
     (*(byte *)((uint64_t)(bVar2 >> 3) + *(int64_t *)(param_2 + 0x28)) & (byte)(1 << (bVar2 & 7)))
     == 0)) {
    uVar5 = 0;
  }
LAB_18047e706:
  if (uVar5 != (*(uint *)(param_2 + 0xc) & 1)) {
    *param_1 = (int64_t)pbVar8;
    return 1;
  }
  return 0;
}
int8_t UISystem_7e72f(void)
{
  return 0;
}
uint64_t UISystem_7e750(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  uVar4 = 0;
  if (*(uint *)(param_1 + 0xc4) != 0) {
    do {
      lVar1 = (uVar4 >> 5) * 4;
      uVar5 = 1 << ((byte)uVar4 & 0x1f);
      if (((*(uint *)(*(int64_t *)(param_1 + 0x48) + lVar1) & uVar5) != 0) &&
         ((*(uint *)(lVar1 + *(int64_t *)(param_1 + 8)) & uVar5) != 0)) {
        lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x68) + uVar4 * 0x10);
        lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + uVar4 * 0x10);
        if (lVar1 != lVar2) {
          lVar3 = *(int64_t *)(param_1 + 0x98);
          return CONCAT71((int7)((uint64_t)lVar3 >> 8),lVar1 - lVar3 < lVar2 - lVar3);
        }
        lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x68) + 8 + uVar4 * 0x10);
        lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 8 + uVar4 * 0x10);
        if (lVar1 != lVar2) {
          lVar3 = *(int64_t *)(param_1 + 0x98);
          return CONCAT71((int7)((uint64_t)lVar3 >> 8),lVar1 - lVar3 < lVar2 - lVar3);
        }
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0xc4));
  }
  return uVar4 & 0xffffffffffffff00;
}
uint64_t *
UISystem_7e8a0(uint64_t *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
             int64_t param_6,uint param_7)
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
          cVar1 = UISystem_7c260(param_6,cVar1);
          cVar2 = UISystem_7c260(param_6,cVar2);
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
        cVar1 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_6 + 8),cVar1);
        cVar2 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_6 + 8),cVar2);
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
// 函数: void UISystem_7ea30(void)
void UISystem_7ea30(void)
{
  UISystem_7ead0();
  return;
}
uint64_t * UISystem_7ea50(uint64_t *param_1,int64_t *param_2)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  char cVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  cVar3 = UISystem_7eb30(param_1,param_2[1] - *param_2 >> 4);
  if (cVar3 != '\0') {
    puVar5 = (uint64_t *)*param_1;
    puVar1 = (uint64_t *)param_2[1];
    for (puVar4 = (uint64_t *)*param_2; puVar4 != puVar1; puVar4 = puVar4 + 2) {
      uVar2 = puVar4[1];
      *puVar5 = *puVar4;
      puVar5[1] = uVar2;
      puVar5 = puVar5 + 2;
    }
    param_1[1] = puVar5;
  }
  return param_1;
}