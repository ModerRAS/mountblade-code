#define SystemInitializer FUN_1808fcb90  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part168.c - 10 个函数

// 函数: void FUN_180151660(int64_t param_1)
void FUN_180151660(int64_t param_1)

{
  int *piVar1;
  byte bVar2;
  int64_t *plVar3;
  code *pcVar4;
  int64_t *plVar5;
  uint uVar6;
  int iVar7;
  int8_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int32_t *puVar13;
  int64_t lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  char cVar20;
  int32_t extraout_XMM0_Da;
  double dVar21;
  double dVar22;
  int8_t auStack_238 [32];
  uint64_t uStack_218;
  int32_t **ppuStack_210;
  int64_t *plStack_208;
  int64_t *plStack_200;
  int32_t uStack_1f8;
  int64_t *plStack_1e8;
  int64_t *plStack_1e0;
  int64_t lStack_1d8;
  int32_t *puStack_1d0;
  int iStack_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int64_t *plStack_1b0;
  int64_t *plStack_1a8;
  int32_t uStack_198;
  int32_t uStack_194;
  int32_t uStack_190;
  int32_t uStack_18c;
  uint64_t uStack_188;
  int32_t uStack_180;
  uint64_t uStack_178;
  int64_t lStack_170;
  int32_t *apuStack_168 [2];
  int32_t *apuStack_158 [2];
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  uint64_t uStack_118;
  int8_t auStack_108 [24];
  int64_t lStack_f0;
  int8_t auStack_d8 [24];
  int64_t lStack_c0;
  int64_t lStack_a8;
  uint64_t uStack_a0;
  int16_t uStack_98;
  int8_t uStack_96;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  uint64_t uStack_7c;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  int32_t uStack_4c;
  int16_t uStack_48;
  int32_t uStack_46;
  int8_t uStack_42;
  uint64_t uStack_38;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_238;
  uVar6 = *(uint *)(param_1 + 0x98);
  if (0x2d < uVar6) {
LAB_180152731:
    SystemDataInitializer(&unknown_var_6264_ptr);
    goto code_r0x00018015273d;
  }
  lVar11 = (uint64_t)*(uint *)(&unknown_var_7364_ptr + (int64_t)(int)uVar6 * 4) + 0x180000000;
  switch(uVar6) {
  case 0:
    cVar20 = FUN_1801c9940(system_global_data_ptr);
    if (cVar20 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180062300(system_message_context,&unknown_var_6208_ptr);
    }
    break;
  case 1:
    FUN_1800aa220(system_message_buffer,*(uint64_t *)(param_1 + 0xa0),*(uint64_t *)(param_1 + 0xa8));
    break;
  case 2:
    ppuStack_210 = *(int32_t ***)(param_1 + 0xc0);
    uStack_218 = CONCAT44(uStack_218._4_4_,*(int32_t *)(param_1 + 0xb0));
    FUN_18029e630(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0xa0),
                  *(int32_t *)(param_1 + 0xa8),*(int32_t *)(param_1 + 0xac));
    (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x38))();
    break;
  case 3:
    plStack_1e0 = *(int64_t **)(system_message_buffer + 0x1cd8);
    plStack_1e8 = *(int64_t **)(param_1 + 0xc0);
    iVar7 = *(int *)(param_1 + 0xb0);
    iVar18 = *(int *)(param_1 + 0xac);
    iVar17 = *(int *)(param_1 + 0xa8);
    lVar11 = *(int64_t *)(param_1 + 0xa0);
    bVar2 = *(byte *)(lVar11 + 0x335);
    uVar6 = *(uint *)(lVar11 + 0x35c);
    uVar19 = 1;
    if (1 < *(ushort *)(lVar11 + 0x32e)) {
      uVar19 = (uint)*(ushort *)(lVar11 + 0x32e);
    }
    lVar11 = FUN_18023a940();
    lStack_1d8 = *(int64_t *)(lVar11 + 8);
    uVar16 = (uint)bVar2;
    if ((int)uVar6 < (int)(uint)bVar2) {
      uVar16 = uVar6;
    }
    iVar17 = uVar16 * iVar18 + iVar17;
    ppuStack_210 = &puStack_1d0;
    uStack_218 = uStack_218 & 0xffffffff00000000;
    (**(code **)(*(int64_t *)plStack_1e0[0x1080] + 0x70))
              ((int64_t *)plStack_1e0[0x1080],lStack_1d8,iVar17,4);
    if (iStack_1c8 == iVar7) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_1d0,plStack_1e8[2],(int64_t)(int)(uVar19 * iVar7));
    }
    if (uVar19 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_1d0,plStack_1e8[2],(int64_t)iVar7);
    }
    (**(code **)(*(int64_t *)plStack_1e0[0x1080] + 0x78))
              ((int64_t *)plStack_1e0[0x1080],lStack_1d8,iVar17);
    (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x38))();
    break;
  case 4:
    uStack_218 = *(uint64_t *)(param_1 + 0xc0);
    FUN_18029e6e0(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0xa0),
                  *(int32_t *)(param_1 + 0xa8),*(int32_t *)(param_1 + 0xac));
    (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x38))();
    break;
  case 5:
    uStack_1f8 = *(int32_t *)(param_1 + 0xb8);
    plStack_200 = (int64_t *)CONCAT44(plStack_200._4_4_,*(int32_t *)(param_1 + 0xb0));
    plStack_208 = (int64_t *)CONCAT44(plStack_208._4_4_,*(int32_t *)(param_1 + 0xb4));
    ppuStack_210 = *(int32_t ***)(param_1 + 0xa8);
    uStack_218 = CONCAT44(uStack_218._4_4_,*(int32_t *)(param_1 + 0xc4));
    FUN_18029e450(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0xa0),
                  *(int32_t *)(param_1 + 0xc0),*(int32_t *)(param_1 + 0xbc));
    break;
  case 6:
    FUN_18029e500(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0xa0),
                  *(uint64_t *)(param_1 + 0xa8));
    (**(code **)(**(int64_t **)(param_1 + 0xa0) + 0x38))();
    (**(code **)(**(int64_t **)(param_1 + 0xa8) + 0x38))();
    break;
  case 7:
    ppuStack_210 = (int32_t **)CONCAT44(ppuStack_210._4_4_,*(int32_t *)(param_1 + 0xb8));
    uStack_218 = CONCAT44(uStack_218._4_4_,*(int32_t *)(param_1 + 0xb4));
    FUN_18029e570(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0xa0),
                  *(uint64_t *)(param_1 + 0xa8),*(int32_t *)(param_1 + 0xb0));
    (**(code **)(**(int64_t **)(param_1 + 0xa0) + 0x38))();
    (**(code **)(**(int64_t **)(param_1 + 0xa8) + 0x38))();
    break;
  case 8:
    ppuStack_210 = (int32_t **)CONCAT71(ppuStack_210._1_7_,*(int *)(param_1 + 0xb0) != 0);
    uStack_218 = CONCAT44(uStack_218._4_4_,*(int32_t *)(param_1 + 0xac));
    FUN_18029ea30(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0xa0),
                  *(int32_t *)(param_1 + 0xa8),
                  *(uint64_t *)(*(int64_t *)(param_1 + 0xc0) + 0x10));
    (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x38))();
    break;
  case 9:
    FUN_18029ead0(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0xa0),
                  *(uint64_t *)(*(int64_t *)(param_1 + 0xa8) + 0x10),
                  *(int32_t *)(param_1 + 0xb0));
    (**(code **)(**(int64_t **)(param_1 + 0xa8) + 0x38))();
    break;
  case 10:
    FUN_18029ead0(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0xa0),
                  *(uint64_t *)(param_1 + 0xa8),*(int32_t *)(param_1 + 0xb0));
    break;
  case 0xb:
    lVar11 = *(int64_t *)(param_1 + 0xa0);
    lVar14 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    plVar5 = *(int64_t **)(lVar14 + 0x8400);
    ppuStack_210 = apuStack_158;
    uStack_218 = (uint64_t)uStack_218._4_4_ << 0x20;
    iVar7 = (**(code **)(*plVar5 + 0x70))(plVar5,*(uint64_t *)(lVar11 + 0x10),0,4);
    if (iVar7 < 0) {
      FUN_180220810(iVar7,&unknown_var_1768_ptr);
    }
    iVar7 = *(int *)(param_1 + 0xb8);
    if (0 < iVar7) {
      iVar18 = (int)*(uint64_t *)(param_1 + 0xb0);
      if (iVar18 < iVar7) {
        iVar7 = iVar18;
      }
                    // WARNING: Subroutine does not return
      memcpy(apuStack_158[0],**(uint64_t **)(param_1 + 0xa8),(int64_t)iVar7);
    }
    plVar5 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar5 + 0x78);
    *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar4)(plVar5,*(uint64_t *)(lVar11 + 0x10),0);
    break;
  case 0xc:
    lVar11 = *(int64_t *)(param_1 + 0xa0);
    lVar14 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    plVar5 = *(int64_t **)(lVar14 + 0x8400);
    ppuStack_210 = apuStack_168;
    lVar14 = 0;
    uStack_218 = (uint64_t)uStack_218._4_4_ << 0x20;
    iVar7 = (**(code **)(*plVar5 + 0x70))(plVar5,*(uint64_t *)(lVar11 + 0x10),0,4);
    if (iVar7 < 0) {
      FUN_180220810(iVar7,&unknown_var_1768_ptr);
    }
    uVar12 = *(uint64_t *)(param_1 + 0xb8) >> 6;
    iVar7 = (int)(*(uint64_t *)(param_1 + 0xb0) >> 6);
    uVar6 = (uint)uVar12;
    while (0 < (int)uVar6) {
      puVar13 = *(int32_t **)(lVar14 + *(int64_t *)(param_1 + 0xa8));
      iVar17 = (int)uVar12;
      iVar18 = iVar17;
      if (iVar7 < iVar17) {
        iVar18 = iVar7;
      }
      iVar15 = 0;
      if (3 < iVar18) {
        uVar6 = (iVar18 - 4U >> 2) + 1;
        uVar12 = (uint64_t)uVar6;
        iVar15 = uVar6 * 4;
        do {
          *apuStack_168[0] = *puVar13;
          apuStack_168[0][1] = puVar13[1];
          apuStack_168[0][2] = puVar13[2];
          apuStack_168[0][3] = puVar13[0xc];
          apuStack_168[0][4] = puVar13[4];
          apuStack_168[0][5] = puVar13[5];
          apuStack_168[0][6] = puVar13[6];
          apuStack_168[0][7] = puVar13[0xd];
          apuStack_168[0][8] = puVar13[8];
          apuStack_168[0][9] = puVar13[9];
          apuStack_168[0][10] = puVar13[10];
          apuStack_168[0][0xb] = puVar13[0xe];
          apuStack_168[0][0xc] = puVar13[0x10];
          apuStack_168[0][0xd] = puVar13[0x11];
          apuStack_168[0][0xe] = puVar13[0x12];
          apuStack_168[0][0xf] = puVar13[0x1c];
          apuStack_168[0][0x10] = puVar13[0x14];
          apuStack_168[0][0x11] = puVar13[0x15];
          apuStack_168[0][0x12] = puVar13[0x16];
          apuStack_168[0][0x13] = puVar13[0x1d];
          apuStack_168[0][0x14] = puVar13[0x18];
          apuStack_168[0][0x15] = puVar13[0x19];
          apuStack_168[0][0x16] = puVar13[0x1a];
          apuStack_168[0][0x17] = puVar13[0x1e];
          apuStack_168[0][0x18] = puVar13[0x20];
          apuStack_168[0][0x19] = puVar13[0x21];
          apuStack_168[0][0x1a] = puVar13[0x22];
          apuStack_168[0][0x1b] = puVar13[0x2c];
          apuStack_168[0][0x1c] = puVar13[0x24];
          apuStack_168[0][0x1d] = puVar13[0x25];
          apuStack_168[0][0x1e] = puVar13[0x26];
          apuStack_168[0][0x1f] = puVar13[0x2d];
          apuStack_168[0][0x20] = puVar13[0x28];
          apuStack_168[0][0x21] = puVar13[0x29];
          apuStack_168[0][0x22] = puVar13[0x2a];
          apuStack_168[0][0x23] = puVar13[0x2e];
          apuStack_168[0][0x24] = puVar13[0x30];
          apuStack_168[0][0x25] = puVar13[0x31];
          apuStack_168[0][0x26] = puVar13[0x32];
          apuStack_168[0][0x27] = puVar13[0x3c];
          apuStack_168[0][0x28] = puVar13[0x34];
          apuStack_168[0][0x29] = puVar13[0x35];
          apuStack_168[0][0x2a] = puVar13[0x36];
          apuStack_168[0][0x2b] = puVar13[0x3d];
          apuStack_168[0][0x2c] = puVar13[0x38];
          apuStack_168[0][0x2d] = puVar13[0x39];
          apuStack_168[0][0x2e] = puVar13[0x3a];
          apuStack_168[0][0x2f] = puVar13[0x3e];
          puVar13 = puVar13 + 0x40;
          apuStack_168[0] = apuStack_168[0] + 0x30;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (iVar15 < iVar18) {
        puVar13 = puVar13 + 2;
        uVar12 = (uint64_t)(uint)(iVar18 - iVar15);
        do {
          *apuStack_168[0] = puVar13[-2];
          apuStack_168[0][1] = puVar13[-1];
          apuStack_168[0][2] = *puVar13;
          apuStack_168[0][3] = puVar13[10];
          apuStack_168[0][4] = puVar13[2];
          apuStack_168[0][5] = puVar13[3];
          apuStack_168[0][6] = puVar13[4];
          apuStack_168[0][7] = puVar13[0xb];
          apuStack_168[0][8] = puVar13[6];
          apuStack_168[0][9] = puVar13[7];
          apuStack_168[0][10] = puVar13[8];
          apuStack_168[0][0xb] = puVar13[0xc];
          puVar13 = puVar13 + 0x10;
          apuStack_168[0] = apuStack_168[0] + 0xc;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      uVar6 = iVar17 - iVar7;
      uVar12 = (uint64_t)uVar6;
      lVar14 = lVar14 + 8;
    }
    plVar5 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar5 + 0x78);
    *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar4)(plVar5,*(uint64_t *)(lVar11 + 0x10),0);
    break;
  case 0xd:
  case 0x1a:
    goto LAB_180152731;
  default:
    if (*(int64_t **)(param_1 + 0xa0) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(param_1 + 0xa0) + 0x10))();
    }
    break;
  case 0xf:
    if (*(int64_t *)(param_1 + 0xa0) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    break;
  case 0x10:
    uVar10 = *(uint64_t *)(param_1 + 0xa0);
    lVar11 = VirtualQuery(uVar10,auStack_108,0x30);
    lStack_c0 = lStack_f0;
    goto code_r0x000180151fd7;
  case 0x11:
    uVar10 = *(uint64_t *)(param_1 + 0xa0);
    lVar11 = VirtualQuery(uVar10,auStack_d8,0x30);
code_r0x000180151fd7:
    lVar14 = lStack_c0;
    if (lVar11 == 0) {
      lVar14 = 0;
    }
    VirtualFree(uVar10,0,0x8000);
    LOCK();
    lRam0000000180c961a8 = lRam0000000180c961a8 - lVar14;
    UNLOCK();
    break;
  case 0x14:
    FUN_180152870(*(uint64_t *)(param_1 + 0xa0));
    break;
  case 0x15:
    ppuStack_210 = *(int32_t ***)(param_1 + 200);
    uStack_218 = *(uint64_t *)(param_1 + 0xb8);
    FUN_18029eb90(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0xa0),
                  *(int32_t *)(param_1 + 0xac),*(int32_t *)(param_1 + 0xa8));
    break;
  case 0x16:
    plVar5 = *(int64_t **)(param_1 + 0xa0);
    plVar3 = *(int64_t **)(param_1 + 0xb0);
    ppuStack_210 = (int32_t **)
                   CONCAT44(ppuStack_210._4_4_,*(int32_t *)((int64_t)plVar5 + 0x44));
    uStack_218 = CONCAT44(uStack_218._4_4_,(int)plVar5[8]);
    plStack_208 = plVar3;
    plStack_200 = plVar5;
    FUN_1800a4010(system_message_buffer,*(int32_t *)(param_1 + 0xa8),*(int32_t *)(param_1 + 0xac),
                  *(int32_t *)((int64_t)plVar5 + 0x3c));
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    (**(code **)(*plVar5 + 0x38))(plVar5);
    break;
  case 0x17:
    lStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_96 = 3;
    uStack_46 = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_42 = 0;
    uStack_94 = 0;
    uStack_8c = 0;
    uStack_84 = 0;
    uStack_7c = 0;
    uStack_74 = 0;
    uStack_6c = 0;
    uStack_64 = 0;
    uStack_5c = 0;
    uVar10 = FUN_18023a940(*(uint64_t *)(system_message_buffer + 0x121e0));
    FUN_1800a5fc0(system_message_buffer,uVar10,&lStack_a8);
    if ((((int)uStack_54 == 1) || ((int)uStack_54 - 7U < 2)) && (0 < (int)(uStack_a0 >> 2))) {
      puVar8 = (int8_t *)(lStack_a8 + 3);
      uVar12 = uStack_a0 >> 2 & 0xffffffff;
      do {
        *puVar8 = 0xff;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    FUN_1802a8080(*(uint64_t *)(param_1 + 0xb0),&lStack_a8,*(int32_t *)(param_1 + 0xb8));
    FUN_18006f4c0(*(uint64_t *)(param_1 + 0xb0));
    *(uint64_t *)(param_1 + 0xb0) = 0;
    if (uStack_98._1_1_ == '\0') {
      if (((char)uStack_98 == '\0') && (lStack_a8 != 0)) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
    }
    break;
  case 0x18:
    FUN_18029ef00(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0xa0));
    break;
  case 0x19:
    if (*(int *)(core_system_data_memory + 0x3f0) == 0) {
      lVar11 = system_parameter_buffer + 0x68;
      lStack_170 = lVar11;
      iVar7 = _Mtx_lock(lVar11);
      if (iVar7 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar7);
      }
      if (*(int64_t *)(system_parameter_buffer + 0x60) != 0) {
        while( true ) {
          pcVar4 = *(code **)(**(int64_t **)(system_parameter_buffer + 0x60) + 0x68);
          if (pcVar4 == (code *)&unknown_var_9696_ptr) {
            cVar20 = (char)(*(int64_t **)(system_parameter_buffer + 0x60))[2] != '\0';
          }
          else {
            cVar20 = (*pcVar4)();
          }
          if (cVar20 != '\0') break;
          uVar10 = FUN_18005e890(system_context_ptr);
          FUN_18020ee40(uVar10);
        }
      }
      iVar7 = _Mtx_unlock(lVar11);
      if (iVar7 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar7);
      }
    }
    uVar10 = FUN_180629810();
    *(uint64_t *)(system_parameter_buffer + 0x1528) = uVar10;
    FUN_180150ae0(*(uint64_t *)(param_1 + 0xa0));
    lVar11 = system_parameter_buffer;
    lVar14 = system_parameter_buffer;
    if (*(char *)(system_parameter_buffer + 0x12e7) == '\0') {
      if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8)
                   + 0x48) < iRam0000000180d49260) &&
         (SystemInitializer(0x180d49260), iRam0000000180d49260 == -1)) {
        dRam0000000180d49268 = *(double *)(lVar11 + 0x1528);
        FUN_1808fcb30(0x180d49260);
      }
      lVar9 = core_system_data_memory;
      if (core_system_data_memory == 0) {
        QueryPerformanceCounter(&lStack_1d8);
        lVar9 = lStack_1d8;
      }
      lVar14 = system_parameter_buffer;
      dVar21 = (double)(lVar9 - core_system_data_memory) * core_system_data_memory;
      dVar22 = dVar21 - *(double *)(lVar11 + 0x1528);
      *(double *)(lVar11 + 0x1530) = dVar22;
      dVar22 = dVar22 + dRam0000000180d49268;
      dRam0000000180d48d48 = dRam0000000180d48d48 + (dVar21 - dRam0000000180d48d50);
      uRam0000000180d48d44 = uRam0000000180d48d44 + 1;
      uVar12 = (uint64_t)uRam0000000180d48d44;
      dRam0000000180d48d50 = dVar21;
      dRam0000000180d49268 = dVar22;
      if (1.0 < dRam0000000180d48d48) {
        dRam0000000180d48d48 = 0.0;
        uRam0000000180d48d44 = 0;
        dRam0000000180d49268 = 0.0;
        *(double *)(lVar11 + 0x1510) = (double)(float)((double)uVar12 / dVar22);
      }
    }
    if (*(uint *)(lVar14 + 0x2ca8) == (*(uint *)(lVar14 + 0x2ca8) / 10) * 10) {
      *(int *)(lVar14 + 0x1520) = *(int *)(lVar14 + 0x1520) + 1;
      dVar21 = 1000.0 / *(double *)(lVar14 + 0x1510) + *(double *)(lVar14 + 0x1518);
      *(double *)(lVar14 + 0x1518) = dVar21;
      if (100000 < *(int *)(lVar14 + 0x1520)) {
        *(int32_t *)(lVar14 + 0x1520) = 100;
        *(double *)(lVar14 + 0x1518) = dVar21 * 0.001;
      }
    }
    FUN_18006f4c0(*(uint64_t *)(param_1 + 0xa8));
    *(uint64_t *)(param_1 + 0xa8) = 0;
    break;
  case 0x1b:
    FUN_1800a3660(system_message_buffer);
    break;
  case 0x1c:
    uStack_148 = *(uint64_t *)(param_1 + 0xa0);
    uStack_140 = *(uint64_t *)(param_1 + 0xa8);
    uStack_138 = *(uint64_t *)(param_1 + 0xb0);
    uStack_130 = *(uint64_t *)(param_1 + 0xb8);
    uStack_128 = *(int32_t *)(param_1 + 0xc0);
    uStack_124 = *(int32_t *)(param_1 + 0xc4);
    uStack_120 = *(int32_t *)(param_1 + 200);
    uStack_11c = *(int32_t *)(param_1 + 0xcc);
    uStack_118 = *(uint64_t *)(param_1 + 0xd0);
    FUN_1800a43c0(system_message_buffer,&uStack_148,*(uint64_t *)(param_1 + 0xd8));
    (**(code **)(**(int64_t **)(param_1 + 0xd8) + 0x38))();
    break;
  case 0x1d:
    uStack_198 = *(int32_t *)(param_1 + 0xa0);
    uStack_194 = *(int32_t *)(param_1 + 0xa4);
    uStack_190 = *(int32_t *)(param_1 + 0xa8);
    uStack_18c = *(int32_t *)(param_1 + 0xac);
    uStack_188 = *(uint64_t *)(param_1 + 0xb0);
    uStack_180 = *(int32_t *)(param_1 + 0xb8);
    FUN_1800a4c50(system_message_buffer,&uStack_198,*(uint64_t *)(param_1 + 0xc0));
    break;
  case 0x1e:
  case 0x29:
  case 0x2a:
    break;
  case 0x1f:
    plVar5 = *(int64_t **)(param_1 + 0xa0);
    uVar10 = FUN_18031a020(&plStack_1c0,plVar5[0x21],*(int32_t *)(param_1 + 0xb0));
    FUN_180060b80(plVar5 + 0x20,uVar10);
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    *(int32_t *)(plVar5[0x20] + 0x3a8) = *(int32_t *)(system_parameter_buffer + 0x1500);
    *(int32_t *)((int64_t)plVar5 + 0x4c) = 0x14;
    (**(code **)(*plVar5 + 0x38))(plVar5);
    break;
  case 0x20:
    plVar5 = *(int64_t **)(param_1 + 0xa0);
    FUN_18031a020(&plStack_1e0,plVar5[0x22],*(int32_t *)(param_1 + 0xb0));
    plVar3 = plStack_1e0;
    plStack_1b8 = plStack_1e0;
    if (plStack_1e0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1e0 + 0x28))(plStack_1e0);
    }
    plStack_1b8 = (int64_t *)plVar5[0x23];
    plVar5[0x23] = (int64_t)plVar3;
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    *(int32_t *)((int64_t)plVar5 + 0x4c) = 0xd;
    (**(code **)(*plVar5 + 0x38))(plVar5);
    if (plStack_1e0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1e0 + 0x38))();
    }
    break;
  case 0x21:
    plVar5 = *(int64_t **)(param_1 + 0xa0);
    FUN_18031a020(&plStack_1e8,plVar5[0x24],*(int32_t *)(param_1 + 0xb0));
    plVar3 = plStack_1e8;
    plStack_1b0 = plStack_1e8;
    if (plStack_1e8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1e8 + 0x28))(plStack_1e8);
    }
    plStack_1b0 = (int64_t *)plVar5[0x25];
    plVar5[0x25] = (int64_t)plVar3;
    if (plStack_1b0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b0 + 0x38))();
    }
    *(int32_t *)((int64_t)plVar5 + 0x4c) = 7;
    plStack_1a8 = (int64_t *)plVar5[0x24];
    plVar5[0x24] = 0;
    if (plStack_1a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1a8 + 0x38))();
    }
    (**(code **)(*plVar5 + 0x38))(plVar5);
    if (plStack_1e8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1e8 + 0x38))();
    }
    break;
  case 0x22:
    FUN_18031ce00(*(uint64_t *)(param_1 + 0xa0),*(uint64_t *)(param_1 + 0xa8));
    FUN_18031d820(*(uint64_t *)(param_1 + 0xa0),*(uint64_t *)(param_1 + 0xa8));
    break;
  case 0x23:
    FUN_180205470(lVar11,*(uint64_t *)(param_1 + 0xa0));
    break;
  case 0x24:
    FUN_180205470(lVar11,*(uint64_t *)(*(int64_t *)(param_1 + 0xa0) + 0x18));
    *(uint64_t *)(*(int64_t *)(param_1 + 0xa0) + 0x18) = 0;
    LOCK();
    piVar1 = (int *)(*(int64_t *)(param_1 + 0xa0) + 0x14);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    break;
  case 0x25:
    FUN_180206cb0(lVar11,*(uint64_t *)(param_1 + 0xa0));
    break;
  case 0x26:
    FUN_180206cb0(lVar11,*(uint64_t *)(*(int64_t *)(param_1 + 0xa0) + 0x18));
    *(uint64_t *)(*(int64_t *)(param_1 + 0xa0) + 0x18) = 0;
    LOCK();
    piVar1 = (int *)(*(int64_t *)(param_1 + 0xa0) + 0x10);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    break;
  case 0x27:
    FUN_1801d7420();
    break;
  case 0x28:
    FUN_18005cfc0();
    break;
  case 0x2b:
  case 0x2c:
    if (*(int64_t *)(param_1 + 0xa0) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(param_1 + 0xa0) = 0;
    if (*(int64_t *)(param_1 + 0xa8) != 0) {
      *(uint64_t *)(*(int64_t *)(param_1 + 0xa8) + 0x1d8) = 0;
    }
    break;
  case 0x2d:
    uVar10 = FUN_18023a940(*(uint64_t *)(param_1 + 0xa0));
    FUN_180225ee0(extraout_XMM0_Da,*(uint64_t *)(param_1 + 0xa8),*(int32_t *)(param_1 + 0xb0),
                  uVar10);
    (**(code **)(**(int64_t **)(param_1 + 0xa0) + 0x38))();
  }
