#include "TaleWorlds.Native.Split.h"

// 03_rendering_part066.c - 21 个函数

// 函数: void FUN_180303880(longlong param_1)
void FUN_180303880(longlong param_1)

{
  longlong lVar1;
  int8_t *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    FUN_1801aa3d0();
    if (((*(int *)(_DAT_180c86920 + 0xcb4) != *(int *)(_DAT_180c86920 + 0xcb0)) ||
        (*(int *)(_DAT_180c86920 + 0xd24) != *(int *)(_DAT_180c86920 + 0xd20))) ||
       (*(int *)(_DAT_180c86920 + 0xc44) != *(int *)(_DAT_180c86920 + 0xc40))) {
      FUN_180383450(*(longlong *)(param_1 + 0x6d0) + 0x120,param_1,*(uint64_t *)(param_1 + 0x660))
      ;
      FUN_1802e4490(param_1 + 0x560);
      if (*(longlong *)(param_1 + 0x660) != 0) {
        FUN_180383450(*(longlong *)(param_1 + 0x6d0) + 0x120,param_1);
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6d0) + 0x448);
      if (lVar1 != 0) {
        iVar3 = 10;
        puVar2 = (int8_t *)(lVar1 + 9);
        fVar4 = (float)((int)(*(int *)(_DAT_180c86920 + 0xe0) +
                             (*(int *)(_DAT_180c86920 + 0xe0) >> 0x1f & 3U)) >> 2);
        fVar7 = fVar4 * 112.0 + 208.0;
        fVar6 = fVar4 * 56.0 + 104.0;
        do {
          fVar5 = (float)(iVar3 + -10);
          if (fVar5 <= fVar7) {
            if (fVar5 <= fVar6) {
              if (fVar5 <= fVar4 * 35.0 + 65.0) {
                if (fVar5 <= fVar4 * 12.25 + 22.75) {
                  if (fVar5 <= fVar4 * 7.0 + 13.0) {
                    if (fVar5 <= fVar4 * 5.25 + 9.75) {
                      puVar2[-1] = fVar4 * 1.75 + 3.25 < fVar5;
                    }
                    else {
                      puVar2[-1] = 2;
                    }
                  }
                  else {
                    puVar2[-1] = 3;
                  }
                }
                else {
                  puVar2[-1] = 4;
                }
              }
              else {
                puVar2[-1] = 5;
              }
            }
            else {
              puVar2[-1] = 6;
            }
          }
          else {
            puVar2[-1] = 7;
          }
          fVar5 = (float)(iVar3 + -5);
          if (fVar5 <= fVar7) {
            if (fVar5 <= fVar6) {
              if (fVar5 <= fVar4 * 35.0 + 65.0) {
                if (fVar5 <= fVar4 * 12.25 + 22.75) {
                  if (fVar5 <= fVar4 * 7.0 + 13.0) {
                    if (fVar5 <= fVar4 * 5.25 + 9.75) {
                      *puVar2 = fVar4 * 1.75 + 3.25 < fVar5;
                    }
                    else {
                      *puVar2 = 2;
                    }
                  }
                  else {
                    *puVar2 = 3;
                  }
                }
                else {
                  *puVar2 = 4;
                }
              }
              else {
                *puVar2 = 5;
              }
            }
            else {
              *puVar2 = 6;
            }
          }
          else {
            *puVar2 = 7;
          }
          fVar5 = (float)iVar3;
          if (fVar5 <= fVar7) {
            if (fVar5 <= fVar6) {
              if (fVar5 <= fVar4 * 35.0 + 65.0) {
                if (fVar5 <= fVar4 * 12.25 + 22.75) {
                  if (fVar5 <= fVar4 * 7.0 + 13.0) {
                    if (fVar5 <= fVar4 * 5.25 + 9.75) {
                      puVar2[1] = fVar4 * 1.75 + 3.25 < fVar5;
                    }
                    else {
                      puVar2[1] = 2;
                    }
                  }
                  else {
                    puVar2[1] = 3;
                  }
                }
                else {
                  puVar2[1] = 4;
                }
              }
              else {
                puVar2[1] = 5;
              }
            }
            else {
              puVar2[1] = 6;
            }
          }
          else {
            puVar2[1] = 7;
          }
          fVar5 = (float)(iVar3 + 5);
          if (fVar5 <= fVar7) {
            if (fVar5 <= fVar6) {
              if (fVar5 <= fVar4 * 35.0 + 65.0) {
                if (fVar5 <= fVar4 * 12.25 + 22.75) {
                  if (fVar5 <= fVar4 * 7.0 + 13.0) {
                    if (fVar5 <= fVar4 * 5.25 + 9.75) {
                      puVar2[2] = fVar4 * 1.75 + 3.25 < fVar5;
                    }
                    else {
                      puVar2[2] = 2;
                    }
                  }
                  else {
                    puVar2[2] = 3;
                  }
                }
                else {
                  puVar2[2] = 4;
                }
              }
              else {
                puVar2[2] = 5;
              }
            }
            else {
              puVar2[2] = 6;
            }
          }
          else {
            puVar2[2] = 7;
          }
          iVar3 = iVar3 + 0x14;
          puVar2 = puVar2 + 4;
        } while (iVar3 < 0x28a);
        return;
      }
    }
  }
  return;
}





