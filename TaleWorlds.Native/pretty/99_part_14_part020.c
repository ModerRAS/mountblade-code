#include "TaleWorlds.Native.Split.h"

// 99_part_14_part020.c - 8 个函数

// 函数: void FUN_1808fb136(void)
void FUN_1808fb136(void)

{
  SetLastError(0x7e);
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1808fb170(uint64_t param_1,int8_t *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int8_t uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  int32_t auStackX_18 [2];
  int32_t auStackX_20 [2];
  ulonglong in_stack_fffffffffffffe88;
  longlong lStack_138;
  longlong alStack_130 [2];
  int8_t auStack_120 [4];
  int8_t auStack_11c [4];
  int8_t auStack_118 [16];
  int8_t auStack_108 [8];
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  
  uVar11 = 0;
  uVar13 = 0;
  lStack_138 = 0;
  alStack_130[0] = 0;
  uVar12 = 0;
  bVar14 = false;
  SetLastError(0);
  uVar6 = GetFileAttributesW(param_1);
  if ((uVar6 == 0xffffffff) || ((uVar6 & 0x50) != 0)) {
    uVar9 = 2;
    goto LAB_1808fb690;
  }
  if (_DAT_180c69f38 == 0) {
    lVar8 = FUN_1808f9200(&UNK_18098ab50);
    uVar9 = uVar11;
    if (lVar8 != 0) {
      uVar9 = LoadLibraryExW(lVar8,0,0);
    }
    LocalFree(lVar8);
    _DAT_180c69f38 = uVar9;
    if (uVar9 != 0) {
      _DAT_180c69f40 = (code *)GetProcAddress(uVar9,&UNK_18098ab68);
      _DAT_180c69f48 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098ab78);
      _DAT_180c69f50 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098ab88);
      _DAT_180c69f58 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098aba8);
      _DAT_180c69f60 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098abc8);
      _DAT_180c69f68 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098abe0);
      _DAT_180c69f70 = GetProcAddress(_DAT_180c69f38,&UNK_18098abf8);
      _DAT_180c69f78 = GetProcAddress(_DAT_180c69f38,&UNK_18098ac10);
      _DAT_180c69f80 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098ac28);
    }
  }
  pcVar1 = _DAT_180c69f68;
  uVar2 = uVar11;
  uVar3 = uVar11;
  if ((((((_DAT_180c69f40 != (code *)0x0) &&
         (uVar2 = uVar12, uVar3 = uVar13, _DAT_180c69f48 != (code *)0x0)) &&
        (_DAT_180c69f50 != (code *)0x0)) &&
       ((_DAT_180c69f58 != (code *)0x0 && (_DAT_180c69f60 != (code *)0x0)))) &&
      ((_DAT_180c69f68 != (code *)0x0 && ((_DAT_180c69f70 != 0 && (_DAT_180c69f78 != 0)))))) &&
     (_DAT_180c69f80 != (code *)0x0)) {
    _guard_check_icall(_DAT_180c69f68);
    iVar10 = 0;
    iVar7 = (*pcVar1)(1,param_1,0x400,2,in_stack_fffffffffffffe88 & 0xffffffff00000000,auStack_118,
                      auStack_11c,auStack_120,&lStack_138,alStack_130,0);
    pcVar1 = _DAT_180c69f60;
    bVar14 = iVar7 == 1;
    if (!bVar14) {
      uVar6 = GetLastError();
      uVar9 = (ulonglong)uVar6;
      uVar12 = uVar11;
      uVar13 = uVar11;
      goto LAB_1808fb690;
    }
    _guard_check_icall(_DAT_180c69f60);
    iVar7 = (*pcVar1)(alStack_130[0],6,0,0,auStackX_18);
    bVar14 = iVar7 == 1;
    if (!bVar14) {
      uVar6 = GetLastError();
      uVar9 = (ulonglong)uVar6;
      goto LAB_1808fb690;
    }
    uVar13 = LocalAlloc(0x40,auStackX_18[0]);
    pcVar1 = _DAT_180c69f60;
    if (uVar13 == 0) {
      uVar6 = GetLastError();
      uVar9 = (ulonglong)uVar6;
      bVar14 = false;
      goto LAB_1808fb690;
    }
    _guard_check_icall(_DAT_180c69f60);
    iVar7 = (*pcVar1)(alStack_130[0],6,0,uVar13,auStackX_18);
    pcVar1 = _DAT_180c69f58;
    bVar14 = iVar7 == 1;
    if (!bVar14) {
      uVar6 = GetLastError();
      uVar9 = (ulonglong)uVar6;
      goto LAB_1808fb690;
    }
    uStack_d8 = *(uint64_t *)(uVar13 + 8);
    uStack_d0 = *(uint64_t *)(uVar13 + 0x10);
    uStack_100 = *(int32_t *)(uVar13 + 0x18);
    uStack_fc = *(int32_t *)(uVar13 + 0x1c);
    uStack_f8 = *(int32_t *)(uVar13 + 0x20);
    uStack_f4 = *(int32_t *)(uVar13 + 0x24);
    _guard_check_icall(_DAT_180c69f58);
    uVar12 = (*pcVar1)(lStack_138,0x10001,0,0xb0000,auStack_108,0);
    if (uVar12 == 0) {
      uVar6 = GetLastError();
      uVar9 = (ulonglong)uVar6;
      bVar14 = false;
      goto LAB_1808fb690;
    }
    uVar9 = uVar11;
    if (param_2 != (int8_t *)0x0) {
      uVar4 = FUN_1808f9b70(uVar12);
      *param_2 = uVar4;
      uVar6 = GetLastError();
      uVar9 = (ulonglong)uVar6;
      if (uVar6 != 0) goto LAB_1808fb690;
    }
    cVar5 = FUN_1808f92e0(uVar13,alStack_130 + 1);
    if (cVar5 == '\0') {
      alStack_130[1] = 0;
    }
    cVar5 = FUN_1808fade0(uVar13,lStack_138,alStack_130 + 1);
    if ((cVar5 == '\0') && (cVar5 = FUN_1808fac70(uVar13,alStack_130 + 1), cVar5 == '\0')) {
      bVar14 = false;
      uVar6 = GetLastError();
      uVar9 = (ulonglong)uVar6;
      if (uVar6 == 0) {
        uVar9 = 0x80096005;
      }
      goto LAB_1808fb690;
    }
    if ((_DAT_180c6a010 == 0) &&
       (_DAT_180c6a010 = FUN_1808f9de0(&UNK_18098ac50,0), _DAT_180c6a010 != 0)) {
      _DAT_180c6a018 = GetProcAddress(_DAT_180c6a010,&UNK_18098ac70);
    }
    bVar14 = false;
    uVar2 = uVar12;
    uVar3 = uVar13;
    if (_DAT_180c6a018 != 0) {
      do {
        uVar6 = FUN_1808fab90(param_1,iVar10);
        pcVar1 = _DAT_180c69f80;
        if (uVar6 == 0) {
          bVar14 = true;
          break;
        }
        iVar10 = iVar10 + 1;
        uVar9 = (ulonglong)uVar6;
      } while (iVar10 == 0);
      if ((int)uVar9 == -0x7ff4fef6) {
        auStackX_20[0] = 0;
        _guard_check_icall(_DAT_180c69f80);
        lVar8 = (*pcVar1)(lStack_138,uVar12,0,auStackX_20);
        if (lVar8 != 0) {
          cVar5 = FUN_1808f93b0(*(longlong *)(lVar8 + 0x18) + 0x78);
          pcVar1 = _DAT_180c69f50;
          if (cVar5 != '\0') {
            bVar14 = true;
          }
          _guard_check_icall(_DAT_180c69f50);
          (*pcVar1)(lVar8);
          uVar9 = 0;
          if (cVar5 == '\0') {
            uVar9 = 0x800b010a;
          }
        }
      }
      goto LAB_1808fb690;
    }
  }
  uVar13 = uVar3;
  uVar12 = uVar2;
  bVar14 = false;
  uVar9 = 0x7e;
