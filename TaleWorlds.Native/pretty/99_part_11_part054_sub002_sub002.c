#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_11_part054_sub002_sub002.c - 1 个函数
// 函数: void function_7b5ca0(void)
void function_7b5ca0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
uint64_t function_7b5fd0(int64_t param_1,uint64_t param_2,uint param_3,int param_4)
{
  int8_t uVar1;
  int8_t uVar2;
  uint uVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t *plVar7;
  bool bVar8;
  int64_t lStackX_8;
  if (param_4 != 0x100) {
    if (param_4 != 2) {
      return 0x13;
    }
    uVar3 = *(uint *)(param_1 + 0x858);
    bVar8 = param_3 < uVar3;
    if (param_3 != uVar3) {
      if (bVar8) {
        function_7b5170(param_1,0);
        uVar3 = *(uint *)(param_1 + 0x858);
      }
      while (uVar3 < param_3) {
        function_7b62e0(param_1,1);
        uVar3 = *(uint *)(param_1 + 0x858);
      }
      if (bVar8) {
        uVar1 = *(int8_t *)(param_1 + 0xbe8);
        uVar2 = *(int8_t *)(param_1 + 0xbe9);
        RenderingSystem_BufferManager0(param_1);
        *(int8_t *)(param_1 + 0xbe8) = uVar1;
        *(int8_t *)(param_1 + 0xbe9) = uVar2;
      }
    }
    return 0;
  }
  function_7b5170(param_1,0);
  iVar6 = 0;
  *(uint *)(param_1 + 0xbfc) = param_3;
  *(uint *)(param_1 + 0xc0c) = param_3;
  plVar7 = (int64_t *)(param_1 + 0x4440);
  do {
    plVar4 = (int64_t *)*plVar7;
    lStackX_8 = 0;
    if (plVar4 != (int64_t *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x120))(plVar4,0,&lStackX_8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (lStackX_8 != 0) {
        function_7603e0();
      }
    }
    iVar6 = iVar6 + 1;
    plVar7 = plVar7 + 1;
  } while (iVar6 < 0x32);
  return 0;
}
uint64_t function_7b6100(int64_t param_1)
{
  if (*(int64_t *)(param_1 + 0x4420) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  memset(param_1 + 0xa90,0,(int64_t)*(int *)(param_1 + 0x3c8) * 5);
}
uint64_t function_7b62e0(int64_t param_1,int8_t param_2)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  int iVar5;
  iVar5 = 0;
  if (*(int *)(param_1 + 0xbec) == 0) {
    uVar3 = *(uint *)(param_1 + 0xc0c);
    uVar4 = (uint64_t)(int)uVar3;
    if (-1 < (int)uVar3) {
      *(uint *)(param_1 + 0xbfc) = uVar3;
      cVar1 = *(char *)(uVar4 + 0x290 + param_1);
      while (cVar1 == -2) {
        uVar3 = (int)uVar4 + 1;
        *(uint *)(param_1 + 0xbfc) = uVar3;
        if (*(int *)(param_1 + 0x8ec) <= (int)uVar3) {
          if (*(char *)(param_1 + 0xbea) == '\0') {
            RenderingSystem_BufferManager0(param_1);
          }
          uVar3 = *(uint *)(param_1 + 0xbd0);
          *(uint *)(param_1 + 0xbfc) = uVar3;
        }
        uVar4 = (uint64_t)uVar3;
        cVar1 = *(char *)((int64_t)(int)uVar3 + 0x290 + param_1);
      }
      if (*(char *)((int64_t)(int)uVar3 + 0x290 + param_1) == -1) {
        *(int *)(param_1 + 0xbfc) = *(int *)(param_1 + 0xbd0);
        *(uint64_t *)(param_1 + 0x4420) =
             *(uint64_t *)
              (*(int64_t *)(param_1 + 0x278) + 8 +
              (uint64_t)*(byte *)((int64_t)*(int *)(param_1 + 0xbd0) + 0x290 + param_1) * 0x10);
      }
    }
    iVar2 = *(int *)(param_1 + 0xc08);
    if ((((-1 < iVar2) && (iVar2 != *(int *)(param_1 + 0xbf8) + 1)) ||
        (-1 < *(int *)(param_1 + 0xc0c))) &&
       (*(uint64_t *)(param_1 + 0x4420) =
             *(uint64_t *)
              (*(int64_t *)(param_1 + 0x278) + 8 +
              (uint64_t)*(byte *)((int64_t)*(int *)(param_1 + 0xbfc) + 0x290 + param_1) * 0x10),
       0 < iVar2)) {
      do {
        function_7b6100(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0xc08));
    }
    if (-1 < *(int *)(param_1 + 0xc08)) {
      *(int *)(param_1 + 0xbf8) = *(int *)(param_1 + 0xc08);
      function_7b6100(param_1);
    }
    *(uint64_t *)(param_1 + 0xc08) = 0xffffffffffffffff;
    function_7b64f0(param_1,param_2);
    if (*(int *)(param_1 + 0xc08) == -1) {
      iVar5 = *(int *)(param_1 + 0xbf8) + 1;
      *(int *)(param_1 + 0xc08) = iVar5;
      if (*(int *)(*(int64_t *)(param_1 + 0x278) +
                  (uint64_t)*(byte *)((int64_t)*(int *)(param_1 + 0xbfc) + 0x290 + param_1) * 0x10
                  ) <= iVar5) {
        iVar5 = *(int *)(param_1 + 0xbfc) + 1;
        *(int *)(param_1 + 0xc0c) = iVar5;
        if (*(int *)(param_1 + 0x8ec) <= iVar5) {
          *(int32_t *)(param_1 + 0xc0c) = *(int32_t *)(param_1 + 0xbd0);
        }
        *(int32_t *)(param_1 + 0xc08) = 0;
      }
    }
  }
  else {
    function_7b64f0(param_1,param_2);
  }
  *(int *)(param_1 + 0xbec) = *(int *)(param_1 + 0xbec) + 1;
  if (*(int *)(param_1 + 0xbf0) + *(int *)(param_1 + 0xc00) + *(int *)(param_1 + 0xc04) <=
      *(int *)(param_1 + 0xbec)) {
    *(uint64_t *)(param_1 + 0xc00) = 0;
    *(int32_t *)(param_1 + 0xbec) = 0;
  }
  *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + *(int *)(param_1 + 0x854);
  return 0;
}
uint64_t function_7b62ec(int64_t param_1,int8_t param_2)
{
  char cVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  uint64_t unaff_RBP;
  iVar5 = (int)unaff_RBP;
  if (*(int *)(param_1 + 0xbec) == iVar5) {
    uVar2 = *(uint *)(param_1 + 0xc0c);
    uVar3 = (uint64_t)(int)uVar2;
    if (-1 < (int)uVar2) {
      *(uint *)(param_1 + 0xbfc) = uVar2;
      cVar1 = *(char *)(uVar3 + 0x290 + param_1);
      while (cVar1 == -2) {
        uVar2 = (int)uVar3 + 1;
        *(uint *)(param_1 + 0xbfc) = uVar2;
        if (*(int *)(param_1 + 0x8ec) <= (int)uVar2) {
          if (*(char *)(param_1 + 0xbea) == (char)unaff_RBP) {
            RenderingSystem_BufferManager0(param_1);
          }
          uVar2 = *(uint *)(param_1 + 0xbd0);
          *(uint *)(param_1 + 0xbfc) = uVar2;
        }
        uVar3 = (uint64_t)uVar2;
        cVar1 = *(char *)((int64_t)(int)uVar2 + 0x290 + param_1);
      }
      if (*(char *)((int64_t)(int)uVar2 + 0x290 + param_1) == -1) {
        *(int *)(param_1 + 0xbfc) = *(int *)(param_1 + 0xbd0);
        *(uint64_t *)(param_1 + 0x4420) =
             *(uint64_t *)
              (*(int64_t *)(param_1 + 0x278) + 8 +
              (uint64_t)*(byte *)((int64_t)*(int *)(param_1 + 0xbd0) + 0x290 + param_1) * 0x10);
      }
    }
    iVar4 = *(int *)(param_1 + 0xc08);
    if (((-1 < iVar4) && (iVar4 != *(int *)(param_1 + 0xbf8) + 1)) ||
       (iVar5 <= *(int *)(param_1 + 0xc0c))) {
      uVar3 = unaff_RBP & 0xffffffff;
      *(uint64_t *)(param_1 + 0x4420) =
           *(uint64_t *)
            (*(int64_t *)(param_1 + 0x278) + 8 +
            (uint64_t)*(byte *)((int64_t)*(int *)(param_1 + 0xbfc) + 0x290 + param_1) * 0x10);
      if (0 < iVar4) {
        do {
          function_7b6100(param_1);
          uVar2 = (int)uVar3 + 1;
          uVar3 = (uint64_t)uVar2;
        } while ((int)uVar2 < *(int *)(param_1 + 0xc08));
      }
    }
    if (-1 < *(int *)(param_1 + 0xc08)) {
      *(int *)(param_1 + 0xbf8) = *(int *)(param_1 + 0xc08);
      function_7b6100(param_1);
    }
    *(uint64_t *)(param_1 + 0xc08) = 0xffffffffffffffff;
    function_7b64f0(param_1,param_2);
    if (*(int *)(param_1 + 0xc08) == -1) {
      iVar4 = *(int *)(param_1 + 0xbf8) + 1;
      *(int *)(param_1 + 0xc08) = iVar4;
      if (*(int *)(*(int64_t *)(param_1 + 0x278) +
                  (uint64_t)*(byte *)((int64_t)*(int *)(param_1 + 0xbfc) + 0x290 + param_1) * 0x10
                  ) <= iVar4) {
        iVar4 = *(int *)(param_1 + 0xbfc) + 1;
        *(int *)(param_1 + 0xc0c) = iVar4;
        if (*(int *)(param_1 + 0x8ec) <= iVar4) {
          *(int32_t *)(param_1 + 0xc0c) = *(int32_t *)(param_1 + 0xbd0);
        }
        *(int *)(param_1 + 0xc08) = iVar5;
      }
    }
  }
  else {
    function_7b64f0(param_1,param_2);
  }
  *(int *)(param_1 + 0xbec) = *(int *)(param_1 + 0xbec) + 1;
  if (*(int *)(param_1 + 0xbf0) + *(int *)(param_1 + 0xc00) + *(int *)(param_1 + 0xc04) <=
      *(int *)(param_1 + 0xbec)) {
    *(uint64_t *)(param_1 + 0xc00) = unaff_RBP;
    *(int *)(param_1 + 0xbec) = iVar5;
  }
  *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + *(int *)(param_1 + 0x854);
  return 0;
}
uint64_t function_7b63c7(uint64_t param_1,int param_2)
{
  int64_t in_RAX;
  int iVar1;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint uVar2;
  uint64_t uVar3;
  uVar3 = unaff_RBP & 0xffffffff;
  *(uint64_t *)(unaff_RBX + 0x4420) =
       *(uint64_t *)
        (*(int64_t *)(unaff_RBX + 0x278) + 8 +
        (uint64_t)*(byte *)(in_RAX + 0x290 + unaff_RBX) * 0x10);
  if (0 < param_2) {
    do {
      function_7b6100();
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((int)uVar2 < *(int *)(unaff_RBX + 0xc08));
  }
  if (-1 < *(int *)(unaff_RBX + 0xc08)) {
    *(int *)(unaff_RBX + 0xbf8) = *(int *)(unaff_RBX + 0xc08);
    function_7b6100();
  }
  *(uint64_t *)(unaff_RBX + 0xc08) = 0xffffffffffffffff;
  function_7b64f0();
  if (*(int *)(unaff_RBX + 0xc08) == -1) {
    iVar1 = *(int *)(unaff_RBX + 0xbf8) + 1;
    *(int *)(unaff_RBX + 0xc08) = iVar1;
    if (*(int *)(*(int64_t *)(unaff_RBX + 0x278) +
                (uint64_t)*(byte *)((int64_t)*(int *)(unaff_RBX + 0xbfc) + 0x290 + unaff_RBX) *
                0x10) <= iVar1) {
      iVar1 = *(int *)(unaff_RBX + 0xbfc) + 1;
      *(int *)(unaff_RBX + 0xc0c) = iVar1;
      if (*(int *)(unaff_RBX + 0x8ec) <= iVar1) {
        *(int32_t *)(unaff_RBX + 0xc0c) = *(int32_t *)(unaff_RBX + 0xbd0);
      }
      *(int *)(unaff_RBX + 0xc08) = (int)unaff_RBP;
    }
  }
  *(int *)(unaff_RBX + 0xbec) = *(int *)(unaff_RBX + 0xbec) + 1;
  if (*(int *)(unaff_RBX + 0xbf0) + *(int *)(unaff_RBX + 0xc00) + *(int *)(unaff_RBX + 0xc04) <=
      *(int *)(unaff_RBX + 0xbec)) {
    *(uint64_t *)(unaff_RBX + 0xc00) = unaff_RBP;
    *(int *)(unaff_RBX + 0xbec) = (int)unaff_RBP;
  }
  *(int *)(unaff_RBX + 0x858) = *(int *)(unaff_RBX + 0x858) + *(int *)(unaff_RBX + 0x854);
  return 0;
}
uint64_t function_7b6407(void)
{
  int iVar1;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  if (-1 < *(int *)(unaff_RBX + 0xc08)) {
    *(int *)(unaff_RBX + 0xbf8) = *(int *)(unaff_RBX + 0xc08);
    function_7b6100();
  }
  *(uint64_t *)(unaff_RBX + 0xc08) = 0xffffffffffffffff;
  function_7b64f0();
  if (*(int *)(unaff_RBX + 0xc08) == -1) {
    iVar1 = *(int *)(unaff_RBX + 0xbf8) + 1;
    *(int *)(unaff_RBX + 0xc08) = iVar1;
    if (*(int *)(*(int64_t *)(unaff_RBX + 0x278) +
                (uint64_t)*(byte *)((int64_t)*(int *)(unaff_RBX + 0xbfc) + 0x290 + unaff_RBX) *
                0x10) <= iVar1) {
      iVar1 = *(int *)(unaff_RBX + 0xbfc) + 1;
      *(int *)(unaff_RBX + 0xc0c) = iVar1;
      if (*(int *)(unaff_RBX + 0x8ec) <= iVar1) {
        *(int32_t *)(unaff_RBX + 0xc0c) = *(int32_t *)(unaff_RBX + 0xbd0);
      }
      *(int *)(unaff_RBX + 0xc08) = (int)unaff_RBP;
    }
  }
  *(int *)(unaff_RBX + 0xbec) = *(int *)(unaff_RBX + 0xbec) + 1;
  if (*(int *)(unaff_RBX + 0xbf0) + *(int *)(unaff_RBX + 0xc00) + *(int *)(unaff_RBX + 0xc04) <=
      *(int *)(unaff_RBX + 0xbec)) {
    *(uint64_t *)(unaff_RBX + 0xc00) = unaff_RBP;
    *(int *)(unaff_RBX + 0xbec) = (int)unaff_RBP;
  }
  *(int *)(unaff_RBX + 0x858) = *(int *)(unaff_RBX + 0x858) + *(int *)(unaff_RBX + 0x854);
  return 0;
}
uint64_t function_7b64c0(void)
{
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0xc00) = unaff_RBP;
  *(int *)(unaff_RBX + 0xbec) = (int)unaff_RBP;
  *(int *)(unaff_RBX + 0x858) = *(int *)(unaff_RBX + 0x858) + *(int *)(unaff_RBX + 0x854);
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7b64f0(int64_t param_1,char param_2)
{
  byte *pbVar1;
  int *piVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  bool bVar7;
  bool bVar8;
  uint64_t *puVar9;
  char cVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  int64_t lVar14;
  uint uVar15;
  int64_t lVar16;
  int64_t *plVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  uint64_t uVar21;
  int *piVar22;
  int64_t lVar23;
  char *pcVar24;
  char *pcVar25;
  byte bVar26;
  bool bVar27;
  float fVar28;
  int iStackX_8;
  int iStack_114;
  int64_t *plStack_110;
  int64_t *plStack_108;
  char *pcStack_100;
  uint *plocal_var_f8;
  bVar8 = false;
  plocal_var_f8 = (uint *)((uint64_t)*(byte *)((int64_t)*(int *)(param_1 + 0xbfc) + 0x290 + param_1)
                        * 0x10 + *(int64_t *)(param_1 + 0x278));
  if (plocal_var_f8 != (uint *)0x0) {
    if ((*(int *)(param_1 + 0xbec) == 0) && (lVar3 = *(int64_t *)(param_1 + 0x288), lVar3 != 0)) {
      lVar16 = (int64_t)(*(int *)(param_1 + 0xbfc) * 0x100 + *(int *)(param_1 + 0xbf8));
      if (*(char *)(lVar16 + lVar3) != '\0') {
        *(int8_t *)(param_1 + 0xbe9) = 1;
        return 0;
      }
      *(int8_t *)(lVar16 + lVar3) = 1;
    }
    iVar11 = *(int *)(param_1 + 0x3c8);
    iStack_114 = 0;
    if (0 < iVar11) {
      pcStack_100 = (char *)0x0;
      do {
        cVar10 = '\0';
        plStack_110 = (int64_t *)0x0;
        iStackX_8._0_1_ = '\0';
        pcVar24 = (char *)((int64_t)pcStack_100 * 5 + 0xa90 + param_1);
        bVar12 = pcVar24[4];
        bVar26 = bVar12 >> 4;
        bVar18 = bVar12 & 0xf;
        if ((pcVar24[3] == '\x13') && (bVar26 == 0xd)) {
          uVar19 = *(uint *)(param_1 + 0xbec);
          pcVar25 = pcStack_100;
          if ((int)(uint)bVar18 <= (int)uVar19) {
            if (uVar19 != 0) goto LAB_1807b667a;
            if (bVar18 != 0) goto LAB_1807b6660;
          }
          goto LAB_1807b7717;
        }
LAB_1807b6660:
        uVar19 = *(uint *)(param_1 + 0xbec);
        if (uVar19 == 0) {
LAB_1807b6688:
          cVar10 = '\x01';
          iStackX_8._0_1_ = '\x01';
        }
        else if ((pcVar24[3] == '\x13') && (bVar26 == 0xd)) {
LAB_1807b667a:
          if ((uVar19 == bVar18) || ((uVar19 == 1 && (bVar18 == 0)))) goto LAB_1807b6688;
        }
        lVar3 = *(int64_t *)(param_1 + 0x3d0 + (int64_t)pcStack_100 * 8);
        plStack_110 = *(int64_t **)(lVar3 + 8);
        plVar17 = (int64_t *)(lVar3 + 8);
        if ((plStack_110 == plVar17) && (*(int64_t **)(lVar3 + 0x10) == plVar17)) {
          system_system_buffer_memory = &system_data_7a80;
          plStack_110 = (int64_t *)0x180be7ac0;
        }
        if (cVar10 != '\0') {
          if ((*(char *)(lVar3 + 0xd8) == '\x12') && (pcVar24[3] != '\x12')) {
            *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + *(int *)(lVar3 + 0xe4);
          }
          *(char *)(lVar3 + 0xd8) = pcVar24[3];
          *(int32_t *)(lVar3 + 0xe4) = 0;
          *(int32_t *)((int64_t)plStack_110 + 0x54) = 0;
          *(int8_t *)((int64_t)plStack_110 + 0x3c) = 0;
          bVar7 = (byte)(*pcVar24 - 1U) < 0xfd;
          if (bVar7) {
            *(char *)(lVar3 + 0xd1) = *pcVar24 + -1;
          }
          if ((pcVar24[1] != '\0') &&
             (*(char *)(lVar3 + 0xd0) = pcVar24[1] + -1, plStack_110 == (int64_t *)0x180be7ac0)) {
            bVar7 = true;
          }
          if (((*(byte *)(param_1 + 0xbe6) & 4) != 0) &&
             (*(int *)(param_1 + 0x8f8) <= (int)(uint)*(byte *)(lVar3 + 0xd0))) {
            bVar7 = false;
          }
          *(char *)(lVar3 + 0xd8) = pcVar24[3];
          *(int8_t *)((int64_t)plStack_110 + 0x3c) = 0;
          bVar27 = false;
          if (-1 < *(char *)(param_1 + 0x868 + (int64_t)pcStack_100)) {
            bVar27 = bVar7;
          }
          if (((pcVar24[3] == '\a') || (pcVar24[3] == '\f')) ||
             ((0xc1 < (byte)pcVar24[2] && ((byte)pcVar24[2] < 0xcc)))) {
            bVar7 = true;
            if (plStack_110 == (int64_t *)0x180be7ac0) {
              bVar7 = false;
            }
          }
          else {
            bVar7 = false;
          }
          if (bVar27) {
            lVar16 = (uint64_t)*(byte *)(lVar3 + 0xd0) * 0x618 + *(int64_t *)(param_1 + 0x900);
            if ((*(byte *)(param_1 + 0xbe6) & 4) == 0) {
              uVar19 = *(byte *)(lVar3 + 0xd0) + 1;
            }
            else {
              uVar19 = (uint)*(byte *)(lVar16 + 0x518 + (uint64_t)*(byte *)(lVar3 + 0xd1) * 2);
            }
            if (uVar19 != 0) {
              *(char *)(lVar3 + 0xd2) = (char)uVar19 + -1;
              if (((*(byte *)(param_1 + 0xbe6) & 4) != 0) && (*(char *)(lVar16 + 0x511) != '\0')) {
                for (plVar4 = (int64_t *)*plVar17; plVar4 != plVar17; plVar4 = (int64_t *)*plVar4)
                {
                  cVar10 = *(char *)(lVar16 + 0x511);
                  if (cVar10 == '\x01') {
                    bVar27 = *(char *)(lVar3 + 0xd1) == *(char *)((int64_t)plVar4 + 0x39);
LAB_1807b6891:
                    if (bVar27) {
                      cVar10 = *(char *)(lVar16 + 0x512);
                      if (cVar10 == '\0') {
LAB_1807b68e8:
                        *(byte *)((int64_t)plVar4 + 0x3c) =
                             *(byte *)((int64_t)plVar4 + 0x3c) | 0x20;
                      }
                      else if (cVar10 == '\x01') {
                        bVar18 = *(byte *)(plVar4 + 7);
LAB_1807b68b6:
                        lVar5 = *(int64_t *)(param_1 + 0x900);
                        *(int8_t *)((int64_t)plVar4 + 0xbc) = 1;
                        if (((*(byte *)((int64_t)plStack_110 + 0x3e) & 1) == 0) ||
                           ((*(byte *)((uint64_t)bVar18 * 0x618 + lVar5 + 0x400) & 4) != 0))
                        goto LAB_1807b68df;
                      }
                      else if (cVar10 == '\x02') {
                        *(int8_t *)((int64_t)plVar4 + 0xac) = 1;
                      }
                    }
                  }
                  else {
                    if (cVar10 == '\x02') {
                      bVar27 = *(char *)(lVar3 + 0xd2) == *(char *)((int64_t)plVar4 + 0x3a);
                      goto LAB_1807b6891;
                    }
                    if ((cVar10 == '\x03') &&
                       (bVar18 = *(byte *)(plVar4 + 7), *(byte *)(lVar3 + 0xd0) == bVar18)) {
                      cVar10 = *(char *)(lVar16 + 0x512);
                      if (cVar10 == '\0') goto LAB_1807b68e8;
                      if (cVar10 == '\x01') goto LAB_1807b68b6;
                      if (cVar10 != '\x02') goto LAB_1807b68ec;
LAB_1807b68df:
                      *(int8_t *)((int64_t)plVar4 + 0xac) = 1;
                    }
                  }
LAB_1807b68ec:
                }
              }
              if (!bVar7) {
                plStack_110 = (int64_t *)*plVar17;
                if (plStack_110 == plVar17) {
                  iVar11 = function_80d590(param_1,lVar3,0,&plStack_110);
                  if (iVar11 != 0) {
                    system_system_buffer_memory = &system_data_7a80;
                    plStack_110 = (int64_t *)0x180be7ac0;
                  }
LAB_1807b6a2c:
                  if ((*(byte *)(param_1 + 0xbe6) & 4) != 0) {
                    *(int8_t *)((int64_t)plStack_110 + 0x3b) = 0;
                    *(int8_t *)((int64_t)plStack_110 + 0x3d) =
                         *(int8_t *)
                          ((uint64_t)*(byte *)(lVar3 + 0xd0) * 0x618 + 0x510 +
                          *(int64_t *)(param_1 + 0x900));
                    *(int8_t *)((int64_t)plStack_110 + 0x3e) =
                         *(int8_t *)
                          ((uint64_t)*(byte *)(lVar3 + 0xd0) * 0x618 + 0x400 +
                          *(int64_t *)(param_1 + 0x900));
                  }
                }
                else if ((*(byte *)(param_1 + 0xbe6) & 4) != 0) {
                  cVar10 = *(char *)((int64_t)plStack_110 + 0x3d);
                  lVar5 = *(int64_t *)(param_1 + 0x900);
                  if (cVar10 == '\x01') {
                    *(int8_t *)((int64_t)plStack_110 + 0x3b) = 1;
LAB_1807b6992:
                    iVar11 = *(int *)(lVar3 + 0xdc);
                  }
                  else {
                    if (cVar10 != '\x02') {
                      if (cVar10 != '\x03') goto LAB_1807b6a2c;
                      *(int8_t *)((int64_t)plStack_110 + 0x3b) = 1;
                      *(int8_t *)((int64_t)plStack_110 + 0xac) = 1;
                      goto LAB_1807b6992;
                    }
                    *(int8_t *)((int64_t)plStack_110 + 0x3b) = 1;
                    *(int8_t *)((int64_t)plStack_110 + 0xbc) = 1;
                    if (((*(byte *)((int64_t)plStack_110 + 0x3e) & 1) == 0) ||
                       ((*(byte *)((uint64_t)*(byte *)(plStack_110 + 7) * 0x618 + lVar5 + 0x400) &
                        4) != 0)) {
                      *(int8_t *)((int64_t)plStack_110 + 0xac) = 1;
                    }
                    iVar11 = *(int *)(lVar3 + 0xdc);
                  }
                  if (iVar11 == 0) {
                    *(byte *)((int64_t)plStack_110 + 0x3c) =
                         *(byte *)((int64_t)plStack_110 + 0x3c) | 0x20;
                  }
                  iVar11 = function_80d590(param_1,lVar3,0,&plStack_108);
                  plStack_110 = plStack_108;
                  if (iVar11 != 0) {
                    system_system_buffer_memory = &system_data_7a80;
                    plStack_110 = (int64_t *)0x180be7ac0;
                  }
                  *(int32_t *)((int64_t)plStack_110 + 0x44) = *(int32_t *)(lVar3 + 0xdc);
                  goto LAB_1807b6a2c;
                }
                *(int8_t *)((int64_t)plStack_110 + 0x3a) = *(int8_t *)(lVar3 + 0xd2);
                *(int8_t *)(plStack_110 + 7) = *(int8_t *)(lVar3 + 0xd0);
                *(int8_t *)((int64_t)plStack_110 + 0x39) = *(int8_t *)(lVar3 + 0xd1);
                if (((int)(uint)*(byte *)(lVar3 + 0xd2) < *(int *)(param_1 + 0x8fc)) &&
                   (lVar5 = *(int64_t *)
                             (*(int64_t *)(param_1 + 0x848) +
                             (uint64_t)*(byte *)(lVar3 + 0xd2) * 8), lVar5 != 0)) {
                  plStack_110[5] = lVar5;
                }
                else {
                  plStack_110[5] = (int64_t)&system_data_7a80;
                }
              }
              bVar18 = *(byte *)(lVar3 + 0xd1);
              if ((*(byte *)(param_1 + 0xbe6) & 4) != 0) {
                bVar18 = *(byte *)(lVar16 + 0x517 + (uint64_t)bVar18 * 2);
              }
              *(byte *)(lVar3 + 0xd3) = bVar18;
              if ((*(byte *)(param_1 + 0xbe6) & 8) == 0) {
                uVar19 = (uint)(*(int *)((uint64_t)bVar18 * 4 + 0x180be7840) * 0x20ab) /
                         *(uint *)(plStack_110[5] + 8);
              }
              else {
                iVar11 = (0x78 - (uint)bVar18) * 0x40;
                *(int *)(lVar3 + 0xd4) = iVar11;
                fVar28 = (float)logf((float)*(uint *)(plStack_110[5] + 8) * 0.00011957432);
                uVar19 = iVar11 - (int)(fVar28 * 1107.9901);
              }
              *(uint *)(lVar3 + 0xd4) = uVar19;
              if (!bVar7) {
                *(int8_t *)(lVar3 + 0x106) = 0;
                *(int8_t *)(lVar3 + 0x10a) = 0;
                *(int32_t *)(lVar3 + 0x110) = 0;
                *(int8_t *)(lVar3 + 0x116) = 0;
                *(int8_t *)(lVar3 + 0xfd) = 0;
                *(uint *)(plStack_110 + 8) = uVar19;
                *(int32_t *)(plStack_110 + 9) = *(int32_t *)(lVar3 + 0xe0);
                *(int32_t *)((int64_t)plStack_110 + 0x5c) = 1;
                if (((*(byte *)(param_1 + 0xbe6) & 4) != 0) &&
                   (-1 < (char)*(byte *)(lVar16 + 0x50f))) {
                  *(uint *)(plStack_110 + 9) = ((uint)*(byte *)(lVar16 + 0x50f) * 0x40) / 0x3f;
                }
                if ((char)*(byte *)(plStack_110[5] + 0xd) < '\0') {
                  *(uint *)(plStack_110 + 9) = *(byte *)(plStack_110[5] + 0xd) & 0x7f;
                }
                if ((*(byte *)(param_1 + 0xbe6) & 4) == 0) {
                  *(uint *)(plStack_110 + 0xc) = (uint)*(byte *)(plStack_110[5] + 0x25);
                }
                else {
                  iVar11 = ((uint)*(byte *)(lVar3 + 0xd1) - (uint)*(byte *)(lVar16 + 0x514)) *
                           (uint)*(byte *)(lVar16 + 0x513);
                  *(int *)(plStack_110 + 9) =
                       (int)plStack_110[9] + ((int)(iVar11 + (iVar11 >> 0x1f & 7U)) >> 3);
                  *(uint *)(plStack_110 + 0xc) =
                       (uint)*(byte *)(plStack_110[5] + 0x25) * (uint)*(byte *)(lVar16 + 0x50e) >> 7
                  ;
                }
                *(int8_t *)((int64_t)plStack_110 + 0x3c) = 0xc;
              }
              cVar10 = (char)iStackX_8;
              if (((*(ushort *)(param_1 + 0xbe6) & 4) != 0) &&
                 ((!bVar7 || ((*(ushort *)(param_1 + 0xbe6) & 0x20) != 0)))) {
                *(int8_t *)((int64_t)plStack_110 + 0xbc) = 0;
                uVar21 = (uint64_t)*(byte *)(lVar3 + 0xd0);
                lVar16 = *(int64_t *)(param_1 + 0x900);
                if (((*(byte *)(uVar21 * 0x618 + 0x400 + lVar16) & 8) == 0) ||
                   (*(char *)((int64_t)plStack_110 + 0x3d) == '\0')) {
                  *(int32_t *)(plStack_110 + 0xe) = 0x40;
                  *(int32_t *)(plStack_110 + 0xd) = 0;
                  *(int32_t *)((int64_t)plStack_110 + 100) = 0;
                  *(int32_t *)((int64_t)plStack_110 + 0x74) = 0;
                  uVar21 = (uint64_t)*(byte *)(lVar3 + 0xd0);
                  lVar16 = *(int64_t *)(param_1 + 0x900);
                }
                if (((*(byte *)(uVar21 * 0x618 + 0x457 + lVar16) & 8) == 0) ||
                   (*(char *)((int64_t)plStack_110 + 0x3d) == '\0')) {
                  *(int32_t *)(plStack_110 + 0x11) = 0;
                  *(int32_t *)(plStack_110 + 0x10) = 0;
                  *(int32_t *)((int64_t)plStack_110 + 0x7c) = 0;
                  *(int32_t *)((int64_t)plStack_110 + 0x8c) = 0;
                  uVar21 = (uint64_t)*(byte *)(lVar3 + 0xd0);
                  lVar16 = *(int64_t *)(param_1 + 0x900);
                }
                if (((*(byte *)(uVar21 * 0x618 + 0x4af + lVar16) & 8) == 0) ||
                   (*(char *)((int64_t)plStack_110 + 0x3d) == '\0')) {
                  *(int32_t *)(plStack_110 + 0x14) = 0;
                  *(int32_t *)(plStack_110 + 0x13) = 0;
                  *(int32_t *)((int64_t)plStack_110 + 0x94) = 0;
                  *(int32_t *)((int64_t)plStack_110 + 0xa4) = 0;
                }
                *(int8_t *)((int64_t)plStack_110 + 0xac) = 0;
                *(int32_t *)(plStack_110 + 0x16) = 0x400;
                *(int8_t *)(plStack_110 + 0xf) = 0;
                *(int8_t *)(plStack_110 + 0x12) = 0;
                *(int8_t *)(plStack_110 + 0x15) = 0;
                *(int32_t *)(plStack_110 + 0x17) = 0;
                *(int32_t *)((int64_t)plStack_110 + 0xb4) = 0;
              }
            }
          }
          if ((plStack_110[5] != 0) && (pcVar24[1] != '\0')) {
            *(uint *)(lVar3 + 0xdc) = (uint)*(byte *)(plStack_110[5] + 0xc);
          }
        }
        pcVar25 = pcStack_100;
        bVar12 = bVar12 & 0xf;
        for (plVar4 = (int64_t *)*plVar17; plVar4 != plVar17; plVar4 = (int64_t *)*plVar4) {
          *(int32_t *)(plVar4 + 10) = 0;
        }
        *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 1;
        *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 2;
        if (pcVar24[2] != '\0') {
          function_7b5960(lVar3,pcVar24,cVar10);
        }
        if ((((*(byte *)(param_1 + 0xbe6) & 4) != 0) &&
            (bVar18 = *(byte *)(lVar3 + 0xd0), lVar16 = *(int64_t *)(param_1 + 0x900),
            *pcVar24 == -1)) &&
           ((*(int8_t *)((int64_t)plStack_110 + 0xbc) = 1,
            (*(byte *)((int64_t)plStack_110 + 0x3e) & 1) == 0 ||
            ((*(byte *)((uint64_t)bVar18 * 0x618 + lVar16 + 0x400) & 4) != 0)))) {
          *(int8_t *)((int64_t)plStack_110 + 0xac) = 1;
        }
        if (*pcVar24 == -2) {
          *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 0x20;
        }
        switch(pcVar24[3]) {
        case '\x01':
          if (*(int *)(param_1 + 0xbec) != 0) goto LAB_1807b7706;
          if (pcVar24[4] != 0) {
            *(uint *)(param_1 + 0xbf0) = (uint)(byte)pcVar24[4];
          }
          break;
        case '\x02':
          if (*(int *)(param_1 + 0xbec) == 0) {
            bVar12 = pcVar24[4];
            *(int32_t *)(param_1 + 0xc08) = 0;
            uVar19 = (uint)bVar12;
            if (*(int *)(param_1 + 0x8ec) <= (int)(uint)bVar12) {
              uVar19 = 0;
            }
            bVar8 = true;
            *(uint *)(param_1 + 0xc0c) = uVar19;
          }
          break;
        case '\x03':
          if (*(int *)(param_1 + 0xbec) != 0) goto LAB_1807b7706;
          bVar12 = pcVar24[4];
          *(uint *)(param_1 + 0xc08) = (uint)bVar12;
          uVar19 = (uint)bVar12;
          if (uVar19 != *plocal_var_f8 && (int)*plocal_var_f8 <= (int)(uint)bVar12) {
            uVar19 = 0;
          }
          *(uint *)(param_1 + 0xc08) = uVar19;
          if (!bVar8) {
            iVar11 = *(int *)(param_1 + 0xbfc) + 1;
            *(int *)(param_1 + 0xc0c) = iVar11;
            if ((*(int *)(param_1 + 0xbd0) == 0) &&
               (*(char *)((int64_t)*(int *)(param_1 + 0xbfc) + 0x291 + param_1) == -1)) {
              do {
                iVar20 = iVar11;
                iVar11 = iVar20 + -1;
                *(int *)(param_1 + 0xc0c) = iVar11;
                if (*(char *)((int64_t)iVar20 + 0x28f + param_1) == -1) break;
              } while (-1 < iVar11);
              *(int *)(param_1 + 0xc0c) = iVar20;
            }
          }
          if (*(int *)(param_1 + 0x8ec) <= *(int *)(param_1 + 0xc0c)) {
            *(int32_t *)(param_1 + 0xc0c) = 0;
          }
          break;
        case '\x04':
          if (*(int *)(param_1 + 0xbec) == 0) {
            if (pcVar24[4] != '\0') {
              *(char *)(lVar3 + 0xf9) = pcVar24[4];
            }
            if (*(char *)((int64_t)plStack_110 + 0x3b) != '\0') goto LAB_1807b7706;
            bVar12 = *(byte *)(lVar3 + 0xf9);
            if ((bVar12 & 0xf) == 0xf) {
              *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + (uint)(bVar12 >> 4);
            }
            else if ((bVar12 & 0xf0) == 0xf0) {
              *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) - (bVar12 & 0xf);
            }
            iVar11 = *(int *)(lVar3 + 0xdc);
            if (0x40 < iVar11) goto code_r0x0001807b76fc;
code_r0x0001807b70b0:
            if (iVar11 < 0) {
              *(int32_t *)(lVar3 + 0xdc) = 0;
            }
          }
          else {
            if (*(char *)((int64_t)plStack_110 + 0x3b) != '\0') goto LAB_1807b7706;
            bVar12 = *(byte *)(lVar3 + 0xf9);
            lVar16 = *plVar17;
            if ((bVar12 & 0xf) == 0) {
              *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + (uint)(bVar12 >> 4);
            }
            iVar11 = *(int *)(lVar3 + 0xdc);
            if ((bVar12 & 0xf0) == 0) {
              iVar11 = iVar11 - (bVar12 & 0xf);
              *(int *)(lVar3 + 0xdc) = iVar11;
            }
            if (0x40 < iVar11) goto LAB_1807b7130;
LAB_1807b7118:
            if (-1 < iVar11) goto LAB_1807b713a;
            *(int32_t *)(lVar3 + 0xdc) = 0;
            *(byte *)(lVar16 + 0x3c) = *(byte *)(lVar16 + 0x3c) | 2;
          }
          break;
        case '\x05':
          if (*(int *)(param_1 + 0xbec) == 0) {
            if (pcVar24[4] != '\0') {
              *(char *)(lVar3 + 0xf4) = pcVar24[4];
            }
            if (*(char *)((int64_t)plStack_110 + 0x3b) != '\0') goto LAB_1807b7706;
            bVar12 = *(byte *)(lVar3 + 0xf4);
            if ((bVar12 & 0xf0) == 0xf0) {
              *(uint *)(plStack_110 + 8) = (int)plStack_110[8] + (bVar12 & 0xf) * 4;
              bVar12 = *(byte *)(lVar3 + 0xf4);
            }
            if ((bVar12 & 0xf0) == 0xe0) {
              *(uint *)(plStack_110 + 8) = (int)plStack_110[8] + (bVar12 & 0xf);
            }
          }
          else {
            if (0xdf < *(byte *)(lVar3 + 0xf4)) goto LAB_1807b7706;
            if (*(char *)((int64_t)plStack_110 + 0x3b) == '\0') {
              *(uint *)(plStack_110 + 8) = (int)plStack_110[8] + (uint)*(byte *)(lVar3 + 0xf4) * 4;
            }
          }
          break;
        case '\x06':
          if (*(int *)(param_1 + 0xbec) == 0) {
            if (pcVar24[4] != '\0') {
              *(char *)(lVar3 + 0xf4) = pcVar24[4];
            }
            if (*(char *)((int64_t)plStack_110 + 0x3b) != '\0') goto LAB_1807b7706;
            bVar12 = *(byte *)(lVar3 + 0xf4);
            if ((bVar12 & 0xf0) == 0xf0) {
              *(uint *)(plStack_110 + 8) = (int)plStack_110[8] + (bVar12 & 0xf) * -4;
              bVar12 = *(byte *)(lVar3 + 0xf4);
            }
            if ((bVar12 & 0xf0) == 0xe0) {
              *(uint *)(plStack_110 + 8) = (int)plStack_110[8] - (bVar12 & 0xf);
            }
          }
          else {
            if ((*(char *)((int64_t)plStack_110 + 0x3b) != '\0') ||
               (0xdf < *(byte *)(lVar3 + 0xf4))) goto LAB_1807b7706;
            *(uint *)(plStack_110 + 8) = (int)plStack_110[8] + (uint)*(byte *)(lVar3 + 0xf4) * -4;
            if ((int)plStack_110[8] < 1) {
              *(byte *)((int64_t)plStack_110 + 0x3c) =
                   *(byte *)((int64_t)plStack_110 + 0x3c) | 0x20;
            }
            else {
              *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 1;
            }
          }
          break;
        case '\a':
          if (*(int *)(param_1 + 0xbec) != 0) {
            if (*(char *)((int64_t)plStack_110 + 0x3b) == '\0') {
              SystemFunction_0001807b5200(lVar3);
            }
            goto LAB_1807b7706;
          }
          cVar10 = pcVar24[4];
          if (cVar10 != '\0') {
            if ((*(byte *)(param_1 + 0xbe6) & 0x20) == 0) {
              *(char *)(lVar3 + 0xf4) = cVar10;
            }
            else {
              *(char *)(lVar3 + 0x104) = cVar10;
            }
          }
          *(int32_t *)(lVar3 + 0x100) = *(int32_t *)(lVar3 + 0xd4);
          if (*pcVar24 != '\0') {
            *(int8_t *)(lVar3 + 0x105) = 0;
          }
          break;
        case '\b':
          if (*(int *)(param_1 + 0xbec) != 0) goto code_r0x0001807b7396;
          if (bVar26 != 0) {
            *(byte *)(lVar3 + 0x107) = bVar26;
          }
          if (bVar12 != 0) {
            *(int8_t *)(lVar3 + 0x109) = 8;
code_r0x0001807b7352:
            *(byte *)(lVar3 + 0x108) = bVar12;
          }
code_r0x0001807b735e:
          if (*(char *)((int64_t)plStack_110 + 0x3b) != '\0') goto LAB_1807b7706;
          bVar12 = *(byte *)(param_1 + 0xbe6) & 0x10;
          goto code_r0x0001807b7370;
        case '\t':
          if ((*(int *)(param_1 + 0xbec) == 0) && (pcVar24[4] != '\0')) {
            *(byte *)(lVar3 + 0x117) = bVar26 + 1;
            *(byte *)(lVar3 + 0x118) = bVar12 + 1;
          }
          if (*(char *)((int64_t)plStack_110 + 0x3b) != '\0') goto LAB_1807b7706;
          if (*(byte *)(lVar3 + 0x117) <= *(byte *)(lVar3 + 0x116)) {
            *(int *)(lVar3 + 0xe4) = -*(int *)(lVar3 + 0xdc);
          }
          bVar12 = *(byte *)(lVar3 + 0x116) + 1;
          if ((uint)*(byte *)(lVar3 + 0x118) + (uint)*(byte *)(lVar3 + 0x117) <= (uint)bVar12) {
            bVar12 = 0;
          }
          *(byte *)(lVar3 + 0x116) = bVar12;
          *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 2;
          break;
        case '\n':
          if ((*(int *)(param_1 + 0xbec) == 0) && (pcVar24[4] != '\0')) {
            *(char *)(lVar3 + 0x119) = pcVar24[4];
          }
          if ((*(char *)((int64_t)plStack_110 + 0x3b) == '\0') &&
             (bVar12 = *(byte *)(lVar3 + 0x119), bVar12 != 0)) {
            iVar11 = *(int *)(param_1 + 0xbec);
            bVar18 = bVar12 >> 4;
            iVar11 = iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                              (int)(((int64_t)iVar11 / 3 + ((int64_t)iVar11 >> 0x3f) & 0xffffffffU
                                    ) >> 0x1f)) * -3;
            if (iVar11 == 1) {
              if ((*(byte *)(param_1 + 0xbe6) & 8) == 0) {
                uVar19 = *(uint *)(plStack_110[5] + 8);
code_r0x0001807b74f4:
                *(uint *)(plStack_110 + 10) =
                     (int)plStack_110[10] +
                     ((uint)(*(int *)(((uint64_t)bVar18 + (uint64_t)*(byte *)(lVar3 + 0xd1)) * 4 +
                                     0x180be7840) * 0x20ab) / uVar19 -
                     (uint)(*(int *)((uint64_t)*(byte *)(lVar3 + 0xd1) * 4 + 0x180be7840) * 0x20ab)
                     / uVar19);
                goto code_r0x0001807b7534;
              }
              *(uint *)(plStack_110 + 10) = (int)plStack_110[10] + (uint)bVar18 * -0x40;
              *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 1;
            }
            else if (iVar11 == 2) {
              if ((*(byte *)(param_1 + 0xbe6) & 8) == 0) {
                uVar19 = *(uint *)(plStack_110[5] + 8);
                bVar18 = bVar12 & 0xf;
                goto code_r0x0001807b74f4;
              }
              *(uint *)(plStack_110 + 10) = (int)plStack_110[10] + (uint)(bVar12 & 0xf) * -0x40;
              *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 1;
            }
            else {
code_r0x0001807b7534:
              *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 1;
            }
          }
        default:
LAB_1807b7706:
          break;
        case '\v':
          if (*(int *)(param_1 + 0xbec) == 0) {
            if (pcVar24[4] != '\0') {
              *(char *)(lVar3 + 0xf9) = pcVar24[4];
            }
            if (*(char *)((int64_t)plStack_110 + 0x3b) != '\0') goto LAB_1807b7706;
            bVar12 = *(byte *)(lVar3 + 0xf9);
            if ((bVar12 & 0xf) == 0xf) {
              *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + (uint)(bVar12 >> 4);
            }
            else if ((bVar12 & 0xf0) == 0xf0) {
              *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) - (bVar12 & 0xf);
            }
            if (*(int *)(lVar3 + 0xdc) < 0x41) {
              if (*(int *)(lVar3 + 0xdc) < 0) {
                *(int32_t *)(lVar3 + 0xdc) = 0;
              }
            }
            else {
              *(int32_t *)(lVar3 + 0xdc) = 0x40;
            }
            if ((*(byte *)(param_1 + 0xbe6) & 0x10) == 0) {
              if (*(char *)(lVar3 + 0x109) == '\x15') {
                SystemFunction_0001807b20e0();
              }
              else {
                SystemFunction_0001807b8df0(lVar3);
              }
            }
          }
          else {
            if (*(char *)((int64_t)plStack_110 + 0x3b) != '\0') goto LAB_1807b7706;
            if (*(char *)(lVar3 + 0x109) == '\x15') {
              SystemFunction_0001807b20e0();
            }
            else {
              SystemFunction_0001807b8df0(lVar3);
            }
            bVar12 = *(byte *)(lVar3 + 0xf9);
            if ((bVar12 & 0xf) == 0) {
              *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + (uint)(bVar12 >> 4);
            }
            iVar11 = *(int *)(lVar3 + 0xdc);
            if ((bVar12 & 0xf0) == 0) {
              iVar11 = iVar11 - (bVar12 & 0xf);
              *(int *)(lVar3 + 0xdc) = iVar11;
            }
            if (iVar11 < 0x41) {
              if (iVar11 < 0) {
                *(int32_t *)(lVar3 + 0xdc) = 0;
                pbVar1 = (byte *)(*plVar17 + 0x3c);
                *pbVar1 = *pbVar1 | 2;
                break;
              }
            }
            else {
              *(int32_t *)(lVar3 + 0xdc) = 0x40;
            }
            pbVar1 = (byte *)(*plVar17 + 0x3c);
            *pbVar1 = *pbVar1 | 2;
          }
          break;
        case '\f':
          if (*(int *)(param_1 + 0xbec) == 0) {
            if (pcVar24[4] != '\0') {
              *(char *)(lVar3 + 0xf9) = pcVar24[4];
            }
            *(int32_t *)(lVar3 + 0x100) = *(int32_t *)(lVar3 + 0xd4);
            if (*pcVar24 != '\0') {
              *(int8_t *)(lVar3 + 0x105) = 0;
            }
            if (*(char *)((int64_t)plStack_110 + 0x3b) == '\0') {
              bVar12 = *(byte *)(lVar3 + 0xf9);
              if ((bVar12 & 0xf) == 0xf) {
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + (uint)(bVar12 >> 4);
              }
              else if ((bVar12 & 0xf0) == 0xf0) {
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) - (bVar12 & 0xf);
              }
              iVar11 = *(int *)(lVar3 + 0xdc);
              if (iVar11 < 0x41) goto code_r0x0001807b70b0;
code_r0x0001807b76fc:
              *(int32_t *)(lVar3 + 0xdc) = 0x40;
            }
          }
          else if (*(char *)((int64_t)plStack_110 + 0x3b) == '\0') {
            SystemFunction_0001807b5200(lVar3);
            bVar12 = *(byte *)(lVar3 + 0xf9);
            lVar16 = *plVar17;
            if ((bVar12 & 0xf) == 0) {
              *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + (uint)(bVar12 >> 4);
            }
            iVar11 = *(int *)(lVar3 + 0xdc);
            if ((bVar12 & 0xf0) == 0) {
              iVar11 = iVar11 - (bVar12 & 0xf);
              *(int *)(lVar3 + 0xdc) = iVar11;
            }
            if (iVar11 < 0x41) goto LAB_1807b7118;
LAB_1807b7130:
            *(int32_t *)(lVar3 + 0xdc) = 0x40;
LAB_1807b713a:
            *(byte *)(lVar16 + 0x3c) = *(byte *)(lVar16 + 0x3c) | 2;
            break;
          }
          goto LAB_1807b7706;
        case '\r':
          if (*(int *)(param_1 + 0xbec) != 0) goto LAB_1807b7706;
          bVar12 = pcVar24[4];
          *(uint *)(lVar3 + 0xec) = (uint)bVar12;
          if (0x40 < bVar12) {
            *(int32_t *)(lVar3 + 0xec) = 0x40;
          }
          break;
        case '\x0e':
          if (*(int *)(param_1 + 0xbec) == 0) {
            if (pcVar24[4] != '\0') {
              *(char *)(lVar3 + 0x124) = pcVar24[4];
            }
            if (*(char *)((int64_t)plStack_110 + 0x3b) == '\0') {
              bVar12 = *(byte *)(lVar3 + 0x124);
              if ((bVar12 & 0xf) == 0xf) {
                *(int *)(lVar3 + 0xec) = *(int *)(lVar3 + 0xec) + (uint)(bVar12 >> 4);
                iVar11 = *(int *)(lVar3 + 0xec);
              }
              else {
                if ((bVar12 & 0xf0) == 0xf0) {
                  *(int *)(lVar3 + 0xec) = *(int *)(lVar3 + 0xec) - (bVar12 & 0xf);
                }
                iVar11 = *(int *)(lVar3 + 0xec);
              }
code_r0x0001807b7b3f:
              if (iVar11 < 0x41) {
                if (iVar11 < 0) {
                  *(int32_t *)(lVar3 + 0xec) = 0;
                }
                break;
              }
              *(int32_t *)(lVar3 + 0xec) = 0x40;
            }
          }
          else if (*(char *)((int64_t)plStack_110 + 0x3b) == '\0') {
            bVar12 = *(byte *)(lVar3 + 0x124);
            if ((bVar12 & 0xf) == 0) {
              *(int *)(lVar3 + 0xec) = *(int *)(lVar3 + 0xec) + (uint)(bVar12 >> 4);
            }
            iVar11 = *(int *)(lVar3 + 0xec);
            if ((bVar12 & 0xf0) == 0) {
              iVar11 = iVar11 - (bVar12 & 0xf);
              *(int *)(lVar3 + 0xec) = iVar11;
            }
            goto code_r0x0001807b7b3f;
          }
          goto LAB_1807b7706;
        case '\x0f':
          if ((*(int *)(param_1 + 0xbec) == 0) && (plStack_110[5] != 0)) {
            bVar12 = pcVar24[4];
            if (bVar12 == 0) {
              uVar19 = *(uint *)(lVar3 + 0xe8);
            }
            else {
              uVar19 = (uint)bVar12;
              *(uint *)(lVar3 + 0xe8) = (uint)bVar12;
            }
            uVar15 = (uint)*(byte *)(lVar3 + 0x12e) * 0x10000 + uVar19 * 0x100;
            uVar13 = *(int *)(plStack_110[5] + 0x14) + *(int *)(plStack_110[5] + 0x10);
            uVar19 = uVar13 - 1;
            if (uVar15 < uVar13) {
              uVar19 = uVar15;
            }
            *(uint *)(plStack_110 + 0xb) = uVar19;
          }
          goto LAB_1807b7706;
        case '\x10':
          if (*(int *)(param_1 + 0xbec) == 0) {
            if (pcVar24[4] != '\0') {
              *(char *)(lVar3 + 0xfa) = pcVar24[4];
            }
            if (*(char *)((int64_t)plStack_110 + 0x3b) == '\0') {
              bVar12 = *(byte *)(lVar3 + 0xfa);
              if ((bVar12 & 0xf) == 0xf) {
                *(int *)(lVar3 + 0xe0) = *(int *)(lVar3 + 0xe0) + (uint)(bVar12 >> 4);
              }
              else if ((bVar12 & 0xf0) == 0xf0) {
                *(int *)(lVar3 + 0xe0) = *(int *)(lVar3 + 0xe0) - (bVar12 & 0xf);
              }
              if (*(int *)(lVar3 + 0xe0) < 0x41) {
                if (*(int *)(lVar3 + 0xe0) < 0) {
                  *(int32_t *)(lVar3 + 0xe0) = 0;
                }
                break;
              }
              *(int32_t *)(lVar3 + 0xe0) = 0x40;
            }
          }
          else if (*(char *)((int64_t)plStack_110 + 0x3b) == '\0') {
            bVar12 = *(byte *)(lVar3 + 0xfa);
            if ((bVar12 & 0xf) == 0) {
              *(int *)(lVar3 + 0xe0) = *(int *)(lVar3 + 0xe0) - (uint)(bVar12 >> 4);
            }
            iVar11 = *(int *)(lVar3 + 0xe0);
            if ((bVar12 & 0xf0) == 0) {
              iVar11 = iVar11 + (bVar12 & 0xf);
              *(int *)(lVar3 + 0xe0) = iVar11;
            }
            if (iVar11 < 0x41) {
              if (iVar11 < 0) {
                *(int32_t *)(lVar3 + 0xe0) = 0;
                pbVar1 = (byte *)(*plVar17 + 0x3c);
                *pbVar1 = *pbVar1 | 4;
                break;
              }
            }
            else {
              *(int32_t *)(lVar3 + 0xe0) = 0x40;
            }
            pbVar1 = (byte *)(*plVar17 + 0x3c);
            *pbVar1 = *pbVar1 | 4;
            break;
          }
          goto LAB_1807b7706;
        case '\x11':
          if ((*(int *)(param_1 + 0xbec) == 0) && (pcVar24[4] != '\0')) {
            *(byte *)(lVar3 + 0xfb) = bVar26;
            *(byte *)(lVar3 + 0xfc) = bVar12;
          }
          if (*(byte *)(lVar3 + 0xfd) != 0) {
            if ((*(char *)((int64_t)plStack_110 + 0x3b) != '\0') || (*(byte *)(lVar3 + 0xfc) == 0))
            goto LAB_1807b7706;
            if ((uint)*(byte *)(lVar3 + 0xfd) % (uint)*(byte *)(lVar3 + 0xfc) != 0)
            goto code_r0x0001807b7d1f;
            if (*(char *)(lVar3 + 0xfb) != '\0') {
              switch(*(char *)(lVar3 + 0xfb)) {
              case '\x01':
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + -1;
                break;
              case '\x02':
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + -2;
                break;
              case '\x03':
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + -4;
                break;
              case '\x04':
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + -8;
                break;
              case '\x05':
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + -0x10;
                break;
              case '\x06':
                *(int32_t *)(lVar3 + 0xdc) = 0;
                goto code_r0x0001807b7ce1;
              case '\a':
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) >> 1;
                break;
              case '\t':
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + 1;
                break;
              case '\n':
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + 2;
                break;
              case '\v':
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + 4;
                break;
              case '\f':
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + 8;
                break;
              case '\r':
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) + 0x10;
                break;
              case '\x0f':
                *(int *)(lVar3 + 0xdc) = *(int *)(lVar3 + 0xdc) << 1;
              }
code_r0x0001807b7ce1:
              if (*(int *)(lVar3 + 0xdc) < 0x41) {
                if (*(int *)(lVar3 + 0xdc) < 0) {
                  *(int32_t *)(lVar3 + 0xdc) = 0;
                }
              }
              else {
                *(int32_t *)(lVar3 + 0xdc) = 0x40;
              }
              *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 2;
            }
            *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 4;
            *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 8;
          }
