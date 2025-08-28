#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part104.c - 9 个函数

// 函数: void FUN_180121300(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180121300(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  
  iVar2 = FUN_1801219c0(param_1,0);
  iVar2 = iVar2 + 1;
  iVar3 = FUN_1801219c0(param_2,0);
  iVar5 = iVar3 + 1 + iVar2;
  lVar4 = 0;
  if (0 < iVar5) {
    if (iVar5 < 8) {
      iVar5 = 8;
    }
    lVar4 = 0;
    if (0 < iVar5) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      lVar4 = func_0x000180120ce0((int64_t)iVar5 * 2,SYSTEM_DATA_MANAGER_B);
    }
  }
  FUN_180121740(lVar4,iVar2,param_1,param_4,0);
  lVar1 = lVar4 + (int64_t)iVar2 * 2;
  FUN_180121740(lVar1,iVar3 + 1,param_2,param_4,0);
  _wfopen(lVar4,lVar1);
  if (lVar4 != 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar4,SYSTEM_DATA_MANAGER_B);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180121420(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  if (param_3 != (int64_t *)0x0) {
    *param_3 = 0;
  }
  lVar2 = FUN_180121300(param_1,&processed_var_4880_ptr);
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = fseek(lVar2,0,2);
  if (iVar1 == 0) {
    iVar1 = ftell(lVar2);
    lVar5 = (int64_t)iVar1;
    if ((iVar1 != -1) && (iVar1 = fseek(lVar2,0,0), iVar1 == 0)) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      lVar3 = func_0x000180120ce0(lVar5,SYSTEM_DATA_MANAGER_B);
      if (lVar3 != 0) {
        lVar4 = fread(lVar3,1,lVar5,lVar2);
        if (lVar4 != lVar5) {
          fclose();
          if (SYSTEM_DATA_MANAGER_A != 0) {
            *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
          }
                    // WARNING: Subroutine does not return
          FUN_180059ba0(lVar3,SYSTEM_DATA_MANAGER_B);
        }
        fclose(lVar2);
        if (param_3 == (int64_t *)0x0) {
          return lVar3;
        }
        *param_3 = lVar5;
        return lVar3;
      }
    }
  }
  fclose(lVar2);
  return 0;
}



uint64_t FUN_180121550(uint *param_1,byte *param_2,int64_t param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_2;
  if (-1 < (char)bVar1) {
    *param_1 = (uint)bVar1;
    return 1;
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    *param_1 = 0xfffd;
    if ((param_3 != 0) && (param_3 - (int64_t)param_2 < 2)) {
      return 1;
    }
    if ((0xc1 < bVar1) && ((param_2[1] & 0xc0) == 0x80)) {
      *param_1 = (bVar1 & 0x1f) * 0x40 + (param_2[1] & 0x3f);
    }
    return 2;
  }
  if ((bVar1 & 0xf0) == 0xe0) {
    *param_1 = 0xfffd;
    if ((param_3 != 0) && (param_3 - (int64_t)param_2 < 3)) {
      return 1;
    }
    if (bVar1 == 0xe0) {
      if (0x1f < (byte)(param_2[1] + 0x60)) {
        return 3;
      }
    }
    else if ((bVar1 == 0xed) && (0x9f < param_2[1])) {
      return 3;
    }
    if (((param_2[1] & 0xc0) == 0x80) && ((param_2[2] & 0xc0) == 0x80)) {
      *param_1 = (bVar1 & 0xf) * 0x1000 + (param_2[1] & 0x3f) * 0x40 + (param_2[2] & 0x3f);
    }
    return 3;
  }
  if ((bVar1 & 0xf8) != 0xf0) {
    *param_1 = 0x3f;
    return 1;
  }
  *param_1 = 0xfffd;
  if ((param_3 != 0) && (param_3 - (int64_t)param_2 < 4)) {
    return 1;
  }
  if (bVar1 < 0xf5) {
    if (bVar1 == 0xf0) {
      if (0x2f < (byte)(param_2[1] + 0x70)) {
        return 4;
      }
    }
    else if ((bVar1 == 0xf4) && (0x8f < param_2[1])) {
      return 4;
    }
    if (((((param_2[1] & 0xc0) == 0x80) && ((param_2[2] & 0xc0) == 0x80)) &&
        ((param_2[3] & 0xc0) == 0x80)) &&
       (uVar2 = (bVar1 & 7) * 0x40000 + (param_2[2] & 0x3f) * 0x40 + (param_2[1] & 0x3f) * 0x1000 +
                (param_2[3] & 0x3f), (uVar2 & 0xfffff800) != 0xd800)) {
      *param_1 = uVar2;
    }
  }
  return 4;
}



