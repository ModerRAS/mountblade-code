#include "TaleWorlds.Native.Split.h"

// 03_rendering_part245.c - 13 个函数

// 函数: void FUN_180406fe0(longlong param_1)
void FUN_180406fe0(longlong param_1)

{
  int32_t uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint64_t *puVar5;
  longlong lVar6;
  uint uVar8;
  uint uVar9;
  int iVar10;
  void *puStack_50;
  uint64_t *puStack_48;
  uint uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  longlong lVar7;
  
  uStack_30 = 0x180406ff2;
  iVar3 = FUN_18084a140(*(uint64_t *)(param_1 + 0x80),0);
  if (iVar3 == 0) {
    return;
  }
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  puStack_48 = (uint64_t *)0x0;
  uStack_40 = 0;
  puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puStack_48 = 0;
  uVar1 = FUN_18064e990(puStack_48);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puStack_48 = 0x726520444f4d460a;
  *(int32_t *)(puStack_48 + 1) = 0x21726f72;
  *(int16_t *)((longlong)puStack_48 + 0xc) = 0x2820;
  *(int8_t *)((longlong)puStack_48 + 0xe) = 0;
  uStack_40 = 0xe;
  FUN_180628380(&puStack_50,iVar3);
  uVar2 = uStack_40;
  uVar8 = uStack_40 + 2;
  if (uVar8 != 0) {
    uVar9 = uStack_40 + 3;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar9 < 0x10) {
        uVar9 = 0x10;
      }
      puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar9 <= (uint)uStack_38) goto LAB_180211b66;
      puStack_48 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_48,uVar9,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211b66:
  *(int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) = 0x2029;
  *(int8_t *)((int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) + 1) = 0;
  uVar9 = uVar2 + 3;
  uStack_40 = uVar8;
  if (uVar9 != 0) {
    uVar8 = uVar2 + 4;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar8 < 0x10) {
        uVar8 = 0x10;
      }
      puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar8,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar8 <= (uint)uStack_38) goto LAB_180211be9;
      puStack_48 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_48,uVar8,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211be9:
  *(int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) = 0x22;
  lVar6 = -1;
  do {
    lVar4 = lVar6;
    lVar6 = lVar4 + 1;
  } while ((&UNK_18098bc74)[lVar4] != '\0');
  iVar10 = (int)(lVar4 + 1);
  uStack_40 = uVar9;
  if (0 < iVar10) {
    iVar10 = uVar9 + iVar10;
    if (iVar10 != 0) {
      uVar2 = iVar10 + 1;
      if (puStack_48 == (uint64_t *)0x0) {
        if ((int)uVar2 < 0x10) {
          uVar2 = 0x10;
        }
        puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar2,0x13);
        *(int8_t *)puStack_48 = 0;
      }
      else {
        if (uVar2 <= (uint)uStack_38) goto LAB_180211c85;
        puStack_48 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_48,uVar2,0x10,0x13);
      }
      uVar1 = FUN_18064e990(puStack_48);
      uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
    }
LAB_180211c85:
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((ulonglong)uStack_40 + (longlong)puStack_48),&system_buffer_ptr,
           (longlong)((int)lVar4 + 2));
  }
  uVar8 = uVar2 + 5;
  if (uVar8 != 0) {
    uVar2 = uVar2 + 6;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar2,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_38) goto LAB_180211d03;
      puStack_48 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_48,uVar2,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211d03:
  *(int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) = 0x2022;
  *(int8_t *)((int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) + 1) = 0;
  uStack_40 = uVar8;
  lVar4 = func_0x00018021a140(iVar3);
  lVar6 = -1;
  if (lVar4 != 0) {
    do {
      lVar7 = lVar6;
      lVar6 = lVar7 + 1;
    } while (*(char *)(lVar4 + lVar6) != '\0');
    if (0 < (int)lVar6) {
      iVar3 = uVar8 + (int)lVar6;
      if (iVar3 != 0) {
        uVar2 = iVar3 + 1;
        if (puStack_48 == (uint64_t *)0x0) {
          if ((int)uVar2 < 0x10) {
            uVar2 = 0x10;
          }
          puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar2,0x13);
          *(int8_t *)puStack_48 = 0;
        }
        else {
          if (uVar2 <= (uint)uStack_38) goto LAB_180211da7;
          puStack_48 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_48,uVar2,0x10,0x13);
        }
        uVar1 = FUN_18064e990(puStack_48);
        uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
      }