code_r0x0001807b7d1f:
          *(char *)(lVar3 + 0xfd) = *(char *)(lVar3 + 0xfd) + '\x01';
          goto LAB_1807b7706;
        case '\x12':
          if (*(int *)(param_1 + 0xbec) == 0) {
            if (bVar26 != 0) {
              *(byte *)(lVar3 + 0x10b) = bVar26;
            }
            if (bVar12 != 0) {
              *(byte *)(lVar3 + 0x10c) = bVar12;
            }
          }
          if (*(char *)((int64_t)plStack_110 + 0x3b) == '\0') {
            bVar12 = *(byte *)(lVar3 + 0x10a);
            cVar10 = *(char *)(lVar3 + 0x128);
            if (cVar10 == '\0') {
code_r0x0001807b7d8c:
              bVar18 = *(byte *)((uint64_t)(bVar12 & 0x1f) + 0x180be7500);
code_r0x0001807b7d98:
              *(uint *)(lVar3 + 0xe4) = (uint)bVar18;
            }
            else {
              if (cVar10 == '\x01') {
                bVar26 = (bVar12 & 0x1f) << 3;
                bVar18 = ~bVar26;
                if (-1 < (char)bVar12) {
                  bVar18 = bVar26;
                }
                goto code_r0x0001807b7d98;
              }
              if (cVar10 == '\x02') {
                *(int32_t *)(lVar3 + 0xe4) = 0xff;
              }
              else if (cVar10 == '\x03') goto code_r0x0001807b7d8c;
            }
            iVar11 = (int)((uint)*(byte *)(lVar3 + 0x10c) * *(int *)(lVar3 + 0xe4)) >> 6;
            *(int *)(lVar3 + 0xe4) = iVar11;
            if ((char)bVar12 < '\0') {
              if ((short)(*(short *)(lVar3 + 0xdc) - (short)iVar11) < 0) {
                iVar11 = *(int *)(lVar3 + 0xdc);
              }
              *(int *)(lVar3 + 0xe4) = -iVar11;
            }
            else if (0x40 < *(int *)(lVar3 + 0xdc) + iVar11) {
              *(int *)(lVar3 + 0xe4) = 0x40 - *(int *)(lVar3 + 0xdc);
            }
            cVar10 = *(char *)(lVar3 + 0x10b) + bVar12;
            *(char *)(lVar3 + 0x10a) = cVar10;
            if ('\x1f' < cVar10) {
              *(char *)(lVar3 + 0x10a) = cVar10 + -0x40;
            }
            *(byte *)(*plVar17 + 0x3c) = *(byte *)(*plVar17 + 0x3c) | 2;
          }
          goto LAB_1807b7706;
        case '\x13':
          bVar12 = pcVar24[4];
          if (bVar12 == 0) {
            bVar12 = *(byte *)(lVar3 + 0x125);
          }
          else {
            *(byte *)(lVar3 + 0x125) = bVar12;
          }
          bVar18 = bVar12 & 0xf;
          switch(bVar12 >> 4) {
          case 3:
            if (*(int *)(param_1 + 0xbec) == 0) {
              *(byte *)(lVar3 + 0x127) = bVar12 & 3;
            }
            break;
          case 4:
            if (*(int *)(param_1 + 0xbec) == 0) {
              *(byte *)(lVar3 + 0x128) = bVar12 & 3;
            }
            break;
          case 5:
            if (*(int *)(param_1 + 0xbec) == 0) {
              *(byte *)(lVar3 + 0x129) = bVar12 & 3;
            }
            break;
          case 6:
            if (*(int *)(param_1 + 0xbec) == 0) {
              *(uint *)(param_1 + 0xc04) = (uint)bVar18;
            }
            break;
          case 7:
            switch(bVar18) {
            case 0:
              if ((*(int *)(param_1 + 0xbec) == 0) && ((*(byte *)(param_1 + 0xbe6) & 4) != 0)) {
                for (plVar4 = (int64_t *)*plVar17; plVar4 != plVar17; plVar4 = (int64_t *)*plVar4)
                {
                  if (*(char *)((int64_t)plVar4 + 0x3b) != '\0') {
                    *(byte *)((int64_t)plVar4 + 0x3c) = *(byte *)((int64_t)plVar4 + 0x3c) | 0x20;
                  }
                }
              }
              break;
            case 1:
              if ((*(int *)(param_1 + 0xbec) == 0) && ((*(byte *)(param_1 + 0xbe6) & 4) != 0)) {
                for (plVar4 = (int64_t *)*plVar17; plVar4 != plVar17; plVar4 = (int64_t *)*plVar4)
                {
                  if (*(char *)((int64_t)plVar4 + 0x3b) != '\0') {
                    lVar3 = *(int64_t *)(param_1 + 0x900);
                    *(int8_t *)((int64_t)plVar4 + 0xbc) = 1;
                    if (((*(byte *)((int64_t)plVar4 + 0x3e) & 1) == 0) ||
                       ((*(byte *)((uint64_t)*(byte *)(plVar4 + 7) * 0x618 + lVar3 + 0x400) & 4) !=
                        0)) {
                      *(int8_t *)((int64_t)plVar4 + 0xac) = 1;
                    }
                  }
                }
              }
              break;
            case 2:
              if ((*(int *)(param_1 + 0xbec) == 0) && ((*(byte *)(param_1 + 0xbe6) & 4) != 0)) {
                for (plVar4 = (int64_t *)*plVar17; plVar4 != plVar17; plVar4 = (int64_t *)*plVar4)
                {
                  if (*(char *)((int64_t)plVar4 + 0x3b) != '\0') {
                    *(int8_t *)((int64_t)plVar4 + 0xac) = 1;
                  }
                }
              }
              break;
            case 3:
              if (*(int *)(param_1 + 0xbec) == 0) {
                if ((*(byte *)(param_1 + 0xbe6) & 4) != 0) {
                  *(int8_t *)((int64_t)plStack_110 + 0x3d) = 0;
                }
                goto LAB_1807b7717;
              }
              break;
            case 4:
              if (*(int *)(param_1 + 0xbec) == 0) {
                if ((*(byte *)(param_1 + 0xbe6) & 4) != 0) {
                  *(int8_t *)((int64_t)plStack_110 + 0x3d) = 1;
                }
                goto LAB_1807b7717;
              }
              break;
            case 5:
              if (*(int *)(param_1 + 0xbec) == 0) {
                if ((*(byte *)(param_1 + 0xbe6) & 4) != 0) {
                  *(int8_t *)((int64_t)plStack_110 + 0x3d) = 2;
                }
                goto LAB_1807b7717;
              }
              break;
            case 6:
              if (*(int *)(param_1 + 0xbec) == 0) {
                if ((*(byte *)(param_1 + 0xbe6) & 4) != 0) {
                  *(int8_t *)((int64_t)plStack_110 + 0x3d) = 3;
                }
                goto LAB_1807b7717;
              }
              break;
            case 7:
              if (*(int *)(param_1 + 0xbec) == 0) {
                if ((*(byte *)(param_1 + 0xbe6) & 4) != 0) {
                  *(byte *)((int64_t)plStack_110 + 0x3e) =
                       *(byte *)((int64_t)plStack_110 + 0x3e) & 0xfe;
                }
                goto LAB_1807b7717;
              }
              break;
            case 8:
              if (*(int *)(param_1 + 0xbec) == 0) {
                if ((*(byte *)(param_1 + 0xbe6) & 4) != 0) {
                  *(byte *)((int64_t)plStack_110 + 0x3e) =
                       *(byte *)((int64_t)plStack_110 + 0x3e) | 1;
                }
                goto LAB_1807b7717;
              }
            }
            goto LAB_1807b7706;
          case 8:
            if (*(int *)(param_1 + 0xbec) == 0) {
              uVar19 = (uint)bVar18 * 4;
              goto code_r0x0001807b84dd;
            }
            goto LAB_1807b7706;
          case 9:
            if ((*(int *)(param_1 + 0xbec) == 0) &&
               (*(char *)((int64_t)plStack_110 + 0x3b) == '\0')) {
              if (bVar18 == 0) {
                *(byte *)((int64_t)plStack_110 + 0x3c) =
                     *(byte *)((int64_t)plStack_110 + 0x3c) | 0x40;
              }
              else if (bVar18 == 1) {
                *(byte *)((int64_t)plStack_110 + 0x3c) =
                     *(byte *)((int64_t)plStack_110 + 0x3c) | 0x10;
              }
              else {
                if (bVar18 != 0xe) {
                  if (bVar18 == 0xf) {
                    *(byte *)((int64_t)plStack_110 + 0x3c) =
                         *(byte *)((int64_t)plStack_110 + 0x3c) | 1;
                    *(int32_t *)((int64_t)plStack_110 + 0x5c) = 0xffffffff;
                  }
                  break;
                }
                *(byte *)((int64_t)plStack_110 + 0x3c) =
                     *(byte *)((int64_t)plStack_110 + 0x3c) | 1;
                *(int32_t *)((int64_t)plStack_110 + 0x5c) = 1;
              }
            }
            goto LAB_1807b7706;
          case 10:
            if (*(int *)(param_1 + 0xbec) == 0) {
              *(byte *)(lVar3 + 0x12e) = bVar18;
            }
            break;
          case 0xb:
            if (*(int *)(param_1 + 0xbec) == 0) {
              if (bVar18 == 0) {
                *(int32_t *)(lVar3 + 0x11c) = *(int32_t *)(param_1 + 0xbf8);
              }
              else {
                if (*(int *)(lVar3 + 0x120) == 0) {
                  uVar19 = (uint)bVar18;
                }
                else {
                  uVar19 = *(int *)(lVar3 + 0x120) - 1;
                }
                *(uint *)(lVar3 + 0x120) = uVar19;
                if (((uVar19 != 0) &&
                    (*(int32_t *)(param_1 + 0xc08) = *(int32_t *)(lVar3 + 0x11c),
                    *(int64_t *)(param_1 + 0x288) != 0)) &&
                   (iVar11 = *(int *)(lVar3 + 0x11c), iVar11 <= *(int *)(param_1 + 0xbf8))) {
                  do {
                    iVar20 = *(int *)(param_1 + 0xbfc) * 0x100 + iVar11;
                    iVar11 = iVar11 + 1;
                    *(int8_t *)((int64_t)iVar20 + *(int64_t *)(param_1 + 0x288)) = 0;
                  } while (iVar11 <= *(int *)(param_1 + 0xbf8));
                }
              }
            }
            goto LAB_1807b7706;
          case 0xc:
            uVar19 = *(uint *)(param_1 + 0xbec);
            if ((uVar19 == 0) || ((uVar19 != bVar18 && ((uVar19 != 1 || (bVar18 != 0))))))
            goto LAB_1807b7706;
            *(int32_t *)(lVar3 + 0xdc) = 0;
            *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 0x20
            ;
            break;
          default:
            goto LAB_1807b7706;
          case 0xe:
            if (*(int *)(param_1 + 0xbec) == 0) {
              *(uint *)(param_1 + 0xc00) = *(int *)(param_1 + 0xbf0) * (uint)bVar18;
            }
          }
          break;
        case '\x14':
          if ((*(int *)(param_1 + 0xbec) == 0) && (0x1f < (byte)pcVar24[4])) {
            SystemFunction_00018080d4a0(param_1);
          }
          else if ((byte)pcVar24[4] < 0x20) {
            if (bVar26 == 0) {
              SystemFunction_00018080d4a0(param_1);
            }
            else if (bVar12 == 1) {
              SystemFunction_00018080d4a0(param_1);
            }
          }
          goto LAB_1807b7706;
        case '\x15':
          if (*(int *)(param_1 + 0xbec) == 0) {
            if (bVar26 != 0) {
              *(byte *)(lVar3 + 0x107) = bVar26;
            }
            if (bVar12 != 0) {
              *(int8_t *)(lVar3 + 0x109) = 0x15;
              goto code_r0x0001807b7352;
            }
            goto code_r0x0001807b735e;
          }
