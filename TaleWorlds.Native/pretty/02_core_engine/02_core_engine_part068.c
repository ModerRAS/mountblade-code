#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part068.c - 核心引擎缓冲区管理函数
// 本文件包含缓冲区操作、内存管理和流处理相关函数

/**
 * 向缓冲区追加字符
 * @param buffer_ptr 缓冲区指针
 * @param char_value 要追加的字符值
 */
void append_char_to_buffer(uint64_t *buffer_ptr, int8_t char_value)

{
  ulonglong current_pos;
  ulonglong buffer_capacity;
  ulonglong new_capacity;
  code *error_handler;
  uint64_t new_buffer;
  ulonglong capacity_check;
  ulonglong final_capacity;
  
  current_pos = buffer_ptr[2];
  buffer_capacity = buffer_ptr[3];
  if (current_pos < buffer_capacity) {
    buffer_ptr[2] = current_pos + 1;
    if (0xf < buffer_capacity) {
      buffer_ptr = (uint64_t *)*buffer_ptr;
    }
    *(int8_t *)((longlong)buffer_ptr + current_pos) = char_value;
    *(int8_t *)((longlong)buffer_ptr + current_pos + 1) = 0;
    return;
  }
  if (current_pos != 0x7fffffffffffffff) {
    new_capacity = current_pos + 1 | 0xf;
    final_capacity = 0x7fffffffffffffff;
    if (((new_capacity < 0x8000000000000000) && 
         (buffer_capacity <= 0x7fffffffffffffff - (buffer_capacity >> 1))) &&
        (capacity_check = (buffer_capacity >> 1) + buffer_capacity, 
         final_capacity = new_capacity, new_capacity < capacity_check)) {
      final_capacity = capacity_check;
    }
    new_buffer = allocate_memory(final_capacity + 1);
    buffer_ptr[2] = current_pos + 1;
    buffer_ptr[3] = final_capacity;
    if (0xf < buffer_capacity) {
      // 警告：子函数不返回
      memcpy(new_buffer, *buffer_ptr, current_pos);
    }
    // 警告：子函数不返回
    memcpy(new_buffer, buffer_ptr, current_pos);
  }
  handle_memory_error();
  error_handler = (code *)swi(3);
  (*error_handler)();
  return;
}





/**
 * 处理缓冲区扩容（版本1）
 */
void expand_buffer_version1(void)