code_r0x00018015273d:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_238);
}





// 函数: void FUN_180152870(int64_t *param_1)
void FUN_180152870(int64_t *param_1)

{
  if (param_1 == (int64_t *)0x0) {
    return;
  }
  if (*(char *)((int64_t)param_1 + 0x11) == '\0') {
    if (((char)param_1[2] == '\0') && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int8_t *)(param_1 + 2) = 0;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_1);
}





// 函数: void FUN_1801528b0(int64_t param_1)
void FUN_1801528b0(int64_t param_1)

{
  *(uint64_t *)(param_1 + 0x68) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x70) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(int32_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x68) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x48) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x50) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(int32_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x48) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x28) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x28) = &system_state_ptr;
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  return;
}





// 函数: void FUN_180152990(int64_t *param_1)
void FUN_180152990(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x98) {
    FUN_1801528b0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_180152a00(int64_t *param_1)
void FUN_180152a00(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x98) {
    FUN_1801528b0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_180152a20(uint64_t *param_1)
void FUN_180152a20(uint64_t *param_1)

{
  FUN_180152990();
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}





// 函数: void FUN_180152a80(int64_t *param_1)
void FUN_180152a80(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_180152a20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_180152ae0(int64_t *param_1)
void FUN_180152ae0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_180152a20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_180152b00(uint64_t *param_1)
void FUN_180152b00(uint64_t *param_1)

{
  FUN_180152a80();
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180152b60(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180152b60(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  int32_t *puVar2;
  void *puStack_50;
  int32_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  puStack_48 = (int32_t *)0x0;
  uStack_40 = 0;
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x12,0x13,param_4,0xfffffffffffffffe);
  *(int8_t *)puVar2 = 0;
  puStack_48 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puVar2 = 0x69676e45;
  puVar2[1] = 0x4d20656e;
  puVar2[2] = 0x6c75646f;
  puVar2[3] = 0x6e692065;
  *(int16_t *)(puVar2 + 4) = 0x69;
  uStack_40 = 0x11;
  FUN_1800ae520(param_1,&puStack_50);
  puStack_50 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}



uint64_t FUN_180153890(uint64_t param_1,uint64_t param_2)

{
  FUN_1801538d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1010);
  }
  return param_1;
}