code_r0x0001807b7396:
          bVar12 = *(byte *)((int64_t)plStack_110 + 0x3b);
code_r0x0001807b7370:
          if (bVar12 == 0) {
            if (*(char *)(lVar3 + 0x109) == '\x15') {
              SystemFunction_0001807b20e0();
            }
            else {
              SystemFunction_0001807b8df0(lVar3);
            }
          }
          goto LAB_1807b7706;
        case '\x16':
          if (*(int *)(param_1 + 0xbec) != 0) goto LAB_1807b7706;
          bVar12 = pcVar24[4];
          *(uint *)(param_1 + 0xbe0) = (uint)bVar12;
          if (0x80 < bVar12) {
            *(int32_t *)(param_1 + 0xbe0) = 0x80;
          }
          break;
        case '\x17':
          if (*(int *)(param_1 + 0xbec) == 0) {
            bVar12 = pcVar24[4];
            if (bVar12 == 0) {
              bVar12 = *(byte *)(param_1 + 0xbe4);
            }
            else {
              *(byte *)(param_1 + 0xbe4) = bVar12;
            }
            if ((bVar12 & 0xf) == 0xf) {
              *(int *)(param_1 + 0xbe0) = *(int *)(param_1 + 0xbe0) + (uint)(bVar12 >> 4);
              iVar11 = *(int *)(param_1 + 0xbe0);
            }
            else {
              if ((bVar12 & 0xf0) == 0xf0) {
                *(int *)(param_1 + 0xbe0) = *(int *)(param_1 + 0xbe0) - (bVar12 & 0xf);
              }
              iVar11 = *(int *)(param_1 + 0xbe0);
            }
          }
          else {
            bVar12 = *(byte *)(param_1 + 0xbe4);
            if ((bVar12 & 0xf) == 0) {
              *(int *)(param_1 + 0xbe0) = *(int *)(param_1 + 0xbe0) + (uint)(bVar12 >> 4);
            }
            iVar11 = *(int *)(param_1 + 0xbe0);
            if ((bVar12 & 0xf0) == 0) {
              iVar11 = iVar11 - (bVar12 & 0xf);
              *(int *)(param_1 + 0xbe0) = iVar11;
            }
          }
          if (0x80 < iVar11) {
            *(int32_t *)(param_1 + 0xbe0) = 0x80;
            goto LAB_1807b7706;
          }
          if (iVar11 < 0) {
            *(int32_t *)(param_1 + 0xbe0) = 0;
          }
          break;
        case '\x18':
          if (*(int *)(param_1 + 0xbec) != 0) goto LAB_1807b7706;
          uVar19 = (uint)((byte)pcVar24[4] >> 2);
code_r0x0001807b84dd:
          *(uint *)(lVar3 + 0xe0) = uVar19;
          if (*(char *)((int64_t)plStack_110 + 0x3b) == '\0') {
            *(uint *)(plStack_110 + 9) = uVar19;
            *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 4;
            *(byte *)((int64_t)plStack_110 + 0x3c) = *(byte *)((int64_t)plStack_110 + 0x3c) | 0x40
            ;
          }
          break;
        case '\x19':
          if (*(int *)(param_1 + 0xbec) == 0) {
            if (bVar26 != 0) {
              *(byte *)(lVar3 + 0x114) = bVar26;
            }
            if (bVar12 != 0) {
              *(byte *)(lVar3 + 0x115) = bVar12;
            }
          }
          if (*(char *)((int64_t)plStack_110 + 0x3b) == '\0') {
            cVar10 = *(char *)(lVar3 + 0x129);
            lVar16 = *plVar17;
            if (cVar10 == '\0') {
code_r0x0001807b8570:
              iVar11 = (int)*(char *)((int64_t)*(int *)(lVar3 + 0x110) + 0x180be7520);
code_r0x0001807b8580:
              *(int *)(lVar16 + 0x54) = iVar11;
            }
            else {
              if (cVar10 == '\x01') {
                iVar11 = 0x80 - *(int *)(lVar3 + 0x110) >> 1;
                goto code_r0x0001807b8580;
              }
              if (cVar10 == '\x02') {
                iVar11 = 0x40;
                if (0x7f < *(int *)(lVar3 + 0x110)) {
                  iVar11 = -0x40;
                }
                goto code_r0x0001807b8580;
              }
              if (cVar10 == '\x03') goto code_r0x0001807b8570;
            }
            iVar11 = (int)((uint)*(byte *)(lVar3 + 0x115) * *(int *)(lVar16 + 0x54)) >> 5;
            *(int *)(lVar16 + 0x54) = iVar11;
            if (*(int *)(lVar3 + 0x110) < 0) {
              if ((short)(*(short *)(lVar16 + 0x48) - (short)iVar11) < 0) {
                iVar11 = *(int *)(lVar16 + 0x48);
              }
              *(int *)(lVar16 + 0x54) = -iVar11;
            }
            else if (0x40 < *(int *)(lVar16 + 0x48) + iVar11) {
              *(int *)(lVar16 + 0x54) = 0x40 - *(int *)(lVar16 + 0x48);
            }
            *(int *)(lVar3 + 0x110) = *(int *)(lVar3 + 0x110) + (uint)*(byte *)(lVar3 + 0x114);
            if (0xff < *(int *)(lVar3 + 0x110)) {
              *(int *)(lVar3 + 0x110) = *(int *)(lVar3 + 0x110) + -0x100;
            }
            *(byte *)(lVar16 + 0x3c) = *(byte *)(lVar16 + 0x3c) | 4;
          }
          goto LAB_1807b7706;
        }