LAB_1808fb690:
  LocalFree(uVar13);
  pcVar1 = _DAT_180c69f50;
  if (uVar12 != 0) {
    _guard_check_icall(_DAT_180c69f50);
    (*pcVar1)(uVar12);
  }
  lVar8 = lStack_138;
  pcVar1 = _DAT_180c69f48;
  if (lStack_138 != 0) {
    _guard_check_icall(_DAT_180c69f48);
    (*pcVar1)(lVar8,0);
  }
  lVar8 = alStack_130[0];
  pcVar1 = _DAT_180c69f40;
  if (alStack_130[0] != 0) {
    _guard_check_icall(_DAT_180c69f40);
    (*pcVar1)(lVar8);
  }
  SetLastError(uVar9);
  return bVar14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1808fb18b(uint64_t param_1)

{
  int8_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  code *pcVar6;
  int8_t uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong in_RAX;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  code *pcVar16;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R15;
  bool bVar17;
  ulonglong in_stack_00000020;
  uint64_t in_stack_00000070;
  
  *(uint64_t *)(in_RAX + 8) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  uVar13 = unaff_RBX & 0xffffffff;
  uVar14 = unaff_RBX & 0xffffffff;
  bVar17 = false;
  pcVar16 = (code *)(unaff_RBX & 0xffffffff);
  SetLastError(0);
  uVar9 = GetFileAttributesW(param_1);
  if ((uVar9 == 0xffffffff) || ((uVar9 & 0x50) != 0)) {
    pcVar16 = (code *)0x2;
    goto LAB_1808fb690;
  }
  if (_DAT_180c69f38 == unaff_RBX) {
    lVar11 = FUN_1808f9200(&UNK_18098ab50);
    uVar12 = unaff_RBX;
    if (lVar11 != 0) {
      uVar12 = LoadLibraryExW(lVar11,0,0);
    }
    LocalFree(lVar11);
    _DAT_180c69f38 = uVar12;
    if (uVar12 != 0) {
      _DAT_180c69f40 = (code *)GetProcAddress(uVar12,&UNK_18098ab68);
      _DAT_180c69f48 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098ab78);
      _DAT_180c69f50 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098ab88);
      _DAT_180c69f58 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098aba8);
      _DAT_180c69f60 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098abc8);
      _DAT_180c69f68 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098abe0);
      _DAT_180c69f70 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098abf8);
      _DAT_180c69f78 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098ac10);
      _DAT_180c69f80 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098ac28);
    }
  }
  pcVar6 = _DAT_180c69f68;
  if ((((((_DAT_180c69f40 != pcVar16) && (_DAT_180c69f48 != pcVar16)) && (_DAT_180c69f50 != pcVar16)
        ) && ((_DAT_180c69f58 != pcVar16 && (_DAT_180c69f60 != pcVar16)))) &&
      ((_DAT_180c69f68 != (code *)0x0 &&
       ((_DAT_180c69f70 != pcVar16 && (_DAT_180c69f78 != pcVar16)))))) &&
     (_DAT_180c69f80 != (code *)0x0)) {
    _guard_check_icall(_DAT_180c69f68);
    iVar15 = 0;
    iVar10 = (*pcVar6)(1,param_1,0x400,2,in_stack_00000020 & 0xffffffff00000000);
    pcVar6 = _DAT_180c69f60;
    bVar17 = iVar10 == 1;
    if (!bVar17) {
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      goto LAB_1808fb690;
    }
    _guard_check_icall(_DAT_180c69f60);
    iVar10 = (*pcVar6)(unaff_RBX,6,0,0,unaff_RBP + 0xb0);
    bVar17 = iVar10 == 1;
    if (!bVar17) {
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      goto LAB_1808fb690;
    }
    uVar13 = LocalAlloc(0x40,*(int32_t *)(unaff_RBP + 0xb0));
    pcVar6 = _DAT_180c69f60;
    if (uVar13 == 0) {
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      bVar17 = false;
      goto LAB_1808fb690;
    }
    _guard_check_icall(_DAT_180c69f60);
    iVar10 = (*pcVar6)(unaff_RBX,6,0,uVar13,unaff_RBP + 0xb0);
    pcVar6 = _DAT_180c69f58;
    bVar17 = iVar10 == 1;
    if (!bVar17) {
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      goto LAB_1808fb690;
    }
    uVar5 = *(uint64_t *)(uVar13 + 0x10);
    *(uint64_t *)(unaff_RBP + -0x40) = *(uint64_t *)(uVar13 + 8);
    *(uint64_t *)(unaff_RBP + -0x38) = uVar5;
    uVar2 = *(int32_t *)(uVar13 + 0x1c);
    uVar3 = *(int32_t *)(uVar13 + 0x20);
    uVar4 = *(int32_t *)(uVar13 + 0x24);
    *(int32_t *)(unaff_RBP + -0x68) = *(int32_t *)(uVar13 + 0x18);
    *(int32_t *)(unaff_RBP + -100) = uVar2;
    *(int32_t *)(unaff_RBP + -0x60) = uVar3;
    *(int32_t *)(unaff_RBP + -0x5c) = uVar4;
    _guard_check_icall(pcVar6);
    uVar14 = (*pcVar6)(unaff_RBX,0x10001,0,0xb0000,unaff_RBP + -0x70);
    if (uVar14 == 0) {
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      bVar17 = false;
      goto LAB_1808fb690;
    }
    puVar1 = *(int8_t **)(unaff_RBP + 0xa8);
    if (puVar1 != (int8_t *)0x0) {
      uVar7 = FUN_1808f9b70(uVar14);
      *puVar1 = uVar7;
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      if (uVar9 != 0) goto LAB_1808fb690;
    }
    cVar8 = FUN_1808f92e0(uVar13,&stack0x00000070);
    if (cVar8 == '\0') {
      in_stack_00000070 = 0;
    }
    cVar8 = FUN_1808fade0(uVar13,unaff_RBX,&stack0x00000070);
    if ((cVar8 == '\0') && (cVar8 = FUN_1808fac70(uVar13,&stack0x00000070), cVar8 == '\0')) {
      bVar17 = false;
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      if (uVar9 == 0) {
        pcVar16 = (code *)0x80096005;
      }
      goto LAB_1808fb690;
    }
    if ((_DAT_180c6a010 == 0) &&
       (_DAT_180c6a010 = FUN_1808f9de0(&UNK_18098ac50,0), _DAT_180c6a010 != 0)) {
      _DAT_180c6a018 = GetProcAddress(_DAT_180c6a010,&UNK_18098ac70);
    }
    bVar17 = false;
    if (_DAT_180c6a018 != 0) {
      do {
        uVar9 = FUN_1808fab90(param_1,iVar15);
        pcVar6 = _DAT_180c69f80;
        if (uVar9 == 0) {
          bVar17 = true;
          break;
        }
        iVar15 = iVar15 + 1;
        pcVar16 = (code *)(ulonglong)uVar9;
      } while (iVar15 == 0);
      if ((int)pcVar16 == -0x7ff4fef6) {
        *(int32_t *)(unaff_RBP + 0xb8) = 0;
        _guard_check_icall(pcVar6);
        lVar11 = (*pcVar6)(unaff_RBX,uVar14,0,unaff_RBP + 0xb8);
        if (lVar11 != 0) {
          cVar8 = FUN_1808f93b0(*(longlong *)(lVar11 + 0x18) + 0x78);
          pcVar16 = _DAT_180c69f50;
          if (cVar8 != '\0') {
            bVar17 = true;
          }
          _guard_check_icall(_DAT_180c69f50);
          (*pcVar16)(lVar11);
          pcVar16 = (code *)0x0;
          if (cVar8 == '\0') {
            pcVar16 = (code *)0x800b010a;
          }
        }
      }
      goto LAB_1808fb690;
    }
  }
  bVar17 = false;
  pcVar16 = (code *)0x7e;
