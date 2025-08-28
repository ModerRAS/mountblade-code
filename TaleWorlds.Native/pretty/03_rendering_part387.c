#include "TaleWorlds.Native.Split.h"

// 03_rendering_part387.c - 8 个函数

// 函数: void FUN_18047ead0(int64_t *param_1)
void FUN_18047ead0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if (0xfff < (uint64_t)(param_1[2] - lVar1)) {
      lVar2 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,(param_1[2] - lVar1) + 0x27);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



uint64_t FUN_18047eb30(int64_t *param_1,uint64_t param_2)

{
  code *pcVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  uVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0xfffffffffffffff < param_2) {
      FUN_180189990();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    lVar2 = FUN_180067110(param_2 * 0x10);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    lVar2 = lVar2 + param_2 * 0x10;
    param_1[2] = lVar2;
    uVar3 = CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
  }
  return uVar3;
}



bool FUN_18047eb90(uint64_t *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  *(int32_t *)((int64_t)param_1 + 0x74) = 0;
  iVar4 = 0x7fffffff;
  do {
    if (9 < (byte)(*(char *)(param_1 + 0xf) - 0x30U)) break;
    iVar3 = *(char *)(param_1 + 0xf) + -0x30;
    if (iVar3 == -1) break;
    iVar4 = iVar4 + -1;
    *(int *)((int64_t)param_1 + 0x74) = iVar3 + *(int *)((int64_t)param_1 + 0x74) * 10;
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)param_1[2]) {
      if (((*pcVar2 == '\\') && (pcVar1 = pcVar2 + 1, pcVar1 != (char *)param_1[2])) &&
         ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
          (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
        pcVar2 = pcVar1;
      }
      *param_1 = pcVar2 + 1;
    }
    FUN_18047b3a0(param_1);
  } while (iVar4 != 0);
  return iVar4 != 0x7fffffff;
}



uint64_t FUN_18047ec40(int64_t *param_1,char param_2)

{
  int64_t lVar1;
  short sVar2;
  
  lVar1 = *param_1;
  if (lVar1 != param_1[2]) {
    sVar2 = FUN_180480720(param_1[0xd],lVar1,lVar1 + 1,*(uint *)(param_1 + 0xe) >> 8 & 0xffffff01);
    if (sVar2 != 0) {
      if (param_2 != '\0') {
        FUN_18047f6d0(param_1 + 8);
      }
      FUN_180480560(param_1 + 8,sVar2,
                    *(byte *)(*(int64_t *)(*(int64_t *)(param_1[0xd] + 8) + 0x18) +
                             (uint64_t)*(byte *)(param_1 + 0xf) * 2) & 1);
      func_0x00018047c980(param_1);
      return 1;
    }
  }
  return 0;
}



uint64_t FUN_18047ec7f(void)

{
  int64_t unaff_RBX;
  int16_t unaff_BP;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
    FUN_18047f6d0(unaff_RBX + 0x40);
  }
  FUN_180480560(unaff_RBX + 0x40,unaff_BP,
                *(byte *)(*(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x68) + 8) + 0x18) +
                         (uint64_t)*(byte *)(unaff_RBX + 0x78) * 2) & 1);
  func_0x00018047c980();
  return 1;
}



int8_t FUN_18047ecd6(void)

{
  return 0;
}





// 函数: void FUN_18047ecf0(int64_t *param_1)
void FUN_18047ecf0(int64_t *param_1)