LAB_1807b7717:
        pcStack_100 = (char *)((int64_t)pcVar25 + 1);
        iVar11 = *(int *)(param_1 + 0x3c8);
        iStack_114 = iStack_114 + 1;
      } while (iStack_114 < iVar11);
    }
    if ((param_2 != '\0') && (iStackX_8 = 0, 0 < iVar11)) {
      pcStack_100 = (char *)(param_1 + 0x868);
      piVar22 = (int *)(param_1 + 0x45d0);
      plVar17 = (int64_t *)(param_1 + 0x3d0);
      do {
        if (-1 < *pcStack_100) {
          lVar3 = *plVar17;
          puVar9 = *(uint64_t **)(lVar3 + 8);
          while (puVar9 != (uint64_t *)(lVar3 + 8)) {
            lVar16 = 0;
            puVar6 = (uint64_t *)*puVar9;
            bVar12 = *(byte *)((int64_t)puVar9 + 0x3c);
            if (puVar9[5] == 0) {
              bVar12 = bVar12 & 0xf7;
              *(byte *)((int64_t)puVar9 + 0x3c) = bVar12;
            }
            if ((*(byte *)(param_1 + 0xbe6) & 4) != 0) {
              lVar16 = (uint64_t)*(byte *)(puVar9 + 7) * 0x618 + *(int64_t *)(param_1 + 0x900);
              if ((*(byte *)((int64_t)puVar9 + 0x3e) & 1) != 0) {
                if (*(char *)(puVar9 + 0xf) == '\0') {
                  function_7b52b0(param_1,(int64_t)puVar9 + 100,puVar9,
                                *(int8_t *)(lVar16 + 0x401),lVar16 + 0x402,
                                *(int8_t *)(lVar16 + 0x400),*(int8_t *)(lVar16 + 0x453),
                                *(int8_t *)(lVar16 + 0x454),*(int8_t *)(lVar16 + 0x455),
                                *(int8_t *)(lVar16 + 0x456),2);
                }
                else {
                  *(int8_t *)((int64_t)puVar9 + 0xac) = 1;
                  if (*(int *)(puVar9 + 0xe) == 0) {
                    *(byte *)((int64_t)puVar9 + 0x3c) = bVar12 | 0x20;
                  }
                }
              }
              if (((*(byte *)(lVar16 + 0x457) & 1) != 0) && (*(char *)(puVar9 + 0x12) == '\0')) {
                function_7b52b0(param_1,(int64_t)puVar9 + 0x7c,puVar9,*(int8_t *)(lVar16 + 0x458)
                              ,lVar16 + 0x45a,*(byte *)(lVar16 + 0x457),
                              *(int8_t *)(lVar16 + 0x4ab),*(int8_t *)(lVar16 + 0x4ac),
                              *(int8_t *)(lVar16 + 0x4ad),*(int8_t *)(lVar16 + 0x4ae),4);
              }
              if (((*(byte *)(lVar16 + 0x4af) & 1) != 0) && (*(char *)(puVar9 + 0x15) == '\0')) {
                function_7b5470(param_1,puVar9,lVar16,*(int8_t *)(lVar3 + 0xd1));
              }
              if (*(char *)((int64_t)puVar9 + 0xac) != '\0') {
                piVar2 = (int *)(puVar9 + 0x16);
                *piVar2 = *piVar2 - (uint)*(ushort *)(lVar16 + 0x50c);
                iVar11 = *(int *)(puVar9 + 0x16);
                if (*piVar2 < 0) {
                  *(int32_t *)(puVar9 + 0x16) = 0;
                  iVar11 = 0;
                }
                if (iVar11 == 0) {
                  *(byte *)((int64_t)puVar9 + 0x3c) = *(byte *)((int64_t)puVar9 + 0x3c) | 0x20;
                }
                else {
                  *(byte *)((int64_t)puVar9 + 0x3c) = *(byte *)((int64_t)puVar9 + 0x3c) | 2;
                }
              }
            }
            lVar5 = puVar9[5];
            iVar11 = 0;
            cVar10 = *(char *)(lVar5 + 0x32);
            if (cVar10 == '\0') {
LAB_1807b8751:
              iVar11 = (int)*(char *)((int64_t)*(int *)((int64_t)puVar9 + 0xb4) + 0x180be7520);
            }
            else if (cVar10 == '\x01') {
              uVar19 = *(int *)((int64_t)puVar9 + 0xb4) + 0x80U & 0x800000ff;
              if ((int)uVar19 < 0) {
                uVar19 = (uVar19 - 1 | 0xffffff00) + 1;
              }
              iVar11 = (int)(0x80 - uVar19) >> 1;
            }
            else if (cVar10 == '\x02') {
              iVar11 = 0x40;
              if (0x7f < *(int *)((int64_t)puVar9 + 0xb4)) {
                iVar11 = -0x40;
              }
            }
            else if (cVar10 == '\x03') goto LAB_1807b8751;
            iVar20 = *(int *)(puVar9 + 10) -
                     ((int)-((uint)*(byte *)(lVar5 + 0x31) * iVar11 * *(int *)(puVar9 + 0x17)) >>
                     0x16);
            *(int *)(puVar9 + 10) = iVar20;
            iVar11 = *(int *)(puVar9 + 0x17) + (uint)*(byte *)(lVar5 + 0x33) * 0x10;
            if (0x10000 < iVar11) {
              iVar11 = 0x10000;
            }
            *(int *)(puVar9 + 0x17) = iVar11;
            *(int *)((int64_t)puVar9 + 0xb4) =
                 *(int *)((int64_t)puVar9 + 0xb4) + (uint)*(byte *)(lVar5 + 0x30);
            if (0xff < *(int *)((int64_t)puVar9 + 0xb4)) {
              *(int *)((int64_t)puVar9 + 0xb4) = *(int *)((int64_t)puVar9 + 0xb4) + -0x100;
            }
            bVar12 = *(byte *)((int64_t)puVar9 + 0x3c);
            bVar18 = bVar12 | 1;
            *(byte *)((int64_t)puVar9 + 0x3c) = bVar18;
            if (iVar20 + *(int *)(puVar9 + 8) == 0) {
              bVar18 = bVar12 & 0xfe;
              *(byte *)((int64_t)puVar9 + 0x3c) = bVar18;
            }
            lVar23 = 0;
            if (*(char *)((int64_t)puVar9 + 0x3b) == '\0') {
              *(int32_t *)((int64_t)puVar9 + 0x44) = *(int32_t *)(lVar3 + 0xdc);
            }
            if ((bVar18 & 8) != 0) {
              bVar12 = 0;
              lVar14 = lVar23;
              if (lVar16 != 0) {
                bVar12 = (byte)(*(uint *)(lVar16 + 0x608) >> 7) & 1;
                if (((*(byte *)(lVar16 + 0x4af) & 0x10) == 0) && (*(uint *)(lVar16 + 0x608) == 0xff)
                   ) {
                  bVar12 = 0;
                }
                if ((char)*(byte *)(lVar16 + 0x610) < '\0') {
                  lVar14 = *(int64_t *)
                            (param_1 + 0x4438 + (uint64_t)(*(byte *)(lVar16 + 0x610) & 0x7f) * 8);
                }
              }
              if (*piVar22 != 0) {
                lVar14 = *(int64_t *)(param_1 + 0x4440 + (uint64_t)(*piVar22 - 1) * 8);
              }
              if ((lVar14 != 0) && ((*(byte *)(lVar14 + 0x260) & 1) != 0)) {
                lVar14 = lVar23;
              }
              function_80d310(param_1,lVar5,puVar9,bVar12,lVar14);
              if ((*(int *)((int64_t)puVar9 + 0x5c) < 0) && (puVar9[4] != 0)) {
                function_757ed0(puVar9[4],*(int *)(*(int64_t *)puVar9[5] + 0x44) + -1,2);
              }
            }
            if ((int64_t *)puVar9[4] != (int64_t *)0x0) {
              bVar12 = *(byte *)((int64_t)puVar9 + 0x3c);
              if ((bVar12 & 2) != 0) {
                (**(code **)(*(int64_t *)puVar9[4] + 0x20))();
                bVar12 = *(byte *)((int64_t)puVar9 + 0x3c);
              }
              if ((bVar12 & 4) != 0) {
                iVar11 = *(int *)((int64_t)puVar9 + 0x54);
                if ((*(byte *)(param_1 + 0xbe6) & 4) != 0) {
                  iVar11 = iVar11 + *(int *)(puVar9 + 0x11);
                }
                (**(code **)(*(int64_t *)puVar9[4] + 0xb0))
                          ((int64_t *)puVar9[4],
                           (float)(iVar11 + *(int *)(puVar9 + 9)) * 0.031746034 - 1.0);
                bVar12 = *(byte *)((int64_t)puVar9 + 0x3c);
              }
              if ((bVar12 & 1) != 0) {
                if ((*(ushort *)(param_1 + 0xbe6) & 4) == 0) {
                  iVar11 = *(int *)(puVar9 + 10);
                }
                else {
                  iVar11 = *(int *)(puVar9 + 10);
                  if ((*(byte *)(lVar16 + 0x4af) & 0x10) == 0) {
                    iVar11 = iVar11 - *(int *)(puVar9 + 0x14);
                  }
                }
                if ((*(ushort *)(param_1 + 0xbe6) & 8) != 0) {
                  powf(*(int *)(puVar9 + 8) + iVar11,
                       (3840.0 - (float)(*(int *)(puVar9 + 8) + iVar11)) * 0.0013020834);
                }
                function_757470(puVar9[4]);
              }
              if (lVar16 != 0) {
                uVar19 = *(uint *)(lVar16 + 0x608);
                bVar12 = *(byte *)(lVar16 + 0x4af) & 0x10;
                if (((bVar12 != 0) || (uVar19 != 0xff)) && ((uVar19 & 0x80) != 0)) {
                  iVar11 = 0x100;
                  if (bVar12 != 0) {
                    iVar11 = (int)(*(int *)(puVar9 + 0x14) + (*(int *)(puVar9 + 0x14) >> 0x1f & 3U))
                             >> 2;
                  }
                  if ((*(ushort *)(param_1 + 0xbe6) & 0x1000) == 0) {
                    fVar28 = 8.138021e-05;
                  }
                  else {
                    fVar28 = 9.765625e-05;
                  }
                  powf(uVar19 & 0x7f,(float)((iVar11 + 0x100) * (uVar19 & 0x7f)) * fVar28 + 0.25);
                  if (*(int64_t *)(param_1 + 0x5f0) != 0) {
                    SystemFunction_000180762a70(*(uint64_t *)
                                         (*(int64_t *)(param_1 + 0x5f0) +
                                         (int64_t)*(int *)(puVar9[4] + 0x1d0) * 8),0);
                    SystemFunction_000180762a70(*(uint64_t *)
                                         (*(int64_t *)(param_1 + 0x5f0) +
                                         (int64_t)*(int *)(puVar9[4] + 0x1d0) * 8),1);
                  }
                }
              }
              if ((*(byte *)((int64_t)puVar9 + 0x3c) & 0x20) != 0) {
                if (*(int64_t *)(param_1 + 0x5f0) != 0) {
                  plVar4 = (int64_t *)puVar9[4];
                  (**(code **)(*plVar4 + 0x118))
                            (plVar4,*(uint64_t *)
                                     (*(int64_t *)(param_1 + 0x5f0) +
                                     (int64_t)(int)plVar4[0x3a] * 8));
                }
                UIComponent_Renderer(puVar9[4],0x80);
                *(int32_t *)(puVar9 + 0xb) = 0;
              }
            }
            *(int8_t *)((int64_t)puVar9 + 0x3c) = 0;
            function_80c800(puVar9);
            puVar9 = puVar6;
          }
        }
        iStackX_8 = iStackX_8 + 1;
        plVar17 = plVar17 + 1;
        pcStack_100 = pcStack_100 + 1;
        piVar22 = piVar22 + 1;
      } while (iStackX_8 < *(int *)(param_1 + 0x3c8));
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7b6572(void)
{
  byte *pbVar1;
  int64_t lVar2;
  uint *puVar3;
  int64_t *plVar4;
  bool bVar5;
  char cVar6;
  int in_EAX;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int64_t *plVar11;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  byte bVar12;
  uint uVar13;
  int64_t *plVar14;
  int iVar15;
  uint64_t uVar16;
  int64_t lVar17;
  char cVar18;
  char *pcVar19;
  byte bVar20;
  int64_t lVar21;
  bool bVar22;
  float fVar23;
  char local_var_60;
  int iStack0000000000000064;
  int64_t *plStack0000000000000068;
  int64_t *local_var_70;
  char *pcStack0000000000000078;
  iStack0000000000000064 = 0;
  if (0 < in_EAX) {
    pcStack0000000000000078 = (char *)0x0;
    do {
      cVar18 = '\0';
      *(int8_t *)(unaff_RBP + 0x80) = 0;
      pcVar19 = (char *)((int64_t)pcStack0000000000000078 * 5 + 0xa90 + unaff_RSI);
      cVar6 = pcVar19[3];
      bVar20 = (byte)pcVar19[4] >> 4;
      bVar12 = pcVar19[4] & 0xf;
      *(byte *)(unaff_RBP + 0x90) = bVar20;
      *(byte *)(unaff_RBP + 0x98) = bVar12;
      if ((cVar6 == '\x13') && (bVar20 == 0xd)) {
        uVar13 = *(uint *)(unaff_RSI + 0xbec);
        lVar21 = (int64_t)pcStack0000000000000078;
        if ((int)(uint)bVar12 <= (int)uVar13) {
          if (uVar13 != 0) goto LAB_1807b667a;
          if (bVar12 != 0) goto LAB_1807b6660;
        }
        goto LAB_1807b7717;
      }
LAB_1807b6660:
      uVar13 = *(uint *)(unaff_RSI + 0xbec);
      if (uVar13 == 0) {
LAB_1807b6688:
        cVar18 = '\x01';
        *(int8_t *)(unaff_RBP + 0x80) = 1;
      }
      else if ((cVar6 == '\x13') && (bVar20 == 0xd)) {
LAB_1807b667a:
        if ((uVar13 == bVar12) || ((uVar13 == 1 && (bVar12 == 0)))) goto LAB_1807b6688;
      }
      lVar2 = *(int64_t *)(unaff_RSI + 0x3d0 + (int64_t)pcStack0000000000000078 * 8);
      plStack0000000000000068 = *(int64_t **)(lVar2 + 8);
      plVar11 = (int64_t *)(lVar2 + 8);
      if ((plStack0000000000000068 == plVar11) && (*(int64_t **)(lVar2 + 0x10) == plVar11)) {
        system_system_buffer_memory = &system_data_7a80;
        plStack0000000000000068 = (int64_t *)0x180be7ac0;
      }
      if (cVar18 != '\0') {
        if ((*(char *)(lVar2 + 0xd8) == '\x12') && (pcVar19[3] != '\x12')) {
          *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + *(int *)(lVar2 + 0xe4);
        }
        *(char *)(lVar2 + 0xd8) = pcVar19[3];
        *(int32_t *)(lVar2 + 0xe4) = 0;
        *(int32_t *)((int64_t)plStack0000000000000068 + 0x54) = 0;
        *(int8_t *)((int64_t)plStack0000000000000068 + 0x3c) = 0;
        bVar5 = (byte)(*pcVar19 - 1U) < 0xfd;
        if (bVar5) {
          *(char *)(lVar2 + 0xd1) = *pcVar19 + -1;
        }
        if ((pcVar19[1] != '\0') &&
           (*(char *)(lVar2 + 0xd0) = pcVar19[1] + -1,
           plStack0000000000000068 == (int64_t *)0x180be7ac0)) {
          bVar5 = true;
        }
        if (((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) &&
           (*(int *)(unaff_RSI + 0x8f8) <= (int)(uint)*(byte *)(lVar2 + 0xd0))) {
          bVar5 = false;
        }
        *(char *)(lVar2 + 0xd8) = pcVar19[3];
        *(int8_t *)((int64_t)plStack0000000000000068 + 0x3c) = 0;
        bVar22 = false;
        if (-1 < *(char *)(unaff_RSI + 0x868 + (int64_t)pcStack0000000000000078)) {
          bVar22 = bVar5;
        }
        if (((pcVar19[3] == '\a') || (pcVar19[3] == '\f')) ||
           ((0xc1 < (byte)pcVar19[2] && ((byte)pcVar19[2] < 0xcc)))) {
          bVar5 = true;
          if (plStack0000000000000068 == (int64_t *)0x180be7ac0) {
            bVar5 = false;
          }
        }
        else {
          bVar5 = false;
        }
        if (bVar22) {
          lVar21 = (uint64_t)*(byte *)(lVar2 + 0xd0) * 0x618 + *(int64_t *)(unaff_RSI + 0x900);
          if ((*(byte *)(unaff_RSI + 0xbe6) & 4) == 0) {
            uVar13 = *(byte *)(lVar2 + 0xd0) + 1;
          }
          else {
            uVar13 = (uint)*(byte *)(lVar21 + 0x518 + (uint64_t)*(byte *)(lVar2 + 0xd1) * 2);
          }
          if (uVar13 != 0) {
            *(char *)(lVar2 + 0xd2) = (char)uVar13 + -1;
            if (((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) && (*(char *)(lVar21 + 0x511) != '\0')) {
              for (plVar14 = (int64_t *)*plVar11; plVar14 != plVar11;
                  plVar14 = (int64_t *)*plVar14) {
                cVar6 = *(char *)(lVar21 + 0x511);
                if (cVar6 == '\x01') {
                  bVar22 = *(char *)(lVar2 + 0xd1) == *(char *)((int64_t)plVar14 + 0x39);
LAB_1807b6891:
                  if (bVar22) {
                    cVar6 = *(char *)(lVar21 + 0x512);
                    if (cVar6 == '\0') {
LAB_1807b68e8:
                      *(byte *)((int64_t)plVar14 + 0x3c) =
                           *(byte *)((int64_t)plVar14 + 0x3c) | 0x20;
                    }
                    else if (cVar6 == '\x01') {
                      bVar12 = *(byte *)(plVar14 + 7);
LAB_1807b68b6:
                      lVar17 = *(int64_t *)(unaff_RSI + 0x900);
                      *(int8_t *)((int64_t)plVar14 + 0xbc) = 1;
                      if (((*(byte *)((int64_t)plStack0000000000000068 + 0x3e) & 1) == 0) ||
                         ((*(byte *)((uint64_t)bVar12 * 0x618 + lVar17 + 0x400) & 4) != 0))
                      goto LAB_1807b68df;
                    }
                    else if (cVar6 == '\x02') {
                      *(int8_t *)((int64_t)plVar14 + 0xac) = 1;
                    }
                  }
                }
                else {
                  if (cVar6 == '\x02') {
                    bVar22 = *(char *)(lVar2 + 0xd2) == *(char *)((int64_t)plVar14 + 0x3a);
                    goto LAB_1807b6891;
                  }
                  if ((cVar6 == '\x03') &&
                     (bVar12 = *(byte *)(plVar14 + 7), *(byte *)(lVar2 + 0xd0) == bVar12)) {
                    cVar6 = *(char *)(lVar21 + 0x512);
                    if (cVar6 == '\0') goto LAB_1807b68e8;
                    if (cVar6 == '\x01') goto LAB_1807b68b6;
                    if (cVar6 != '\x02') goto LAB_1807b68ec;
LAB_1807b68df:
                    *(int8_t *)((int64_t)plVar14 + 0xac) = 1;
                  }
                }
LAB_1807b68ec:
              }
            }
            if (!bVar5) {
              plStack0000000000000068 = (int64_t *)*plVar11;
              if (plStack0000000000000068 == plVar11) {
                iVar7 = function_80d590();
                if (iVar7 != 0) {
                  system_system_buffer_memory = &system_data_7a80;
                  plStack0000000000000068 = (int64_t *)0x180be7ac0;
                }
LAB_1807b6a2c:
                if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
                  *(int8_t *)((int64_t)plStack0000000000000068 + 0x3b) = 0;
                  *(int8_t *)((int64_t)plStack0000000000000068 + 0x3d) =
                       *(int8_t *)
                        ((uint64_t)*(byte *)(lVar2 + 0xd0) * 0x618 + 0x510 +
                        *(int64_t *)(unaff_RSI + 0x900));
                  *(int8_t *)((int64_t)plStack0000000000000068 + 0x3e) =
                       *(int8_t *)
                        ((uint64_t)*(byte *)(lVar2 + 0xd0) * 0x618 + 0x400 +
                        *(int64_t *)(unaff_RSI + 0x900));
                }
              }
              else if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
                cVar6 = *(char *)((int64_t)plStack0000000000000068 + 0x3d);
                lVar17 = *(int64_t *)(unaff_RSI + 0x900);
                if (cVar6 == '\x01') {
                  *(int8_t *)((int64_t)plStack0000000000000068 + 0x3b) = 1;
LAB_1807b6992:
                  iVar7 = *(int *)(lVar2 + 0xdc);
                }
                else {
                  if (cVar6 != '\x02') {
                    if (cVar6 != '\x03') goto LAB_1807b6a2c;
                    *(int8_t *)((int64_t)plStack0000000000000068 + 0x3b) = 1;
                    *(int8_t *)((int64_t)plStack0000000000000068 + 0xac) = 1;
                    goto LAB_1807b6992;
                  }
                  *(int8_t *)((int64_t)plStack0000000000000068 + 0x3b) = 1;
                  *(int8_t *)((int64_t)plStack0000000000000068 + 0xbc) = 1;
                  if (((*(byte *)((int64_t)plStack0000000000000068 + 0x3e) & 1) == 0) ||
                     ((*(byte *)((uint64_t)*(byte *)(plStack0000000000000068 + 7) * 0x618 + lVar17
                                + 0x400) & 4) != 0)) {
                    *(int8_t *)((int64_t)plStack0000000000000068 + 0xac) = 1;
                  }
                  iVar7 = *(int *)(lVar2 + 0xdc);
                }
                if (iVar7 == 0) {
                  *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
                       *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x20;
                }
                iVar7 = function_80d590();
                plStack0000000000000068 = local_var_70;
                if (iVar7 != 0) {
                  system_system_buffer_memory = &system_data_7a80;
                  plStack0000000000000068 = (int64_t *)0x180be7ac0;
                }
                *(int32_t *)((int64_t)plStack0000000000000068 + 0x44) =
                     *(int32_t *)(lVar2 + 0xdc);
                goto LAB_1807b6a2c;
              }
              *(int8_t *)((int64_t)plStack0000000000000068 + 0x3a) =
                   *(int8_t *)(lVar2 + 0xd2);
              *(int8_t *)(plStack0000000000000068 + 7) = *(int8_t *)(lVar2 + 0xd0);
              *(int8_t *)((int64_t)plStack0000000000000068 + 0x39) =
                   *(int8_t *)(lVar2 + 0xd1);
              if (((int)(uint)*(byte *)(lVar2 + 0xd2) < *(int *)(unaff_RSI + 0x8fc)) &&
                 (lVar17 = *(int64_t *)
                            (*(int64_t *)(unaff_RSI + 0x848) +
                            (uint64_t)*(byte *)(lVar2 + 0xd2) * 8), lVar17 != 0)) {
                plStack0000000000000068[5] = lVar17;
              }
              else {
                plStack0000000000000068[5] = (int64_t)&system_data_7a80;
              }
            }
            bVar12 = *(byte *)(lVar2 + 0xd1);
            if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
              bVar12 = *(byte *)(lVar21 + 0x517 + (uint64_t)bVar12 * 2);
            }
            *(byte *)(lVar2 + 0xd3) = bVar12;
            if ((*(byte *)(unaff_RSI + 0xbe6) & 8) == 0) {
              uVar13 = (uint)(*(int *)((uint64_t)bVar12 * 4 + 0x180be7840) * 0x20ab) /
                       *(uint *)(plStack0000000000000068[5] + 8);
            }
            else {
              iVar7 = (0x78 - (uint)bVar12) * 0x40;
              *(int *)(lVar2 + 0xd4) = iVar7;
              fVar23 = (float)logf((float)*(uint *)(plStack0000000000000068[5] + 8) * 0.00011957432)
              ;
              uVar13 = iVar7 - (int)(fVar23 * 1107.9901);
            }
            *(uint *)(lVar2 + 0xd4) = uVar13;
            if (!bVar5) {
              *(int8_t *)(lVar2 + 0x106) = 0;
              *(int8_t *)(lVar2 + 0x10a) = 0;
              *(int32_t *)(lVar2 + 0x110) = 0;
              *(int8_t *)(lVar2 + 0x116) = 0;
              *(int8_t *)(lVar2 + 0xfd) = 0;
              *(uint *)(plStack0000000000000068 + 8) = uVar13;
              *(int32_t *)(plStack0000000000000068 + 9) = *(int32_t *)(lVar2 + 0xe0);
              *(int32_t *)((int64_t)plStack0000000000000068 + 0x5c) = 1;
              if (((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) &&
                 (-1 < (char)*(byte *)(lVar21 + 0x50f))) {
                *(uint *)(plStack0000000000000068 + 9) =
                     ((uint)*(byte *)(lVar21 + 0x50f) * 0x40) / 0x3f;
              }
              if ((char)*(byte *)(plStack0000000000000068[5] + 0xd) < '\0') {
                *(uint *)(plStack0000000000000068 + 9) =
                     *(byte *)(plStack0000000000000068[5] + 0xd) & 0x7f;
              }
              if ((*(byte *)(unaff_RSI + 0xbe6) & 4) == 0) {
                *(uint *)(plStack0000000000000068 + 0xc) =
                     (uint)*(byte *)(plStack0000000000000068[5] + 0x25);
              }
              else {
                iVar7 = ((uint)*(byte *)(lVar2 + 0xd1) - (uint)*(byte *)(lVar21 + 0x514)) *
                        (uint)*(byte *)(lVar21 + 0x513);
                *(int *)(plStack0000000000000068 + 9) =
                     (int)plStack0000000000000068[9] + ((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3);
                *(uint *)(plStack0000000000000068 + 0xc) =
                     (uint)*(byte *)(plStack0000000000000068[5] + 0x25) *
                     (uint)*(byte *)(lVar21 + 0x50e) >> 7;
              }
              *(int8_t *)((int64_t)plStack0000000000000068 + 0x3c) = 0xc;
            }
            if (((*(ushort *)(unaff_RSI + 0xbe6) & 4) != 0) &&
               ((!bVar5 || ((*(ushort *)(unaff_RSI + 0xbe6) & 0x20) != 0)))) {
              *(int8_t *)((int64_t)plStack0000000000000068 + 0xbc) = 0;
              uVar16 = (uint64_t)*(byte *)(lVar2 + 0xd0);
              lVar21 = *(int64_t *)(unaff_RSI + 0x900);
              if (((*(byte *)(uVar16 * 0x618 + 0x400 + lVar21) & 8) == 0) ||
                 (*(char *)((int64_t)plStack0000000000000068 + 0x3d) == '\0')) {
                *(int32_t *)(plStack0000000000000068 + 0xe) = 0x40;
                *(int32_t *)(plStack0000000000000068 + 0xd) = 0;
                *(int32_t *)((int64_t)plStack0000000000000068 + 100) = 0;
                *(int32_t *)((int64_t)plStack0000000000000068 + 0x74) = 0;
                uVar16 = (uint64_t)*(byte *)(lVar2 + 0xd0);
                lVar21 = *(int64_t *)(unaff_RSI + 0x900);
              }
              if (((*(byte *)(uVar16 * 0x618 + 0x457 + lVar21) & 8) == 0) ||
                 (*(char *)((int64_t)plStack0000000000000068 + 0x3d) == '\0')) {
                *(int32_t *)(plStack0000000000000068 + 0x11) = 0;
                *(int32_t *)(plStack0000000000000068 + 0x10) = 0;
                *(int32_t *)((int64_t)plStack0000000000000068 + 0x7c) = 0;
                *(int32_t *)((int64_t)plStack0000000000000068 + 0x8c) = 0;
                uVar16 = (uint64_t)*(byte *)(lVar2 + 0xd0);
                lVar21 = *(int64_t *)(unaff_RSI + 0x900);
              }
              if (((*(byte *)(uVar16 * 0x618 + 0x4af + lVar21) & 8) == 0) ||
                 (*(char *)((int64_t)plStack0000000000000068 + 0x3d) == '\0')) {
                *(int32_t *)(plStack0000000000000068 + 0x14) = 0;
                *(int32_t *)(plStack0000000000000068 + 0x13) = 0;
                *(int32_t *)((int64_t)plStack0000000000000068 + 0x94) = 0;
                *(int32_t *)((int64_t)plStack0000000000000068 + 0xa4) = 0;
              }
              *(int8_t *)((int64_t)plStack0000000000000068 + 0xac) = 0;
              *(int32_t *)(plStack0000000000000068 + 0x16) = 0x400;
              *(int8_t *)(plStack0000000000000068 + 0xf) = 0;
              *(int8_t *)(plStack0000000000000068 + 0x12) = 0;
              *(int8_t *)(plStack0000000000000068 + 0x15) = 0;
              *(int32_t *)(plStack0000000000000068 + 0x17) = 0;
              *(int32_t *)((int64_t)plStack0000000000000068 + 0xb4) = 0;
            }
            cVar18 = *(char *)(unaff_RBP + 0x80);
            bVar12 = *(byte *)(unaff_RBP + 0x98);
          }
          bVar20 = *(byte *)(unaff_RBP + 0x90);
        }
        if ((plStack0000000000000068[5] != 0) && (pcVar19[1] != '\0')) {
          *(uint *)(lVar2 + 0xdc) = (uint)*(byte *)(plStack0000000000000068[5] + 0xc);
        }
      }
      lVar21 = (int64_t)pcStack0000000000000078;
      for (plVar14 = (int64_t *)*plVar11; plVar14 != plVar11; plVar14 = (int64_t *)*plVar14) {
        *(int32_t *)(plVar14 + 10) = 0;
      }
      *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
           *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
      *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
           *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 2;
      if (pcVar19[2] != '\0') {
        function_7b5960(lVar2,pcVar19,cVar18);
      }
      if ((((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) &&
          (bVar9 = *(byte *)(lVar2 + 0xd0), lVar17 = *(int64_t *)(unaff_RSI + 0x900),
          *pcVar19 == -1)) &&
         ((*(int8_t *)((int64_t)plStack0000000000000068 + 0xbc) = 1,
          (*(byte *)((int64_t)plStack0000000000000068 + 0x3e) & 1) == 0 ||
          ((*(byte *)((uint64_t)bVar9 * 0x618 + lVar17 + 0x400) & 4) != 0)))) {
        *(int8_t *)((int64_t)plStack0000000000000068 + 0xac) = 1;
      }
      if (*pcVar19 == -2) {
        *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
             *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x20;
      }
      switch(pcVar19[3]) {
      case '\x01':
        if (*(int *)(unaff_RSI + 0xbec) != 0) goto LAB_1807b7706;
        if (pcVar19[4] != 0) {
          *(uint *)(unaff_RSI + 0xbf0) = (uint)(byte)pcVar19[4];
        }
        break;
      case '\x02':
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          bVar12 = pcVar19[4];
          *(int32_t *)(unaff_RSI + 0xc08) = 0;
          uVar13 = (uint)bVar12;
          if (*(int *)(unaff_RSI + 0x8ec) <= (int)(uint)bVar12) {
            uVar13 = 0;
          }
          local_var_60 = '\x01';
          *(uint *)(unaff_RSI + 0xc0c) = uVar13;
        }
        break;
      case '\x03':
        if (*(int *)(unaff_RSI + 0xbec) != 0) goto LAB_1807b7706;
        bVar12 = pcVar19[4];
        puVar3 = *(uint **)(unaff_RBP + -0x80);
        *(uint *)(unaff_RSI + 0xc08) = (uint)bVar12;
        uVar13 = (uint)bVar12;
        if (uVar13 != *puVar3 && (int)*puVar3 <= (int)(uint)bVar12) {
          uVar13 = 0;
        }
        *(uint *)(unaff_RSI + 0xc08) = uVar13;
        if (local_var_60 == '\0') {
          iVar7 = *(int *)(unaff_RSI + 0xbfc) + 1;
          *(int *)(unaff_RSI + 0xc0c) = iVar7;
          if ((*(int *)(unaff_RSI + 0xbd0) == 0) &&
             (*(char *)((int64_t)*(int *)(unaff_RSI + 0xbfc) + 0x291 + unaff_RSI) == -1)) {
            do {
              iVar15 = iVar7;
              iVar7 = iVar15 + -1;
              *(int *)(unaff_RSI + 0xc0c) = iVar7;
              if (*(char *)((int64_t)iVar15 + 0x28f + unaff_RSI) == -1) break;
            } while (-1 < iVar7);
            *(int *)(unaff_RSI + 0xc0c) = iVar15;
          }
        }
        if (*(int *)(unaff_RSI + 0x8ec) <= *(int *)(unaff_RSI + 0xc0c)) {
          *(int32_t *)(unaff_RSI + 0xc0c) = 0;
        }
        break;
      case '\x04':
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if (pcVar19[4] != '\0') {
            *(char *)(lVar2 + 0xf9) = pcVar19[4];
          }
          if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') goto LAB_1807b7706;
          bVar12 = *(byte *)(lVar2 + 0xf9);
          if ((bVar12 & 0xf) == 0xf) {
            *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + (uint)(bVar12 >> 4);
          }
          else if ((bVar12 & 0xf0) == 0xf0) {
            *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) - (bVar12 & 0xf);
          }
          iVar7 = *(int *)(lVar2 + 0xdc);
          if (0x40 < iVar7) goto code_r0x0001807b76fc;
code_r0x0001807b70b0:
          if (iVar7 < 0) {
            *(int32_t *)(lVar2 + 0xdc) = 0;
          }
        }
        else {
          if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') goto LAB_1807b7706;
          bVar12 = *(byte *)(lVar2 + 0xf9);
          lVar17 = *plVar11;
          if ((bVar12 & 0xf) == 0) {
            *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + (uint)(bVar12 >> 4);
          }
          iVar7 = *(int *)(lVar2 + 0xdc);
          if ((bVar12 & 0xf0) == 0) {
            iVar7 = iVar7 - (bVar12 & 0xf);
            *(int *)(lVar2 + 0xdc) = iVar7;
          }
          if (0x40 < iVar7) goto LAB_1807b7130;
LAB_1807b7118:
          if (-1 < iVar7) goto LAB_1807b713a;
          *(int32_t *)(lVar2 + 0xdc) = 0;
          *(byte *)(lVar17 + 0x3c) = *(byte *)(lVar17 + 0x3c) | 2;
        }
        break;
      case '\x05':
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if (pcVar19[4] != '\0') {
            *(char *)(lVar2 + 0xf4) = pcVar19[4];
          }
          if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') goto LAB_1807b7706;
          bVar12 = *(byte *)(lVar2 + 0xf4);
          if ((bVar12 & 0xf0) == 0xf0) {
            *(uint *)(plStack0000000000000068 + 8) =
                 (int)plStack0000000000000068[8] + (bVar12 & 0xf) * 4;
            bVar12 = *(byte *)(lVar2 + 0xf4);
          }
          if ((bVar12 & 0xf0) == 0xe0) {
            *(uint *)(plStack0000000000000068 + 8) =
                 (int)plStack0000000000000068[8] + (bVar12 & 0xf);
          }
        }
        else {
          if (0xdf < *(byte *)(lVar2 + 0xf4)) goto LAB_1807b7706;
          if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
            *(uint *)(plStack0000000000000068 + 8) =
                 (int)plStack0000000000000068[8] + (uint)*(byte *)(lVar2 + 0xf4) * 4;
          }
        }
        break;
      case '\x06':
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if (pcVar19[4] != '\0') {
            *(char *)(lVar2 + 0xf4) = pcVar19[4];
          }
          if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') goto LAB_1807b7706;
          bVar12 = *(byte *)(lVar2 + 0xf4);
          if ((bVar12 & 0xf0) == 0xf0) {
            *(uint *)(plStack0000000000000068 + 8) =
                 (int)plStack0000000000000068[8] + (bVar12 & 0xf) * -4;
            bVar12 = *(byte *)(lVar2 + 0xf4);
          }
          if ((bVar12 & 0xf0) == 0xe0) {
            *(uint *)(plStack0000000000000068 + 8) =
                 (int)plStack0000000000000068[8] - (bVar12 & 0xf);
          }
        }
        else {
          if ((*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') ||
             (0xdf < *(byte *)(lVar2 + 0xf4))) goto LAB_1807b7706;
          *(uint *)(plStack0000000000000068 + 8) =
               (int)plStack0000000000000068[8] + (uint)*(byte *)(lVar2 + 0xf4) * -4;
          if ((int)plStack0000000000000068[8] < 1) {
            *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
                 *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x20;
          }
          else {
            *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
                 *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
          }
        }
        break;
      case '\a':
        if (*(int *)(unaff_RSI + 0xbec) != 0) {
          if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
            SystemFunction_0001807b5200(lVar2);
          }
          goto LAB_1807b7706;
        }
        cVar6 = pcVar19[4];
        if (cVar6 != '\0') {
          if ((*(byte *)(unaff_RSI + 0xbe6) & 0x20) == 0) {
            *(char *)(lVar2 + 0xf4) = cVar6;
          }
          else {
            *(char *)(lVar2 + 0x104) = cVar6;
          }
        }
        *(int32_t *)(lVar2 + 0x100) = *(int32_t *)(lVar2 + 0xd4);
        if (*pcVar19 != '\0') {
          *(int8_t *)(lVar2 + 0x105) = 0;
        }
        break;
      case '\b':
        if (*(int *)(unaff_RSI + 0xbec) != 0) goto code_r0x0001807b7396;
        if (bVar20 != 0) {
          *(byte *)(lVar2 + 0x107) = bVar20;
        }
        if (bVar12 != 0) {
          *(int8_t *)(lVar2 + 0x109) = 8;
code_r0x0001807b7352:
          *(byte *)(lVar2 + 0x108) = bVar12;
        }
code_r0x0001807b735e:
        if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') goto LAB_1807b7706;
        bVar12 = *(byte *)(unaff_RSI + 0xbe6) & 0x10;
        goto code_r0x0001807b7370;
      case '\t':
        if ((*(int *)(unaff_RSI + 0xbec) == 0) && (pcVar19[4] != '\0')) {
          *(byte *)(lVar2 + 0x117) = bVar20 + 1;
          *(byte *)(lVar2 + 0x118) = bVar12 + 1;
        }
        if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') goto LAB_1807b7706;
        if (*(byte *)(lVar2 + 0x117) <= *(byte *)(lVar2 + 0x116)) {
          *(int *)(lVar2 + 0xe4) = -*(int *)(lVar2 + 0xdc);
        }
        bVar12 = *(byte *)(lVar2 + 0x116) + 1;
        if ((uint)*(byte *)(lVar2 + 0x118) + (uint)*(byte *)(lVar2 + 0x117) <= (uint)bVar12) {
          bVar12 = 0;
        }
        *(byte *)(lVar2 + 0x116) = bVar12;
        *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
             *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 2;
        break;
      case '\n':
        if ((*(int *)(unaff_RSI + 0xbec) == 0) && (pcVar19[4] != '\0')) {
          *(char *)(lVar2 + 0x119) = pcVar19[4];
        }
        if ((*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') &&
           (bVar12 = *(byte *)(lVar2 + 0x119), bVar12 != 0)) {
          iVar7 = *(int *)(unaff_RSI + 0xbec);
          bVar20 = bVar12 >> 4;
          iVar7 = iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                          (int)(((int64_t)iVar7 / 3 + ((int64_t)iVar7 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3;
          if (iVar7 == 1) {
            if ((*(byte *)(unaff_RSI + 0xbe6) & 8) == 0) {
              uVar13 = *(uint *)(plStack0000000000000068[5] + 8);
code_r0x0001807b74f4:
              *(uint *)(plStack0000000000000068 + 10) =
                   (int)plStack0000000000000068[10] +
                   ((uint)(*(int *)(((uint64_t)bVar20 + (uint64_t)*(byte *)(lVar2 + 0xd1)) * 4 +
                                   0x180be7840) * 0x20ab) / uVar13 -
                   (uint)(*(int *)((uint64_t)*(byte *)(lVar2 + 0xd1) * 4 + 0x180be7840) * 0x20ab) /
                   uVar13);
              goto code_r0x0001807b7534;
            }
            *(uint *)(plStack0000000000000068 + 10) =
                 (int)plStack0000000000000068[10] + (uint)bVar20 * -0x40;
            *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
                 *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
          }
          else if (iVar7 == 2) {
            if ((*(byte *)(unaff_RSI + 0xbe6) & 8) == 0) {
              uVar13 = *(uint *)(plStack0000000000000068[5] + 8);
              bVar20 = bVar12 & 0xf;
              goto code_r0x0001807b74f4;
            }
            *(uint *)(plStack0000000000000068 + 10) =
                 (int)plStack0000000000000068[10] + (uint)(bVar12 & 0xf) * -0x40;
            *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
                 *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
          }
          else {
code_r0x0001807b7534:
            *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
                 *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
          }
        }
      default:
LAB_1807b7706:
        break;
      case '\v':
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if (pcVar19[4] != '\0') {
            *(char *)(lVar2 + 0xf9) = pcVar19[4];
          }
          if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') goto LAB_1807b7706;
          bVar12 = *(byte *)(lVar2 + 0xf9);
          if ((bVar12 & 0xf) == 0xf) {
            *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + (uint)(bVar12 >> 4);
          }
          else if ((bVar12 & 0xf0) == 0xf0) {
            *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) - (bVar12 & 0xf);
          }
          if (*(int *)(lVar2 + 0xdc) < 0x41) {
            if (*(int *)(lVar2 + 0xdc) < 0) {
              *(int32_t *)(lVar2 + 0xdc) = 0;
            }
          }
          else {
            *(int32_t *)(lVar2 + 0xdc) = 0x40;
          }
          if ((*(byte *)(unaff_RSI + 0xbe6) & 0x10) == 0) {
            if (*(char *)(lVar2 + 0x109) == '\x15') {
              SystemFunction_0001807b20e0();
            }
            else {
              SystemFunction_0001807b8df0(lVar2);
            }
          }
        }
        else {
          if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') goto LAB_1807b7706;
          if (*(char *)(lVar2 + 0x109) == '\x15') {
            SystemFunction_0001807b20e0();
          }
          else {
            SystemFunction_0001807b8df0(lVar2);
          }
          bVar12 = *(byte *)(lVar2 + 0xf9);
          if ((bVar12 & 0xf) == 0) {
            *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + (uint)(bVar12 >> 4);
          }
          iVar7 = *(int *)(lVar2 + 0xdc);
          if ((bVar12 & 0xf0) == 0) {
            iVar7 = iVar7 - (bVar12 & 0xf);
            *(int *)(lVar2 + 0xdc) = iVar7;
          }
          if (iVar7 < 0x41) {
            if (iVar7 < 0) {
              *(int32_t *)(lVar2 + 0xdc) = 0;
              pbVar1 = (byte *)(*plVar11 + 0x3c);
              *pbVar1 = *pbVar1 | 2;
              break;
            }
          }
          else {
            *(int32_t *)(lVar2 + 0xdc) = 0x40;
          }
          pbVar1 = (byte *)(*plVar11 + 0x3c);
          *pbVar1 = *pbVar1 | 2;
        }
        break;
      case '\f':
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if (pcVar19[4] != '\0') {
            *(char *)(lVar2 + 0xf9) = pcVar19[4];
          }
          *(int32_t *)(lVar2 + 0x100) = *(int32_t *)(lVar2 + 0xd4);
          if (*pcVar19 != '\0') {
            *(int8_t *)(lVar2 + 0x105) = 0;
          }
          if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
            bVar12 = *(byte *)(lVar2 + 0xf9);
            if ((bVar12 & 0xf) == 0xf) {
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + (uint)(bVar12 >> 4);
            }
            else if ((bVar12 & 0xf0) == 0xf0) {
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) - (bVar12 & 0xf);
            }
            iVar7 = *(int *)(lVar2 + 0xdc);
            if (iVar7 < 0x41) goto code_r0x0001807b70b0;
code_r0x0001807b76fc:
            *(int32_t *)(lVar2 + 0xdc) = 0x40;
          }
        }
        else if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
          SystemFunction_0001807b5200(lVar2);
          bVar12 = *(byte *)(lVar2 + 0xf9);
          lVar17 = *plVar11;
          if ((bVar12 & 0xf) == 0) {
            *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + (uint)(bVar12 >> 4);
          }
          iVar7 = *(int *)(lVar2 + 0xdc);
          if ((bVar12 & 0xf0) == 0) {
            iVar7 = iVar7 - (bVar12 & 0xf);
            *(int *)(lVar2 + 0xdc) = iVar7;
          }
          if (iVar7 < 0x41) goto LAB_1807b7118;
LAB_1807b7130:
          *(int32_t *)(lVar2 + 0xdc) = 0x40;
LAB_1807b713a:
          *(byte *)(lVar17 + 0x3c) = *(byte *)(lVar17 + 0x3c) | 2;
          break;
        }
        goto LAB_1807b7706;
      case '\r':
        if (*(int *)(unaff_RSI + 0xbec) != 0) goto LAB_1807b7706;
        bVar12 = pcVar19[4];
        *(uint *)(lVar2 + 0xec) = (uint)bVar12;
        if (0x40 < bVar12) {
          *(int32_t *)(lVar2 + 0xec) = 0x40;
        }
        break;
      case '\x0e':
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if (pcVar19[4] != '\0') {
            *(char *)(lVar2 + 0x124) = pcVar19[4];
          }
          if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
            bVar12 = *(byte *)(lVar2 + 0x124);
            if ((bVar12 & 0xf) == 0xf) {
              *(int *)(lVar2 + 0xec) = *(int *)(lVar2 + 0xec) + (uint)(bVar12 >> 4);
              iVar7 = *(int *)(lVar2 + 0xec);
            }
            else {
              if ((bVar12 & 0xf0) == 0xf0) {
                *(int *)(lVar2 + 0xec) = *(int *)(lVar2 + 0xec) - (bVar12 & 0xf);
              }
              iVar7 = *(int *)(lVar2 + 0xec);
            }