uint64_t FUN_18012167b(uint64_t param_1,int64_t param_2,uint64_t param_3,byte param_4)

{
  uint uVar1;
  uint *in_R10;
  
  if (param_4 < 0xf5) {
    if (param_4 == 0xf0) {
      if (0x2f < (byte)(*(char *)(param_2 + 1) + 0x70U)) {
        return 4;
      }
    }
    else if ((param_4 == 0xf4) && (0x8f < *(byte *)(param_2 + 1))) {
      return 4;
    }
    if (((((*(byte *)(param_2 + 1) & 0xc0) == 0x80) && ((*(byte *)(param_2 + 2) & 0xc0) == 0x80)) &&
        ((*(byte *)(param_2 + 3) & 0xc0) == 0x80)) &&
       (uVar1 = (param_4 & 7) * 0x40000 + (*(byte *)(param_2 + 2) & 0x3f) * 0x40 +
                (*(byte *)(param_2 + 1) & 0x3f) * 0x1000 + (*(byte *)(param_2 + 3) & 0x3f),
       (uVar1 & 0xfffff800) != 0xd800)) {
      *in_R10 = uVar1;
    }
  }
  return 4;
}



uint64_t FUN_1801216a7(uint64_t param_1,int64_t param_2,uint64_t param_3,byte param_4)

{
  uint uVar1;
  uint *in_R10;
  
  if ((((param_4 != 0xf4) || (*(byte *)(param_2 + 1) < 0x90)) &&
      ((*(byte *)(param_2 + 1) & 0xc0) == 0x80)) &&
     ((((*(byte *)(param_2 + 2) & 0xc0) == 0x80 && ((*(byte *)(param_2 + 3) & 0xc0) == 0x80)) &&
      (uVar1 = (param_4 & 7) * 0x40000 + (*(byte *)(param_2 + 2) & 0x3f) * 0x40 +
               (*(byte *)(param_2 + 1) & 0x3f) * 0x1000 + (*(byte *)(param_2 + 3) & 0x3f),
      (uVar1 & 0xfffff800) != 0xd800)))) {
    *in_R10 = uVar1;
  }
  return 4;
}



uint64_t FUN_180121727(int32_t *param_1)

{
  *param_1 = 0x3f;
  return 1;
}