// 函数: void FUN_180303940(longlong param_1)
void FUN_180303940(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plStack_38;
  ulonglong uStack_30;
  longlong lStack_20;
  
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 0x318) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x318) + 0x28))();
    }
    FUN_1801c2360(lVar1 + 0x60830,&plStack_38);
    uVar5 = uStack_30;
    lVar6 = lStack_20;
LAB_1803039b0:
    if (uVar5 != *(ulonglong *)(lVar1 + 0x60838)) {
      lVar4 = *(longlong *)(lVar6 + 0x20);
      if (lVar4 != 0) {
        if (*(longlong *)(lVar6 + 0x270) != 0) {
          FUN_1802e8910(lVar6);
          lVar4 = *(longlong *)(lVar6 + 0x20);
          *(int8_t *)(lVar6 + 0x278) = 0;
        }
        FUN_1802f28f0(lVar6,lVar4);
      }
      lVar4 = *plStack_38;
      do {
        uVar5 = uVar5 + 1;
        lVar2 = (uVar5 & 0xffffffff) * 0x10;
        lVar3 = lVar2 + 8 + lVar4;
        if ((*(ulonglong *)(lVar2 + lVar4) & 0xffffffff00000000) == 0) {
          lVar3 = 0;
        }
        if (lVar3 != 0) {
          lVar6 = *(longlong *)(lVar4 + 8 + (uVar5 & 0xffffffff) * 0x10);
          break;
        }
      } while (uVar5 != plStack_38[1]);
      goto LAB_1803039b0;
    }
  }
  return;
}





// 函数: void FUN_18030395d(longlong *param_1)
void FUN_18030395d(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBP;
  longlong *plStackX_20;
  ulonglong in_stack_00000028;
  longlong in_stack_00000038;
  
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  FUN_1801c2360(unaff_RBP + 0x60830,&plStackX_20);
  do {
    if (in_stack_00000028 == *(ulonglong *)(unaff_RBP + 0x60838)) {
      return;
    }
    lVar3 = *(longlong *)(in_stack_00000038 + 0x20);
    if (lVar3 != 0) {
      if (*(longlong *)(in_stack_00000038 + 0x270) != 0) {
        FUN_1802e8910(in_stack_00000038);
        lVar3 = *(longlong *)(in_stack_00000038 + 0x20);
        *(int8_t *)(in_stack_00000038 + 0x278) = 0;
      }
      FUN_1802f28f0(in_stack_00000038,lVar3);
    }
    lVar3 = *plStackX_20;
    do {
      in_stack_00000028 = in_stack_00000028 + 1;
      lVar1 = (in_stack_00000028 & 0xffffffff) * 0x10;
      lVar2 = lVar1 + 8 + lVar3;
      if ((*(ulonglong *)(lVar1 + lVar3) & 0xffffffff00000000) == 0) {
        lVar2 = 0;
      }
      if (lVar2 != 0) {
        in_stack_00000038 = *(longlong *)(lVar3 + 8 + (in_stack_00000028 & 0xffffffff) * 0x10);
        break;
      }
    } while (in_stack_00000028 != plStackX_20[1]);
  } while( true );
}