code_r0x0001807b7b3f:
            if (iVar7 < 0x41) {
              if (iVar7 < 0) {
                *(int32_t *)(lVar2 + 0xec) = 0;
              }
              break;
            }
            *(int32_t *)(lVar2 + 0xec) = 0x40;
          }
        }
        else if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
          bVar12 = *(byte *)(lVar2 + 0x124);
          if ((bVar12 & 0xf) == 0) {
            *(int *)(lVar2 + 0xec) = *(int *)(lVar2 + 0xec) + (uint)(bVar12 >> 4);
          }
          iVar7 = *(int *)(lVar2 + 0xec);
          if ((bVar12 & 0xf0) == 0) {
            iVar7 = iVar7 - (bVar12 & 0xf);
            *(int *)(lVar2 + 0xec) = iVar7;
          }
          goto code_r0x0001807b7b3f;
        }
        goto LAB_1807b7706;
      case '\x0f':
        if ((*(int *)(unaff_RSI + 0xbec) == 0) && (plStack0000000000000068[5] != 0)) {
          bVar12 = pcVar19[4];
          if (bVar12 == 0) {
            uVar13 = *(uint *)(lVar2 + 0xe8);
          }
          else {
            uVar13 = (uint)bVar12;
            *(uint *)(lVar2 + 0xe8) = (uint)bVar12;
          }
          uVar10 = (uint)*(byte *)(lVar2 + 0x12e) * 0x10000 + uVar13 * 0x100;
          uVar8 = *(int *)(plStack0000000000000068[5] + 0x14) +
                  *(int *)(plStack0000000000000068[5] + 0x10);
          uVar13 = uVar8 - 1;
          if (uVar10 < uVar8) {
            uVar13 = uVar10;
          }
          *(uint *)(plStack0000000000000068 + 0xb) = uVar13;
        }
        goto LAB_1807b7706;
      case '\x10':
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if (pcVar19[4] != '\0') {
            *(char *)(lVar2 + 0xfa) = pcVar19[4];
          }
          if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
            bVar12 = *(byte *)(lVar2 + 0xfa);
            if ((bVar12 & 0xf) == 0xf) {
              *(int *)(lVar2 + 0xe0) = *(int *)(lVar2 + 0xe0) + (uint)(bVar12 >> 4);
            }
            else if ((bVar12 & 0xf0) == 0xf0) {
              *(int *)(lVar2 + 0xe0) = *(int *)(lVar2 + 0xe0) - (bVar12 & 0xf);
            }
            if (*(int *)(lVar2 + 0xe0) < 0x41) {
              if (*(int *)(lVar2 + 0xe0) < 0) {
                *(int32_t *)(lVar2 + 0xe0) = 0;
              }
              break;
            }
            *(int32_t *)(lVar2 + 0xe0) = 0x40;
          }
        }
        else if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
          bVar12 = *(byte *)(lVar2 + 0xfa);
          if ((bVar12 & 0xf) == 0) {
            *(int *)(lVar2 + 0xe0) = *(int *)(lVar2 + 0xe0) - (uint)(bVar12 >> 4);
          }
          iVar7 = *(int *)(lVar2 + 0xe0);
          if ((bVar12 & 0xf0) == 0) {
            iVar7 = iVar7 + (bVar12 & 0xf);
            *(int *)(lVar2 + 0xe0) = iVar7;
          }
          if (iVar7 < 0x41) {
            if (iVar7 < 0) {
              *(int32_t *)(lVar2 + 0xe0) = 0;
              pbVar1 = (byte *)(*plVar11 + 0x3c);
              *pbVar1 = *pbVar1 | 4;
              break;
            }
          }
          else {
            *(int32_t *)(lVar2 + 0xe0) = 0x40;
          }
          pbVar1 = (byte *)(*plVar11 + 0x3c);
          *pbVar1 = *pbVar1 | 4;
          break;
        }
        goto LAB_1807b7706;
      case '\x11':
        if ((*(int *)(unaff_RSI + 0xbec) == 0) && (pcVar19[4] != '\0')) {
          *(byte *)(lVar2 + 0xfb) = bVar20;
          *(byte *)(lVar2 + 0xfc) = bVar12;
        }
        if (*(byte *)(lVar2 + 0xfd) != 0) {
          if ((*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') ||
             (*(byte *)(lVar2 + 0xfc) == 0)) goto LAB_1807b7706;
          if ((uint)*(byte *)(lVar2 + 0xfd) % (uint)*(byte *)(lVar2 + 0xfc) != 0)
          goto code_r0x0001807b7d1f;
          if (*(char *)(lVar2 + 0xfb) != '\0') {
            switch(*(char *)(lVar2 + 0xfb)) {
            case '\x01':
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + -1;
              break;
            case '\x02':
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + -2;
              break;
            case '\x03':
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + -4;
              break;
            case '\x04':
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + -8;
              break;
            case '\x05':
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + -0x10;
              break;
            case '\x06':
              *(int32_t *)(lVar2 + 0xdc) = 0;
              goto code_r0x0001807b7ce1;
            case '\a':
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) >> 1;
              break;
            case '\t':
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + 1;
              break;
            case '\n':
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + 2;
              break;
            case '\v':
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + 4;
              break;
            case '\f':
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + 8;
              break;
            case '\r':
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) + 0x10;
              break;
            case '\x0f':
              *(int *)(lVar2 + 0xdc) = *(int *)(lVar2 + 0xdc) << 1;
            }
code_r0x0001807b7ce1:
            if (*(int *)(lVar2 + 0xdc) < 0x41) {
              if (*(int *)(lVar2 + 0xdc) < 0) {
                *(int32_t *)(lVar2 + 0xdc) = 0;
              }
            }
            else {
              *(int32_t *)(lVar2 + 0xdc) = 0x40;
            }
            *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
                 *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 2;
          }
          *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
               *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 4;
          *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
               *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 8;
        }
code_r0x0001807b7d1f:
        *(char *)(lVar2 + 0xfd) = *(char *)(lVar2 + 0xfd) + '\x01';
        goto LAB_1807b7706;
      case '\x12':
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if (bVar20 != 0) {
            *(byte *)(lVar2 + 0x10b) = bVar20;
          }
          if (bVar12 != 0) {
            *(byte *)(lVar2 + 0x10c) = bVar12;
          }
        }
        if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
          bVar12 = *(byte *)(lVar2 + 0x10a);
          cVar6 = *(char *)(lVar2 + 0x128);
          if (cVar6 == '\0') {
code_r0x0001807b7d8c:
            bVar20 = *(byte *)((uint64_t)(bVar12 & 0x1f) + 0x180be7500);
code_r0x0001807b7d98:
            *(uint *)(lVar2 + 0xe4) = (uint)bVar20;
          }
          else {
            if (cVar6 == '\x01') {
              bVar9 = (bVar12 & 0x1f) << 3;
              bVar20 = ~bVar9;
              if (-1 < (char)bVar12) {
                bVar20 = bVar9;
              }
              goto code_r0x0001807b7d98;
            }
            if (cVar6 == '\x02') {
              *(int32_t *)(lVar2 + 0xe4) = 0xff;
            }
            else if (cVar6 == '\x03') goto code_r0x0001807b7d8c;
          }
          iVar7 = (int)((uint)*(byte *)(lVar2 + 0x10c) * *(int *)(lVar2 + 0xe4)) >> 6;
          *(int *)(lVar2 + 0xe4) = iVar7;
          if ((char)bVar12 < '\0') {
            if ((short)(*(short *)(lVar2 + 0xdc) - (short)iVar7) < 0) {
              iVar7 = *(int *)(lVar2 + 0xdc);
            }
            *(int *)(lVar2 + 0xe4) = -iVar7;
          }
          else if (0x40 < *(int *)(lVar2 + 0xdc) + iVar7) {
            *(int *)(lVar2 + 0xe4) = 0x40 - *(int *)(lVar2 + 0xdc);
          }
          cVar6 = *(char *)(lVar2 + 0x10b) + bVar12;
          *(char *)(lVar2 + 0x10a) = cVar6;
          if ('\x1f' < cVar6) {
            *(char *)(lVar2 + 0x10a) = cVar6 + -0x40;
          }
          *(byte *)(*plVar11 + 0x3c) = *(byte *)(*plVar11 + 0x3c) | 2;
        }
        goto LAB_1807b7706;
      case '\x13':
        bVar12 = pcVar19[4];
        if (bVar12 == 0) {
          bVar12 = *(byte *)(lVar2 + 0x125);
        }
        else {
          *(byte *)(lVar2 + 0x125) = bVar12;
        }
        bVar20 = bVar12 & 0xf;
        switch(bVar12 >> 4) {
        case 3:
          if (*(int *)(unaff_RSI + 0xbec) == 0) {
            *(byte *)(lVar2 + 0x127) = bVar12 & 3;
          }
          break;
        case 4:
          if (*(int *)(unaff_RSI + 0xbec) == 0) {
            *(byte *)(lVar2 + 0x128) = bVar12 & 3;
          }
          break;
        case 5:
          if (*(int *)(unaff_RSI + 0xbec) == 0) {
            *(byte *)(lVar2 + 0x129) = bVar12 & 3;
          }
          break;
        case 6:
          if (*(int *)(unaff_RSI + 0xbec) == 0) {
            *(uint *)(unaff_RSI + 0xc04) = (uint)bVar20;
          }
          break;
        case 7:
          switch(bVar20) {
          case 0:
            if ((*(int *)(unaff_RSI + 0xbec) == 0) && ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0)) {
              for (plVar14 = (int64_t *)*plVar11; plVar14 != plVar11;
                  plVar14 = (int64_t *)*plVar14) {
                if (*(char *)((int64_t)plVar14 + 0x3b) != '\0') {
                  *(byte *)((int64_t)plVar14 + 0x3c) = *(byte *)((int64_t)plVar14 + 0x3c) | 0x20;
                }
              }
            }
            break;
          case 1:
            if ((*(int *)(unaff_RSI + 0xbec) == 0) && ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0)) {
              for (plVar14 = (int64_t *)*plVar11; plVar14 != plVar11;
                  plVar14 = (int64_t *)*plVar14) {
                if (*(char *)((int64_t)plVar14 + 0x3b) != '\0') {
                  lVar2 = *(int64_t *)(unaff_RSI + 0x900);
                  *(int8_t *)((int64_t)plVar14 + 0xbc) = 1;
                  if (((*(byte *)((int64_t)plVar14 + 0x3e) & 1) == 0) ||
                     ((*(byte *)((uint64_t)*(byte *)(plVar14 + 7) * 0x618 + lVar2 + 0x400) & 4) !=
                      0)) {
                    *(int8_t *)((int64_t)plVar14 + 0xac) = 1;
                  }
                }
              }
            }
            break;
          case 2:
            if ((*(int *)(unaff_RSI + 0xbec) == 0) && ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0)) {
              for (plVar14 = (int64_t *)*plVar11; plVar14 != plVar11;
                  plVar14 = (int64_t *)*plVar14) {
                if (*(char *)((int64_t)plVar14 + 0x3b) != '\0') {
                  *(int8_t *)((int64_t)plVar14 + 0xac) = 1;
                }
              }
            }
            break;
          case 3:
            if (*(int *)(unaff_RSI + 0xbec) == 0) {
              if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
                *(int8_t *)((int64_t)plStack0000000000000068 + 0x3d) = 0;
              }
              goto LAB_1807b7717;
            }
            break;
          case 4:
            if (*(int *)(unaff_RSI + 0xbec) == 0) {
              if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
                *(int8_t *)((int64_t)plStack0000000000000068 + 0x3d) = 1;
              }
              goto LAB_1807b7717;
            }
            break;
          case 5:
            if (*(int *)(unaff_RSI + 0xbec) == 0) {
              if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
                *(int8_t *)((int64_t)plStack0000000000000068 + 0x3d) = 2;
              }
              goto LAB_1807b7717;
            }
            break;
          case 6:
            if (*(int *)(unaff_RSI + 0xbec) == 0) {
              if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
                *(int8_t *)((int64_t)plStack0000000000000068 + 0x3d) = 3;
              }
              goto LAB_1807b7717;
            }
            break;
          case 7:
            if (*(int *)(unaff_RSI + 0xbec) == 0) {
              if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
                *(byte *)((int64_t)plStack0000000000000068 + 0x3e) =
                     *(byte *)((int64_t)plStack0000000000000068 + 0x3e) & 0xfe;
              }
              goto LAB_1807b7717;
            }
            break;
          case 8:
            if (*(int *)(unaff_RSI + 0xbec) == 0) {
              if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
                *(byte *)((int64_t)plStack0000000000000068 + 0x3e) =
                     *(byte *)((int64_t)plStack0000000000000068 + 0x3e) | 1;
              }
              goto LAB_1807b7717;
            }
          }
          goto LAB_1807b7706;
        case 8:
          if (*(int *)(unaff_RSI + 0xbec) == 0) {
            uVar13 = (uint)bVar20 * 4;
            goto code_r0x0001807b84dd;
          }
          goto LAB_1807b7706;
        case 9:
          if ((*(int *)(unaff_RSI + 0xbec) == 0) &&
             (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0')) {
            if (bVar20 == 0) {
              *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
                   *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x40;
            }
            else if (bVar20 == 1) {
              *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
                   *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x10;
            }
            else {
              if (bVar20 != 0xe) {
                if (bVar20 == 0xf) {
                  *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
                       *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
                  *(int32_t *)((int64_t)plStack0000000000000068 + 0x5c) = 0xffffffff;
                }
                break;
              }
              *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
                   *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
              *(int32_t *)((int64_t)plStack0000000000000068 + 0x5c) = 1;
            }
          }
          goto LAB_1807b7706;
        case 10:
          if (*(int *)(unaff_RSI + 0xbec) == 0) {
            *(byte *)(lVar2 + 0x12e) = bVar20;
          }
          break;
        case 0xb:
          if (*(int *)(unaff_RSI + 0xbec) == 0) {
            if (bVar20 == 0) {
              *(int32_t *)(lVar2 + 0x11c) = *(int32_t *)(unaff_RSI + 0xbf8);
            }
            else {
              if (*(int *)(lVar2 + 0x120) == 0) {
                uVar13 = (uint)bVar20;
              }
              else {
                uVar13 = *(int *)(lVar2 + 0x120) - 1;
              }
              *(uint *)(lVar2 + 0x120) = uVar13;
              if (((uVar13 != 0) &&
                  (*(int32_t *)(unaff_RSI + 0xc08) = *(int32_t *)(lVar2 + 0x11c),
                  *(int64_t *)(unaff_RSI + 0x288) != 0)) &&
                 (iVar7 = *(int *)(lVar2 + 0x11c), iVar7 <= *(int *)(unaff_RSI + 0xbf8))) {
                do {
                  iVar15 = *(int *)(unaff_RSI + 0xbfc) * 0x100 + iVar7;
                  iVar7 = iVar7 + 1;
                  *(int8_t *)((int64_t)iVar15 + *(int64_t *)(unaff_RSI + 0x288)) = 0;
                } while (iVar7 <= *(int *)(unaff_RSI + 0xbf8));
              }
            }
          }
          goto LAB_1807b7706;
        case 0xc:
          uVar13 = *(uint *)(unaff_RSI + 0xbec);
          if ((uVar13 == 0) || ((uVar13 != bVar20 && ((uVar13 != 1 || (bVar20 != 0))))))
          goto LAB_1807b7706;
          *(int32_t *)(lVar2 + 0xdc) = 0;
          *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
               *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x20;
          break;
        default:
          goto LAB_1807b7706;
        case 0xe:
          if (*(int *)(unaff_RSI + 0xbec) == 0) {
            *(uint *)(unaff_RSI + 0xc00) = *(int *)(unaff_RSI + 0xbf0) * (uint)bVar20;
          }
        }
        break;
      case '\x14':
        if ((*(int *)(unaff_RSI + 0xbec) == 0) && (0x1f < (byte)pcVar19[4])) {
          SystemFunction_00018080d4a0();
        }
        else if ((byte)pcVar19[4] < 0x20) {
          if (bVar20 == 0) {
            SystemFunction_00018080d4a0();
          }
          else if (bVar12 == 1) {
            SystemFunction_00018080d4a0();
          }
        }
        goto LAB_1807b7706;
      case '\x15':
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if (bVar20 != 0) {
            *(byte *)(lVar2 + 0x107) = bVar20;
          }
          if (bVar12 != 0) {
            *(int8_t *)(lVar2 + 0x109) = 0x15;
            goto code_r0x0001807b7352;
          }
          goto code_r0x0001807b735e;
        }
code_r0x0001807b7396:
        bVar12 = *(byte *)((int64_t)plStack0000000000000068 + 0x3b);
code_r0x0001807b7370:
        if (bVar12 == 0) {
          if (*(char *)(lVar2 + 0x109) == '\x15') {
            SystemFunction_0001807b20e0();
          }
          else {
            SystemFunction_0001807b8df0(lVar2);
          }
        }
        goto LAB_1807b7706;
      case '\x16':
        if (*(int *)(unaff_RSI + 0xbec) != 0) goto LAB_1807b7706;
        bVar12 = pcVar19[4];
        *(uint *)(unaff_RSI + 0xbe0) = (uint)bVar12;
        if (0x80 < bVar12) {
          *(int32_t *)(unaff_RSI + 0xbe0) = 0x80;
        }
        break;
      case '\x17':
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          bVar12 = pcVar19[4];
          if (bVar12 == 0) {
            bVar12 = *(byte *)(unaff_RSI + 0xbe4);
          }
          else {
            *(byte *)(unaff_RSI + 0xbe4) = bVar12;
          }
          if ((bVar12 & 0xf) == 0xf) {
            *(int *)(unaff_RSI + 0xbe0) = *(int *)(unaff_RSI + 0xbe0) + (uint)(bVar12 >> 4);
            iVar7 = *(int *)(unaff_RSI + 0xbe0);
          }
          else {
            if ((bVar12 & 0xf0) == 0xf0) {
              *(int *)(unaff_RSI + 0xbe0) = *(int *)(unaff_RSI + 0xbe0) - (bVar12 & 0xf);
            }
            iVar7 = *(int *)(unaff_RSI + 0xbe0);
          }
        }
        else {
          bVar12 = *(byte *)(unaff_RSI + 0xbe4);
          if ((bVar12 & 0xf) == 0) {
            *(int *)(unaff_RSI + 0xbe0) = *(int *)(unaff_RSI + 0xbe0) + (uint)(bVar12 >> 4);
          }
          iVar7 = *(int *)(unaff_RSI + 0xbe0);
          if ((bVar12 & 0xf0) == 0) {
            iVar7 = iVar7 - (bVar12 & 0xf);
            *(int *)(unaff_RSI + 0xbe0) = iVar7;
          }
        }
        if (0x80 < iVar7) {
          *(int32_t *)(unaff_RSI + 0xbe0) = 0x80;
          goto LAB_1807b7706;
        }
        if (iVar7 < 0) {
          *(int32_t *)(unaff_RSI + 0xbe0) = 0;
        }
        break;
      case '\x18':
        if (*(int *)(unaff_RSI + 0xbec) != 0) goto LAB_1807b7706;
        uVar13 = (uint)((byte)pcVar19[4] >> 2);
code_r0x0001807b84dd:
        *(uint *)(lVar2 + 0xe0) = uVar13;
        if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
          *(uint *)(plStack0000000000000068 + 9) = uVar13;
          *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
               *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 4;
          *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
               *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x40;
        }
        break;
      case '\x19':
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if (bVar20 != 0) {
            *(byte *)(lVar2 + 0x114) = bVar20;
          }
          if (bVar12 != 0) {
            *(byte *)(lVar2 + 0x115) = bVar12;
          }
        }
        if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
          cVar6 = *(char *)(lVar2 + 0x129);
          lVar17 = *plVar11;
          if (cVar6 == '\0') {
code_r0x0001807b8570:
            iVar7 = (int)*(char *)((int64_t)*(int *)(lVar2 + 0x110) + 0x180be7520);
code_r0x0001807b8580:
            *(int *)(lVar17 + 0x54) = iVar7;
          }
          else {
            if (cVar6 == '\x01') {
              iVar7 = 0x80 - *(int *)(lVar2 + 0x110) >> 1;
              goto code_r0x0001807b8580;
            }
            if (cVar6 == '\x02') {
              iVar7 = 0x40;
              if (0x7f < *(int *)(lVar2 + 0x110)) {
                iVar7 = -0x40;
              }
              goto code_r0x0001807b8580;
            }
            if (cVar6 == '\x03') goto code_r0x0001807b8570;
          }
          iVar7 = (int)((uint)*(byte *)(lVar2 + 0x115) * *(int *)(lVar17 + 0x54)) >> 5;
          *(int *)(lVar17 + 0x54) = iVar7;
          if (*(int *)(lVar2 + 0x110) < 0) {
            if ((short)(*(short *)(lVar17 + 0x48) - (short)iVar7) < 0) {
              iVar7 = *(int *)(lVar17 + 0x48);
            }
            *(int *)(lVar17 + 0x54) = -iVar7;
          }
          else if (0x40 < *(int *)(lVar17 + 0x48) + iVar7) {
            *(int *)(lVar17 + 0x54) = 0x40 - *(int *)(lVar17 + 0x48);
          }
          *(int *)(lVar2 + 0x110) = *(int *)(lVar2 + 0x110) + (uint)*(byte *)(lVar2 + 0x114);
          if (0xff < *(int *)(lVar2 + 0x110)) {
            *(int *)(lVar2 + 0x110) = *(int *)(lVar2 + 0x110) + -0x100;
          }
          *(byte *)(lVar17 + 0x3c) = *(byte *)(lVar17 + 0x3c) | 4;
        }
        goto LAB_1807b7706;
      }