uint64_t FUN_180121740(int16_t *param_1,int param_2,byte *param_3,uint64_t param_4,
                       uint64_t *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int16_t *puVar5;
  
  puVar5 = param_1;
  if (param_1 < param_1 + (int64_t)param_2 + -1) {
    do {
      bVar1 = *param_3;
      if (bVar1 == 0) break;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          uVar3 = 0xfffd;
          if (bVar1 < 0xc2) {
            iVar2 = 2;
          }
          else if ((param_3[1] & 0xc0) == 0x80) {
            iVar2 = 2;
            uVar3 = (bVar1 & 0x1f) * 0x40 + (param_3[1] & 0x3f);
          }
          else {
            iVar2 = 2;
          }
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          uVar3 = 0xfffd;
          if (bVar1 == 0xe0) {
            if ((byte)(param_3[1] + 0x60) < 0x20) {
LAB_180121819:
              if ((param_3[1] & 0xc0) == 0x80) {
                if ((param_3[2] & 0xc0) == 0x80) {
                  iVar2 = 3;
                  uVar3 = (param_3[1] & 0x3f) * 0x40 + (bVar1 & 0xf) * 0x1000 + (param_3[2] & 0x3f);
                }
                else {
                  iVar2 = 3;
                }
              }
              else {
                iVar2 = 3;
              }
            }
            else {
              iVar2 = 3;
            }
          }
          else {
            if ((bVar1 != 0xed) || (param_3[1] < 0xa0)) goto LAB_180121819;
            iVar2 = 3;
          }
        }
        else {
          if ((bVar1 & 0xf8) != 0xf0) {
            uVar3 = 0x3f;
            goto LAB_18012195c;
          }
          uVar3 = 0xfffd;
          if (bVar1 < 0xf5) {
            if (bVar1 == 0xf0) {
              if ((byte)(param_3[1] + 0x70) < 0x30) {
LAB_1801218c4:
                if ((param_3[1] & 0xc0) == 0x80) {
                  if ((param_3[2] & 0xc0) == 0x80) {
                    if ((param_3[3] & 0xc0) == 0x80) {
                      uVar4 = (param_3[2] & 0x3f) * 0x40 + (bVar1 & 7) * 0x40000 +
                              (param_3[1] & 0x3f) * 0x1000 + (param_3[3] & 0x3f);
                      iVar2 = 4;
                      if ((uVar4 & 0xfffff800) != 0xd800) {
                        uVar3 = uVar4;
                      }
                    }
                    else {
                      iVar2 = 4;
                    }
                  }
                  else {
                    iVar2 = 4;
                  }
                }
                else {
                  iVar2 = 4;
                }
              }
              else {
                iVar2 = 4;
              }
            }
            else {
              if ((bVar1 != 0xf4) || (param_3[1] < 0x90)) goto LAB_1801218c4;
              iVar2 = 4;
            }
          }
          else {
            iVar2 = 4;
          }
        }
      }
      else {
        uVar3 = (uint)bVar1;
LAB_18012195c:
        iVar2 = 1;
      }
      param_3 = param_3 + iVar2;
      if (uVar3 == 0) break;
      if (uVar3 < 0x10000) {
        *puVar5 = (short)uVar3;
        puVar5 = puVar5 + 1;
      }
    } while (puVar5 < param_1 + (int64_t)param_2 + -1);
  }
  *puVar5 = 0;
  if (param_5 != (uint64_t *)0x0) {
    *param_5 = param_3;
  }
  return (int64_t)puVar5 - (int64_t)param_1 >> 1 & 0xffffffff;
}



uint64_t FUN_180121742(int16_t *param_1,int param_2,byte *param_3,uint64_t param_4,
                       uint64_t param_5,uint64_t *param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int16_t *puVar5;
  
  puVar5 = param_1;
  if (param_1 < param_1 + (int64_t)param_2 + -1) {
    do {
      bVar1 = *param_3;
      if (bVar1 == 0) break;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          uVar3 = 0xfffd;
          if (bVar1 < 0xc2) {
            iVar2 = 2;
          }
          else if ((param_3[1] & 0xc0) == 0x80) {
            iVar2 = 2;
            uVar3 = (bVar1 & 0x1f) * 0x40 + (param_3[1] & 0x3f);
          }
          else {
            iVar2 = 2;
          }
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          uVar3 = 0xfffd;
          if (bVar1 == 0xe0) {
            if ((byte)(param_3[1] + 0x60) < 0x20) {
LAB_180121819:
              if ((param_3[1] & 0xc0) == 0x80) {
                if ((param_3[2] & 0xc0) == 0x80) {
                  iVar2 = 3;
                  uVar3 = (param_3[1] & 0x3f) * 0x40 + (bVar1 & 0xf) * 0x1000 + (param_3[2] & 0x3f);
                }
                else {
                  iVar2 = 3;
                }
              }
              else {
                iVar2 = 3;
              }
            }
            else {
              iVar2 = 3;
            }
          }
          else {
            if ((bVar1 != 0xed) || (param_3[1] < 0xa0)) goto LAB_180121819;
            iVar2 = 3;
          }
        }
        else {
          if ((bVar1 & 0xf8) != 0xf0) {
            uVar3 = 0x3f;
            goto LAB_18012195c;
          }
          uVar3 = 0xfffd;
          if (bVar1 < 0xf5) {
            if (bVar1 == 0xf0) {
              if ((byte)(param_3[1] + 0x70) < 0x30) {
LAB_1801218c4:
                if ((param_3[1] & 0xc0) == 0x80) {
                  if ((param_3[2] & 0xc0) == 0x80) {
                    if ((param_3[3] & 0xc0) == 0x80) {
                      uVar4 = (param_3[2] & 0x3f) * 0x40 + (bVar1 & 7) * 0x40000 +
                              (param_3[1] & 0x3f) * 0x1000 + (param_3[3] & 0x3f);
                      iVar2 = 4;
                      if ((uVar4 & 0xfffff800) != 0xd800) {
                        uVar3 = uVar4;
                      }
                    }
                    else {
                      iVar2 = 4;
                    }
                  }
                  else {
                    iVar2 = 4;
                  }
                }
                else {
                  iVar2 = 4;
                }
              }
              else {
                iVar2 = 4;
              }
            }
            else {
              if ((bVar1 != 0xf4) || (param_3[1] < 0x90)) goto LAB_1801218c4;
              iVar2 = 4;
            }
          }
          else {
            iVar2 = 4;
          }
        }
      }
      else {
        uVar3 = (uint)bVar1;
LAB_18012195c:
        iVar2 = 1;
      }
      param_3 = param_3 + iVar2;
      if (uVar3 == 0) break;
      if (uVar3 < 0x10000) {
        *puVar5 = (short)uVar3;
        puVar5 = puVar5 + 1;
      }
    } while (puVar5 < param_1 + (int64_t)param_2 + -1);
  }
  *puVar5 = 0;
  if (param_6 != (uint64_t *)0x0) {
    *param_6 = param_3;
  }
  return (int64_t)puVar5 - (int64_t)param_1 >> 1 & 0xffffffff;
}