LAB_1808fb690:
  LocalFree(uVar13);
  pcVar6 = _DAT_180c69f50;
  if (uVar14 != 0) {
    _guard_check_icall(_DAT_180c69f50);
    (*pcVar6)(uVar14);
  }
  pcVar6 = _DAT_180c69f48;
  if (unaff_RBX != 0) {
    _guard_check_icall(_DAT_180c69f48);
    (*pcVar6)(unaff_RBX,0);
    pcVar6 = _DAT_180c69f40;
    _guard_check_icall(_DAT_180c69f40);
    (*pcVar6)(unaff_RBX);
  }
  SetLastError(pcVar16);
  return bVar17;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1808fb18f(uint64_t param_1)

{
  int8_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  code *pcVar6;
  int8_t uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong in_RAX;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  code *pcVar16;
  uint64_t unaff_R13;
  uint64_t unaff_R15;
  bool bVar17;
  ulonglong in_stack_00000020;
  uint64_t in_stack_00000070;
  
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  uVar13 = unaff_RBX & 0xffffffff;
  uVar14 = unaff_RBX & 0xffffffff;
  bVar17 = false;
  pcVar16 = (code *)(unaff_RBX & 0xffffffff);
  SetLastError(0);
  uVar9 = GetFileAttributesW(param_1);
  if ((uVar9 == 0xffffffff) || ((uVar9 & 0x50) != 0)) {
    pcVar16 = (code *)0x2;
    goto LAB_1808fb690;
  }
  if (_DAT_180c69f38 == unaff_RBX) {
    lVar11 = FUN_1808f9200(&UNK_18098ab50);
    uVar12 = unaff_RBX;
    if (lVar11 != 0) {
      uVar12 = LoadLibraryExW(lVar11,0,0);
    }
    LocalFree(lVar11);
    _DAT_180c69f38 = uVar12;
    if (uVar12 != 0) {
      _DAT_180c69f40 = (code *)GetProcAddress(uVar12,&UNK_18098ab68);
      _DAT_180c69f48 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098ab78);
      _DAT_180c69f50 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098ab88);
      _DAT_180c69f58 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098aba8);
      _DAT_180c69f60 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098abc8);
      _DAT_180c69f68 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098abe0);
      _DAT_180c69f70 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098abf8);
      _DAT_180c69f78 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098ac10);
      _DAT_180c69f80 = (code *)GetProcAddress(_DAT_180c69f38,&UNK_18098ac28);
    }
  }
  pcVar6 = _DAT_180c69f68;
  if ((((((_DAT_180c69f40 != pcVar16) && (_DAT_180c69f48 != pcVar16)) && (_DAT_180c69f50 != pcVar16)
        ) && ((_DAT_180c69f58 != pcVar16 && (_DAT_180c69f60 != pcVar16)))) &&
      ((_DAT_180c69f68 != (code *)0x0 &&
       ((_DAT_180c69f70 != pcVar16 && (_DAT_180c69f78 != pcVar16)))))) &&
     (_DAT_180c69f80 != (code *)0x0)) {
    _guard_check_icall(_DAT_180c69f68);
    iVar15 = 0;
    iVar10 = (*pcVar6)(1,param_1,0x400,2,in_stack_00000020 & 0xffffffff00000000);
    pcVar6 = _DAT_180c69f60;
    bVar17 = iVar10 == 1;
    if (!bVar17) {
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      goto LAB_1808fb690;
    }
    _guard_check_icall(_DAT_180c69f60);
    iVar10 = (*pcVar6)(unaff_RBX,6,0,0,unaff_RBP + 0xb0);
    bVar17 = iVar10 == 1;
    if (!bVar17) {
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      goto LAB_1808fb690;
    }
    uVar13 = LocalAlloc(0x40,*(int32_t *)(unaff_RBP + 0xb0));
    pcVar6 = _DAT_180c69f60;
    if (uVar13 == 0) {
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      bVar17 = false;
      goto LAB_1808fb690;
    }
    _guard_check_icall(_DAT_180c69f60);
    iVar10 = (*pcVar6)(unaff_RBX,6,0,uVar13,unaff_RBP + 0xb0);
    pcVar6 = _DAT_180c69f58;
    bVar17 = iVar10 == 1;
    if (!bVar17) {
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      goto LAB_1808fb690;
    }
    uVar5 = *(uint64_t *)(uVar13 + 0x10);
    *(uint64_t *)(unaff_RBP + -0x40) = *(uint64_t *)(uVar13 + 8);
    *(uint64_t *)(unaff_RBP + -0x38) = uVar5;
    uVar2 = *(int32_t *)(uVar13 + 0x1c);
    uVar3 = *(int32_t *)(uVar13 + 0x20);
    uVar4 = *(int32_t *)(uVar13 + 0x24);
    *(int32_t *)(unaff_RBP + -0x68) = *(int32_t *)(uVar13 + 0x18);
    *(int32_t *)(unaff_RBP + -100) = uVar2;
    *(int32_t *)(unaff_RBP + -0x60) = uVar3;
    *(int32_t *)(unaff_RBP + -0x5c) = uVar4;
    _guard_check_icall(pcVar6);
    uVar14 = (*pcVar6)(unaff_RBX,0x10001,0,0xb0000,unaff_RBP + -0x70);
    if (uVar14 == 0) {
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      bVar17 = false;
      goto LAB_1808fb690;
    }
    puVar1 = *(int8_t **)(unaff_RBP + 0xa8);
    if (puVar1 != (int8_t *)0x0) {
      uVar7 = FUN_1808f9b70(uVar14);
      *puVar1 = uVar7;
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      if (uVar9 != 0) goto LAB_1808fb690;
    }
    cVar8 = FUN_1808f92e0(uVar13,&stack0x00000070);
    if (cVar8 == '\0') {
      in_stack_00000070 = 0;
    }
    cVar8 = FUN_1808fade0(uVar13,unaff_RBX,&stack0x00000070);
    if ((cVar8 == '\0') && (cVar8 = FUN_1808fac70(uVar13,&stack0x00000070), cVar8 == '\0')) {
      bVar17 = false;
      uVar9 = GetLastError();
      pcVar16 = (code *)(ulonglong)uVar9;
      if (uVar9 == 0) {
        pcVar16 = (code *)0x80096005;
      }
      goto LAB_1808fb690;
    }
    if ((_DAT_180c6a010 == 0) &&
       (_DAT_180c6a010 = FUN_1808f9de0(&UNK_18098ac50,0), _DAT_180c6a010 != 0)) {
      _DAT_180c6a018 = GetProcAddress(_DAT_180c6a010,&UNK_18098ac70);
    }
    bVar17 = false;
    if (_DAT_180c6a018 != 0) {
      do {
        uVar9 = FUN_1808fab90(param_1,iVar15);
        pcVar6 = _DAT_180c69f80;
        if (uVar9 == 0) {
          bVar17 = true;
          break;
        }
        iVar15 = iVar15 + 1;
        pcVar16 = (code *)(ulonglong)uVar9;
      } while (iVar15 == 0);
      if ((int)pcVar16 == -0x7ff4fef6) {
        *(int32_t *)(unaff_RBP + 0xb8) = 0;
        _guard_check_icall(pcVar6);
        lVar11 = (*pcVar6)(unaff_RBX,uVar14,0,unaff_RBP + 0xb8);
        if (lVar11 != 0) {
          cVar8 = FUN_1808f93b0(*(longlong *)(lVar11 + 0x18) + 0x78);
          pcVar16 = _DAT_180c69f50;
          if (cVar8 != '\0') {
            bVar17 = true;
          }
          _guard_check_icall(_DAT_180c69f50);
          (*pcVar16)(lVar11);
          pcVar16 = (code *)0x0;
          if (cVar8 == '\0') {
            pcVar16 = (code *)0x800b010a;
          }
        }
      }
      goto LAB_1808fb690;
    }
  }
  bVar17 = false;
  pcVar16 = (code *)0x7e;