LAB_1807b7717:
      pcStack0000000000000078 = (char *)(lVar21 + 1);
      in_EAX = *(int *)(unaff_RSI + 0x3c8);
      iStack0000000000000064 = iStack0000000000000064 + 1;
    } while (iStack0000000000000064 < in_EAX);
  }
  iVar7 = 0;
  if ((*(char *)(unaff_RBP + 0x88) != '\0') && (*(int32_t *)(unaff_RBP + 0x80) = 0, 0 < in_EAX))
  {
    pcStack0000000000000078 = (char *)(unaff_RSI + 0x868);
    lVar21 = unaff_RSI + 0x45d0;
    plVar11 = (int64_t *)(unaff_RSI + 0x3d0);
    *(int64_t *)(unaff_RBP + 0x90) = lVar21;
    *(int64_t **)(unaff_RBP + 0x98) = plVar11;
    do {
      if (-1 < *pcStack0000000000000078) {
        lVar2 = *plVar11;
        plVar14 = *(int64_t **)(lVar2 + 8);
        if (*(int64_t **)(lVar2 + 8) != (int64_t *)(lVar2 + 8)) {
          do {
            lVar21 = 0;
            plVar11 = (int64_t *)*plVar14;
            bVar12 = *(byte *)((int64_t)plVar14 + 0x3c);
            if (plVar14[5] == 0) {
              bVar12 = bVar12 & 0xf7;
              *(byte *)((int64_t)plVar14 + 0x3c) = bVar12;
            }
            if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
              lVar21 = (uint64_t)*(byte *)(plVar14 + 7) * 0x618 + *(int64_t *)(unaff_RSI + 0x900);
              if ((*(byte *)((int64_t)plVar14 + 0x3e) & 1) != 0) {
                if ((char)plVar14[0xf] == '\0') {
                  function_7b52b0();
                }
                else {
                  *(int8_t *)((int64_t)plVar14 + 0xac) = 1;
                  if ((int)plVar14[0xe] == 0) {
                    *(byte *)((int64_t)plVar14 + 0x3c) = bVar12 | 0x20;
                  }
                }
              }
              if (((*(byte *)(lVar21 + 0x457) & 1) != 0) && ((char)plVar14[0x12] == '\0')) {
                function_7b52b0();
              }
              if (((*(byte *)(lVar21 + 0x4af) & 1) != 0) && ((char)plVar14[0x15] == '\0')) {
                function_7b5470();
              }
              if (*(char *)((int64_t)plVar14 + 0xac) != '\0') {
                plVar4 = plVar14 + 0x16;
                *(uint *)plVar4 = (int)*plVar4 - (uint)*(ushort *)(lVar21 + 0x50c);
                iVar7 = (int)plVar14[0x16];
                if ((int)*plVar4 < 0) {
                  *(int32_t *)(plVar14 + 0x16) = 0;
                  iVar7 = 0;
                }
                if (iVar7 == 0) {
                  *(byte *)((int64_t)plVar14 + 0x3c) = *(byte *)((int64_t)plVar14 + 0x3c) | 0x20;
                }
                else {
                  *(byte *)((int64_t)plVar14 + 0x3c) = *(byte *)((int64_t)plVar14 + 0x3c) | 2;
                }
              }
            }
            lVar17 = plVar14[5];
            iVar7 = 0;
            cVar6 = *(char *)(lVar17 + 0x32);
            if (cVar6 == '\0') {
LAB_1807b8751:
              iVar7 = (int)*(char *)((int64_t)*(int *)((int64_t)plVar14 + 0xb4) + 0x180be7520);
            }
            else if (cVar6 == '\x01') {
              uVar13 = *(int *)((int64_t)plVar14 + 0xb4) + 0x80U & 0x800000ff;
              if ((int)uVar13 < 0) {
                uVar13 = (uVar13 - 1 | 0xffffff00) + 1;
              }
              iVar7 = (int)(0x80 - uVar13) >> 1;
            }
            else if (cVar6 == '\x02') {
              iVar7 = 0x40;
              if (0x7f < *(int *)((int64_t)plVar14 + 0xb4)) {
                iVar7 = -0x40;
              }
            }
            else if (cVar6 == '\x03') goto LAB_1807b8751;
            iVar15 = (int)plVar14[10] -
                     ((int)-((uint)*(byte *)(lVar17 + 0x31) * iVar7 * (int)plVar14[0x17]) >> 0x16);
            *(int *)(plVar14 + 10) = iVar15;
            iVar7 = (int)plVar14[0x17] + (uint)*(byte *)(lVar17 + 0x33) * 0x10;
            if (0x10000 < iVar7) {
              iVar7 = 0x10000;
            }
            *(int *)(plVar14 + 0x17) = iVar7;
            *(int *)((int64_t)plVar14 + 0xb4) =
                 *(int *)((int64_t)plVar14 + 0xb4) + (uint)*(byte *)(lVar17 + 0x30);
            if (0xff < *(int *)((int64_t)plVar14 + 0xb4)) {
              *(int *)((int64_t)plVar14 + 0xb4) = *(int *)((int64_t)plVar14 + 0xb4) + -0x100;
            }
            bVar12 = *(byte *)((int64_t)plVar14 + 0x3c);
            bVar20 = bVar12 | 1;
            *(byte *)((int64_t)plVar14 + 0x3c) = bVar20;
            if (iVar15 + (int)plVar14[8] == 0) {
              bVar20 = bVar12 & 0xfe;
              *(byte *)((int64_t)plVar14 + 0x3c) = bVar20;
            }
            if (*(char *)((int64_t)plVar14 + 0x3b) == '\0') {
              *(int32_t *)((int64_t)plVar14 + 0x44) = *(int32_t *)(lVar2 + 0xdc);
            }
            if ((((bVar20 & 8) != 0) && (function_80d310(), *(int *)((int64_t)plVar14 + 0x5c) < 0))
               && (plVar14[4] != 0)) {
              function_757ed0(plVar14[4],*(int *)(*(int64_t *)plVar14[5] + 0x44) + -1,2);
            }
            if ((int64_t *)plVar14[4] != (int64_t *)0x0) {
              bVar12 = *(byte *)((int64_t)plVar14 + 0x3c);
              if ((bVar12 & 2) != 0) {
                (**(code **)(*(int64_t *)plVar14[4] + 0x20))();
                bVar12 = *(byte *)((int64_t)plVar14 + 0x3c);
              }
              if ((bVar12 & 4) != 0) {
                iVar7 = *(int *)((int64_t)plVar14 + 0x54);
                if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
                  iVar7 = iVar7 + (int)plVar14[0x11];
                }
                (**(code **)(*(int64_t *)plVar14[4] + 0xb0))
                          ((int64_t *)plVar14[4],
                           (float)(iVar7 + (int)plVar14[9]) * 0.031746034 - 1.0);
                bVar12 = *(byte *)((int64_t)plVar14 + 0x3c);
              }
              if ((bVar12 & 1) != 0) {
                if ((*(ushort *)(unaff_RSI + 0xbe6) & 4) == 0) {
                  iVar7 = (int)plVar14[10];
                }
                else {
                  iVar7 = (int)plVar14[10];
                  if ((*(byte *)(lVar21 + 0x4af) & 0x10) == 0) {
                    iVar7 = iVar7 - (int)plVar14[0x14];
                  }
                }
                iVar7 = (int)plVar14[8] + iVar7;
                if ((*(ushort *)(unaff_RSI + 0xbe6) & 8) != 0) {
                  powf(iVar7,(3840.0 - (float)iVar7) * 0.0013020834);
                }
                function_757470(plVar14[4]);
              }
              if (lVar21 != 0) {
                uVar13 = *(uint *)(lVar21 + 0x608);
                bVar12 = *(byte *)(lVar21 + 0x4af) & 0x10;
                if (((bVar12 != 0) || (uVar13 != 0xff)) && ((uVar13 & 0x80) != 0)) {
                  iVar7 = 0x100;
                  if (bVar12 != 0) {
                    iVar7 = (int)((int)plVar14[0x14] + ((int)plVar14[0x14] >> 0x1f & 3U)) >> 2;
                  }
                  if ((*(ushort *)(unaff_RSI + 0xbe6) & 0x1000) == 0) {
                    fVar23 = 8.138021e-05;
                  }
                  else {
                    fVar23 = 9.765625e-05;
                  }
                  powf(uVar13 & 0x7f,(float)((iVar7 + 0x100) * (uVar13 & 0x7f)) * fVar23 + 0.25);
                  if (*(int64_t *)(unaff_RSI + 0x5f0) != 0) {
                    SystemFunction_000180762a70(*(uint64_t *)
                                         (*(int64_t *)(unaff_RSI + 0x5f0) +
                                         (int64_t)*(int *)(plVar14[4] + 0x1d0) * 8),0);
                    SystemFunction_000180762a70(*(uint64_t *)
                                         (*(int64_t *)(unaff_RSI + 0x5f0) +
                                         (int64_t)*(int *)(plVar14[4] + 0x1d0) * 8),1);
                  }
                }
              }
              if ((*(byte *)((int64_t)plVar14 + 0x3c) & 0x20) != 0) {
                if (*(int64_t *)(unaff_RSI + 0x5f0) != 0) {
                  plVar4 = (int64_t *)plVar14[4];
                  (**(code **)(*plVar4 + 0x118))
                            (plVar4,*(uint64_t *)
                                     (*(int64_t *)(unaff_RSI + 0x5f0) +
                                     (int64_t)(int)plVar4[0x3a] * 8));
                }
                UIComponent_Renderer(plVar14[4],0x80);
                *(int32_t *)(plVar14 + 0xb) = 0;
              }
            }
            *(int8_t *)((int64_t)plVar14 + 0x3c) = 0;
            function_80c800(plVar14);
            lVar21 = *(int64_t *)(unaff_RBP + 0x90);
            plVar14 = plVar11;
          } while (plVar11 != (int64_t *)(lVar2 + 8));
          iVar7 = *(int *)(unaff_RBP + 0x80);
          plVar11 = *(int64_t **)(unaff_RBP + 0x98);
        }
      }
      iVar7 = iVar7 + 1;
      plVar11 = plVar11 + 1;
      pcStack0000000000000078 = pcStack0000000000000078 + 1;
      *(int *)(unaff_RBP + 0x80) = iVar7;
      lVar21 = lVar21 + 4;
      *(int64_t **)(unaff_RBP + 0x98) = plVar11;
      *(int64_t *)(unaff_RBP + 0x90) = lVar21;
    } while (iVar7 < *(int *)(unaff_RSI + 0x3c8));
  }
  return 0;
}
uint64_t function_7b7764(int param_1)
{
  char cVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  char *in_RAX;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *plVar9;
  int iVar10;
  int64_t lVar11;
  int64_t unaff_R14;
  float fVar12;
  char *pcStack0000000000000078;
  lVar11 = unaff_RSI + 0x45d0;
  plVar8 = (int64_t *)(unaff_RSI + 0x3d0);
  *(int64_t *)(unaff_RBP + 0x90) = lVar11;
  *(int64_t **)(unaff_RBP + 0x98) = plVar8;
  pcStack0000000000000078 = in_RAX;
  do {
    if (-1 < *pcStack0000000000000078) {
      lVar2 = *plVar8;
      plVar9 = *(int64_t **)(lVar2 + 8);
      if (*(int64_t **)(lVar2 + 8) != (int64_t *)(lVar2 + 8)) {
        do {
          plVar8 = (int64_t *)*plVar9;
          bVar5 = *(byte *)((int64_t)plVar9 + 0x3c);
          if (plVar9[5] == 0) {
            bVar5 = bVar5 & 0xf7;
            *(byte *)((int64_t)plVar9 + 0x3c) = bVar5;
          }
          if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
            unaff_R14 = (uint64_t)*(byte *)(plVar9 + 7) * 0x618 + *(int64_t *)(unaff_RSI + 0x900);
            if ((*(byte *)((int64_t)plVar9 + 0x3e) & 1) != 0) {
              if ((char)plVar9[0xf] == '\0') {
                function_7b52b0();
              }
              else {
                *(int8_t *)((int64_t)plVar9 + 0xac) = 1;
                if ((int)plVar9[0xe] == 0) {
                  *(byte *)((int64_t)plVar9 + 0x3c) = bVar5 | 0x20;
                }
              }
            }
            if (((*(byte *)(unaff_R14 + 0x457) & 1) != 0) && ((char)plVar9[0x12] == '\0')) {
              function_7b52b0();
            }
            if (((*(byte *)(unaff_R14 + 0x4af) & 1) != 0) && ((char)plVar9[0x15] == '\0')) {
              function_7b5470();
            }
            if (*(char *)((int64_t)plVar9 + 0xac) != '\0') {
              plVar3 = plVar9 + 0x16;
              *(uint *)plVar3 = (int)*plVar3 - (uint)*(ushort *)(unaff_R14 + 0x50c);
              iVar7 = (int)plVar9[0x16];
              if ((int)*plVar3 < 0) {
                *(int32_t *)(plVar9 + 0x16) = 0;
                iVar7 = 0;
              }
              if (iVar7 == 0) {
                *(byte *)((int64_t)plVar9 + 0x3c) = *(byte *)((int64_t)plVar9 + 0x3c) | 0x20;
              }
              else {
                *(byte *)((int64_t)plVar9 + 0x3c) = *(byte *)((int64_t)plVar9 + 0x3c) | 2;
              }
            }
          }
          lVar11 = plVar9[5];
          iVar7 = 0;
          cVar1 = *(char *)(lVar11 + 0x32);
          if (cVar1 == '\0') {
LAB_1807b8751:
            iVar7 = (int)*(char *)((int64_t)*(int *)((int64_t)plVar9 + 0xb4) + 0x180be7520);
          }
          else if (cVar1 == '\x01') {
            uVar4 = *(int *)((int64_t)plVar9 + 0xb4) + 0x80U & 0x800000ff;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xffffff00) + 1;
            }
            iVar7 = (int)(0x80 - uVar4) >> 1;
          }
          else if (cVar1 == '\x02') {
            iVar7 = 0x40;
            if (0x7f < *(int *)((int64_t)plVar9 + 0xb4)) {
              iVar7 = -0x40;
            }
          }
          else if (cVar1 == '\x03') goto LAB_1807b8751;
          iVar10 = (int)plVar9[10] -
                   ((int)-((uint)*(byte *)(lVar11 + 0x31) * iVar7 * (int)plVar9[0x17]) >> 0x16);
          *(int *)(plVar9 + 10) = iVar10;
          iVar7 = (int)plVar9[0x17] + (uint)*(byte *)(lVar11 + 0x33) * 0x10;
          if (0x10000 < iVar7) {
            iVar7 = 0x10000;
          }
          *(int *)(plVar9 + 0x17) = iVar7;
          *(int *)((int64_t)plVar9 + 0xb4) =
               *(int *)((int64_t)plVar9 + 0xb4) + (uint)*(byte *)(lVar11 + 0x30);
          if (0xff < *(int *)((int64_t)plVar9 + 0xb4)) {
            *(int *)((int64_t)plVar9 + 0xb4) = *(int *)((int64_t)plVar9 + 0xb4) + -0x100;
          }
          bVar5 = *(byte *)((int64_t)plVar9 + 0x3c);
          bVar6 = bVar5 | 1;
          *(byte *)((int64_t)plVar9 + 0x3c) = bVar6;
          if (iVar10 + (int)plVar9[8] == 0) {
            bVar6 = bVar5 & 0xfe;
            *(byte *)((int64_t)plVar9 + 0x3c) = bVar6;
          }
          if (*(char *)((int64_t)plVar9 + 0x3b) == '\0') {
            *(int32_t *)((int64_t)plVar9 + 0x44) = *(int32_t *)(lVar2 + 0xdc);
          }
          if ((((bVar6 & 8) != 0) && (function_80d310(), *(int *)((int64_t)plVar9 + 0x5c) < 0)) &&
             (plVar9[4] != 0)) {
            function_757ed0(plVar9[4],*(int *)(*(int64_t *)plVar9[5] + 0x44) + -1,2);
          }
          if ((int64_t *)plVar9[4] != (int64_t *)0x0) {
            bVar5 = *(byte *)((int64_t)plVar9 + 0x3c);
            if ((bVar5 & 2) != 0) {
              (**(code **)(*(int64_t *)plVar9[4] + 0x20))();
              bVar5 = *(byte *)((int64_t)plVar9 + 0x3c);
            }
            if ((bVar5 & 4) != 0) {
              iVar7 = *(int *)((int64_t)plVar9 + 0x54);
              if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
                iVar7 = iVar7 + (int)plVar9[0x11];
              }
              (**(code **)(*(int64_t *)plVar9[4] + 0xb0))
                        ((int64_t *)plVar9[4],(float)(iVar7 + (int)plVar9[9]) * 0.031746034 - 1.0);
              bVar5 = *(byte *)((int64_t)plVar9 + 0x3c);
            }
            if ((bVar5 & 1) != 0) {
              if ((*(ushort *)(unaff_RSI + 0xbe6) & 4) == 0) {
                iVar7 = (int)plVar9[10];
              }
              else {
                iVar7 = (int)plVar9[10];
                if ((*(byte *)(unaff_R14 + 0x4af) & 0x10) == 0) {
                  iVar7 = iVar7 - (int)plVar9[0x14];
                }
              }
              iVar7 = (int)plVar9[8] + iVar7;
              if ((*(ushort *)(unaff_RSI + 0xbe6) & 8) != 0) {
                powf(iVar7,(3840.0 - (float)iVar7) * 0.0013020834);
              }
              function_757470(plVar9[4]);
            }
            if (unaff_R14 != 0) {
              uVar4 = *(uint *)(unaff_R14 + 0x608);
              bVar5 = *(byte *)(unaff_R14 + 0x4af) & 0x10;
              if (((bVar5 != 0) || (uVar4 != 0xff)) && ((uVar4 & 0x80) != 0)) {
                iVar7 = 0x100;
                if (bVar5 != 0) {
                  iVar7 = (int)((int)plVar9[0x14] + ((int)plVar9[0x14] >> 0x1f & 3U)) >> 2;
                }
                if ((*(ushort *)(unaff_RSI + 0xbe6) & 0x1000) == 0) {
                  fVar12 = 8.138021e-05;
                }
                else {
                  fVar12 = 9.765625e-05;
                }
                powf(uVar4 & 0x7f,(float)((iVar7 + 0x100) * (uVar4 & 0x7f)) * fVar12 + 0.25);
                if (*(int64_t *)(unaff_RSI + 0x5f0) != 0) {
                  SystemFunction_000180762a70(*(uint64_t *)
                                       (*(int64_t *)(unaff_RSI + 0x5f0) +
                                       (int64_t)*(int *)(plVar9[4] + 0x1d0) * 8),0);
                  SystemFunction_000180762a70(*(uint64_t *)
                                       (*(int64_t *)(unaff_RSI + 0x5f0) +
                                       (int64_t)*(int *)(plVar9[4] + 0x1d0) * 8),1);
                }
              }
            }
            if ((*(byte *)((int64_t)plVar9 + 0x3c) & 0x20) != 0) {
              if (*(int64_t *)(unaff_RSI + 0x5f0) != 0) {
                plVar3 = (int64_t *)plVar9[4];
                (**(code **)(*plVar3 + 0x118))
                          (plVar3,*(uint64_t *)
                                   (*(int64_t *)(unaff_RSI + 0x5f0) +
                                   (int64_t)(int)plVar3[0x3a] * 8));
              }
              UIComponent_Renderer(plVar9[4],0x80);
              *(int32_t *)(plVar9 + 0xb) = 0;
            }
          }
          unaff_R14 = 0;
          *(int8_t *)((int64_t)plVar9 + 0x3c) = 0;
          function_80c800(plVar9);
          lVar11 = *(int64_t *)(unaff_RBP + 0x90);
          plVar9 = plVar8;
        } while (plVar8 != (int64_t *)(lVar2 + 8));
        param_1 = *(int *)(unaff_RBP + 0x80);
        plVar8 = *(int64_t **)(unaff_RBP + 0x98);
      }
    }
    param_1 = param_1 + 1;
    plVar8 = plVar8 + 1;
    pcStack0000000000000078 = pcStack0000000000000078 + 1;
    *(int *)(unaff_RBP + 0x80) = param_1;
    lVar11 = lVar11 + 4;
    *(int64_t **)(unaff_RBP + 0x98) = plVar8;
    *(int64_t *)(unaff_RBP + 0x90) = lVar11;
    if (*(int *)(unaff_RSI + 0x3c8) <= param_1) {
      return 0;
    }
  } while( true );
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7b78f3(void)
{
  byte *pbVar1;
  uint *puVar2;
  int64_t lVar3;
  int64_t *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  int64_t *plVar15;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *plVar16;
  int iVar17;
  uint64_t uVar18;
  char cVar19;
  int64_t *in_R10;
  int64_t unaff_R13;
  int64_t lVar20;
  int64_t *unaff_R14;
  int64_t lVar21;
  bool bVar22;
  float fVar23;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  char cStack0000000000000060;
  int iStack0000000000000064;
  int64_t *plStack0000000000000068;
  int64_t *local_var_70;
  plStack0000000000000068 = in_R10;
code_r0x0001807b78f3:
  if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') goto LAB_1807b7706;
  SystemFunction_0001807b5200(unaff_RBX);
  bVar10 = *(byte *)(unaff_RBX + 0xf9);
  lVar20 = *unaff_R14;
  if ((bVar10 & 0xf) == 0) {
    *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + (uint)(bVar10 >> 4);
  }
  iVar7 = *(int *)(unaff_RBX + 0xdc);
  if ((bVar10 & 0xf0) == 0) {
    iVar7 = iVar7 - (bVar10 & 0xf);
    *(int *)(unaff_RBX + 0xdc) = iVar7;
  }
  if (iVar7 < 0x41) goto LAB_1807b7118;
LAB_1807b7130:
  *(int32_t *)(unaff_RBX + 0xdc) = 0x40;
LAB_1807b713a:
  *(byte *)(lVar20 + 0x3c) = *(byte *)(lVar20 + 0x3c) | 2;
  lVar20 = unaff_R13;
LAB_1807b7717:
  iVar17 = 0;
  unaff_R13 = lVar20 + 1;
  iVar7 = *(int *)(unaff_RSI + 0x3c8);
  iStack0000000000000064 = iStack0000000000000064 + 1;
  if (iStack0000000000000064 < iVar7) {
    cVar19 = '\0';
    *(int8_t *)(unaff_RBP + 0x80) = 0;
    pcVar9 = (char *)(lVar20 + 0xa91 + unaff_RSI + unaff_R13 * 4);
    cVar6 = pcVar9[3];
    bVar13 = (byte)pcVar9[4] >> 4;
    bVar10 = pcVar9[4] & 0xf;
    *(byte *)(unaff_RBP + 0x90) = bVar13;
    *(byte *)(unaff_RBP + 0x98) = bVar10;
    lVar20 = unaff_R13;
    if ((cVar6 == '\x13') && (bVar13 == 0xd)) goto code_r0x0001807b6641;
    goto LAB_1807b6660;
  }
  if (*(char *)(unaff_RBP + 0x88) == '\0') {
    return 0;
  }
  *(int32_t *)(unaff_RBP + 0x80) = 0;
  if (iVar7 < 1) {
    return 0;
  }
  pcVar9 = (char *)(unaff_RSI + 0x868);
  lVar20 = unaff_RSI + 0x45d0;
  plVar15 = (int64_t *)(unaff_RSI + 0x3d0);
  *(int64_t *)(unaff_RBP + 0x90) = lVar20;
  *(int64_t **)(unaff_RBP + 0x98) = plVar15;
  goto LAB_1807b7820;
code_r0x0001807b6641:
  uVar8 = *(uint *)(unaff_RSI + 0xbec);
  if ((int)uVar8 < (int)(uint)bVar10) goto LAB_1807b7717;
  if (uVar8 == 0) {
    if (bVar10 == 0) goto LAB_1807b7717;
LAB_1807b6660:
    uVar8 = *(uint *)(unaff_RSI + 0xbec);
    if (uVar8 == 0) goto LAB_1807b6688;
    if ((cVar6 == '\x13') && (bVar13 == 0xd)) goto LAB_1807b667a;
  }
  else {
LAB_1807b667a:
    if ((uVar8 == bVar10) || ((uVar8 == 1 && (bVar10 == 0)))) {
LAB_1807b6688:
      cVar19 = '\x01';
      *(int8_t *)(unaff_RBP + 0x80) = 1;
    }
  }
  unaff_RBX = *(int64_t *)(unaff_RSI + 0x3d0 + unaff_R13 * 8);
  plStack0000000000000068 = *(int64_t **)(unaff_RBX + 8);
  unaff_R14 = (int64_t *)(unaff_RBX + 8);
  if ((plStack0000000000000068 == unaff_R14) && (*(int64_t **)(unaff_RBX + 0x10) == unaff_R14)) {
    system_system_buffer_memory = &system_data_7a80;
    plStack0000000000000068 = (int64_t *)0x180be7ac0;
  }
  if (cVar19 != '\0') {
    if ((*(char *)(unaff_RBX + 0xd8) == '\x12') && (pcVar9[3] != '\x12')) {
      *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + *(int *)(unaff_RBX + 0xe4);
    }
    *(char *)(unaff_RBX + 0xd8) = pcVar9[3];
    *(int32_t *)(unaff_RBX + 0xe4) = 0;
    *(int32_t *)((int64_t)plStack0000000000000068 + 0x54) = 0;
    *(int8_t *)((int64_t)plStack0000000000000068 + 0x3c) = 0;
    bVar5 = (byte)(*pcVar9 - 1U) < 0xfd;
    if (bVar5) {
      *(char *)(unaff_RBX + 0xd1) = *pcVar9 + -1;
    }
    if ((pcVar9[1] != '\0') &&
       (*(char *)(unaff_RBX + 0xd0) = pcVar9[1] + -1,
       plStack0000000000000068 == (int64_t *)0x180be7ac0)) {
      bVar5 = true;
    }
    if (((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) &&
       (*(int *)(unaff_RSI + 0x8f8) <= (int)(uint)*(byte *)(unaff_RBX + 0xd0))) {
      bVar5 = false;
    }
    *(char *)(unaff_RBX + 0xd8) = pcVar9[3];
    *(int8_t *)((int64_t)plStack0000000000000068 + 0x3c) = 0;
    bVar22 = false;
    if (-1 < *(char *)(unaff_RSI + 0x868 + unaff_R13)) {
      bVar22 = bVar5;
    }
    if (((pcVar9[3] == '\a') || (pcVar9[3] == '\f')) ||
       ((0xc1 < (byte)pcVar9[2] && ((byte)pcVar9[2] < 0xcc)))) {
      bVar5 = true;
      if (plStack0000000000000068 == (int64_t *)0x180be7ac0) {
        bVar5 = false;
      }
    }
    else {
      bVar5 = false;
    }
    if (bVar22) {
      lVar21 = (uint64_t)*(byte *)(unaff_RBX + 0xd0) * 0x618 + *(int64_t *)(unaff_RSI + 0x900);
      if ((*(byte *)(unaff_RSI + 0xbe6) & 4) == 0) {
        uVar8 = *(byte *)(unaff_RBX + 0xd0) + 1;
      }
      else {
        uVar8 = (uint)*(byte *)(lVar21 + 0x518 + (uint64_t)*(byte *)(unaff_RBX + 0xd1) * 2);
      }
      if (uVar8 != 0) {
        *(char *)(unaff_RBX + 0xd2) = (char)uVar8 + -1;
        if (((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) && (*(char *)(lVar21 + 0x511) != '\0')) {
          for (plVar15 = (int64_t *)*unaff_R14; plVar15 != unaff_R14;
              plVar15 = (int64_t *)*plVar15) {
            cVar6 = *(char *)(lVar21 + 0x511);
            if (cVar6 == '\x01') {
              bVar22 = *(char *)(unaff_RBX + 0xd1) == *(char *)((int64_t)plVar15 + 0x39);
LAB_1807b6891:
              if (bVar22) {
                cVar6 = *(char *)(lVar21 + 0x512);
                if (cVar6 == '\0') {
LAB_1807b68e8:
                  *(byte *)((int64_t)plVar15 + 0x3c) = *(byte *)((int64_t)plVar15 + 0x3c) | 0x20;
                }
                else if (cVar6 == '\x01') {
                  bVar10 = *(byte *)(plVar15 + 7);
LAB_1807b68b6:
                  lVar3 = *(int64_t *)(unaff_RSI + 0x900);
                  *(int8_t *)((int64_t)plVar15 + 0xbc) = 1;
                  if (((*(byte *)((int64_t)plStack0000000000000068 + 0x3e) & 1) == 0) ||
                     ((*(byte *)((uint64_t)bVar10 * 0x618 + lVar3 + 0x400) & 4) != 0))
                  goto LAB_1807b68df;
                }
                else if (cVar6 == '\x02') {
                  *(int8_t *)((int64_t)plVar15 + 0xac) = 1;
                }
              }
            }
            else {
              if (cVar6 == '\x02') {
                bVar22 = *(char *)(unaff_RBX + 0xd2) == *(char *)((int64_t)plVar15 + 0x3a);
                goto LAB_1807b6891;
              }
              if ((cVar6 == '\x03') &&
                 (bVar10 = *(byte *)(plVar15 + 7), *(byte *)(unaff_RBX + 0xd0) == bVar10)) {
                cVar6 = *(char *)(lVar21 + 0x512);
                if (cVar6 == '\0') goto LAB_1807b68e8;
                if (cVar6 == '\x01') goto LAB_1807b68b6;
                if (cVar6 != '\x02') goto LAB_1807b68ec;
LAB_1807b68df:
                *(int8_t *)((int64_t)plVar15 + 0xac) = 1;
              }
            }
LAB_1807b68ec:
          }
        }
        if (!bVar5) {
          plStack0000000000000068 = (int64_t *)*unaff_R14;
          if (plStack0000000000000068 == unaff_R14) {
            iVar7 = function_80d590();
            if (iVar7 != 0) {
              system_system_buffer_memory = &system_data_7a80;
              plStack0000000000000068 = (int64_t *)0x180be7ac0;
            }
LAB_1807b6a2c:
            if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
              *(int8_t *)((int64_t)plStack0000000000000068 + 0x3b) = 0;
              *(int8_t *)((int64_t)plStack0000000000000068 + 0x3d) =
                   *(int8_t *)
                    ((uint64_t)*(byte *)(unaff_RBX + 0xd0) * 0x618 + 0x510 +
                    *(int64_t *)(unaff_RSI + 0x900));
              *(int8_t *)((int64_t)plStack0000000000000068 + 0x3e) =
                   *(int8_t *)
                    ((uint64_t)*(byte *)(unaff_RBX + 0xd0) * 0x618 + 0x400 +
                    *(int64_t *)(unaff_RSI + 0x900));
            }
          }
          else if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
            cVar6 = *(char *)((int64_t)plStack0000000000000068 + 0x3d);
            lVar3 = *(int64_t *)(unaff_RSI + 0x900);
            if (cVar6 == '\x01') {
              *(int8_t *)((int64_t)plStack0000000000000068 + 0x3b) = 1;
LAB_1807b6992:
              iVar7 = *(int *)(unaff_RBX + 0xdc);
            }
            else {
              if (cVar6 != '\x02') {
                if (cVar6 != '\x03') goto LAB_1807b6a2c;
                *(int8_t *)((int64_t)plStack0000000000000068 + 0x3b) = 1;
                *(int8_t *)((int64_t)plStack0000000000000068 + 0xac) = 1;
                goto LAB_1807b6992;
              }
              *(int8_t *)((int64_t)plStack0000000000000068 + 0x3b) = 1;
              *(int8_t *)((int64_t)plStack0000000000000068 + 0xbc) = 1;
              if (((*(byte *)((int64_t)plStack0000000000000068 + 0x3e) & 1) == 0) ||
                 ((*(byte *)((uint64_t)*(byte *)(plStack0000000000000068 + 7) * 0x618 + lVar3 +
                            0x400) & 4) != 0)) {
                *(int8_t *)((int64_t)plStack0000000000000068 + 0xac) = 1;
              }
              iVar7 = *(int *)(unaff_RBX + 0xdc);
            }
            if (iVar7 == 0) {
              *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
                   *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x20;
            }
            iVar7 = function_80d590();
            plStack0000000000000068 = local_var_70;
            if (iVar7 != 0) {
              system_system_buffer_memory = &system_data_7a80;
              plStack0000000000000068 = (int64_t *)0x180be7ac0;
            }
            *(int32_t *)((int64_t)plStack0000000000000068 + 0x44) =
                 *(int32_t *)(unaff_RBX + 0xdc);
            goto LAB_1807b6a2c;
          }
          *(int8_t *)((int64_t)plStack0000000000000068 + 0x3a) =
               *(int8_t *)(unaff_RBX + 0xd2);
          *(int8_t *)(plStack0000000000000068 + 7) = *(int8_t *)(unaff_RBX + 0xd0);
          *(int8_t *)((int64_t)plStack0000000000000068 + 0x39) =
               *(int8_t *)(unaff_RBX + 0xd1);
          if (((int)(uint)*(byte *)(unaff_RBX + 0xd2) < *(int *)(unaff_RSI + 0x8fc)) &&
             (lVar3 = *(int64_t *)
                       (*(int64_t *)(unaff_RSI + 0x848) +
                       (uint64_t)*(byte *)(unaff_RBX + 0xd2) * 8), lVar3 != 0)) {
            plStack0000000000000068[5] = lVar3;
          }
          else {
            plStack0000000000000068[5] = (int64_t)&system_data_7a80;
          }
        }
        bVar10 = *(byte *)(unaff_RBX + 0xd1);
        if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
          bVar10 = *(byte *)(lVar21 + 0x517 + (uint64_t)bVar10 * 2);
        }
        *(byte *)(unaff_RBX + 0xd3) = bVar10;
        if ((*(byte *)(unaff_RSI + 0xbe6) & 8) == 0) {
          uVar8 = (uint)(*(int *)((uint64_t)bVar10 * 4 + 0x180be7840) * 0x20ab) /
                  *(uint *)(plStack0000000000000068[5] + 8);
        }
        else {
          iVar7 = (0x78 - (uint)bVar10) * 0x40;
          *(int *)(unaff_RBX + 0xd4) = iVar7;
          fVar23 = (float)logf((float)*(uint *)(plStack0000000000000068[5] + 8) * unaff_XMM6_Da);
          uVar8 = iVar7 - (int)(fVar23 * unaff_XMM7_Da);
        }
        *(uint *)(unaff_RBX + 0xd4) = uVar8;
        if (!bVar5) {
          *(int8_t *)(unaff_RBX + 0x106) = 0;
          *(int8_t *)(unaff_RBX + 0x10a) = 0;
          *(int32_t *)(unaff_RBX + 0x110) = 0;
          *(int8_t *)(unaff_RBX + 0x116) = 0;
          *(int8_t *)(unaff_RBX + 0xfd) = 0;
          *(uint *)(plStack0000000000000068 + 8) = uVar8;
          *(int32_t *)(plStack0000000000000068 + 9) = *(int32_t *)(unaff_RBX + 0xe0);
          *(int32_t *)((int64_t)plStack0000000000000068 + 0x5c) = 1;
          if (((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) && (-1 < (char)*(byte *)(lVar21 + 0x50f))) {
            *(uint *)(plStack0000000000000068 + 9) = ((uint)*(byte *)(lVar21 + 0x50f) * 0x40) / 0x3f
            ;
          }
          if ((char)*(byte *)(plStack0000000000000068[5] + 0xd) < '\0') {
            *(uint *)(plStack0000000000000068 + 9) =
                 *(byte *)(plStack0000000000000068[5] + 0xd) & 0x7f;
          }
          if ((*(byte *)(unaff_RSI + 0xbe6) & 4) == 0) {
            *(uint *)(plStack0000000000000068 + 0xc) =
                 (uint)*(byte *)(plStack0000000000000068[5] + 0x25);
          }
          else {
            iVar7 = ((uint)*(byte *)(unaff_RBX + 0xd1) - (uint)*(byte *)(lVar21 + 0x514)) *
                    (uint)*(byte *)(lVar21 + 0x513);
            *(int *)(plStack0000000000000068 + 9) =
                 (int)plStack0000000000000068[9] + ((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3);
            *(uint *)(plStack0000000000000068 + 0xc) =
                 (uint)*(byte *)(plStack0000000000000068[5] + 0x25) *
                 (uint)*(byte *)(lVar21 + 0x50e) >> 7;
          }
          *(int8_t *)((int64_t)plStack0000000000000068 + 0x3c) = 0xc;
        }
        if (((*(ushort *)(unaff_RSI + 0xbe6) & 4) != 0) &&
           ((!bVar5 || ((*(ushort *)(unaff_RSI + 0xbe6) & 0x20) != 0)))) {
          *(int8_t *)((int64_t)plStack0000000000000068 + 0xbc) = 0;
          uVar18 = (uint64_t)*(byte *)(unaff_RBX + 0xd0);
          lVar21 = *(int64_t *)(unaff_RSI + 0x900);
          if (((*(byte *)(uVar18 * 0x618 + 0x400 + lVar21) & 8) == 0) ||
             (*(char *)((int64_t)plStack0000000000000068 + 0x3d) == '\0')) {
            *(int32_t *)(plStack0000000000000068 + 0xe) = 0x40;
            *(int32_t *)(plStack0000000000000068 + 0xd) = 0;
            *(int32_t *)((int64_t)plStack0000000000000068 + 100) = 0;
            *(int32_t *)((int64_t)plStack0000000000000068 + 0x74) = 0;
            uVar18 = (uint64_t)*(byte *)(unaff_RBX + 0xd0);
            lVar21 = *(int64_t *)(unaff_RSI + 0x900);
          }
          if (((*(byte *)(uVar18 * 0x618 + 0x457 + lVar21) & 8) == 0) ||
             (*(char *)((int64_t)plStack0000000000000068 + 0x3d) == '\0')) {
            *(int32_t *)(plStack0000000000000068 + 0x11) = 0;
            *(int32_t *)(plStack0000000000000068 + 0x10) = 0;
            *(int32_t *)((int64_t)plStack0000000000000068 + 0x7c) = 0;
            *(int32_t *)((int64_t)plStack0000000000000068 + 0x8c) = 0;
            uVar18 = (uint64_t)*(byte *)(unaff_RBX + 0xd0);
            lVar21 = *(int64_t *)(unaff_RSI + 0x900);
          }
          if (((*(byte *)(uVar18 * 0x618 + 0x4af + lVar21) & 8) == 0) ||
             (*(char *)((int64_t)plStack0000000000000068 + 0x3d) == '\0')) {
            *(int32_t *)(plStack0000000000000068 + 0x14) = 0;
            *(int32_t *)(plStack0000000000000068 + 0x13) = 0;
            *(int32_t *)((int64_t)plStack0000000000000068 + 0x94) = 0;
            *(int32_t *)((int64_t)plStack0000000000000068 + 0xa4) = 0;
          }
          *(int8_t *)((int64_t)plStack0000000000000068 + 0xac) = 0;
          *(int32_t *)(plStack0000000000000068 + 0x16) = 0x400;
          *(int8_t *)(plStack0000000000000068 + 0xf) = 0;
          *(int8_t *)(plStack0000000000000068 + 0x12) = 0;
          *(int8_t *)(plStack0000000000000068 + 0x15) = 0;
          *(int32_t *)(plStack0000000000000068 + 0x17) = 0;
          *(int32_t *)((int64_t)plStack0000000000000068 + 0xb4) = 0;
        }
        cVar19 = *(char *)(unaff_RBP + 0x80);
        bVar10 = *(byte *)(unaff_RBP + 0x98);
      }
      bVar13 = *(byte *)(unaff_RBP + 0x90);
    }
    if ((plStack0000000000000068[5] != 0) && (pcVar9[1] != '\0')) {
      *(uint *)(unaff_RBX + 0xdc) = (uint)*(byte *)(plStack0000000000000068[5] + 0xc);
    }
  }
  for (plVar15 = (int64_t *)*unaff_R14; plVar15 != unaff_R14; plVar15 = (int64_t *)*plVar15) {
    *(int32_t *)(plVar15 + 10) = 0;
  }
  *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
       *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
  *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
       *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 2;
  if (pcVar9[2] != '\0') {
    function_7b5960(unaff_RBX,pcVar9,cVar19);
  }
  if ((((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) &&
      (bVar12 = *(byte *)(unaff_RBX + 0xd0), lVar21 = *(int64_t *)(unaff_RSI + 0x900),
      *pcVar9 == -1)) &&
     ((*(int8_t *)((int64_t)plStack0000000000000068 + 0xbc) = 1,
      (*(byte *)((int64_t)plStack0000000000000068 + 0x3e) & 1) == 0 ||
      ((*(byte *)((uint64_t)bVar12 * 0x618 + lVar21 + 0x400) & 4) != 0)))) {
    *(int8_t *)((int64_t)plStack0000000000000068 + 0xac) = 1;
  }
  if (*pcVar9 == -2) {
    *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
         *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x20;
  }
  switch(pcVar9[3]) {
  case '\x01':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      if (pcVar9[4] != 0) {
        *(uint *)(unaff_RSI + 0xbf0) = (uint)(byte)pcVar9[4];
      }
      goto LAB_1807b7717;
    }
    break;
  case '\x02':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      bVar10 = pcVar9[4];
      *(int32_t *)(unaff_RSI + 0xc08) = 0;
      uVar8 = (uint)bVar10;
      if (*(int *)(unaff_RSI + 0x8ec) <= (int)(uint)bVar10) {
        uVar8 = 0;
      }
      cStack0000000000000060 = '\x01';
      *(uint *)(unaff_RSI + 0xc0c) = uVar8;
    }
    goto LAB_1807b7717;
  case '\x03':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      bVar10 = pcVar9[4];
      puVar2 = *(uint **)(unaff_RBP + -0x80);
      *(uint *)(unaff_RSI + 0xc08) = (uint)bVar10;
      uVar8 = (uint)bVar10;
      if (uVar8 != *puVar2 && (int)*puVar2 <= (int)(uint)bVar10) {
        uVar8 = 0;
      }
      *(uint *)(unaff_RSI + 0xc08) = uVar8;
      if (cStack0000000000000060 == '\0') {
        iVar7 = *(int *)(unaff_RSI + 0xbfc) + 1;
        *(int *)(unaff_RSI + 0xc0c) = iVar7;
        if ((*(int *)(unaff_RSI + 0xbd0) == 0) &&
           (*(char *)((int64_t)*(int *)(unaff_RSI + 0xbfc) + 0x291 + unaff_RSI) == -1)) {
          do {
            iVar17 = iVar7;
            iVar7 = iVar17 + -1;
            *(int *)(unaff_RSI + 0xc0c) = iVar7;
            if (*(char *)((int64_t)iVar17 + 0x28f + unaff_RSI) == -1) break;
          } while (-1 < iVar7);
          *(int *)(unaff_RSI + 0xc0c) = iVar17;
        }
      }
      if (*(int *)(unaff_RSI + 0x8ec) <= *(int *)(unaff_RSI + 0xc0c)) {
        *(int32_t *)(unaff_RSI + 0xc0c) = 0;
      }
      goto LAB_1807b7717;
    }
    break;
  case '\x04':
    if (*(int *)(unaff_RSI + 0xbec) != 0) {
      if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
        bVar10 = *(byte *)(unaff_RBX + 0xf9);
        lVar20 = *unaff_R14;
        if ((bVar10 & 0xf) == 0) {
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + (uint)(bVar10 >> 4);
        }
        iVar7 = *(int *)(unaff_RBX + 0xdc);
        if ((bVar10 & 0xf0) == 0) {
          iVar7 = iVar7 - (bVar10 & 0xf);
          *(int *)(unaff_RBX + 0xdc) = iVar7;
        }
        if (0x40 < iVar7) goto LAB_1807b7130;
LAB_1807b7118:
        if (iVar7 < 0) {
          *(int32_t *)(unaff_RBX + 0xdc) = 0;
          *(byte *)(lVar20 + 0x3c) = *(byte *)(lVar20 + 0x3c) | 2;
          lVar20 = unaff_R13;
          goto LAB_1807b7717;
        }
        goto LAB_1807b713a;
      }
      break;
    }
    if (pcVar9[4] != '\0') {
      *(char *)(unaff_RBX + 0xf9) = pcVar9[4];
    }
    if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') break;
    bVar10 = *(byte *)(unaff_RBX + 0xf9);
    if ((bVar10 & 0xf) == 0xf) {
      *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + (uint)(bVar10 >> 4);
    }
    else if ((bVar10 & 0xf0) == 0xf0) {
      *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) - (bVar10 & 0xf);
    }
    iVar7 = *(int *)(unaff_RBX + 0xdc);
    goto joined_r0x0001807b76f6;
  case '\x05':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      if (pcVar9[4] != '\0') {
        *(char *)(unaff_RBX + 0xf4) = pcVar9[4];
      }
      if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
        bVar10 = *(byte *)(unaff_RBX + 0xf4);
        if ((bVar10 & 0xf0) == 0xf0) {
          *(uint *)(plStack0000000000000068 + 8) =
               (int)plStack0000000000000068[8] + (bVar10 & 0xf) * 4;
          bVar10 = *(byte *)(unaff_RBX + 0xf4);
        }
        if ((bVar10 & 0xf0) == 0xe0) {
          *(uint *)(plStack0000000000000068 + 8) = (int)plStack0000000000000068[8] + (bVar10 & 0xf);
        }
        goto LAB_1807b7717;
      }
    }
    else if (*(byte *)(unaff_RBX + 0xf4) < 0xe0) {
      if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
        *(uint *)(plStack0000000000000068 + 8) =
             (int)plStack0000000000000068[8] + (uint)*(byte *)(unaff_RBX + 0xf4) * 4;
      }
      goto LAB_1807b7717;
    }
    break;
  case '\x06':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      if (pcVar9[4] != '\0') {
        *(char *)(unaff_RBX + 0xf4) = pcVar9[4];
      }
      if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
        bVar10 = *(byte *)(unaff_RBX + 0xf4);
        if ((bVar10 & 0xf0) == 0xf0) {
          *(uint *)(plStack0000000000000068 + 8) =
               (int)plStack0000000000000068[8] + (bVar10 & 0xf) * -4;
          bVar10 = *(byte *)(unaff_RBX + 0xf4);
        }
        if ((bVar10 & 0xf0) == 0xe0) {
          *(uint *)(plStack0000000000000068 + 8) = (int)plStack0000000000000068[8] - (bVar10 & 0xf);
        }
        goto LAB_1807b7717;
      }
    }
    else if ((*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') &&
            (*(byte *)(unaff_RBX + 0xf4) < 0xe0)) {
      *(uint *)(plStack0000000000000068 + 8) =
           (int)plStack0000000000000068[8] + (uint)*(byte *)(unaff_RBX + 0xf4) * -4;
      if ((int)plStack0000000000000068[8] < 1) {
        *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
             *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x20;
      }
      else {
        *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
             *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
      }
      goto LAB_1807b7717;
    }
    break;
  case '\a':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      cVar6 = pcVar9[4];
      if (cVar6 != '\0') {
        if ((*(byte *)(unaff_RSI + 0xbe6) & 0x20) == 0) {
          *(char *)(unaff_RBX + 0xf4) = cVar6;
        }
        else {
          *(char *)(unaff_RBX + 0x104) = cVar6;
        }
      }
      *(int32_t *)(unaff_RBX + 0x100) = *(int32_t *)(unaff_RBX + 0xd4);
      if (*pcVar9 != '\0') {
        *(int8_t *)(unaff_RBX + 0x105) = 0;
      }
      goto LAB_1807b7717;
    }
    if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
      SystemFunction_0001807b5200(unaff_RBX);
    }
    break;
  case '\b':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      if (bVar13 != 0) {
        *(byte *)(unaff_RBX + 0x107) = bVar13;
      }
      if (bVar10 != 0) {
        *(int8_t *)(unaff_RBX + 0x109) = 8;
code_r0x0001807b7352:
        *(byte *)(unaff_RBX + 0x108) = bVar10;
      }
      goto code_r0x0001807b735e;
    }