LAB_180211da7:
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((ulonglong)uStack_40 + (longlong)puStack_48),lVar4,
             (longlong)((int)lVar7 + 2));
    }
  }
  iVar3 = uStack_40 + 1;
  if (iVar3 != 0) {
    uVar2 = uStack_40 + 2;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar2,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_38) goto LAB_180211e24;
      puStack_48 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_48,uVar2,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211e24:
  *(int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) = 10;
  puVar5 = (uint64_t *)&system_buffer_ptr;
  if (puStack_48 != (uint64_t *)0x0) {
    puVar5 = puStack_48;
  }
  uStack_40 = iVar3;
  FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,puVar5);
  puStack_50 = &UNK_180a3c3e0;
  if (puStack_48 == (uint64_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



ulonglong FUN_180407010(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint auStackX_8 [8];
  
  iVar1 = FUN_180846a90(*(uint64_t *)(param_1 + 0x80),auStackX_8);
  uVar2 = FUN_180211a30(iVar1,&system_buffer_ptr);
  if (iVar1 == 0) {
    uVar2 = (ulonglong)auStackX_8[0];
    if ((auStackX_8[0] == 0) || (auStackX_8[0] == 3)) {
      return CONCAT71((uint7)(uint3)(auStackX_8[0] >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



ulonglong FUN_180407060(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int aiStackX_8 [8];
  
  iVar1 = FUN_180846a90(*(uint64_t *)(param_1 + 0x80),aiStackX_8);
  uVar3 = FUN_180211a30(iVar1,&system_buffer_ptr);
  if (iVar1 == 0) {
    uVar2 = aiStackX_8[0] - 2;
    uVar3 = (ulonglong)uVar2;
    if ((uVar2 & 0xfffffffd) == 0) {
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



int8_t FUN_1804070b0(longlong param_1)

{
  int8_t auStackX_8 [32];
  
  FUN_180846810(*(uint64_t *)(param_1 + 0x80),auStackX_8);
  return auStackX_8[0];
}



int8_t FUN_1804070d0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_180847f30();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



int8_t FUN_180407100(longlong param_1)

{
  int8_t auStackX_8 [32];
  
  auStackX_8[0] = 0;
  FUN_180847df0(*(uint64_t *)(param_1 + 0x78),auStackX_8);
  return auStackX_8[0];
}



float FUN_180407130(longlong param_1)

{
  int iVar1;
  int aiStackX_8 [8];
  
  aiStackX_8[0] = -1;
  iVar1 = FUN_180845ef0(*(uint64_t *)(param_1 + 0x78),aiStackX_8);
  if (iVar1 == 0) {
    return (float)aiStackX_8[0] * 0.001;
  }
  return -1.0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180407180(longlong param_1,int32_t *param_2)
void FUN_180407180(longlong param_1,int32_t *param_2)

{
  char cVar1;
  uint64_t uVar2;
  int32_t uVar3;
  int8_t auStack_68 [32];
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  uVar2 = *(uint64_t *)(param_1 + 0x80);
  cVar1 = *(char *)(param_1 + 0x70);
  uVar3 = FUN_180844f40(uVar2,&uStack_48);
  FUN_180211a30(uVar3,&system_buffer_ptr);
  if (cVar1 == '\0') {
    uStack_48 = *param_2;
    uStack_44 = param_2[2];
    uStack_40 = param_2[1];
  }
  else {
    uStack_48 = *(int32_t *)(_DAT_180c86878 + 0x1b8);
    uStack_44 = *(int32_t *)(_DAT_180c86878 + 0x1c0);
    uStack_40 = *(int32_t *)(_DAT_180c86878 + 0x1bc);
  }
  uVar3 = FUN_180849490(uVar2,&uStack_48);
  FUN_180211a30(uVar3,&system_buffer_ptr);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180407260(longlong param_1,int32_t *param_2)
void FUN_180407260(longlong param_1,int32_t *param_2)

{
  uint64_t uVar1;
  int32_t uVar2;
  int8_t auStack_68 [32];
  int8_t auStack_48 [24];
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  uVar1 = *(uint64_t *)(param_1 + 0x80);
  uVar2 = FUN_180844f40(uVar1,auStack_48);
  FUN_180211a30(uVar2,&system_buffer_ptr);
  uStack_30 = *param_2;
  uStack_2c = param_2[2];
  uStack_28 = param_2[1];
  uStack_20 = 0x3f800000;
  uStack_24 = 0;
  uStack_1c = 0;
  uVar2 = FUN_180849490(uVar1,auStack_48);
  FUN_180211a30(uVar2,&system_buffer_ptr);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180407320(longlong param_1,int32_t *param_2)
void FUN_180407320(longlong param_1,int32_t *param_2)

{
  uint64_t uVar1;
  int32_t uVar2;
  int8_t auStack_68 [32];
  int8_t auStack_48 [12];
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  uVar1 = *(uint64_t *)(param_1 + 0x80);
  uVar2 = FUN_180844f40(uVar1,auStack_48);
  FUN_180211a30(uVar2,&system_buffer_ptr);
  uStack_3c = *param_2;
  uStack_38 = param_2[2];
  uStack_34 = param_2[1];
  uVar2 = FUN_180849490(uVar1,auStack_48);
  FUN_180211a30(uVar2,&system_buffer_ptr);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
}



float FUN_1804073c0(longlong param_1)

{
  int aiStackX_8 [8];
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_180846e90(*(longlong *)(param_1 + 0x80),aiStackX_8);
    return (float)aiStackX_8[0] * 0.001;
  }
  return 0.0;
}



int32_t * FUN_180407420(longlong param_1,int32_t *param_2)

{
  longlong lVar1;
  int iVar2;
  int32_t auStackX_8 [2];
  
  *param_2 = 0xbf800000;
  lVar1 = *(longlong *)(param_1 + 0x80);
  param_2[1] = 0xbf800000;
  param_2[2] = 0;
  param_2[3] = 0x3f800000;
  if (lVar1 != 0) {
    iVar2 = FUN_180846bc0(lVar1,3,auStackX_8);
    if (iVar2 == 0) {
      *param_2 = auStackX_8[0];
    }
    iVar2 = FUN_180846bc0(*(uint64_t *)(param_1 + 0x80),4,auStackX_8);
    if (iVar2 == 0) {
      param_2[1] = auStackX_8[0];
      return param_2;
    }
  }
  return param_2;
}



int32_t * FUN_1804074c0(longlong param_1,int32_t *param_2)

{
  longlong lVar1;
  int iVar2;
  int32_t auStackX_8 [2];
  int32_t auStackX_10 [6];
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  *param_2 = 0xbf800000;
  param_2[1] = 0xbf800000;
  param_2[2] = 0;
  param_2[3] = 0x3f800000;
  if (lVar1 != 0) {
    iVar2 = FUN_180846050(lVar1,auStackX_8,auStackX_10);
    if (iVar2 == 0) {
      *param_2 = auStackX_8[0];
      param_2[1] = auStackX_10[0];
      return param_2;
    }
  }
  return param_2;
}



int8_t FUN_180407530(longlong param_1)

{
  int8_t auStackX_8 [32];
  
  auStackX_8[0] = 0;
  FUN_180847890(*(uint64_t *)(param_1 + 0x78),auStackX_8);
  return auStackX_8[0];
}





// 函数: void FUN_180407560(longlong param_1,int32_t *param_2)
void FUN_180407560(longlong param_1,int32_t *param_2)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_18084a3d0(*(longlong *)(param_1 + 0x80),3,*param_2);
    FUN_18084a3d0(*(uint64_t *)(param_1 + 0x80),4,param_2[1]);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804075b0(int32_t *param_1,uint64_t param_2)
void FUN_1804075b0(int32_t *param_1,uint64_t param_2)

{
  int32_t uVar1;
  int8_t auStack_68 [32];
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  uVar1 = FUN_180844f40(param_2,&uStack_48);
  FUN_180211a30(uVar1,&system_buffer_ptr);
  *param_1 = uStack_48;
  param_1[2] = uStack_44;
  param_1[1] = uStack_40;
  param_1[3] = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180407630(uint64_t param_1,int32_t *param_2,int32_t *param_3)
void FUN_180407630(uint64_t param_1,int32_t *param_2,int32_t *param_3)

{
  int32_t uVar1;
  int8_t auStack_78 [32];
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  uVar1 = FUN_180844f40(param_1,&uStack_58);
  FUN_180211a30(uVar1,&system_buffer_ptr);
  uStack_58 = *param_2;
  uStack_54 = param_2[2];
  uStack_50 = param_2[1];
  uStack_4c = *param_3;
  uStack_48 = param_3[2];
  uStack_44 = param_3[1];
  uVar1 = FUN_180849490(param_1,&uStack_58);
  FUN_180211a30(uVar1,&system_buffer_ptr);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180407710(longlong param_1,uint64_t param_2,int32_t param_3)
void FUN_180407710(longlong param_1,uint64_t param_2,int32_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t *puVar5;
  int8_t auStack_198 [48];
  longlong lStack_168;
  uint64_t *puStack_160;
  uint64_t auStack_158 [34];
  ulonglong uStack_48;
  uint64_t uStack_40;
  
  uVar1 = *(uint64_t *)(param_1 + 0x80);
  uStack_40 = 0x180407735;
  puVar5 = (uint64_t *)(**(code **)(*_DAT_180c86878 + 0x1f8))();
  uVar2 = *puVar5;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  auStack_158[0] = 0;
  iVar3 = func_0x00018088c590(uVar1,&lStack_168);
  if (iVar3 == 0) {
    if ((*(uint *)(lStack_168 + 0x24) >> 1 & 1) == 0) goto LAB_180849c81;
    iVar4 = FUN_18088c740(auStack_158);
    if (iVar4 == 0) goto LAB_180849c22;
  }
  else {
LAB_180849c22:
    iVar4 = iVar3;
  }
  if ((iVar4 == 0) &&
     (iVar3 = FUN_18088dec0(*(uint64_t *)(lStack_168 + 0x98),&puStack_160,0x28), iVar3 == 0)) {
    *puStack_160 = &UNK_180983e88;
    *(int32_t *)(puStack_160 + 1) = 0x28;
    *(int32_t *)(puStack_160 + 4) = param_3;
    *(int *)(puStack_160 + 2) = (int)uVar1;
    puStack_160[3] = uVar2;
    *(int8_t *)((longlong)puStack_160 + 0x24) = 0;
    func_0x00018088e0d0(*(uint64_t *)(lStack_168 + 0x98));
  }
LAB_180849c81:
                    // WARNING: Subroutine does not return
  FUN_18088c790(auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180407760(longlong param_1)
void FUN_180407760(longlong param_1)

{
  int32_t uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint64_t *puVar5;
  longlong lVar6;
  uint uVar8;
  uint uVar9;
  int iVar10;
  void *puStack_50;
  uint64_t *puStack_48;
  uint uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  longlong lVar7;
  
  uStack_30 = 0x180407770;
  iVar3 = FUN_180847f60(*(uint64_t *)(param_1 + 0x80));
  if (iVar3 == 0) {
    return;
  }
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  puStack_48 = (uint64_t *)0x0;
  uStack_40 = 0;
  puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puStack_48 = 0;
  uVar1 = FUN_18064e990(puStack_48);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puStack_48 = 0x726520444f4d460a;
  *(int32_t *)(puStack_48 + 1) = 0x21726f72;
  *(int16_t *)((longlong)puStack_48 + 0xc) = 0x2820;
  *(int8_t *)((longlong)puStack_48 + 0xe) = 0;
  uStack_40 = 0xe;
  FUN_180628380(&puStack_50,iVar3);
  uVar2 = uStack_40;
  uVar8 = uStack_40 + 2;
  if (uVar8 != 0) {
    uVar9 = uStack_40 + 3;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar9 < 0x10) {
        uVar9 = 0x10;
      }
      puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar9 <= (uint)uStack_38) goto LAB_180211b66;
      puStack_48 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_48,uVar9,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211b66:
  *(int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) = 0x2029;
  *(int8_t *)((int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) + 1) = 0;
  uVar9 = uVar2 + 3;
  uStack_40 = uVar8;
  if (uVar9 != 0) {
    uVar8 = uVar2 + 4;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar8 < 0x10) {
        uVar8 = 0x10;
      }
      puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar8,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar8 <= (uint)uStack_38) goto LAB_180211be9;
      puStack_48 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_48,uVar8,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211be9:
  *(int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) = 0x22;
  lVar6 = -1;
  do {
    lVar4 = lVar6;
    lVar6 = lVar4 + 1;
  } while ((&UNK_18098bc74)[lVar4] != '\0');
  iVar10 = (int)(lVar4 + 1);
  uStack_40 = uVar9;
  if (0 < iVar10) {
    iVar10 = uVar9 + iVar10;
    if (iVar10 != 0) {
      uVar2 = iVar10 + 1;
      if (puStack_48 == (uint64_t *)0x0) {
        if ((int)uVar2 < 0x10) {
          uVar2 = 0x10;
        }
        puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar2,0x13);
        *(int8_t *)puStack_48 = 0;
      }
      else {
        if (uVar2 <= (uint)uStack_38) goto LAB_180211c85;
        puStack_48 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_48,uVar2,0x10,0x13);
      }
      uVar1 = FUN_18064e990(puStack_48);
      uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
    }
LAB_180211c85:
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((ulonglong)uStack_40 + (longlong)puStack_48),&system_buffer_ptr,
           (longlong)((int)lVar4 + 2));
  }
  uVar8 = uVar2 + 5;
  if (uVar8 != 0) {
    uVar2 = uVar2 + 6;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar2,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_38) goto LAB_180211d03;
      puStack_48 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_48,uVar2,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211d03:
  *(int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) = 0x2022;
  *(int8_t *)((int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) + 1) = 0;
  uStack_40 = uVar8;
  lVar4 = func_0x00018021a140(iVar3);
  lVar6 = -1;
  if (lVar4 != 0) {
    do {
      lVar7 = lVar6;
      lVar6 = lVar7 + 1;
    } while (*(char *)(lVar4 + lVar6) != '\0');
    if (0 < (int)lVar6) {
      iVar3 = uVar8 + (int)lVar6;
      if (iVar3 != 0) {
        uVar2 = iVar3 + 1;
        if (puStack_48 == (uint64_t *)0x0) {
          if ((int)uVar2 < 0x10) {
            uVar2 = 0x10;
          }
          puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar2,0x13);
          *(int8_t *)puStack_48 = 0;
        }
        else {
          if (uVar2 <= (uint)uStack_38) goto LAB_180211da7;
          puStack_48 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_48,uVar2,0x10,0x13);
        }
        uVar1 = FUN_18064e990(puStack_48);
        uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
      }
LAB_180211da7:
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((ulonglong)uStack_40 + (longlong)puStack_48),lVar4,
             (longlong)((int)lVar7 + 2));
    }
  }
  iVar3 = uStack_40 + 1;
  if (iVar3 != 0) {
    uVar2 = uStack_40 + 2;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_48 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar2,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_38) goto LAB_180211e24;
      puStack_48 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_48,uVar2,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211e24:
  *(int16_t *)((ulonglong)uStack_40 + (longlong)puStack_48) = 10;
  puVar5 = (uint64_t *)&system_buffer_ptr;
  if (puStack_48 != (uint64_t *)0x0) {
    puVar5 = puStack_48;
  }
  uStack_40 = iVar3;
  FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,puVar5);
  puStack_50 = &UNK_180a3c3e0;
  if (puStack_48 == (uint64_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180407790(longlong param_1)
void FUN_180407790(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_180847f30();
    if (cVar1 != '\0') {
      FUN_18084a7a0(*(uint64_t *)(param_1 + 0x80),0);
      cVar1 = FUN_180847f30(*(uint64_t *)(param_1 + 0x80));
      if (cVar1 != '\0') {
        FUN_180849230(*(uint64_t *)(param_1 + 0x80));
      }
    }
    *(uint64_t *)(param_1 + 0x80) = 0;
  }
  return;
}



uint64_t FUN_1804077f0(longlong param_1,uint64_t param_2)

{
  FUN_1804075b0(param_2,*(uint64_t *)(param_1 + 0x80));
  return param_2;
}





// 函数: void FUN_180407840(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_180407840(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = param_1 + 0x98;
  if (lVar1 != param_2) {
    if (*(code **)(param_1 + 0xa8) != (code *)0x0) {
      (**(code **)(param_1 + 0xa8))(lVar1,0,0,param_4,0xfffffffffffffffe);
    }
    pcVar2 = *(code **)(param_2 + 0x10);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(lVar1,param_2,1);
      pcVar2 = *(code **)(param_2 + 0x10);
    }
    *(code **)(param_1 + 0xa8) = pcVar2;
    *(uint64_t *)(param_1 + 0xb0) = *(uint64_t *)(param_2 + 0x18);
  }
  FUN_180849820(*(uint64_t *)(param_1 + 0x80),FUN_1804069d0,0x20);
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2,0,0);
  }
  return;
}



int32_t FUN_180407900(longlong param_1)

{
  int iVar1;
  int32_t auStackX_8 [8];
  
  iVar1 = FUN_1808473f0(*(uint64_t *)(param_1 + 0x80),auStackX_8,0);
  if (iVar1 == 0) {
    return auStackX_8[0];
  }
  return 0;
}



int32_t FUN_180407930(longlong param_1)

{
  int iVar1;
  int32_t auStackX_8 [8];
  
  iVar1 = FUN_180846930(*(uint64_t *)(param_1 + 0x80),auStackX_8,0);
  if (iVar1 == 0) {
    return auStackX_8[0];
  }
  return 0;
}



uint64_t *
FUN_180407960(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 4;
  *plVar1 = (longlong)&UNK_18098bcb0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  param_1[7] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr,param_3,param_4,0xfffffffffffffffe);
  *(int32_t *)(param_1 + 2) = 0xffffffff;
  *(int16_t *)((longlong)param_1 + 0x14) = 0;
  *(int32_t *)(param_1 + 3) = 0xbf800000;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804079e0(void)
void FUN_1804079e0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  uVar4 = 0;
  if (_DAT_180c91fe0 != 0) {
    uVar6 = uVar4;
    uVar2 = uVar4;
    if (0 < *(int *)(_DAT_180c8aa00 + 0x40)) {
      do {
        lVar1 = *(longlong *)(uVar2 + _DAT_180c91fe0);
        if (lVar1 != 0) {
          uVar6 = *(ulonglong *)(lVar1 + -0x10);
          uVar2 = uVar6 >> 0x20;
          if ((int)(uVar6 >> 0x20) != 0) {
            do {
              lVar3 = uVar4 + lVar1;
              *(uint64_t *)(lVar3 + 8) = &UNK_180a3c3e0;
              if (*(longlong *)(lVar3 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *(uint64_t *)(lVar3 + 0x10) = 0;
              *(int32_t *)(lVar3 + 0x20) = 0;
              *(uint64_t *)(lVar3 + 8) = &UNK_18098bcb0;
              uVar4 = (ulonglong)(uint)((int)uVar4 + (int)uVar6);
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900((ulonglong *)(lVar1 + -0x10));
        }
        *(uint64_t *)(uVar2 + _DAT_180c91fe0) = 0;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar2 = uVar2 + 8;
      } while ((int)uVar5 < *(int *)(_DAT_180c8aa00 + 0x40));
    }
    if (_DAT_180c91fe0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    _DAT_180c91fe0 = 0;
  }
  if (_DAT_180c91fe8 != 0) {
    uVar6 = uVar4;
    uVar2 = uVar4;
    if (0 < *(int *)(_DAT_180c8aa00 + 0x40)) {
      do {
        lVar1 = *(longlong *)(uVar6 + _DAT_180c91fe8);
        if (lVar1 != 0) {
          uVar6 = *(ulonglong *)(lVar1 + -0x10);
          uVar2 = uVar6 >> 0x20;
          if ((int)(uVar6 >> 0x20) != 0) {
            do {
              FUN_1808fc8a8(uVar4 + lVar1,0x40,0xb,FUN_18006b8f0,uVar7);
              uVar4 = (ulonglong)(uint)((int)uVar4 + (int)uVar6);
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar1 + -0x10);
        }
        *(uint64_t *)(uVar6 + _DAT_180c91fe8) = 0;
        uVar5 = (int)uVar2 + 1;
        uVar6 = uVar6 + 8;
        uVar2 = (ulonglong)uVar5;
      } while ((int)uVar5 < *(int *)(_DAT_180c8aa00 + 0x40));
    }
    if (_DAT_180c91fe8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    _DAT_180c91fe8 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180407bd0(void)
void FUN_180407bd0(void)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  uint uVar5;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar6;
  
  FUN_1804079e0();
  lVar1 = _DAT_180c8aa00[1];
  lVar2 = *_DAT_180c8aa00;
  uVar8 = (ulonglong)(int)_DAT_180c8aa00[8];
  puVar9 = (ulonglong *)0x0;
  puVar11 = puVar9;
  puVar10 = puVar9;
  if (uVar8 != 0) {
    _DAT_180c91fe0 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,uVar8 * 8,3);
    puVar11 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,uVar8 * 8,3);
    puVar10 = _DAT_180c91fe0;
  }
  _DAT_180c91fe0 = puVar10;
  _DAT_180c91fe8 = puVar11;
  if (0 < (longlong)uVar8) {
    puVar10 = (ulonglong *)(longlong)(int)(lVar1 - lVar2 >> 5);
    puVar11 = puVar9;
    do {
      puVar7 = puVar9;
      if (uVar8 != 0) {
        puVar3 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,uVar8 * 0x28 + 0x10,3);
        *puVar3 = uVar8 << 0x20 | 0x28;
        puVar4 = puVar3 + 4;
        puVar6 = puVar9;
        do {
          puVar7 = puVar4 + -1;
          *puVar7 = (ulonglong)&UNK_18098bcb0;
          *puVar4 = 0;
          *(int32_t *)(puVar4 + 1) = 0;
          *puVar7 = (ulonglong)&UNK_180a3c3e0;
          puVar4[2] = 0;
          *puVar4 = 0;
          *(int32_t *)(puVar4 + 1) = 0;
          *(int32_t *)(puVar4 + -2) = 0xffffffff;
          (**(code **)(*puVar7 + 0x10))(puVar7,&system_buffer_ptr);
          uVar5 = (int)puVar6 + 1;
          puVar6 = (ulonglong *)(ulonglong)uVar5;
          puVar4 = puVar4 + 5;
          puVar7 = puVar3 + 2;
        } while ((ulonglong)(longlong)(int)uVar5 < uVar8);
      }
      _DAT_180c91fe0[(longlong)puVar11] = (ulonglong)puVar7;
      puVar7 = puVar9;
      if (puVar10 != (ulonglong *)0x0) {
        puVar3 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,(longlong)puVar10 * 0x2c0 + 0x10,3);
        *puVar3 = (longlong)puVar10 << 0x20 | 0x2c0;
        puVar4 = puVar9;
        puVar6 = puVar9;
        do {
          FUN_1808fc838(puVar3 + 2 + (longlong)puVar4 * 0x58,0x40,0xb,FUN_180407960,FUN_18006b8f0);
          uVar5 = (int)puVar6 + 1;
          puVar6 = (ulonglong *)(ulonglong)uVar5;
          puVar4 = (ulonglong *)(longlong)(int)uVar5;
          puVar7 = puVar3 + 2;
        } while (puVar4 < puVar10);
      }
      _DAT_180c91fe8[(longlong)puVar11] = (ulonglong)puVar7;
      puVar11 = (ulonglong *)((longlong)puVar11 + 1);
    } while ((longlong)puVar11 < (longlong)uVar8);
  }
  return;
}