{
  ulonglong capacity_calc;
  code *error_handler;
  uint64_t new_buffer;
  ulonglong size_check;
  uint64_t *buffer_ptr;
  ulonglong buffer_capacity;
  longlong current_pos;
  ulonglong new_capacity;
  
  if (unaff_RSI == 0x7fffffffffffffff) {
    FUN_1800670f0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = unaff_RSI + 1U | 0xf;
  uVar5 = 0x7fffffffffffffff;
  if (((uVar4 < 0x8000000000000000) && (unaff_RBP <= 0x7fffffffffffffff - (unaff_RBP >> 1))) &&
     (uVar1 = (unaff_RBP >> 1) + unaff_RBP, uVar5 = uVar4, uVar4 < uVar1)) {
    uVar5 = uVar1;
  }
  uVar3 = FUN_180067110(uVar5 + 1);
  unaff_RBX[2] = unaff_RSI + 1U;
  unaff_RBX[3] = uVar5;
  if (0xf < unaff_RBP) {
                    // WARNING: Subroutine does not return
    memcpy(uVar3,*unaff_RBX);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar3);
}





// 函数: void FUN_18009f088(void)
void FUN_18009f088(void)

{
  ulonglong uVar1;
  uint64_t uVar2;
  ulonglong uVar3;
  uint64_t *unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  
  uVar3 = unaff_RSI + 1U | 0xf;
  if (((uVar3 <= unaff_RDI) && (unaff_RBP <= unaff_RDI - (unaff_RBP >> 1))) &&
     (uVar1 = (unaff_RBP >> 1) + unaff_RBP, unaff_RDI = uVar3, uVar3 < uVar1)) {
    unaff_RDI = uVar1;
  }
  uVar2 = FUN_180067110(unaff_RDI + 1);
  unaff_RBX[2] = unaff_RSI + 1U;
  unaff_RBX[3] = unaff_RDI;
  if (0xf < unaff_RBP) {
                    // WARNING: Subroutine does not return
    memcpy(uVar2,*unaff_RBX);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar2);
}





// 函数: void FUN_18009f0e6(uint64_t param_1)
void FUN_18009f0e6(uint64_t param_1)

{
  uint64_t *unaff_RBX;
  
                    // WARNING: Subroutine does not return
  memcpy(param_1,*unaff_RBX);
}





// 函数: void FUN_18009f15e(void)
void FUN_18009f15e(void)

{
  code *pcVar1;
  
  FUN_1800670f0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18009f170(longlong param_1)
void FUN_18009f170(longlong param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  int8_t auStack_98 [32];
  longlong *plStack_78;
  int8_t *puStack_70;
  int8_t *puStack_68;
  int8_t **ppuStack_60;
  int8_t uStack_58;
  int8_t auStack_57 [7];
  longlong lStack_50;
  int8_t *puStack_48;
  uint64_t uStack_40;
  int8_t uStack_38;
  uint8_t uStack_37;
  ulonglong uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  uVar6 = **(ulonglong **)(param_1 + 0x38);
  if ((uVar6 == 0) || ((longlong)**(int **)(param_1 + 0x50) + uVar6 <= uVar6)) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        uVar1 = *(uint64_t *)(param_1 + 0x90);
        lVar5 = *(longlong *)(param_1 + 0x88);
        **(longlong **)(param_1 + 0x18) = lVar5;
        **(longlong **)(param_1 + 0x38) = lVar5;
        **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar5;
      }
      if (*(longlong *)(param_1 + 0x68) == 0) {
        fgetc(*(uint64_t *)(param_1 + 0x80));
      }
      else {
        uStack_28 = 0;
        uStack_20 = 0xf;
        uStack_38 = 0;
        uVar3 = fgetc(*(uint64_t *)(param_1 + 0x80));
        if (uVar3 != 0xffffffff) {
          FUN_18009f020(&uStack_38,uVar3 & 0xff);
          puVar7 = &uStack_38;
          if (0xf < uStack_20) {
            puVar7 = (int8_t *)CONCAT71(uStack_37,uStack_38);
          }
          puVar8 = &uStack_38;
          if (0xf < uStack_20) {
            puVar8 = (int8_t *)CONCAT71(uStack_37,uStack_38);
          }
          ppuStack_60 = &puStack_48;
          puStack_68 = auStack_57;
          puStack_70 = &uStack_58;
          plStack_78 = &lStack_50;
          iVar4 = _in___codecvt_DDU_Mbstatet___std__QEBAHAEAU_Mbstatet__PEBD1AEAPEBDPEAD3AEAPEAD_Z
                            (*(uint64_t *)(param_1 + 0x68),param_1 + 0x74,puVar8,
                             puVar7 + uStack_28);
          if ((-1 < iVar4) && (iVar4 < 2)) {
            if (puStack_48 == &uStack_58) {
              puVar7 = &uStack_38;
              if (0xf < uStack_20) {
                puVar7 = (int8_t *)CONCAT71(uStack_37,uStack_38);
              }
              uVar6 = lStack_50 - (longlong)puVar7;
              if (uStack_28 < (ulonglong)(lStack_50 - (longlong)puVar7)) {
                uVar6 = uStack_28;
              }
              puVar7 = &uStack_38;
              if (0xf < uStack_20) {
                puVar7 = (int8_t *)CONCAT71(uStack_37,uStack_38);
              }
              uStack_28 = uStack_28 - uVar6;
                    // WARNING: Subroutine does not return
              memmove(puVar7,puVar7 + uVar6,uStack_28 + 1);
            }
            puVar7 = &uStack_38;
            if (0xf < uStack_20) {
              puVar7 = (int8_t *)CONCAT71(uStack_37,uStack_38);
            }
            puVar7 = puVar7 + (uStack_28 - lStack_50);
            while (0 < (longlong)puVar7) {
              puVar7 = puVar7 + -1;
              ungetc((int)(char)puVar7[lStack_50],*(uint64_t *)(param_1 + 0x80));
            }
          }
        }
        if (0xf < uStack_20) {
          uVar6 = uStack_20 + 1;
          lVar2 = CONCAT71(uStack_37,uStack_38);
          lVar5 = lVar2;
          if (0xfff < uVar6) {
            uVar6 = uStack_20 + 0x28;
            lVar5 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar5) - 8U) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          free(lVar5,uVar6);
        }
        uStack_28 = 0;
        uStack_20 = 0xf;
        uStack_38 = 0;
      }
    }
  }
  else {
    __Gninc___basic_streambuf_DU__char_traits_D_std___std__IEAAPEADXZ(param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_98);
}



