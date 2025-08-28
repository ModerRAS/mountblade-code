#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part549.c - 10 个函数

// 函数: void FUN_18056d560(longlong param_1)
void FUN_18056d560(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  
  FUN_18056f5d0();
  puVar1 = (uint64_t *)(param_1 + 0x730);
  *(uint64_t *)(param_1 + 0x46c38) = *(uint64_t *)(param_1 + 0x46c30);
  lVar2 = 36000;
  *(uint64_t *)(param_1 + 0x46c58) = *(uint64_t *)(param_1 + 0x46c50);
  *(uint64_t *)(param_1 + 0x71c) = render_system_config;
  *(uint64_t *)(param_1 + 0x724) = render_system_config;
  *(int32_t *)(param_1 + 0x72c) = 0;
  do {
    *puVar1 = render_system_config;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(uint64_t *)(param_1 + 0x46c80) = 0;
  *(uint64_t *)(param_1 + 0x46ca8) = 0;
  *(uint64_t *)(param_1 + 0x46c88) = 0;
  *(uint64_t *)(param_1 + 0x46cb0) = 0;
  *(uint64_t *)(param_1 + 0x46c90) = 0;
  *(uint64_t *)(param_1 + 0x46cb8) = 0;
  *(uint64_t *)(param_1 + 0x46c98) = 0;
  *(uint64_t *)(param_1 + 0x46cc0) = 0;
  *(uint64_t *)(param_1 + 0x46ca0) = 0;
  *(uint64_t *)(param_1 + 0x46cc8) = 0;
  *(uint64_t *)(param_1 + 0x6b8) = render_system_config;
  *(uint64_t *)(param_1 + 0x700) = 0;
  *(int32_t *)(param_1 + 0x718) = 0xffffffff;
  *(uint64_t *)(param_1 + 0x4c490) = *(uint64_t *)(param_1 + 0x4c488);
  *(uint64_t *)(param_1 + 0x46c70) = 0xbff0000000000000;
  *(uint64_t *)(param_1 + 0x46c78) = 0;
  *(uint64_t *)(param_1 + 0x708) = 0;
  return;
}





// 函数: void FUN_18056d670(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18056d670(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  atan2f(0x80000000,0x3f800000,param_3,param_4,0xfffffffffffffffe);
  *(uint64_t *)(param_1 + 0x60c) = 0;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(param_1 + 0x5e0),0,(longlong)(*(int *)(param_1 + 0x5d8) >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18056de00(longlong param_1)
void FUN_18056de00(longlong param_1)

{
  double dVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  double dVar7;
  int32_t auStackX_8 [2];
  longlong lStackX_10;
  
  do {
    puVar5 = *(ulonglong **)(param_1 + 0x618);
    uVar3 = *puVar5;
    if ((uVar3 == puVar5[1]) && (puVar5[1] = puVar5[8], uVar3 == puVar5[8])) {
      if (puVar5 == *(ulonglong **)(param_1 + 0x658)) {
        dVar1 = *(double *)(param_1 + 0x700);
        dVar7 = (double)FUN_180629810();
        if ((dVar1 + 120.0 < dVar7) && (system_status_flag == 1)) {
                    // WARNING: Could not recover jumptable at 0x00018056df78. Too many branches
                    // WARNING: Treating indirect jump as call
          (**(code **)(render_system_data_config + 0x130))();
          return;
        }
        return;
      }
      puVar5 = *(ulonglong **)(param_1 + 0x618);
      puVar5[1] = puVar5[8];
      uVar3 = *puVar5;
      if (uVar3 != puVar5[8]) goto LAB_18056de98;
      puVar5 = (ulonglong *)puVar5[0x10];
      uVar3 = *puVar5;
      puVar5[1] = puVar5[8];
      *(ulonglong **)(param_1 + 0x618) = puVar5;
      lVar6 = *(longlong *)(puVar5[0x11] + uVar3 * 8);
      uVar4 = puVar5[0x12];
    }
    else {
LAB_18056de98:
      lVar6 = *(longlong *)(puVar5[0x11] + uVar3 * 8);
      uVar4 = puVar5[0x12];
    }
    auStackX_8[0] = 0xff;
    *puVar5 = uVar4 & uVar3 + 1;
    *(int32_t *)(lVar6 + 0x5c4) = 0;
    cVar2 = FUN_18055f260(lVar6,auStackX_8,&unknown_var_8632_ptr);
    if ((char)auStackX_8[0] == '\0') {
      if (cVar2 != '\0') {
        FUN_18056ce10(param_1,lVar6);
      }
    }
    else if (((char)auStackX_8[0] == '\x01') && (cVar2 != '\0')) {
      cVar2 = FUN_18056e2c0(param_1,lVar6);
      if (cVar2 != '\0') {
        *(uint64_t *)(param_1 + 0x700) = *(uint64_t *)(lVar6 + 0x5a8);
      }
    }
    lStackX_10 = lVar6;
    FUN_1805603c0(param_1 + 0x668,&lStackX_10);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18056de04(longlong param_1)
void FUN_18056de04(longlong param_1)

{
  double dVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  double dVar7;
  int32_t in_stack_00000040;
  longlong in_stack_00000048;
  
  do {
    puVar5 = *(ulonglong **)(param_1 + 0x618);
    uVar3 = *puVar5;
    if ((uVar3 == puVar5[1]) && (puVar5[1] = puVar5[8], uVar3 == puVar5[8])) {
      if (puVar5 == *(ulonglong **)(param_1 + 0x658)) {
        dVar1 = *(double *)(param_1 + 0x700);
        dVar7 = (double)FUN_180629810();
        if ((dVar1 + 120.0 < dVar7) && (system_status_flag == 1)) {
                    // WARNING: Could not recover jumptable at 0x00018056df78. Too many branches
                    // WARNING: Treating indirect jump as call
          (**(code **)(render_system_data_config + 0x130))();
          return;
        }
        return;
      }
      puVar5 = *(ulonglong **)(param_1 + 0x618);
      puVar5[1] = puVar5[8];
      uVar3 = *puVar5;
      if (uVar3 != puVar5[8]) goto LAB_18056de98;
      puVar5 = (ulonglong *)puVar5[0x10];
      uVar3 = *puVar5;
      puVar5[1] = puVar5[8];
      *(ulonglong **)(param_1 + 0x618) = puVar5;
      lVar6 = *(longlong *)(puVar5[0x11] + uVar3 * 8);
      uVar4 = puVar5[0x12];
    }
    else {
LAB_18056de98:
      lVar6 = *(longlong *)(puVar5[0x11] + uVar3 * 8);
      uVar4 = puVar5[0x12];
    }
    in_stack_00000040 = 0xff;
    *puVar5 = uVar4 & uVar3 + 1;
    *(int32_t *)(lVar6 + 0x5c4) = 0;
    cVar2 = FUN_18055f260(lVar6,&stack0x00000040,&unknown_var_8632_ptr);
    if ((char)in_stack_00000040 == '\0') {
      if (cVar2 != '\0') {
        FUN_18056ce10(param_1,lVar6);
      }
    }
    else if (((char)in_stack_00000040 == '\x01') && (cVar2 != '\0')) {
      cVar2 = FUN_18056e2c0(param_1,lVar6);
      if (cVar2 != '\0') {
        *(uint64_t *)(param_1 + 0x700) = *(uint64_t *)(lVar6 + 0x5a8);
      }
    }
    in_stack_00000048 = lVar6;
    FUN_1805603c0(param_1 + 0x668,&stack0x00000048);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18056df64(void)
void FUN_18056df64(void)

{
  if (system_status_flag == 1) {
                    // WARNING: Could not recover jumptable at 0x00018056df78. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(render_system_data_config + 0x130))();
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18056df90(longlong param_1,float param_2)
void FUN_18056df90(longlong param_1,float param_2)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  uint uStack_50;
  int iStack_4c;
  
  bVar6 = false;
  uStack_50 = 0;
  if (((render_system_config != 0) && (-1 < *(int *)(render_system_config + 0x98d930))) &&
     (lVar5 = render_system_config + 0x30a0 + (longlong)*(int *)(render_system_config + 0x98d930) * 0xa60,
     lVar5 != 0)) {
    uStack_50 = (uint)*(uint64_t *)(lVar5 + 0x4c4);
    if (-1 < *(int *)(lVar5 + 0x564)) {
      uStack_50 = uStack_50 |
                  *(uint *)((longlong)*(int *)(lVar5 + 0x564) * 0xa60 + 0x3564 + render_system_config) &
                  0x7800c;
    }
    iStack_4c = (int)((ulonglong)*(uint64_t *)(lVar5 + 0x4c4) >> 0x20);
    bVar6 = *(int *)(param_1 + 0x6ec) != iStack_4c;
  }
  dVar7 = *(double *)(param_1 + 0x708) - (double)param_2;
  *(double *)(param_1 + 0x708) = dVar7;
  if (dVar7 < -0.06666666666666667) {
    dVar7 = -0.06666666666666667;
    *(uint64_t *)(param_1 + 0x708) = 0xbfb1111111111111;
  }
  if (uStack_50 == 0) {
    if ((!bVar6) && (0.0 < dVar7)) {
      return;
    }
  }
  else {
    iVar2 = _Mtx_lock(param_1 + 0x4c4e8);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uVar3 = FUN_1805fa9a0(param_1 + 290000,0x28);
    cVar1 = FUN_180645c10(uVar3,0,&unknown_var_6432_ptr);
    if ((cVar1 != '\0') && (cVar1 = FUN_180645c10(uVar3,3,&unknown_var_6464_ptr), cVar1 != '\0')) {
      FUN_180645ce0(uVar3,uStack_50,&unknown_var_6448_ptr);
    }
    FUN_1805faa20(param_1 + 290000);
    iVar2 = _Mtx_unlock(param_1 + 0x4c4e8);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  *(uint64_t *)(param_1 + 0x4b818) = 0;
  *(int32_t *)(param_1 + 0x4b820) = 0x348;
  if (0.0 < *(double *)(param_1 + 0x708)) {
    dVar7 = 0.016666666666666666;
  }
  else {
    dVar7 = *(double *)(param_1 + 0x708) + 0.016666666666666666;
  }
  *(double *)(param_1 + 0x708) = dVar7;
  FUN_18056d670(param_1);
  lVar4 = *(longlong *)(param_1 + 0x4b880) - *(longlong *)(param_1 + 0x4b878);
  lVar5 = lVar4 >> 0x3f;
  if (lVar4 / 0x5d8 + lVar5 == lVar5) {
    return;
  }
  *(uint64_t *)(param_1 + 0x60c) = 0;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(param_1 + 0x5e0),0,(longlong)(*(int *)(param_1 + 0x5d8) >> 3));
}





// 函数: void FUN_18056e187(void)
void FUN_18056e187(void)

{
  longlong unaff_RDI;
  uint64_t unaff_R13;
  
  *(uint64_t *)(unaff_RDI + 0x60c) = unaff_R13;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(unaff_RDI + 0x5e0),0,(longlong)(*(int *)(unaff_RDI + 0x5d8) >> 3));
}





// 函数: void FUN_18056e28d(void)
void FUN_18056e28d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18056e2c0(uint64_t param_1,uint64_t param_2)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  uint64_t uVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  uint auStackX_18 [2];
  
  iVar6 = 0;
  auStackX_18[0] = 0;
  cVar3 = FUN_18055f260(param_2,auStackX_18,&unknown_var_6336_ptr);
  uVar4 = FUN_180569670(param_2);
  uVar2 = auStackX_18[0];
  if (cVar3 == '\0') {
    return uVar4 & 0xffffffffffffff00;
  }
  bVar8 = true;
LAB_18056e330:
  do {
    if ((int)uVar2 <= iVar6) goto LAB_18056e445;
    if (!bVar8) goto FUN_18056e468;
    auStackX_18[0] = 0;
    uVar5 = FUN_18055f260(param_2,auStackX_18,&unknown_var_6288_ptr);
    bVar8 = (char)uVar5 != '\0';
    uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),bVar8);
    if (auStackX_18[0] == 0) {
      if (!bVar8) {
FUN_18056e468:
        return uVar4 & 0xffffffffffffff00;
      }
      auStackX_18[0] = 0xffff;
      uVar4 = FUN_18055f260(param_2,auStackX_18,&unknown_var_3472_ptr);
      if ((char)uVar4 == '\0') goto FUN_18056e468;
      uVar4 = (ulonglong)auStackX_18[0];
      bVar8 = true;
      if ((ushort)auStackX_18[0] < 0x17) {
        uVar7 = (ulonglong)(auStackX_18[0] & 0xffff);
        FUN_1800623b0(system_message_context,0,0x40000000000,0xc,&unknown_var_8832_ptr,
                      *(uint64_t *)(&unknown_var_8272_ptr + uVar7 * 8));
        uVar4 = 0x180c95bf8;
        lVar1 = *(longlong *)(uVar7 * 0x10 + 0x180c95bf8);
        if ((lVar1 == 0) && (*(longlong *)(uVar7 * 0x10 + 0x180c95c00) == 0)) {
          iVar6 = iVar6 + 1;
        }
        else {
          uVar4 = (**(code **)(uVar7 * 0x10 + 0x180c95c00))(lVar1,param_1,param_2);
          iVar6 = iVar6 + 1;
        }
        goto LAB_18056e330;
      }
      bVar8 = false;
    }
    else {
      if (!bVar8) goto FUN_18056e468;
      render_system_config = param_2;
      uVar4 = (**(code **)(render_system_data_config + 0x138))();
      bVar8 = (char)uVar4 != '\0';
      render_system_config = 0;
    }
    iVar6 = iVar6 + 1;
    if (bVar8 == false) {
LAB_18056e445:
      return (ulonglong)bVar8;
    }
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00018056e415)
// WARNING: Removing unreachable block (ram,0x00018056e419)
// WARNING: Removing unreachable block (ram,0x00018056e3a9)
// WARNING: Removing unreachable block (ram,0x00018056e3f1)
// WARNING: Removing unreachable block (ram,0x00018056e3ff)
// WARNING: Removing unreachable block (ram,0x00018056e3f8)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18056e302(void)

{
  byte bVar1;
  uint64_t uVar2;
  ulonglong uVar3;
  int unaff_R12D;
  bool bVar4;
  int in_stack_00000070;
  
  bVar1 = 1;
  if (unaff_R12D < in_stack_00000070) {
    uVar2 = FUN_18055f260();
    bVar4 = (char)uVar2 != '\0';
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),bVar4);
    if ((!bVar4) || (uVar3 = FUN_18055f260(), (char)uVar3 == '\0')) {
      return uVar3 & 0xffffffffffffff00;
    }
    bVar1 = 0;
  }
  return (ulonglong)bVar1;
}



int8_t FUN_18056e468(void)

{
  return 0;
}



int8_t FUN_18056e46c(void)

{
  return 0;
}





// 函数: void FUN_18056e490(longlong param_1)
void FUN_18056e490(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  
  iVar2 = _Mtx_lock(param_1 + 0x4c4e8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  uVar3 = FUN_1805fa9a0(param_1 + 290000,0x28);
  cVar1 = FUN_180645c10(uVar3,0,&unknown_var_6432_ptr);
  if (cVar1 != '\0') {
    FUN_180645c10(uVar3,2,&unknown_var_6464_ptr);
  }
  FUN_1805faa20(param_1 + 290000);
  iVar2 = _Mtx_unlock(param_1 + 0x4c4e8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18056e530(longlong param_1,longlong param_2)
void FUN_18056e530(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int8_t auStack_658 [32];
  int8_t uStack_638;
  uint64_t uStack_630;
  uint64_t uStack_628;
  uint64_t uStack_620;
  int8_t auStack_618 [1416];
  uint64_t uStack_90;
  int32_t uStack_88;
  int8_t *puStack_80;
  ulonglong uStack_78;
  uint64_t uStack_58;
  int32_t uStack_50;
  ulonglong uStack_48;
  
  uStack_620 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_658;
  uStack_630 = CONCAT44(uStack_630._4_4_,0xff);
  cVar7 = FUN_18055f260(param_2,&uStack_630,&unknown_var_8632_ptr);
  if ((char)uStack_630 == '\0') {
    uStack_630 = CONCAT44(uStack_630._4_4_,0xffffffff);
    if ((cVar7 == '\0') ||
       (cVar7 = FUN_18055f260(param_2,&uStack_630,&unknown_var_8616_ptr), cVar7 == '\0')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((*(int *)(param_1 + 0x718) == (int)uStack_630) || (*(int *)(param_1 + 0x718) == -1)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((bVar6) && (bVar5)) {
      uVar16 = 0;
      uStack_628 = 0;
      cVar7 = FUN_180646b50(param_2,*(int32_t *)(param_1 + 0x71c),&uStack_628);
      iVar14 = 0;
      uVar9 = uVar16;
      if (cVar7 == '\0') {
LAB_18056e64f:
        iVar8 = (int)uVar9;
        bVar6 = false;
      }
      else {
        uStack_630 = 0;
        cVar7 = FUN_180646b50(param_2,*(int32_t *)(param_1 + 0x6b8),&uStack_630);
        iVar8 = (int)(uStack_630 >> 0x20);
        uVar9 = uStack_630 >> 0x20;
        iVar14 = (int)uStack_630;
        if (cVar7 == '\0') goto LAB_18056e64f;
        bVar6 = true;
      }
      plVar1 = (longlong *)(param_1 + 0x46c50);
      piVar10 = (int *)*plVar1;
      uVar17 = *(longlong *)(param_1 + 0x46c58) - (longlong)piVar10 >> 3;
      uVar9 = uVar16;
      uVar13 = 0xffffffff;
      if (uVar17 != 0) {
        do {
          uVar12 = uVar9;
          iVar11 = (int)uVar13;
          iVar2 = *piVar10;
          if ((((iVar14 != iVar2) || (iVar8 != piVar10[1])) && (iVar14 <= iVar2)) &&
             ((iVar14 != iVar2 || (iVar8 <= piVar10[1])))) break;
          iVar11 = (int)uVar12;
          piVar10 = piVar10 + 2;
          uVar9 = (ulonglong)(iVar11 + 1U);
          uVar13 = uVar12;
        } while ((ulonglong)(longlong)(int)(iVar11 + 1U) < uVar17);
        if (-1 < iVar11) {
          lVar3 = *(longlong *)(param_1 + 0x46c30);
          FUN_18056eb80((longlong *)(param_1 + 0x46c30),lVar3,lVar3 + 8 + (longlong)iVar11 * 8);
          FUN_18056eb80(plVar1,*plVar1,*plVar1 + 8 + (longlong)iVar11 * 8);
        }
      }
      bVar5 = false;
      uStack_638 = 0;
      iVar14 = *(int *)(param_1 + 0x71c);
      if ((iVar14 < (int)uStack_628) ||
         (((int)uStack_628 == iVar14 && (*(int *)(param_1 + 0x720) < uStack_628._4_4_)))) {
        *(uint64_t *)(param_1 + 0x71c) = uStack_628;
LAB_18056e76f:
        bVar5 = true;
        uStack_638 = 1;
      }
      else if (((int)uStack_628 < iVar14) ||
              (((int)uStack_628 == iVar14 && (uStack_628._4_4_ < *(int *)(param_1 + 0x720))))) {
        uStack_630 = render_system_config;
        puVar15 = (ulonglong *)(param_1 + 0x730);
        uVar9 = render_system_config;
        do {
          iVar14 = (int)*puVar15;
          if ((iVar14 == (int)uStack_628) && (*(int *)((longlong)puVar15 + 4) == uStack_628._4_4_))
          goto LAB_18056e777;
          if (((int)uVar9 < iVar14) ||
             ((iVar14 == (int)uVar9 &&
              (bVar4 = uStack_630._4_4_ < *(int *)((longlong)puVar15 + 4), bVar4)))) {
            uVar9 = *puVar15;
            uStack_630 = uVar9;
          }
          uVar16 = uVar16 + 1;
          puVar15 = puVar15 + 1;
        } while ((longlong)uVar16 < 36000);
        if (((int)uVar9 < (int)uStack_628) ||
           (((int)uStack_628 == (int)uVar9 && ((int)(uVar9 >> 0x20) < uStack_628._4_4_))))
        goto LAB_18056e76f;
      }
LAB_18056e777:
      if ((bVar6) && (bVar5)) {
        *(uint64_t *)(param_1 + 0x730 + (longlong)*(int *)(param_1 + 0x72c) * 8) = uStack_628;
        *(int *)(param_1 + 0x72c) = (*(int *)(param_1 + 0x72c) + 1) % 36000;
        FUN_18005ea90((longlong *)(param_1 + 0x46c30),&uStack_628);
        iVar8 = (int)(*(longlong *)(param_1 + 0x46c38) - *(longlong *)(param_1 + 0x46c30) >> 3);
        iVar14 = 0xff;
        if (iVar8 < 0xff) {
          iVar14 = iVar8;
        }
        uStack_630 = CONCAT44(uStack_630._4_4_,iVar14);
        uStack_90 = 0;
        uStack_78 = render_system_config;
        uStack_58 = 0;
        puStack_80 = auStack_618;
        uStack_88 = 0x2c40;
        uStack_50 = 0;
                    // WARNING: Subroutine does not return
        memset(auStack_618,0,0x588);
      }
      goto LAB_18056ea22;
    }
  }
  *(int32_t *)(param_2 + 0x5c4) = 0;
LAB_18056ea22:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_658);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



