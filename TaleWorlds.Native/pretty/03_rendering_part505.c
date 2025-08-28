#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part505.c - 9 个函数

// 函数: void FUN_1805373f0(int *param_1,int param_2,short param_3)
void FUN_1805373f0(int *param_1,int param_2,short param_3)

{
  ushort *puVar1;
  int iVar2;
  char cVar3;
  int8_t uVar4;
  int64_t lVar5;
  int16_t uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int32_t auStackX_8 [2];
  int32_t auStackX_10 [2];
  int aiStackX_18 [2];
  int8_t auStackX_20 [8];
  
  plVar8 = (int64_t *)(param_1 + (int64_t)param_2 * 0x7e + 2);
  lVar7 = *plVar8;
  param_3 = *(short *)(lVar7 + 8) - param_3;
  *(short *)(lVar7 + 8) = param_3;
  lVar5 = *(int64_t *)(lVar7 + 0xf8);
  if (lVar5 != 0) {
    if (param_3 < 1) {
LAB_180537476:
      uVar4 = 1;
    }
    else {
      if (*(short *)(lVar7 + 10) <
          *(short *)((int64_t)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x96 + *(int64_t *)(lVar7 + 0xd0)))
      {
        cVar3 = func_0x000180507950();
        if (cVar3 != '\0') goto LAB_180537476;
      }
      uVar4 = 0;
    }
    *(int8_t *)(lVar5 + 0x126) = uVar4;
  }
  if (*plVar8 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int16_t *)(*plVar8 + 8);
  }
  lVar7 = *(int64_t *)(param_1 + 0x286) + 0x30a0 + (int64_t)*param_1 * 0xa60;
  aiStackX_18[0] = 0;
  if (*(int *)(lVar7 + 0x18) != 0) {
    iVar2 = *(int *)(lVar7 + 0x18);
    aiStackX_18[0] = iVar2;
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar2);
    }
    (**(code **)(render_system_data_config + 0x88))(iVar2,param_2,uVar6);
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar2);
    }
  }
  lVar5 = *(int64_t *)(lVar7 + 0x6e0);
  if (*(int *)(lVar5 + 0x2154) == param_2) {
    if (((*(int *)(lVar7 + 0x564) < 0) || ((*(uint *)(lVar7 + 0x56c) & 0x2000000) != 0)) ||
       ((*(uint *)((int64_t)(int)plVar8[0x1e] * 0xa0 + 0x50 + plVar8[0x1a]) >> 0x12 & 1) == 0)) {
      if ((*(int64_t **)(lVar7 + 0x628) == plVar8) && (*(int *)(lVar7 + 0x644) == -1)) {
        iVar2 = *(int *)(lVar7 + 0x638);
      }
      else {
        auStackX_10[0] = 0xffffffff;
        aiStackX_18[0] = -1;
        auStackX_8[0] = 0xffffffff;
        FUN_18050e440(lVar7,plVar8,aiStackX_18,auStackX_8,auStackX_10,auStackX_20,0xffffffff);
        lVar5 = *(int64_t *)(lVar7 + 0x6e0);
        iVar2 = aiStackX_18[0];
      }
      if (iVar2 != 0) goto LAB_1805375f9;
    }
    *(ushort *)(lVar5 + 0x130) = *(ushort *)(lVar5 + 0x130) | 8;
  }
LAB_1805375f9:
  lVar5 = *(int64_t *)(lVar7 + 0x6d8);
  if ((*(int *)(lVar7 + 0x570) == 2) && (system_data_ec8a != '\0')) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(int8_t *)(lVar5 + 0x848) = uVar4;
  FUN_180543e30(lVar5);
  FUN_180540440(lVar5,lVar7);
  puVar1 = (ushort *)(*(int64_t *)(lVar7 + 0x6e0) + 0x130);
  *puVar1 = *puVar1 | 1;
  return;
}



uint64_t FUN_180537650(int64_t param_1,int param_2,char param_3,int32_t param_4)

