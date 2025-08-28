#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part503.c - 4 个函数

// 函数: void FUN_180535cb1(void)
void FUN_180535cb1(void)

{
  int32_t *puVar1;
  short sVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint64_t uVar8;
  int *piVar9;
  short *psVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int64_t unaff_RDI;
  uint uVar13;
  int64_t lVar14;
  int64_t lVar15;
  int iVar16;
  int64_t lVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t lVar20;
  float fVar21;
  int in_stack_00000030;
  char cStack0000000000000040;
  int32_t uVar22;
  
  cStack0000000000000040 = '\0';
  lVar12 = (int64_t)in_stack_00000030;
  iVar5 = 0;
  uVar22 = 0;
  if ((((-1 < in_stack_00000030) && (in_stack_00000030 < *(int *)(unaff_RDI + 0x52ed94))) &&
      (-1 < *(short *)(unaff_RDI + 0x52dda0 + lVar12 * 2))) ||
     ((system_status_flag != 1 && (system_status_flag != 4)))) {
    lVar20 = unaff_RDI + 0x30a0 + lVar12 * 0xa60;
    uVar18 = 0;
    iVar16 = *(int *)(unaff_RDI + 0x87b318);
    if (0 < iVar16) {
      do {
        if (*(int *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x87b340) + (uVar18 >> 4) * 8) + 8 +
                    (uint64_t)((uint)uVar18 & 0xf) * 0xbe0) != 0) break;
        uVar13 = (uint)uVar18 + 1;
        uVar18 = (uint64_t)uVar13;
      } while ((int)uVar13 < iVar16);
    }
    if ((int)uVar18 < iVar16) {
      do {
        lVar15 = (uint64_t)((uint)uVar18 & 0xf) * 0xbe0 +
                 *(int64_t *)(*(int64_t *)(unaff_RDI + 0x87b340) + (uVar18 >> 4) * 8);
        if (*(int *)(lVar15 + 0x2a0) == in_stack_00000030) {
          *(int32_t *)(lVar15 + 0x2a0) = 0xffffffff;
        }
        uVar13 = (uint)uVar18 + 1;
        uVar18 = (uint64_t)uVar13;
        iVar16 = *(int *)(unaff_RDI + 0x87b318);
        if (iVar16 <= (int)uVar13) break;
        do {
          if (*(int *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x87b340) + (uVar18 >> 4) * 8) + 8 +
                      (uint64_t)((uint)uVar18 & 0xf) * 0xbe0) != 0) break;
          uVar13 = (uint)uVar18 + 1;
          uVar18 = (uint64_t)uVar13;
        } while ((int)uVar13 < iVar16);
      } while ((int)uVar18 < iVar16);
    }
    if (-1 < *(int *)(lVar20 + 0x6a0)) {
      FUN_1804fc920((int64_t)
                    ((int)*(uint64_t *)(lVar20 + 0x6a0) +
                    (int)((uint64_t)*(uint64_t *)(lVar20 + 0x6a0) >> 0x20) *
                    *(int *)(unaff_RDI + 0x98d238)) * 9 + *(int64_t *)(unaff_RDI + 0x98d248));
    }
    (**(code **)(**(int64_t **)(unaff_RDI + 0x98d250) + 0x18))
              (*(int64_t **)(unaff_RDI + 0x98d250),lVar20);
    lVar15 = render_system_memory;
    if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
      iVar5 = _Mtx_lock(0x180c95528);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      cVar4 = SystemBufferProcessor(0x180c95578,0,&system_param1_ptr);
      if ((cVar4 != '\0') && (cVar4 = SystemBufferProcessor(0x180c95578,0xd,&memory_allocator_3472_ptr), cVar4 != '\0'))
      {
        SystemBufferProcessor(0x180c95578,in_stack_00000030,&memory_allocator_3424_ptr);
      }
      render_system_memory = render_system_memory & 0xffffffff00000000;
      iVar5 = (int)(render_system_memory - render_system_memory >> 3);
      if (0 < iVar5) {
        lVar20 = 0;
        lVar12 = render_system_memory;
        do {
          lVar15 = *(int64_t *)(lVar12 + lVar20 * 8);
          if ((lVar15 != 0) && (*(char *)(*(int64_t *)(lVar15 + 0x58f8) + 0x1c) != '\0')) {
            FUN_1805b59d0(lVar15,0x180c95578);
            lVar12 = render_system_memory;
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 < iVar5);
      }
      if (render_system_memory != 0) {
        FUN_180567f30(render_system_memory,0x180c95578);
      }
      render_system_memory = 0;
                    // WARNING: Subroutine does not return
      memset(render_system_memory,0,(int64_t)(render_system_memory >> 3));
    }
    if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
      iVar16 = 0;
      do {
        FUN_1805b32b0(&system_data_25a0,iVar16 + in_stack_00000030 * 0x10);
        iVar16 = iVar16 + 1;
      } while (iVar16 < 0x10);
      if (render_system_memory - render_system_memory >> 3 != 0) {
        lVar15 = 0;
        do {
          FUN_180506ae0(*(int64_t *)(lVar15 + render_system_memory) + 0x5940,in_stack_00000030);
          iVar5 = iVar5 + 1;
          lVar15 = lVar15 + 8;
        } while ((uint64_t)(int64_t)iVar5 < (uint64_t)(render_system_memory - render_system_memory >> 3));
      }
      if (render_system_memory != 0) {
        FUN_180506ae0(render_system_memory + 0x5f8,in_stack_00000030);
      }
    }
    else if ((system_status_flag == 1) || (system_status_flag == 4)) {
      fVar21 = (float)render_system_data_memory * 1e-05;
      if (system_status_flag == 1) {
        iVar5 = 0;
        lVar15 = render_system_memory + 0x4c488;
        do {
          func_0x0001805697b0(lVar15,iVar5 + in_stack_00000030 * 0x10);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x10);
      }
      else {
        uVar13 = in_stack_00000030 << 4;
        lVar14 = lVar12 * 0xe00;
        lVar17 = 0x10;
        do {
          lVar3 = *(int64_t *)(lVar15 + 0x648);
          if ((uint64_t)(int64_t)(int)uVar13 <
              (uint64_t)((*(int64_t *)(lVar15 + 0x650) - lVar3) / 0xe0)) {
            uVar7 = uVar13 & 0x8000000f;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
            }
            *(uint64_t *)(lVar3 + 0xd0 + lVar14) = render_system_memory;
            *(float *)(lVar3 + 0xd8 + lVar14) = fVar21;
            *(int8_t *)(lVar3 + 0xdc + lVar14) = 0;
            switch(uVar7) {
            case 0:
            case 9:
              func_0x0001805b2c90(lVar3 + 0x10 + lVar14);
              break;
            case 1:
              *(uint64_t *)(lVar3 + 0xa0 + lVar14) = 0xffffffffffffffff;
              *(int16_t *)(lVar3 + 200 + lVar14) = 0xff;
              *(uint64_t *)(lVar3 + 0xa8 + lVar14) = 0;
              *(uint64_t *)(lVar3 + 0xb0 + lVar14) = 0;
              *(uint64_t *)(lVar3 + 0xb8 + lVar14) = 0;
              *(uint64_t *)(lVar3 + 0xc0 + lVar14) = 0;
              *(int32_t *)(lVar3 + 0xcc + lVar14) = 0;
              break;
            case 2:
              puVar1 = (int32_t *)(lVar3 + lVar14);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              break;
            case 3:
            case 4:
            case 5:
            case 7:
            case 8:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
              *(int32_t *)(lVar3 + lVar14) = 0;
              break;
            case 6:
              *(int32_t *)(lVar3 + lVar14) = 1;
              break;
            case 0xf:
              *(int32_t *)(lVar3 + lVar14) = 0xffffffff;
            }
          }
          uVar13 = uVar13 + 1;
          lVar14 = lVar14 + 0xe0;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
    }
    lVar15 = render_system_data_memory;
    lVar14 = unaff_RDI + 0x30a0;
    if (cStack0000000000000040 == '\0') {
      iVar5 = *(int *)(lVar20 + 0x18);
      if ((iVar5 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x30))(iVar5);
      }
      (**(code **)(lVar15 + 0x228))(*(int32_t *)(unaff_RDI + 0x98d928),iVar5);
      uVar22 = 0;
      if ((iVar5 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))(iVar5);
      }
    }
    FUN_18051aff0(lVar20,1,unaff_RDI + 0x87a948);
    FUN_180507360(lVar20,0);
    *(int8_t *)(lVar20 + 0x1c) = 1;
    plVar11 = (int64_t *)(lVar12 * 0xa60 + lVar14);
    (**(code **)(*plVar11 + 0x68))(plVar11);
    *(int32_t *)(plVar11 + 2) = 0xffffffff;
    *(int *)(unaff_RDI + 0x52ed90) = *(int *)(unaff_RDI + 0x52ed90) + -1;
    iVar5 = in_stack_00000030 + -1;
    uVar18 = (uint64_t)iVar5;
    if (-1 < iVar5) {
      psVar10 = (short *)(lVar14 + (uVar18 + 0x295680) * 2);
      uVar8 = uVar18;
      uVar19 = uVar18;
      do {
        if (*psVar10 == in_stack_00000030) {
          sVar2 = *(short *)(unaff_RDI + 0x52dda0 + lVar12 * 2);
          sVar6 = sVar2 + -1;
          if ((int)sVar2 != *(int *)(unaff_RDI + 0x52ed94)) {
            sVar6 = sVar2;
          }
          *(short *)(unaff_RDI + 0x52dda0 + (int64_t)(int)uVar19 * 2) = sVar6;
          break;
        }
        uVar19 = (uint64_t)((int)uVar19 - 1);
        psVar10 = psVar10 + -1;
        uVar8 = uVar8 - 1;
      } while (-1 < (int64_t)uVar8);
    }
    *(int16_t *)(unaff_RDI + 0x52dda0 + lVar12 * 2) = 0xffff;
    if ((*(int *)(unaff_RDI + 0x52ed94) == in_stack_00000030 + 1) &&
       (*(int32_t *)(unaff_RDI + 0x52ed94) = 0, -1 < (int64_t)uVar18)) {
      piVar9 = (int *)(uVar18 * 0xa60 + 0x10 + lVar14);
      uVar8 = uVar18;
      iVar16 = iVar5;
      do {
        if (-1 < *piVar9) {
          *(int *)(unaff_RDI + 0x52ed94) = iVar16 + 1;
          break;
        }
        iVar16 = iVar16 + -1;
        piVar9 = piVar9 + -0x298;
        uVar8 = uVar8 - 1;
      } while (-1 < (int64_t)uVar8);
    }
    *(int32_t *)(lVar12 * 0x200 + 0x52edbc + unaff_RDI) = 0xffffffff;
    *(int *)(unaff_RDI + 0x62ed90) = *(int *)(unaff_RDI + 0x62ed90) + -1;
    iVar16 = iVar5;
    if (-1 < (int64_t)uVar18) {
      psVar10 = (short *)(unaff_RDI + 0x62dda0 + uVar18 * 2);
      uVar8 = uVar18;
      do {
        if (*psVar10 == in_stack_00000030) {
          sVar2 = *(short *)(unaff_RDI + 0x62dda0 + lVar12 * 2);
          sVar6 = sVar2 + -1;
          if ((int)sVar2 != *(int *)(unaff_RDI + 0x62ed94)) {
            sVar6 = sVar2;
          }
          *(short *)(unaff_RDI + 0x62dda0 + (int64_t)iVar16 * 2) = sVar6;
          break;
        }
        iVar16 = iVar16 + -1;
        psVar10 = psVar10 + -1;
        uVar8 = uVar8 - 1;
      } while (-1 < (int64_t)uVar8);
    }
    *(int16_t *)(unaff_RDI + 0x62dda0 + lVar12 * 2) = 0xffff;
    if ((*(int *)(unaff_RDI + 0x62ed94) == in_stack_00000030 + 1) &&
       (*(int32_t *)(unaff_RDI + 0x62ed94) = 0, -1 < (int64_t)uVar18)) {
      piVar9 = (int *)(unaff_RDI + 0x52edbc + uVar18 * 0x200);
      do {
        if (-1 < *piVar9) {
          *(int *)(unaff_RDI + 0x62ed94) = iVar5 + 1;
          break;
        }
        iVar5 = iVar5 + -1;
        piVar9 = piVar9 + -0x80;
        uVar18 = uVar18 - 1;
      } while (-1 < (int64_t)uVar18);
    }
    FUN_1804fc230(unaff_RDI + 0x62ed98,in_stack_00000030,iVar16,uVar18,uVar22);
    FUN_1804fc230(unaff_RDI + 0x74eb90,in_stack_00000030);
    *(int8_t *)(unaff_RDI + 0x87a940) = 1;
    *(int8_t *)(unaff_RDI + 0x87b728) = 1;
  }
  return;
}





