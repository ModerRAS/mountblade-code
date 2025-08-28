#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part043.c - 2 个函数

// 函数: void FUN_1800cd350(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800cd350(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  uint64_t uStackX_8;
  
  uStackX_8 = param_1;
  FUN_1802c22a0(&uStackX_8,&unknown_var_2560_ptr,param_3,param_4,0xfffffffffffffffe);
  if (*(char *)(param_2 + 0x129c1) != '\0') {
    if (((*(uint *)(param_2 + 4) & 0x10000000) == 0) && ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0))
    {
      lVar1 = FUN_180178540();
      if (lVar1 != 0) {
        FUN_180178540();
        FUN_180178650();
      }
    }
    if (*(char *)(param_2 + 0x129c9) != '\0') {
      if (*(char *)(param_2 + 0x129c8) != '\0') {
        FUN_1802cb930();
      }
      FUN_1802cc890(param_2,param_2 + 0x126e0,~(*(byte *)(param_2 + 0x1bd8) >> 5) & 1);
    }
  }
  system_system_data_ui = system_system_data_ui + -1;
                    // WARNING: Could not recover jumptable at 0x0001800cd40a. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*system_system_data_ui + 0x20))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800cd410(uint64_t param_1,longlong param_2,char param_3,int8_t param_4)
void FUN_1800cd410(uint64_t param_1,longlong param_2,char param_3,int8_t param_4)