LAB_1808fb690:
  LocalFree(uVar13);
  pcVar6 = _DAT_180c69f50;
  if (uVar14 != 0) {
    _guard_check_icall(_DAT_180c69f50);
    (*pcVar6)(uVar14);
  }
  pcVar6 = _DAT_180c69f48;
  if (unaff_RBX != 0) {
    _guard_check_icall(_DAT_180c69f48);
    (*pcVar6)(unaff_RBX,0);
    pcVar6 = _DAT_180c69f40;
    _guard_check_icall(_DAT_180c69f40);
    (*pcVar6)(unaff_RBX);
  }
  SetLastError(pcVar16);
  return bVar17;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_1808fb6ae(void)

{
  code *pcVar1;
  int32_t unaff_ESI;
  int8_t unaff_R14B;
  longlong in_stack_00000060;
  longlong in_stack_00000068;
  
  pcVar1 = _DAT_180c69f50;
  _guard_check_icall(_DAT_180c69f50);
  (*pcVar1)();
  pcVar1 = _DAT_180c69f48;
  if (in_stack_00000060 != 0) {
    _guard_check_icall(_DAT_180c69f48);
    (*pcVar1)(in_stack_00000060,0);
  }
  pcVar1 = _DAT_180c69f40;
  if (in_stack_00000068 != 0) {
    _guard_check_icall(_DAT_180c69f40);
    (*pcVar1)(in_stack_00000068);
  }
  SetLastError(unaff_ESI);
  return unaff_R14B;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_1808fb6d5(void)

{
  code *pcVar1;
  int32_t unaff_ESI;
  int8_t unaff_R14B;
  longlong in_stack_00000068;
  
  pcVar1 = _DAT_180c69f48;
  _guard_check_icall(_DAT_180c69f48);
  (*pcVar1)();
  pcVar1 = _DAT_180c69f40;
  if (in_stack_00000068 != 0) {
    _guard_check_icall(_DAT_180c69f40);
    (*pcVar1)(in_stack_00000068);
  }
  SetLastError(unaff_ESI);
  return unaff_R14B;
}






// 函数: void FUN_1808fb730(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1808fb730(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar1 = (uint64_t *)func_0x00018004b9a0();
  __stdio_common_vsprintf_s(*puVar1,0x180c6a160,0x8000,param_1,0,&uStackX_10);
  return;
}