// 函数: void FUN_180535cd0(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180535cd0(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  uint auStackX_8 [2];
  int aiStackX_20 [2];
  uint *puVar5;
  int32_t auStack_18 [4];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  cVar3 = SystemSynchronizationProcessor(param_3,aiStackX_20,&memory_allocator_3424_ptr);
  if ((cVar3 != '\0') && (cVar3 = SystemSynchronizationProcessor(param_3,auStack_18,&memory_allocator_3344_ptr), cVar3 != '\0'))
  {
    auStackX_8[0] = (uint)((char)auStackX_8[0] != '\0');
    cVar3 = SystemSynchronizationProcessor(param_3,auStackX_8,&system_param1_ptr);
    auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,auStackX_8[0] != 0);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_180535d4e;
    }
  }
  bVar2 = false;
LAB_180535d4e:
  puVar5 = auStackX_8;
  FUN_1804fe960();
  if ((((bVar2) && (-1 < aiStackX_20[0])) && (aiStackX_20[0] < *(int *)(lVar1 + 0x52ed94))) &&
     (-1 < *(short *)(lVar1 + 0x52dda0 + (int64_t)aiStackX_20[0] * 2))) {
    lVar4 = lVar1 + 0x30a0 + (int64_t)aiStackX_20[0] * 0xa60;
    Render_SceneProcessor(*(uint64_t *)(lVar4 + 0x6d8));
    FUN_1804ec4e0(lVar1,lVar4,auStack_18[0],lVar1 + 0x87a948,(char)auStackX_8[0],puVar5);
    if ((*(int *)(lVar4 + 0x720) != 3) &&
       (*(int32_t *)(lVar4 + 0x720) = 3, *(char *)(lVar4 + 0x984) != '\0')) {
      *(int32_t *)(*(int64_t *)(lVar4 + 0x738) + 0x1a0) = 3;
    }
    *(uint64_t *)(lVar4 + 0x710) =
         *(uint64_t *)(&system_error_code + (int64_t)*(int *)(lVar4 + 0x718) * 8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180535e30(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t *plStackX_8;
  
  lVar8 = *param_1;
  if (lVar8 != 0) {
    cVar4 = SystemSynchronizationProcessor(param_3,&plStackX_8,&memory_allocator_3344_ptr);
    param_3 = FUN_1804fe350(&processed_var_4128_ptr,cVar4,&processed_var_4184_ptr,&plStackX_8);
    if (cVar4 != '\0') {
      uVar11 = (uint64_t)(int)plStackX_8;
      lVar9 = 0;
      if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
        iVar5 = _Mtx_lock(0x180c95528);
        if (iVar5 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar5);
        }
        cVar4 = SystemBufferProcessor(0x180c95578,0,&system_param1_ptr);
        if ((cVar4 != '\0') &&
           (cVar4 = SystemBufferProcessor(0x180c95578,0xf,&memory_allocator_3472_ptr), cVar4 != '\0')) {
          SystemBufferProcessor(0x180c95578,(uint64_t)plStackX_8 & 0xffffffff,&memory_allocator_3344_ptr);
        }
        render_system_memory = render_system_memory & 0xffffffff00000000;
        iVar5 = (int)(render_system_memory - render_system_memory >> 3);
        lVar8 = render_system_memory;
        if (0 < iVar5) {
          do {
            lVar7 = *(int64_t *)(lVar8 + lVar9 * 8);
            if ((lVar7 != 0) && (*(char *)(*(int64_t *)(lVar7 + 0x58f8) + 0x1c) != '\0')) {
              FUN_1805b59d0(lVar7,0x180c95578);
              lVar8 = render_system_memory;
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar5);
        }
        if (render_system_memory != 0) {
          FUN_180567f30(render_system_memory,0x180c95578);
        }
        render_system_memory = 0;
                    // WARNING: Subroutine does not return
        memset(render_system_memory,0,(int64_t)(render_system_memory >> 3));
      }
      uVar12 = *(uint64_t *)(lVar8 + 0x87bd10);
      lVar9 = *(int64_t *)(lVar8 + 0x87bd08);
      if (uVar11 < (uint64_t)((int64_t)(uVar12 - lVar9) / 0x18)) {
        plVar2 = *(int64_t **)(lVar9 + uVar11 * 0x18);
        if ((plVar2 != (int64_t *)0x0) && (plVar2[4] == *(int64_t *)(lVar8 + 0x18))) {
          FUN_1802e8db0(plVar2);
          uVar6 = FUN_1804fb7c0(lVar8 + 0x87bd28);
          lVar9 = *(int64_t *)(*(int64_t *)(lVar8 + 0x87bd50) + (uint64_t)(uVar6 >> 4) * 8);
          plStackX_8 = plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
          FUN_1805ae000((uint64_t)(uVar6 & 0xf) * 0x40 + lVar9,lVar8,&plStackX_8,0x3f000000,1);
          FUN_1804cb300(*(int64_t *)(*(int64_t *)(lVar8 + 0x18) + 0x3c0) + 0x2d30,
                        *(int32_t *)(*(int64_t *)(lVar8 + 0x87bd08) + 0x10 + uVar11 * 0x18));
          lVar9 = *(int64_t *)(lVar8 + 0x87bd08);
          uVar12 = *(uint64_t *)(lVar8 + 0x87bd10);
        }
        uVar1 = lVar9 + (uVar11 * 3 + 3) * 8;
        if (uVar1 < uVar12) {
          lVar7 = uVar12 - uVar1;
          lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
          lVar7 = (lVar7 >> 2) - (lVar7 >> 0x3f);
          if (0 < lVar7) {
            puVar10 = (uint64_t *)(lVar9 + (uVar11 * 3 + 4) * 8);
            do {
              uVar3 = puVar10[-1];
              puVar10[-1] = 0;
              plStackX_8 = (int64_t *)puVar10[-4];
              puVar10[-4] = uVar3;
              if (plStackX_8 != (int64_t *)0x0) {
                (**(code **)(*plStackX_8 + 0x38))();
              }
              uVar3 = *puVar10;
              *puVar10 = 0;
              plVar2 = (int64_t *)puVar10[-3];
              puVar10[-3] = uVar3;
              if (plVar2 != (int64_t *)0x0) {
                (**(code **)(*plVar2 + 0x38))();
              }
              *(int32_t *)(puVar10 + -2) = *(int32_t *)(puVar10 + 1);
              *(int32_t *)((int64_t)puVar10 + -0xc) = *(int32_t *)((int64_t)puVar10 + 0xc);
              lVar7 = lVar7 + -1;
              puVar10 = puVar10 + 3;
            } while (0 < lVar7);
            uVar12 = *(uint64_t *)(lVar8 + 0x87bd10);
          }
        }
        plVar2 = (int64_t *)(uVar12 - 0x18);
        *(int64_t **)(lVar8 + 0x87bd10) = plVar2;
        plStackX_8 = plVar2;
        if (*(int64_t **)(uVar12 - 0x10) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(uVar12 - 0x10) + 0x38))();
        }
        if ((int64_t *)*plVar2 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar2 + 0x38))();
        }
        return 1;
      }
      return 0;
    }
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180535e48(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  int64_t unaff_RDI;
  int iStack0000000000000030;
  
  cVar4 = SystemSynchronizationProcessor();
  uVar7 = FUN_1804fe350(&processed_var_4128_ptr,cVar4,&processed_var_4184_ptr,&stack0x00000030);
  if (cVar4 == '\0') {
    return uVar7;
  }
  uVar9 = (uint64_t)_iStack0000000000000030 & 0xffffffff;
  uVar12 = (uint64_t)iStack0000000000000030;
  lVar10 = 0;
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    iVar5 = _Mtx_lock(0x180c95528);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    cVar4 = SystemBufferProcessor(0x180c95578,0,&system_param1_ptr);
    if ((cVar4 != '\0') && (cVar4 = SystemBufferProcessor(0x180c95578,0xf,&memory_allocator_3472_ptr), cVar4 != '\0')) {
      SystemBufferProcessor(0x180c95578,uVar9,&memory_allocator_3344_ptr);
    }
    render_system_memory = render_system_memory & 0xffffffff00000000;
    iVar5 = (int)(render_system_memory - render_system_memory >> 3);
    lVar8 = render_system_memory;
    if (0 < iVar5) {
      do {
        lVar2 = *(int64_t *)(lVar8 + lVar10 * 8);
        if ((lVar2 != 0) && (*(char *)(*(int64_t *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
          FUN_1805b59d0(lVar2,0x180c95578);
          lVar8 = render_system_memory;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar5);
    }
    if (render_system_memory != 0) {
      FUN_180567f30(render_system_memory,0x180c95578);
    }
    render_system_memory = 0;
                    // WARNING: Subroutine does not return
    memset(render_system_memory,0,(int64_t)(render_system_memory >> 3));
  }
  uVar9 = *(uint64_t *)(unaff_RDI + 0x87bd10);
  lVar10 = *(int64_t *)(unaff_RDI + 0x87bd08);
  if (uVar12 < (uint64_t)((int64_t)(uVar9 - lVar10) / 0x18)) {
    plVar3 = *(int64_t **)(lVar10 + uVar12 * 0x18);
    if ((plVar3 != (int64_t *)0x0) && (plVar3[4] == *(int64_t *)(unaff_RDI + 0x18))) {
      FUN_1802e8db0(plVar3);
      uVar6 = FUN_1804fb7c0(unaff_RDI + 0x87bd28);
      lVar10 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x87bd50) + (uint64_t)(uVar6 >> 4) * 8);
      _iStack0000000000000030 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
      FUN_1805ae000((uint64_t)(uVar6 & 0xf) * 0x40 + lVar10);
      FUN_1804cb300(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x18) + 0x3c0) + 0x2d30,
                    *(int32_t *)(*(int64_t *)(unaff_RDI + 0x87bd08) + 0x10 + uVar12 * 0x18));
      lVar10 = *(int64_t *)(unaff_RDI + 0x87bd08);
      uVar9 = *(uint64_t *)(unaff_RDI + 0x87bd10);
    }
    uVar1 = lVar10 + (uVar12 * 3 + 3) * 8;
    if (uVar1 < uVar9) {
      lVar8 = uVar9 - uVar1;
      lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
      lVar8 = (lVar8 >> 2) - (lVar8 >> 0x3f);
      if (0 < lVar8) {
        puVar11 = (uint64_t *)(lVar10 + (uVar12 * 3 + 4) * 8);
        do {
          uVar7 = puVar11[-1];
          puVar11[-1] = 0;
          _iStack0000000000000030 = (int64_t *)puVar11[-4];
          puVar11[-4] = uVar7;
          if (_iStack0000000000000030 != (int64_t *)0x0) {
            (**(code **)(*_iStack0000000000000030 + 0x38))();
          }
          uVar7 = *puVar11;
          *puVar11 = 0;
          plVar3 = (int64_t *)puVar11[-3];
          puVar11[-3] = uVar7;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
          *(int32_t *)(puVar11 + -2) = *(int32_t *)(puVar11 + 1);
          *(int32_t *)((int64_t)puVar11 + -0xc) = *(int32_t *)((int64_t)puVar11 + 0xc);
          lVar8 = lVar8 + -1;
          puVar11 = puVar11 + 3;
        } while (0 < lVar8);
        uVar9 = *(uint64_t *)(unaff_RDI + 0x87bd10);
      }
    }
    plVar3 = (int64_t *)(uVar9 - 0x18);
    *(int64_t **)(unaff_RDI + 0x87bd10) = plVar3;
    _iStack0000000000000030 = plVar3;
    if (*(int64_t **)(uVar9 - 0x10) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(uVar9 - 0x10) + 0x38))();
    }
    if ((int64_t *)*plVar3 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar3 + 0x38))();
    }
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180535e81(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  int64_t unaff_RDI;
  uint64_t uVar12;
  int in_stack_00000030;
  
  uVar11 = (uint64_t)in_stack_00000030;
  lVar9 = 0;
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    iVar6 = _Mtx_lock(0x180c95528);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    cVar5 = SystemBufferProcessor(0x180c95578,0,&system_param1_ptr);
    if ((cVar5 != '\0') && (cVar5 = SystemBufferProcessor(0x180c95578,0xf,&memory_allocator_3472_ptr), cVar5 != '\0')) {
      SystemBufferProcessor(0x180c95578,in_stack_00000030,&memory_allocator_3344_ptr);
    }
    render_system_memory = render_system_memory & 0xffffffff00000000;
    iVar6 = (int)(render_system_memory - render_system_memory >> 3);
    lVar8 = render_system_memory;
    if (0 < iVar6) {
      do {
        lVar2 = *(int64_t *)(lVar8 + lVar9 * 8);
        if ((lVar2 != 0) && (*(char *)(*(int64_t *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
          FUN_1805b59d0(lVar2,0x180c95578);
          lVar8 = render_system_memory;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar6);
    }
    if (render_system_memory != 0) {
      FUN_180567f30(render_system_memory,0x180c95578);
    }
    render_system_memory = 0;
                    // WARNING: Subroutine does not return
    memset(render_system_memory,0,(int64_t)(render_system_memory >> 3));
  }
  uVar12 = *(uint64_t *)(unaff_RDI + 0x87bd10);
  lVar9 = *(int64_t *)(unaff_RDI + 0x87bd08);
  if (uVar11 < (uint64_t)((int64_t)(uVar12 - lVar9) / 0x18)) {
    plVar3 = *(int64_t **)(lVar9 + uVar11 * 0x18);
    if ((plVar3 != (int64_t *)0x0) && (plVar3[4] == *(int64_t *)(unaff_RDI + 0x18))) {
      FUN_1802e8db0(plVar3);
      uVar7 = FUN_1804fb7c0(unaff_RDI + 0x87bd28);
      lVar9 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x87bd50) + (uint64_t)(uVar7 >> 4) * 8);
      (**(code **)(*plVar3 + 0x28))(plVar3);
      FUN_1805ae000((uint64_t)(uVar7 & 0xf) * 0x40 + lVar9);
      FUN_1804cb300(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x18) + 0x3c0) + 0x2d30,
                    *(int32_t *)(*(int64_t *)(unaff_RDI + 0x87bd08) + 0x10 + uVar11 * 0x18));
      lVar9 = *(int64_t *)(unaff_RDI + 0x87bd08);
      uVar12 = *(uint64_t *)(unaff_RDI + 0x87bd10);
    }
    uVar1 = lVar9 + (uVar11 * 3 + 3) * 8;
    if (uVar1 < uVar12) {
      lVar8 = uVar12 - uVar1;
      lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
      lVar8 = (lVar8 >> 2) - (lVar8 >> 0x3f);
      if (0 < lVar8) {
        puVar10 = (uint64_t *)(lVar9 + (uVar11 * 3 + 4) * 8);
        do {
          uVar4 = puVar10[-1];
          puVar10[-1] = 0;
          plVar3 = (int64_t *)puVar10[-4];
          puVar10[-4] = uVar4;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
          uVar4 = *puVar10;
          *puVar10 = 0;
          plVar3 = (int64_t *)puVar10[-3];
          puVar10[-3] = uVar4;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
          *(int32_t *)(puVar10 + -2) = *(int32_t *)(puVar10 + 1);
          *(int32_t *)((int64_t)puVar10 + -0xc) = *(int32_t *)((int64_t)puVar10 + 0xc);
          lVar8 = lVar8 + -1;
          puVar10 = puVar10 + 3;
        } while (0 < lVar8);
        uVar12 = *(uint64_t *)(unaff_RDI + 0x87bd10);
      }
    }
    *(int64_t **)(unaff_RDI + 0x87bd10) = (int64_t *)(uVar12 - 0x18);
    if (*(int64_t **)(uVar12 - 0x10) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(uVar12 - 0x10) + 0x38))();
    }
    plVar3 = *(int64_t **)(uVar12 - 0x18);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    return 1;
  }
  return 0;
}





