#include "TaleWorlds.Native.Split.h"

// 99_part_14_part012.c - 15 个函数

// 函数: void FUN_1808f17d0(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1808f17d0(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  longlong *plVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_1808f17d0(param_1,param_2[2],param_3,param_4,uVar3);
    plVar2 = (longlong *)*param_2;
    if ((7 < (ulonglong)param_2[7]) && (param_2[4] != 0)) {
      if (_DAT_180c69e10 == (code *)0x0) {
        free();
      }
      else {
        (*_DAT_180c69e10)();
      }
    }
    param_2[6] = 0;
    param_2[7] = 7;
    *(int16_t *)(param_2 + 4) = 0;
    if (param_2 != (longlong *)0x0) {
      if (_DAT_180c69e10 == (code *)0x0) {
        free(param_2);
      }
      else {
        (*_DAT_180c69e10)();
      }
    }
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



longlong * FUN_1808f1890(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar5 = (longlong *)param_2[2];
  plVar6 = param_2 + 2;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar5 + 0x19);
    plVar7 = (longlong *)*plVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar7 + 0x19);
      plVar5 = plVar7;
      plVar7 = (longlong *)*plVar7;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar8 = (longlong *)param_2[1];
    plVar7 = param_2;
    while ((plVar5 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)plVar5[2]))) {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar8 = (longlong *)plVar5[1];
      plVar7 = plVar5;
    }
  }
  plVar7 = (longlong *)*param_2;
  plVar8 = (longlong *)*plVar6;
  if (((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
      (plVar8 = plVar7, *(char *)(*plVar6 + 0x19) == '\0')) &&
     (plVar8 = (longlong *)plVar5[2], plVar5 != param_2)) {
    plVar7[1] = (longlong)plVar5;
    *plVar5 = *param_2;
    plVar7 = plVar5;
    if (plVar5 != (longlong *)*plVar6) {
      plVar7 = (longlong *)plVar5[1];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        plVar8[1] = (longlong)plVar7;
      }
      *plVar7 = (longlong)plVar8;
      plVar5[2] = *plVar6;
      *(longlong **)(*plVar6 + 8) = plVar5;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar5;
    }
    else {
      puVar3 = (uint64_t *)param_2[1];
      if ((longlong *)*puVar3 == param_2) {
        *puVar3 = plVar5;
      }
      else {
        puVar3[2] = plVar5;
      }
    }
    plVar5[1] = param_2[1];
    lVar2 = plVar5[3];
    *(char *)(plVar5 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar2;
  }
  else {
    plVar7 = (longlong *)param_2[1];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar8[1] = (longlong)plVar7;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar8;
    }
    else if ((longlong *)*plVar7 == param_2) {
      *plVar7 = (longlong)plVar8;
    }
    else {
      plVar7[2] = (longlong)plVar8;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar6 = plVar7;
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar5 = (longlong *)*plVar8;
        plVar6 = plVar8;
        while (plVar4 = plVar5, cVar1 == '\0') {
          plVar5 = (longlong *)*plVar4;
          cVar1 = *(char *)((longlong)plVar5 + 0x19);
          plVar6 = plVar4;
        }
      }
      *(longlong **)*param_1 = plVar6;
    }
    lVar2 = *param_1;
    if (*(longlong **)(lVar2 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar8[2] + 0x19);
        plVar6 = (longlong *)plVar8[2];
        plVar5 = plVar8;
        while (plVar4 = plVar6, cVar1 == '\0') {
          plVar6 = (longlong *)plVar4[2];
          cVar1 = *(char *)((longlong)plVar6 + 0x19);
          plVar5 = plVar4;
        }
        *(longlong **)(lVar2 + 0x10) = plVar5;
      }
      else {
        *(longlong **)(lVar2 + 0x10) = plVar7;
      }
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar6 = plVar7;
        if ((char)plVar8[3] != '\x01') break;
        plVar5 = (longlong *)*plVar6;
        if (plVar8 == plVar5) {
          plVar5 = (longlong *)plVar6[2];
          if ((char)plVar5[3] == '\0') {
            *(int8_t *)(plVar5 + 3) = 1;
            plVar5 = (longlong *)plVar6[2];
            *(int8_t *)(plVar6 + 3) = 0;
            plVar6[2] = *plVar5;
            if (*(char *)(*plVar5 + 0x19) == '\0') {
              *(longlong **)(*plVar5 + 8) = plVar6;
            }
            plVar5[1] = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar5;
            }
            else {
              puVar3 = (uint64_t *)plVar6[1];
              if (plVar6 == (longlong *)*puVar3) {
                *puVar3 = plVar5;
              }
              else {
                puVar3[2] = plVar5;
              }
            }
            *plVar5 = (longlong)plVar6;
            plVar6[1] = (longlong)plVar5;
            plVar5 = (longlong *)plVar6[2];
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(*plVar5 + 0x18) != '\x01') || (*(char *)(plVar5[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar5[2] + 0x18) == '\x01') {
                *(int8_t *)(*plVar5 + 0x18) = 1;
                *(int8_t *)(plVar5 + 3) = 0;
                func_0x0001808f1c90(param_1,plVar5);
                plVar5 = (longlong *)plVar6[2];
              }
              *(char *)(plVar5 + 3) = (char)plVar6[3];
              *(int8_t *)(plVar6 + 3) = 1;
              *(int8_t *)(plVar5[2] + 0x18) = 1;
              func_0x0001808f1c30(param_1,plVar6);
              break;
            }