// 函数: void FUN_180303a34(void)
void FUN_180303a34(void)

{
  return;
}





// 函数: void FUN_180303a40(longlong param_1)
void FUN_180303a40(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  if ((lVar1 != 0) &&
     (uVar2 = 0, uVar4 = uVar2, *(longlong *)(lVar1 + 0xe8) - *(longlong *)(lVar1 + 0xe0) >> 3 != 0)
     ) {
    do {
      (**(code **)(**(longlong **)(uVar2 + *(longlong *)(lVar1 + 0xe0)) + 0x58))();
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(lVar1 + 0xe8) - *(longlong *)(lVar1 + 0xe0) >> 3));
  }
  return;
}





// 函数: void FUN_180303a60(void)
void FUN_180303a60(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (in_RAX >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar1 + *(longlong *)(unaff_RBX + 0xe0)) + 0x58))();
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0xe8) - *(longlong *)(unaff_RBX + 0xe0) >> 3));
  }
  return;
}





// 函数: void FUN_180303a70(void)
void FUN_180303a70(void)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    (**(code **)(**(longlong **)(uVar1 + *(longlong *)(unaff_RBX + 0xe0)) + 0x58))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0xe8) - *(longlong *)(unaff_RBX + 0xe0) >> 3));
  return;
}





// 函数: void FUN_180303ab6(void)
void FUN_180303ab6(void)

{
  return;
}