// 函数: void FUN_180535ea0(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180535ea0(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  char cVar2;
  int32_t auStackX_8 [2];
  int8_t auStack_98 [16];
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    cVar2 = SystemSynchronizationProcessor(param_3,auStackX_8,&system_data_bca0);
    if (cVar2 != '\0') {
      cVar2 = FUN_180646700(param_3,&uStack_88,&memory_allocator_3312_ptr);
      if (cVar2 != '\0') {
        cVar2 = FUN_180646700(param_3,&uStack_84,&memory_allocator_3312_ptr);
        if (cVar2 != '\0') {
          cVar2 = FUN_180646700(param_3,&uStack_80,&memory_allocator_3328_ptr);
          if (cVar2 != '\0') {
            cVar2 = FUN_1805aec80(param_3,auStack_98);
            if (cVar2 != '\0') {
              FUN_18063b5f0(&uStack_78,auStack_98);
              uStack_48 = uStack_78;
              uStack_40 = uStack_70;
              uStack_38 = uStack_68;
              uStack_30 = uStack_60;
              uStack_28 = uStack_58;
              uStack_24 = uStack_54;
              uStack_20 = uStack_50;
              uStack_1c = uStack_4c;
              uStack_18 = uStack_88;
              uStack_14 = uStack_84;
              uStack_10 = uStack_80;
              uStack_c = uStack_7c;
              FUN_1804ebb80(lVar1,auStackX_8[0],&uStack_48,0);
            }
          }
        }
      }
    }
  }
  return;
}