uint64_t FUN_180121761(uint64_t param_1,uint64_t param_2,byte *param_3,uint64_t param_4,
                       uint64_t param_5,uint64_t *param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int64_t unaff_RBP;
  int16_t *unaff_RSI;
  uint uVar4;
  int16_t *in_R10;
  
  do {
    bVar1 = *param_3;
    if (bVar1 == 0) break;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0xe0) == 0xc0) {
        uVar3 = 0xfffd;
        if (bVar1 < 0xc2) {
          iVar2 = 2;
        }
        else if ((param_3[1] & 0xc0) == 0x80) {
          iVar2 = 2;
          uVar3 = (bVar1 & 0x1f) * 0x40 + (param_3[1] & 0x3f);
        }
        else {
          iVar2 = 2;
        }
      }
      else if ((bVar1 & 0xf0) == 0xe0) {
        uVar3 = 0xfffd;
        if (bVar1 == 0xe0) {
          if ((byte)(param_3[1] + 0x60) < 0x20) {
LAB_180121819:
            if ((param_3[1] & 0xc0) == 0x80) {
              if ((param_3[2] & 0xc0) == 0x80) {
                iVar2 = 3;
                uVar3 = (param_3[1] & 0x3f) * 0x40 + (bVar1 & 0xf) * 0x1000 + (param_3[2] & 0x3f);
              }
              else {
                iVar2 = 3;
              }
            }
            else {
              iVar2 = 3;
            }
          }
          else {
            iVar2 = 3;
          }
        }
        else {
          if ((bVar1 != 0xed) || (param_3[1] < 0xa0)) goto LAB_180121819;
          iVar2 = 3;
        }
      }
      else {
        if ((bVar1 & 0xf8) != 0xf0) {
          uVar3 = 0x3f;
          goto LAB_18012195c;
        }
        uVar3 = 0xfffd;
        if (bVar1 < 0xf5) {
          if (bVar1 == 0xf0) {
            if ((byte)(param_3[1] + 0x70) < 0x30) {
LAB_1801218c4:
              if ((param_3[1] & 0xc0) == 0x80) {
                if ((param_3[2] & 0xc0) == 0x80) {
                  if ((param_3[3] & 0xc0) == 0x80) {
                    uVar4 = (param_3[2] & 0x3f) * 0x40 + (bVar1 & 7) * 0x40000 +
                            (param_3[1] & 0x3f) * 0x1000 + (param_3[3] & 0x3f);
                    iVar2 = 4;
                    if ((uVar4 & 0xfffff800) != 0xd800) {
                      uVar3 = uVar4;
                    }
                  }
                  else {
                    iVar2 = 4;
                  }
                }
                else {
                  iVar2 = 4;
                }
              }
              else {
                iVar2 = 4;
              }
            }
            else {
              iVar2 = 4;
            }
          }
          else {
            if ((bVar1 != 0xf4) || (param_3[1] < 0x90)) goto LAB_1801218c4;
            iVar2 = 4;
          }
        }
        else {
          iVar2 = 4;
        }
      }
    }
    else {
      uVar3 = (uint)bVar1;
LAB_18012195c:
      iVar2 = 1;
    }
    param_3 = param_3 + iVar2;
    if (uVar3 == 0) break;
    if (uVar3 < 0x10000) {
      *in_R10 = (short)uVar3;
      in_R10 = in_R10 + 1;
    }
  } while (in_R10 < unaff_RSI);
  *in_R10 = 0;
  if (param_6 != (uint64_t *)0x0) {
    *param_6 = param_3;
  }
  return (int64_t)in_R10 - unaff_RBP >> 1 & 0xffffffff;
}