LAB_1808f1b5d:
            *(int8_t *)(plVar5 + 3) = 0;
          }
        }
        else {
          if ((char)plVar5[3] == '\0') {
            *(int8_t *)(plVar5 + 3) = 1;
            *(int8_t *)(plVar6 + 3) = 0;
            func_0x0001808f1c90(param_1,plVar6);
            plVar5 = (longlong *)*plVar6;
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(plVar5[2] + 0x18) == '\x01') && (*(char *)(*plVar5 + 0x18) == '\x01'))
            goto LAB_1808f1b5d;
            if (*(char *)(*plVar5 + 0x18) == '\x01') {
              *(int8_t *)(plVar5[2] + 0x18) = 1;
              *(int8_t *)(plVar5 + 3) = 0;
              func_0x0001808f1c30(param_1,plVar5);
              plVar5 = (longlong *)*plVar6;
            }
            *(char *)(plVar5 + 3) = (char)plVar6[3];
            *(int8_t *)(plVar6 + 3) = 1;
            *(int8_t *)(*plVar5 + 0x18) = 1;
            func_0x0001808f1c90(param_1,plVar6);
            break;
          }
        }
        plVar7 = (longlong *)plVar6[1];
        plVar8 = plVar6;
      } while (plVar6 != *(longlong **)(*param_1 + 8));
    }
    *(int8_t *)(plVar8 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}