// 函数: void FUN_180303abb(void)
void FUN_180303abb(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180303b70(longlong param_1,uint param_2)
void FUN_180303b70(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  longlong *plVar6;
  uint uVar7;
  void *puStack_d8;
  int32_t *puStack_d0;
  int32_t uStack_c8;
  uint64_t uStack_c0;
  void *puStack_b8;
  uint64_t *puStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  int32_t *puStack_90;
  int32_t uStack_88;
  uint64_t uStack_80;
  void *puStack_78;
  int32_t *puStack_70;
  int32_t uStack_68;
  uint64_t uStack_60;
  void *puStack_58;
  int32_t *puStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar7 = param_2 & 0xfffff7ff;
  if (*(char *)(param_1 + 0x825) != '\0') {
    uVar7 = param_2;
  }
  if (*(char *)(param_1 + 0x823) != '\0') {
    if (*(longlong *)(param_1 + 0x530) == 0) {
      uVar3 = FUN_1801f20c0(0,param_1 + 0x858,uVar7);
      FUN_180056f10(param_1 + 0x530,uVar3);
    }
    if (*(longlong *)(param_1 + 0x538) == 0) {
      puStack_d8 = &unknown_var_3456_ptr;
      uStack_c0 = 0;
      puStack_d0 = (int32_t *)0x0;
      uStack_c8 = 0;
      puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x18,0x13);
      *(int8_t *)puVar4 = 0;
      puStack_d0 = puVar4;
      uVar2 = FUN_18064e990(puVar4);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar2);
      *puVar4 = 0x69626d61;
      puVar4[1] = 0x5f746e65;
      puVar4[2] = 0x6c63636f;
      puVar4[3] = 0x6f697375;
      *(uint64_t *)(puVar4 + 4) = 0x68706172675f6e;
      uStack_c8 = 0x17;
      uVar3 = FUN_1801f20c0(0x69626d61,&puStack_d8,uVar7);
      FUN_180056f10(param_1 + 0x538,uVar3);
      puStack_d8 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
    if (*(longlong *)(param_1 + 0x540) == 0) {
      puStack_b8 = &unknown_var_3456_ptr;
      uStack_a0 = 0;
      puStack_b0 = (uint64_t *)0x0;
      uStack_a8 = 0;
      puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
      *(int8_t *)puVar5 = 0;
      puStack_b0 = puVar5;
      uVar2 = FUN_18064e990(puVar5);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar2);
      *puVar5 = 0x706172675f727373;
      *(int16_t *)(puVar5 + 1) = 0x68;
      uStack_a8 = 9;
      uVar3 = FUN_1801f20c0(0x68,&puStack_b8,uVar7);
      FUN_180056f10(param_1 + 0x540,uVar3);
      puStack_b8 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
    if (*(longlong *)(param_1 + 0x550) == 0) {
      puStack_98 = &unknown_var_3456_ptr;
      uStack_80 = 0;
      puStack_90 = (int32_t *)0x0;
      uStack_88 = 0;
      puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x1a,0x13);
      *(int8_t *)puVar4 = 0;
      puStack_90 = puVar4;
      uVar2 = FUN_18064e990(puVar4);
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
      *puVar4 = 0x6f666562;
      puVar4[1] = 0x745f6572;
      puVar4[2] = 0x736e6172;
      puVar4[3] = 0x65726170;
      *(uint64_t *)(puVar4 + 4) = 0x706172675f73746e;
      *(int16_t *)(puVar4 + 6) = 0x68;
      uStack_88 = 0x19;
      uVar3 = FUN_1801f20c0(0x68,&puStack_98,uVar7);
      FUN_180056f10(param_1 + 0x550,uVar3);
      puStack_98 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
    *(uint *)(*(longlong *)(param_1 + 0x530) + 0x94) = uVar7;
    *(uint *)(*(longlong *)(param_1 + 0x538) + 0x94) = uVar7;
    *(uint *)(*(longlong *)(param_1 + 0x540) + 0x94) = uVar7;
    *(uint *)(*(longlong *)(param_1 + 0x550) + 0x94) = uVar7;
  }
  if ((*(char *)(param_1 + 0x82b) == '\0') && (*(longlong *)(param_1 + 0x558) == 0)) {
    puStack_78 = &unknown_var_3456_ptr;
    uStack_60 = 0;
    puStack_70 = (int32_t *)0x0;
    uStack_68 = 0;
    puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_70 = puVar4;
    uVar2 = FUN_18064e990(puVar4);
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
    *puVar4 = 0x725f7476;
    puVar4[1] = 0x6c6f7365;
    puVar4[2] = 0x675f6576;
    puVar4[3] = 0x68706172;
    *(int8_t *)(puVar4 + 4) = 0;
    uStack_68 = 0x10;
    uVar3 = FUN_1801f20c0(0x725f7476,&puStack_78,uVar7);
    FUN_180056f10(param_1 + 0x558,uVar3);
    puStack_78 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
  if (*(longlong *)(param_1 + 0x548) != 0) {
    return;
  }
  puStack_58 = &unknown_var_3456_ptr;
  uStack_40 = 0;
  puStack_50 = (int32_t *)0x0;
  uStack_48 = 0;
  puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_50 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
  *puVar4 = 0x64616873;
  puVar4[1] = 0x616d776f;
  puVar4[2] = 0x72675f70;
  puVar4[3] = 0x687061;
  uStack_48 = 0xf;
  plVar6 = (longlong *)FUN_1801f20c0(0x64616873,&puStack_58,uVar7);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plVar1 = *(longlong **)(param_1 + 0x548);
  *(longlong **)(param_1 + 0x548) = plVar6;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  puStack_58 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}





// 函数: void FUN_180304010(longlong *param_1,longlong param_2)
void FUN_180304010(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plVar1 = *(longlong **)(param_2 + 0x3580);
  *(longlong **)(param_2 + 0x3580) = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[(ulonglong)*(uint *)(param_1 + 0x22) + 0x23] = param_2;
  *(int *)(param_2 + 0x9a00) = (int)param_1[0x22];
  lVar2 = param_1[0xda];
  if ((*(char *)(lVar2 + 0x563) == '\0') ||
     (lVar5 = *(longlong *)(lVar2 + 0x5b0) - *(longlong *)(lVar2 + 0x5a8),
     iVar4 = (int)(lVar5 >> 0x3f), iVar3 = (int)(lVar5 / 0xc) + iVar4,
     iVar3 == iVar4 || iVar3 - iVar4 < 0)) {
    *(uint64_t *)(param_2 + 0x9a20) = 0;
  }
  else {
    iVar3 = *(int *)(lVar2 + 0x2668);
    *(int *)(lVar2 + 0x2668) = iVar3 + 1;
    *(int *)(param_2 + 0x9a28) = iVar3;
    *(longlong *)(param_2 + 0x9a20) = lVar2 + 0x570;
  }
  *(int *)(param_1 + 0x22) = (int)param_1[0x22] + 1;
  *(longlong *)(param_2 + 0x28) = param_1[0x23];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180304100(longlong *param_1,char param_2,uint64_t param_3,int8_t param_4)
void FUN_180304100(longlong *param_1,char param_2,uint64_t param_3,int8_t param_4)

{
  void *puVar1;
  longlong lVar2;
  longlong lVar3;
  void *puVar4;
  longlong *plStackX_8;
  uint64_t uVar5;
  longlong alStack_40 [2];
  void *puStack_30;
  code *pcStack_28;
  
  uVar5 = 0xfffffffffffffffe;
  if (param_1[0xda] == 0) {
    if ((char)param_1[0xd8] == '\0') {
      if ((char)param_3 != '\0') {
        (**(code **)(*param_1 + 0x68))(param_1,0,param_3,param_4,0xfffffffffffffffe);
        plStackX_8 = (longlong *)param_1[7];
        param_1[7] = 0;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        if (param_1[0xda] != 0) {
          FUN_1803837e0(param_1[0xda] + 0x120);
          lVar3 = param_1[0xda];
          if (*(longlong *)(lVar3 + 0x328) != 0) {
            FUN_1801be4d0();
            lVar3 = param_1[0xda];
          }
          if (*(longlong *)(lVar3 + 0x260) != 0) {
            FUN_1802d33c0();
            lVar3 = param_1[0xda];
          }
          *(int8_t *)(lVar3 + 0xa8) = 1;
        }
      }
      plStackX_8 = (longlong *)param_1[0xc6];
      param_1[0xc6] = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (longlong *)param_1[199];
      param_1[199] = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (longlong *)param_1[200];
      param_1[200] = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      if (param_1[0xda] != 0) {
        FUN_1801a29f0(param_1[0xda],param_4,param_2);
      }
      plStackX_8 = (longlong *)param_1[0xa6];
      param_1[0xa6] = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (longlong *)param_1[0xa7];
      param_1[0xa7] = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (longlong *)param_1[0xab];
      param_1[0xab] = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (longlong *)param_1[0xa8];
      param_1[0xa8] = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (longlong *)param_1[0xa9];
      param_1[0xa9] = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (longlong *)param_1[0xaa];
      param_1[0xaa] = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      FUN_180095420(param_1 + 0xac);
      plStackX_8 = (longlong *)param_1[0xc9];
      param_1[0xc9] = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      if (param_1[0xda] != 0) {
        if (param_2 == '\0') {
          FUN_180383630(param_1[0xda] + 0x120,param_1);
        }
        else {
          FUN_1801a2ea0();
          FUN_1803048f0(param_1[0xda],param_1);
          plStackX_8 = (longlong *)param_1[0xda];
          param_1[0xda] = 0;
          if (plStackX_8 != (longlong *)0x0) {
            (**(code **)(*plStackX_8 + 0x38))();
          }
        }
      }
      plStackX_8 = (longlong *)param_1[0xcc];
      param_1[0xcc] = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (longlong *)param_1[0xcd];
      param_1[0xcd] = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      if (_DAT_180c82868 != 0) {
        FUN_18005e630(_DAT_180c82868);
      }
      if (_DAT_180c86930 != 0) {
        FUN_1800b4ec0();
      }
      if (_DAT_180c82868 != 0) {
        FUN_18005e630(_DAT_180c82868);
      }
    }
    lVar2 = _DAT_180c82868;
    *(int16_t *)(param_1 + 0x104) = 0;
    *(int32_t *)(param_1 + 0x1f) = *(int32_t *)((longlong)param_1 + 0xfc);
    lVar3 = param_1[0xd9];
    if (lVar3 != 0) {
      uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3,uVar5,&plStackX_8);
      puStack_30 = &unknown_var_5280_ptr;
      pcStack_28 = FUN_180304860;
      alStack_40[0] = lVar3;
      plStackX_8 = (longlong *)FUN_18006b640(uVar5,alStack_40);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
      }
      FUN_18005e300(lVar2,&plStackX_8);
    }
    param_1[0xd9] = 0;
    return;
  }
  puVar1 = *(void **)(param_1[0xda] + 0x4e0);
  puVar4 = &system_buffer_ptr;
  if (puVar1 != (void *)0x0) {
    puVar4 = puVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&unknown_var_2824_ptr,puVar4);
}





