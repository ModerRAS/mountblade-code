#include "SystemDataAdvancedHandler_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 05_networking_part065.c - 2 个函数
// 函数: void function_875fc0(int64_t param_1,uint64_t param_2)
void function_875fc0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  uint64_t astack_special_x_10 [3];
  astack_special_x_10[0] = param_2;
  iVar1 = function_8e04b0(param_2,*(uint64_t *)(param_1 + 0x78));
  if (iVar1 == 0) {
    function_8762b0(param_1,astack_special_x_10);
  }
  return;
}
uint64_t function_876000(int64_t *param_1)
{
  int *piVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint uVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  iVar9 = *(int *)((int64_t)param_1 + 0x24);
  if (iVar9 == -1) {
    return 0x1c;
  }
  iVar2 = (int)param_1[1];
  if (iVar9 == iVar2) {
    iVar9 = iVar9 * 2;
    if (iVar9 < 4) {
      iVar9 = 4;
    }
    if (((iVar9 <= iVar2) || ((int)param_1[3] != iVar2)) || ((int)param_1[4] != -1)) {
      return 0x1c;
    }
    uVar8 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((int64_t)param_1 + 0x1c) ^ uVar8) - uVar8) < iVar9) &&
       (uVar5 = function_883420(param_1 + 2,iVar9), (int)uVar5 != 0)) {
      return uVar5;
    }
    uVar5 = RenderingEngine_TextureManager(param_1,iVar9);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar10 = 0;
    uVar6 = uVar10;
    if (0 < iVar9) {
      do {
        *(int32_t *)(*param_1 + uVar6 * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while ((int64_t)uVar6 < (int64_t)iVar9);
    }
    lVar4 = param_1[3];
    uVar6 = uVar10;
    uVar11 = uVar10;
    if (0 < (int)lVar4) {
      do {
        if ((int)param_1[1] == 0) {
          return 0x1c;
        }
        lVar3 = param_1[2];
        lVar7 = (int64_t)
                (int)((*(uint *)(uVar6 + 0xc + lVar3) ^ *(uint *)(uVar6 + 8 + lVar3) ^
                       *(uint *)(uVar6 + 4 + lVar3) ^ *(uint *)(uVar6 + lVar3)) &
                     (int)param_1[1] - 1U);
        piVar1 = (int *)(*param_1 + lVar7 * 4);
        iVar9 = *(int *)(*param_1 + lVar7 * 4);
        while (iVar9 != -1) {
          lVar7 = (int64_t)iVar9 * 9 + 4;
          piVar1 = (int *)(lVar3 + lVar7 * 4);
          iVar9 = *(int *)(lVar3 + lVar7 * 4);
        }
        *piVar1 = (int)uVar10;
        uVar11 = uVar11 + 1;
        uVar10 = (uint64_t)((int)uVar10 + 1);
        *(int32_t *)(param_1[2] + 0x10 + uVar6) = 0xffffffff;
        uVar6 = uVar6 + 0x24;
      } while ((int64_t)uVar11 < (int64_t)(int)lVar4);
    }
  }
  return 0;
}
uint64_t function_876026(void)
{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  int in_EAX;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t *unaff_RBX;
  int unaff_EDI;
  int iVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  if (unaff_EDI == in_EAX) {
    iVar8 = unaff_EDI * 2;
    if (iVar8 < 4) {
      iVar8 = 4;
    }
    if (((iVar8 <= in_EAX) || ((int)unaff_RBX[3] != in_EAX)) || ((int)unaff_RBX[4] != -1)) {
      return 0x1c;
    }
    uVar7 = (int)*(uint *)((int64_t)unaff_RBX + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((int64_t)unaff_RBX + 0x1c) ^ uVar7) - uVar7) < iVar8) &&
       (uVar4 = function_883420(unaff_RBX + 2,iVar8), (int)uVar4 != 0)) {
      return uVar4;
    }
    uVar4 = RenderingEngine_TextureManager();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar9 = 0;
    uVar5 = uVar9;
    if (0 < iVar8) {
      do {
        *(int32_t *)(*unaff_RBX + uVar5 * 4) = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while ((int64_t)uVar5 < (int64_t)iVar8);
    }
    lVar3 = unaff_RBX[3];
    uVar5 = uVar9;
    uVar10 = uVar9;
    if (0 < (int)lVar3) {
      do {
        if ((int)unaff_RBX[1] == 0) {
          return 0x1c;
        }
        lVar2 = unaff_RBX[2];
        lVar6 = (int64_t)
                (int)((*(uint *)(uVar5 + 0xc + lVar2) ^ *(uint *)(uVar5 + 8 + lVar2) ^
                       *(uint *)(uVar5 + 4 + lVar2) ^ *(uint *)(uVar5 + lVar2)) &
                     (int)unaff_RBX[1] - 1U);
        piVar1 = (int *)(*unaff_RBX + lVar6 * 4);
        iVar8 = *(int *)(*unaff_RBX + lVar6 * 4);
        while (iVar8 != -1) {
          lVar6 = (int64_t)iVar8 * 9 + 4;
          piVar1 = (int *)(lVar2 + lVar6 * 4);
          iVar8 = *(int *)(lVar2 + lVar6 * 4);
        }
        *piVar1 = (int)uVar9;
        uVar10 = uVar10 + 1;
        uVar9 = (uint64_t)((int)uVar9 + 1);
        *(int32_t *)(unaff_RBX[2] + 0x10 + uVar5) = 0xffffffff;
        uVar5 = uVar5 + 0x24;
      } while ((int64_t)uVar10 < (int64_t)(int)lVar3);
    }
  }
  return 0;
}
uint64_t function_87615c(void)
{
  return 0x1c;
}
uint64_t function_876180(int64_t param_1,uint param_2,uint64_t param_3)
{
  code *pcVar1;
  uint64_t uVar2;
  int32_t astack_special_x_10 [2];
  if (((*(uint *)(param_1 + 0x310) & param_2) != 0) &&
     (pcVar1 = *(code **)(param_1 + 0x308), pcVar1 != (code *)0x0)) {
    uVar2 = SystemFunction_00018088c570(param_1,astack_special_x_10);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = (*pcVar1)(astack_special_x_10[0],param_2,param_3,*(uint64_t *)(param_1 + 0x318));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}
int64_t CoreSystem_SynchronizationManager0(int64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  iVar6 = 0;
  iVar7 = (int)param_1[1] + -1;
  if (-1 < iVar7) {
    lVar1 = *param_1;
    do {
      iVar3 = (iVar7 + iVar6) / 2;
      lVar2 = *(int64_t *)(lVar1 + (int64_t)iVar3 * 8);
      iVar4 = memcmp(param_2,lVar2 + 0x10,0x10);
      if (iVar4 < 0) {
        uVar5 = 0xffffffff;
      }
      else {
        iVar4 = memcmp(lVar2 + 0x10,param_2,0x10);
        uVar5 = (uint)(iVar4 < 0);
        if (uVar5 == 0) {
          if (iVar3 < 0) {
            return 0;
          }
          return lVar2;
        }
      }
      iVar4 = iVar3 + -1;
      if (-1 < (int)uVar5) {
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      if (-1 < (int)uVar5) {
        iVar6 = iVar3 + 1;
      }
    } while (iVar6 <= iVar7);
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8762b0(int64_t param_1,int64_t *param_2)
void function_8762b0(int64_t param_1,int64_t *param_2)
{
  uint *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  int64_t **pplVar14;
  uint64_t uVar15;
  uint uVar16;
  int64_t **pplVar17;
  bool bVar18;
  int8_t stack_array_9c8 [32];
  int64_t **pplStack_9a8;
  uint64_t local_var_9a0;
  int64_t **pplStack_998;
  int8_t stack_array_988 [8];
  int64_t *plStack_980;
  int64_t **pplStack_978;
  uint64_t *plocal_var_970;
  int64_t lStack_968;
  int32_t local_var_960;
  int32_t local_var_95c;
  uint64_t stack_array_958 [2];
  int64_t *plStack_948;
  uint64_t local_var_940;
  uint64_t local_var_938;
  uint64_t local_var_930;
  uint64_t local_var_928;
  int32_t local_var_920;
  int32_t local_var_91c;
  uint64_t local_var_918;
  uint64_t local_var_910;
  uint64_t local_var_908;
  uint64_t local_var_900;
  int32_t local_var_8f8;
  int32_t local_var_8f4;
  uint64_t local_var_8f0;
  uint64_t local_var_8e8;
  uint64_t local_var_8e0;
  uint64_t local_var_8d8;
  int32_t local_var_8d0;
  int32_t local_var_8cc;
  uint64_t local_var_8c8;
  uint64_t local_var_8c0;
  uint64_t local_var_8b8;
  uint64_t local_var_8b0;
  int32_t local_var_8a8;
  int32_t local_var_8a4;
  uint64_t local_var_8a0;
  uint64_t local_var_898;
  uint64_t local_var_890;
  uint64_t local_var_888;
  int32_t local_var_880;
  int32_t local_var_87c;
  uint64_t local_var_878;
  uint64_t local_var_870;
  uint64_t local_var_868;
  uint64_t local_var_860;
  int32_t local_var_858;
  int32_t local_var_854;
  int8_t stack_array_850 [1128];
  int8_t stack_array_3e8 [784];
  int64_t *plStack_d8;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int8_t stack_array_c8 [128];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_9c8;
  plStack_d8 = param_2;
  function_8dbcd0(stack_array_3e8);
  puVar2 = (uint64_t *)*param_2;
  cVar5 = SystemFunction_0001808dcac0(puVar2);
  uVar15 = 0;
  if (cVar5 == '\0') {
    if ((((*(int *)(puVar2 + 2) == 0) && (*(int *)((int64_t)puVar2 + 0x14) == 0)) &&
        (*(int *)(puVar2 + 3) == 0)) && (*(int *)((int64_t)puVar2 + 0x1c) == 0))
    goto label_876d27;
    lVar10 = function_879970(param_1 + 0x898,puVar2 + 2,1);
    if (lVar10 != 0) {
      plStack_d8 = (int64_t *)puVar2[2];
      local_var_d0 = *(int32_t *)(puVar2 + 3);
      local_var_cc = *(int32_t *)((int64_t)puVar2 + 0x1c);
      RenderingSystem_ShaderCompiler(stack_array_c8,0x80,&plStack_d8);
      goto label_876d27;
    }
    cVar6 = SystemFunction_0001808661c0(*(uint64_t *)(param_1 + 0x80));
    if (((cVar6 != '\0') ||
        (cVar6 = SystemFunction_0001808661d0(*(uint64_t *)(param_1 + 0x80)), cVar6 != '\0')) &&
       (iVar7 = function_866f50(*(uint64_t *)(param_1 + 0x80),puVar2 + 2,puVar2 + 0x51), iVar7 != 0)
       ) goto label_876d27;
  }
  else {
    lVar10 = *(int64_t *)(param_1 + 0xad0);
    if ((lVar10 != 0) && (0 < *(int *)(puVar2 + 0xd))) {
      uVar13 = uVar15;
      do {
        lVar11 = *(int64_t *)(puVar2[0xc] + uVar13 * 8);
        if (((*(byte *)(lVar11 + 0xc4) & 1) != 0) &&
           ((*(int64_t *)(lVar10 + 0x10) != *(int64_t *)(lVar11 + 0x10) ||
            (*(int64_t *)(lVar10 + 0x18) != *(int64_t *)(lVar11 + 0x18))))) {
          if (*(int64_t *)(param_1 + 0x80) != 0) {
            SystemFunction_000180866330();
          }
          goto label_876d27;
        }
        uVar13 = uVar13 + 1;
      } while ((int64_t)uVar13 < (int64_t)*(int *)(puVar2 + 0xd));
    }
  }
  plStack_948 = *(int64_t **)(param_1 + 800);
  local_var_940 = 0;
  local_var_938 = 0;
  local_var_930 = 0;
  local_var_928 = 0;
  local_var_920 = 0xffffffff;
  local_var_91c = 0;
  local_var_918 = 0;
  local_var_910 = 0;
  local_var_908 = 0;
  local_var_900 = 0;
  local_var_8f8 = 0xffffffff;
  local_var_8f4 = 0;
  local_var_8f0 = 0;
  local_var_8e8 = 0;
  local_var_8e0 = 0;
  local_var_8d8 = 0;
  local_var_8d0 = 0xffffffff;
  local_var_8cc = 0;
  local_var_8c8 = 0;
  local_var_8c0 = 0;
  local_var_8b8 = 0;
  local_var_8b0 = 0;
  local_var_8a8 = 0xffffffff;
  local_var_8a4 = 0;
  local_var_8a0 = 0;
  local_var_898 = 0;
  local_var_890 = 0;
  local_var_888 = 0;
  local_var_880 = 0xffffffff;
  local_var_87c = 0;
  local_var_878 = 0;
  local_var_870 = 0;
  local_var_868 = 0;
  local_var_860 = 0;
  local_var_858 = 0xffffffff;
  local_var_854 = 0;
  SystemFunction_0001808713a0(stack_array_850);
  if (cVar5 == '\0') {
    iVar7 = function_86f610(puVar2,param_1 + 0xad8,stack_array_988);
joined_r0x000180876529:
    if (iVar7 == 0) {
      uVar3 = *(uint64_t *)(param_1 + 0x78);
      while ((iVar7 = (int)uVar15, -1 < iVar7 && (iVar7 < *(int *)(puVar2 + 0x11)))) {
        iVar8 = function_8d9fe0(*(uint64_t *)(puVar2[0x10] + (int64_t)iVar7 * 8),uVar3);
        if (iVar8 != 0) goto LAB_180876d05;
        uVar15 = (uint64_t)(iVar7 + 1);
      }
      uVar3 = *(uint64_t *)(param_1 + 0x78);
      uVar16 = *(uint *)(param_1 + 0x20) >> 1;
      for (iVar7 = 0; (-1 < iVar7 && (iVar7 < *(int *)(puVar2 + 0x13))); iVar7 = iVar7 + 1) {
        iVar8 = function_8da5c0(*(uint64_t *)(puVar2[0x12] + (int64_t)iVar7 * 8),uVar3,uVar16 & 1);
        if (((1 < iVar8 - 0x35U) || ((uVar16 & 1) == 0)) && (iVar8 != 0)) goto LAB_180876d05;
      }
      if ((cVar5 != '\0') ||
         (iVar7 = function_880350(puVar2,*(uint64_t *)(param_1 + 800)), iVar7 == 0)) {
        pplStack_978 = *(int64_t ***)(param_1 + 800);
        pplVar17 = (int64_t **)0x0;
        plStack_980 = (int64_t *)&processed_var_5984_ptr;
        pplVar14 = pplStack_978;
        if (cVar5 != '\0') {
          pplVar14 = &plStack_980;
          pplVar17 = &plStack_948;
        }
        lVar10 = *(int64_t *)(param_1 + 0xa0);
        plocal_var_970 = puVar2;
        if (lVar10 != 0) {
          SystemMemoryAllocator(lVar10);
        }
        local_var_9a0 = *(uint64_t *)(param_1 + 0xad0);
        pplStack_9a8 = pplVar14;
        pplStack_998 = pplVar17;
        iVar7 = function_8787d0(puVar2,param_1 + 0x898,param_1 + 0x4a8,param_1 + 0x4d8);
        if (iVar7 == 0) {
          if (lVar10 != 0) {
// WARNING: Subroutine does not return
            SystemMemoryManager(lVar10);
          }
          if (cVar5 != '\0') {
            stack_array_958[0] = 0;
            iVar7 = RenderingSystemOptimizer(stack_array_958,param_1);
            if (iVar7 != 0) goto LAB_180876b83;
            pplStack_9a8 = &plStack_948;
            iVar7 = function_87e0b0(puVar2,*(uint64_t *)(param_1 + 0xc0),stack_array_3e8,
                                  *(uint64_t *)(param_1 + 800));
            if (iVar7 != 0) goto LAB_180876b83;
            pplStack_9a8 = &plStack_948;
            iVar7 = function_869270(function_873f80,param_1 + 0x328,puVar2,0);
            if (iVar7 == 0) {
              pplStack_9a8 = &plStack_948;
              iVar7 = function_8690e0(function_873f80,param_1 + 0x358,puVar2,0);
              if (iVar7 != 0) goto LAB_180876796;
              pplStack_9a8 = &plStack_948;
              iVar7 = function_869720(function_873f80,param_1 + 0x388,puVar2,0);
              if (iVar7 != 0) goto LAB_180876796;
              pplStack_9a8 = &plStack_948;
              iVar7 = function_869400(function_873f80,param_1 + 0x3b8,puVar2,0);
              if (iVar7 != 0) goto LAB_180876796;
              pplStack_9a8 = &plStack_948;
              iVar7 = function_869590(function_873f80,param_1 + 1000,puVar2,0);
              if (iVar7 != 0) goto LAB_180876796;
            }
            else {
LAB_180876796:
              if (iVar7 != 0) goto LAB_180876b83;
            }
            iVar7 = function_8740c0(&plStack_948,puVar2);
            if (iVar7 == 0) {
              function_882a50(puVar2 + 0x59,&plStack_948);
              lVar10 = *(int64_t *)(param_1 + 0xa0);
              lStack_968 = lVar10;
              if (lVar10 != 0) {
                SystemMemoryAllocator(lVar10);
              }
              plStack_980 = (int64_t *)(param_1 + 0x778);
              pplStack_978 = (int64_t **)0xffffffffffffffff;
              plocal_var_970 = (uint64_t *)CONCAT44(plocal_var_970._4_4_,0xffffffff);
              SystemResource_Manager(plStack_980,&pplStack_978,&plocal_var_970);
              if ((int)plocal_var_970 != -1) {
                iVar7 = (int)plocal_var_970;
                iVar8 = (int)pplStack_978;
                do {
                  do {
                    lVar10 = *(int64_t *)(plStack_980[2] + 0x18 + (int64_t)iVar7 * 0x20);
                    iVar9 = function_8c7ff0(*(uint64_t *)(lVar10 + 0xd0),param_1,&plStack_948);
                    if (iVar9 != 0) {
                      if (lStack_968 != 0) {
// WARNING: Subroutine does not return
                        SystemMemoryManager();
                      }
                      goto LAB_180876b83;
                    }
                    puVar1 = (uint *)(*(int64_t *)(lVar10 + 0xd0) + 4);
                    *puVar1 = *puVar1 & 0xfffffff7;
                  } while ((iVar7 != -1) &&
                          (iVar7 = *(int *)(plStack_980[2] + 0x10 + (int64_t)iVar7 * 0x20),
                          iVar7 != -1));
                  iVar7 = iVar8 + 1;
                  bVar18 = iVar8 != -1;
                  iVar8 = 0;
                  if (bVar18) {
                    iVar8 = iVar7;
                  }
                  if (iVar8 != (int)plStack_980[1]) {
                    lVar10 = (int64_t)iVar8;
                    do {
                      if (*(int *)(*plStack_980 + lVar10 * 4) != -1) {
                        iVar7 = *(int *)(*plStack_980 + (int64_t)iVar8 * 4);
                        goto LAB_1808768bc;
                      }
                      iVar8 = iVar8 + 1;
                      lVar10 = lVar10 + 1;
                    } while (lVar10 != (int)plStack_980[1]);
                  }
                  iVar7 = -1;
                  iVar8 = iVar7;
LAB_1808768bc:
                  lVar10 = lStack_968;
                } while (iVar7 != -1);
              }
              uVar3 = *(uint64_t *)(param_1 + 0x90);
              plVar4 = *(int64_t **)(param_1 + 800);
              uVar15 = puVar2[0x57];
              do {
                if ((uVar15 < (uint64_t)puVar2[0x57]) ||
                   ((uint64_t)((int64_t)*(int *)(puVar2 + 0x58) * 0x10 + puVar2[0x57]) <= uVar15))
                goto LAB_1808769aa;
                cVar5 = SystemFunction_0001808c0d90(uVar3,uVar15);
                if (cVar5 != '\0') {
                  iVar7 = function_8c2060(uVar3,uVar15,0);
                  if (iVar7 != 0) goto LAB_1808769aa;
                  lVar11 = (**(code **)(*plVar4 + 0x150))(plVar4,uVar15);
                  if (lVar11 != 0) {
                    function_8c5220(&plStack_948,lVar11);
                    lStack_968 = *(int64_t *)(lVar11 + 0x10);
                    local_var_960 = *(int32_t *)(lVar11 + 0x18);
                    local_var_95c = *(int32_t *)(lVar11 + 0x1c);
                    stack_array_988[0] = 1;
                    SystemStateProcessor(&local_var_940,&lStack_968);
                  }
                }
                uVar15 = uVar15 + 0x10;
              } while( true );
            }
LAB_180876b83:
// WARNING: Subroutine does not return
            AdvancedSystemProcessor(stack_array_958);
          }
          if (puVar2[0x5c] != 0) {
            lVar10 = *(int64_t *)(param_1 + 0xa0);
            if (lVar10 != 0) {
              SystemMemoryAllocator();
            }
            plVar4 = puVar2 + 4;
            if (plVar4 == (int64_t *)0x0) {
label_876d54:
              if (lVar10 != 0) {
// WARNING: Subroutine does not return
                SystemMemoryManager(lVar10);
              }
              goto LAB_180876d05;
            }
            plVar12 = (int64_t *)*plVar4;
            if (plVar12 != plVar4) {
              iVar7 = 0;
              do {
                plVar12 = (int64_t *)*plVar12;
                iVar7 = iVar7 + 1;
              } while (plVar12 != plVar4);
              if (iVar7 != 0) goto label_876d54;
            }
            lVar11 = *(int64_t *)(param_1 + 0xaa8);
            puVar2[5] = (int64_t *)(param_1 + 0xaa8);
            *plVar4 = lVar11;
            *(int64_t **)(lVar11 + 8) = plVar4;
            *(int64_t **)puVar2[5] = plVar4;
            if (lVar10 != 0) {
// WARNING: Subroutine does not return
              SystemMemoryManager(lVar10);
            }
          }
          iVar7 = function_8db1d0(*(uint64_t *)(param_1 + 0xaa0),puVar2);
          if (iVar7 == 0) {
            if (*(char *)(puVar2 + 0x5f) != '\0') {
              if (((*(int64_t *)(param_1 + 0xad0) != 0) &&
                  ((*(ushort *)(*(int64_t *)(param_1 + 0xad0) + 0xe) & 0x3fff) == 1)) &&
                 (iVar7 = function_8bc120(*(uint64_t *)(param_1 + 0x90),puVar2), iVar7 != 0))
              goto LAB_180876d05;
              if (((*(char *)(puVar2 + 0x5f) != '\0') && (*(int64_t *)(param_1 + 0x80) != 0)) &&
                 (puVar2[0x60] != 0)) {
                SystemFunction_0001808671f0();
              }
            }
            if (*(int64_t *)(param_1 + 0xad0) != 0) {
              function_881eb0(param_1,puVar2);
            }
          }
        }
        else if (lVar10 != 0) {
// WARNING: Subroutine does not return
          SystemMemoryManager(lVar10);
        }
      }
    }
  }
  else {
    iVar7 = function_882610(param_1,puVar2 + 0x53);
    if (iVar7 == 0) {
      iVar7 = function_88b520(param_1,puVar2);
      goto joined_r0x000180876529;
    }
  }
LAB_180876d05:
  function_872630(stack_array_850);
  function_873cd0(&local_var_940);
label_876d27:
  function_8dc190(stack_array_3e8);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_9c8);
LAB_1808769aa:
  uVar15 = puVar2[0x55];
  do {
    if ((uVar15 < (uint64_t)puVar2[0x55]) ||
       ((uint64_t)((int64_t)*(int *)(puVar2 + 0x56) * 0x10 + puVar2[0x55]) <= uVar15)) break;
    cVar5 = SystemFunction_0001808c0d90(uVar3,uVar15);
    if (cVar5 != '\x01') {
      iVar7 = function_8c2060(uVar3,uVar15,1);
      if (iVar7 != 0) break;
      lVar11 = (**(code **)(*plVar4 + 0x150))(plVar4,uVar15,1);
      if (lVar11 != 0) {
        function_8c5220(&plStack_948,lVar11);
        lStack_968 = *(int64_t *)(lVar11 + 0x10);
        local_var_960 = *(int32_t *)(lVar11 + 0x18);
        local_var_95c = *(int32_t *)(lVar11 + 0x1c);
        stack_array_988[0] = 1;
        SystemStateProcessor(&local_var_940,&lStack_968,stack_array_988);
      }
    }
    uVar15 = uVar15 + 0x10;
  } while( true );
  if (lVar10 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager(lVar10);
  }
  iVar7 = function_8bfbe0(*(uint64_t *)(param_1 + 0x90),&plStack_948);
  if (iVar7 == 0) {
    lVar10 = *(int64_t *)(param_1 + 0xa0);
    if (lVar10 != 0) {
      SystemMemoryAllocator(lVar10);
    }
    plStack_980 = (int64_t *)(param_1 + 0x898);
    pplStack_978 = (int64_t **)0xffffffffffffffff;
    plocal_var_970 = (uint64_t *)CONCAT44(plocal_var_970._4_4_,0xffffffff);
    SystemResource_Manager(plStack_980,&pplStack_978,&plocal_var_970);
    plVar4 = plStack_980;
    while (plStack_980 = plVar4, (int)plocal_var_970 != -1) {
      lVar11 = (int64_t)(int)plocal_var_970;
      lStack_968 = *(int64_t *)(param_1 + 800);
      iVar7 = function_86f460(*(uint64_t *)(lVar11 * 0x20 + 0x18 + plVar4[2]),param_1 + 0xad8,
                            &lStack_968);
      if ((iVar7 != 0) ||
         (iVar7 = function_87c9b0(*(uint64_t *)(lVar11 * 0x20 + 0x18 + plVar4[2]),&plStack_948),
         iVar7 != 0)) {
        if (lVar10 != 0) {
// WARNING: Subroutine does not return
          SystemMemoryManager(lVar10);
        }
        goto LAB_180876b83;
      }
      SystemFunction_000180874280(&plStack_980);
      plVar4 = plStack_980;
    }
    if (lVar10 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar10);
    }
    if ((((*(int64_t *)(param_1 + 0xad0) == 0) ||
         (iVar7 = function_881eb0(param_1,puVar2), iVar7 == 0)) &&
        (iVar7 = function_875800(stack_array_3e8,*(uint64_t *)(param_1 + 800)), iVar7 == 0)) &&
       ((puVar2[0x5d] == 0 || (iVar7 = function_8dea80(), iVar7 == 0)))) {
      (**(code **)*puVar2)(puVar2,0);
      pplStack_9a8 = (int64_t **)CONCAT71(pplStack_9a8._1_7_,1);
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&processed_var_5856_ptr,0xd1b);
    }
  }
  goto LAB_180876b83;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address