longlong FUN_18009f430(longlong param_1,uint64_t param_2,longlong param_3)

{
  uint64_t uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    // WARNING: Could not recover jumptable at 0x00018009f460. Too many branches
                    // WARNING: Treating indirect jump as call
    lVar2 = _xsgetn___basic_streambuf_DU__char_traits_D_std___std__MEAA_JPEAD_J_Z();
    return lVar2;
  }
  if (**(longlong **)(param_1 + 0x38) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(param_1 + 0x50);
  }
  lVar2 = param_3;
  if (0 < param_3) {
    if (0 < iVar3) {
      lVar2 = (longlong)iVar3;
      if (param_3 < iVar3) {
        lVar2 = param_3;
      }
                    // WARNING: Subroutine does not return
      memcpy(param_2,**(longlong **)(param_1 + 0x38),lVar2);
    }
    if ((0 < param_3) && (lVar4 = *(longlong *)(param_1 + 0x80), lVar4 != 0)) {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        lVar2 = *(longlong *)(param_1 + 0x88);
        uVar1 = *(uint64_t *)(param_1 + 0x90);
        **(longlong **)(param_1 + 0x18) = lVar2;
        **(longlong **)(param_1 + 0x38) = lVar2;
        **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar2;
        lVar4 = *(longlong *)(param_1 + 0x80);
      }
      lVar2 = fread(param_2,1,param_3,lVar4);
      lVar2 = param_3 - lVar2;
    }
  }
  return param_3 - lVar2;
}



longlong FUN_18009f540(longlong param_1,uint64_t param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    // WARNING: Could not recover jumptable at 0x00018009f570. Too many branches
                    // WARNING: Treating indirect jump as call
    lVar1 = _xsputn___basic_streambuf_DU__char_traits_D_std___std__MEAA_JPEBD_J_Z();
    return lVar1;
  }
  if (**(longlong **)(param_1 + 0x40) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x58);
  }
  lVar1 = param_3;
  if (0 < param_3) {
    if (0 < iVar2) {
      lVar1 = (longlong)iVar2;
      if (param_3 < iVar2) {
        lVar1 = param_3;
      }
                    // WARNING: Subroutine does not return
      memcpy(**(longlong **)(param_1 + 0x40),param_2,lVar1);
    }
    if ((0 < param_3) && (*(longlong *)(param_1 + 0x80) != 0)) {
      lVar1 = fwrite(param_2,1,param_3);
      lVar1 = param_3 - lVar1;
    }
  }
  return param_3 - lVar1;
}



uint64_t * FUN_18009f620(longlong param_1,uint64_t *param_2,longlong param_3,int param_4)

{
  uint64_t uVar1;
  char cVar2;
  int iVar3;
  uint64_t uStackX_8;
  
  if (((**(longlong **)(param_1 + 0x38) == param_1 + 0x70) && (param_4 == 1)) &&
     (*(longlong *)(param_1 + 0x68) == 0)) {
    param_3 = param_3 + -1;
  }
  if ((((*(longlong *)(param_1 + 0x80) != 0) && (cVar2 = FUN_1800a1850(), cVar2 != '\0')) &&
      (((param_3 == 0 && (param_4 == 1)) ||
       (iVar3 = _fseeki64(*(uint64_t *)(param_1 + 0x80),param_3,param_4), iVar3 == 0)))) &&
     (iVar3 = fgetpos(*(uint64_t *)(param_1 + 0x80),&uStackX_8), iVar3 == 0)) {
    func_0x0001800a1680(param_1);
    uVar1 = *(uint64_t *)(param_1 + 0x74);
    *param_2 = uStackX_8;
    param_2[1] = 0;
    param_2[2] = uVar1;
    return param_2;
  }
  *param_2 = 0xffffffffffffffff;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



longlong * FUN_18009f700(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint64_t uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lStackX_8;
  
  lStackX_8 = param_3[1] + *param_3;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar2 = FUN_1800a1850();
    if (cVar2 != '\0') {
      iVar3 = fsetpos(*(uint64_t *)(param_1 + 0x80),&lStackX_8);
      if (iVar3 == 0) {
        lVar4 = param_3[2];
        *(longlong *)(param_1 + 0x74) = lVar4;
        if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
          lVar4 = *(longlong *)(param_1 + 0x88);
          uVar1 = *(uint64_t *)(param_1 + 0x90);
          **(longlong **)(param_1 + 0x18) = lVar4;
          **(longlong **)(param_1 + 0x38) = lVar4;
          **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar4;
          lVar4 = *(longlong *)(param_1 + 0x74);
        }
        *param_2 = lStackX_8;
        param_2[1] = 0;
        param_2[2] = lVar4;
        return param_2;
      }
    }
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



longlong FUN_18009f7e0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int32_t uVar2;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if ((param_2 == 0) && (param_3 == 0)) {
      uVar2 = 4;
    }
    else {
      uVar2 = 0;
    }
    iVar1 = setvbuf(*(longlong *)(param_1 + 0x80),param_2,uVar2);
    if (iVar1 == 0) {
      FUN_1800a1920(param_1,*(uint64_t *)(param_1 + 0x80),1);
      return param_1;
    }
  }
  return 0;
}