uint64_t FUN_18012198e(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                       uint64_t param_5,uint64_t *param_6)

{
  int64_t unaff_RBP;
  int16_t *in_R10;
  
  *in_R10 = 0;
  if (param_6 != (uint64_t *)0x0) {
    *param_6 = param_3;
  }
  return (int64_t)in_R10 - unaff_RBP >> 1 & 0xffffffff;
}



uint64_t FUN_1801219a3(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t *in_RAX;
  int64_t unaff_RBP;
  int64_t in_R10;
  
  *in_RAX = param_3;
  return in_R10 - unaff_RBP >> 1 & 0xffffffff;
}



int FUN_1801219c0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = 0;
  do {
    iVar4 = iVar2;
    if ((param_2 != (byte *)0x0) && (param_2 <= param_1)) {
      return iVar4;
    }
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar4;
    }
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0xe0) == 0xc0) {
        uVar3 = 0xfffd;
        if ((param_2 == (byte *)0x0) || (1 < (int64_t)param_2 - (int64_t)param_1)) {
          if (bVar1 < 0xc2) {
            iVar2 = 2;
          }
          else if ((param_1[1] & 0xc0) == 0x80) {
            iVar2 = 2;
            uVar3 = (bVar1 & 0x1f) * 0x40 + (param_1[1] & 0x3f);
          }
          else {
            iVar2 = 2;
          }
          goto LAB_180121c13;
        }
        goto LAB_180121c0e;
      }
      if ((bVar1 & 0xf0) != 0xe0) {
        if ((bVar1 & 0xf8) == 0xf0) {
          uVar3 = 0xfffd;
          if ((param_2 == (byte *)0x0) || (3 < (int64_t)param_2 - (int64_t)param_1)) {
            if (bVar1 < 0xf5) {
              if (bVar1 == 0xf0) {
                if ((byte)(param_1[1] + 0x70) < 0x30) {
LAB_180121b76:
                  if ((param_1[1] & 0xc0) == 0x80) {
                    if ((param_1[2] & 0xc0) == 0x80) {
                      if ((param_1[3] & 0xc0) == 0x80) {
                        uVar5 = (param_1[2] & 0x3f) * 0x40 + (bVar1 & 7) * 0x40000 +
                                (param_1[1] & 0x3f) * 0x1000 + (param_1[3] & 0x3f);
                        iVar2 = 4;
                        if ((uVar5 & 0xfffff800) != 0xd800) {
                          uVar3 = uVar5;
                        }
                      }
                      else {
                        iVar2 = 4;
                      }
                    }
                    else {
                      iVar2 = 4;
                    }
                  }
                  else {
                    iVar2 = 4;
                  }
                }
                else {
                  iVar2 = 4;
                }
              }
              else {
                if ((bVar1 != 0xf4) || (param_1[1] < 0x90)) goto LAB_180121b76;
                iVar2 = 4;
              }
            }
            else {
              iVar2 = 4;
            }
            goto LAB_180121c13;
          }
        }
        else {
          uVar3 = 0x3f;
        }
        goto LAB_180121c0e;
      }
      uVar3 = 0xfffd;
      if ((param_2 != (byte *)0x0) && ((int64_t)param_2 - (int64_t)param_1 < 3))
      goto LAB_180121c0e;
      if (bVar1 == 0xe0) {
        if ((byte)(param_1[1] + 0x60) < 0x20) {
LAB_180121ab6:
          if ((param_1[1] & 0xc0) == 0x80) {
            if ((param_1[2] & 0xc0) == 0x80) {
              iVar2 = 3;
              uVar3 = (param_1[1] & 0x3f) * 0x40 + (bVar1 & 0xf) * 0x1000 + (param_1[2] & 0x3f);
            }
            else {
              iVar2 = 3;
            }
          }
          else {
            iVar2 = 3;
          }
        }
        else {
          iVar2 = 3;
        }
      }
      else {
        if ((bVar1 != 0xed) || (param_1[1] < 0xa0)) goto LAB_180121ab6;
        iVar2 = 3;
      }
    }
    else {
      uVar3 = (uint)bVar1;
LAB_180121c0e:
      iVar2 = 1;
    }