// 函数: void FUN_180304500(longlong param_1,longlong param_2)
void FUN_180304500(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  void *puVar8;
  void *puVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  if ((*(longlong *)(param_1 + 0x530) != 0) && (*(longlong *)(param_1 + 0x6d0) != 0)) {
    iVar5 = *(int *)(param_2 + 0x10) + 0x2a;
    FUN_1806277c0(param_2,iVar5);
    puVar3 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar3 = 0x2f2f2f2f2f2f2f2f;
    puVar3[1] = 0x2f2f2f2f2f2f2f2f;
    *(int32_t *)(puVar3 + 2) = 0x2f2f2f2f;
    *(int32_t *)((longlong)puVar3 + 0x14) = 0x2f2f2f2f;
    *(int32_t *)(puVar3 + 3) = 0x2f2f2f2f;
    *(int32_t *)((longlong)puVar3 + 0x1c) = 0x2f2f2f2f;
    puVar3[4] = 0x2f2f2f2f2f2f2f2f;
    *(int16_t *)(puVar3 + 5) = 0xa2f;
    *(int8_t *)((longlong)puVar3 + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = iVar5;
    puVar9 = *(void **)(*(longlong *)(param_1 + 0x6d0) + 0x4e0);
    puVar8 = &system_buffer_ptr;
    if (puVar9 != (void *)0x0) {
      puVar8 = puVar9;
    }
    FUN_180628040(param_2,&unknown_var_2760_ptr,puVar8);
    lVar1 = *(longlong *)(param_1 + 0x530);
    FUN_180628040(param_2,&unknown_var_8544_ptr);
    lVar4 = *(longlong *)(lVar1 + 0x70);
    iVar5 = 0;
    fVar12 = 0.0;
    iVar7 = 0;
    if (*(longlong *)(lVar1 + 0x78) - lVar4 >> 3 != 0) {
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(lVar6 + lVar4);
        if ((lVar4 != 0) && (lVar10 = *(longlong *)(lVar4 + 0x428), lVar10 != 0)) {
          iVar2 = func_0x000180225d90(*(int32_t *)(lVar10 + 0x324));
          iVar5 = iVar5 + 1;
          puVar9 = &system_buffer_ptr;
          if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
            puVar9 = *(void **)(lVar4 + 0x18);
          }
          fVar11 = (float)(int)(iVar2 * (uint)*(ushort *)(lVar10 + 0x32e) *
                               (uint)*(ushort *)(lVar10 + 0x32c)) * 9.536743e-07;
          fVar12 = fVar12 + fVar11;
          FUN_180628040(param_2,&unknown_var_8536_ptr,puVar9,(double)fVar11);
        }
        lVar4 = *(longlong *)(lVar1 + 0x70);
        iVar7 = iVar7 + 1;
        lVar6 = lVar6 + 8;
      } while ((ulonglong)(longlong)iVar7 < (ulonglong)(*(longlong *)(lVar1 + 0x78) - lVar4 >> 3));
    }
    FUN_180628040(param_2,&unknown_var_8160_ptr,iVar5,(double)fVar12);
  }
  return;
}





