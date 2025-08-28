#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part322_sub002_sub002.c - 1 个函数

// 函数: void FUN_180438c70(uint param_1,float param_2,uint64_t param_3,uint64_t param_4)
void FUN_180438c70(uint param_1,float param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  char cVar2;
  float fVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int iVar6;
  void *puVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t unaff_RBX;
  int32_t uVar10;
  float fVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float afStackX_8 [2];
  uint64_t in_stack_00000018;
  
  lVar1 = SYSTEM_STATE_MANAGER;
  if (param_1 < 0x49) {
    switch(param_1) {
    case 0:
      afStackX_8[0] = param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x13a0) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x13a8))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1350) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1350);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x1340) = *(int32_t *)(lVar1 + 5000);
          return;
        }
        param_2 = afStackX_8[0];
      }
      *(float *)(lVar1 + 0x1340) = param_2;
      return;
    case 1:
      afStackX_8[0] = param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1560) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1568))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1510) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1510);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x1500) = *(int32_t *)(lVar1 + 0x1548);
          return;
        }
        param_2 = afStackX_8[0];
      }
      *(float *)(lVar1 + 0x1500) = param_2;
      return;
    case 2:
      afStackX_8[0] = param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1410) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1418))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x13c0) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x13c0);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x13b0) = *(int32_t *)(lVar1 + 0x13f8);
          return;
        }
        param_2 = afStackX_8[0];
      }
      *(float *)(lVar1 + 0x13b0) = param_2;
      return;
    case 3:
      afStackX_8[0] = param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1480) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1488))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1430) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1430);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x1420) = *(int32_t *)(lVar1 + 0x1468);
          return;
        }
        param_2 = afStackX_8[0];
      }
      *(float *)(lVar1 + 0x1420) = param_2;
      return;
    case 4:
      afStackX_8[0] = param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x14f0) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x14f8))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x14a0) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x14a0);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x1490) = *(int32_t *)(lVar1 + 0x14d8);
          return;
        }
        param_2 = afStackX_8[0];
      }
      *(float *)(lVar1 + 0x1490) = param_2;
      return;
    case 5:
      fVar11 = (float)(int)param_2;
      afStackX_8[0] = fVar11;
      fVar3 = fVar11;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x15d0) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x15d8))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1580) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1580);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          fVar3 = *(float *)(lVar1 + 0x15b8);
        }
        else {
          fVar3 = afStackX_8[0];
        }
      }
      *(float *)(lVar1 + 0x1570) = fVar3;
                    // WARNING: Could not recover jumptable at 0x000180438ff3. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*render_system_data_state + 0xa8))(render_system_data_state,fVar11);
      return;
    case 6:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1330) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1338))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x12e0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x12e0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x12d0) = *(int32_t *)(lVar1 + 0x1318);
        return;
      }
      *(int *)(lVar1 + 0x12d0) = (int)param_2;
      return;
    case 7:
      afStackX_8[0] = (float)(int)param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1640) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1648))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x15f0) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x15f0);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x15e0) = *(int32_t *)(lVar1 + 0x1628);
          return;
        }
      }
      *(float *)(lVar1 + 0x15e0) = afStackX_8[0];
      return;
    case 8:
      afStackX_8[0] = (float)(int)param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x16b0) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x16b8))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1660) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1660);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x1650) = *(int32_t *)(lVar1 + 0x1698);
          return;
        }
      }
      *(float *)(lVar1 + 0x1650) = afStackX_8[0];
      return;
    case 9:
      afStackX_8[0] = (float)(int)param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x23d0) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x23d8))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x2380) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x2380);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x2370) = *(int32_t *)(lVar1 + 0x23b8);
          return;
        }
      }
      *(float *)(lVar1 + 0x2370) = afStackX_8[0];
      return;
    case 10:
      afStackX_8[0] = (float)(int)param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x2440) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x2448))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x23f0) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x23f0);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x23e0) = *(int32_t *)(lVar1 + 0x2428);
          return;
        }
      }
      *(float *)(lVar1 + 0x23e0) = afStackX_8[0];
      return;
    case 0xb:
      afStackX_8[0] = param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1720) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1728))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x16d0) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x16d0);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x16c0) = *(int32_t *)(lVar1 + 0x1708);
          return;
        }
        param_2 = afStackX_8[0];
      }
      *(float *)(lVar1 + 0x16c0) = param_2;
      return;
    case 0xc:
      afStackX_8[0] = (float)(int)param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1790) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1798))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1740) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1740);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x1730) = *(int32_t *)(lVar1 + 0x1778);
          return;
        }
      }
      *(float *)(lVar1 + 0x1730) = afStackX_8[0];
      return;
    case 0xd:
      afStackX_8[0] = param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1950) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1958))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1900) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1900);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x18f0) = *(int32_t *)(lVar1 + 0x1938);
          return;
        }
        param_2 = afStackX_8[0];
      }
      *(float *)(lVar1 + 0x18f0) = param_2;
      return;
    case 0xe:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1800) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1808))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x17b0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x17b0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x17a0) = *(int32_t *)(lVar1 + 0x17e8);
        return;
      }
      *(float *)(lVar1 + 0x17a0) = param_2;
      return;
    case 0xf:
      afStackX_8[0] = (float)(int)param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x2360) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x2368))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x2310) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x2310);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x2300) = *(int32_t *)(lVar1 + 0x2348);
          return;
        }
      }
      *(float *)(lVar1 + 0x2300) = afStackX_8[0];
      return;
    case 0x10:
      afStackX_8[0] = (float)(int)param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x24b0) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x24b8))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x2460) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x2460);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x2450) = *(int32_t *)(lVar1 + 0x2498);
          return;
        }
      }
      *(float *)(lVar1 + 0x2450) = afStackX_8[0];
      return;
    case 0x11:
      afStackX_8[0] = param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x2520) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x2528))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x24d0) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x24d0);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x24c0) = *(int32_t *)(lVar1 + 0x2508);
          return;
        }
        param_2 = afStackX_8[0];
      }
      *(float *)(lVar1 + 0x24c0) = param_2;
      return;
    case 0x12:
      afStackX_8[0] = (float)(int)param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x2590) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x2598))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x2540) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x2540);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x2530) = *(int32_t *)(lVar1 + 0x2578);
          return;
        }
      }
      *(float *)(lVar1 + 0x2530) = afStackX_8[0];
      return;
    case 0x13:
      afStackX_8[0] = (float)(int)param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x2600) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x2608))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x25b0) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x25b0);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x25a0) = *(int32_t *)(lVar1 + 0x25e8);
          return;
        }
      }
      *(float *)(lVar1 + 0x25a0) = afStackX_8[0];
      return;
    case 0x14:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1f00) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1f08))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x1eb0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x1eb0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x1ea0) = *(int32_t *)(lVar1 + 0x1ee8);
        return;
      }
      *(int *)(lVar1 + 0x1ea0) = (int)param_2;
      return;
    case 0x15:
      afStackX_8[0] = (float)(int)param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1f70) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1f78))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1f20) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1f20);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x1f10) = *(int32_t *)(lVar1 + 0x1f58);
          return;
        }
      }
      *(float *)(lVar1 + 0x1f10) = afStackX_8[0];
      return;
    case 0x16:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1870) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1878))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x1820) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x1820);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x1810) = *(int32_t *)(lVar1 + 0x1858);
        return;
      }
      *(int *)(lVar1 + 0x1810) = (int)param_2;
      return;
    case 0x17:
      iVar6 = FUN_180438350();
      if (param_2 <= (float)iVar6) {
        iVar6 = FUN_180438350();
        if (param_2 == (float)iVar6) {
          FUN_180171f10(*(uint64_t *)(system_main_module_state + 8),&stack0x00000018);
          FUN_18006b4c0(SYSTEM_STATE_MANAGER,in_stack_00000018 & 0xffffffff);
          iVar6 = (int)(in_stack_00000018 >> 0x20);
        }
        else {
          uVar4 = FUN_1804386b0((int)param_2);
          FUN_18006b4c0(SYSTEM_STATE_MANAGER,(int)(float)uVar4);
          iVar6 = (int)(float)((uint64_t)uVar4 >> 0x20);
        }
        lVar1 = SYSTEM_STATE_MANAGER;
        if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1e20) != 0) &&
           (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1e28))(&stack0x00000010), cVar2 == '\0')) {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1dd0) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1dd0);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7,param_3,param_4,unaff_RBX);
          }
          *(int32_t *)(lVar1 + 0x1dc0) = *(int32_t *)(lVar1 + 0x1e08);
          return;
        }
        *(int *)(lVar1 + 0x1dc0) = iVar6;
        return;
      }
      break;
    case 0x18:
      iVar6 = FUN_180438940((int)param_2);
      lVar1 = SYSTEM_STATE_MANAGER;
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1e90) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1e98))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x1e40) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x1e40);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7,param_3,param_4,unaff_RBX);
        }
        *(int32_t *)(lVar1 + 0x1e30) = *(int32_t *)(lVar1 + 0x1e78);
        return;
      }
      *(float *)(lVar1 + 0x1e30) = (float)iVar6;
      return;
    case 0x19:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x2130) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x2138))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x20e0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x20e0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x20d0) = *(int32_t *)(lVar1 + 0x2118);
        return;
      }
      *(float *)(lVar1 + 0x20d0) = param_2;
      return;
    case 0x1a:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1bf0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1bf8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x1ba0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x1ba0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x1b90) = *(int32_t *)(lVar1 + 0x1bd8);
        return;
      }
      *(int *)(lVar1 + 0x1b90) = (int)param_2;
      return;
    case 0x1b:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1fe0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1fe8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x1f90) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x1f90);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x1f80) = *(int32_t *)(lVar1 + 0x1fc8);
        return;
      }
      *(int *)(lVar1 + 0x1f80) = (int)param_2;
      return;
    case 0x1c:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1170) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1178))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x1120) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x1120);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x1110) = *(int32_t *)(lVar1 + 0x1158);
        return;
      }
      *(float *)(lVar1 + 0x1110) = param_2;
      return;
    case 0x1d:
      iVar6 = (int)param_2;
      if (iVar6 < 5) {
        uVar10 = 0;
        uVar8 = 1;
        uVar9 = 4;
        uVar12 = 4;
        uVar13 = 2;
        if (iVar6 == 0) {
          uVar5 = 0;
        }
        else if (iVar6 == 1) {
          uVar5 = 1;
        }
        else {
          uVar5 = uVar13;
          if (iVar6 != 2) {
            if (iVar6 == 3) {
              uVar5 = 3;
            }
            else {
              uVar5 = uVar12;
              if (iVar6 == 5) {
                uVar5 = *(int32_t *)(SYSTEM_STATE_MANAGER + 0xe0);
              }
            }
          }
        }
        FUN_18010e230(SYSTEM_STATE_MANAGER,uVar5);
        if (iVar6 == 0) {
          uVar5 = 0;
        }
        else if (iVar6 == 1) {
          uVar5 = 1;
        }
        else {
          uVar5 = uVar13;
          if (iVar6 != 2) {
            if (iVar6 == 3) {
              uVar5 = 3;
            }
            else if (iVar6 == 5) {
              uVar5 = *(int32_t *)(lVar1 + 0x150);
            }
            else {
              uVar5 = 5;
            }
          }
        }
        FUN_18010e170(lVar1,uVar5);
        if (((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 2)) {
          uVar5 = 0;
        }
        else if ((iVar6 == 3) || (iVar6 != 5)) {
          uVar5 = 1;
        }
        else {
          uVar5 = *(int32_t *)(lVar1 + 0x1c0);
        }
        FUN_18010e0b0(lVar1,uVar5);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar5 = 0;
        }
        else if ((iVar6 == 2) || (iVar6 == 3)) {
          uVar5 = 1;
        }
        else if (iVar6 == 5) {
          uVar5 = *(int32_t *)(lVar1 + 0x230);
        }
        else {
          uVar5 = 2;
        }
        FUN_18010e030(lVar1,uVar5);
        if (iVar6 == 0) {
          uVar5 = 0;
        }
        else if (iVar6 == 1) {
          uVar5 = 1;
        }
        else if (iVar6 == 2) {
          uVar5 = 2;
        }
        else if (iVar6 == 3) {
          uVar5 = 3;
        }
        else {
          uVar5 = uVar12;
          if (iVar6 == 5) {
            uVar5 = *(int32_t *)(lVar1 + 0x2a0);
          }
        }
        FUN_18010dfb0(lVar1,uVar5);
        if (iVar6 == 0) {
          uVar5 = 1;
        }
        else if (iVar6 == 1) {
          uVar5 = 2;
        }
        else if (iVar6 == 2) {
          uVar5 = 3;
        }
        else {
          uVar5 = uVar12;
          if (iVar6 != 3) {
            if (iVar6 == 5) {
              uVar5 = *(int32_t *)(lVar1 + 0x310);
            }
            else {
              uVar5 = 5;
            }
          }
        }
        FUN_18010def0(lVar1,uVar5);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar5 = 0;
        }
        else if (iVar6 == 2) {
          uVar5 = 1;
        }
        else if (iVar6 == 3) {
          uVar5 = 2;
        }
        else if (iVar6 == 5) {
          uVar5 = *(int32_t *)(lVar1 + 0x380);
        }
        else {
          uVar5 = 3;
        }
        FUN_18010e330(lVar1,uVar5);
        if (iVar6 == 0) {
          uVar5 = 0;
        }
        else if ((iVar6 == 1) || (iVar6 == 2)) {
          uVar5 = 1;
        }
        else if ((iVar6 == 3) || (iVar6 != 5)) {
          uVar5 = 2;
        }
        else {
          uVar5 = *(int32_t *)(lVar1 + 0x3f0);
        }
        FUN_18010e2b0(lVar1,uVar5);
        if (iVar6 == 0) {
          uVar5 = 0;
        }
        else if ((iVar6 == 1) || (iVar6 == 2)) {
          uVar5 = 1;
        }
        else if ((iVar6 == 3) || (iVar6 != 5)) {
          uVar5 = 2;
        }
        else {
          uVar5 = *(int32_t *)(lVar1 + 0x460);
        }
        FUN_18010de30(lVar1,uVar5);
        if (iVar6 == 0) {
          uVar9 = 0;
        }
        else if (iVar6 == 1) {
          uVar9 = 1;
        }
        else if (iVar6 == 2) {
          uVar9 = 3;
        }
        else if ((iVar6 != 3) && (uVar9 = 5, iVar6 == 5)) {
          uVar9 = *(int32_t *)(lVar1 + 0x4d0);
        }
        FUN_18010e430(lVar1,uVar9);
        if ((((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 2)) || ((iVar6 == 3 || (iVar6 != 5)))) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0x540);
        }
        FUN_18010e3b0(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar9 = 0;
        }
        else if (((iVar6 == 2) || (iVar6 == 3)) || (iVar6 != 5)) {
          uVar9 = 1;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0x5b0);
        }
        FUN_18010dd70(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar9 = 0;
        }
        else if (((iVar6 == 2) || (iVar6 == 3)) || (iVar6 != 5)) {
          uVar9 = 1;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0x620);
        }
        FUN_18010dcf0(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar9 = 0;
        }
        else if (((iVar6 == 2) || (iVar6 == 3)) || (iVar6 != 5)) {
          uVar9 = 1;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0x690);
        }
        FUN_18010dc70(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar9 = 0;
        }
        else if (iVar6 == 2) {
          uVar9 = 1;
        }
        else if ((iVar6 == 3) || (iVar6 != 5)) {
          uVar9 = 2;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0x700);
        }
        FUN_18010dbf0(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar9 = 0;
        }
        else if (((iVar6 == 2) || (iVar6 == 3)) || (iVar6 != 5)) {
          uVar9 = 1;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0x770);
        }
        FUN_18010db70(lVar1,uVar9);
        if (((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 2)) {
          uVar9 = 0;
        }
        else if ((iVar6 == 3) || (iVar6 != 5)) {
          uVar9 = 1;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0x7e0);
        }
        FUN_18010daf0(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar9 = 0;
        }
        else if (((iVar6 == 2) || (iVar6 == 3)) || (iVar6 != 5)) {
          uVar9 = 1;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0x850);
        }
        FUN_18010da70(lVar1,uVar9);
        if (iVar6 == 0) {
          uVar9 = 0;
        }
        else if (((iVar6 == 1) || (iVar6 == 2)) || ((iVar6 == 3 || (iVar6 != 5)))) {
          uVar9 = 1;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0x8c0);
        }
        FUN_18010d9f0(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar9 = 0;
        }
        else if (((iVar6 == 2) || (iVar6 == 3)) || (iVar6 != 5)) {
          uVar9 = 1;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0x930);
        }
        FUN_18010d970(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar9 = 0;
        }
        else if (((iVar6 == 2) || (iVar6 == 3)) || (iVar6 != 5)) {
          uVar9 = 1;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0x9a0);
        }
        FUN_18010d8f0(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar9 = 0;
        }
        else if (((iVar6 == 2) || (iVar6 == 3)) || (iVar6 != 5)) {
          uVar9 = 1;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0xa10);
        }
        FUN_18010d870(lVar1,uVar9);
        if (((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 2)) {
          uVar9 = 0;
        }
        else if ((iVar6 == 3) || (iVar6 != 5)) {
          uVar9 = 1;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0xa80);
        }
        FUN_18010d7f0(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar9 = 0;
        }
        else if ((iVar6 == 2) || (iVar6 == 3)) {
          uVar9 = 1;
        }
        else {
          uVar9 = uVar13;
          if (iVar6 == 5) {
            uVar9 = *(int32_t *)(lVar1 + 0xaf0);
          }
        }
        FUN_18010d770(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar9 = 0;
        }
        else if ((iVar6 == 2) || (iVar6 == 3)) {
          uVar9 = 1;
        }
        else {
          uVar9 = uVar13;
          if (iVar6 == 5) {
            uVar9 = *(int32_t *)(lVar1 + 0xb60);
          }
        }
        FUN_18010d6f0(lVar1,uVar9);
        if (iVar6 == 0) {
          uVar9 = 0;
        }
        else if (iVar6 == 1) {
          uVar9 = 1;
        }
        else {
          uVar9 = uVar13;
          if (((iVar6 != 2) && (iVar6 != 3)) && (iVar6 == 5)) {
            uVar9 = *(int32_t *)(lVar1 + 0xbd0);
          }
        }
        FUN_18010d670(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar9 = 1;
        }
        else {
          uVar9 = uVar13;
          if (((iVar6 != 2) && (iVar6 != 3)) && (iVar6 == 5)) {
            uVar9 = *(int32_t *)(lVar1 + 0xc40);
          }
        }
        FUN_18010d5f0(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar9 = 0;
        }
        else if (iVar6 == 2) {
          uVar9 = 1;
        }
        else {
          uVar9 = uVar13;
          if (iVar6 != 3) {
            if (iVar6 == 5) {
              uVar9 = *(int32_t *)(lVar1 + 0xcb0);
            }
            else {
              uVar9 = 3;
            }
          }
        }
        FUN_18010d570(lVar1,uVar9);
        if (iVar6 == 0) {
          uVar9 = 0;
        }
        else if ((((iVar6 == 1) || (iVar6 == 2)) || (iVar6 == 3)) || (iVar6 != 5)) {
          uVar9 = 1;
        }
        else {
          uVar9 = *(int32_t *)(lVar1 + 0xd20);
        }
        FUN_18010d4f0(lVar1,uVar9);
        if (iVar6 == 0) {
          uVar9 = 0;
        }
        else if (iVar6 == 1) {
          uVar9 = 1;
        }
        else {
          uVar9 = uVar13;
          if (iVar6 != 2) {
            if (iVar6 == 3) {
              uVar9 = 3;
            }
            else {
              uVar9 = uVar12;
              if (iVar6 == 5) {
                uVar9 = *(int32_t *)(lVar1 + 0xd90);
              }
            }
          }
        }
        FUN_18010d470(lVar1,uVar9);
        if (iVar6 == 0) {
          uVar9 = 0;
        }
        else if (iVar6 == 1) {
          uVar9 = 1;
        }
        else {
          uVar9 = uVar13;
          if (iVar6 != 2) {
            if (iVar6 == 3) {
              uVar9 = 3;
            }
            else {
              uVar9 = uVar12;
              if (iVar6 == 5) {
                uVar9 = *(int32_t *)(lVar1 + 0xe00);
              }
            }
          }
        }
        FUN_18010d3b0(lVar1,uVar9);
        if ((iVar6 == 0) || (iVar6 == 1)) {
          uVar13 = 0;
        }
        else if (iVar6 == 2) {
          uVar13 = 1;
        }
        else if ((iVar6 != 3) && (iVar6 == 5)) {
          uVar13 = *(int32_t *)(lVar1 + 0xe70);
        }
        FUN_18010d2f0(lVar1,uVar13);
        if (*(int *)(render_system_data_state + 0xcb0) != 0) {
          if ((iVar6 == 0) || (iVar6 == 1)) {
            uVar9 = 0;
          }
          else if (((iVar6 == 2) || (iVar6 == 3)) || (iVar6 != 5)) {
            uVar9 = 1;
          }
          else {
            uVar9 = *(int32_t *)(lVar1 + 0xee0);
          }
          FUN_18010d270(lVar1,uVar9);
        }
        if (*(int *)(render_system_data_state + 0xd20) != 0) {
          if ((iVar6 == 0) || (iVar6 == 1)) {
            uVar9 = 0;
          }
          else if (((iVar6 == 2) || (iVar6 == 3)) || (iVar6 != 5)) {
            uVar9 = 1;
          }
          else {
            uVar9 = *(int32_t *)(lVar1 + 0xf50);
          }
          FUN_18010d1f0(lVar1,uVar9);
        }
        if (*(int *)(render_system_data_state + 0xd90) != 0) {
          if ((iVar6 == 0) || (iVar6 == 1)) {
            uVar9 = 0;
          }
          else if (((iVar6 == 2) || (iVar6 == 3)) || (iVar6 != 5)) {
            uVar9 = 1;
          }
          else {
            uVar9 = *(int32_t *)(lVar1 + 0xfc0);
          }
          FUN_18010d170(lVar1,uVar9);
        }
        if (*(int *)(render_system_data_state + 0xe00) != 0) {
          uVar9 = 1;
          if (((iVar6 != 0) && (iVar6 != 1)) &&
             ((uVar9 = uVar8, iVar6 != 2 && ((iVar6 != 3 && (iVar6 == 5)))))) {
            uVar9 = *(int32_t *)(lVar1 + 0x1030);
          }
          FUN_18010d0f0(lVar1,uVar9);
        }
        if (*(int *)(render_system_data_state + 0xe70) != 0) {
          uVar9 = 0;
          if ((((iVar6 != 0) && (uVar9 = uVar10, iVar6 != 1)) && (iVar6 != 2)) &&
             ((iVar6 != 3 && (iVar6 == 5)))) {
            uVar9 = *(int32_t *)(lVar1 + 0x10a0);
          }
          FUN_18010d070(lVar1,uVar9);
        }
      }
      return;
    case 0x1e:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x760) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x768))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x710) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x710);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x700) = *(int32_t *)(lVar1 + 0x748);
        return;
      }
      *(int *)(lVar1 + 0x700) = (int)param_2;
      return;
    case 0x1f:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x3e0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 1000))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x390) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x390);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x380) = *(int32_t *)(lVar1 + 0x3c8);
        return;
      }
      *(int *)(lVar1 + 0x380) = (int)param_2;
      return;
    case 0x20:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x450) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x458))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x400) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x400);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x3f0) = *(int32_t *)(lVar1 + 0x438);
        return;
      }
      *(int *)(lVar1 + 0x3f0) = (int)param_2;
      return;
    case 0x21:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xd10) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xd18))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0xcc0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0xcc0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0xcb0) = *(int32_t *)(lVar1 + 0xcf8);
        return;
      }
      *(int *)(lVar1 + 0xcb0) = (int)param_2;
      return;
    case 0x22:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xca0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xca8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0xc50) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0xc50);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0xc40) = *(int32_t *)(lVar1 + 0xc88);
        return;
      }
      *(int *)(lVar1 + 0xc40) = (int)param_2;
      return;
    case 0x23:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xd80) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xd88))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0xd30) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0xd30);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0xd20) = *(int32_t *)(lVar1 + 0xd68);
        return;
      }
      *(int *)(lVar1 + 0xd20) = (int)param_2;
      return;
    case 0x24:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xb50) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xb58))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0xb00) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0xb00);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0xaf0) = *(int32_t *)(lVar1 + 0xb38);
        return;
      }
      *(int *)(lVar1 + 0xaf0) = (int)param_2;
      return;
    case 0x25:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xbc0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xbc8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0xb70) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0xb70);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0xb60) = *(int32_t *)(lVar1 + 0xba8);
        return;
      }
      *(int *)(lVar1 + 0xb60) = (int)param_2;
      return;
    case 0x26:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x140) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x148))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0xf0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0xf0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0xe0) = *(int32_t *)(lVar1 + 0x128);
        return;
      }
      *(int *)(lVar1 + 0xe0) = (int)param_2;
      return;
    case 0x27:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xe60) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xe68))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0xe10) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0xe10);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0xe00) = *(int32_t *)(lVar1 + 0xe48);
        return;
      }
      *(int *)(lVar1 + 0xe00) = (int)param_2;
      return;
    case 0x28:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xdf0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xdf8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0xda0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0xda0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0xd90) = *(int32_t *)(lVar1 + 0xdd8);
        return;
      }
      *(int *)(lVar1 + 0xd90) = (int)param_2;
      return;
    case 0x29:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xed0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xed8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0xe80) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0xe80);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0xe70) = *(int32_t *)(lVar1 + 0xeb8);
        return;
      }
      *(int *)(lVar1 + 0xe70) = (int)param_2;
      return;
    case 0x2a:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1b0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1b8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x160) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x160);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x150) = *(int32_t *)(lVar1 + 0x198);
        return;
      }
      *(int *)(lVar1 + 0x150) = (int)param_2;
      return;
    case 0x2b:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x220) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x228))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x1d0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x1d0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x1c0) = *(int32_t *)(lVar1 + 0x208);
        return;
      }
      *(int *)(lVar1 + 0x1c0) = (int)param_2;
      return;
    case 0x2c:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x610) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x618))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x5c0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x5c0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x5b0) = *(int32_t *)(lVar1 + 0x5f8);
        return;
      }
      *(int *)(lVar1 + 0x5b0) = (int)param_2;
      return;
    case 0x2d:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x370) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x378))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 800) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 800);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x310) = *(int32_t *)(lVar1 + 0x358);
        return;
      }
      *(int *)(lVar1 + 0x310) = (int)param_2;
      return;
    case 0x2e:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x4c0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x4c8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x470) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x470);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x460) = *(int32_t *)(lVar1 + 0x4a8);
        return;
      }
      *(int *)(lVar1 + 0x460) = (int)param_2;
      return;
    case 0x2f:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x530) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x538))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x4e0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x4e0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x4d0) = *(int32_t *)(lVar1 + 0x518);
        return;
      }
      *(int *)(lVar1 + 0x4d0) = (int)param_2;
      return;
    case 0x30:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x5a0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x5a8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x550) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x550);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x540) = *(int32_t *)(lVar1 + 0x588);
        return;
      }
      *(int *)(lVar1 + 0x540) = (int)param_2;
      return;
    case 0x31:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xc30) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xc38))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0xbe0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0xbe0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0xbd0) = *(int32_t *)(lVar1 + 0xc18);
        return;
      }
      *(int *)(lVar1 + 0xbd0) = (int)param_2;
      return;
    case 0x32:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x300) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x308))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x2b0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x2b0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x2a0) = *(int32_t *)(lVar1 + 0x2e8);
        return;
      }
      *(int *)(lVar1 + 0x2a0) = (int)param_2;
      return;
    case 0x33:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x8b0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x8b8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x860) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x860);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x850) = *(int32_t *)(lVar1 + 0x898);
        return;
      }
      *(int *)(lVar1 + 0x850) = (int)param_2;
      return;
    case 0x34:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x840) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x848))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x7f0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x7f0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x7e0) = *(int32_t *)(lVar1 + 0x828);
        return;
      }
      *(int *)(lVar1 + 0x7e0) = (int)param_2;
      return;
    case 0x35:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x680) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x688))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x630) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x630);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x620) = *(int32_t *)(lVar1 + 0x668);
        return;
      }
      *(int *)(lVar1 + 0x620) = (int)param_2;
      return;
    case 0x36:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x6f0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x6f8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x6a0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x6a0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x690) = *(int32_t *)(lVar1 + 0x6d8);
        return;
      }
      *(int *)(lVar1 + 0x690) = (int)param_2;
      return;
    case 0x37:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x990) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x998))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x940) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x940);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x930) = *(int32_t *)(lVar1 + 0x978);
        return;
      }
      *(int *)(lVar1 + 0x930) = (int)param_2;
      return;
    case 0x38:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 2000) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x7d8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x780) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x780);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x770) = *(int32_t *)(lVar1 + 0x7b8);
        return;
      }
      *(int *)(lVar1 + 0x770) = (int)param_2;
      return;
    case 0x39:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xae0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xae8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0xa90) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0xa90);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0xa80) = *(int32_t *)(lVar1 + 0xac8);
        return;
      }
      *(int *)(lVar1 + 0xa80) = (int)param_2;
      return;
    case 0x3a:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x920) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x928))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x8d0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x8d0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x8c0) = *(int32_t *)(lVar1 + 0x908);
        return;
      }
      *(int *)(lVar1 + 0x8c0) = (int)param_2;
      return;
    case 0x3b:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xa00) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xa08))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x9b0) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x9b0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x9a0) = *(int32_t *)(lVar1 + 0x9e8);
        return;
      }
      *(int *)(lVar1 + 0x9a0) = (int)param_2;
      return;
    case 0x3c:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xa70) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xa78))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0xa20) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0xa20);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0xa10) = *(int32_t *)(lVar1 + 0xa58);
        return;
      }
      *(int *)(lVar1 + 0xa10) = (int)param_2;
      return;
    case 0x3d:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x20c0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x20c8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x2070) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x2070);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x2060) = *(int32_t *)(lVar1 + 0x20a8);
        return;
      }
      *(float *)(lVar1 + 0x2060) = param_2;
      return;
    case 0x3e:
      if (*(int *)(render_system_data_state + 0xcb0) != 0) {
        if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xf40) != 0) &&
           (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xf48))(&stack0x00000010), cVar2 == '\0')) {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0xef0) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0xef0);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0xee0) = *(int32_t *)(lVar1 + 0xf28);
          return;
        }
        *(int *)(lVar1 + 0xee0) = (int)param_2;
        return;
      }
      break;
    case 0x3f:
      if (*(int *)(render_system_data_state + 0xd20) != 0) {
        if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0xfb0) != 0) &&
           (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0xfb8))(&stack0x00000010), cVar2 == '\0')) {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0xf60) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0xf60);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0xf50) = *(int32_t *)(lVar1 + 0xf98);
          return;
        }
        *(int *)(lVar1 + 0xf50) = (int)param_2;
        return;
      }
      break;
    case 0x40:
      if (*(int *)(render_system_data_state + 0xd90) != 0) {
        if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1020) != 0) &&
           (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1028))(&stack0x00000010), cVar2 == '\0')) {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0xfd0) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0xfd0);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0xfc0) = *(int32_t *)(lVar1 + 0x1008);
          return;
        }
        *(int *)(lVar1 + 0xfc0) = (int)param_2;
        return;
      }
      break;
    case 0x41:
      if (*(int *)(render_system_data_state + 0xe70) != 0) {
        if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1100) != 0) &&
           (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1108))(&stack0x00000010), cVar2 == '\0')) {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x10b0) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x10b0);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x10a0) = *(int32_t *)(lVar1 + 0x10e8);
          return;
        }
        *(int *)(lVar1 + 0x10a0) = (int)param_2;
        return;
      }
      break;
    case 0x42:
      if (*(int *)(render_system_data_state + 0xe00) != 0) {
        if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1090) != 0) &&
           (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1098))(&stack0x00000010), cVar2 == '\0')) {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1040) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1040);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x1030) = *(int32_t *)(lVar1 + 0x1078);
          return;
        }
        *(int *)(lVar1 + 0x1030) = (int)param_2;
        return;
      }
      break;
    case 0x43:
      afStackX_8[0] = param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x11e0) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x11e8))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1190) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1190);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x1180) = *(int32_t *)(lVar1 + 0x11c8);
          return;
        }
        param_2 = afStackX_8[0];
      }
      *(float *)(lVar1 + 0x1180) = param_2;
      return;
    case 0x44:
      afStackX_8[0] = param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1250) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1258))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1200) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1200);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x11f0) = *(int32_t *)(lVar1 + 0x1238);
          return;
        }
        param_2 = afStackX_8[0];
      }
      *(float *)(lVar1 + 0x11f0) = param_2;
      return;
    case 0x45:
      afStackX_8[0] = (float)(int)param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1b10) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1b18))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1ac0) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1ac0);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x1ab0) = *(int32_t *)(lVar1 + 0x1af8);
          return;
        }
      }
      *(float *)(lVar1 + 0x1ab0) = afStackX_8[0];
      return;
    case 0x46:
      afStackX_8[0] = param_2;
      if (*(int64_t *)(SYSTEM_STATE_MANAGER + 0x12c0) != 0) {
        cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x12c8))(afStackX_8);
        if (cVar2 == '\0') {
          if (system_debug_flag == '\0') {
            puVar7 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x1270) != (void *)0x0) {
              puVar7 = *(void **)(lVar1 + 0x1270);
            }
            FUN_180626f80(&unknown_var_544_ptr,puVar7);
          }
          *(int32_t *)(lVar1 + 0x1260) = *(int32_t *)(lVar1 + 0x12a8);
          return;
        }
        param_2 = afStackX_8[0];
      }
      *(float *)(lVar1 + 0x1260) = param_2;
      return;
    case 0x47:
      if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x21a0) != 0) &&
         (cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x21a8))(&stack0x00000010), cVar2 == '\0')) {
        if (system_debug_flag == '\0') {
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x2150) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x2150);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar7);
        }
        *(int32_t *)(lVar1 + 0x2140) = *(int32_t *)(lVar1 + 0x2188);
        return;
      }
      *(int *)(lVar1 + 0x2140) = (int)param_2;
      return;
    case 0x48:
      FUN_18010cdf0(SYSTEM_STATE_MANAGER,(int)param_2,param_3,param_4,
                    CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da),CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc));
    }
  }
  return;
}