LAB_180121c13:
    param_1 = param_1 + iVar2;
    if (uVar3 == 0) {
      return iVar4;
    }
    iVar2 = iVar4 + 1;
    if (0xffff < uVar3) {
      iVar2 = iVar4;
    }
  } while( true );
}



int FUN_180121c40(byte *param_1,int param_2,ushort *param_3,ushort *param_4)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  int64_t lVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar7 = param_1 + param_2;
  pbVar6 = param_1;
  if (param_1 < pbVar7 + -1) {
    do {
      if (((param_4 != (ushort *)0x0) && (param_4 <= param_3)) || (uVar1 = *param_3, uVar1 == 0))
      break;
      param_3 = param_3 + 1;
      bVar3 = (byte)uVar1;
      if (uVar1 < 0x80) {
        *pbVar6 = bVar3;
        lVar4 = 1;
      }
      else {
        iVar5 = ((int)pbVar7 - (int)pbVar6) + -1;
        if (uVar1 < 0x800) {
          if (iVar5 < 2) {
            lVar4 = 0;
          }
          else {
            *pbVar6 = (char)(uVar1 >> 6) - 0x40;
            pbVar6[1] = (bVar3 & 0x3f) + 0x80;
            lVar4 = 2;
          }
        }
        else if (uVar1 - 0xdc00 < 0x400) {
          lVar4 = 0;
        }
        else {
          bVar2 = (byte)(uVar1 >> 8);
          if (uVar1 - 0xd800 < 0x400) {
            if (iVar5 < 4) {
              lVar4 = 0;
            }
            else {
              *pbVar6 = 0xf0;
              pbVar6[1] = (bVar2 >> 4) + 0x80;
              pbVar6[2] = ((byte)(uVar1 >> 6) & 0x3f) + 0x80;
              pbVar6[3] = (bVar3 & 0x3f) + 0x80;
              lVar4 = 4;
            }
          }
          else if (iVar5 < 3) {
            lVar4 = 0;
          }
          else {
            *pbVar6 = (bVar2 >> 4) - 0x20;
            pbVar6[1] = ((byte)(uVar1 >> 6) & 0x3f) + 0x80;
            pbVar6[2] = (bVar3 & 0x3f) + 0x80;
            lVar4 = 3;
          }
        }
      }
      pbVar6 = pbVar6 + lVar4;
    } while (pbVar6 < pbVar7 + -1);
  }
  *pbVar6 = 0;
  return (int)pbVar6 - (int)param_1;
}