// 函数: void FUN_18030452d(uint64_t param_1,longlong param_2)
void FUN_18030452d(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong unaff_RSI;
  int iVar7;
  void *puVar8;
  void *puVar9;
  longlong lVar10;
  longlong unaff_R14;
  float fVar11;
  uint64_t uVar12;
  float fVar13;
  
  iVar6 = *(int *)(param_2 + 0x10);
  FUN_1806277c0();
  puVar3 = (uint64_t *)((ulonglong)*(uint *)(unaff_R14 + 0x10) + *(longlong *)(unaff_R14 + 8));
  *puVar3 = 0x2f2f2f2f2f2f2f2f;
  puVar3[1] = 0x2f2f2f2f2f2f2f2f;
  *(int32_t *)(puVar3 + 2) = 0x2f2f2f2f;
  *(int32_t *)((longlong)puVar3 + 0x14) = 0x2f2f2f2f;
  *(int32_t *)(puVar3 + 3) = 0x2f2f2f2f;
  *(int32_t *)((longlong)puVar3 + 0x1c) = 0x2f2f2f2f;
  puVar3[4] = 0x2f2f2f2f2f2f2f2f;
  *(int16_t *)(puVar3 + 5) = 0xa2f;
  *(int8_t *)((longlong)puVar3 + 0x2a) = 0;
  *(int *)(unaff_R14 + 0x10) = iVar6 + 0x2a;
  puVar9 = *(void **)(*(longlong *)(unaff_RSI + 0x6d0) + 0x4e0);
  puVar8 = &system_buffer_ptr;
  if (puVar9 != (void *)0x0) {
    puVar8 = puVar9;
  }
  uVar12 = FUN_180628040(0x2f2f2f2f2f2f2f2f,&unknown_var_2760_ptr,puVar8);
  lVar1 = *(longlong *)(unaff_RSI + 0x530);
  uVar12 = FUN_180628040(uVar12,&unknown_var_8544_ptr);
  lVar4 = *(longlong *)(lVar1 + 0x70);
  iVar6 = 0;
  fVar13 = 0.0;
  iVar7 = 0;
  if (*(longlong *)(lVar1 + 0x78) - lVar4 >> 3 != 0) {
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar5 + lVar4);
      if ((lVar4 != 0) && (lVar10 = *(longlong *)(lVar4 + 0x428), lVar10 != 0)) {
        iVar2 = func_0x000180225d90(*(int32_t *)(lVar10 + 0x324));
        iVar6 = iVar6 + 1;
        puVar9 = &system_buffer_ptr;
        if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
          puVar9 = *(void **)(lVar4 + 0x18);
        }
        fVar11 = (float)(int)(iVar2 * (uint)*(ushort *)(lVar10 + 0x32e) *
                             (uint)*(ushort *)(lVar10 + 0x32c)) * 9.536743e-07;
        fVar13 = fVar13 + fVar11;
        uVar12 = FUN_180628040(fVar11,&unknown_var_8536_ptr,puVar9,(double)fVar11);
      }
      lVar4 = *(longlong *)(lVar1 + 0x70);
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + 8;
    } while ((ulonglong)(longlong)iVar7 < (ulonglong)(*(longlong *)(lVar1 + 0x78) - lVar4 >> 3));
  }
  FUN_180628040(uVar12,&unknown_var_8160_ptr,iVar6,(double)fVar13);
  return;
}





