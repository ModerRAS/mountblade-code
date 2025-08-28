#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part012.c - 6 个函数

// 函数: void FUN_1804eb500(longlong *param_1,int param_2,int param_3)
void FUN_1804eb500(longlong *param_1,int param_2,int param_3)

{
  int32_t *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  int aiStackX_10 [2];
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_4c;
  
  if (param_2 < param_3) {
    lVar11 = (longlong)param_2 << 3;
    uVar10 = (ulonglong)(uint)(param_3 - param_2);
    do {
      lVar3 = *param_1;
      lVar7 = lVar3 + 0x86e988;
      if (*(char *)(lVar3 + 0x87296c) == '\0') {
        lVar7 = *(longlong *)(lVar3 + 0x872948);
      }
      lVar7 = *(longlong *)(lVar11 + lVar7);
      aiStackX_10[0] = 0;
      if ((*(longlong *)(lVar7 + 0x590) != 0) && (*(int *)(lVar7 + 0x568) == 1)) {
        uVar4 = *(uint *)(lVar7 + 0x56c);
        if ((uVar4 & 0x80018) != 0) {
          FUN_18059ad70(lVar7 + 0x28,*(int32_t *)param_1[1],aiStackX_10,lVar3 + 0x87a948);
          uVar4 = *(uint *)(lVar7 + 0x56c);
        }
        iVar9 = aiStackX_10[0];
        if ((((uVar4 >> 0xb & 1) != 0) &&
            (lVar3 = *(longlong *)(lVar7 + 0x728), *(char *)(lVar3 + 0x5b8) != '\0')) &&
           (0.0 < (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(lVar3 + 0x5c8) * 8) -
                         *(longlong *)(lVar3 + 0x5c0)) * 1e-05)) {
          *(int8_t *)(lVar3 + 0x5b8) = 0;
          func_0x000180588750(*(longlong *)(lVar7 + 0x8e8) + 8);
          func_0x000180588750(*(longlong *)(lVar7 + 0x8e8) + 8);
          *(uint *)(lVar7 + 0x4c8) = *(uint *)(lVar7 + 0x4c8) | 0x7c00;
        }
        if (iVar9 != 0) {
          lVar3 = *param_1;
          puVar8 = (uint *)(lVar3 + 0x87a9f0);
          LOCK();
          uVar4 = *puVar8;
          *puVar8 = *puVar8 + 1;
          UNLOCK();
          uVar5 = uVar4 >> 4;
          if (*(longlong *)(lVar3 + 0x87a9f8 + (ulonglong)uVar5 * 8) == 0) {
            lVar6 = FUN_18062b420(system_memory_pool_ptr,0x100,8);
            plVar2 = (longlong *)(lVar3 + 0x87a9f8 + (ulonglong)uVar5 * 8);
            LOCK();
            bVar12 = *plVar2 == 0;
            if (bVar12) {
              *plVar2 = lVar6;
            }
            UNLOCK();
            if ((!bVar12) && (lVar6 != 0)) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
          }
          uStack_58 = (int32_t)lVar7;
          uStack_54 = (int32_t)((ulonglong)lVar7 >> 0x20);
          puVar1 = (int32_t *)
                   (*(longlong *)(lVar3 + 0x87a9f8 + (ulonglong)uVar5 * 8) +
                   (ulonglong)(uVar4 + uVar5 * -0x10) * 0x10);
          *puVar1 = uStack_58;
          puVar1[1] = uStack_54;
          puVar1[2] = iVar9;
          puVar1[3] = uStack_4c;
        }
      }
      if (*(char *)param_1[2] != '\0') {
        FUN_18052d2f0(lVar7);
      }
      lVar11 = lVar11 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804eb512(longlong *param_1,int param_2,int param_3,uint64_t param_4,uint64_t param_5)
void FUN_1804eb512(longlong *param_1,int param_2,int param_3,uint64_t param_4,uint64_t param_5)

{
  int32_t *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong in_RAX;
  longlong lVar6;
  uint64_t unaff_RBX;
  longlong lVar7;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint *puVar8;
  int iVar9;
  uint64_t unaff_R12;
  ulonglong uVar10;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  longlong lVar11;
  bool bVar12;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t uStackX_20;
  int32_t uStackX_24;
  int iStack0000000000000088;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBP;
  lVar11 = (longlong)param_2 << 3;
  *(uint64_t *)(in_RAX + 0x20) = unaff_RSI;
  uVar10 = (ulonglong)(uint)(param_3 - param_2);
  *(uint64_t *)(in_RAX + -0x10) = unaff_RDI;
  do {
    lVar3 = *param_1;
    lVar7 = lVar3 + 0x86e988;
    if (*(char *)(lVar3 + 0x87296c) == '\0') {
      lVar7 = *(longlong *)(lVar3 + 0x872948);
    }
    lVar7 = *(longlong *)(lVar11 + lVar7);
    iStack0000000000000088 = 0;
    if ((*(longlong *)(lVar7 + 0x590) != 0) && (*(int *)(lVar7 + 0x568) == 1)) {
      uVar4 = *(uint *)(lVar7 + 0x56c);
      if ((uVar4 & 0x80018) != 0) {
        FUN_18059ad70(lVar7 + 0x28,*(int32_t *)param_1[1],&stack0x00000088,lVar3 + 0x87a948);
        uVar4 = *(uint *)(lVar7 + 0x56c);
      }
      iVar9 = iStack0000000000000088;
      if ((((uVar4 >> 0xb & 1) != 0) &&
          (lVar3 = *(longlong *)(lVar7 + 0x728), *(char *)(lVar3 + 0x5b8) != '\0')) &&
         (0.0 < (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(lVar3 + 0x5c8) * 8) -
                       *(longlong *)(lVar3 + 0x5c0)) * 1e-05)) {
        *(int8_t *)(lVar3 + 0x5b8) = 0;
        func_0x000180588750(*(longlong *)(lVar7 + 0x8e8) + 8);
        func_0x000180588750(*(longlong *)(lVar7 + 0x8e8) + 8);
        *(uint *)(lVar7 + 0x4c8) = *(uint *)(lVar7 + 0x4c8) | 0x7c00;
      }
      if (iVar9 != 0) {
        lVar3 = *param_1;
        puVar8 = (uint *)(lVar3 + 0x87a9f0);
        LOCK();
        uVar4 = *puVar8;
        *puVar8 = *puVar8 + 1;
        UNLOCK();
        uVar5 = uVar4 >> 4;
        if (*(longlong *)(lVar3 + 0x87a9f8 + (ulonglong)uVar5 * 8) == 0) {
          lVar6 = FUN_18062b420(system_memory_pool_ptr,0x100,8);
          plVar2 = (longlong *)(lVar3 + 0x87a9f8 + (ulonglong)uVar5 * 8);
          LOCK();
          bVar12 = *plVar2 == 0;
          if (bVar12) {
            *plVar2 = lVar6;
          }
          UNLOCK();
          if ((!bVar12) && (lVar6 != 0)) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
        }
        uStackX_20 = (int32_t)lVar7;
        uStackX_24 = (int32_t)((ulonglong)lVar7 >> 0x20);
        puVar1 = (int32_t *)
                 (*(longlong *)(lVar3 + 0x87a9f8 + (ulonglong)uVar5 * 8) +
                 (ulonglong)(uVar4 + uVar5 * -0x10) * 0x10);
        *puVar1 = uStackX_20;
        puVar1[1] = uStackX_24;
        puVar1[2] = iVar9;
        puVar1[3] = param_5._4_4_;
      }
    }
    if (*(char *)param_1[2] != '\0') {
      FUN_18052d2f0(lVar7);
    }
    lVar11 = lVar11 + 8;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1804eb71d(void)
void FUN_1804eb71d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804eb720(longlong *param_1,uint param_2,int param_3,uint64_t param_4)
void FUN_1804eb720(longlong *param_1,uint param_2,int param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  uint64_t uVar10;
  longlong lStack_78;
  longlong lStack_70;
  uint64_t uStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  int32_t uStack_50;
  uint64_t uStack_4c;
  uint64_t uStack_44;
  int32_t uStack_3c;
  int16_t uStack_38;
  int32_t uStack_34;
  int8_t uStack_30;
  
  if ((int)param_2 < param_3) {
    uVar10 = 0xfffffffffffffffe;
    uVar8 = (ulonglong)param_2;
    do {
      puVar5 = (uint64_t *)
               (*(longlong *)(*param_1 + 0x87a9f8 + (uVar8 >> 4) * 8) +
               (ulonglong)(uint)((int)uVar8 + (int)(uVar8 >> 4) * -0x10) * 0x10);
      lStack_78 = 0;
      lStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 3;
      uStack_58 = 0;
      uStack_50 = 0xffffffff;
      uStack_4c = 0;
      uStack_44 = 0xffffffffffffffff;
      uStack_3c = 0xffffffff;
      uStack_38 = 0;
      uStack_34 = 0xffffffff;
      uStack_30 = 0;
      FUN_18050af60(*puVar5,*(int32_t *)(puVar5 + 1),&lStack_78,param_4,uVar10);
      lVar2 = lStack_70 - lStack_78 >> 0x3f;
      if ((lStack_70 - lStack_78) / 0xcb0 + lVar2 != lVar2) {
        lVar2 = *param_1;
        puVar6 = (uint *)(lVar2 + 0x87ae70);
        LOCK();
        uVar7 = *puVar6;
        *puVar6 = *puVar6 + 1;
        UNLOCK();
        uVar3 = uVar7 >> 4;
        if (*(longlong *)(lVar2 + 0x87ae78 + (ulonglong)uVar3 * 8) == 0) {
          lVar4 = FUN_18062b420(system_memory_pool_ptr,0x500,8);
          plVar1 = (longlong *)(lVar2 + 0x87ae78 + (ulonglong)uVar3 * 8);
          LOCK();
          bVar9 = *plVar1 == 0;
          if (bVar9) {
            *plVar1 = lVar4;
          }
          UNLOCK();
          if ((!bVar9) && (lVar4 != 0)) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
        }
        FUN_1804ffcd0((ulonglong)(uVar7 + uVar3 * -0x10) * 0x50 +
                      *(longlong *)(lVar2 + 0x87ae78 + (ulonglong)uVar3 * 8),&lStack_78);
      }
      if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < param_3);
  }
  return;
}






// 函数: void FUN_1804eb8d0(uint64_t param_1,uint64_t param_2,uint64_t *param_3,float *param_4)
void FUN_1804eb8d0(uint64_t param_1,uint64_t param_2,uint64_t *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int32_t uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int32_t uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  int32_t uStack_7c;
  uint64_t uStack_78;
  int32_t uStack_70;
  int32_t uStack_6c;
  
  uStack_78 = *param_3;
  fStack_88 = *param_4;
  fStack_84 = param_4[1];
  fStack_80 = param_4[2];
  fVar1 = fStack_88 * fStack_88 + fStack_84 * fStack_84 + fStack_80 * fStack_80;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
  fStack_88 = fStack_88 * fVar1;
  fStack_84 = fVar1 * fStack_84;
  fStack_80 = fStack_80 * fVar1;
  if ((0.99 < fStack_84) || (fStack_84 < -0.99)) {
    fStack_a8 = 0.0;
    fStack_a4 = -fStack_80;
    fStack_a0 = fStack_84;
  }
  else {
    fStack_a4 = 0.0;
    fStack_a0 = -fStack_88;
    fStack_a8 = fStack_80;
  }
  uStack_9c = 0;
  uStack_7c = 0;
  fVar1 = fStack_a4 * fStack_a4 + fStack_a8 * fStack_a8 + fStack_a0 * fStack_a0;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
  fStack_a0 = fStack_a0 * fVar1;
  fStack_a4 = fStack_a4 * fVar1;
  fStack_a8 = fStack_a8 * fVar1;
  fStack_98 = fStack_a0 * fStack_84 - fStack_80 * fStack_a4;
  fStack_94 = fStack_a8 * fStack_80 - fStack_a0 * fStack_88;
  fStack_90 = fStack_88 * fStack_a4 - fStack_a8 * fStack_84;
  uStack_8c = 0;
  fVar1 = fStack_98 * fStack_98 + fStack_94 * fStack_94 + fStack_90 * fStack_90;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
  fStack_94 = fStack_94 * fVar1;
  fStack_98 = fStack_98 * fVar1;
  fStack_90 = fStack_90 * fVar1;
  _uStack_70 = CONCAT44(0x3f800000,(int)param_3[1]);
  FUN_1804ebb80(0x3f800000,fStack_90,&fStack_a8,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1804ebb80(longlong param_1,int32_t param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint64_t uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong *plStack_c8;
  longlong *plStack_c0;
  longlong **applStack_b8 [2];
  int iStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  float fStack_98;
  float fStack_94;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  uint64_t uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar9 = 0;
  FUN_1800c1750(param_1,&plStack_c8,param_2);
  if (plStack_c8 == (longlong *)0x0) {
    FUN_180627020(&unknown_var_9528_ptr,param_2);
    uVar8 = 0;
  }
  else {
    if (((param_4 != '\0') && ((system_status_flag - 2U & 0xfffffffc) == 0)) && (system_status_flag != 4)) {
      FUN_18063b470(applStack_b8,param_3);
      iStack_a8 = (int)applStack_b8[0];
      uStack_a4 = (int32_t)((ulonglong)applStack_b8[0] >> 0x20);
      uStack_a0 = SUB84(applStack_b8[1],0);
      uStack_9c = (int32_t)((ulonglong)applStack_b8[1] >> 0x20);
      fStack_98 = *(float *)(param_3 + 0x30);
      fStack_94 = *(float *)(param_3 + 0x34);
      uStack_90 = *(uint64_t *)(param_3 + 0x38);
      iVar6 = _Mtx_lock(0x180c95528);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      cVar5 = FUN_180645c10(0x180c95578,0,&unknown_var_3504_ptr);
      fVar3 = fStack_94;
      fVar2 = fStack_98;
      fVar4 = (float)uStack_90;
      if ((((cVar5 != '\0') &&
           (cVar5 = FUN_180645c10(0x180c95578,0x10,&unknown_var_3472_ptr), cVar5 != '\0')) &&
          ((cVar5 = FUN_180645c10(0x180c95578,param_2,&system_data_bca0), cVar5 != '\0' &&
           ((cVar5 = FUN_180645fa0(0x180c95578,fVar2,&unknown_var_3312_ptr), cVar5 != '\0' &&
            (cVar5 = FUN_180645fa0(0x180c95578,fVar3,&unknown_var_3312_ptr), cVar5 != '\0')))))) &&
         (cVar5 = FUN_180645fa0(0x180c95578,fVar4,&unknown_var_3328_ptr), cVar5 != '\0')) {
        FUN_1805aed50(0x180c95578,&iStack_a8);
      }
      system_system_memory = system_system_memory & 0xffffffff00000000;
      iVar6 = (int)(system_system_memory - system_system_memory >> 3);
      lVar7 = system_system_memory;
      if (0 < iVar6) {
        do {
          lVar1 = *(longlong *)(lVar7 + lVar9 * 8);
          if ((((lVar1 != 0) && (*(char *)(*(longlong *)(lVar1 + 0x58f8) + 0x1c) != '\0')) &&
              (*(char *)(*(longlong *)(lVar1 + 0x58f8) + 0x26) != '\0')) &&
             (fVar11 = fVar3 - *(float *)(lVar1 + 0x5904),
             fVar12 = fVar2 - *(float *)(lVar1 + 0x5900),
             fVar10 = fVar4 - *(float *)(lVar1 + 0x5908),
             fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10 < 10000.0)) {
            FUN_1805b5840(lVar1,0x180c95578);
            lVar7 = system_system_memory;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar6);
      }
      if (system_system_memory != 0) {
        FUN_180567f30(system_system_memory,0x180c95578);
      }
      system_system_memory = 0;
                    // WARNING: Subroutine does not return
      memset(system_system_memory,0,(longlong)(system_system_memory >> 3));
    }
    uVar8 = *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x260);
    applStack_b8[0] = &plStack_c0;
    plStack_c0 = plStack_c8;
    if (plStack_c8 != (longlong *)0x0) {
      (**(code **)(*plStack_c8 + 0x28))();
    }
    FUN_1802d2d90(uVar8,&plStack_c0,param_3);
    iVar6 = (int)plStack_c8[7];
    if (iVar6 != -1) {
      uStack_a4 = (int32_t)*(uint64_t *)(param_3 + 0x30);
      uStack_a0 = (int32_t)((ulonglong)*(uint64_t *)(param_3 + 0x30) >> 0x20);
      uStack_9c = (int32_t)*(uint64_t *)(param_3 + 0x38);
      fStack_98 = (float)((ulonglong)*(uint64_t *)(param_3 + 0x38) >> 0x20);
      fStack_94 = 1.4013e-45;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_7c = 0x3f800000;
      uStack_78 = 0;
      iStack_a8 = iVar6;
      if (-1 < iVar6) {
        FUN_180545140(&system_data_6110,&iStack_a8,0,0);
      }
    }
    uVar8 = 1;
  }
  if (plStack_c8 != (longlong *)0x0) {
    (**(code **)(*plStack_c8 + 0x38))();
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ebef0(longlong param_1,int32_t param_2,longlong *param_3,int param_4,char param_5,
void FUN_1804ebef0(longlong param_1,int32_t param_2,longlong *param_3,int param_4,char param_5,
                  char param_6)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  uint64_t uVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t auStack_1c8 [32];
  longlong *plStack_1a8;
  longlong *plStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  int iStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_150;
  longlong *plStack_148;
  longlong *plStack_140;
  uint64_t uStack_138;
  int32_t uStack_130;
  uint64_t uStack_128;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  int32_t uStack_fc;
  uint64_t uStack_f8;
  longlong *plStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  int32_t uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  ulonglong uStack_90;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_90 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1c8;
  lStack_198 = param_1;
  FUN_1800c1750(param_1,&plStack_1a8,param_2);
  if (plStack_1a8 == (longlong *)0x0) {
    FUN_180627020(&unknown_var_9528_ptr,param_2);
  }
  else {
    lVar14 = (longlong)param_4 * 0xa60;
    lVar11 = lVar14 + param_1;
    lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x3778) + 0x8a8);
    puVar10 = (uint *)((longlong)param_5 * 0x100 +
                      *(longlong *)(*(longlong *)(lVar11 + 0x36f8) + 0x18));
    do {
      LOCK();
      uVar1 = *puVar10;
      *puVar10 = *puVar10 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    fStack_a0 = (float)puVar10[5];
    fStack_9c = (float)puVar10[6];
    fStack_98 = (float)puVar10[7];
    uStack_94 = puVar10[8];
    *puVar10 = 0;
    fVar19 = fStack_98 * *(float *)(lVar12 + 0x98) + *(float *)(lVar12 + 0xa8);
    fVar20 = fStack_a0 * *(float *)(lVar12 + 0x74) + fStack_9c * *(float *)(lVar12 + 0x84) +
             *(float *)(lVar12 + 0xa4);
    fVar18 = fStack_9c * *(float *)(lVar12 + 0x80) + fStack_a0 * *(float *)(lVar12 + 0x70) +
             *(float *)(lVar12 + 0xa0);
    uStack_b0 = CONCAT44(fVar20,fVar18);
    uStack_a8 = CONCAT44(0x7f7fffff,fVar19);
    lStack_190 = lVar14;
    if (((param_6 != '\0') && ((system_status_flag - 2U & 0xfffffffc) == 0)) && (system_status_flag != 4)) {
      FUN_18063b470(&uStack_128,param_3);
      uStack_118 = (int32_t)uStack_128;
      uStack_114 = uStack_128._4_4_;
      uStack_110 = uStack_120;
      uStack_10c = uStack_11c;
      uStack_108 = (int32_t)param_3[6];
      uStack_104 = *(int32_t *)((longlong)param_3 + 0x34);
      uStack_100 = (int32_t)param_3[7];
      uStack_fc = *(int32_t *)((longlong)param_3 + 0x3c);
      iVar7 = _Mtx_lock(0x180c95528);
      if (iVar7 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar7);
      }
      cVar6 = FUN_180645c10(0x180c95578,0,&unknown_var_3504_ptr);
      if ((((cVar6 != '\0') &&
           (cVar6 = FUN_180645c10(0x180c95578,0x11,&unknown_var_3472_ptr), cVar6 != '\0')) &&
          ((cVar6 = FUN_180645c10(0x180c95578,param_2,&system_data_bca0), cVar6 != '\0' &&
           ((cVar6 = FUN_180645fa0(0x180c95578,uStack_108,&unknown_var_3360_ptr), cVar6 != '\0' &&
            (cVar6 = FUN_180645fa0(0x180c95578,uStack_104,&unknown_var_3360_ptr), cVar6 != '\0')))))) &&
         ((cVar6 = FUN_180645fa0(0x180c95578,uStack_100,&unknown_var_3376_ptr), cVar6 != '\0' &&
          ((cVar6 = FUN_1805aed50(0x180c95578,&uStack_118), cVar6 != '\0' &&
           (cVar6 = FUN_180645c10(0x180c95578,param_4,&unknown_var_3424_ptr), cVar6 != '\0')))))) {
        FUN_180645c10(0x180c95578,(int)param_5,&unknown_var_3248_ptr);
      }
      system_system_memory = system_system_memory & 0xffffffff00000000;
      iVar7 = (int)(system_system_memory - system_system_memory >> 3);
      if (0 < iVar7) {
        lVar12 = 0;
        lVar11 = system_system_memory;
        do {
          lVar14 = *(longlong *)(lVar11 + lVar12 * 8);
          if ((((lVar14 != 0) && (*(char *)(*(longlong *)(lVar14 + 0x58f8) + 0x1c) != '\0')) &&
              (*(char *)(*(longlong *)(lVar14 + 0x58f8) + 0x25) != '\0')) &&
             (fVar16 = fVar20 - *(float *)(lVar14 + 0x5904),
             fVar17 = fVar18 - *(float *)(lVar14 + 0x5900),
             fVar15 = fVar19 - *(float *)(lVar14 + 0x5908),
             fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15 < 10000.0)) {
            FUN_1805b5840(lVar14,0x180c95578);
            lVar11 = system_system_memory;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar7);
      }
      if (system_system_memory != 0) {
        FUN_180567f30(system_system_memory,0x180c95578);
      }
      system_system_memory = 0;
                    // WARNING: Subroutine does not return
      memset(system_system_memory,0,(longlong)(system_system_memory >> 3));
    }
    uVar8 = FUN_18062b1e0(system_memory_pool_ptr,0x168,8,3);
    plVar9 = (longlong *)FUN_1802ac390(uVar8);
    plStack_f0 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9);
    }
    uStack_128 = &plStack_1a0;
    plStack_1a0 = plStack_1a8;
    if (plStack_1a8 != (longlong *)0x0) {
      (**(code **)(*plStack_1a8 + 0x28))();
    }
    FUN_1802adab0(plVar9,&plStack_1a0);
    lVar12 = param_3[1];
    plVar9[10] = *param_3;
    plVar9[0xb] = lVar12;
    lVar12 = param_3[3];
    plVar9[0xc] = param_3[2];
    plVar9[0xd] = lVar12;
    uVar2 = *(int32_t *)((longlong)param_3 + 0x24);
    lVar12 = param_3[5];
    uVar3 = *(int32_t *)((longlong)param_3 + 0x2c);
    *(int *)(plVar9 + 0xe) = (int)param_3[4];
    *(int32_t *)((longlong)plVar9 + 0x74) = uVar2;
    *(int *)(plVar9 + 0xf) = (int)lVar12;
    *(int32_t *)((longlong)plVar9 + 0x7c) = uVar3;
    uVar2 = *(int32_t *)((longlong)param_3 + 0x34);
    lVar12 = param_3[7];
    uVar3 = *(int32_t *)((longlong)param_3 + 0x3c);
    *(int *)(plVar9 + 0x10) = (int)param_3[6];
    *(int32_t *)((longlong)plVar9 + 0x84) = uVar2;
    *(int *)(plVar9 + 0x11) = (int)lVar12;
    *(int32_t *)((longlong)plVar9 + 0x8c) = uVar3;
    cVar6 = FUN_1802b6000(plStack_1a8);
    if (cVar6 != '\0') {
      plStack_148 = (longlong *)0x0;
      plStack_140 = (longlong *)0x0;
      uStack_138 = 0;
      uStack_130 = 3;
      FUN_1805ab6a0(&plStack_148,lVar11 + 0x30a0);
      FUN_1802ae880(plVar9,&plStack_148);
      plVar5 = plStack_140;
      plVar4 = plStack_148;
      param_1 = lStack_198;
      lVar14 = lStack_190;
      for (plVar13 = plStack_148; lStack_198 = param_1, lStack_190 = lVar14, plVar13 != plVar5;
          plVar13 = plVar13 + 1) {
        if ((longlong *)*plVar13 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar13 + 0x38))();
        }
        param_1 = lStack_198;
        lVar14 = lStack_190;
      }
      if (plVar4 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar4);
      }
    }
    lVar11 = *(longlong *)(lVar11 + 0x3778);
    FUN_1802fbf30(*(uint64_t *)(*(longlong *)(lVar11 + 0x8a8) + 0x260),param_5,plVar9,param_3);
    FUN_180544ac0(lVar11);
    iVar7 = (int)plStack_1a8[7];
    if (iVar7 != -1) {
      uStack_17c = (int32_t)uStack_b0;
      uStack_178 = (int32_t)((ulonglong)uStack_b0 >> 0x20);
      uStack_174 = (int32_t)uStack_a8;
      uStack_170 = (int32_t)((ulonglong)uStack_a8 >> 0x20);
      uStack_16c = 1;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_e8 = CONCAT44(uStack_17c,iVar7);
      uStack_e0 = CONCAT44(uStack_174,uStack_178);
      uStack_d8 = uStack_170;
      uStack_d4 = 1;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0x3f800000;
      uStack_b8 = CONCAT44(uStack_150._4_4_,*(int32_t *)(lVar14 + 0x36e8 + param_1));
      iStack_180 = iVar7;
      if (-1 < iVar7) {
        FUN_180545140(&system_data_6110,&uStack_e8,0,0);
      }
    }
    (**(code **)(*plVar9 + 0x38))(plVar9);
  }
  if (plStack_1a8 != (longlong *)0x0) {
    (**(code **)(*plStack_1a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_90 ^ (ulonglong)auStack_1c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