code_r0x0001807b7396:
    bVar10 = *(byte *)((int64_t)plStack0000000000000068 + 0x3b);
    goto code_r0x0001807b7370;
  case '\t':
    if ((*(int *)(unaff_RSI + 0xbec) == 0) && (pcVar9[4] != '\0')) {
      *(byte *)(unaff_RBX + 0x117) = bVar13 + 1;
      *(byte *)(unaff_RBX + 0x118) = bVar10 + 1;
    }
    if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
      if (*(byte *)(unaff_RBX + 0x117) <= *(byte *)(unaff_RBX + 0x116)) {
        *(int *)(unaff_RBX + 0xe4) = -*(int *)(unaff_RBX + 0xdc);
      }
      bVar10 = *(byte *)(unaff_RBX + 0x116) + 1;
      if ((uint)*(byte *)(unaff_RBX + 0x118) + (uint)*(byte *)(unaff_RBX + 0x117) <= (uint)bVar10) {
        bVar10 = 0;
      }
      *(byte *)(unaff_RBX + 0x116) = bVar10;
      *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
           *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 2;
      goto LAB_1807b7717;
    }
    break;
  case '\n':
    if ((*(int *)(unaff_RSI + 0xbec) == 0) && (pcVar9[4] != '\0')) {
      *(char *)(unaff_RBX + 0x119) = pcVar9[4];
    }
    if ((*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') ||
       (bVar10 = *(byte *)(unaff_RBX + 0x119), bVar10 == 0)) break;
    iVar7 = *(int *)(unaff_RSI + 0xbec);
    bVar13 = bVar10 >> 4;
    iVar7 = iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                    (int)(((int64_t)iVar7 / 3 + ((int64_t)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -3;
    if (iVar7 == 1) {
      if ((*(byte *)(unaff_RSI + 0xbe6) & 8) != 0) {
        *(uint *)(plStack0000000000000068 + 10) =
             (int)plStack0000000000000068[10] + (uint)bVar13 * -0x40;
        *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
             *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
        break;
      }
      uVar8 = *(uint *)(plStack0000000000000068[5] + 8);
code_r0x0001807b74f4:
      *(uint *)(plStack0000000000000068 + 10) =
           (int)plStack0000000000000068[10] +
           ((uint)(*(int *)(((uint64_t)bVar13 + (uint64_t)*(byte *)(unaff_RBX + 0xd1)) * 4 +
                           0x180be7840) * 0x20ab) / uVar8 -
           (uint)(*(int *)((uint64_t)*(byte *)(unaff_RBX + 0xd1) * 4 + 0x180be7840) * 0x20ab) /
           uVar8);
    }
    else if (iVar7 == 2) {
      if ((*(byte *)(unaff_RSI + 0xbe6) & 8) != 0) {
        *(uint *)(plStack0000000000000068 + 10) =
             (int)plStack0000000000000068[10] + (uint)(bVar10 & 0xf) * -0x40;
        *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
             *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
        break;
      }
      uVar8 = *(uint *)(plStack0000000000000068[5] + 8);
      bVar13 = bVar10 & 0xf;
      goto code_r0x0001807b74f4;
    }
    *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
         *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
    break;
  case '\v':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      if (pcVar9[4] != '\0') {
        *(char *)(unaff_RBX + 0xf9) = pcVar9[4];
      }
      if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
        bVar10 = *(byte *)(unaff_RBX + 0xf9);
        if ((bVar10 & 0xf) == 0xf) {
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + (uint)(bVar10 >> 4);
        }
        else if ((bVar10 & 0xf0) == 0xf0) {
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) - (bVar10 & 0xf);
        }
        if (*(int *)(unaff_RBX + 0xdc) < 0x41) {
          if (*(int *)(unaff_RBX + 0xdc) < 0) {
            *(int32_t *)(unaff_RBX + 0xdc) = 0;
          }
        }
        else {
          *(int32_t *)(unaff_RBX + 0xdc) = 0x40;
        }
        if ((*(byte *)(unaff_RSI + 0xbe6) & 0x10) == 0) {
          if (*(char *)(unaff_RBX + 0x109) == '\x15') {
            SystemFunction_0001807b20e0();
          }
          else {
            SystemFunction_0001807b8df0(unaff_RBX);
          }
        }
        goto LAB_1807b7717;
      }
    }
    else if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
      if (*(char *)(unaff_RBX + 0x109) == '\x15') {
        SystemFunction_0001807b20e0();
      }
      else {
        SystemFunction_0001807b8df0(unaff_RBX);
      }
      bVar10 = *(byte *)(unaff_RBX + 0xf9);
      if ((bVar10 & 0xf) == 0) {
        *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + (uint)(bVar10 >> 4);
      }
      iVar7 = *(int *)(unaff_RBX + 0xdc);
      if ((bVar10 & 0xf0) == 0) {
        iVar7 = iVar7 - (bVar10 & 0xf);
        *(int *)(unaff_RBX + 0xdc) = iVar7;
      }
      if (iVar7 < 0x41) {
        if (iVar7 < 0) {
          *(int32_t *)(unaff_RBX + 0xdc) = 0;
          pbVar1 = (byte *)(*unaff_R14 + 0x3c);
          *pbVar1 = *pbVar1 | 2;
          goto LAB_1807b7717;
        }
      }
      else {
        *(int32_t *)(unaff_RBX + 0xdc) = 0x40;
      }
      pbVar1 = (byte *)(*unaff_R14 + 0x3c);
      *pbVar1 = *pbVar1 | 2;
      goto LAB_1807b7717;
    }
    break;
  case '\f':
    if (*(int *)(unaff_RSI + 0xbec) != 0) goto code_r0x0001807b78f3;
    if (pcVar9[4] != '\0') {
      *(char *)(unaff_RBX + 0xf9) = pcVar9[4];
    }
    *(int32_t *)(unaff_RBX + 0x100) = *(int32_t *)(unaff_RBX + 0xd4);
    if (*pcVar9 != '\0') {
      *(int8_t *)(unaff_RBX + 0x105) = 0;
    }
    if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') break;
    bVar10 = *(byte *)(unaff_RBX + 0xf9);
    if ((bVar10 & 0xf) == 0xf) {
      *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + (uint)(bVar10 >> 4);
    }
    else if ((bVar10 & 0xf0) == 0xf0) {
      *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) - (bVar10 & 0xf);
    }
    iVar7 = *(int *)(unaff_RBX + 0xdc);
joined_r0x0001807b76f6:
    if (iVar7 < 0x41) {
      if (iVar7 < 0) {
        *(int32_t *)(unaff_RBX + 0xdc) = 0;
      }
      goto LAB_1807b7717;
    }
    *(int32_t *)(unaff_RBX + 0xdc) = 0x40;
    break;
  case '\r':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      bVar10 = pcVar9[4];
      *(uint *)(unaff_RBX + 0xec) = (uint)bVar10;
      if (0x40 < bVar10) {
        *(int32_t *)(unaff_RBX + 0xec) = 0x40;
      }
      goto LAB_1807b7717;
    }
    break;
  case '\x0e':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      if (pcVar9[4] != '\0') {
        *(char *)(unaff_RBX + 0x124) = pcVar9[4];
      }
      if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') break;
      bVar10 = *(byte *)(unaff_RBX + 0x124);
      if ((bVar10 & 0xf) == 0xf) {
        *(int *)(unaff_RBX + 0xec) = *(int *)(unaff_RBX + 0xec) + (uint)(bVar10 >> 4);
        iVar7 = *(int *)(unaff_RBX + 0xec);
      }
      else {
        if ((bVar10 & 0xf0) == 0xf0) {
          *(int *)(unaff_RBX + 0xec) = *(int *)(unaff_RBX + 0xec) - (bVar10 & 0xf);
        }
        iVar7 = *(int *)(unaff_RBX + 0xec);
      }
    }
    else {
      if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') break;
      bVar10 = *(byte *)(unaff_RBX + 0x124);
      if ((bVar10 & 0xf) == 0) {
        *(int *)(unaff_RBX + 0xec) = *(int *)(unaff_RBX + 0xec) + (uint)(bVar10 >> 4);
      }
      iVar7 = *(int *)(unaff_RBX + 0xec);
      if ((bVar10 & 0xf0) == 0) {
        iVar7 = iVar7 - (bVar10 & 0xf);
        *(int *)(unaff_RBX + 0xec) = iVar7;
      }
    }
    if (iVar7 < 0x41) {
      if (iVar7 < 0) {
        *(int32_t *)(unaff_RBX + 0xec) = 0;
      }
      goto LAB_1807b7717;
    }
    *(int32_t *)(unaff_RBX + 0xec) = 0x40;
    break;
  case '\x0f':
    if ((*(int *)(unaff_RSI + 0xbec) == 0) && (plStack0000000000000068[5] != 0)) {
      bVar10 = pcVar9[4];
      if (bVar10 == 0) {
        uVar8 = *(uint *)(unaff_RBX + 0xe8);
      }
      else {
        uVar8 = (uint)bVar10;
        *(uint *)(unaff_RBX + 0xe8) = (uint)bVar10;
      }
      uVar14 = (uint)*(byte *)(unaff_RBX + 0x12e) * 0x10000 + uVar8 * 0x100;
      uVar11 = *(int *)(plStack0000000000000068[5] + 0x14) +
               *(int *)(plStack0000000000000068[5] + 0x10);
      uVar8 = uVar11 - 1;
      if (uVar14 < uVar11) {
        uVar8 = uVar14;
      }
      *(uint *)(plStack0000000000000068 + 0xb) = uVar8;
    }
    break;
  case '\x10':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      if (pcVar9[4] != '\0') {
        *(char *)(unaff_RBX + 0xfa) = pcVar9[4];
      }
      if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
        bVar10 = *(byte *)(unaff_RBX + 0xfa);
        if ((bVar10 & 0xf) == 0xf) {
          *(int *)(unaff_RBX + 0xe0) = *(int *)(unaff_RBX + 0xe0) + (uint)(bVar10 >> 4);
        }
        else if ((bVar10 & 0xf0) == 0xf0) {
          *(int *)(unaff_RBX + 0xe0) = *(int *)(unaff_RBX + 0xe0) - (bVar10 & 0xf);
        }
        if (*(int *)(unaff_RBX + 0xe0) < 0x41) {
          if (*(int *)(unaff_RBX + 0xe0) < 0) {
            *(int32_t *)(unaff_RBX + 0xe0) = 0;
          }
          goto LAB_1807b7717;
        }
        *(int32_t *)(unaff_RBX + 0xe0) = 0x40;
      }
    }
    else if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
      bVar10 = *(byte *)(unaff_RBX + 0xfa);
      if ((bVar10 & 0xf) == 0) {
        *(int *)(unaff_RBX + 0xe0) = *(int *)(unaff_RBX + 0xe0) - (uint)(bVar10 >> 4);
      }
      iVar7 = *(int *)(unaff_RBX + 0xe0);
      if ((bVar10 & 0xf0) == 0) {
        iVar7 = iVar7 + (bVar10 & 0xf);
        *(int *)(unaff_RBX + 0xe0) = iVar7;
      }
      if (iVar7 < 0x41) {
        if (iVar7 < 0) {
          *(int32_t *)(unaff_RBX + 0xe0) = 0;
          pbVar1 = (byte *)(*unaff_R14 + 0x3c);
          *pbVar1 = *pbVar1 | 4;
          goto LAB_1807b7717;
        }
      }
      else {
        *(int32_t *)(unaff_RBX + 0xe0) = 0x40;
      }
      pbVar1 = (byte *)(*unaff_R14 + 0x3c);
      *pbVar1 = *pbVar1 | 4;
      goto LAB_1807b7717;
    }
    break;
  case '\x11':
    if ((*(int *)(unaff_RSI + 0xbec) == 0) && (pcVar9[4] != '\0')) {
      *(byte *)(unaff_RBX + 0xfb) = bVar13;
      *(byte *)(unaff_RBX + 0xfc) = bVar10;
    }
    if (*(byte *)(unaff_RBX + 0xfd) != 0) {
      if ((*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') ||
         (*(byte *)(unaff_RBX + 0xfc) == 0)) break;
      if ((uint)*(byte *)(unaff_RBX + 0xfd) % (uint)*(byte *)(unaff_RBX + 0xfc) != 0)
      goto code_r0x0001807b7d1f;
      if (*(char *)(unaff_RBX + 0xfb) != '\0') {
        switch(*(char *)(unaff_RBX + 0xfb)) {
        case '\x01':
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + -1;
          break;
        case '\x02':
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + -2;
          break;
        case '\x03':
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + -4;
          break;
        case '\x04':
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + -8;
          break;
        case '\x05':
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + -0x10;
          break;
        case '\x06':
          *(int32_t *)(unaff_RBX + 0xdc) = 0;
          goto code_r0x0001807b7ce1;
        case '\a':
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) >> 1;
          break;
        case '\t':
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + 1;
          break;
        case '\n':
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + 2;
          break;
        case '\v':
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + 4;
          break;
        case '\f':
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + 8;
          break;
        case '\r':
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) + 0x10;
          break;
        case '\x0f':
          *(int *)(unaff_RBX + 0xdc) = *(int *)(unaff_RBX + 0xdc) << 1;
        }
code_r0x0001807b7ce1:
        if (*(int *)(unaff_RBX + 0xdc) < 0x41) {
          if (*(int *)(unaff_RBX + 0xdc) < 0) {
            *(int32_t *)(unaff_RBX + 0xdc) = 0;
          }
        }
        else {
          *(int32_t *)(unaff_RBX + 0xdc) = 0x40;
        }
        *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
             *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 2;
      }
      *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
           *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 4;
      *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
           *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 8;
    }
code_r0x0001807b7d1f:
    *(char *)(unaff_RBX + 0xfd) = *(char *)(unaff_RBX + 0xfd) + '\x01';
    break;
  case '\x12':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      if (bVar13 != 0) {
        *(byte *)(unaff_RBX + 0x10b) = bVar13;
      }
      if (bVar10 != 0) {
        *(byte *)(unaff_RBX + 0x10c) = bVar10;
      }
    }
    if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') break;
    bVar10 = *(byte *)(unaff_RBX + 0x10a);
    cVar6 = *(char *)(unaff_RBX + 0x128);
    if (cVar6 == '\0') {
code_r0x0001807b7d8c:
      bVar13 = *(byte *)((uint64_t)(bVar10 & 0x1f) + 0x180be7500);
code_r0x0001807b7d98:
      *(uint *)(unaff_RBX + 0xe4) = (uint)bVar13;
    }
    else {
      if (cVar6 == '\x01') {
        bVar12 = (bVar10 & 0x1f) << 3;
        bVar13 = ~bVar12;
        if (-1 < (char)bVar10) {
          bVar13 = bVar12;
        }
        goto code_r0x0001807b7d98;
      }
      if (cVar6 == '\x02') {
        *(int32_t *)(unaff_RBX + 0xe4) = 0xff;
      }
      else if (cVar6 == '\x03') goto code_r0x0001807b7d8c;
    }
    iVar7 = (int)((uint)*(byte *)(unaff_RBX + 0x10c) * *(int *)(unaff_RBX + 0xe4)) >> 6;
    *(int *)(unaff_RBX + 0xe4) = iVar7;
    if ((char)bVar10 < '\0') {
      if ((short)(*(short *)(unaff_RBX + 0xdc) - (short)iVar7) < 0) {
        iVar7 = *(int *)(unaff_RBX + 0xdc);
      }
      *(int *)(unaff_RBX + 0xe4) = -iVar7;
    }
    else if (0x40 < *(int *)(unaff_RBX + 0xdc) + iVar7) {
      *(int *)(unaff_RBX + 0xe4) = 0x40 - *(int *)(unaff_RBX + 0xdc);
    }
    cVar6 = *(char *)(unaff_RBX + 0x10b) + bVar10;
    *(char *)(unaff_RBX + 0x10a) = cVar6;
    if ('\x1f' < cVar6) {
      *(char *)(unaff_RBX + 0x10a) = cVar6 + -0x40;
    }
    *(byte *)(*unaff_R14 + 0x3c) = *(byte *)(*unaff_R14 + 0x3c) | 2;
    break;
  case '\x13':
    bVar10 = pcVar9[4];
    if (bVar10 == 0) {
      bVar10 = *(byte *)(unaff_RBX + 0x125);
    }
    else {
      *(byte *)(unaff_RBX + 0x125) = bVar10;
    }
    bVar13 = bVar10 & 0xf;
    switch(bVar10 >> 4) {
    case 3:
      if (*(int *)(unaff_RSI + 0xbec) == 0) {
        *(byte *)(unaff_RBX + 0x127) = bVar10 & 3;
      }
      goto LAB_1807b7717;
    case 4:
      if (*(int *)(unaff_RSI + 0xbec) == 0) {
        *(byte *)(unaff_RBX + 0x128) = bVar10 & 3;
      }
      goto LAB_1807b7717;
    case 5:
      if (*(int *)(unaff_RSI + 0xbec) == 0) {
        *(byte *)(unaff_RBX + 0x129) = bVar10 & 3;
      }
      goto LAB_1807b7717;
    case 6:
      if (*(int *)(unaff_RSI + 0xbec) == 0) {
        *(uint *)(unaff_RSI + 0xc04) = (uint)bVar13;
      }
      goto LAB_1807b7717;
    case 7:
      switch(bVar13) {
      case 0:
        if ((*(int *)(unaff_RSI + 0xbec) == 0) && ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0)) {
          for (plVar15 = (int64_t *)*unaff_R14; plVar15 != unaff_R14;
              plVar15 = (int64_t *)*plVar15) {
            if (*(char *)((int64_t)plVar15 + 0x3b) != '\0') {
              *(byte *)((int64_t)plVar15 + 0x3c) = *(byte *)((int64_t)plVar15 + 0x3c) | 0x20;
            }
          }
        }
        break;
      case 1:
        if ((*(int *)(unaff_RSI + 0xbec) == 0) && ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0)) {
          for (plVar15 = (int64_t *)*unaff_R14; plVar15 != unaff_R14;
              plVar15 = (int64_t *)*plVar15) {
            if (*(char *)((int64_t)plVar15 + 0x3b) != '\0') {
              lVar20 = *(int64_t *)(unaff_RSI + 0x900);
              *(int8_t *)((int64_t)plVar15 + 0xbc) = 1;
              if (((*(byte *)((int64_t)plVar15 + 0x3e) & 1) == 0) ||
                 ((*(byte *)((uint64_t)*(byte *)(plVar15 + 7) * 0x618 + lVar20 + 0x400) & 4) != 0))
              {
                *(int8_t *)((int64_t)plVar15 + 0xac) = 1;
              }
            }
          }
        }
        break;
      case 2:
        if ((*(int *)(unaff_RSI + 0xbec) == 0) && ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0)) {
          for (plVar15 = (int64_t *)*unaff_R14; plVar15 != unaff_R14;
              plVar15 = (int64_t *)*plVar15) {
            if (*(char *)((int64_t)plVar15 + 0x3b) != '\0') {
              *(int8_t *)((int64_t)plVar15 + 0xac) = 1;
            }
          }
        }
        break;
      case 3:
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
            *(int8_t *)((int64_t)plStack0000000000000068 + 0x3d) = 0;
          }
          goto LAB_1807b7717;
        }
        break;
      case 4:
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
            *(int8_t *)((int64_t)plStack0000000000000068 + 0x3d) = 1;
          }
          goto LAB_1807b7717;
        }
        break;
      case 5:
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
            *(int8_t *)((int64_t)plStack0000000000000068 + 0x3d) = 2;
          }
          goto LAB_1807b7717;
        }
        break;
      case 6:
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
            *(int8_t *)((int64_t)plStack0000000000000068 + 0x3d) = 3;
          }
          goto LAB_1807b7717;
        }
        break;
      case 7:
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
            *(byte *)((int64_t)plStack0000000000000068 + 0x3e) =
                 *(byte *)((int64_t)plStack0000000000000068 + 0x3e) & 0xfe;
          }
          goto LAB_1807b7717;
        }
        break;
      case 8:
        if (*(int *)(unaff_RSI + 0xbec) == 0) {
          if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
            *(byte *)((int64_t)plStack0000000000000068 + 0x3e) =
                 *(byte *)((int64_t)plStack0000000000000068 + 0x3e) | 1;
          }
          goto LAB_1807b7717;
        }
      }
      break;
    case 8:
      if (*(int *)(unaff_RSI + 0xbec) == 0) {
        uVar8 = (uint)bVar13 * 4;
        goto code_r0x0001807b84dd;
      }
      break;
    case 9:
      if ((*(int *)(unaff_RSI + 0xbec) == 0) &&
         (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0')) {
        if (bVar13 == 0) {
          *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
               *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x40;
        }
        else if (bVar13 == 1) {
          *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
               *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x10;
        }
        else {
          if (bVar13 != 0xe) {
            if (bVar13 == 0xf) {
              *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
                   *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
              *(int32_t *)((int64_t)plStack0000000000000068 + 0x5c) = 0xffffffff;
            }
            goto LAB_1807b7717;
          }
          *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
               *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 1;
          *(int32_t *)((int64_t)plStack0000000000000068 + 0x5c) = 1;
        }
      }
      break;
    case 10:
      if (*(int *)(unaff_RSI + 0xbec) == 0) {
        *(byte *)(unaff_RBX + 0x12e) = bVar13;
      }
      goto LAB_1807b7717;
    case 0xb:
      if (*(int *)(unaff_RSI + 0xbec) == 0) {
        if (bVar13 == 0) {
          *(int32_t *)(unaff_RBX + 0x11c) = *(int32_t *)(unaff_RSI + 0xbf8);
        }
        else {
          if (*(int *)(unaff_RBX + 0x120) == 0) {
            uVar8 = (uint)bVar13;
          }
          else {
            uVar8 = *(int *)(unaff_RBX + 0x120) - 1;
          }
          *(uint *)(unaff_RBX + 0x120) = uVar8;
          if (((uVar8 != 0) &&
              (*(int32_t *)(unaff_RSI + 0xc08) = *(int32_t *)(unaff_RBX + 0x11c),
              *(int64_t *)(unaff_RSI + 0x288) != 0)) &&
             (iVar7 = *(int *)(unaff_RBX + 0x11c), iVar7 <= *(int *)(unaff_RSI + 0xbf8))) {
            do {
              iVar17 = *(int *)(unaff_RSI + 0xbfc) * 0x100 + iVar7;
              iVar7 = iVar7 + 1;
              *(int8_t *)((int64_t)iVar17 + *(int64_t *)(unaff_RSI + 0x288)) = 0;
            } while (iVar7 <= *(int *)(unaff_RSI + 0xbf8));
          }
        }
      }
      break;
    case 0xc:
      uVar8 = *(uint *)(unaff_RSI + 0xbec);
      if ((uVar8 != 0) && ((uVar8 == bVar13 || ((uVar8 == 1 && (bVar13 == 0)))))) {
        *(int32_t *)(unaff_RBX + 0xdc) = 0;
        *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
             *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x20;
        goto LAB_1807b7717;
      }
      break;
    case 0xe:
      if (*(int *)(unaff_RSI + 0xbec) == 0) {
        *(uint *)(unaff_RSI + 0xc00) = *(int *)(unaff_RSI + 0xbf0) * (uint)bVar13;
      }
      goto LAB_1807b7717;
    }
    break;
  case '\x14':
    if ((*(int *)(unaff_RSI + 0xbec) == 0) && (0x1f < (byte)pcVar9[4])) {
      SystemFunction_00018080d4a0();
    }
    else if ((byte)pcVar9[4] < 0x20) {
      if (bVar13 == 0) {
        SystemFunction_00018080d4a0();
      }
      else if (bVar10 == 1) {
        SystemFunction_00018080d4a0();
      }
    }
    break;
  case '\x15':
    if (*(int *)(unaff_RSI + 0xbec) != 0) goto code_r0x0001807b7396;
    if (bVar13 != 0) {
      *(byte *)(unaff_RBX + 0x107) = bVar13;
    }
    if (bVar10 != 0) {
      *(int8_t *)(unaff_RBX + 0x109) = 0x15;
      goto code_r0x0001807b7352;
    }
code_r0x0001807b735e:
    if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') break;
    bVar10 = *(byte *)(unaff_RSI + 0xbe6) & 0x10;