// 函数: void FUN_1803045f4(uint64_t param_1,longlong param_2)
void FUN_1803045f4(uint64_t param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  longlong lVar3;
  void *puVar4;
  longlong lVar5;
  float fVar6;
  
  uVar2 = unaff_RBP & 0xffffffff;
  do {
    lVar3 = *(longlong *)(uVar2 + param_2);
    if ((lVar3 != 0) && (lVar5 = *(longlong *)(lVar3 + 0x428), lVar5 != 0)) {
      iVar1 = func_0x000180225d90(*(int32_t *)(lVar5 + 0x324));
      puVar4 = &system_buffer_ptr;
      if (*(void **)(lVar3 + 0x18) != (void *)0x0) {
        puVar4 = *(void **)(lVar3 + 0x18);
      }
      fVar6 = (float)(int)(iVar1 * (uint)*(ushort *)(lVar5 + 0x32e) *
                          (uint)*(ushort *)(lVar5 + 0x32c)) * 9.536743e-07;
      FUN_180628040(fVar6,&unknown_var_8536_ptr,puVar4,(double)fVar6);
    }
    param_2 = *(longlong *)(unaff_RSI + 0x70);
    unaff_EDI = unaff_EDI + 1;
    uVar2 = uVar2 + 8;
  } while ((ulonglong)(longlong)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RSI + 0x78) - param_2 >> 3));
  FUN_180628040();
  return;
}





