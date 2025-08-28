#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part665.c - 14 个函数

// 函数: void FUN_18064a7f0(uint64_t *param_1,int64_t param_2)
void FUN_18064a7f0(uint64_t *param_1,int64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  
  uVar4 = *param_1;
  if (uVar4 == 0) {
    *param_1 = 0;
    return;
  }
  if (uVar4 == 0xffffffffffffffff) {
    FUN_1806491b0(param_2,0x400000);
    *param_1 = 0;
    return;
  }
  lVar9 = 0;
  uVar8 = render_system_control_config;
  do {
    lVar7 = 0;
    for (uVar3 = uVar4; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
      lVar7 = lVar7 + 1;
    }
    if (lVar7 != 0) {
      lVar2 = lVar9 * 0x10000 + param_2;
      if ((lVar7 * 0x10000 != 0) && (lVar2 != 0)) {
        uVar4 = uVar8 - 1;
        if ((uVar4 & uVar8) == 0) {
          uVar5 = ~uVar4 & uVar4 + lVar2;
        }
        else {
          uVar5 = ((uVar4 + lVar2) / uVar8) * uVar8;
        }
        uVar6 = lVar7 * 0x10000 + lVar2;
        if ((uVar4 & uVar8) == 0) {
          uVar6 = ~uVar4 & uVar6;
        }
        else {
          uVar6 = (uVar6 / uVar8) * uVar8;
        }
        lVar2 = uVar6 - uVar5;
        if (0 < lVar2) {
          func_0x000180646ff0(&system_counter_ede0,lVar7 * -0x10000);
          iVar1 = VirtualFree(uVar5,lVar2,0x4000);
          uVar8 = render_system_control_config;
          if ((iVar1 == 0) && (iVar1 = GetLastError(), uVar8 = render_system_control_config, iVar1 != 0)) {
            FUN_180650340(&unknown_var_8392_ptr,&unknown_var_8448_ptr,uVar5,lVar2,iVar1);
            uVar8 = render_system_control_config;
          }
        }
      }
    }
    uVar4 = uVar3 >> 1;
    lVar9 = lVar9 + 1 + lVar7;
  } while (1 < uVar3);
  *param_1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064a83d(void)
void FUN_18064a83d(void)

{
  uint64_t uVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t unaff_RBX;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t in_R9;
  uint64_t *unaff_R12;
  int64_t unaff_R13;
  int64_t lVar8;
  
  lVar8 = 0;
  do {
    lVar7 = 0;
    for (uVar4 = unaff_RBX; (uVar4 & 1) != 0; uVar4 = uVar4 >> 1) {
      lVar7 = lVar7 + 1;
    }
    if (lVar7 != 0) {
      lVar3 = lVar8 * 0x10000 + unaff_R13;
      if ((lVar7 * 0x10000 != 0) && (lVar3 != 0)) {
        uVar1 = in_R9 - 1;
        if ((uVar1 & in_R9) == 0) {
          uVar5 = ~uVar1 & uVar1 + lVar3;
        }
        else {
          uVar5 = ((uVar1 + lVar3) / in_R9) * in_R9;
        }
        uVar6 = lVar7 * 0x10000 + lVar3;
        if ((uVar1 & in_R9) == 0) {
          uVar6 = ~uVar1 & uVar6;
        }
        else {
          uVar6 = (uVar6 / in_R9) * in_R9;
        }
        lVar3 = uVar6 - uVar5;
        if (0 < lVar3) {
          func_0x000180646ff0(&system_counter_ede0,lVar7 * -0x10000);
          iVar2 = VirtualFree(uVar5,lVar3,0x4000);
          in_R9 = render_system_control_config;
          if ((iVar2 == 0) && (iVar2 = GetLastError(), in_R9 = render_system_control_config, iVar2 != 0)) {
            FUN_180650340(&unknown_var_8392_ptr,&unknown_var_8448_ptr,uVar5,lVar3,iVar2);
            in_R9 = render_system_control_config;
          }
        }
      }
    }
    unaff_RBX = uVar4 >> 1;
    lVar8 = lVar8 + 1 + lVar7;
  } while (1 < uVar4);
  *unaff_R12 = 0;
  return;
}





// 函数: void FUN_18064a98a(uint64_t *param_1)
void FUN_18064a98a(uint64_t *param_1)

{
  *param_1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064a9a0(int64_t param_1)
void FUN_18064a9a0(int64_t param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  bool bVar12;
  int64_t lStackX_8;
  int64_t lStackX_10;
  
  lStackX_8 = param_1;
  QueryPerformanceCounter(&lStackX_8);
  lVar1 = lStackX_8;
  if (render_system_config_config == 0) {
    QueryPerformanceFrequency(&lStackX_10);
    render_system_config_config = lStackX_10 / 1000;
    if (render_system_config_config == 0) {
      render_system_config_config = 1;
    }
  }
  uVar3 = lVar1 / render_system_config_config;
  uVar5 = uVar3;
  if (uVar3 == 0) {
    uVar5 = 0x11;
  }
  uVar5 = (uVar5 >> 0x1e ^ uVar5) * -0x40a7b892e31b1a47;
  uVar5 = (uVar5 >> 0x1b ^ uVar5) * -0x6b2fb644ecceee15;
  uVar5 = (uint64_t)(((uint)(uVar5 >> 0x1f) ^ (uint)uVar5) & 0x3ff);
  uVar10 = 0;
  uVar7 = uVar10;
  uVar11 = uVar10;
  do {
    uVar8 = uVar10;
    if (uVar5 < 0x400) {
      uVar8 = uVar5;
    }
    lVar1 = uVar8 * 0x28;
    if ((*(int64_t *)(lVar1 + 0x180c9eba0) != 0) &&
       (*(int64_t *)(lVar1 + 0x180c9eba0) <= (int64_t)uVar3)) {
      uVar11 = uVar11 + 1;
      uVar9 = 1L << ((byte)uVar8 & 0x3f);
      uVar6 = uVar8 >> 6;
      uVar5 = *(uint64_t *)(uVar6 * 8 + 0x180bfbfc0);
      do {
        puVar2 = (uint64_t *)(uVar6 * 8 + 0x180bfbfc0);
        LOCK();
        uVar4 = *puVar2;
        bVar12 = uVar5 == uVar4;
        if (bVar12) {
          *puVar2 = uVar5 | uVar9;
          uVar4 = uVar5;
        }
        UNLOCK();
        uVar5 = uVar4;
      } while (!bVar12);
      if ((uVar9 & uVar4) == 0) {
        if ((*(int64_t *)(lVar1 + 0x180c9eba0) != 0) &&
           (*(int64_t *)(lVar1 + 0x180c9eba0) <= (int64_t)uVar3)) {
          *(uint64_t *)(lVar1 + 0x180c9eba0) = 0;
          while (render_system_config != 0) {
            _Thrd_yield();
          }
          FUN_18064a7f0(lVar1 + 0x180c9eb98,*(uint64_t *)(lVar1 + 0x180c9eb80));
        }
        LOCK();
        puVar2 = (uint64_t *)(uVar6 * 8 + 0x180bfbfc0);
        *puVar2 = *puVar2 & ~uVar9;
        UNLOCK();
      }
      if (4 < uVar11) {
        return;
      }
    }
    uVar7 = uVar7 + 1;
    uVar5 = uVar8 + 1;
    if (0xf < uVar7) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18064ab80(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
                       char param_5,char param_6,int64_t param_7)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t in_RAX;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  bool bVar11;
  int64_t alStack_28 [2];
  
  if ((param_2 == 0x400000) && ((param_1 & 0x3fffff) == 0)) {
    if (render_system_data_config != 1) {
      FUN_180646f40();
    }
    FUN_18064a9a0();
    in_RAX = 0;
    uVar10 = 0;
    do {
      uVar8 = 0;
      if (in_RAX < 0x10) {
        uVar8 = in_RAX;
      }
      uVar2 = *(uint64_t *)(uVar8 * 8 + 0x180ca8c00);
      if ((uVar2 != 0xffffffffffffffff) && (uVar5 = ~uVar2, uVar5 != 0)) {
        uVar9 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
        uVar5 = 1L << ((byte)uVar9 & 0x3f);
        uVar9 = uVar9 & 0xffffffff;
        while (uVar9 < 0x40) {
          if ((uVar2 & uVar5) == 0) {
            puVar1 = (uint64_t *)(uVar8 * 8 + 0x180ca8c00);
            LOCK();
            uVar6 = *puVar1;
            bVar11 = uVar2 == uVar6;
            if (bVar11) {
              *puVar1 = uVar5 | uVar2;
              uVar6 = uVar2;
            }
            UNLOCK();
            uVar2 = uVar6;
            if (bVar11) {
              uVar9 = uVar8 * 0x40 + uVar9;
              *(uint64_t *)(uVar9 * 0x28 + 0x180c9eb80) = param_1;
              lVar7 = uVar9 * 0x28;
              *(char *)(lVar7 + 0x180c9eb90) = param_6;
              *(uint64_t *)(lVar7 + 0x180c9eb88) = param_3;
              *(uint64_t *)(lVar7 + 0x180c9eba0) = 0;
              *(int64_t *)(lVar7 + 0x180c9eb98) = param_4;
              if (((param_4 != 0) && (param_5 == '\0')) && (param_6 == '\0')) {
                if (render_system_control_config == 0) {
                  FUN_180650490(&system_counter_bed0);
                }
                if (render_system_control_config != 0) {
                  iVar4 = FUN_18064ff90(0x10);
                  if (iVar4 == 0) {
                    while (render_system_config != 0) {
                      _Thrd_yield();
                    }
                    FUN_18064a7f0(lVar7 + 0x180c9eb98,param_1);
                  }
                  else {
                    QueryPerformanceCounter(&param_7);
                    lVar3 = param_7;
                    if (render_system_config_config == 0) {
                      QueryPerformanceFrequency(alStack_28);
                      render_system_config_config = alStack_28[0] / 1000;
                      if (alStack_28[0] / 1000 == 0) {
                        render_system_config_config = 1;
                      }
                    }
                    *(int64_t *)(lVar7 + 0x180c9eba0) = lVar3 / render_system_config_config + (int64_t)iVar4;
                  }
                }
              }
              lVar7 = 0x180bfbfc0;
              if (param_5 != '\0') {
                lVar7 = 0x180bfbd00;
              }
              LOCK();
              puVar1 = (uint64_t *)(lVar7 + (uVar9 >> 6) * 8);
              *puVar1 = *puVar1 & ~(1L << ((byte)uVar9 & 0x3f));
              UNLOCK();
              return CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
            }
          }
          else {
            uVar9 = uVar9 + 1;
            uVar5 = uVar5 * 2;
          }
        }
      }
      uVar10 = uVar10 + 1;
      in_RAX = uVar8 + 1;
    } while (uVar10 < 0x10);
  }
  return in_RAX & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18064ac5c(void)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t unaff_RBX;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t unaff_R15;
  int64_t lStackX_20;
  char in_stack_00000070;
  char in_stack_00000078;
  int64_t in_stack_00000080;
  
  *(uint64_t *)(in_R11 + 0xc9eb80 + unaff_RDI * 0x28) = unaff_R12;
  lVar4 = in_R11 + 0xc9eb80 + unaff_RDI * 0x28;
  *(char *)(lVar4 + 0x10) = in_stack_00000078;
  *(uint64_t *)(lVar4 + 8) = unaff_RBX;
  *(uint64_t *)(lVar4 + 0x20) = 0;
  *(int64_t *)(lVar4 + 0x18) = unaff_RSI;
  if (((unaff_RSI != 0) && (in_stack_00000070 == '\0')) && (in_stack_00000078 == '\0')) {
    if (render_system_control_config == 0) {
      FUN_180650490(&system_counter_bed0);
    }
    if (render_system_control_config != 0) {
      iVar3 = FUN_18064ff90(0x10);
      if (iVar3 == 0) {
        while (render_system_config != 0) {
          _Thrd_yield();
        }
        FUN_18064a7f0(lVar4 + 0x18);
      }
      else {
        QueryPerformanceCounter(&stack0x00000080);
        lVar2 = in_stack_00000080;
        if (render_system_config_config == 0) {
          QueryPerformanceFrequency(&lStackX_20);
          render_system_config_config = lStackX_20 / 1000;
          if (render_system_config_config == 0) {
            render_system_config_config = unaff_R15;
          }
        }
        *(int64_t *)(lVar4 + 0x20) = lVar2 / render_system_config_config + (int64_t)iVar3;
      }
    }
  }
  lVar4 = 0x180bfbfc0;
  if (in_stack_00000070 != '\0') {
    lVar4 = 0x180bfbd00;
  }
  LOCK();
  puVar1 = (uint64_t *)(lVar4 + (unaff_RDI >> 6) * 8);
  *puVar1 = *puVar1 & ~(unaff_R15 << ((byte)unaff_RDI & 0x3f));
  UNLOCK();
  return CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18064acf4(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t unaff_RBX;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t in_R10;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t unaff_R15;
  bool bVar6;
  int64_t lStackX_20;
  char in_stack_00000070;
  char in_stack_00000078;
  int64_t in_stack_00000080;
  
  do {
    param_3 = param_3 + 1;
    param_2 = param_2 * 2;
    while( true ) {
      for (; 0x3f < param_3; param_3 = param_3 & 0xffffffff) {
        do {
          in_R10 = in_R10 + 1;
          uVar4 = unaff_RDI + 1;
          if (0xf < in_R10) {
            return uVar4 & 0xffffffffffffff00;
          }
          unaff_RDI = 0;
          if (uVar4 < 0x10) {
            unaff_RDI = uVar4;
          }
          param_4 = *(uint64_t *)(in_R11 + 0xca8c00 + unaff_RDI * 8);
        } while ((param_4 == 0xffffffffffffffff) || (uVar4 = ~param_4, uVar4 == 0));
        param_3 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> param_3 & 1) == 0; param_3 = param_3 + 1) {
          }
        }
        param_2 = unaff_R15 << ((byte)param_3 & 0x3f);
      }
      if ((param_4 & param_2) != 0) break;
      puVar1 = (uint64_t *)(in_R11 + 0xca8c00 + unaff_RDI * 8);
      LOCK();
      uVar4 = *puVar1;
      bVar6 = param_4 == uVar4;
      if (bVar6) {
        *puVar1 = param_2 | param_4;
        uVar4 = param_4;
      }
      UNLOCK();
      param_4 = uVar4;
      if (bVar6) {
        param_3 = unaff_RDI * 0x40 + param_3;
        *(uint64_t *)(in_R11 + 0xc9eb80 + param_3 * 0x28) = unaff_R12;
        lVar5 = in_R11 + 0xc9eb80 + param_3 * 0x28;
        *(char *)(lVar5 + 0x10) = in_stack_00000078;
        *(uint64_t *)(lVar5 + 8) = unaff_RBX;
        *(uint64_t *)(lVar5 + 0x20) = 0;
        *(int64_t *)(lVar5 + 0x18) = unaff_RSI;
        if (((unaff_RSI != 0) && (in_stack_00000070 == '\0')) && (in_stack_00000078 == '\0')) {
          if (render_system_control_config == 0) {
            FUN_180650490(&system_counter_bed0);
          }
          if (render_system_control_config != 0) {
            iVar3 = FUN_18064ff90(0x10);
            if (iVar3 == 0) {
              while (render_system_config != 0) {
                _Thrd_yield();
              }
              FUN_18064a7f0(lVar5 + 0x18);
            }
            else {
              QueryPerformanceCounter(&stack0x00000080);
              lVar2 = in_stack_00000080;
              if (render_system_config_config == 0) {
                QueryPerformanceFrequency(&lStackX_20);
                render_system_config_config = lStackX_20 / 1000;
                if (render_system_config_config == 0) {
                  render_system_config_config = unaff_R15;
                }
              }
              *(int64_t *)(lVar5 + 0x20) = lVar2 / render_system_config_config + (int64_t)iVar3;
            }
          }
        }
        lVar5 = 0x180bfbfc0;
        if (in_stack_00000070 != '\0') {
          lVar5 = 0x180bfbd00;
        }
        LOCK();
        puVar1 = (uint64_t *)(lVar5 + (param_3 >> 6) * 8);
        *puVar1 = *puVar1 & ~(unaff_R15 << ((byte)param_3 & 0x3f));
        UNLOCK();
        return CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
      }
    }
  } while( true );
}



uint64_t FUN_18064ad2b(void)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t unaff_RDI;
  int64_t unaff_R14;
  int64_t unaff_R15;
  char in_stack_00000070;
  
  FUN_18064a7f0(unaff_R14 + 0x18);
  lVar2 = 0x180bfbfc0;
  if (in_stack_00000070 != '\0') {
    lVar2 = 0x180bfbd00;
  }
  LOCK();
  puVar1 = (uint64_t *)(lVar2 + (unaff_RDI >> 6) * 8);
  *puVar1 = *puVar1 & ~(unaff_R15 << ((byte)unaff_RDI & 0x3f));
  UNLOCK();
  return CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
}