int FUN_180121d80(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = 0;
  while (((param_2 == (ushort *)0x0 || (param_1 < param_2)) && (uVar1 = *param_1, uVar1 != 0))) {
    param_1 = param_1 + 1;
    if (uVar1 < 0x80) {
      iVar2 = iVar2 + 1;
    }
    else if (uVar1 < 0x800) {
      iVar2 = iVar2 + 2;
    }
    else if (0x3ff < (ushort)(uVar1 + 0x2400)) {
      iVar2 = iVar2 + ((ushort)(uVar1 + 0x2800) < 0x400) + 3;
    }
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180121ed0(int param_1,float param_2)
void FUN_180121ed0(int param_1,float param_2)

{
  int32_t *puVar1;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  float fStack_c;
  
  puVar1 = (int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((int64_t)param_1 + 10) * 0x10);
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  fStack_c = (float)puVar1[3] * param_2 * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
  func_0x000180121e20(&uStack_18);
  return;
}



uint FUN_180121f20(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint *puVar5;
  
  iVar1 = *param_1;
  puVar2 = *(uint **)(param_1 + 2);
  uVar3 = (int64_t)iVar1;
  puVar5 = puVar2;
  if (iVar1 != 0) {
    do {
      uVar4 = uVar3 >> 1;
      if (puVar5[uVar4 * 4] < param_2) {
        puVar5 = puVar5 + uVar4 * 4 + 4;
        uVar4 = uVar3 + (-1 - uVar4);
      }
      uVar3 = uVar4;
    } while (uVar4 != 0);
  }
  if ((puVar5 != puVar2 + (int64_t)iVar1 * 4) && (*puVar5 == param_2)) {
    return puVar5[2];
  }
  return param_3;
}



uint64_t FUN_180121fa0(int *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint *puVar5;
  
  iVar1 = *param_1;
  puVar2 = *(uint **)(param_1 + 2);
  uVar3 = (int64_t)iVar1;
  puVar5 = puVar2;
  if (iVar1 != 0) {
    do {
      uVar4 = uVar3 >> 1;
      if (puVar5[uVar4 * 4] < param_2) {
        puVar5 = puVar5 + uVar4 * 4 + 4;
        uVar4 = uVar3 + (-1 - uVar4);
      }
      uVar3 = uVar4;
    } while (uVar4 != 0);
  }
  if ((puVar5 != puVar2 + (int64_t)iVar1 * 4) && (*puVar5 == param_2)) {
    return *(uint64_t *)(puVar5 + 2);
  }
  return 0;
}





// 函数: void FUN_1801220b0(int *param_1,uint param_2,uint param_3)
void FUN_1801220b0(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint auStack_18 [2];
  uint uStack_10;
  
  iVar1 = *param_1;
  puVar2 = *(uint **)(param_1 + 2);
  puVar4 = puVar2;
  uVar5 = (int64_t)iVar1;
  if (iVar1 != 0) {
    do {
      uVar3 = uVar5 >> 1;
      if (puVar4[uVar3 * 4] < param_2) {
        puVar4 = puVar4 + uVar3 * 4 + 4;
        uVar3 = uVar5 + (-1 - uVar3);
      }
      uVar5 = uVar3;
    } while (uVar3 != 0);
  }
  if ((puVar4 != puVar2 + (int64_t)iVar1 * 4) && (*puVar4 == param_2)) {
    puVar4[2] = param_3;
    return;
  }
  auStack_18[0] = param_2;
  uStack_10 = param_3;
  FUN_18013e4c0(param_1,puVar4,auStack_18);
  return;
}





// 函数: void FUN_180122160(int *param_1,uint param_2,uint64_t param_3)
void FUN_180122160(int *param_1,uint param_2,uint64_t param_3)

{
  int iVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint auStack_18 [2];
  uint64_t uStack_10;
  
  iVar1 = *param_1;
  puVar2 = *(uint **)(param_1 + 2);
  puVar4 = puVar2;
  uVar5 = (int64_t)iVar1;
  if (iVar1 != 0) {
    do {
      uVar3 = uVar5 >> 1;
      if (puVar4[uVar3 * 4] < param_2) {
        puVar4 = puVar4 + uVar3 * 4 + 4;
        uVar3 = uVar5 + (-1 - uVar3);
      }
      uVar5 = uVar3;
    } while (uVar3 != 0);
  }
  if ((puVar4 != puVar2 + (int64_t)iVar1 * 4) && (*puVar4 == param_2)) {
    *(uint64_t *)(puVar4 + 2) = param_3;
    return;
  }
  auStack_18[0] = param_2;
  uStack_10 = param_3;
  FUN_18013e4c0(param_1,puVar4,auStack_18);
  return;
}





// 函数: void FUN_180122210(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180122210(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  FUN_180122240(param_1,param_2,&uStackX_18);
  return;
}





// 函数: void FUN_180122240(int *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180122240(int *param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  
  iVar2 = FUN_18004b9b0(0,0,param_2,param_3);
  if (0 < iVar2) {
    iVar4 = 1;
    if (*param_1 != 0) {
      iVar4 = *param_1;
    }
    iVar5 = iVar4 + iVar2;
    if (param_1[1] <= iVar5) {
      iVar3 = param_1[1] * 2;
      if (iVar3 < iVar5) {
        iVar3 = iVar5;
      }
      FUN_18011da00(param_1,iVar3);
      iVar3 = param_1[1];
      if (iVar3 < iVar5) {
        if (iVar3 == 0) {
          iVar3 = 8;
        }
        else {
          iVar3 = iVar3 / 2 + iVar3;
        }
        iVar1 = iVar5;
        if (iVar5 < iVar3) {
          iVar1 = iVar3;
        }
        FUN_18011da00(param_1,iVar1);
      }
    }
    *param_1 = iVar5;
    lVar6 = (int64_t)(iVar4 + -1) + *(int64_t *)(param_1 + 2);
    iVar4 = FUN_18004b9b0(lVar6,(int64_t)iVar2 + 1,param_2,param_3);
    if (lVar6 != 0) {
      iVar2 = (int)((int64_t)iVar2 + 1);
      if ((iVar4 == -1) || (iVar2 <= iVar4)) {
        iVar4 = iVar2 + -1;
      }
      *(int8_t *)(iVar4 + lVar6) = 0;
    }
  }
  return;
}