{
  uint64_t *puVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  longlong *plVar22;
  longlong *plVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar27;
  longlong lVar28;
  uint64_t uVar29;
  int32_t uVar30;
  longlong alStackX_10 [2];
  char cStackX_20;
  uint8_t uStackX_21;
  int8_t auStack_a8 [24];
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  ulonglong uStack_48;
  ulonglong uVar26;
  
  _cStackX_20 = CONCAT71(uStackX_21,param_4);
  uStack_68 = 0xfffffffffffffffe;
  if (param_3 != '\0') {
    uStack_90 = 0x1800cd44e;
    FUN_1800ca380();
  }
  lVar27 = system_message_buffer;
  uVar24 = 0;
  *(uint64_t *)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x83b8) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83c0) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83c8) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83d0) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83d8) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83e0) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83e8) = 0;
  *(uint64_t *)(*(longlong *)(lVar27 + 0x1cd8) + 0x83f0) = 0;
  uStack_90 = 0x1800cd4d6;
  FUN_18029de40(*(uint64_t *)(lVar27 + 0x1cd8),7);
  lVar27 = 0x8a38;
  lVar28 = 0x8438;
  uVar26 = uVar24;
  do {
    lVar20 = *(longlong *)(system_message_buffer + 0x1cd8);
    if (((*(longlong *)(lVar28 + lVar20) != 0) || (*(int *)(lVar20 + -0x200 + lVar27) != -1)) ||
       (*(int *)(lVar27 + lVar20) != 0x10)) {
      alStackX_10[0] = 0;
      uStack_90 = 0x1800cd539;
      (**(code **)(**(longlong **)(lVar20 + 0x8400) + 0x40))
                (*(longlong **)(lVar20 + 0x8400),uVar26,1,alStackX_10);
      *(uint64_t *)(lVar28 + lVar20) = 0;
      *(int32_t *)(lVar20 + -0x200 + lVar27) = 0xffffffff;
      *(int32_t *)(lVar27 + lVar20) = 0x10;
      *(int *)(lVar20 + 0x82b4) = *(int *)(lVar20 + 0x82b4) + 1;
    }
    uVar25 = (int)uVar26 + 1;
    uVar26 = (ulonglong)uVar25;
    lVar28 = lVar28 + 8;
    lVar27 = lVar27 + 4;
  } while ((int)uVar25 < 0x10);
  if (*(longlong *)(param_2 + 0x99b8) != 0) {
    uStack_90 = 0x1800cd578;
    FUN_1802c8fe0(*(longlong *)(param_2 + 0x99b8),param_2);
  }
  uStack_90 = 0x1800cd583;
  uVar29 = FUN_1800c8190(param_1,param_2);
  uStack_90 = 0x1800cd58b;
  uVar29 = FUN_1800c7cb0(uVar29,param_2);
  uStack_90 = 0x1800cd593;
  uVar29 = FUN_1800c89a0(uVar29,param_2);
  uStack_90 = 0x1800cd59b;
  uVar29 = FUN_1800c7b10(uVar29,param_2);
  uStack_90 = 0x1800cd5a3;
  FUN_1800c78b0(uVar29,param_2);
  uStack_90 = 0x1800cd5ae;
  FUN_1800cbf90(param_1,param_2);
  if ((*(char *)(param_2 + 0x20) != '\0') || (*(char *)(param_2 + 0x21) != '\0')) {
                    // WARNING: Subroutine does not return
    uStack_90 = 0x1800cd5e1;
    memcpy(*(longlong *)(system_message_buffer + 0x1cd8) + 0x1f20,param_2 + 0x35c4,0x6000);
  }
  uStack_90 = 0x1800cd628;
  FUN_18029fc10(*(longlong *)(system_message_buffer + 0x1cd8),*(uint64_t *)(system_message_buffer + 0x1c70),
                *(longlong *)(system_message_buffer + 0x1cd8) + 0x1100,0x6d0);
  lVar27 = system_system_data_ui;
  if (((*(uint *)(param_2 + 4) & 0x10000000) == 0) && ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0)) {
    uVar25 = *(uint *)(system_main_module_state + 0x224) & 1;
    *(uint *)(system_system_data_ui + 0x1ec) = uVar25;
    plVar22 = *(longlong **)(lVar27 + 0xc0);
    plVar23 = *(longlong **)(lVar27 + 200);
    lVar28 = system_message_buffer;
    if (plVar22 != plVar23) {
      do {
        lVar20 = *plVar22;
        lVar28 = lVar20 + 0x58;
        uStack_90 = 0x1800cd698;
        alStackX_10[0] = lVar28;
        iVar19 = _Mtx_lock(lVar28);
        if (iVar19 != 0) {
          uStack_90 = 0x1800cd6a4;
          __Throw_C_error_std__YAXH_Z(iVar19);
        }
        uStack_90 = 0x1800cd6bf;
        (**(code **)(**(longlong **)(lVar20 + 0x148) + 0xc0))
                  (*(longlong **)(lVar20 + 0x148),(uint64_t *)(lVar20 + 200));
        uStack_90 = 0x1800cd6c9;
        iVar19 = _Mtx_unlock(lVar28);
        if (iVar19 != 0) {
          uStack_90 = 0x1800cd6d5;
          __Throw_C_error_std__YAXH_Z(iVar19);
        }
        lVar28 = system_message_buffer;
        uVar29 = *(uint64_t *)(lVar20 + 0xd0);
        uVar5 = *(uint64_t *)(lVar20 + 0xd8);
        uVar6 = *(uint64_t *)(lVar20 + 0xe0);
        uVar7 = *(uint64_t *)(lVar20 + 0xe8);
        uVar8 = *(uint64_t *)(lVar20 + 0xf0);
        uVar9 = *(uint64_t *)(lVar20 + 0xf8);
        uVar10 = *(uint64_t *)(lVar20 + 0x100);
        uVar11 = *(uint64_t *)(lVar20 + 0x108);
        uVar12 = *(uint64_t *)(lVar20 + 0x110);
        uVar13 = *(uint64_t *)(lVar20 + 0x118);
        uVar14 = *(uint64_t *)(lVar20 + 0x120);
        uVar15 = *(uint64_t *)(lVar20 + 0x128);
        uVar16 = *(uint64_t *)(lVar20 + 0x130);
        uVar17 = *(uint64_t *)(lVar20 + 0x138);
        uVar18 = *(uint64_t *)(lVar20 + 0x140);
        lVar4 = *(longlong *)(system_message_buffer + 0x1cd8);
        puVar1 = (uint64_t *)(lVar4 + 0x17d0 + uVar24);
        *puVar1 = *(uint64_t *)(lVar20 + 200);
        puVar1[1] = uVar29;
        puVar1 = (uint64_t *)(lVar4 + 0x17e0 + uVar24);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        puVar1 = (uint64_t *)(lVar4 + 0x17f0 + uVar24);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        puVar1 = (uint64_t *)(lVar4 + 0x1800 + uVar24);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        puVar1 = (uint64_t *)(lVar4 + 0x1810 + uVar24);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        puVar1 = (uint64_t *)(lVar4 + 0x1820 + uVar24);
        *puVar1 = uVar13;
        puVar1[1] = uVar14;
        puVar1 = (uint64_t *)(lVar4 + 0x1830 + uVar24);
        *puVar1 = uVar15;
        puVar1[1] = uVar16;
        puVar1 = (uint64_t *)(lVar4 + 0x1840 + uVar24);
        *puVar1 = uVar17;
        puVar1[1] = uVar18;
        uVar24 = uVar24 + 0x80;
        plVar22 = plVar22 + 1;
      } while (plVar22 != plVar23);
      uVar25 = *(uint *)(lVar27 + 0x1ec);
    }
    *(float *)(*(longlong *)(lVar28 + 0x1cd8) + 0x19d0) = (float)(int)uVar25;
    uStack_90 = 0x1800cd799;
    FUN_18029fc10(*(longlong *)(lVar28 + 0x1cd8),*(uint64_t *)(lVar28 + 0x1cb8),
                  *(longlong *)(lVar28 + 0x1cd8) + 0x17d0,0x210);
  }
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_a8;
  lVar27 = FUN_180244ff0();
  if (lVar27 != 0) {
    lVar28 = FUN_180244ff0(param_2);
    lVar27 = system_main_module_state;
    iVar19 = *(int *)(param_2 + 0x3578);
    if (*(longlong *)(lVar28 + 0x1d8) != 0) {
      if (system_main_module_state != 0) {
        *(longlong *)(lVar28 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
      }
      plVar22 = (longlong *)
                ((longlong)(int)((uint)*(byte *)(lVar28 + 0x335) * iVar19) * 0x10 +
                *(longlong *)(lVar28 + 0x1d8));
      goto LAB_18024b24e;
    }
  }
  plVar22 = (longlong *)0x0;
  lVar27 = system_main_module_state;
LAB_18024b24e:
  plVar23 = *(longlong **)(system_message_buffer + 0x1cd8);
  if ((plVar22 != (longlong *)0x0) && (*plVar22 != 0)) {
    (**(code **)(*plVar23 + 0x70))(plVar23,*plVar22,1);
    lVar27 = system_main_module_state;
  }
  plVar23[0x1077] = (longlong)plVar22;
  iVar19 = 0;
  lVar28 = 0;
  do {
    if ((ulonglong)(*(longlong *)(param_2 + 0x96b8) - *(longlong *)(param_2 + 0x96b0) >> 3) <=
        (ulonglong)(longlong)iVar19) break;
    lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x96b0) + lVar28);
    plVar22 = *(longlong **)(lVar20 + 0x1d8);
    plVar23 = *(longlong **)(system_message_buffer + 0x1cd8);
    if (plVar22 != (longlong *)0x0) {
      if (lVar27 != 0) {
        *(longlong *)(lVar20 + 0x340) = (longlong)*(int *)(lVar27 + 0x224);
      }
      if (*plVar22 != 0) {
        (**(code **)(*plVar23 + 0x70))(plVar23,*plVar22,1);
        lVar27 = system_main_module_state;
      }
    }
    *(longlong **)((longlong)plVar23 + lVar28 + 0x83c0) = plVar22;
    iVar19 = iVar19 + 1;
    lVar28 = lVar28 + 8;
  } while (iVar19 < 4);
  lVar27 = FUN_180245280(param_2);
  if (((*(char *)(param_2 + 0x20) != '\0') || (*(char *)(param_2 + 0x21) != '\0')) &&
     ((lVar28 = *(longlong *)(system_message_buffer + 0x1cd8), *(longlong *)(lVar28 + 0x8550) != 0 ||
      ((*(int *)(lVar28 + 0x88c4) != -1 || (*(int *)(lVar28 + 0x8ac4) != 0x10)))))) {
    uStack_78 = 0;
    (**(code **)(**(longlong **)(lVar28 + 0x8400) + 0x40))
              (*(longlong **)(lVar28 + 0x8400),0x23,1,&uStack_78);
    *(uint64_t *)(lVar28 + 0x8550) = 0;
    *(int32_t *)(lVar28 + 0x88c4) = 0xffffffff;
    *(int32_t *)(lVar28 + 0x8ac4) = 0x10;
    *(int *)(lVar28 + 0x82b4) = *(int *)(lVar28 + 0x82b4) + 1;
  }
  plVar23 = (longlong *)0x0;
  plVar22 = *(longlong **)(system_message_buffer + 0x1cd8);
  if (lVar27 != 0) {
    iVar19 = *(int *)(param_2 + 0x357c);
    if (*(longlong *)(lVar27 + 0x1e0) != 0) {
      if (system_main_module_state != 0) {
        *(longlong *)(lVar27 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
      }
      plVar23 = (longlong *)((longlong)(iVar19 * 2 + 1) * 0x10 + *(longlong *)(lVar27 + 0x1e0));
      if ((plVar23 != (longlong *)0x0) && (*plVar23 != 0)) {
        (**(code **)(*plVar22 + 0x70))(plVar22,*plVar23,4);
      }
    }
  }
  lVar28 = system_message_buffer;
  plVar22[0x107e] = (longlong)plVar23;
  FUN_18029de40(*(uint64_t *)(lVar28 + 0x1cd8),
                (int)(*(longlong *)(param_2 + 0x96b8) - *(longlong *)(param_2 + 0x96b0) >> 3) + 1);
  if (*(int *)(param_2 + 8) == -1) {
    uVar25 = 0;
  }
  else {
    uVar25 = *(uint *)(param_2 + 0x18);
  }
  if ((uVar25 & 2) != 0) {
    uStack_80._0_1_ = 1;
    uStack_88 = 0xffffffff;
    FUN_18029d760(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,*(uint64_t *)(param_2 + 0x98d0));
    uStack_80._0_1_ = 1;
    uStack_88 = 0xffffffff;
    FUN_18029d760(*(uint64_t *)(system_message_buffer + 0x1cd8),2,0,*(uint64_t *)(param_2 + 0x98d8));
    uStack_80 = CONCAT31(uStack_80._1_3_,1);
    uStack_88 = 0xffffffff;
    FUN_18029d760(*(uint64_t *)(system_message_buffer + 0x1cd8),3,0,*(uint64_t *)(param_2 + 0x98e0));
    FUN_18029d930(*(uint64_t *)(system_message_buffer + 0x1cd8),4,0,*(uint64_t *)(param_2 + 0x98f0));
    lVar28 = *(longlong *)(system_message_buffer + 0x1cd8);
    if (((*(longlong *)(lVar28 + 0x8558) != 0) || (*(int *)(lVar28 + 0x88c8) != -1)) ||
       (lVar20 = system_message_buffer, *(int *)(lVar28 + 0x8ac8) != 0x10)) {
      uStack_78 = 0;
      (**(code **)(**(longlong **)(lVar28 + 0x8400) + 0x40))
                (*(longlong **)(lVar28 + 0x8400),0x24,1,&uStack_78);
      lVar20 = system_message_buffer;
      *(uint64_t *)(lVar28 + 0x8558) = 0;
      *(int32_t *)(lVar28 + 0x88c8) = 0xffffffff;
      *(int32_t *)(lVar28 + 0x8ac8) = 0x10;
      *(int *)(lVar28 + 0x82b4) = *(int *)(lVar28 + 0x82b4) + 1;
    }
    uStack_70 = 0;
    plVar22 = *(longlong **)(*(longlong *)(lVar20 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar22 + 0x40))(plVar22,0x42,1,&uStack_70);
  }
  uStack_60 = *(uint64_t *)(param_2 + 0x11c18);
  uStack_58 = *(uint64_t *)(param_2 + 0x11c20);
  uStack_4c = *(int32_t *)(param_2 + 0x11c2c);
  lVar28 = *(longlong *)(system_message_buffer + 0x1cd8);
  fVar2 = *(float *)(param_2 + 0x11c24);
  plVar22 = *(longlong **)(lVar28 + 0x8400);
  fVar3 = *(float *)(param_2 + 0x11c20);
  uStack_50 = *(int32_t *)(param_2 + 0x11c28);
  (**(code **)(*plVar22 + 0x160))(plVar22,1,&uStack_60);
  plVar22 = *(longlong **)(lVar28 + 0x8400);
  uVar25 = 0;
  uVar21 = 0;
  uStack_70 = 0;
  uStack_68 = CONCAT44((int)fVar2,(int)fVar3);
  (**(code **)(*plVar22 + 0x168))(plVar22,1,&uStack_70);
  if (cStackX_20 == '\0') {
    if (((*(uint *)(param_2 + 4) & 1) != 0) || (*(char *)(param_2 + 0x12c0a) != '\0')) {
      uVar21 = 1;
    }
    if ((param_3 == '\x01') && ((*(uint *)(param_2 + 4) & 2) != 0)) {
      uVar21 = uVar21 | 2;
    }
    if (((((*(byte *)(param_2 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(param_2 + 0x1bd9) & 2) == 0))
        || (*(int *)(system_system_data_ui + 0xa10) == 0)) || (*(char *)(param_2 + 0x130) == '\0')) {
      uVar30 = 0x3f800000;
    }
    else {
      uVar30 = 0;
    }
    if (uVar21 != 0) {
      uStack_80 = 0;
      uStack_88 = 0x8a;
      FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),uVar21,
                    *(int32_t *)(param_2 + 0x11cf0),uVar30);
    }
    lVar28 = system_message_buffer;
    if (((lVar27 != 0) && (*(char *)(lVar27 + 0x357) != '\0')) &&
       (*(char *)(lVar27 + 0x358) == '\0')) {
      *(int8_t *)(lVar27 + 0x358) = 1;
      uStack_80 = 0;
      uStack_88 = 0x8a;
      FUN_18029c8a0(*(uint64_t *)(lVar28 + 0x1cd8),2,*(int32_t *)(param_2 + 0x11cf0),uVar30);
    }
  }
  if (*(int *)(param_2 + 8) != -1) {
    uVar25 = *(uint *)(param_2 + 0x18);
  }
  if ((uVar25 & 2) != 0) {
    lVar27 = *(longlong *)(param_2 + 0x98d0);
    uStack_78._0_4_ = 0xffffffff;
    lVar28 = *(longlong *)(system_message_buffer + 0x1cd8);
    *(longlong *)(lVar27 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
    plVar22 = *(longlong **)(lVar28 + 0x8400);
    (**(code **)(*plVar22 + 0x198))(plVar22,*(uint64_t *)(lVar27 + 0x208),&uStack_78);
    lVar27 = *(longlong *)(param_2 + 0x98d8);
    uStack_78 = (ulonglong)uStack_78._4_4_ << 0x20;
    lVar28 = *(longlong *)(system_message_buffer + 0x1cd8);
    *(longlong *)(lVar27 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
    plVar22 = *(longlong **)(lVar28 + 0x8400);
    (**(code **)(*plVar22 + 0x198))(plVar22,*(uint64_t *)(lVar27 + 0x208),&uStack_78);
    lVar27 = *(longlong *)(param_2 + 0x98e0);
    lVar28 = *(longlong *)(system_message_buffer + 0x1cd8);
    *(longlong *)(lVar27 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
    plVar22 = *(longlong **)(lVar28 + 0x8400);
    (**(code **)(*plVar22 + 0x198))(plVar22,*(uint64_t *)(lVar27 + 0x208),&uStack_78);
    lVar27 = *(longlong *)(param_2 + 0x98f0);
    lVar28 = *(longlong *)(system_message_buffer + 0x1cd8);
    *(int32_t *)(lVar27 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    plVar22 = *(longlong **)(lVar28 + 0x8400);
    (**(code **)(*plVar22 + 0x198))(plVar22,*(uint64_t *)(lVar27 + 0x20),&uStack_78);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