longlong * FUN_1808f18a3(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  uint64_t *puVar4;
  longlong *plVar5;
  longlong *in_RAX;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(char *)((longlong)in_RAX + 0x19) == '\0') {
    cVar1 = *(char *)(*in_RAX + 0x19);
    plVar6 = (longlong *)*in_RAX;
    while (plVar8 = plVar6, cVar1 == '\0') {
      plVar6 = (longlong *)*plVar8;
      cVar1 = *(char *)((longlong)plVar6 + 0x19);
      in_RAX = plVar8;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar8 = (longlong *)param_2[1];
    plVar6 = param_2;
    while ((in_RAX = plVar8, cVar1 == '\0' && (plVar6 == (longlong *)in_RAX[2]))) {
      cVar1 = *(char *)(in_RAX[1] + 0x19);
      plVar8 = (longlong *)in_RAX[1];
      plVar6 = in_RAX;
    }
  }
  plVar6 = (longlong *)*param_2;
  plVar8 = (longlong *)*param_3;
  if (((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
      (plVar8 = plVar6, *(char *)(*param_3 + 0x19) == '\0')) &&
     (plVar8 = (longlong *)in_RAX[2], in_RAX != param_2)) {
    plVar6[1] = (longlong)in_RAX;
    *in_RAX = *param_2;
    plVar6 = in_RAX;
    if (in_RAX != (longlong *)*param_3) {
      plVar6 = (longlong *)in_RAX[1];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        plVar8[1] = (longlong)plVar6;
      }
      *plVar6 = (longlong)plVar8;
      in_RAX[2] = *param_3;
      *(longlong **)(*param_3 + 8) = in_RAX;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = in_RAX;
    }
    else {
      puVar4 = (uint64_t *)param_2[1];
      if ((longlong *)*puVar4 == param_2) {
        *puVar4 = in_RAX;
      }
      else {
        puVar4[2] = in_RAX;
      }
    }
    in_RAX[1] = param_2[1];
    lVar3 = in_RAX[3];
    *(char *)(in_RAX + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar3;
  }
  else {
    plVar6 = (longlong *)param_2[1];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar8[1] = (longlong)plVar6;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar8;
    }
    else if ((longlong *)*plVar6 == param_2) {
      *plVar6 = (longlong)plVar8;
    }
    else {
      plVar6[2] = (longlong)plVar8;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar7 = plVar6;
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar2 = (longlong *)*plVar8;
        plVar7 = plVar8;
        while (plVar5 = plVar2, cVar1 == '\0') {
          plVar2 = (longlong *)*plVar5;
          cVar1 = *(char *)((longlong)plVar2 + 0x19);
          plVar7 = plVar5;
        }
      }
      *(longlong **)*param_1 = plVar7;
    }
    lVar3 = *param_1;
    if (*(longlong **)(lVar3 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar8[2] + 0x19);
        plVar7 = (longlong *)plVar8[2];
        plVar2 = plVar8;
        while (plVar5 = plVar7, cVar1 == '\0') {
          plVar7 = (longlong *)plVar5[2];
          cVar1 = *(char *)((longlong)plVar7 + 0x19);
          plVar2 = plVar5;
        }
        *(longlong **)(lVar3 + 0x10) = plVar2;
      }
      else {
        *(longlong **)(lVar3 + 0x10) = plVar6;
      }
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar7 = plVar6;
        if ((char)plVar8[3] != '\x01') break;
        plVar6 = (longlong *)*plVar7;
        if (plVar8 == plVar6) {
          plVar6 = (longlong *)plVar7[2];
          if ((char)plVar6[3] == '\0') {
            *(int8_t *)(plVar6 + 3) = 1;
            plVar6 = (longlong *)plVar7[2];
            *(int8_t *)(plVar7 + 3) = 0;
            plVar7[2] = *plVar6;
            if (*(char *)(*plVar6 + 0x19) == '\0') {
              *(longlong **)(*plVar6 + 8) = plVar7;
            }
            plVar6[1] = plVar7[1];
            if (plVar7 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar6;
            }
            else {
              puVar4 = (uint64_t *)plVar7[1];
              if (plVar7 == (longlong *)*puVar4) {
                *puVar4 = plVar6;
              }
              else {
                puVar4[2] = plVar6;
              }
            }
            *plVar6 = (longlong)plVar7;
            plVar7[1] = (longlong)plVar6;
            plVar6 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
            if ((*(char *)(*plVar6 + 0x18) != '\x01') || (*(char *)(plVar6[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar6[2] + 0x18) == '\x01') {
                *(int8_t *)(*plVar6 + 0x18) = 1;
                *(int8_t *)(plVar6 + 3) = 0;
                func_0x0001808f1c90(param_1,plVar6);
                plVar6 = (longlong *)plVar7[2];
              }
              *(char *)(plVar6 + 3) = (char)plVar7[3];
              *(int8_t *)(plVar7 + 3) = 1;
              *(int8_t *)(plVar6[2] + 0x18) = 1;
              func_0x0001808f1c30(param_1,plVar7);
              break;
            }
LAB_1808f1b5d:
            *(int8_t *)(plVar6 + 3) = 0;
          }
        }
        else {
          if ((char)plVar6[3] == '\0') {
            *(int8_t *)(plVar6 + 3) = 1;
            *(int8_t *)(plVar7 + 3) = 0;
            func_0x0001808f1c90(param_1,plVar7);
            plVar6 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
            if ((*(char *)(plVar6[2] + 0x18) == '\x01') && (*(char *)(*plVar6 + 0x18) == '\x01'))
            goto LAB_1808f1b5d;
            if (*(char *)(*plVar6 + 0x18) == '\x01') {
              *(int8_t *)(plVar6[2] + 0x18) = 1;
              *(int8_t *)(plVar6 + 3) = 0;
              func_0x0001808f1c30(param_1,plVar6);
              plVar6 = (longlong *)*plVar7;
            }
            *(char *)(plVar6 + 3) = (char)plVar7[3];
            *(int8_t *)(plVar7 + 3) = 1;
            *(int8_t *)(*plVar6 + 0x18) = 1;
            func_0x0001808f1c90(param_1,plVar7);
            break;
          }
        }
        plVar6 = (longlong *)plVar7[1];
        plVar8 = plVar7;
      } while (plVar7 != *(longlong **)(*param_1 + 8));
    }
    *(int8_t *)(plVar8 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}