code_r0x0001807b7370:
    if (bVar10 == 0) {
      if (*(char *)(unaff_RBX + 0x109) == '\x15') {
        SystemFunction_0001807b20e0();
      }
      else {
        SystemFunction_0001807b8df0(unaff_RBX);
      }
    }
    break;
  case '\x16':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      bVar10 = pcVar9[4];
      *(uint *)(unaff_RSI + 0xbe0) = (uint)bVar10;
      if (0x80 < bVar10) {
        *(int32_t *)(unaff_RSI + 0xbe0) = 0x80;
      }
      goto LAB_1807b7717;
    }
    break;
  case '\x17':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      bVar10 = pcVar9[4];
      if (bVar10 == 0) {
        bVar10 = *(byte *)(unaff_RSI + 0xbe4);
      }
      else {
        *(byte *)(unaff_RSI + 0xbe4) = bVar10;
      }
      if ((bVar10 & 0xf) == 0xf) {
        *(int *)(unaff_RSI + 0xbe0) = *(int *)(unaff_RSI + 0xbe0) + (uint)(bVar10 >> 4);
        iVar7 = *(int *)(unaff_RSI + 0xbe0);
      }
      else {
        if ((bVar10 & 0xf0) == 0xf0) {
          *(int *)(unaff_RSI + 0xbe0) = *(int *)(unaff_RSI + 0xbe0) - (bVar10 & 0xf);
        }
        iVar7 = *(int *)(unaff_RSI + 0xbe0);
      }
    }
    else {
      bVar10 = *(byte *)(unaff_RSI + 0xbe4);
      if ((bVar10 & 0xf) == 0) {
        *(int *)(unaff_RSI + 0xbe0) = *(int *)(unaff_RSI + 0xbe0) + (uint)(bVar10 >> 4);
      }
      iVar7 = *(int *)(unaff_RSI + 0xbe0);
      if ((bVar10 & 0xf0) == 0) {
        iVar7 = iVar7 - (bVar10 & 0xf);
        *(int *)(unaff_RSI + 0xbe0) = iVar7;
      }
    }
    if (iVar7 < 0x81) {
      if (iVar7 < 0) {
        *(int32_t *)(unaff_RSI + 0xbe0) = 0;
      }
      goto LAB_1807b7717;
    }
    *(int32_t *)(unaff_RSI + 0xbe0) = 0x80;
    break;
  case '\x18':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      uVar8 = (uint)((byte)pcVar9[4] >> 2);
code_r0x0001807b84dd:
      *(uint *)(unaff_RBX + 0xe0) = uVar8;
      if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) == '\0') {
        *(uint *)(plStack0000000000000068 + 9) = uVar8;
        *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
             *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 4;
        *(byte *)((int64_t)plStack0000000000000068 + 0x3c) =
             *(byte *)((int64_t)plStack0000000000000068 + 0x3c) | 0x40;
      }
      goto LAB_1807b7717;
    }
    break;
  case '\x19':
    if (*(int *)(unaff_RSI + 0xbec) == 0) {
      if (bVar13 != 0) {
        *(byte *)(unaff_RBX + 0x114) = bVar13;
      }
      if (bVar10 != 0) {
        *(byte *)(unaff_RBX + 0x115) = bVar10;
      }
    }
    if (*(char *)((int64_t)plStack0000000000000068 + 0x3b) != '\0') break;
    cVar6 = *(char *)(unaff_RBX + 0x129);
    lVar20 = *unaff_R14;
    if (cVar6 == '\0') {
code_r0x0001807b8570:
      iVar7 = (int)*(char *)((int64_t)*(int *)(unaff_RBX + 0x110) + 0x180be7520);
code_r0x0001807b8580:
      *(int *)(lVar20 + 0x54) = iVar7;
    }
    else {
      if (cVar6 == '\x01') {
        iVar7 = 0x80 - *(int *)(unaff_RBX + 0x110) >> 1;
        goto code_r0x0001807b8580;
      }
      if (cVar6 == '\x02') {
        iVar7 = 0x40;
        if (0x7f < *(int *)(unaff_RBX + 0x110)) {
          iVar7 = -0x40;
        }
        goto code_r0x0001807b8580;
      }
      if (cVar6 == '\x03') goto code_r0x0001807b8570;
    }
    iVar7 = (int)((uint)*(byte *)(unaff_RBX + 0x115) * *(int *)(lVar20 + 0x54)) >> 5;
    *(int *)(lVar20 + 0x54) = iVar7;
    if (*(int *)(unaff_RBX + 0x110) < 0) {
      if ((short)(*(short *)(lVar20 + 0x48) - (short)iVar7) < 0) {
        iVar7 = *(int *)(lVar20 + 0x48);
      }
      *(int *)(lVar20 + 0x54) = -iVar7;
    }
    else if (0x40 < *(int *)(lVar20 + 0x48) + iVar7) {
      *(int *)(lVar20 + 0x54) = 0x40 - *(int *)(lVar20 + 0x48);
    }
    *(int *)(unaff_RBX + 0x110) = *(int *)(unaff_RBX + 0x110) + (uint)*(byte *)(unaff_RBX + 0x114);
    if (0xff < *(int *)(unaff_RBX + 0x110)) {
      *(int *)(unaff_RBX + 0x110) = *(int *)(unaff_RBX + 0x110) + -0x100;
    }
    *(byte *)(lVar20 + 0x3c) = *(byte *)(lVar20 + 0x3c) | 4;
  }
LAB_1807b7706:
  lVar20 = unaff_R13;
  goto LAB_1807b7717;
LAB_1807b7820:
  if (-1 < *pcVar9) {
    lVar21 = *plVar15;
    plVar16 = *(int64_t **)(lVar21 + 8);
    if (*(int64_t **)(lVar21 + 8) != (int64_t *)(lVar21 + 8)) {
      do {
        lVar20 = 0;
        plVar15 = (int64_t *)*plVar16;
        bVar10 = *(byte *)((int64_t)plVar16 + 0x3c);
        if (plVar16[5] == 0) {
          bVar10 = bVar10 & 0xf7;
          *(byte *)((int64_t)plVar16 + 0x3c) = bVar10;
        }
        if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
          lVar20 = (uint64_t)*(byte *)(plVar16 + 7) * 0x618 + *(int64_t *)(unaff_RSI + 0x900);
          if ((*(byte *)((int64_t)plVar16 + 0x3e) & 1) != 0) {
            if ((char)plVar16[0xf] == '\0') {
              function_7b52b0();
            }
            else {
              *(int8_t *)((int64_t)plVar16 + 0xac) = 1;
              if ((int)plVar16[0xe] == 0) {
                *(byte *)((int64_t)plVar16 + 0x3c) = bVar10 | 0x20;
              }
            }
          }
          if (((*(byte *)(lVar20 + 0x457) & 1) != 0) && ((char)plVar16[0x12] == '\0')) {
            function_7b52b0();
          }
          if (((*(byte *)(lVar20 + 0x4af) & 1) != 0) && ((char)plVar16[0x15] == '\0')) {
            function_7b5470();
          }
          if (*(char *)((int64_t)plVar16 + 0xac) != '\0') {
            plVar4 = plVar16 + 0x16;
            *(uint *)plVar4 = (int)*plVar4 - (uint)*(ushort *)(lVar20 + 0x50c);
            iVar7 = (int)plVar16[0x16];
            if ((int)*plVar4 < 0) {
              *(int32_t *)(plVar16 + 0x16) = 0;
              iVar7 = 0;
            }
            if (iVar7 == 0) {
              *(byte *)((int64_t)plVar16 + 0x3c) = *(byte *)((int64_t)plVar16 + 0x3c) | 0x20;
            }
            else {
              *(byte *)((int64_t)plVar16 + 0x3c) = *(byte *)((int64_t)plVar16 + 0x3c) | 2;
            }
          }
        }
        lVar3 = plVar16[5];
        iVar7 = 0;
        cVar6 = *(char *)(lVar3 + 0x32);
        if (cVar6 == '\0') {
LAB_1807b8751:
          iVar7 = (int)*(char *)((int64_t)*(int *)((int64_t)plVar16 + 0xb4) + 0x180be7520);
        }
        else if (cVar6 == '\x01') {
          uVar8 = *(int *)((int64_t)plVar16 + 0xb4) + 0x80U & 0x800000ff;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xffffff00) + 1;
          }
          iVar7 = (int)(0x80 - uVar8) >> 1;
        }
        else if (cVar6 == '\x02') {
          iVar7 = 0x40;
          if (0x7f < *(int *)((int64_t)plVar16 + 0xb4)) {
            iVar7 = -0x40;
          }
        }
        else if (cVar6 == '\x03') goto LAB_1807b8751;
        iVar17 = (int)plVar16[10] -
                 ((int)-((uint)*(byte *)(lVar3 + 0x31) * iVar7 * (int)plVar16[0x17]) >> 0x16);
        *(int *)(plVar16 + 10) = iVar17;
        iVar7 = (int)plVar16[0x17] + (uint)*(byte *)(lVar3 + 0x33) * 0x10;
        if (0x10000 < iVar7) {
          iVar7 = 0x10000;
        }
        *(int *)(plVar16 + 0x17) = iVar7;
        *(int *)((int64_t)plVar16 + 0xb4) =
             *(int *)((int64_t)plVar16 + 0xb4) + (uint)*(byte *)(lVar3 + 0x30);
        if (0xff < *(int *)((int64_t)plVar16 + 0xb4)) {
          *(int *)((int64_t)plVar16 + 0xb4) = *(int *)((int64_t)plVar16 + 0xb4) + -0x100;
        }
        bVar10 = *(byte *)((int64_t)plVar16 + 0x3c);
        bVar13 = bVar10 | 1;
        *(byte *)((int64_t)plVar16 + 0x3c) = bVar13;
        if (iVar17 + (int)plVar16[8] == 0) {
          bVar13 = bVar10 & 0xfe;
          *(byte *)((int64_t)plVar16 + 0x3c) = bVar13;
        }
        if (*(char *)((int64_t)plVar16 + 0x3b) == '\0') {
          *(int32_t *)((int64_t)plVar16 + 0x44) = *(int32_t *)(lVar21 + 0xdc);
        }
        if ((((bVar13 & 8) != 0) && (function_80d310(), *(int *)((int64_t)plVar16 + 0x5c) < 0)) &&
           (plVar16[4] != 0)) {
          function_757ed0(plVar16[4],*(int *)(*(int64_t *)plVar16[5] + 0x44) + -1,2);
        }
        if ((int64_t *)plVar16[4] != (int64_t *)0x0) {
          bVar10 = *(byte *)((int64_t)plVar16 + 0x3c);
          if ((bVar10 & 2) != 0) {
            (**(code **)(*(int64_t *)plVar16[4] + 0x20))();
            bVar10 = *(byte *)((int64_t)plVar16 + 0x3c);
          }
          if ((bVar10 & 4) != 0) {
            iVar7 = *(int *)((int64_t)plVar16 + 0x54);
            if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
              iVar7 = iVar7 + (int)plVar16[0x11];
            }
            (**(code **)(*(int64_t *)plVar16[4] + 0xb0))
                      ((int64_t *)plVar16[4],(float)(iVar7 + (int)plVar16[9]) * 0.031746034 - 1.0);
            bVar10 = *(byte *)((int64_t)plVar16 + 0x3c);
          }
          if ((bVar10 & 1) != 0) {
            if ((*(ushort *)(unaff_RSI + 0xbe6) & 4) == 0) {
              iVar7 = (int)plVar16[10];
            }
            else {
              iVar7 = (int)plVar16[10];
              if ((*(byte *)(lVar20 + 0x4af) & 0x10) == 0) {
                iVar7 = iVar7 - (int)plVar16[0x14];
              }
            }
            iVar7 = (int)plVar16[8] + iVar7;
            if ((*(ushort *)(unaff_RSI + 0xbe6) & 8) != 0) {
              powf(iVar7,(3840.0 - (float)iVar7) * 0.0013020834);
            }
            function_757470(plVar16[4]);
          }
          if (lVar20 != 0) {
            uVar8 = *(uint *)(lVar20 + 0x608);
            bVar10 = *(byte *)(lVar20 + 0x4af) & 0x10;
            if (((bVar10 != 0) || (uVar8 != 0xff)) && ((uVar8 & 0x80) != 0)) {
              iVar7 = 0x100;
              if (bVar10 != 0) {
                iVar7 = (int)((int)plVar16[0x14] + ((int)plVar16[0x14] >> 0x1f & 3U)) >> 2;
              }
              if ((*(ushort *)(unaff_RSI + 0xbe6) & 0x1000) == 0) {
                fVar23 = 8.138021e-05;
              }
              else {
                fVar23 = 9.765625e-05;
              }
              powf(uVar8 & 0x7f,(float)((iVar7 + 0x100) * (uVar8 & 0x7f)) * fVar23 + 0.25);
              if (*(int64_t *)(unaff_RSI + 0x5f0) != 0) {
                SystemFunction_000180762a70(*(uint64_t *)
                                     (*(int64_t *)(unaff_RSI + 0x5f0) +
                                     (int64_t)*(int *)(plVar16[4] + 0x1d0) * 8),0);
                SystemFunction_000180762a70(*(uint64_t *)
                                     (*(int64_t *)(unaff_RSI + 0x5f0) +
                                     (int64_t)*(int *)(plVar16[4] + 0x1d0) * 8),1);
              }
            }
          }
          if ((*(byte *)((int64_t)plVar16 + 0x3c) & 0x20) != 0) {
            if (*(int64_t *)(unaff_RSI + 0x5f0) != 0) {
              plVar4 = (int64_t *)plVar16[4];
              (**(code **)(*plVar4 + 0x118))
                        (plVar4,*(uint64_t *)
                                 (*(int64_t *)(unaff_RSI + 0x5f0) + (int64_t)(int)plVar4[0x3a] * 8
                                 ));
            }
            UIComponent_Renderer(plVar16[4],0x80);
            *(int32_t *)(plVar16 + 0xb) = 0;
          }
        }
        *(int8_t *)((int64_t)plVar16 + 0x3c) = 0;
        function_80c800(plVar16);
        lVar20 = *(int64_t *)(unaff_RBP + 0x90);
        plVar16 = plVar15;
      } while (plVar15 != (int64_t *)(lVar21 + 8));
      iVar17 = *(int *)(unaff_RBP + 0x80);
      plVar15 = *(int64_t **)(unaff_RBP + 0x98);
    }
  }
  iVar17 = iVar17 + 1;
  plVar15 = plVar15 + 1;
  pcVar9 = pcVar9 + 1;
  *(int *)(unaff_RBP + 0x80) = iVar17;
  lVar20 = lVar20 + 4;
  *(int64_t **)(unaff_RBP + 0x98) = plVar15;
  *(int64_t *)(unaff_RBP + 0x90) = lVar20;
  if (*(int *)(unaff_RSI + 0x3c8) <= iVar17) {
    return 0;
  }
  goto LAB_1807b7820;
}
uint64_t function_7b861b(byte param_1)
{
  int *piVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t *unaff_RDI;
  uint64_t *puVar8;
  int iVar9;
  int64_t lVar10;
  uint64_t *unaff_R12;
  uint64_t *unaff_R13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar11;
  uint64_t uVar12;
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  float unaff_XMM12_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  char *local_var_78;
  do {
    *(int8_t *)((int64_t)unaff_RDI + 0xac) = 1;
    if (*(int *)(unaff_RDI + 0xe) == 0) {
      *(byte *)((int64_t)unaff_RDI + 0x3c) = param_1 | 0x20;
    }
LAB_1807b862e:
    do {
      if (((*(byte *)(unaff_R14 + 0x457) & 1) != 0) && (*(char *)(unaff_RDI + 0x12) == '\0')) {
        function_7b52b0();
      }
      if (((*(byte *)(unaff_R14 + 0x4af) & 1) != 0) && (*(char *)(unaff_RDI + 0x15) == '\0')) {
        function_7b5470();
      }
      puVar8 = unaff_RDI;
      if (*(char *)((int64_t)unaff_RDI + 0xac) != '\0') {
        piVar1 = (int *)(unaff_RDI + 0x16);
        *piVar1 = *piVar1 - (uint)*(ushort *)(unaff_R14 + 0x50c);
        iVar6 = *(int *)(unaff_RDI + 0x16);
        if (*piVar1 < 0) {
          *(int32_t *)(unaff_RDI + 0x16) = 0;
          iVar6 = 0;
        }
        if (iVar6 == 0) {
          *(byte *)((int64_t)unaff_RDI + 0x3c) = *(byte *)((int64_t)unaff_RDI + 0x3c) | 0x20;
        }
        else {
          *(byte *)((int64_t)unaff_RDI + 0x3c) = *(byte *)((int64_t)unaff_RDI + 0x3c) | 2;
        }
      }
      do {
        unaff_RDI = unaff_R12;
        lVar10 = puVar8[5];
        iVar6 = 0;
        cVar2 = *(char *)(lVar10 + 0x32);
        if (cVar2 == '\0') {
LAB_1807b8751:
          iVar6 = (int)*(char *)((int64_t)*(int *)((int64_t)puVar8 + 0xb4) + 0x180be7520);
        }
        else if (cVar2 == '\x01') {
          uVar3 = *(int *)((int64_t)puVar8 + 0xb4) + 0x80U & 0x800000ff;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xffffff00) + 1;
          }
          iVar6 = (int)(0x80 - uVar3) >> 1;
        }
        else if (cVar2 == '\x02') {
          iVar6 = 0x40;
          if (0x7f < *(int *)((int64_t)puVar8 + 0xb4)) {
            iVar6 = -0x40;
          }
        }
        else if (cVar2 == '\x03') goto LAB_1807b8751;
        iVar9 = *(int *)(puVar8 + 10) -
                ((int)-((uint)*(byte *)(lVar10 + 0x31) * iVar6 * *(int *)(puVar8 + 0x17)) >> 0x16);
        *(int *)(puVar8 + 10) = iVar9;
        iVar6 = *(int *)(puVar8 + 0x17) + (uint)*(byte *)(lVar10 + 0x33) * 0x10;
        if (0x10000 < iVar6) {
          iVar6 = 0x10000;
        }
        *(int *)(puVar8 + 0x17) = iVar6;
        *(int *)((int64_t)puVar8 + 0xb4) =
             *(int *)((int64_t)puVar8 + 0xb4) + (uint)*(byte *)(lVar10 + 0x30);
        if (0xff < *(int *)((int64_t)puVar8 + 0xb4)) {
          *(int *)((int64_t)puVar8 + 0xb4) = *(int *)((int64_t)puVar8 + 0xb4) + -0x100;
        }
        bVar5 = *(byte *)((int64_t)puVar8 + 0x3c);
        bVar4 = bVar5 | 1;
        *(byte *)((int64_t)puVar8 + 0x3c) = bVar4;
        if (iVar9 + *(int *)(puVar8 + 8) == 0) {
          bVar4 = bVar5 & 0xfe;
          *(byte *)((int64_t)puVar8 + 0x3c) = bVar4;
        }
        if (*(char *)((int64_t)puVar8 + 0x3b) == '\0') {
          *(int32_t *)((int64_t)puVar8 + 0x44) = *(int32_t *)(unaff_R15 + 0xdc);
        }
        if ((((bVar4 & 8) != 0) && (function_80d310(), *(int *)((int64_t)puVar8 + 0x5c) < 0)) &&
           (puVar8[4] != 0)) {
          function_757ed0(puVar8[4],*(int *)(*(int64_t *)puVar8[5] + 0x44) + -1,2);
        }
        if ((int64_t *)puVar8[4] != (int64_t *)0x0) {
          bVar5 = *(byte *)((int64_t)puVar8 + 0x3c);
          if ((bVar5 & 2) != 0) {
            (**(code **)(*(int64_t *)puVar8[4] + 0x20))();
            bVar5 = *(byte *)((int64_t)puVar8 + 0x3c);
          }
          if ((bVar5 & 4) != 0) {
            iVar6 = *(int *)((int64_t)puVar8 + 0x54);
            if ((*(byte *)(unaff_RSI + 0xbe6) & 4) != 0) {
              iVar6 = iVar6 + *(int *)(puVar8 + 0x11);
            }
            (**(code **)(*(int64_t *)puVar8[4] + 0xb0))
                      ((int64_t *)puVar8[4],
                       (float)(iVar6 + *(int *)(puVar8 + 9)) * unaff_XMM14_Da - unaff_XMM15_Da);
            bVar5 = *(byte *)((int64_t)puVar8 + 0x3c);
          }
          if ((bVar5 & 1) != 0) {
            if ((*(ushort *)(unaff_RSI + 0xbe6) & 4) == 0) {
              iVar6 = *(int *)(puVar8 + 10);
            }
            else {
              iVar6 = *(int *)(puVar8 + 10);
              if ((*(byte *)(unaff_R14 + 0x4af) & 0x10) == 0) {
                iVar6 = iVar6 - *(int *)(puVar8 + 0x14);
              }
            }
            if ((*(ushort *)(unaff_RSI + 0xbe6) & 8) != 0) {
              auVar13._4_4_ = unaff_XMM11_Db;
              auVar13._0_4_ = unaff_XMM11_Da;
              auVar13._8_4_ = unaff_XMM11_Dc;
              auVar13._12_4_ = unaff_XMM11_Dd;
              auVar14._4_12_ = auVar13._4_12_;
              auVar14._0_4_ =
                   (unaff_XMM11_Da - (float)(*(int *)(puVar8 + 8) + iVar6)) * unaff_XMM12_Da;
              powf(*(int *)(puVar8 + 8) + iVar6,auVar14._0_8_);
            }
            function_757470(puVar8[4]);
          }
          if (unaff_R14 != 0) {
            uVar3 = *(uint *)(unaff_R14 + 0x608);
            bVar5 = *(byte *)(unaff_R14 + 0x4af) & 0x10;
            if (((bVar5 != 0) || (uVar3 != 0xff)) && ((uVar3 & 0x80) != 0)) {
              iVar6 = 0x100;
              if (bVar5 != 0) {
                iVar6 = (int)(*(int *)(puVar8 + 0x14) + (*(int *)(puVar8 + 0x14) >> 0x1f & 3U)) >> 2
                ;
              }
              fVar11 = unaff_XMM9_Da;
              if ((*(ushort *)(unaff_RSI + 0xbe6) & 0x1000) != 0) {
                fVar11 = unaff_XMM8_Da;
              }
              powf(uVar3 & 0x7f,(float)((iVar6 + 0x100) * (uVar3 & 0x7f)) * fVar11 + 0.25);
              if (*(int64_t *)(unaff_RSI + 0x5f0) != 0) {
                SystemFunction_000180762a70(*(uint64_t *)
                                     (*(int64_t *)(unaff_RSI + 0x5f0) +
                                     (int64_t)*(int *)(puVar8[4] + 0x1d0) * 8),0);
                SystemFunction_000180762a70(*(uint64_t *)
                                     (*(int64_t *)(unaff_RSI + 0x5f0) +
                                     (int64_t)*(int *)(puVar8[4] + 0x1d0) * 8),1);
              }
            }
          }
          if ((*(byte *)((int64_t)puVar8 + 0x3c) & 0x20) != 0) {
            if (*(int64_t *)(unaff_RSI + 0x5f0) != 0) {
              plVar7 = (int64_t *)puVar8[4];
              (**(code **)(*plVar7 + 0x118))
                        (plVar7,*(uint64_t *)
                                 (*(int64_t *)(unaff_RSI + 0x5f0) + (int64_t)(int)plVar7[0x3a] * 8
                                 ));
            }
            UIComponent_Renderer(puVar8[4],0x80);
            *(int32_t *)(puVar8 + 0xb) = 0;
          }
        }
        unaff_R14 = 0;
        *(int8_t *)((int64_t)puVar8 + 0x3c) = 0;
        uVar12 = function_80c800(puVar8);
        lVar10 = *(int64_t *)(unaff_RBP + 0x90);
        if (unaff_RDI == unaff_R13) {
          iVar6 = *(int *)(unaff_RBP + 0x80);
          plVar7 = *(int64_t **)(unaff_RBP + 0x98);
          do {
            do {
              iVar6 = iVar6 + 1;
              plVar7 = plVar7 + 1;
              local_var_78 = local_var_78 + 1;
              *(int *)(unaff_RBP + 0x80) = iVar6;
              lVar10 = lVar10 + 4;
              *(int64_t **)(unaff_RBP + 0x98) = plVar7;
              *(int64_t *)(unaff_RBP + 0x90) = lVar10;
              if (*(int *)(unaff_RSI + 0x3c8) <= iVar6) {
                return 0;
              }
            } while (*local_var_78 < '\0');
            unaff_R15 = *plVar7;
            unaff_RDI = *(uint64_t **)(unaff_R15 + 8);
            unaff_R13 = (uint64_t *)(unaff_R15 + 8);
          } while (unaff_RDI == unaff_R13);
        }
        unaff_R12 = (uint64_t *)*unaff_RDI;
        param_1 = *(byte *)((int64_t)unaff_RDI + 0x3c);
        if (unaff_RDI[5] == 0) {
          param_1 = param_1 & 0xf7;
          *(byte *)((int64_t)unaff_RDI + 0x3c) = param_1;
        }
        puVar8 = unaff_RDI;
      } while ((*(byte *)(unaff_RSI + 0xbe6) & 4) == 0);
      unaff_R14 = (uint64_t)*(byte *)(unaff_RDI + 7) * 0x618 + *(int64_t *)(unaff_RSI + 0x900);
    } while ((*(byte *)((int64_t)unaff_RDI + 0x3e) & 1) == 0);
  } while (*(char *)(unaff_RDI + 0xf) != '\0');
  function_7b52b0(uVar12,(int64_t)unaff_RDI + 100,unaff_RDI,*(int8_t *)(unaff_R14 + 0x401),
                unaff_R14 + 0x402);
  goto LAB_1807b862e;
}
uint64_t function_7b8cac(void)
{
  return 0;
}
uint64_t function_7b8cec(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7b8f20(uint64_t *param_1,uint64_t param_2,int param_3,char param_4)
{
  uint uVar1;
  uint uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  if (param_4 != '\0') {
    lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_3,&processed_var_6512_ptr,0x909,0);
    if (lVar3 == 0) {
      uVar4 = 0x26;
    }
    else {
      uVar4 = function_7bb8a0(param_1,lVar3,param_3);
      if ((int)uVar4 == 0) {
        SystemMemory_Controller(*param_1,7,param_2,lVar3,param_3,3,(char)uVar4);
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&processed_var_6512_ptr,0x917,1);
      }
    }
    return uVar4;
  }
  uVar1 = *(uint *)(param_1 + 2);
  uVar2 = *(uint *)((int64_t)param_1 + 0x14);
  if (uVar2 <= uVar1) {
    *(int8_t *)((int64_t)param_1 + 0x24) = 1;
    return 0x10;
  }
  if (uVar2 < uVar1 + param_3) {
    param_3 = uVar2 - uVar1;
  }
  *(uint *)(param_1 + 2) = uVar1 + param_3;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7b9100(int64_t param_1)
{
  int *piVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x1b8) != 0) {
    function_786250();
    *(uint64_t *)(param_1 + 0x1b8) = 0;
  }
  if (*(int64_t **)(param_1 + 0x1b0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x1b0) + 0x10))();
    *(uint64_t *)(param_1 + 0x1b0) = 0;
  }
  if (*(int64_t *)(param_1 + 0x3c00) != 0) {
    piVar1 = (int *)(*(int64_t *)(param_1 + 0x3c00) + 0x120);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x3c00) + 0x118);
      (**(code **)(*plVar2 + 0x18))(plVar2,1);
      plVar2 = *(int64_t **)(param_1 + 0x3c00);
      *(int64_t *)plVar2[1] = *plVar2;
      *(int64_t *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(param_1 + 0x3c00),
                    &processed_var_6512_ptr,0xcee,1);
    }
    *(uint64_t *)(param_1 + 0x3c00) = 0;
    *(uint64_t *)(param_1 + 0x3c08) = 0;
    *(uint64_t *)(param_1 + 0x3c10) = 0;
  }
  lVar4 = *(int64_t *)(param_1 + 0x3be0);
  if (lVar4 != 0) {
    uVar7 = uVar5;
    if (0 < *(int *)(param_1 + 0x3bc8)) {
      do {
        lVar3 = *(int64_t *)(uVar7 + 8 + lVar4);
        if (lVar3 != 0) {
// WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&processed_var_6512_ptr,0xcfb,1);
        }
        uVar6 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar6;
        uVar7 = uVar7 + 0x28;
      } while ((int)uVar6 < *(int *)(param_1 + 0x3bc8));
    }
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar4,&processed_var_6512_ptr,0xcfe,1);
  }
  lVar4 = *(int64_t *)(param_1 + 0x420);
  if (lVar4 != 0) {
    if (0 < *(int *)(param_1 + 0x1c8)) {
      do {
        function_755c10((int64_t)(int)uVar5 * 800 + *(int64_t *)(param_1 + 0x420) + 0x20);
        uVar6 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar6;
      } while ((int)uVar6 < *(int *)(param_1 + 0x1c8));
      lVar4 = *(int64_t *)(param_1 + 0x420);
    }
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar4,&processed_var_6512_ptr,0xd08,1);
  }
  if (*(int64_t *)(param_1 + 0x1c0) == 0) {
    return 0;
  }
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x1c0),
                &processed_var_6512_ptr,0xd0e,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7b91da(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint uVar2;
  uint64_t uVar3;
  if (param_2 != 0) {
    uVar3 = unaff_RBP & 0xffffffff;
    if ((int)unaff_RBP < *(int *)(unaff_RBX + 0x3bc8)) {
      do {
        lVar1 = *(int64_t *)(unaff_RBP + 8 + param_2);
        if (lVar1 != 0) {
// WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&processed_var_6512_ptr,0xcfb,1);
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (uint64_t)uVar2;
        unaff_RBP = unaff_RBP + 0x28;
      } while ((int)uVar2 < *(int *)(unaff_RBX + 0x3bc8));
    }
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_6512_ptr,0xcfe,1);
  }
  lVar1 = *(int64_t *)(unaff_RBX + 0x420);
  if (lVar1 == 0) {
    if (*(int64_t *)(unaff_RBX + 0x1c0) == 0) {
      return 0;
    }
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBX + 0x1c0),
                  &processed_var_6512_ptr,0xd0e,1);
  }
  uVar3 = unaff_RBP & 0xffffffff;
  if ((int)unaff_RBP < *(int *)(unaff_RBX + 0x1c8)) {
    do {
      function_755c10((int64_t)(int)uVar3 * 800 + *(int64_t *)(unaff_RBX + 0x420) + 0x20);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((int)uVar2 < *(int *)(unaff_RBX + 0x1c8));
    lVar1 = *(int64_t *)(unaff_RBX + 0x420);
  }
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&processed_var_6512_ptr,0xd08,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address