// 函数: void FUN_1808fb790(void)
void FUN_1808fb790(void)

{
  FUN_1808fb7b0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fb7b0(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1808fb7b0(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int8_t *puVar6;
  ulonglong uVar7;
  int8_t auStack_a8 [32];
  void *puStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  int8_t auStack_68 [8];
  uint64_t uStack_60;
  int8_t auStack_58 [40];
  ulonglong uStack_30;
  ulonglong uVar8;
  
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  if (((_DAT_180c6a140 != 0) || (_DAT_180c6a158 != (code *)0x0)) || (DAT_180c6a14d != '\0')) {
    puVar4 = (uint64_t *)func_0x00018004b9a0();
    uStack_80 = param_5;
    puStack_88 = (void *)0x0;
    __stdio_common_vsprintf_s(*puVar4,0x180c72160,0x8000,param_4);
    uStack_60 = _time64(0);
    iVar3 = _localtime64_s(auStack_58,&uStack_60);
    puVar6 = auStack_58;
    if (iVar3 != 0) {
      puVar6 = (int8_t *)0x0;
    }
    if (puVar6 == (int8_t *)0x0) {
      puStack_88 = &UNK_18098b6a0;
      FUN_1808fb790(&UNK_18098b490,0x12d,&UNK_18098b6f0,&UNK_18098b6d0);
      if (DAT_180c821c0 != '\0') {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    strftime(0x180c7a160,0x8000,&UNK_18098b708,auStack_58);
    uStack_78 = 0x180c72160;
    uStack_80 = CONCAT44(uStack_80._4_4_,param_2);
    puStack_88 = (void *)param_3;
    FUN_1808fba80(0x180c7a160,0x8000,&UNK_18098b720,0x180c7a160);
    if (_DAT_180c6a140 != 0) {
      fputs(0x180c7a160);
      fflush(_DAT_180c6a140);
    }
    pcVar2 = _DAT_180c6a158;
    if (_DAT_180c6a158 != (code *)0x0) {
      _guard_check_icall(_DAT_180c6a158);
      (*pcVar2)(0x180c7a160);
    }
    if (DAT_180c6a14c != '\0') {
      uVar8 = 0xffffffffffffffff;
      do {
        uVar7 = uVar8 + 1;
        pcVar1 = (char *)(uVar8 + 0x180c7a161);
        uVar8 = uVar7;
      } while (*pcVar1 != '\0');
      uVar5 = GetStdHandle(0xfffffff5);
      puStack_88 = (void *)0x0;
      WriteConsoleA(uVar5,0x180c7a160,uVar7 & 0xffffffff,auStack_68);
    }
    if (DAT_180c6a14d != '\0') {
      uVar5 = __acrt_iob_func(1);
      FUN_1808fb9d0(uVar5,&UNK_18098b730,0x180c7a160);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fb7fc(void)
void FUN_1808fb7fc(void)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int8_t *puVar6;
  ulonglong uVar7;
  void *puVar9;
  uint64_t in_stack_00000048;
  ulonglong in_stack_00000078;
  ulonglong uVar8;
  
  puVar4 = (uint64_t *)func_0x00018004b9a0();
  puVar9 = (void *)0x0;
  __stdio_common_vsprintf_s(*puVar4,0x180c72160,0x8000);
  in_stack_00000048 = _time64(0);
  iVar3 = _localtime64_s(&stack0x00000050,&stack0x00000048);
  puVar6 = &stack0x00000050;
  if (iVar3 != 0) {
    puVar6 = (int8_t *)0x0;
  }
  if (puVar6 == (int8_t *)0x0) {
    puVar9 = &UNK_18098b6a0;
    FUN_1808fb790(&UNK_18098b490,0x12d,&UNK_18098b6f0,&UNK_18098b6d0,&UNK_18098b6a0);
    if (DAT_180c821c0 != '\0') {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  strftime(0x180c7a160,0x8000,&UNK_18098b708,&stack0x00000050,puVar9);
  FUN_1808fba80(0x180c7a160,0x8000,&UNK_18098b720,0x180c7a160);
  if (_DAT_180c6a140 != 0) {
    fputs(0x180c7a160);
    fflush(_DAT_180c6a140);
  }
  pcVar2 = _DAT_180c6a158;
  if (_DAT_180c6a158 != (code *)0x0) {
    _guard_check_icall(_DAT_180c6a158);
    (*pcVar2)(0x180c7a160);
  }
  if (DAT_180c6a14c != '\0') {
    uVar8 = 0xffffffffffffffff;
    do {
      uVar7 = uVar8 + 1;
      pcVar1 = (char *)(uVar8 + 0x180c7a161);
      uVar8 = uVar7;
    } while (*pcVar1 != '\0');
    uVar5 = GetStdHandle(0xfffffff5);
    WriteConsoleA(uVar5,0x180c7a160,uVar7 & 0xffffffff,&stack0x00000040,0);
  }
  if (DAT_180c6a14d != '\0') {
    uVar5 = __acrt_iob_func(1);
    FUN_1808fb9d0(uVar5,&UNK_18098b730,0x180c7a160);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000078 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fb8ed(void)
void FUN_1808fb8ed(void)

{
  code *pcVar1;
  uint64_t uVar2;
  longlong lVar3;
  char unaff_BPL;
  longlong unaff_RSI;
  ulonglong in_stack_00000078;
  
  fputs();
  fflush(_DAT_180c6a140);
  pcVar1 = _DAT_180c6a158;
  if (_DAT_180c6a158 != (code *)0x0) {
    _guard_check_icall(_DAT_180c6a158);
    (*pcVar1)();
  }
  if (DAT_180c6a14c != unaff_BPL) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(unaff_RSI + lVar3) != unaff_BPL);
    uVar2 = GetStdHandle(0xfffffff5);
    WriteConsoleA(uVar2);
  }
  if (DAT_180c6a14d != unaff_BPL) {
    uVar2 = __acrt_iob_func(1);
    FUN_1808fb9d0(uVar2,&UNK_18098b730);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000078 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fb9a0(void)
void FUN_1808fb9a0(void)

{
  if (1 < _DAT_180c6a148) {
    FUN_1808fb7b0();
  }
  return;
}






// 函数: void FUN_1808fb9d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1808fb9d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar1 = (uint64_t *)func_0x00018004b9a0();
  __stdio_common_vfprintf_s(*puVar1,param_1,param_2,0,&uStackX_18);
  return;
}



int FUN_1808fba20(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t uStackX_20;
  
  uStackX_20 = param_4;
  puVar2 = (uint64_t *)func_0x00018004b9a0();
  iVar1 = __stdio_common_vswprintf_s(*puVar2,param_1,param_2,param_3,0,&uStackX_20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



int FUN_1808fba80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t uStackX_20;
  
  uStackX_20 = param_4;
  puVar2 = (uint64_t *)func_0x00018004b9a0();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,param_2,param_3,0,&uStackX_20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1808fbae0(longlong param_1,char param_2)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lVar7;
  void *puVar8;
  longlong lVar9;
  bool bVar10;
  uint auStackX_18 [2];
  int aiStackX_20 [2];
  uint64_t auStack_48 [2];
  
  if (_DAT_180c6a140 != 0) {
    fclose();
    _DAT_180c6a140 = 0;
  }
  auStackX_18[0] = 0;
  iVar3 = RegOpenKeyExW(0xffffffff80000002,&UNK_18098b320,0,0x20019,auStack_48);
  if (iVar3 == 0) {
    aiStackX_20[0] = 4;
    iVar3 = RegQueryValueExW(auStack_48[0],&UNK_18098b418,0,0,&DAT_180c6a148,aiStackX_20);
    aiStackX_20[0] = 4;
    if (iVar3 != 0) {
      _DAT_180c6a148 = 0;
    }
    iVar3 = RegQueryValueExW(auStack_48[0],&UNK_18098b430,0,0,auStackX_18,aiStackX_20);
    if (iVar3 != 0) {
      auStackX_18[0] = 0;
    }
    RegCloseKey(auStack_48[0]);
  }
  if (_DAT_180c6a148 == 0) {
    return true;
  }
  _DAT_180c6a158 = OutputDebugStringA_exref;
  if (param_1 != 0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(short *)(param_1 + lVar4 * 2) != 0);
    if (lVar4 != 0) {
      puVar8 = &UNK_18098b464;
      if (param_2 != '\0') {
        puVar8 = &UNK_18098b45c;
      }
      _DAT_180c6a140 = _wfsopen(param_1,puVar8,0x20);
      if ((1 < _DAT_180c6a148) && (auStackX_18[0] != 0)) {
        uVar5 = GetConsoleWindow();
        aiStackX_20[0] = 0;
        GetWindowThreadProcessId(uVar5,aiStackX_20);
        iVar3 = GetCurrentProcessId();
        if (iVar3 != aiStackX_20[0]) {
          iVar3 = AllocConsole();