// 函数: void FUN_1808f1a47(void)
void FUN_1808f1a47(void)

{
  uint64_t *puVar1;
  longlong *plVar2;
  longlong *unaff_RBX;
  longlong *plVar3;
  longlong *unaff_RDI;
  longlong *unaff_R14;
  
  do {
    plVar3 = unaff_RBX;
    if ((char)unaff_RDI[3] != '\x01') break;
    plVar2 = (longlong *)*plVar3;
    if (unaff_RDI == plVar2) {
      plVar2 = (longlong *)plVar3[2];
      if ((char)plVar2[3] == '\0') {
        *(int8_t *)(plVar2 + 3) = 1;
        plVar2 = (longlong *)plVar3[2];
        *(int8_t *)(plVar3 + 3) = 0;
        plVar3[2] = *plVar2;
        if (*(char *)(*plVar2 + 0x19) == '\0') {
          *(longlong **)(*plVar2 + 8) = plVar3;
        }
        plVar2[1] = plVar3[1];
        if (plVar3 == *(longlong **)(*unaff_R14 + 8)) {
          *(longlong **)(*unaff_R14 + 8) = plVar2;
        }
        else {
          puVar1 = (uint64_t *)plVar3[1];
          if (plVar3 == (longlong *)*puVar1) {
            *puVar1 = plVar2;
          }
          else {
            puVar1[2] = plVar2;
          }
        }
        *plVar2 = (longlong)plVar3;
        plVar3[1] = (longlong)plVar2;
        plVar2 = (longlong *)plVar3[2];
      }
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        if ((*(char *)(*plVar2 + 0x18) != '\x01') || (*(char *)(plVar2[2] + 0x18) != '\x01')) {
          if (*(char *)(plVar2[2] + 0x18) == '\x01') {
            *(int8_t *)(*plVar2 + 0x18) = 1;
            *(int8_t *)(plVar2 + 3) = 0;
            func_0x0001808f1c90();
            plVar2 = (longlong *)plVar3[2];
          }
          *(char *)(plVar2 + 3) = (char)plVar3[3];
          *(int8_t *)(plVar3 + 3) = 1;
          *(int8_t *)(plVar2[2] + 0x18) = 1;
          func_0x0001808f1c30();
          break;
        }
LAB_1808f1b5d:
        *(int8_t *)(plVar2 + 3) = 0;
      }
    }
    else {
      if (*(char *)(plVar2 + 3) == '\0') {
        *(int8_t *)(plVar2 + 3) = 1;
        *(int8_t *)(plVar3 + 3) = 0;
        func_0x0001808f1c90();
        plVar2 = (longlong *)*plVar3;
      }
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        if ((*(char *)(plVar2[2] + 0x18) == '\x01') && (*(char *)(*plVar2 + 0x18) == '\x01'))
        goto LAB_1808f1b5d;
        if (*(char *)(*plVar2 + 0x18) == '\x01') {
          *(int8_t *)(plVar2[2] + 0x18) = 1;
          *(int8_t *)(plVar2 + 3) = 0;
          func_0x0001808f1c30();
          plVar2 = (longlong *)*plVar3;
        }
        *(char *)(plVar2 + 3) = (char)plVar3[3];
        *(int8_t *)(plVar3 + 3) = 1;
        *(int8_t *)(*plVar2 + 0x18) = 1;
        func_0x0001808f1c90();
        break;
      }
    }
    unaff_RBX = (longlong *)plVar3[1];
    unaff_RDI = plVar3;
  } while (plVar3 != *(longlong **)(*unaff_R14 + 8));
  *(int8_t *)(unaff_RDI + 3) = 1;
  if (unaff_R14[1] != 0) {
    unaff_R14[1] = unaff_R14[1] + -1;
  }
  return;
}