{
  int64_t lVar1;
  char cVar2;
  byte bVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  
  uVar7 = (uint64_t)param_2;
  lVar4 = param_1 + 8 + uVar7 * 0x1f8;
  if (*(int *)(lVar4 + 0x30) < 1) {
    return 0xffffffff;
  }
  lVar6 = (int64_t)*(int *)(lVar4 + 0xf0);
  lVar1 = *(int64_t *)(lVar4 + 0xd0);
  if (((*(uint *)(lVar6 * 0xa0 + 0x50 + lVar1) >> 9 & 1) != 0) && (*(short *)(lVar4 + 8) < 1)) {
    return 0xffffffff;
  }
  cVar2 = func_0x000180534fb0(lVar4);
  if ((cVar2 != '\0') && (*(short *)(lVar4 + 8) < 1)) {
    return 0xffffffff;
  }
  uVar8 = *(uint *)(lVar6 * 0xa0 + 0x58 + lVar1) & 0x80000;
  uVar5 = (uint64_t)(uVar8 != 0);
  cVar2 = FUN_1805377e0(param_1,uVar7 & 0xffffffff,uVar5,param_3,param_4);
  if (cVar2 == '\0') {
    return 0xffffffff;
  }
  if (uVar8 == 0) {
    if ((param_3 != '\0') && (cVar2 = func_0x00018058f9d0(lVar4,param_4), cVar2 == '\0')) {
      return 0xffffffff;
    }
    uVar7 = *(uint64_t *)
             ((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar4 + 0xd0));
    if (((uint)uVar7 & 0x102) == 0x102) {
      if (0 < *(short *)(lVar4 + 8)) {
        return uVar5;
      }
      return 0xffffffff;
    }
    if ((uVar7 & 1) != 0) {
      return uVar5;
    }
    bVar3 = (byte)uVar7 >> 1 & 1;
  }
  else {
    if (*(int *)(lVar4 + 0x30) < 1) {
      return 0xffffffff;
    }
    if (((*(uint *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar4 + 0xd0)) >>
          9 & 1) != 0) && (*(short *)(lVar4 + 8) < 1)) {
      return 0xffffffff;
    }
    if (param_3 == '\0') {
      return uVar5;
    }
    bVar3 = func_0x00018058f9d0(lVar4,param_4);
  }
  if (bVar3 != 0) {
    return uVar5;
  }
  return 0xffffffff;
}