// 函数: void FUN_18012227a(int param_1,uint64_t param_2,uint64_t param_3,int param_4)
void FUN_18012227a(int param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int64_t unaff_RBP;
  int64_t lVar3;
  int *unaff_RDI;
  bool in_ZF;
  
  iVar1 = 1;
  if (!in_ZF) {
    iVar1 = param_4;
  }
  iVar2 = iVar1 + (int)unaff_RBP;
  if ((param_1 <= iVar2) && (FUN_18011da00(), unaff_RDI[1] < iVar2)) {
    FUN_18011da00();
  }
  *unaff_RDI = iVar2;
  lVar3 = (int64_t)(iVar1 + -1) + *(int64_t *)(unaff_RDI + 2);
  iVar1 = FUN_18004b9b0(lVar3,unaff_RBP + 1);
  if (lVar3 != 0) {
    iVar2 = (int)(unaff_RBP + 1);
    if ((iVar1 == -1) || (iVar2 <= iVar1)) {
      iVar1 = iVar2 + -1;
    }
    *(int8_t *)(iVar1 + lVar3) = 0;
  }
  return;
}





// 函数: void FUN_180122310(void)
void FUN_180122310(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180122320(uint64_t param_1,char *param_2,char *param_3,char param_4)
void FUN_180122320(uint64_t param_1,char *param_2,char *param_3,char param_4)

{
  int32_t *puVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t lVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t lVar7;
  float fVar8;
  uint64_t uStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  float fStack_24;
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  if (param_4 == '\0') {
    if (param_3 == (char *)0x0) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (param_2[lVar6] != '\0');
      param_3 = param_2 + lVar6;
    }
  }
  else {
    pcVar5 = (char *)0xffffffffffffffff;
    if (param_3 != (char *)0x0) {
      pcVar5 = param_3;
    }
    param_3 = param_2;
    if (param_2 < pcVar5) {
      while (*param_3 != '\0') {
        if (((*param_3 == '#') && (param_3[1] == '#')) || (param_3 = param_3 + 1, pcVar5 <= param_3)
           ) break;
      }
    }
  }
  if (param_2 != param_3) {
    uStack_30 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
    uStack_2c = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
    uStack_28 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
    lVar6 = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x2e8);
    fStack_24 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    uStack_38 = param_1;
    uVar3 = func_0x000180121e20(&uStack_30);
    fVar8 = *(float *)(lVar2 + 0x19f8);
    lVar7 = *(int64_t *)(lVar2 + 0x19f0);
    if ((uVar3 & 0xff000000) != 0) {
      pcVar5 = param_3;
      if (param_3 == (char *)0x0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (param_2[lVar4] != '\0');
        pcVar5 = param_2 + lVar4;
      }
      if (param_2 != pcVar5) {
        if (lVar7 == 0) {
          lVar7 = *(int64_t *)(*(int64_t *)(lVar6 + 0x38) + 8);
        }
        if (fVar8 == 0.0) {
          fVar8 = *(float *)(*(int64_t *)(lVar6 + 0x38) + 0x10);
        }
        puVar1 = (int32_t *)
                 (*(int64_t *)(lVar6 + 0x68) + -0x10 + (int64_t)*(int *)(lVar6 + 0x60) * 0x10);
        uStack_30 = *puVar1;
        uStack_2c = puVar1[1];
        uStack_28 = puVar1[2];
        fStack_24 = (float)puVar1[3];
        FUN_180297590(lVar7,lVar6,fVar8,param_1,uVar3,&uStack_30,param_2,pcVar5,0,0);
      }
    }
    if (*(char *)(lVar2 + 0x2e38) != '\0') {
      FUN_18013c800(&uStack_38,param_2,param_3);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