uint64_t FUN_18009f840(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    iVar1 = FUN_1800a16b0(param_1,0xffffffff);
    if (iVar1 != -1) {
      iVar1 = fflush(*(uint64_t *)(param_1 + 0x80));
      if (iVar1 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}



uint64_t * FUN_18009f890(uint64_t *param_1)

{
  *param_1 = &unknown_var_9816_ptr;
  param_1[2] = 0;
  param_1[1] = &unknown_var_2392_ptr;
  *param_1 = &unknown_var_2416_ptr;
  return param_1;
}





// 函数: void FUN_18009f8d0(uint64_t *param_1)
void FUN_18009f8d0(uint64_t *param_1)

{
  *param_1 = &unknown_var_9816_ptr;
  __std_exception_destroy(param_1 + 1);
  return;
}



uint64_t *
FUN_18009f900(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_9816_ptr;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t * FUN_18009f960(uint64_t *param_1,longlong param_2)

{
  *param_1 = &unknown_var_9816_ptr;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = &unknown_var_2416_ptr;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_18009f9d0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  int8_t auStackX_8 [8];
  longlong *plStackX_10;
  longlong *plStackX_18;
  int8_t auStack_30 [24];
  
  __0_Lockit_std__QEAA_H_Z(auStackX_8,0,param_3,param_4,0xfffffffffffffffe);
  plStackX_10 = _DAT_180d48d30;
  uVar1 = __Bid_locale_std__QEAA_KXZ(_id___codecvt_DDU_Mbstatet___std__2V0locale_2_A_exref);
  lVar2 = *(longlong *)(param_1 + 8);
  if (uVar1 < *(ulonglong *)(lVar2 + 0x18)) {
    plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar1 * 8);
    if (plVar3 != (longlong *)0x0) goto LAB_18009fa96;
  }
  else {
    plVar3 = (longlong *)0x0;
  }
  if (*(char *)(lVar2 + 0x24) == '\0') {
LAB_18009fa43:
    if (plVar3 != (longlong *)0x0) goto LAB_18009fa96;
  }
  else {
    lVar2 = __Getgloballocale_locale_std__CAPEAV_Locimp_12_XZ();
    if (uVar1 < *(ulonglong *)(lVar2 + 0x18)) {
      plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar1 * 8);
      goto LAB_18009fa43;
    }
  }
  plVar3 = plStackX_10;
  if (plStackX_10 == (longlong *)0x0) {
    lVar2 = __Getcat___codecvt_DDU_Mbstatet___std__SA_KPEAPEBVfacet_locale_2_PEBV42__Z
                      (&plStackX_10,param_1);
    plVar3 = plStackX_10;
    if (lVar2 == -1) {
      FUN_18009f890(auStack_30);
                    // WARNING: Subroutine does not return
      _CxxThrowException(auStack_30,&unknown_var_2464_ptr);
    }
    plStackX_18 = plStackX_10;
    FUN_1808ffb84(plStackX_10);
    (**(code **)(*plVar3 + 8))(plVar3);
    _DAT_180d48d30 = plStackX_10;
    plStackX_18 = (longlong *)0x0;
    plVar3 = plStackX_10;
  }
LAB_18009fa96:
  __1_Lockit_std__QEAA_XZ(auStackX_8);
  return plVar3;
}





// 函数: void FUN_18009fad0(longlong param_1,uint64_t param_2)
void FUN_18009fad0(longlong param_1,uint64_t param_2)

{
  char cVar1;
  uint64_t uVar2;
  
  uVar2 = FUN_18009f9d0(param_2);
  cVar1 = _always_noconv_codecvt_base_std__QEBA_NXZ(uVar2);
  if (cVar1 != '\0') {
    *(uint64_t *)(param_1 + 0x68) = 0;
    return;
  }
  *(uint64_t *)(param_1 + 0x68) = uVar2;
                    // WARNING: Could not recover jumptable at 0x00018009fb19. Too many branches
                    // WARNING: Treating indirect jump as call
  __Init___basic_streambuf_DU__char_traits_D_std___std__IEAAXXZ(param_1);
  return;
}





// 函数: void FUN_18009fb20(longlong param_1)
void FUN_18009fb20(longlong param_1)

{
  uint64_t *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (uint64_t *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (uint64_t *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018009fb51. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}





// 函数: void FUN_18009fb60(uint64_t *param_1)
void FUN_18009fb60(uint64_t *param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  *param_1 = &unknown_var_2440_ptr;
  if ((param_1[0x10] != 0) && (*(uint64_t **)param_1[3] == param_1 + 0xe)) {
    uVar1 = param_1[0x12];
    uVar2 = param_1[0x11];
    *(uint64_t *)param_1[3] = uVar2;
    *(uint64_t *)param_1[7] = uVar2;
    *(int *)param_1[10] = (int)uVar1 - (int)uVar2;
  }
  if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
    FUN_1800a19c0(param_1);
  }
                    // WARNING: Could not recover jumptable at 0x00018009fbce. Too many branches
                    // WARNING: Treating indirect jump as call
  __1__basic_streambuf_DU__char_traits_D_std___std__UEAA_XZ(param_1);
  return;
}





// 函数: void FUN_18009fbe0(longlong *param_1)
void FUN_18009fbe0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 0x15;
  *(void **)((longlong)*(int *)(*param_1 + 4) + -0xa8 + (longlong)plVar1) = &unknown_var_2384_ptr;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -0xac + (longlong)plVar1) =
       *(int *)(*param_1 + 4) + -0xa8;
  FUN_18009fb60(param_1 + 1);
  __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(param_1 + 2);
                    // WARNING: Could not recover jumptable at 0x00018009fc52. Too many branches
                    // WARNING: Treating indirect jump as call
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(plVar1);
  return;
}