uint FUN_180537694(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  char cVar3;
  byte bVar4;
  int64_t unaff_RBX;
  char unaff_BPL;
  uint uVar5;
  uint unaff_EDI;
  int64_t in_R10;
  uint uVar6;
  
  lVar1 = *(int64_t *)(unaff_RBX + 0xd0);
  if (((*(uint *)(in_R10 * 0xa0 + 0x50 + lVar1) >> 9 & 1) != 0) && (*(short *)(unaff_RBX + 8) < 1))
  {
    return unaff_EDI;
  }
  cVar3 = func_0x000180534fb0();
  if ((cVar3 != '\0') && (*(short *)(unaff_RBX + 8) < 1)) {
    return unaff_EDI;
  }
  uVar6 = *(uint *)(in_R10 * 0xa0 + 0x58 + lVar1) & 0x80000;
  uVar5 = (uint)(uVar6 != 0);
  cVar3 = FUN_1805377e0();
  if (cVar3 == '\0') {
    return unaff_EDI;
  }
  if (uVar6 == 0) {
    if ((unaff_BPL != '\0') && (cVar3 = func_0x00018058f9d0(), cVar3 == '\0')) {
      return unaff_EDI;
    }
    uVar2 = *(uint64_t *)
             ((int64_t)*(int *)(unaff_RBX + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(unaff_RBX + 0xd0));
    if (((uint)uVar2 & 0x102) == 0x102) {
      if (0 < *(short *)(unaff_RBX + 8)) {
        return uVar5;
      }
      return unaff_EDI;
    }
    if ((uVar2 & 1) != 0) {
      return uVar5;
    }
    bVar4 = (byte)uVar2 >> 1 & 1;
  }
  else {
    if (*(int *)(unaff_RBX + 0x30) < 1) {
      return unaff_EDI;
    }
    if (((*(uint *)((int64_t)*(int *)(unaff_RBX + 0xf0) * 0xa0 + 0x50 +
                   *(int64_t *)(unaff_RBX + 0xd0)) >> 9 & 1) != 0) &&
       (*(short *)(unaff_RBX + 8) < 1)) {
      return unaff_EDI;
    }
    if (unaff_BPL == '\0') {
      return uVar5;
    }
    bVar4 = func_0x00018058f9d0();
  }
  if (bVar4 != 0) {
    return uVar5;
  }
  return unaff_EDI;
}



uint FUN_1805376d9(int64_t param_1)

{
  uint64_t uVar1;
  char cVar2;
  byte bVar3;
  int64_t unaff_RBX;
  char unaff_BPL;
  uint uVar4;
  int64_t unaff_RSI;
  uint unaff_EDI;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 * 0x20 + 0x58 + unaff_RSI) & 0x80000;
  uVar4 = (uint)(uVar5 != 0);
  cVar2 = FUN_1805377e0();
  if (cVar2 == '\0') {
    return unaff_EDI;
  }
  if (uVar5 == 0) {
    if ((unaff_BPL != '\0') && (cVar2 = func_0x00018058f9d0(), cVar2 == '\0')) {
      return unaff_EDI;
    }
    uVar1 = *(uint64_t *)
             ((int64_t)*(int *)(unaff_RBX + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(unaff_RBX + 0xd0));
    if (((uint)uVar1 & 0x102) == 0x102) {
      if (0 < *(short *)(unaff_RBX + 8)) {
        return uVar4;
      }
      return unaff_EDI;
    }
    if ((uVar1 & 1) != 0) {
      return uVar4;
    }
    bVar3 = (byte)uVar1 >> 1 & 1;
  }
  else {
    if (*(int *)(unaff_RBX + 0x30) < 1) {
      return unaff_EDI;
    }
    if (((*(uint *)((int64_t)*(int *)(unaff_RBX + 0xf0) * 0xa0 + 0x50 +
                   *(int64_t *)(unaff_RBX + 0xd0)) >> 9 & 1) != 0) &&
       (*(short *)(unaff_RBX + 8) < 1)) {
      return unaff_EDI;
    }
    if (unaff_BPL == '\0') {
      return uVar4;
    }
    bVar3 = func_0x00018058f9d0();
  }
  if (bVar3 != 0) {
    return uVar4;
  }
  return unaff_EDI;
}



int32_t FUN_1805377bc(void)

{
  int32_t unaff_EDI;
  
  return unaff_EDI;
}



int32_t FUN_1805377c1(void)

{
  int32_t unaff_EDI;
  
  return unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte FUN_1805377e0(int64_t param_1,int param_2,int param_3,char param_4,uint param_5)

{
  uint uVar1;
  uint64_t uVar2;
  byte bVar3;
  char cVar4;
  int8_t uVar5;
  byte bVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int iVar11;
  
  if (-1 < param_2) {
    lVar10 = param_1 + 8 + (int64_t)param_2 * 0x1f8;
    cVar4 = FUN_18058f970(lVar10);
    if (cVar4 != '\0') {
      if (param_3 == 0) {
        lVar8 = (int64_t)*(int *)(lVar10 + 0xf0) * 0xa0;
        if ((*(uint *)(lVar8 + 0x58 + *(int64_t *)(lVar10 + 0xd0)) & 0x80000) == 0) {
          uVar2 = *(uint64_t *)(lVar8 + 0x50 + *(int64_t *)(lVar10 + 0xd0));
          uVar1 = *(uint *)(param_1 + 0x9e4);
          if (((uVar2 & 3) != 0) && (((uVar2 >> 8 & 1) == 0 || (0 < *(short *)(lVar10 + 8))))) {
            iVar7 = func_0x000180590580(lVar10,(int64_t)*(int *)(lVar10 + 0xf0),param_4,
                                        uVar1 >> 0x1f ^ 1,param_5);
            if (iVar7 == 0) {
              if ((((int)uVar1 < 0) && (*(int *)(param_1 + 0xa20) < 0)) &&
                 (FUN_1805346e0(), *(int *)(param_1 + 0xa20) < 0)) {
                uVar5 = 0;
              }
              else {
                uVar5 = 1;
              }
              iVar7 = FUN_180590480(lVar10,0,param_5,param_4,uVar5,0);
              if (iVar7 < 0) {
                if (((int)uVar1 < 0) && (-1 < *(int *)(param_1 + 0xa20))) {
                  uVar5 = 1;
                }
                else {
                  uVar5 = 0;
                }
                iVar7 = FUN_180590480(lVar10,0,param_5,param_4,uVar5,0);
              }
              return (byte)((uint)iVar7 >> 0x1f) ^ 1;
            }
            return 1;
          }
        }
      }
      else if (((param_3 != 1) ||
               ((*(uint *)((int64_t)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x58 +
                          *(int64_t *)(lVar10 + 0xd0)) & 0x80000) != 0)) &&
              (0 < *(int *)(lVar10 + 0x30))) {
        lVar8 = *(int64_t *)(lVar10 + 0xd0);
        lVar9 = (int64_t)*(int *)(lVar10 + 0xf0) * 0xa0;
        if (((*(uint *)(lVar9 + 0x50 + lVar8) >> 9 & 1) == 0) || (0 < *(short *)(lVar10 + 8))) {
          bVar6 = *(byte *)((int64_t)*(int *)(lVar9 + 100 + lVar8) * 0x170 + 0x140 + render_system_config
                           );
          if ((*(int *)(lVar9 + 0x5c + lVar8) == 0xf) && ((param_5 >> 0x18 & 1) != 0)) {
            bVar6 = bVar6 & 0xfd;
          }
          if (param_4 == '\0') {
            bVar3 = bVar6 & 1;
          }
          else {
            bVar3 = bVar6 & 2;
          }
          if ((bVar3 == 0) && ((bVar6 & 8) == 0)) {
            return 1;
          }
          iVar11 = 0;
          iVar7 = (int)((*(int64_t *)(lVar10 + 0xd8) - lVar8) / 0xa0);
          if (0 < iVar7) {
            do {
              lVar10 = (int64_t)(iVar11 % iVar7) * 0xa0;
              bVar6 = *(byte *)((int64_t)*(int *)(lVar10 + 100 + lVar8) * 0x170 + 0x140 +
                               render_system_config);
              if ((bVar6 & 0x10) == 0) {
                if (param_4 == '\0') {
                  if ((bVar6 & 1) == 0) goto LAB_180537a58;
                }
                else if (((bVar6 & 2) == 0) ||
                        ((*(int *)(lVar10 + 0x5c + lVar8) == 0xf && ((param_5 >> 0x18 & 1) != 0))))
                {
LAB_180537a58:
                  if ((bVar6 & 8) == 0) {
                    if (iVar11 % iVar7 < 0) {
                      return 0;
                    }
                    return 1;
                  }
                }
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar7);
          }
        }
      }
    }
  }
  return 0;
}



byte FUN_18053787d(void)

{
  byte bVar1;
  int iVar2;
  int unaff_ESI;
  int64_t unaff_RDI;
  
  iVar2 = func_0x000180590580();
  if (iVar2 == 0) {
    if ((unaff_ESI < 0) && (*(int *)(unaff_RDI + 0xa20) < 0)) {
      FUN_1805346e0();
    }
    iVar2 = FUN_180590480();
    if (iVar2 < 0) {
      iVar2 = FUN_180590480();
    }
    bVar1 = (byte)((uint)iVar2 >> 0x1f) ^ 1;
  }
  else {
    bVar1 = 1;
  }
  return bVar1;
}





// 函数: void FUN_1805378ab(void)
void FUN_1805378ab(void)

{
  return;
}



byte FUN_1805378c0(void)

{
  int iVar1;
  int unaff_ESI;
  int64_t unaff_RDI;
  
  if ((unaff_ESI < 0) && (*(int *)(unaff_RDI + 0xa20) < 0)) {
    FUN_1805346e0();
  }
  iVar1 = FUN_180590480();
  if (iVar1 < 0) {
    iVar1 = FUN_180590480();
  }
  return (byte)((uint)iVar1 >> 0x1f) ^ 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180537938(void)

{
  uint uVar1;
  int64_t lVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint64_t in_RAX;
  int64_t lVar6;
  int64_t unaff_RBX;
  char unaff_BPL;
  int iVar7;
  int in_R11D;
  uint in_stack_00000060;
  
  if (((in_R11D != 1) ||
      (in_RAX = *(uint64_t *)(unaff_RBX + 0xd0),
      (*(uint *)((int64_t)*(int *)(unaff_RBX + 0xf0) * 0xa0 + 0x58 + in_RAX) & 0x80000) != 0)) &&
     (0 < *(int *)(unaff_RBX + 0x30))) {
    lVar2 = *(int64_t *)(unaff_RBX + 0xd0);
    lVar6 = (int64_t)*(int *)(unaff_RBX + 0xf0) * 0xa0;
    uVar1 = *(uint *)(lVar6 + 0x50 + lVar2);
    in_RAX = (uint64_t)uVar1;
    if (((uVar1 >> 9 & 1) == 0) || (0 < *(short *)(unaff_RBX + 8))) {
      bVar5 = *(byte *)((int64_t)*(int *)(lVar6 + 100 + lVar2) * 0x170 + 0x140 + render_system_config);
      if ((*(int *)(lVar6 + 0x5c + lVar2) == 0xf) && ((in_stack_00000060 >> 0x18 & 1) != 0)) {
        bVar5 = bVar5 & 0xfd;
      }
      if (unaff_BPL == '\0') {
        bVar3 = bVar5 & 1;
      }
      else {
        bVar3 = bVar5 & 2;
      }
      if ((bVar3 == 0) && ((bVar5 & 8) == 0)) {
        return 1;
      }
      iVar7 = 0;
      iVar4 = (int)((*(int64_t *)(unaff_RBX + 0xd8) - lVar2) / 0xa0);
      in_RAX = 0;
      if (0 < iVar4) {
        do {
          lVar6 = (int64_t)(iVar7 % iVar4) * 0xa0;
          bVar5 = *(byte *)((int64_t)*(int *)(lVar6 + 100 + lVar2) * 0x170 + 0x140 + render_system_config
                           );
          in_RAX = 0;
          if ((bVar5 & 0x10) == 0) {
            if (unaff_BPL == '\0') {
              if ((bVar5 & 1) == 0) goto LAB_180537a58;
            }
            else if (((bVar5 & 2) == 0) ||
                    ((*(int *)(lVar6 + 0x5c + lVar2) == 0xf &&
                     ((in_stack_00000060 >> 0x18 & 1) != 0)))) {
LAB_180537a58:
              if ((bVar5 & 8) == 0) {
                if (-1 < iVar7 % iVar4) {
                  return 1;
                }
                break;
              }
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar4);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180537a80(int *param_1,int param_2,short param_3,int8_t param_4)
void FUN_180537a80(int *param_1,int param_2,short param_3,int8_t param_4)

{
  ushort *puVar1;
  char cVar2;
  int8_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int32_t uVar7;
  int32_t uVar8;
  int iVar9;
  int64_t lVar10;
  int32_t auStackX_18 [2];
  int iStackX_20;
  int32_t uStackX_24;
  uint64_t uVar11;
  
  iStackX_20 = CONCAT31(iStackX_20._1_3_,param_4);
  uVar11 = 0xfffffffffffffffe;
  lVar10 = (int64_t)param_2;
  iVar9 = 0;
  lVar6 = (int64_t)*param_1 * 0xa60 + *(int64_t *)(param_1 + 0x286);
  *(short *)(param_1 + lVar10 * 0x7e + 4) = param_3;
  lVar5 = *(int64_t *)(param_1 + lVar10 * 0x7e + 0x40);
  if (lVar5 != 0) {
    iVar9 = 0;
    if ((param_3 < 1) ||
       ((*(short *)((int64_t)param_1 + lVar10 * 0x1f8 + 0x12) <
         *(short *)((int64_t)param_1[lVar10 * 0x7e + 0x3e] * 0xa0 + 0x96 +
                   *(int64_t *)(param_1 + lVar10 * 0x7e + 0x36)) &&
        (iVar9 = 0, cVar2 = func_0x000180507950(), cVar2 != '\0')))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(int8_t *)(lVar5 + 0x126) = uVar3;
  }
  iStackX_20 = iVar9;
  if (*(int *)(lVar6 + 0x30b8) != 0) {
    iVar9 = *(int *)(lVar6 + 0x30b8);
    iStackX_20 = iVar9;
    if ((iVar9 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar9);
    }
    (**(code **)(render_system_data_config + 0xa0))
              (iVar9,param_2,param_3,*(code **)(render_system_data_config + 0xa0),1,uVar11);
    if ((iVar9 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar9);
    }
  }
  puVar1 = (ushort *)(*(int64_t *)(lVar6 + 0x3780) + 0x130);
  *puVar1 = *puVar1 | 8;
  lVar5 = 0;
  uVar8 = 0xffffffff;
  iVar9 = *(int *)(*(int64_t *)(lVar6 + 0x3998) + 0x9e0);
  lVar10 = lVar5;
  uVar7 = uVar8;
  if ((-1 < iVar9) &&
     (lVar10 = (int64_t)iVar9 * 0x1f8 + 8 + *(int64_t *)(lVar6 + 0x3998), lVar10 != 0)) {
    uVar7 = *(int32_t *)(lVar10 + 0xf0);
  }
  auStackX_18[0] = 0xffffffff;
  lVar4 = lVar5;
  if (lVar10 != 0) {
    lVar4 = FUN_18050e440(lVar6 + 0x30a0,lVar10,&stack0x00000010,auStackX_18,&stack0x00000008,
                          &iStackX_20,uVar7);
    lVar5 = CONCAT44(uStackX_24,iStackX_20);
    uVar8 = auStackX_18[0];
  }
  *(int64_t *)(lVar6 + 0x36c8) = lVar5;
  *(int64_t *)(lVar6 + 0x36d0) = lVar4;
  *(uint64_t *)(lVar6 + 0x36d8) = CONCAT44(uVar8,0xffffffff);
  *(uint64_t *)(lVar6 + 0x36e0) = CONCAT44(uVar7,0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180537bd0(int *param_1,int param_2,int param_3,int8_t *param_4)
void FUN_180537bd0(int *param_1,int param_2,int param_3,int8_t *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int64_t lVar4;
  
  lVar4 = (int64_t)param_2;
  iVar2 = param_3;
  if (param_3 == -1) {
    iVar2 = (param_1[lVar4 * 0x7e + 0x3e] + 1) %
            (int)((*(int64_t *)(param_1 + lVar4 * 0x7e + 0x38) -
                  *(int64_t *)(param_1 + lVar4 * 0x7e + 0x36)) / 0xa0);
  }
  piVar3 = param_1 + lVar4 * 0x7e;
  iVar1 = piVar3[0x3e];
  if (piVar3[0x3e] != iVar2) {
    piVar3[0x3e] = iVar2;
    iVar1 = iVar2;
    if (*(int64_t *)(piVar3 + 0x40) != 0) {
      func_0x0001805ea2d0(*(int64_t *)(piVar3 + 0x40),
                          (int64_t)iVar2 * 0xa0 + *(int64_t *)(piVar3 + 0x36),piVar3,param_4,0,
                          0xfffffffffffffffe);
      iVar1 = piVar3[0x3e];
    }
  }
  *param_4 = 0;
  lVar4 = (int64_t)iVar1 * 0xa0 + *(int64_t *)(piVar3 + 0x36);
  if ((((*(uint *)(lVar4 + 0x58) & 0x80000) == 0) &&
      ((*(byte *)((int64_t)*(int *)(lVar4 + 100) * 0x170 + 0x140 + render_system_config) & 4) != 0)) &&
     (param_1[0x279] < 0)) {
    *param_4 = -1 < param_1[0x288];
  }
  if ((*(uint *)(lVar4 + 0x50) & 0x100) != 0) {
    FUN_180537de0(param_1,param_2,*(int16_t *)(lVar4 + 0x96));
  }
  lVar4 = (int64_t)*param_1 * 0xa60 + *(int64_t *)(param_1 + 0x286);
  if (*(int *)(lVar4 + 0x30b8) != 0) {
    iVar2 = *(int *)((int64_t)*param_1 * 0xa60 + 0x30b8 + *(int64_t *)(param_1 + 0x286));
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar2);
    }
    (**(code **)(render_system_data_config + 0xb8))(iVar2,param_2,param_3,*(code **)(render_system_data_config + 0xb8),1);
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar2);
    }
  }
  FUN_18050e340(lVar4 + 0x30a0);
  if (*(int64_t *)(lVar4 + 0x37d8) != 0) {
    func_0x0001805afb00(*(int64_t *)(lVar4 + 0x37d8),param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180537de0(int *param_1,int param_2,int16_t param_3)
void FUN_180537de0(int *param_1,int param_2,int16_t param_3)

{
  int iVar1;
  uint64_t uVar2;
  
  if ((param_1[0x278] == param_2) || (param_1[0x279] == param_2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  func_0x00018058fa20(param_1 + (int64_t)param_2 * 0x7e + 2,param_3,uVar2,(int64_t)param_2 * 0x1f8
                      ,0,0xfffffffffffffffe);
  if (*(int *)((int64_t)*param_1 * 0xa60 + 0x30b8 + *(int64_t *)(param_1 + 0x286)) != 0) {
    iVar1 = *(int *)((int64_t)*param_1 * 0xa60 + 0x30b8 + *(int64_t *)(param_1 + 0x286));
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar1);
    }
    (**(code **)(render_system_data_config + 0xa8))(iVar1,param_2,param_3,*(code **)(render_system_data_config + 0xa8),1);
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar1);
    }
  }
  return;
}



uint64_t FUN_180537ef0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  bool bVar8;
  
  lVar4 = (int64_t)*(int *)(param_2 + 0xf0) * 0xa0;
  uVar5 = 0;
  iVar1 = *(int *)(lVar4 + 0x60 + *(int64_t *)(param_2 + 0xd0));
  piVar3 = (int *)(param_1 + 0xf8);
  uVar6 = uVar5;
  do {
    if (0 < piVar3[-0x30]) {
      lVar7 = (int64_t)*piVar3 * 0xa0 + *(int64_t *)(piVar3 + -8);
      uVar2 = *(uint64_t *)(lVar7 + 0x50);
      if (((((uVar2 >> 9 & 1) == 0) || (0 < (short)piVar3[-0x3a])) && ((uVar2 >> 8 & 1) != 0)) &&
         (0 < (short)piVar3[-0x3a])) {
        if (*(int *)(lVar4 + 0x5c + *(int64_t *)(param_2 + 0xd0)) == iVar1) {
          bVar8 = piVar3[-0x30] == *(int *)(param_2 + 0x30);
        }
        else {
          bVar8 = *(int *)(lVar7 + 0x5c) == iVar1;
        }
        if (bVar8) {
          return uVar6;
        }
      }
    }
    uVar6 = (uint64_t)((int)uVar6 + 1);
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 0x7e;
    if (4 < (int64_t)uVar5) {
      return 0xffffffff;
    }
  } while( true );
}





// 函数: void FUN_180537fc0(int64_t param_1,float param_2,float param_3)
void FUN_180537fc0(int64_t param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0x14);
  if (fVar1 != 0.0) {
    fVar5 = param_2 * 0.1;
    fVar3 = ABS(fVar1);
    if (fVar3 <= fVar5) {
      *(int32_t *)(param_1 + 0x14) = 0;
      *(int32_t *)(param_1 + 0x1c) = 0;
    }
    else {
      fVar2 = param_2 * param_3;
      if (1.0 <= fVar2) {
        fVar2 = 1.0;
      }
      fVar4 = fVar2 + *(float *)(param_1 + 0x1c);
      if (fVar4 <= fVar5) {
        fVar4 = fVar5;
      }
      fVar5 = fVar4 / fVar3;
      if (fVar2 <= fVar4 / fVar3) {
        fVar5 = fVar2;
      }
      *(float *)(param_1 + 0x1c) = fVar5 * fVar3;
      *(float *)(param_1 + 0x14) = (1.0 - fVar5) * fVar1;
    }
  }
  fVar1 = *(float *)(param_1 + 0x18);
  if (fVar1 != 0.0) {
    fVar3 = param_2 * 0.1;
    fVar5 = ABS(fVar1);
    if (fVar3 < fVar5) {
      param_2 = param_2 * param_3;
      if (1.0 <= param_2) {
        param_2 = 1.0;
      }
      fVar2 = param_2 + *(float *)(param_1 + 0x20);
      if (fVar2 <= fVar3) {
        fVar2 = fVar3;
      }
      fVar3 = fVar2 / fVar5;
      if (param_2 <= fVar2 / fVar5) {
        fVar3 = param_2;
      }
      *(float *)(param_1 + 0x20) = fVar3 * fVar5;
      *(float *)(param_1 + 0x18) = (1.0 - fVar3) * fVar1;
      return;
    }
    *(int32_t *)(param_1 + 0x18) = 0;
    *(int32_t *)(param_1 + 0x20) = 0;
  }
  return;
}





// 函数: void FUN_1805380e0(int64_t param_1,float param_2)
void FUN_1805380e0(int64_t param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (*(float *)(param_1 + 0x10) - param_2) + *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x14) = fVar1;
  if (fVar1 <= 3.1415927) {
    if (-3.1415927 <= fVar1) goto LAB_180538125;
    fVar1 = fVar1 + 6.2831855;
  }
  else {
    fVar1 = fVar1 - 6.2831855;
  }
  *(float *)(param_1 + 0x14) = fVar1;
LAB_180538125:
  *(float *)(param_1 + 0x10) = param_2;
                    // WARNING: Subroutine does not return
  AdvancedSystemController(param_2);
}





// 函数: void FUN_180538160(int64_t param_1,uint *param_2)
void FUN_180538160(int64_t param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)atan2f(*param_2 ^ 0x80000000,param_2[1]);
  fVar2 = (*(float *)(param_1 + 0x10) - fVar1) + *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x14) = fVar2;
  if (fVar2 <= 3.1415927) {
    if (-3.1415927 <= fVar2) goto LAB_1805381c1;
    fVar2 = fVar2 + 6.2831855;
  }
  else {
    fVar2 = fVar2 - 6.2831855;
  }
  *(float *)(param_1 + 0x14) = fVar2;
LAB_1805381c1:
  *(float *)(param_1 + 0x10) = fVar1;
                    // WARNING: Subroutine does not return
  AdvancedSystemController(fVar1);
}





// 函数: void FUN_180538220(void)
void FUN_180538220(void)

{
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