// 函数: void FUN_180535fb0(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180535fb0(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  int aiStackX_8 [2];
  int aiStackX_20 [2];
  int32_t auStack_a8 [4];
  int8_t auStack_98 [16];
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    cVar3 = SystemSynchronizationProcessor(param_3,auStack_a8,&system_data_bca0);
    if (cVar3 != '\0') {
      cVar3 = FUN_180646700(param_3,&uStack_88,&memory_allocator_3360_ptr);
      if (cVar3 != '\0') {
        cVar3 = FUN_180646700(param_3,&uStack_84,&memory_allocator_3360_ptr);
        if (cVar3 != '\0') {
          cVar3 = FUN_180646700(param_3,&uStack_80,&memory_allocator_3376_ptr);
          if (cVar3 != '\0') {
            cVar3 = FUN_1805aec80(param_3,auStack_98);
            if (cVar3 != '\0') {
              cVar3 = SystemSynchronizationProcessor(param_3,aiStackX_20,&memory_allocator_3424_ptr);
              if (cVar3 != '\0') {
                aiStackX_8[0] = (int)(char)aiStackX_8[0];
                cVar3 = SystemSynchronizationProcessor(param_3,aiStackX_8,&memory_allocator_3248_ptr);
                if (cVar3 != '\0') {
                  if (((-1 < aiStackX_20[0]) && (aiStackX_20[0] < *(int *)(lVar1 + 0x52ed94))) &&
                     (-1 < *(short *)(lVar1 + 0x52dda0 + (int64_t)aiStackX_20[0] * 2))) {
                    lVar4 = (int64_t)aiStackX_20[0] * 0xa60;
                    lVar2 = *(int64_t *)(lVar4 + 0x3778 + lVar1);
                    if (((lVar2 != 0) && (*(char *)(lVar2 + 0x8be) != '\0')) &&
                       ((char)aiStackX_8[0] <
                        *(char *)(*(int64_t *)(lVar4 + 0x36f8 + lVar1) + 0x20))) {
                      FUN_18063b5f0(&uStack_78,auStack_98);
                      uStack_48 = uStack_78;
                      uStack_40 = uStack_70;
                      uStack_38 = uStack_68;
                      uStack_30 = uStack_60;
                      uStack_28 = uStack_58;
                      uStack_24 = uStack_54;
                      uStack_20 = uStack_50;
                      uStack_1c = uStack_4c;
                      uStack_18 = uStack_88;
                      uStack_14 = uStack_84;
                      uStack_10 = uStack_80;
                      uStack_c = uStack_7c;
                      FUN_1804ebef0(lVar1,auStack_a8[0],&uStack_48);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