// WARNING: Removing unreachable block (ram,0x00018009fe3d)



// 函数: void FUN_18009fc60(longlong *param_1,longlong *param_2,uint64_t *param_3,uint param_4,uint param_5
void FUN_18009fc60(longlong *param_1,longlong *param_2,uint64_t *param_3,uint param_4,uint param_5
                  )

{
  int8_t uVar1;
  int8_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t *puVar5;
  longlong *plVar6;
  int8_t *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int8_t *puVar10;
  longlong lVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int8_t auStack_58 [32];
  
  if ((param_4 & 1) == 0) {
    lVar11 = *param_2;
    lVar3 = param_2[1];
    uStack_68 = lVar11;
    uStack_60 = lVar3;
    if (0 < (int)param_5) {
      uVar9 = (ulonglong)param_5;
      do {
        FUN_1800a0e50(lVar3,9);
        if (lVar11 != 0) {
          FUN_1800a1160(lVar3,lVar11);
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    *param_2 = lVar11;
    param_2[1] = lVar3;
  }
  lVar11 = param_2[1];
  FUN_1800a0e50(lVar11,0x3c);
  if (*param_2 != 0) {
    FUN_1800a1160(lVar11);
  }
  puVar2 = (int8_t *)*param_3;
  lVar3 = *param_2;
  lVar8 = param_2[1];
  lVar11 = 0;
  if (puVar2 == (int8_t *)0x0) {
    puVar7 = (int8_t *)0x180d48d24;
  }
  else {
    lVar11 = param_3[2];
    puVar7 = puVar2;
  }
  puVar10 = (int8_t *)0x180d48d24;
  uStack_68 = lVar3;
  uStack_60 = lVar8;
  if (puVar2 != (int8_t *)0x0) {
    puVar10 = puVar2;
  }
  while (puVar10 != puVar7 + lVar11) {
    uVar1 = *puVar10;
    puVar10 = puVar10 + 1;
    FUN_1800a0e50(lVar8,uVar1);
    if (lVar3 != 0) {
      FUN_1800a1160(lVar8,lVar3);
    }
  }
  lVar11 = 0;
  uStack_68 = *param_2;
  uStack_60 = param_2[1];
  puVar5 = (int32_t *)FUN_1800a05a0(auStack_58,&uStack_68,param_3);
  lVar3 = param_3[1];
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  *(int32_t *)param_2 = *puVar5;
  *(int32_t *)((longlong)param_2 + 4) = uVar12;
  *(int32_t *)(param_2 + 1) = uVar13;
  *(int32_t *)((longlong)param_2 + 0xc) = uVar14;
  if (((lVar3 == 0) || (param_3[3] == 0)) && (param_3[6] == 0)) {
    lVar11 = param_2[1];
    FUN_1800a0e50(lVar11,0x2f);
    lVar3 = *param_2;
    if (lVar3 != 0) {
      FUN_1800a1160(lVar11,lVar3);
    }
    FUN_1800a0e50(lVar11,0x3e);
    goto joined_r0x0001800a000b;
  }
  lVar3 = param_2[1];
  FUN_1800a0e50(lVar3,0x3e);
  lVar8 = *param_2;
  if (lVar8 != 0) {
    FUN_1800a1160(lVar3,lVar8);
  }
  lVar4 = param_3[6];
  if (lVar4 == 0) {
    lVar3 = param_3[1];
    uStack_68 = *param_2;
    uStack_60 = param_2[1];
    if (lVar3 == 0) {
      lVar11 = 0x180d48d24;
      lVar8 = 0x180d48d24;
    }
    else {
      lVar11 = param_3[3] + lVar3;
      lVar8 = 0x180d48d24;
      if (lVar3 != 0) {
        lVar8 = lVar3;
      }
    }
LAB_18009fe7d:
    puVar5 = (int32_t *)FUN_1800a0350(auStack_58,lVar8,lVar11,0,&uStack_68);
    uVar12 = puVar5[1];
    uVar13 = puVar5[2];
    uVar14 = puVar5[3];
    *(int32_t *)param_2 = *puVar5;
    *(int32_t *)((longlong)param_2 + 4) = uVar12;
    *(int32_t *)(param_2 + 1) = uVar13;
    *(int32_t *)((longlong)param_2 + 0xc) = uVar14;
  }
  else {
    if ((*(longlong *)(lVar4 + 0x58) == 0) && (*(int *)(lVar4 + 0x28) == 2)) {
      lVar3 = *(longlong *)(lVar4 + 8);
      uStack_68 = *param_2;
      uStack_60 = param_2[1];
      if (lVar3 == 0) {
        lVar8 = 0x180d48d24;
      }
      else {
        lVar11 = *(longlong *)(lVar4 + 0x18);
        lVar8 = lVar3;
      }
      lVar11 = lVar11 + lVar8;
      lVar8 = 0x180d48d24;
      if (lVar3 != 0) {
        lVar8 = lVar3;
      }
      goto LAB_18009fe7d;
    }
    if (((param_4 & 1) == 0) && (FUN_1800a0e50(lVar3,10), lVar8 != 0)) {
      FUN_1800a1160(lVar3,lVar8);
    }
    lVar11 = param_3[6];
    uVar12 = (int32_t)*param_2;
    uVar13 = *(int32_t *)((longlong)param_2 + 4);
    uStack_68 = *param_2;
    uVar14 = (int32_t)param_2[1];
    uVar15 = *(int32_t *)((longlong)param_2 + 0xc);
    uStack_60 = param_2[1];
    if (lVar11 != 0) {
      do {
        uStack_68 = CONCAT44(uVar13,uVar12);
        uStack_60 = CONCAT44(uVar15,uVar14);
        plVar6 = (longlong *)FUN_1800a1310(auStack_58,&uStack_68,lVar11,param_4,param_5 + 1);
        lVar11 = *(longlong *)(lVar11 + 0x58);
        uVar12 = (int32_t)*plVar6;
        uVar13 = *(int32_t *)((longlong)plVar6 + 4);
        uStack_68 = *plVar6;
        uVar14 = (int32_t)plVar6[1];
        uVar15 = *(int32_t *)((longlong)plVar6 + 0xc);
        uStack_60 = plVar6[1];
      } while (lVar11 != 0);
    }
    lVar3 = uStack_60;
    lVar11 = uStack_68;
    *(int32_t *)param_2 = uVar12;
    *(int32_t *)((longlong)param_2 + 4) = uVar13;
    *(int32_t *)(param_2 + 1) = uVar14;
    *(int32_t *)((longlong)param_2 + 0xc) = uVar15;
    if ((param_4 & 1) == 0) {
      if (0 < (int)param_5) {
        uVar9 = (ulonglong)param_5;
        do {
          FUN_1800a0e50(lVar3,9);
          if (lVar11 != 0) {
            FUN_1800a1160(lVar3,lVar11);
          }
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      *(int32_t *)param_2 = uVar12;
      *(int32_t *)((longlong)param_2 + 4) = uVar13;
      *(int32_t *)(param_2 + 1) = uVar14;
      *(int32_t *)((longlong)param_2 + 0xc) = uVar15;
    }
  }
  lVar11 = param_2[1];
  FUN_1800a0e50(lVar11,0x3c);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_1800a1160(lVar11,lVar3);
  }
  FUN_1800a0e50(lVar11);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar11);
  }
  puVar2 = (int8_t *)*param_3;
  lVar11 = *param_2;
  lVar3 = param_2[1];
  if (puVar2 == (int8_t *)0x0) {
    puVar7 = (int8_t *)0x180d48d24;
    lVar8 = 0;
  }
  else {
    lVar8 = param_3[2];
    puVar7 = puVar2;
  }
  puVar10 = (int8_t *)0x180d48d24;
  uStack_68 = lVar11;
  uStack_60 = lVar3;
  if (puVar2 != (int8_t *)0x0) {
    puVar10 = puVar2;
  }
  while (puVar10 != puVar7 + lVar8) {
    uVar1 = *puVar10;
    puVar10 = puVar10 + 1;
    FUN_1800a0e50(lVar3,uVar1);
    if (lVar11 != 0) {
      FUN_1800a1160(lVar3,lVar11);
    }
  }
  *param_2 = lVar11;
  param_2[1] = lVar3;
  lVar11 = param_2[1];
  FUN_1800a0e50(lVar11,0x3e);
  lVar3 = *param_2;
joined_r0x0001800a000b:
  if (lVar3 != 0) {
    FUN_1800a1160(lVar11,lVar3);
  }
  lVar11 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar11;
  return;
}



longlong *
FUN_1800a0040(longlong *param_1,longlong *param_2,longlong param_3,byte param_4,uint param_5)

{
  int8_t uVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t *puVar4;
  longlong lVar5;
  int8_t *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  int8_t *puVar9;
  
  if ((param_4 & 1) == 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    if (0 < (int)param_5) {
      uVar8 = (ulonglong)param_5;
      do {
        FUN_1800a0e50(lVar3,9);
        if (lVar2 != 0) {
          FUN_1800a1160(lVar3,lVar2);
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    *param_2 = lVar2;
    param_2[1] = lVar3;
  }
  lVar2 = param_2[1];
  FUN_1800a0e50(lVar2,0x3c);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x21);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x5b);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x43);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x44);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x41);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x54);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x41);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2);
  }
  puVar4 = *(int8_t **)(param_3 + 8);
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (puVar4 == (int8_t *)0x0) {
    puVar6 = (int8_t *)0x180d48d24;
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_3 + 0x18);
    puVar6 = puVar4;
  }
  puVar9 = (int8_t *)0x180d48d24;
  if (puVar4 != (int8_t *)0x0) {
    puVar9 = puVar4;
  }
  while (puVar9 != puVar6 + lVar7) {
    uVar1 = *puVar9;
    puVar9 = puVar9 + 1;
    FUN_1800a0e50(lVar3,uVar1);
    if (lVar2 != 0) {
      FUN_1800a1160(lVar3,lVar2);
    }
  }
  *param_2 = lVar2;
  param_2[1] = lVar3;
  lVar7 = param_2[1];
  FUN_1800a0e50(lVar7,0x5d);
  lVar5 = *param_2;
  if (lVar5 != 0) {
    FUN_1800a1160(lVar7,lVar5);
  }
  FUN_1800a0e50(lVar7,0x5d);
  if (lVar5 != 0) {
    FUN_1800a1160(lVar7,lVar5);
  }
  FUN_1800a0e50(lVar7,0x3e);
  if (lVar5 != 0) {
    FUN_1800a1160(lVar7,lVar5);
  }
  *param_1 = lVar2;
  param_1[1] = lVar3;
  return param_1;
}