{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  
LAB_18047ed10:
  while (iVar6 = *(int *)((int64_t)param_1 + 0x7c), iVar6 != 0x5c) {
    if (iVar6 != 0x5b) {
      if (iVar6 == 0x5d) {
        return;
      }
      if (iVar6 == -1) {
        return;
      }
      pcVar7 = (char *)*param_1;
      *(int *)((int64_t)param_1 + 0x74) = (int)(char)param_1[0xf];
      if (pcVar7 != (char *)param_1[2]) {
        if (((*pcVar7 == '\\') && (pcVar1 = pcVar7 + 1, pcVar1 != (char *)param_1[2])) &&
           ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
            (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
          pcVar7 = pcVar1;
        }
        *param_1 = (int64_t)(pcVar7 + 1);
      }
      FUN_18047b3a0(param_1);
      goto LAB_18047f007;
    }
    pcVar7 = (char *)*param_1;
    if (pcVar7 != (char *)param_1[2]) {
      if (((*pcVar7 == '\\') && (pcVar1 = pcVar7 + 1, pcVar1 != (char *)param_1[2])) &&
         ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
          (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
        pcVar7 = pcVar1;
      }
      *param_1 = (int64_t)(pcVar7 + 1);
    }
    FUN_18047b3a0(param_1);
    uVar2 = *(uint *)((int64_t)param_1 + 0x7c);
    if ((0x3d < uVar2) || ((0x2400400000000000U >> ((int64_t)(int)uVar2 & 0x3fU) & 1) == 0)) {
      *(int32_t *)((int64_t)param_1 + 0x74) = 0x5b;
      goto LAB_18047f007;
    }
    pcVar7 = (char *)*param_1;
    if (pcVar7 != (char *)param_1[2]) {
      if (((*pcVar7 == '\\') && (pcVar1 = pcVar7 + 1, pcVar1 != (char *)param_1[2])) &&
         ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
          (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
        pcVar7 = pcVar1;
      }
      *param_1 = (int64_t)(pcVar7 + 1);
    }
    FUN_18047b3a0(param_1);
    FUN_180480910(param_1,uVar2);
  }
  pcVar7 = (char *)*param_1;
  if (pcVar7 != (char *)param_1[2]) {
    if (((*pcVar7 == '\\') && (pcVar1 = pcVar7 + 1, pcVar1 != (char *)param_1[2])) &&
       ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
        (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
      pcVar7 = pcVar1;
    }
    *param_1 = (int64_t)(pcVar7 + 1);
  }
  FUN_18047b3a0(param_1);
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 0x15 & 1) == 0) {
    if ((uVar2 >> 0x10 & 1) == 0) {
LAB_18047ee83:
      if ((uVar2 >> 0xf & 1) == 0) {
LAB_18047eebf:
        *(int32_t *)((int64_t)param_1 + 0x74) = 0x5c;
      }
      else if ((char)param_1[0xf] == 'a') {
        *(int32_t *)((int64_t)param_1 + 0x74) = 7;
        func_0x00018047c980(param_1);
      }
      else {
        if ((char)param_1[0xf] != 'b') goto LAB_18047eebf;
        *(int32_t *)((int64_t)param_1 + 0x74) = 8;
        func_0x00018047c980(param_1);
      }
    }
    else {
      cVar4 = (char)param_1[0xf];
      if (cVar4 == 'f') {
        *(int32_t *)((int64_t)param_1 + 0x74) = 0xc;
        func_0x00018047c980(param_1);
      }
      else if (cVar4 == 'n') {
        *(int32_t *)((int64_t)param_1 + 0x74) = 10;
        func_0x00018047c980(param_1);
      }
      else if (cVar4 == 'r') {
        *(int32_t *)((int64_t)param_1 + 0x74) = 0xd;
        func_0x00018047c980(param_1);
      }
      else if (cVar4 == 't') {
        *(int32_t *)((int64_t)param_1 + 0x74) = 9;
        func_0x00018047c980(param_1);
      }
      else {
        if (cVar4 != 'v') goto LAB_18047ee83;
        *(int32_t *)((int64_t)param_1 + 0x74) = 0xb;
        func_0x00018047c980(param_1);
      }
    }
  }
  else {
    if (((uVar2 >> 0xe & 1) == 0) || ((char)param_1[0xf] != '\\')) {
      if (((uVar2 >> 0x11 & 1) == 0) || (cVar4 = FUN_18047ec40(param_1,0), cVar4 == '\0')) {
        cVar4 = FUN_18047eb90(param_1);
        if (cVar4 == '\0') {
          cVar4 = FUN_18047f140(param_1);
          cVar4 = cVar4 != '\0';
        }
        else {
          if (*(int *)((int64_t)param_1 + 0x74) != 0) {
            FUN_18047b390();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          cVar4 = '\x01';
        }
      }
      else {
        cVar4 = '\x02';
      }
    }
    else {
      *(int32_t *)((int64_t)param_1 + 0x74) = 0x5c;
      func_0x00018047c980(param_1);
      cVar4 = '\x01';
    }
    if (cVar4 == '\0') {
      return;
    }
    if (cVar4 == '\x02') goto LAB_18047ed10;
  }
LAB_18047f007:
  if ((*(int *)((int64_t)param_1 + 0x74) == 0) && ((*(uint *)(param_1 + 0x10) & 0x100000) == 0)) {
    FUN_18047b390();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)((int64_t)param_1 + 0x7c) == 0x2d) {
    pcVar7 = (char *)*param_1;
    if (pcVar7 != (char *)param_1[2]) {
      if (((*pcVar7 == '\\') && (pcVar1 = pcVar7 + 1, pcVar1 != (char *)param_1[2])) &&
         ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
          (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
        pcVar7 = pcVar1;
      }
      *param_1 = (int64_t)(pcVar7 + 1);
    }
    FUN_18047b3a0(param_1);
    bVar5 = *(byte *)((int64_t)param_1 + 0x74);
    iVar6 = FUN_180480130(param_1);
    if (iVar6 == 0) {
      FUN_18047f770(param_1 + 8,*(int8_t *)((int64_t)param_1 + 0x74));
      FUN_18047f770(param_1 + 8,0x2d);
      return;
    }
    if (iVar6 == 2) {
      FUN_18047b390();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(uint *)(param_1 + 0xe) & 0x800) != 0) {
      cVar4 = FUN_18047c260(param_1[0xd],*(int8_t *)((int64_t)param_1 + 0x74));
      *(int *)((int64_t)param_1 + 0x74) = (int)cVar4;
      bVar5 = FUN_18047c260(param_1[0xd],bVar5);
    }
    if (*(byte *)((int64_t)param_1 + 0x74) < bVar5) {
      FUN_18047b390();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_180480320(param_1 + 8);
  }
  else {
    FUN_18047f770(param_1 + 8);
  }
  goto LAB_18047ed10;
}



uint64_t FUN_18047f140(int64_t *param_1)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t *plVar9;
  char *pcVar10;
  
  if (*(int *)((int64_t)param_1 + 0x7c) == -1) {
    FUN_18047b390(param_1,2);
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  plVar9 = param_1;
  if (((*(uint *)(param_1 + 0x10) & 0x10000) == 0) ||
     (cVar4 = func_0x0001804802d0(param_1,(char)param_1[0xf]), cVar4 == '\0')) {
    uVar5 = *(uint *)(plVar9 + 0x10);
    if ((uVar5 >> 0xf & 1) == 0) {
LAB_18047f1b3:
      cVar4 = (char)param_1[0xf];
      if (cVar4 == 'c') {
        if ((uVar5 >> 0x12 & 1) != 0) {
          func_0x00018047c980(param_1);
          if ((*(ushort *)
                (*(int64_t *)(*(int64_t *)(param_1[0xd] + 8) + 0x18) +
                (uint64_t)*(byte *)(param_1 + 0xf) * 2) & 0x103) == 0) {
            FUN_18047b390();
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return uVar7;
          }
          uVar5 = (int)(char)*(byte *)(param_1 + 0xf) & 0x8000001f;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
          }
          iVar6 = (int)(char)uVar5;
          goto LAB_18047f18a;
        }
      }
      else if (cVar4 == 'x') {
        if ((uVar5 >> 0xc & 1) != 0) {
          func_0x00018047c980(param_1);
          iVar6 = 2;
          *(int32_t *)((int64_t)param_1 + 0x74) = 0;
          do {
            bVar2 = *(byte *)(param_1 + 0xf);
            uVar5 = (uint)bVar2;
            if (9 < (byte)(bVar2 - 0x30)) {
              if ((byte)(bVar2 + 0x9f) < 6) {
                uVar5 = (int)(char)bVar2 - 0x57;
                goto LAB_18047f25f;
              }
              if ((byte)(bVar2 + 0xbf) < 6) {
                uVar5 = (int)(char)bVar2 - 0x37;
                goto LAB_18047f25f;
              }
LAB_18047f2cf:
              if (iVar6 != 0) {
                FUN_18047b390(uVar5,2);
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return uVar7;
              }
              break;
            }
            uVar5 = (int)(char)bVar2 - 0x30;
LAB_18047f25f:
            if (uVar5 == 0xffffffff) goto LAB_18047f2cf;
            iVar6 = iVar6 + -1;
            pcVar10 = (char *)*param_1;
            *(uint *)((int64_t)param_1 + 0x74) = *(int *)((int64_t)param_1 + 0x74) * 0x10 + uVar5;
            if (pcVar10 != (char *)param_1[2]) {
              if (((*pcVar10 == '\\') && (pcVar1 = pcVar10 + 1, pcVar1 != (char *)param_1[2])) &&
                 ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
                  (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0))))))
              {
                pcVar10 = pcVar1;
              }
              *param_1 = (int64_t)(pcVar10 + 1);
            }
            FUN_18047b3a0(param_1);
          } while (iVar6 != 0);
          goto LAB_18047f195;
        }
      }
      else if ((cVar4 == 'u') && ((uVar5 >> 0xb & 1) != 0)) {
        pcVar10 = (char *)*param_1;
        if (pcVar10 != (char *)param_1[2]) {
          if (((*pcVar10 == '\\') && (pcVar1 = pcVar10 + 1, pcVar1 != (char *)param_1[2])) &&
             ((((uVar5 & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
              (((uVar5 & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
            pcVar10 = pcVar1;
          }
          *param_1 = (int64_t)(pcVar10 + 1);
        }
        FUN_18047b3a0(param_1);
        iVar6 = 4;
        *(int32_t *)((int64_t)param_1 + 0x74) = 0;
        do {
          bVar2 = *(byte *)(param_1 + 0xf);
          uVar5 = (uint)bVar2;
          if (9 < (byte)(bVar2 - 0x30)) {
            if ((byte)(bVar2 + 0x9f) < 6) {
              uVar5 = (int)(char)bVar2 - 0x57;
              goto LAB_18047f373;
            }
            if ((byte)(bVar2 + 0xbf) < 6) {
              uVar5 = (int)(char)bVar2 - 0x37;
              goto LAB_18047f373;
            }
LAB_18047f3e3:
            if (iVar6 != 0) {
              FUN_18047b390(uVar5,2);
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return uVar7;
            }
            break;
          }
          uVar5 = (int)(char)bVar2 - 0x30;
LAB_18047f373:
          if (uVar5 == 0xffffffff) goto LAB_18047f3e3;
          iVar6 = iVar6 + -1;
          pcVar10 = (char *)*param_1;
          *(uint *)((int64_t)param_1 + 0x74) = *(int *)((int64_t)param_1 + 0x74) * 0x10 + uVar5;
          if (pcVar10 != (char *)param_1[2]) {
            if (((*pcVar10 == '\\') && (pcVar1 = pcVar10 + 1, pcVar1 != (char *)param_1[2])) &&
               ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
                (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
              pcVar10 = pcVar1;
            }
            *param_1 = (int64_t)(pcVar10 + 1);
          }
          FUN_18047b3a0(param_1);
        } while (iVar6 != 0);
        goto LAB_18047f195;
      }
      if ((uVar5 >> 0xd & 1) != 0) {
        iVar6 = 3;
        *(int32_t *)((int64_t)param_1 + 0x74) = 0;
        do {
          if ((7 < (byte)((char)param_1[0xf] - 0x30U)) ||
             (iVar8 = (char)param_1[0xf] + -0x30, iVar8 == -1)) break;
          iVar6 = iVar6 + -1;
          *(int *)((int64_t)param_1 + 0x74) = iVar8 + *(int *)((int64_t)param_1 + 0x74) * 8;
          pcVar10 = (char *)*param_1;
          if (pcVar10 != (char *)param_1[2]) {
            if (((*pcVar10 == '\\') && (pcVar1 = pcVar10 + 1, pcVar1 != (char *)param_1[2])) &&
               ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
                (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
              pcVar10 = pcVar1;
            }
            *param_1 = (int64_t)(pcVar10 + 1);
          }
          FUN_18047b3a0(param_1);
        } while (iVar6 != 0);
        if (iVar6 != 3) {
          if (*(int *)((int64_t)param_1 + 0x74) == 0) {
            FUN_18047b390();
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return uVar7;
          }
          goto LAB_18047f195;
        }
      }
      uVar5 = *(uint *)(param_1 + 0x10);
      iVar6 = (int)(char)param_1[0xf];
      if ((uVar5 >> 0x16 & 1) != 0) {
        switch(iVar6) {
        case 0x44:
        case 0x53:
        case 0x57:
        case 99:
        case 100:
        case 0x73:
        case 0x77:
          goto FUN_18047f534;
        default:
          goto LAB_18047f51b;
        }
      }
      switch(iVar6 + -0x22) {
      case 0:
      case 0xd:
        uVar5 = uVar5 >> 0x18;
        break;
      default:
        goto FUN_18047f534;
      case 2:
      case 8:
      case 0xc:
      case 0x39:
      case 0x3a:
      case 0x3c:
      case 0x5a:
        goto LAB_18047f51b;
      case 6:
      case 7:
      case 9:
      case 0x1d:
      case 0x59:
      case 0x5b:
        uVar5 = uVar5 >> 0x17;
      }
      if ((uVar5 & 1) == 0) {
FUN_18047f534:
        return 0;
      }
LAB_18047f51b:
      *(int *)((int64_t)param_1 + 0x74) = iVar6;
      func_0x00018047c980(param_1);
      return 1;
    }
    if ((char)param_1[0xf] == 'a') {
      iVar6 = 7;
    }
    else {
      if ((char)param_1[0xf] != 'b') goto LAB_18047f1b3;
      iVar6 = 8;
    }
LAB_18047f18a:
    *(int *)((int64_t)param_1 + 0x74) = iVar6;
  }
  func_0x00018047c980(param_1);
LAB_18047f195:
  if (0xff < *(uint *)((int64_t)param_1 + 0x74)) {
    FUN_18047b390();
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  *(int *)((int64_t)param_1 + 0x74) = (int)(char)*(uint *)((int64_t)param_1 + 0x74);
  return 1;
}



uint64_t FUN_18047f15d(int64_t param_1)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  int iVar8;
  char *pcVar9;
  int64_t *unaff_RBX;
  bool in_ZF;
  
  if ((in_ZF) ||
     (cVar4 = func_0x0001804802d0(param_1,*(int8_t *)(param_1 + 0x78)), cVar4 == '\0')) {
    uVar5 = *(uint *)(param_1 + 0x80);
    if ((uVar5 >> 0xf & 1) == 0) {
LAB_18047f1b3:
      cVar4 = (char)unaff_RBX[0xf];
      if (cVar4 == 'c') {
        if ((uVar5 >> 0x12 & 1) != 0) {
          func_0x00018047c980();
          if ((*(ushort *)
                (*(int64_t *)(*(int64_t *)(unaff_RBX[0xd] + 8) + 0x18) +
                (uint64_t)*(byte *)(unaff_RBX + 0xf) * 2) & 0x103) == 0) {
            FUN_18047b390();
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return uVar7;
          }
          uVar5 = (int)(char)*(byte *)(unaff_RBX + 0xf) & 0x8000001f;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
          }
          iVar6 = (int)(char)uVar5;
          goto LAB_18047f18a;
        }
      }
      else if (cVar4 == 'x') {
        if ((uVar5 >> 0xc & 1) != 0) {
          func_0x00018047c980();
          iVar6 = 2;
          *(int32_t *)((int64_t)unaff_RBX + 0x74) = 0;
          do {
            bVar2 = *(byte *)(unaff_RBX + 0xf);
            uVar5 = (uint)bVar2;
            if (9 < (byte)(bVar2 - 0x30)) {
              if ((byte)(bVar2 + 0x9f) < 6) {
                uVar5 = (int)(char)bVar2 - 0x57;
                goto LAB_18047f25f;
              }
              if ((byte)(bVar2 + 0xbf) < 6) {
                uVar5 = (int)(char)bVar2 - 0x37;
                goto LAB_18047f25f;
              }
LAB_18047f2cf:
              if (iVar6 != 0) {
                FUN_18047b390(uVar5,2);
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return uVar7;
              }
              break;
            }
            uVar5 = (int)(char)bVar2 - 0x30;
LAB_18047f25f:
            if (uVar5 == 0xffffffff) goto LAB_18047f2cf;
            iVar6 = iVar6 + -1;
            pcVar9 = (char *)*unaff_RBX;
            *(uint *)((int64_t)unaff_RBX + 0x74) =
                 *(int *)((int64_t)unaff_RBX + 0x74) * 0x10 + uVar5;
            if (pcVar9 != (char *)unaff_RBX[2]) {
              if (((*pcVar9 == '\\') && (pcVar1 = pcVar9 + 1, pcVar1 != (char *)unaff_RBX[2])) &&
                 ((((*(uint *)(unaff_RBX + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
                  (((*(uint *)(unaff_RBX + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))
                 ) {
                pcVar9 = pcVar1;
              }
              *unaff_RBX = (int64_t)(pcVar9 + 1);
            }
            FUN_18047b3a0();
          } while (iVar6 != 0);
          goto LAB_18047f195;
        }
      }
      else if ((cVar4 == 'u') && ((uVar5 >> 0xb & 1) != 0)) {
        pcVar9 = (char *)*unaff_RBX;
        if (pcVar9 != (char *)unaff_RBX[2]) {
          if (((*pcVar9 == '\\') && (pcVar1 = pcVar9 + 1, pcVar1 != (char *)unaff_RBX[2])) &&
             ((((uVar5 & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
              (((uVar5 & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
            pcVar9 = pcVar1;
          }
          *unaff_RBX = (int64_t)(pcVar9 + 1);
        }
        FUN_18047b3a0();
        iVar6 = 4;
        *(int32_t *)((int64_t)unaff_RBX + 0x74) = 0;
        do {
          bVar2 = *(byte *)(unaff_RBX + 0xf);
          uVar5 = (uint)bVar2;
          if (9 < (byte)(bVar2 - 0x30)) {
            if ((byte)(bVar2 + 0x9f) < 6) {
              uVar5 = (int)(char)bVar2 - 0x57;
              goto LAB_18047f373;
            }
            if ((byte)(bVar2 + 0xbf) < 6) {
              uVar5 = (int)(char)bVar2 - 0x37;
              goto LAB_18047f373;
            }
LAB_18047f3e3:
            if (iVar6 != 0) {
              FUN_18047b390(uVar5,2);
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return uVar7;
            }
            break;
          }
          uVar5 = (int)(char)bVar2 - 0x30;
LAB_18047f373:
          if (uVar5 == 0xffffffff) goto LAB_18047f3e3;
          iVar6 = iVar6 + -1;
          pcVar9 = (char *)*unaff_RBX;
          *(uint *)((int64_t)unaff_RBX + 0x74) =
               *(int *)((int64_t)unaff_RBX + 0x74) * 0x10 + uVar5;
          if (pcVar9 != (char *)unaff_RBX[2]) {
            if (((*pcVar9 == '\\') && (pcVar1 = pcVar9 + 1, pcVar1 != (char *)unaff_RBX[2])) &&
               ((((*(uint *)(unaff_RBX + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
                (((*(uint *)(unaff_RBX + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0))))))
            {
              pcVar9 = pcVar1;
            }
            *unaff_RBX = (int64_t)(pcVar9 + 1);
          }
          FUN_18047b3a0();
        } while (iVar6 != 0);
        goto LAB_18047f195;
      }
      if ((uVar5 >> 0xd & 1) != 0) {
        iVar6 = 3;
        *(int32_t *)((int64_t)unaff_RBX + 0x74) = 0;
        do {
          if ((7 < (byte)((char)unaff_RBX[0xf] - 0x30U)) ||
             (iVar8 = (char)unaff_RBX[0xf] + -0x30, iVar8 == -1)) break;
          iVar6 = iVar6 + -1;
          *(int *)((int64_t)unaff_RBX + 0x74) = iVar8 + *(int *)((int64_t)unaff_RBX + 0x74) * 8;
          pcVar9 = (char *)*unaff_RBX;
          if (pcVar9 != (char *)unaff_RBX[2]) {
            if (((*pcVar9 == '\\') && (pcVar1 = pcVar9 + 1, pcVar1 != (char *)unaff_RBX[2])) &&
               ((((*(uint *)(unaff_RBX + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
                (((*(uint *)(unaff_RBX + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0))))))
            {
              pcVar9 = pcVar1;
            }
            *unaff_RBX = (int64_t)(pcVar9 + 1);
          }
          FUN_18047b3a0();
        } while (iVar6 != 0);
        if (iVar6 != 3) {
          if (*(int *)((int64_t)unaff_RBX + 0x74) == 0) {
            FUN_18047b390();
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return uVar7;
          }
          goto LAB_18047f195;
        }
      }
      uVar5 = *(uint *)(unaff_RBX + 0x10);
      iVar6 = (int)(char)unaff_RBX[0xf];
      if ((uVar5 >> 0x16 & 1) != 0) {
        switch(iVar6) {
        case 0x44:
        case 0x53:
        case 0x57:
        case 99:
        case 100:
        case 0x73:
        case 0x77:
          goto FUN_18047f534;
        default:
          goto LAB_18047f51b;
        }
      }
      switch(iVar6 + -0x22) {
      case 0:
      case 0xd:
        uVar5 = uVar5 >> 0x18;
        break;
      default:
        goto FUN_18047f534;
      case 2:
      case 8:
      case 0xc:
      case 0x39:
      case 0x3a:
      case 0x3c:
      case 0x5a:
        goto LAB_18047f51b;
      case 6:
      case 7:
      case 9:
      case 0x1d:
      case 0x59:
      case 0x5b:
        uVar5 = uVar5 >> 0x17;
      }
      if ((uVar5 & 1) == 0) {
FUN_18047f534:
        return 0;
      }
LAB_18047f51b:
      *(int *)((int64_t)unaff_RBX + 0x74) = iVar6;
      func_0x00018047c980();
      return 1;
    }
    if ((char)unaff_RBX[0xf] == 'a') {
      iVar6 = 7;
    }
    else {
      if ((char)unaff_RBX[0xf] != 'b') goto LAB_18047f1b3;
      iVar6 = 8;
    }
LAB_18047f18a:
    *(int *)((int64_t)unaff_RBX + 0x74) = iVar6;
  }
  func_0x00018047c980();
LAB_18047f195:
  if (0xff < *(uint *)((int64_t)unaff_RBX + 0x74)) {
    FUN_18047b390();
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  *(int *)((int64_t)unaff_RBX + 0x74) = (int)(char)*(uint *)((int64_t)unaff_RBX + 0x74);
  return 1;
}



uint64_t FUN_18047f4ad(void)

{
  uint uVar1;
  int64_t unaff_RBX;
  int iVar2;
  
  uVar1 = *(uint *)(unaff_RBX + 0x80);
  iVar2 = (int)*(char *)(unaff_RBX + 0x78);
  if ((uVar1 >> 0x16 & 1) != 0) {
    switch(iVar2) {
    case 0x44:
    case 0x53:
    case 0x57:
    case 99:
    case 100:
    case 0x73:
    case 0x77:
      goto FUN_18047f534;
    default:
LAB_18047f51b:
      *(int *)(unaff_RBX + 0x74) = iVar2;
      func_0x00018047c980();
      return 1;
    }
  }
  switch(iVar2 + -0x22) {
  case 0:
  case 0xd:
    uVar1 = uVar1 >> 0x18;
    break;
  default:
    goto FUN_18047f534;
  case 2:
  case 8:
  case 0xc:
  case 0x39:
  case 0x3a:
  case 0x3c:
  case 0x5a:
    goto LAB_18047f51b;
  case 6:
  case 7:
  case 9:
  case 0x1d:
  case 0x59:
  case 0x5b:
    uVar1 = uVar1 >> 0x17;
  }
  if ((uVar1 & 1) != 0) goto LAB_18047f51b;
FUN_18047f534:
  return 0;
}



int8_t FUN_18047f534(void)

{
  return 0;
}





// 函数: void FUN_18047f541(uint64_t param_1)
void FUN_18047f541(uint64_t param_1)

{
  code *pcVar1;
  
  FUN_18047b390(param_1,2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





// 函数: void FUN_18047f54c(uint64_t param_1)
void FUN_18047f54c(uint64_t param_1)

{
  code *pcVar1;
  
  FUN_18047b390(param_1,2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





// 函数: void FUN_18047f630(int64_t param_1)
void FUN_18047f630(int64_t param_1)

{
  int iVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  
  lVar4 = FUN_18047ce10(param_1 + 0x40,8);
  FUN_18047b5a0(param_1);
  iVar1 = *(int *)(lVar4 + 8);
  if (iVar1 == 8) {
    uVar2 = 9;
  }
  else {
    uVar2 = 0xc;
    if ((iVar1 != 10) && (uVar2 = 0xe, iVar1 == 0xb)) {
      uVar2 = 0xc;
    }
  }
  puVar3 = (uint64_t *)FUN_1808fc418(0x28);
  *puVar3 = &unknown_var_6184_ptr;
  *(int32_t *)(puVar3 + 1) = uVar2;
  *(int32_t *)((int64_t)puVar3 + 0xc) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = &unknown_var_6120_ptr;
  puVar3[4] = lVar4;
  puVar3[3] = *(uint64_t *)(param_1 + 0x48);
  lVar4 = *(int64_t *)(param_1 + 0x48);
  if (*(int64_t *)(lVar4 + 0x10) != 0) {
    puVar3[2] = *(int64_t *)(lVar4 + 0x10);
    *(uint64_t **)(*(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x10) + 0x18) = puVar3;
    lVar4 = *(int64_t *)(param_1 + 0x48);
  }
  *(uint64_t **)(lVar4 + 0x10) = puVar3;
  *(uint64_t **)(param_1 + 0x48) = puVar3;
  return;
}





// 函数: void FUN_18047f680(int64_t param_1)
void FUN_18047f680(int64_t param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_180480650(param_1 + 0x40);
  FUN_18047b5a0(param_1);
  FUN_18047b8d0(param_1 + 0x40,uVar1);
  *(uint64_t *)(param_1 + 0x48) = uVar1;
  return;
}





// 函数: void FUN_18047f6d0(int64_t param_1)
void FUN_18047f6d0(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  
  puVar1 = (uint64_t *)FUN_1808fc418();
  *puVar1 = &unknown_var_6184_ptr;
  puVar1[1] = 7;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &unknown_var_5800_ptr;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(int16_t *)(puVar1 + 8) = 0;
  puVar1[9] = 0;
  puVar1[3] = *(uint64_t *)(param_1 + 8);
  lVar2 = *(int64_t *)(param_1 + 8);
  if (*(int64_t *)(lVar2 + 0x10) != 0) {
    puVar1[2] = *(int64_t *)(lVar2 + 0x10);
    *(uint64_t **)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x10) + 0x18) = puVar1;
    lVar2 = *(int64_t *)(param_1 + 8);
  }
  *(uint64_t **)(lVar2 + 0x10) = puVar1;
  *(uint64_t **)(param_1 + 8) = puVar1;
  return;
}





// 函数: void FUN_18047f770(int64_t param_1,byte param_2)
void FUN_18047f770(int64_t param_1,byte param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  byte *pbVar3;
  
  if ((*(uint *)(param_1 + 0x10) & 0x100) != 0) {
    param_2 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 8));
  }
  lVar1 = *(int64_t *)(param_1 + 8);
  puVar2 = *(uint64_t **)(lVar1 + 0x28);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)FUN_1808fc418();
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(uint64_t **)(lVar1 + 0x28) = puVar2;
  }
  pbVar3 = (byte *)((int64_t)puVar2 + (uint64_t)(param_2 >> 3));
  *pbVar3 = *pbVar3 | (byte)(1 << (param_2 & 7));
  return;
}