// 函数: void FUN_18064ae40(int param_1,int64_t param_2)
void FUN_18064ae40(int param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  lVar2 = (int64_t)param_1;
  uVar1 = lVar2 >> 0x3f & 0xfffffffffffffffe;
  func_0x000180646ff0(*(uint64_t *)(param_2 + 0x398),uVar1 + 1);
  *(int64_t *)(param_2 + 0x360) = *(int64_t *)(param_2 + 0x360) + uVar1 + 1;
  if (*(uint64_t *)(param_2 + 0x368) < *(uint64_t *)(param_2 + 0x360)) {
    *(uint64_t *)(param_2 + 0x368) = *(uint64_t *)(param_2 + 0x360);
  }
  *(int64_t *)(param_2 + 0x370) = *(int64_t *)(param_2 + 0x370) + lVar2;
  if (*(uint64_t *)(param_2 + 0x378) < *(uint64_t *)(param_2 + 0x370)) {
    *(uint64_t *)(param_2 + 0x378) = *(uint64_t *)(param_2 + 0x370);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064aeb0(uint64_t *param_1,uint64_t param_2)
void FUN_18064aeb0(uint64_t *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  char cVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  bool bVar8;
  
  LOCK();
  param_1[0xe] = 0;
  UNLOCK();
  if (param_1 < (uint64_t *)0x140000000000) {
    if ((uint64_t)param_1 >> 0x1c != 0) {
      lVar7 = ((uint64_t)param_1 >> 0x1c) * 8;
      uVar6 = *(uint64_t *)(lVar7 + 0x180ca8c80);
      do {
        puVar1 = (uint64_t *)(lVar7 + 0x180ca8c80);
        LOCK();
        uVar4 = *puVar1;
        bVar8 = uVar6 == uVar4;
        if (bVar8) {
          *puVar1 = uVar6 & ~(1L << (uint64_t)((uint)((uint64_t)param_1 >> 0x16) & 0x3f));
          uVar4 = uVar6;
        }
        UNLOCK();
        uVar6 = uVar4;
      } while (!bVar8);
    }
  }
  FUN_18064ae40((int)param_1[0xb] * -0x10000,param_2);
  uVar6 = param_1[0xb] << 0x10;
  if ((uVar6 == 0x400000) &&
     (cVar3 = FUN_18064ab80(param_1,0x400000,*param_1,param_1[4],
                            *(int8_t *)((int64_t)param_1 + 9),(char)param_1[1]), cVar3 != '\0')
     ) {
    return;
  }
  uVar4 = param_1[4];
  if (uVar4 != 0xffffffffffffffff) {
    lVar7 = 0;
    if (uVar4 == 0) goto LAB_18064aff4;
    do {
      lVar5 = lVar7 + 1;
      if ((uVar4 & 1) == 0) {
        lVar5 = lVar7;
      }
      bVar8 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
      lVar7 = lVar5;
    } while (bVar8);
    uVar6 = (uVar6 >> 6) * lVar5;
  }
  if (((uVar6 != 0) && ((char)param_1[1] == '\0')) && (lVar7 = -uVar6, lVar7 != 0)) {
    LOCK();
    UNLOCK();
    lVar5 = render_system_data_config;
    do {
      if (render_system_data_config + lVar7 <= lVar5) break;
      LOCK();
      bVar8 = lVar5 != render_system_data_config;
      lVar2 = render_system_data_config + lVar7;
      if (bVar8) {
        lVar5 = render_system_data_config;
        lVar2 = render_system_data_config;
      }
      render_system_data_config = lVar2;
      UNLOCK();
    } while (bVar8);
    if (lVar7 == 0 || 0 < (int64_t)uVar6) {
      LOCK();
      render_system_data_config = render_system_data_config + uVar6;
      UNLOCK();
      render_system_data_config = render_system_data_config + lVar7;
    }
    else {
      LOCK();
      render_system_data_config = render_system_data_config + lVar7;
      UNLOCK();
      render_system_data_config = render_system_data_config + lVar7;
    }
  }
LAB_18064aff4:
  while (render_system_config != 0) {
    _Thrd_yield();
  }
  uVar6 = *param_1;
  lVar7 = param_1[0xb] * 0x10000;
  if (lVar7 != 0) {
    if (uVar6 == 0) {
      func_0x000180648f70(param_1,lVar7,(char)param_1[1]);
    }
    else {
      lVar5 = *(int64_t *)((uVar6 & 0xff) * 8 + 0x180c9e938);
      if (lVar5 == 0) {
        FUN_1806503d0(0x16,&unknown_var_8208_ptr,param_1,lVar7,uVar6);
      }
      else if (uVar6 >> 0xe < *(uint64_t *)(lVar5 + 0x10)) {
        if (*(char *)(lVar5 + 0x1d) == '\0') {
          FUN_1806491b0(param_1,lVar7 + 0x3fffffU & 0xffffffffffc00000);
          FUN_1806497b0(*(uint64_t *)(lVar5 + 0x30));
        }
        cVar3 = FUN_1806497b0(lVar5 + 0x38);
        if (cVar3 == '\0') {
          FUN_1806503d0(0xb,&unknown_var_8520_ptr,param_1,lVar7);
        }
      }
      else {
        FUN_1806503d0(0x16,&unknown_var_8288_ptr,param_1,lVar7,uVar6);
      }
    }
  }
  return;
}





// 函数: void FUN_18064b036(uint64_t param_1)
void FUN_18064b036(uint64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  int64_t unaff_R14;
  
  lVar1 = *(int64_t *)(unaff_R14 + 0xc9e938 + (param_1 & 0xff) * 8);
  if (lVar1 == 0) {
    FUN_1806503d0(0x16,&unknown_var_8208_ptr);
  }
  else if (param_1 >> 0xe < *(uint64_t *)(lVar1 + 0x10)) {
    if (*(char *)(lVar1 + 0x1d) == '\0') {
      FUN_1806491b0();
      FUN_1806497b0(*(uint64_t *)(lVar1 + 0x30));
    }
    cVar2 = FUN_1806497b0(lVar1 + 0x38);
    if (cVar2 == '\0') {
      FUN_1806503d0(0xb,&unknown_var_8520_ptr);
    }
  }
  else {
    FUN_1806503d0(0x16,&unknown_var_8288_ptr);
  }
  return;
}





// 函数: void FUN_18064b0f7(void)
void FUN_18064b0f7(void)

{
  return;
}



uint64_t FUN_18064b110(int64_t param_1,char param_2,uint64_t param_3,uint64_t param_4,
                       int64_t *param_5,uint64_t *param_6)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  if ((param_4 < 0x400001) &&
     (param_3 < (uint64_t)(*(int64_t *)(param_1 + 0x58) * 0x10000 + param_1))) {
    uVar5 = param_3 - param_1;
    uVar1 = param_4 + uVar5;
    if (param_2 == '\0') {
      uVar1 = uVar1 + 0xffff;
    }
    else {
      uVar5 = uVar5 + 0xffff;
    }
    uVar6 = uVar5 & 0xffffffffffff0000;
    uVar1 = uVar1 & 0xffffffffffff0000;
    uVar2 = 0;
    *param_5 = param_1 + uVar6;
    uVar3 = uVar1 - uVar6;
    if (uVar1 <= uVar6) {
      uVar3 = uVar2;
    }
    *param_6 = uVar3;
    if (uVar3 != 0) {
      uVar4 = uVar3 >> 0x10;
      if (0x40 < uVar4 + (uVar5 >> 0x10)) {
        FUN_180650340(&unknown_var_8608_ptr,uVar5 >> 0x10,uVar4,uVar6,uVar1,param_3,param_4);
      }
      if (uVar4 == 0x40) {
        return 0xffffffffffffffff;
      }
      if (uVar4 != 0) {
        uVar2 = (1L << ((byte)(uVar3 >> 0x10) & 0x3f)) + -1 << ((byte)(uVar6 >> 0x10) & 0x3f);
      }
      return uVar2;
    }
  }
  return 0;
}



int64_t FUN_18064b19a(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t unaff_RBX;
  uint64_t unaff_RDI;
  uint64_t uVar1;
  uint64_t uStack0000000000000028;
  
  uVar1 = unaff_RDI >> 0x10;
  if (0x40 < uVar1 + (param_4 >> 0x10)) {
    uStack0000000000000028 = param_3;
    FUN_180650340(&unknown_var_8608_ptr,param_4 >> 0x10,uVar1,param_4,param_2);
  }
  if (uVar1 == 0x40) {
    return -1;
  }
  if (uVar1 != 0) {
    unaff_RBX = (1L << ((byte)(unaff_RDI >> 0x10) & 0x3f)) + -1 << ((byte)(param_4 >> 0x10) & 0x3f);
  }
  return unaff_RBX;
}



int64_t FUN_18064b1f5(void)

{
  int64_t unaff_RBX;
  byte unaff_SIL;
  int64_t unaff_RDI;
  
  if (unaff_RDI != 0) {
    unaff_RBX = (1L << ((byte)unaff_RDI & 0x3f)) + -1 << (unaff_SIL & 0x3f);
  }
  return unaff_RBX;
}



uint64_t FUN_18064b221(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t
FUN_18064b230(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
             int64_t param_5)

{
  uint64_t uVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  int8_t auStackX_20 [8];
  uint64_t uStack_28;
  int64_t lStack_20;
  int64_t alStack_18 [2];
  
  if (((param_4 != 0) &&
      (uVar5 = FUN_18064b110(param_1,param_2 ^ 1,param_3,param_4,&uStack_28,&param_5), uVar5 != 0))
     && (param_5 != 0)) {
    uVar1 = *(uint64_t *)(param_1 + 0x20);
    if ((char)param_2 == '\0') {
      if ((uVar1 & uVar5) != 0) {
        lVar6 = func_0x000180646ef0(uVar1 & uVar5,0x400000);
        lVar6 = param_5 - lVar6;
        if (lVar6 != 0) {
          LOCK();
          UNLOCK();
          lVar8 = render_system_data_config;
          do {
            if (render_system_data_config + lVar6 <= lVar8) break;
            LOCK();
            bVar9 = lVar8 != render_system_data_config;
            lVar7 = render_system_data_config + lVar6;
            if (bVar9) {
              lVar8 = render_system_data_config;
              lVar7 = render_system_data_config;
            }
            render_system_data_config = lVar7;
            UNLOCK();
          } while (bVar9);
          if (lVar6 < 1) {
            LOCK();
            render_system_data_config = render_system_data_config - lVar6;
            UNLOCK();
            render_system_data_config = render_system_data_config + lVar6;
          }
          else {
            LOCK();
            render_system_data_config = render_system_data_config + lVar6;
            UNLOCK();
            render_system_data_config = render_system_data_config + lVar6;
          }
        }
        if (*(char *)(param_1 + 0xb) != '\0') {
          FUN_1806491b0(uStack_28,param_5);
        }
        *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(param_1 + 0x20) & ~uVar5;
      }
    }
    else {
      if ((uVar1 & uVar5) != uVar5) {
        auStackX_20[0] = 0;
        lVar6 = func_0x000180646ef0(~uVar1 & uVar5,0x400000);
        lVar8 = -lVar6;
        if (lVar8 != 0) {
          LOCK();
          UNLOCK();
          lVar7 = render_system_data_config;
          do {
            if (render_system_data_config + lVar8 <= lVar7) break;
            LOCK();
            bVar9 = lVar7 != render_system_data_config;
            lVar2 = render_system_data_config + lVar8;
            if (bVar9) {
              lVar7 = render_system_data_config;
              lVar2 = render_system_data_config;
            }
            render_system_data_config = lVar2;
            UNLOCK();
          } while (bVar9);
          if (lVar8 == 0 || 0 < lVar6) {
            LOCK();
            render_system_data_config = render_system_data_config + lVar6;
            UNLOCK();
            render_system_data_config = render_system_data_config + lVar8;
          }
          else {
            LOCK();
            render_system_data_config = render_system_data_config + lVar8;
            UNLOCK();
            render_system_data_config = render_system_data_config + lVar8;
          }
        }
        cVar3 = FUN_180649070(uStack_28,param_5,auStackX_20);
        if (cVar3 == '\0') {
          return 0;
        }
        *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(param_1 + 0x20) | uVar5;
      }
      if ((*(uint64_t *)(param_1 + 0x18) & uVar5) != 0) {
        QueryPerformanceCounter(&lStack_20);
        if (render_system_config_config == 0) {
          QueryPerformanceFrequency(alStack_18);
          render_system_config_config = alStack_18[0] / 1000;
          if (render_system_config_config == 0) {
            render_system_config_config = 1;
          }
        }
        lVar6 = lStack_20 / render_system_config_config;
        iVar4 = FUN_18064ff90(0xf,lStack_20 % render_system_config_config);
        *(int64_t *)(param_1 + 0x10) = iVar4 + lVar6;
      }
    }
    *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_1 + 0x18) & ~uVar5;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064b460(int64_t param_1,char param_2,int64_t param_3)
void FUN_18064b460(int64_t param_1,char param_2,int64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lStackX_8;
  int64_t lStackX_18;
  
  if ((*(char *)(param_1 + 0xb) != '\0') && (*(int64_t *)(param_1 + 0x18) != 0)) {
    lStackX_18 = param_3;
    QueryPerformanceCounter(&lStackX_18);
    lVar3 = lStackX_18;
    if (render_system_config_config == 0) {
      QueryPerformanceFrequency(&lStackX_8);
      render_system_config_config = lStackX_8 / 1000;
      if (render_system_config_config == 0) {
        render_system_config_config = 1;
      }
    }
    if ((param_2 != '\0') || (*(int64_t *)(param_1 + 0x10) <= lVar3 / render_system_config_config)) {
      uVar2 = *(uint64_t *)(param_1 + 0x18);
      lVar3 = 0;
      *(uint64_t *)(param_1 + 0x10) = 0;
      *(uint64_t *)(param_1 + 0x18) = 0;
      if (uVar2 != 0) {
        do {
          lVar4 = 0;
          for (uVar1 = uVar2; (uVar1 & 1) != 0; uVar1 = uVar1 >> 1) {
            lVar4 = lVar4 + 1;
          }
          if (lVar4 != 0) {
            FUN_18064b230(param_1,0,lVar3 * 0x10000 + param_1,lVar4 << 0x10);
          }
          uVar2 = uVar1 >> 1;
          lVar3 = lVar3 + 1 + lVar4;
        } while (1 < uVar1);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064b48b(void)
void FUN_18064b48b(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t unaff_RBP;
  char unaff_DIL;
  int64_t lVar3;
  int64_t in_stack_00000050;
  int64_t in_stack_00000060;
  
  QueryPerformanceCounter();
  if (render_system_config_config == 0) {
    QueryPerformanceFrequency(&stack0x00000050);
    render_system_config_config = in_stack_00000050 / 1000;
    if (render_system_config_config == 0) {
      render_system_config_config = 1;
    }
  }
  if ((unaff_DIL != '\0') || (*(int64_t *)(unaff_RBP + 0x10) <= in_stack_00000060 / render_system_config_config)
     ) {
    uVar2 = *(uint64_t *)(unaff_RBP + 0x18);
    *(uint64_t *)(unaff_RBP + 0x10) = 0;
    *(uint64_t *)(unaff_RBP + 0x18) = 0;
    if (uVar2 != 0) {
      do {
        lVar3 = 0;
        for (uVar1 = uVar2; (uVar1 & 1) != 0; uVar1 = uVar1 >> 1) {
          lVar3 = lVar3 + 1;
        }
        if (lVar3 != 0) {
          FUN_18064b230();
        }
        uVar2 = uVar1 >> 1;
      } while (1 < uVar1);
    }
  }
  return;
}





// 函数: void FUN_18064b4fd(void)
void FUN_18064b4fd(void)

{
  uint64_t unaff_RBX;
  uint64_t uVar1;
  int64_t unaff_RBP;
  int64_t lVar2;
  
  *(uint64_t *)(unaff_RBP + 0x10) = 0;
  *(uint64_t *)(unaff_RBP + 0x18) = 0;
  if (unaff_RBX != 0) {
    do {
      lVar2 = 0;
      for (uVar1 = unaff_RBX; (uVar1 & 1) != 0; uVar1 = uVar1 >> 1) {
        lVar2 = lVar2 + 1;
      }
      if (lVar2 != 0) {
        FUN_18064b230();
      }
      unaff_RBX = uVar1 >> 1;
    } while (1 < uVar1);
  }
  return;
}





// 函数: void FUN_18064b519(void)
void FUN_18064b519(void)

{
  uint64_t unaff_RBX;
  uint64_t uVar1;
  int64_t lVar2;
  
  do {
    lVar2 = 0;
    for (uVar1 = unaff_RBX; (uVar1 & 1) != 0; uVar1 = uVar1 >> 1) {
      lVar2 = lVar2 + 1;
    }
    if (lVar2 != 0) {
      FUN_18064b230();
    }
    unaff_RBX = uVar1 >> 1;
  } while (1 < uVar1);
  return;
}





// 函数: void FUN_18064b572(void)
void FUN_18064b572(void)

{
  return;
}





// 函数: void FUN_18064b577(void)
void FUN_18064b577(void)

{
  return;
}