// 函数: void FUN_18030469a(void)
void FUN_18030469a(void)

{
  FUN_180628040();
  return;
}





// 函数: void FUN_1803046cc(void)
void FUN_1803046cc(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803046e0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803046e0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  (**(code **)(**(longlong **)(param_1 + 200) + 0x68))
            (*(longlong **)(param_1 + 200),0,param_3,param_4,0xfffffffffffffffe);
  if (*(char *)(param_1 + 0xc0) == '\0') {
    FUN_180304100(*(uint64_t *)(param_1 + 200),1,1);
  }
  else {
    FUN_18005e630(_DAT_180c82868);
    pcVar1 = *(code **)(**(longlong **)(param_1 + 200) + 0xb8);
    if (pcVar1 == (code *)&unknown_var_128_ptr) {
      plVar3 = (longlong *)(*(longlong **)(param_1 + 200))[0xda];
    }
    else {
      plVar3 = (longlong *)(*pcVar1)();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    FUN_180301f30(*(uint64_t *)(param_1 + 200),0);
    FUN_180304100(*(uint64_t *)(param_1 + 200),0,1,0);
    FUN_180095420(*(longlong *)(param_1 + 200) + 0x560);
    FUN_180301f30(*(uint64_t *)(param_1 + 200),plVar3);
    if (plVar3 != (longlong *)0x0) {
      plVar2 = (longlong *)plVar3[0x712];
      plVar3[0x712] = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      plVar2 = (longlong *)plVar3[0x7c9];
      plVar3[0x7c9] = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      FUN_180143430(plVar3 + 0x603);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
  }
  plVar3 = *(longlong **)(param_1 + 200);
  *(int8_t *)((longlong)plVar3 + 0xdd) = 0;
                    // WARNING: Could not recover jumptable at 0x000180304845. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0xc0))();
  return;
}





// 函数: void FUN_180304860(longlong *param_1)
void FUN_180304860(longlong *param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  
  puVar1 = (uint64_t *)*param_1;
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  return;
}





// 函数: void FUN_180304871(void)
void FUN_180304871(void)

{
  longlong lVar1;
  uint64_t *unaff_RBX;
  
  lVar1 = __RTCastToVoid();
  (**(code **)*unaff_RBX)();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  return;
}





// 函数: void FUN_18030489b(void)
void FUN_18030489b(void)

{
  return;
}