// 函数: void FUN_1808f1bb8(void)
void FUN_1808f1bb8(void)

{
  longlong unaff_RDI;
  longlong unaff_R14;
  
  *(int8_t *)(unaff_RDI + 0x18) = 1;
  if (*(longlong *)(unaff_R14 + 8) != 0) {
    *(longlong *)(unaff_R14 + 8) = *(longlong *)(unaff_R14 + 8) + -1;
  }
  return;
}






// 函数: void FUN_1808f1bd2(longlong param_1)
void FUN_1808f1bd2(longlong param_1)

{
  longlong unaff_R14;
  
  *(longlong *)(unaff_R14 + 8) = param_1 + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f1bf0(uint64_t param_1,longlong param_2)
void FUN_1808f1bf0(uint64_t param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (_DAT_180c69e10 == (code *)0x0) {
      free(param_2);
    }
    else {
      (*_DAT_180c69e10)();
    }
  }
  return;
}






// 函数: void FUN_1808f1cf0(void)
void FUN_1808f1cf0(void)

{
  code *pcVar1;
  
  __Xlength_error_std__YAXPEBD_Z(&unknown_var_1648_ptr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f1d10(longlong *param_1)
void FUN_1808f1d10(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((char)param_1[5] == '\0') {
      CloseHandle(param_1[2]);
    }
    if (*param_1 != 0) {
      if (_DAT_180c69e10 == (code *)0x0) {
        free();
      }
      else {
        (*_DAT_180c69e10)();
      }
    }
                    // WARNING: Subroutine does not return
    memset(param_1,0,0x21f8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_1808f1d70(void)

{
  if (system_data_8850 != '\0') {
    return 1;
  }
  FUN_1808f6d00();
  FUN_1808f0860();



// 函数: void FUN_1808f1df0(longlong param_1,char param_2)
void FUN_1808f1df0(longlong param_1,char param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  int8_t auStack_98 [40];
  uint64_t uStack_70;
  uint64_t uStack_68;
  ulonglong uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  uVar6 = 0;
  if (param_2 == '\0') {
    cVar2 = func_0x0001808f0e90(*(int16_t *)(param_1 + 0x20),*(int16_t *)(param_1 + 0x22),
                                *(int32_t *)(param_1 + 0x24));
    if (cVar2 == '\0') {
      cVar2 = func_0x0001808f0e30(*(int16_t *)(param_1 + 0x20),*(int16_t *)(param_1 + 0x22));
      if (cVar2 != '\0') {
        uVar6 = 0x30;
      }
    }
    else {
      uVar6 = 0x11;
    }
  }
  else {
    uVar6 = 0x11;
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (cVar2 = HidD_GetPreparsedData(*(longlong *)(param_1 + 0x10),&uStack_70), cVar2 != '\0')) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    iVar3 = HidP_GetCaps(uStack_70,&uStack_68);
    if (iVar3 == 0x110000) {
      uVar1 = (ushort)uStack_60;
      uVar5 = uStack_60 & 0xffff;
      if ((0x40 < (ushort)((ulonglong)uStack_68 >> 0x20)) &&
         (cVar2 = func_0x0001808f0e90(*(int16_t *)(param_1 + 0x20),
                                      *(int16_t *)(param_1 + 0x22),
                                      *(int32_t *)(param_1 + 0x24)), cVar2 != '\0')) {
        uVar6 = 0x30;
      }
      if (uVar1 < uVar6) {
        HidD_FreePreparsedData(uStack_70);
      }
      else {
        if (_DAT_180c69e18 == (code *)0x0) {
          lVar4 = malloc(uVar5);
        }
        else {
          lVar4 = (*_DAT_180c69e18)();
        }
        if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
          memset(lVar4,0,uVar5);
        }
        HidD_FreePreparsedData(uStack_70);
      }
    }
    else {
      HidD_FreePreparsedData(uStack_70);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f1ed6(void)
void FUN_1808f1ed6(void)

{
  char cVar1;
  uint64_t in_RAX;
  longlong lVar2;
  longlong unaff_RSI;
  uint unaff_EDI;
  uint64_t in_stack_00000028;
  ushort in_stack_00000038;
  ulonglong in_stack_00000070;
  
  if (0x40 < (ushort)((ulonglong)in_RAX >> 0x20)) {
    cVar1 = func_0x0001808f0e90(*(int16_t *)(unaff_RSI + 0x20),*(int16_t *)(unaff_RSI + 0x22),
                                *(int32_t *)(unaff_RSI + 0x24));
    if (cVar1 != '\0') {
      unaff_EDI = 0x30;
    }
  }
  if (in_stack_00000038 < unaff_EDI) {
    HidD_FreePreparsedData(in_stack_00000028);
  }
  else {
    if (_DAT_180c69e18 == (code *)0x0) {
      lVar2 = malloc(in_stack_00000038);
    }
    else {
      lVar2 = (*_DAT_180c69e18)();
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar2,0,in_stack_00000038);
    }
    HidD_FreePreparsedData(in_stack_00000028);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f1f2a(void)
void FUN_1808f1f2a(void)

{
  code *in_RAX;
  longlong lVar1;
  uint64_t in_stack_00000028;
  ulonglong in_stack_00000070;
  
  if (in_RAX == (code *)0x0) {
    lVar1 = malloc();
  }
  else {
    lVar1 = (*in_RAX)();
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0);
  }
  HidD_FreePreparsedData(in_stack_00000028);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f1fbc(void)
void FUN_1808f1fbc(void)

{
  ulonglong in_stack_00000070;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f1fcc(void)
void FUN_1808f1fcc(void)

{
  ulonglong in_stack_00000070;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f1fe4(void)
void FUN_1808f1fe4(void)

{
  code *in_RAX;
  uint64_t in_stack_00000028;
  ulonglong in_stack_00000070;
  
  if (in_RAX == (code *)0x0) {
    free();
  }
  else {
    (*in_RAX)();
  }
  GetLastError();
  HidD_FreePreparsedData(in_stack_00000028);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f201b(void)
void FUN_1808f201b(void)

{
  uint64_t in_stack_00000028;
  ulonglong in_stack_00000070;
  
  HidD_FreePreparsedData(in_stack_00000028);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f2040(int param_1,uint64_t param_2,ushort param_3)
void FUN_1808f2040(int param_1,uint64_t param_2,ushort param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int8_t auStack_c8 [48];
  int32_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  plVar5 = (longlong *)0x180c58860;
  do {
    if ((*plVar5 != 0) && (plVar6 = plVar5, (int)plVar5[1] == param_1)) break;
    plVar5 = plVar5 + 0x43f;
    plVar6 = (longlong *)0x0;
  } while ((longlong)plVar5 < 0x180c69820);
  if ((plVar6[2] != 0) && (cVar2 = HidD_GetPreparsedData(plVar6[2],&uStack_90), cVar2 != '\0')) {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    iVar3 = HidP_GetCaps(uStack_90,&uStack_88);
    if (iVar3 == 0x110000) {
      uVar1 = uStack_88._6_2_;
      uStack_98 = 0x4e;
      if (uStack_88._6_2_ < param_3) {
        HidD_FreePreparsedData(uStack_90);
      }
      else {
        if (_DAT_180c69e18 == (code *)0x0) {
          lVar4 = malloc(uStack_88._6_2_);
        }
        else {
          lVar4 = (*_DAT_180c69e18)();
        }
        if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
          memset(lVar4,0,uVar1);
        }
        HidD_FreePreparsedData(uStack_90);
      }
    }
    else {
      HidD_FreePreparsedData(uStack_90);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808f22b0(int32_t param_1,longlong param_2,int16_t param_3)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  uint64_t uVar6;
  
  func_0x0001808f0da0();
  lVar5 = func_0x0001808f0da0(param_1);
  if (lVar5 == 0) {
    uVar6 = 0x8001002d;
  }
  else {
    cVar1 = func_0x0001808f0e30(*(int16_t *)(lVar5 + 2),*(int16_t *)(lVar5 + 4));
    if (cVar1 != '\0') {
      if ((byte)(*(char *)(lVar5 + 6) - 2U) < 2) {
        *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 2;
      }
      bVar2 = *(byte *)(param_2 + 2);
      if (*(char *)(lVar5 + 7) != '\0') {
        bVar2 = bVar2 | 0x20;
      }
      *(byte *)(param_2 + 2) = bVar2 | 0x40;
      cVar3 = '\v' - *(char *)(lVar5 + 0xb);
      bVar2 = 8 - *(char *)(lVar5 + 10);
      cVar1 = '\n';
      if (cVar3 != '\v') {
        cVar1 = cVar3;
      }
      bVar4 = 7;
      if (bVar2 != 8) {
        bVar4 = bVar2;
      }
      if ((*(char *)(lVar5 + 6) == '\x03') || (system_data_8852 != '\0')) {
        if (*(ushort *)(lVar5 + 0x4c) < 0x220) {
          if (system_data_8852 != '\0') {
            if (bVar4 == 0) {
              bVar4 = 3;
            }
            else if (bVar4 == 2) {
              bVar4 = 5;
            }
            else if (bVar4 == 3) {
              bVar4 = 6;
            }
          }
        }
        else {
          *(byte *)(param_2 + 0x27) = *(byte *)(param_2 + 0x27) | 4;
        }
      }
      *(byte *)(param_2 + 0x25) = cVar1 << 4 | bVar4 & 7;
    }
    if (_DAT_180c69e18 == (code *)0x0) {
      lVar5 = malloc(param_3);
    }
    else {
      lVar5 = (*_DAT_180c69e18)();
    }
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lVar5,param_2,param_3);
    }
    uVar6 = 0x80010004;
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808f22f5(void)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong unaff_RSI;
  int16_t unaff_R14W;
  
  cVar1 = func_0x0001808f0e30();
  if (cVar1 != '\0') {
    if ((byte)(*(char *)(unaff_RBX + 6) - 2U) < 2) {
      *(byte *)(unaff_RSI + 1) = *(byte *)(unaff_RSI + 1) | 2;
    }
    bVar2 = *(byte *)(unaff_RSI + 2);
    if (*(char *)(unaff_RBX + 7) != '\0') {
      bVar2 = bVar2 | 0x20;
    }
    *(byte *)(unaff_RSI + 2) = bVar2 | 0x40;
    cVar3 = '\v' - *(char *)(unaff_RBX + 0xb);
    bVar2 = 8 - *(char *)(unaff_RBX + 10);
    cVar1 = '\n';
    if (cVar3 != '\v') {
      cVar1 = cVar3;
    }
    bVar4 = 7;
    if (bVar2 != 8) {
      bVar4 = bVar2;
    }
    if ((*(char *)(unaff_RBX + 6) == '\x03') || (system_data_8852 != '\0')) {
      if (*(ushort *)(unaff_RBX + 0x4c) < 0x220) {
        if (system_data_8852 != '\0') {
          if (bVar4 == 0) {
            bVar4 = 3;
          }
          else if (bVar4 == 2) {
            bVar4 = 5;
          }
          else if (bVar4 == 3) {
            bVar4 = 6;
          }
        }
      }
      else {
        *(byte *)(unaff_RSI + 0x27) = *(byte *)(unaff_RSI + 0x27) | 4;
      }
    }
    *(byte *)(unaff_RSI + 0x25) = cVar1 << 4 | bVar4 & 7;
  }
  if (_DAT_180c69e18 == (code *)0x0) {
    lVar5 = malloc(unaff_R14W);
  }
  else {
    lVar5 = (*_DAT_180c69e18)();
  }
  if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar5);
  }
  return 0x80010004;
}






