#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part328.c - 17 个函数

// 函数: void FUN_18084b760(int64_t param_1,int64_t param_2)
void FUN_18084b760(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int8_t auStack_68 [32];
  byte abStack_48 [8];
  int8_t auStack_40 [40];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  if (1.1920929e-07 < *(float *)(param_2 + 0x94)) {
    *(int8_t *)(param_1 + 8) = 1;
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_68);
  }
  lVar2 = (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x288))
                    (*(int64_t **)(param_1 + 0x10),param_2 + 0xd8,1);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    SystemStateProcessor(param_2 + 0xd8,auStack_40);
  }
  abStack_48[0] = 0;
  iVar1 = FUN_1808479d0(lVar2,*(uint64_t *)(param_1 + 0x10),abStack_48);
  if (iVar1 == 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | abStack_48[0];
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084b830(int64_t param_1,int64_t param_2)
void FUN_18084b830(int64_t param_1,int64_t param_2)

{
  int32_t *puVar1;
  int64_t *plVar2;
  int32_t *puVar3;
  int8_t auStack_a8 [32];
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  uint uStack_58;
  uint uStack_50;
  uint uStack_48;
  uint uStack_40;
  int8_t auStack_38 [40];
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  *(bool *)(param_1 + 8) = *(int *)(param_2 + 0xb0) != -1;
  puVar3 = *(int32_t **)(param_2 + 0xd8);
  while (((puVar1 = *(int32_t **)(param_2 + 0xd8), puVar1 <= puVar3 &&
          (puVar3 < puVar1 + (int64_t)*(int *)(param_2 + 0xe0) * 5)) &&
         (*(char *)(param_1 + 8) != '\0'))) {
    plVar2 = (int64_t *)
             (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x128))
                       (*(int64_t **)(param_1 + 0x10),puVar3,
                        CONCAT71((int7)((uint64_t)puVar1 >> 8),1));
    if (plVar2 == (int64_t *)0x0) {
      uStack_40 = (uint)*(byte *)((int64_t)puVar3 + 0xf);
      uStack_48 = (uint)*(byte *)((int64_t)puVar3 + 0xe);
      uStack_50 = (uint)*(byte *)((int64_t)puVar3 + 0xd);
      uStack_58 = (uint)*(byte *)(puVar3 + 3);
      uStack_60 = (uint)*(byte *)((int64_t)puVar3 + 0xb);
      uStack_68 = (uint)*(byte *)((int64_t)puVar3 + 10);
      uStack_70 = (uint)*(byte *)((int64_t)puVar3 + 9);
      uStack_78 = (uint)*(byte *)(puVar3 + 2);
      uStack_80 = (uint)*(ushort *)((int64_t)puVar3 + 6);
      uStack_88 = (uint)*(ushort *)(puVar3 + 1);
                    // WARNING: Subroutine does not return
      SystemValidationProcessor(auStack_38,0x27,&unknown_var_8960_ptr,*puVar3);
    }
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
    puVar3 = puVar3 + 5;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_a8);
}





// 函数: void FUN_18084b92d(void)
void FUN_18084b92d(void)

{
                    // WARNING: Subroutine does not return
  SystemValidationProcessor();
}





// 函数: void FUN_18084b955(void)
void FUN_18084b955(void)

{
  uint64_t in_stack_00000098;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000098 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084b990(int64_t *param_1,int64_t param_2,int64_t *param_3)
void FUN_18084b990(int64_t *param_1,int64_t param_2,int64_t *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  int32_t uVar11;
  char cVar12;
  int iVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t *plVar16;
  int32_t *puVar17;
  int32_t *puVar18;
  int8_t auStack_c8 [32];
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  int8_t auStack_58 [40];
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  (**(code **)(*param_1 + 0x48))();
  cVar12 = (**(code **)(*param_1 + 0x50))(param_1);
  if (cVar12 != '\0') {
    for (puVar18 = *(int32_t **)(param_2 + 0x80);
        (*(int32_t **)(param_2 + 0x80) <= puVar18 &&
        (puVar18 < *(int32_t **)(param_2 + 0x80) + (int64_t)*(int *)(param_2 + 0x88) * 4));
        puVar18 = puVar18 + 4) {
      lVar14 = (**(code **)(*param_3 + 0x270))(param_3,puVar18,1);
      if (lVar14 == 0) {
        bVar2 = *(byte *)((int64_t)puVar18 + 0xf);
        bVar3 = *(byte *)((int64_t)puVar18 + 0xe);
        bVar4 = *(byte *)((int64_t)puVar18 + 0xd);
        bVar5 = *(byte *)(puVar18 + 3);
        bVar1 = *(byte *)((int64_t)puVar18 + 0xb);
        bVar6 = *(byte *)((int64_t)puVar18 + 10);
        bVar7 = *(byte *)((int64_t)puVar18 + 9);
        bVar8 = *(byte *)(puVar18 + 2);
        uVar9 = *(ushort *)((int64_t)puVar18 + 6);
        uVar10 = *(ushort *)(puVar18 + 1);
        uVar11 = *puVar18;
LAB_18084bb6f:
        uStack_60 = (uint)bVar2;
        uStack_68 = (uint)bVar3;
        uStack_70 = (uint)bVar4;
        uStack_78 = (uint)bVar5;
        uStack_80 = (uint)bVar1;
        uStack_88 = (uint)bVar6;
        uStack_90 = (uint)bVar7;
        uStack_a8 = (uint)uVar10;
        uStack_a0 = (uint)uVar9;
        uStack_98 = (uint)bVar8;
                    // WARNING: Subroutine does not return
        SystemValidationProcessor(auStack_58,0x27,&unknown_var_8960_ptr,uVar11);
      }
      lVar15 = (**(code **)(*param_3 + 0x278))(param_3,lVar14 + 0x38,1);
      if (lVar15 == 0) {
                    // WARNING: Subroutine does not return
        SystemStateProcessor(lVar14 + 0x38,auStack_58);
      }
      for (puVar17 = *(int32_t **)(lVar14 + 0x58);
          (*(int32_t **)(lVar14 + 0x58) <= puVar17 &&
          (puVar17 < *(int32_t **)(lVar14 + 0x58) + (int64_t)*(int *)(lVar14 + 0x60) * 4));
          puVar17 = puVar17 + 4) {
        plVar16 = (int64_t *)(**(code **)(*param_3 + 0x128))(param_3,puVar17,1);
        if (plVar16 == (int64_t *)0x0) {
          bVar1 = *(byte *)((int64_t)puVar17 + 0xb);
          bVar2 = *(byte *)((int64_t)puVar17 + 0xf);
          bVar3 = *(byte *)((int64_t)puVar17 + 0xe);
          bVar4 = *(byte *)((int64_t)puVar17 + 0xd);
          bVar5 = *(byte *)(puVar17 + 3);
          bVar6 = *(byte *)((int64_t)puVar17 + 10);
          bVar7 = *(byte *)((int64_t)puVar17 + 9);
          bVar8 = *(byte *)(puVar17 + 2);
          uVar9 = *(ushort *)((int64_t)puVar17 + 6);
          uVar10 = *(ushort *)(puVar17 + 1);
          uVar11 = *puVar17;
          goto LAB_18084bb6f;
        }
        iVar13 = (**(code **)(*plVar16 + 0x28))(plVar16,param_1);
        if ((iVar13 != 0) || (cVar12 = (**(code **)(*param_1 + 0x50))(param_1), cVar12 == '\0'))
        goto LAB_18084bb9a;
      }
    }
  }
LAB_18084bb9a:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084bbd0(int64_t param_1,int64_t param_2)
void FUN_18084bbd0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t *plVar2;
  int32_t *puVar3;
  int8_t auStack_b8 [32];
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  uint uStack_58;
  uint uStack_50;
  int8_t auStack_48 [40];
  uint64_t uStack_20;
  
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  if (*(float *)(param_2 + 0x94) <= 1.1920929e-07) {
    for (puVar3 = *(int32_t **)(param_2 + 0xd8);
        (*(int32_t **)(param_2 + 0xd8) <= puVar3 &&
        (puVar3 < *(int32_t **)(param_2 + 0xd8) + (int64_t)*(int *)(param_2 + 0xe0) * 5));
        puVar3 = puVar3 + 5) {
      plVar2 = (int64_t *)
               (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x128))
                         (*(int64_t **)(param_1 + 0x10),puVar3,1);
      if (plVar2 == (int64_t *)0x0) {
        uStack_50 = (uint)*(byte *)((int64_t)puVar3 + 0xf);
        uStack_58 = (uint)*(byte *)((int64_t)puVar3 + 0xe);
        uStack_60 = (uint)*(byte *)((int64_t)puVar3 + 0xd);
        uStack_68 = (uint)*(byte *)(puVar3 + 3);
        uStack_70 = (uint)*(byte *)((int64_t)puVar3 + 0xb);
        uStack_78 = (uint)*(byte *)((int64_t)puVar3 + 10);
        uStack_80 = (uint)*(byte *)((int64_t)puVar3 + 9);
        uStack_88 = (uint)*(byte *)(puVar3 + 2);
        uStack_90 = (uint)*(ushort *)((int64_t)puVar3 + 6);
        uStack_98 = (uint)*(ushort *)(puVar3 + 1);
                    // WARNING: Subroutine does not return
        SystemValidationProcessor(auStack_48,0x27,&unknown_var_8960_ptr,*puVar3);
      }
      iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
      if (iVar1 != 0) break;
    }
  }
  else {
    *(int8_t *)(param_1 + 8) = 1;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_20 ^ (uint64_t)auStack_b8);
}





// 函数: void FUN_18084bc0e(uint64_t param_1,int64_t param_2)
void FUN_18084bc0e(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t *plVar2;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int32_t *puVar3;
  uint64_t in_stack_00000098;
  
  for (puVar3 = *(int32_t **)(param_2 + 0xd8);
      (*(int32_t **)(unaff_RBX + 0xd8) <= puVar3 &&
      (puVar3 < *(int32_t **)(unaff_RBX + 0xd8) + (int64_t)*(int *)(unaff_RBX + 0xe0) * 5));
      puVar3 = puVar3 + 5) {
    plVar2 = (int64_t *)
             (**(code **)(**(int64_t **)(unaff_RDI + 0x10) + 0x128))
                       (*(int64_t **)(unaff_RDI + 0x10),puVar3,1);
    if (plVar2 == (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      SystemValidationProcessor(&stack0x00000070,0x27,&unknown_var_8960_ptr,*puVar3,*(int16_t *)(puVar3 + 1));
    }
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (iVar1 != 0) break;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000098 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18084bcd6(void)
void FUN_18084bcd6(void)

{
  int64_t unaff_R14;
  uint uStack0000000000000028;
  
  uStack0000000000000028 = (uint)*(ushort *)(unaff_R14 + 6);
                    // WARNING: Subroutine does not return
  SystemValidationProcessor();
}





// 函数: void FUN_18084bd18(void)
void FUN_18084bd18(void)

{
  uint64_t in_stack_00000098;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000098 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18084bd22(void)
void FUN_18084bd22(void)

{
  uint64_t in_stack_00000098;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000098 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084be00(int64_t *param_1,int64_t param_2,int64_t *param_3)
void FUN_18084be00(int64_t *param_1,int64_t param_2,int64_t *param_3)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int8_t auStack_c8 [32];
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  int8_t auStack_58 [40];
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  (**(code **)(*param_1 + 0x40))();
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*param_3 + 0x2f0))(param_3,param_2 + 0x30,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      SystemStateProcessor(param_2 + 0x30,auStack_58);
    }
    for (uVar5 = *(uint64_t *)(lVar3 + 0x38);
        (*(uint64_t *)(lVar3 + 0x38) <= uVar5 &&
        (uVar5 < *(uint64_t *)(lVar3 + 0x38) + (int64_t)*(int *)(lVar3 + 0x40) * 0x18));
        uVar5 = uVar5 + 0x18) {
      plVar4 = (int64_t *)(**(code **)(*param_3 + 0x128))(param_3,uVar5,1);
      if (plVar4 == (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
        SystemStateProcessor(uVar5,auStack_58);
      }
      iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
      if ((iVar2 != 0) || (cVar1 = (**(code **)(*param_1 + 0x50))(param_1), cVar1 == '\0'))
      goto LAB_18084bff4;
    }
    cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    if (cVar1 != '\0') {
      for (puVar6 = *(int32_t **)(lVar3 + 0x48);
          (*(int32_t **)(lVar3 + 0x48) <= puVar6 &&
          (puVar6 < *(int32_t **)(lVar3 + 0x48) + (int64_t)*(int *)(lVar3 + 0x50) * 6));
          puVar6 = puVar6 + 6) {
        plVar4 = (int64_t *)(**(code **)(*param_3 + 0x128))(param_3,puVar6,1);
        if (plVar4 == (int64_t *)0x0) {
          uStack_60 = (uint)*(byte *)((int64_t)puVar6 + 0xf);
          uStack_68 = (uint)*(byte *)((int64_t)puVar6 + 0xe);
          uStack_70 = (uint)*(byte *)((int64_t)puVar6 + 0xd);
          uStack_78 = (uint)*(byte *)(puVar6 + 3);
          uStack_80 = (uint)*(byte *)((int64_t)puVar6 + 0xb);
          uStack_88 = (uint)*(byte *)((int64_t)puVar6 + 10);
          uStack_90 = (uint)*(byte *)((int64_t)puVar6 + 9);
          uStack_98 = (uint)*(byte *)(puVar6 + 2);
          uStack_a0 = (uint)*(ushort *)((int64_t)puVar6 + 6);
          uStack_a8 = (uint)*(ushort *)(puVar6 + 1);
                    // WARNING: Subroutine does not return
          SystemValidationProcessor(auStack_58,0x27,&unknown_var_8960_ptr,*puVar6);
        }
        iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
        if ((iVar2 != 0) || (cVar1 = (**(code **)(*param_1 + 0x50))(param_1), cVar1 == '\0')) break;
      }
    }
  }
LAB_18084bff4:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_c8);
}





// 函数: void FUN_18084bfc9(void)
void FUN_18084bfc9(void)

{
                    // WARNING: Subroutine does not return
  SystemValidationProcessor();
}





// 函数: void FUN_18084bff2(void)
void FUN_18084bff2(void)

{
  uint64_t in_stack_00000098;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000098 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_180848e50(char *param_1,uint64_t *param_2)

{
  char *pcVar1;
  char cVar2;
  int8_t uVar3;
  int16_t uVar4;
  int iVar5;
  char *pcVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  int64_t lVar9;
  int8_t *puVar10;
  int8_t auStack_b8 [32];
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int8_t *apuStack_88 [5];
  int8_t uStack_60;
  int8_t auStack_5f [8];
  int8_t uStack_57;
  int8_t auStack_56 [4];
  int8_t uStack_52;
  int8_t auStack_51 [4];
  int8_t uStack_4d;
  int8_t auStack_4c [4];
  int8_t uStack_48;
  int8_t auStack_47 [10];
  int8_t auStack_3d [5];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  if (param_2 != (uint64_t *)0x0) {
    if ((((param_1 == (char *)0x0) || (iVar5 = func_0x00018076b690(), iVar5 != 0x26)) ||
        (*param_1 != '{')) || (param_1[0x25] != '}')) {
FUN_180848ff1:
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      func_0x00018076b450(&uStack_60,param_1,0x27);
      uStack_57 = 0;
      apuStack_88[0] = auStack_5f;
      lVar9 = 0;
      uStack_52 = 0;
      apuStack_88[1] = auStack_56;
      uStack_4d = 0;
      apuStack_88[2] = auStack_51;
      apuStack_88[3] = auStack_4c;
      apuStack_88[4] = auStack_47;
      uStack_48 = 0;
      auStack_3d[2] = 0;
      do {
        pcVar6 = apuStack_88[lVar9];
        cVar2 = *pcVar6;
        while (cVar2 != '\0') {
          if (((9 < (byte)(cVar2 - 0x30U)) && (5 < (byte)(cVar2 + 0xbfU))) &&
             (5 < (byte)(cVar2 + 0x9fU))) goto FUN_180848ff1;
          pcVar1 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar1;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < 5);
      uStack_98 = func_0x00018076b320(auStack_5f);
      uVar4 = func_0x00018076b320(auStack_56);
      uStack_94 = CONCAT22(uStack_94._2_2_,uVar4);
      uVar4 = func_0x00018076b320(auStack_51);
      uStack_94 = CONCAT22(uVar4,(int16_t)uStack_94);
      uVar4 = func_0x00018076b320(auStack_4c);
      puVar8 = (int8_t *)((int64_t)&uStack_8c + 3);
      uStack_90 = CONCAT31(CONCAT21(uStack_90._2_2_,(char)uVar4),(char)((ushort)uVar4 >> 8));
      puVar7 = auStack_3d;
      iVar5 = 5;
      puVar10 = auStack_3d;
      do {
        uVar3 = func_0x00018076b320(puVar10);
        puVar10 = puVar10 + -2;
        *puVar8 = uVar3;
        iVar5 = iVar5 + -1;
        *puVar7 = 0;
        puVar8 = puVar8 + -1;
        puVar7 = puVar7 + -2;
      } while (-1 < iVar5);
      *(int32_t *)param_2 = uStack_98;
      *(int32_t *)((int64_t)param_2 + 4) = uStack_94;
      *(int32_t *)(param_2 + 1) = uStack_90;
      *(int32_t *)((int64_t)param_2 + 0xc) = uStack_8c;
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_b8);
}



uint64_t * FUN_18084c050(uint64_t *param_1,uint64_t param_2,byte param_3)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  FUN_1808b0200();
  *param_1 = &unknown_var_1408_ptr;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = &unknown_var_1456_ptr;
  *(int32_t *)(param_1 + 10) = 0;
  *(int32_t *)((int64_t)param_1 + 0x54) = 0xffffffff;
  puVar2 = (uint64_t *)SystemDataFlowProcessor();
  uVar1 = puVar2[1];
  param_1[0xb] = *puVar2;
  param_1[0xc] = uVar1;
  *param_1 = &unknown_var_1472_ptr;
  param_1[9] = &unknown_var_1520_ptr;
  param_1[0xd] = 0;
  *(int16_t *)((int64_t)param_1 + 0x74) = 0;
  *(int32_t *)(param_1 + 0xe) = 0x3f800000;
  param_1[0xf] = 0xffffffffffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint *)((int64_t)param_1 + 0xc4) = (uint)param_3;
  *(int32_t *)((int64_t)param_1 + 0xd4) = 0;
  *(int32_t *)(param_1 + 0x19) = 0xffffffff;
  *(uint64_t *)((int64_t)param_1 + 0xcc) = 0x7fffffff;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00018084c49f)
// WARNING: Removing unreachable block (ram,0x00018084c4b4)
// WARNING: Removing unreachable block (ram,0x00018084c4ea)
// WARNING: Removing unreachable block (ram,0x00018084c4f2)
// WARNING: Removing unreachable block (ram,0x00018084c4fa)
// WARNING: Removing unreachable block (ram,0x00018084c500)
// WARNING: Removing unreachable block (ram,0x00018084c55b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_18084c150(int64_t *param_1)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  uint uVar5;
  
  uVar5 = *(uint *)((int64_t)param_1 + 0xc);
  uVar2 = uVar5 ^ (int)uVar5 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar5) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar5 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    puVar4 = (int32_t *)(*param_1 + (int64_t)iVar1 * 4);
    if (iVar1 < 0) {
      uVar3 = (uint64_t)(uint)-iVar1;
      do {
        if (puVar4 != (int32_t *)0x0) {
          *puVar4 = 0;
        }
        puVar4 = puVar4 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar5 = *(uint *)((int64_t)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar5 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  if ((int)uVar5 < 1) {
    return uVar5;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00018074803f)
// WARNING: Removing unreachable block (ram,0x000180748050)
// WARNING: Removing unreachable block (ram,0x000180748086)
// WARNING: Removing unreachable block (ram,0x00018074808e)
// WARNING: Removing unreachable block (ram,0x0001807480eb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_18084c220(int64_t *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  uVar2 = uVar3 ^ (int)uVar3 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
    memset((int64_t)iVar1 * 0x10 + *param_1,0,(int64_t)-iVar1 << 4);
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084c2d0(uint64_t *param_1)
void FUN_18084c2d0(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  
  *param_1 = &unknown_var_1472_ptr;
  param_1[9] = &unknown_var_1520_ptr;
  if (param_1[0xd] != 0) {
    FUN_18088c8a0();
  }
  FUN_18084c150(param_1 + 0x16);
  FUN_18084c150(param_1 + 0x14);
  FUN_18084c220(param_1 + 0x12);
  FUN_18084c220(param_1 + 0x10);
  FUN_18084c220(param_1 + 7);
  *param_1 = &unknown_var_936_ptr;
  plVar1 = param_1 + 4;
  plVar2 = (int64_t *)*plVar1;
  if ((plVar2 == plVar1) && ((int64_t *)param_1[5] == plVar1)) {
    func_0x00018085dda0(plVar1);
    *param_1 = &unknown_var_1544_ptr;
    *(int32_t *)(param_1 + 1) = 0xdeadf00d;
    return;
  }
  plVar3 = (int64_t *)0x0;
  if (plVar2 != plVar1) {
    plVar3 = plVar2;
  }
  *(int32_t *)((int64_t)plVar3 + 0x44) = 0xffffffff;
  FUN_18084c220(plVar3 + 4);
  FUN_18084c220(plVar3 + 2);
  *(int64_t *)plVar3[1] = *plVar3;
  *(int64_t *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (int64_t)plVar3;
  *plVar3 = (int64_t)plVar3;
  *(int64_t **)plVar3[1] = plVar3;
  *(int64_t *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (int64_t)plVar3;
  *plVar3 = (int64_t)plVar3;
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&unknown_var_976_ptr,0x30,1);
}



uint64_t FUN_18084c350(uint64_t param_1,uint64_t param_2)

{
  FUN_18084c2d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd8);
  }
  return param_1;
}



int64_t FUN_18084c390(int64_t param_1,uint64_t param_2)

{
  FUN_18084c220(param_1 + 0x38);
  FUN_1808b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x48);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084c470(int64_t *param_1,int param_2)

{
  int iVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int64_t lVar4;
  int32_t *puVar5;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar3 = (int32_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 4 - 1U < 0x3fffffff) {
      puVar3 = (int32_t *)
               FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 4,&unknown_var_8432_ptr,0xf4
                             ,0,0,1);
      if (puVar3 != (int32_t *)0x0) {
        iVar1 = (int)param_1[1];
        lVar4 = (int64_t)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar5 = puVar3;
          do {
            *puVar5 = *(int32_t *)((lVar2 - (int64_t)puVar3) + (int64_t)puVar5);
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        goto LAB_18084c510;
      }
    }
    return 0x26;
  }
LAB_18084c510:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar3;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084c494(uint64_t param_1,int param_2)

{
  int iVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int64_t lVar4;
  int32_t *puVar5;
  int64_t *unaff_RBX;
  int unaff_EDI;
  
  puVar3 = (int32_t *)0x0;
  if (unaff_EDI == 0) {
LAB_18084c510:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar3;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 4 - 1U < 0x3fffffff) {
    puVar3 = (int32_t *)
             FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 4,&unknown_var_8432_ptr,0xf4,0
                          );
    if (puVar3 != (int32_t *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar4 = (int64_t)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar5 = puVar3;
        do {
          *puVar5 = *(int32_t *)((lVar2 - (int64_t)puVar3) + (int64_t)puVar5);
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      goto LAB_18084c510;
    }
  }
  return 0x26;
}



uint64_t FUN_18084c55b(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084c5a0(int64_t *param_1)
void FUN_18084c5a0(int64_t *param_1)

{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint uVar8;
  
  uVar8 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return;
    }
    if ((0 < (int)uVar8) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
    uVar8 = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    lVar7 = (int64_t)-iVar1;
    if (iVar1 < 0) {
      lVar6 = *param_1 + 0x14 + (int64_t)iVar1 * 0x18;
      do {
        puVar5 = (int32_t *)SystemDataFlowProcessor();
        uVar2 = puVar5[1];
        uVar3 = puVar5[2];
        uVar4 = puVar5[3];
        *(int32_t *)(lVar6 + -0x14) = *puVar5;
        *(int32_t *)(lVar6 + -0x10) = uVar2;
        *(int32_t *)(lVar6 + -0xc) = uVar3;
        *(int32_t *)(lVar6 + -8) = uVar4;
        *(uint64_t *)(lVar6 + -4) = 0;
        lVar7 = lVar7 + -1;
        lVar6 = lVar6 + 0x18;
      } while (lVar7 != 0);
      uVar8 = *(uint *)((int64_t)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if (0 < (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f))) {
    FUN_18084d3f0(param_1,0);
  }
  return;
}





// 函数: void FUN_18084c612(int32_t param_1,int param_2,uint param_3)
void FUN_18084c612(int32_t param_1,int param_2,uint param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t in_RAX;
  int32_t *puVar4;
  int64_t in_RCX;
  int64_t lVar5;
  uint64_t unaff_RBP;
  int64_t lVar6;
  int64_t unaff_RDI;
  
  lVar6 = (int64_t)param_2;
  if (0 < param_2) {
    lVar5 = in_RAX + 0x14 + in_RCX * 8;
    do {
      puVar4 = (int32_t *)SystemDataFlowProcessor();
      param_1 = *puVar4;
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      *(int32_t *)(lVar5 + -0x14) = param_1;
      *(int32_t *)(lVar5 + -0x10) = uVar1;
      *(int32_t *)(lVar5 + -0xc) = uVar2;
      *(int32_t *)(lVar5 + -8) = uVar3;
      *(uint64_t *)(lVar5 + -4) = unaff_RBP;
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 != 0);
    param_3 = *(uint *)(unaff_RDI + 0xc);
  }
  *(int *)(unaff_RDI + 8) = (int)unaff_RBP;
  if (0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) {
    FUN_18084d3f0(param_1,0);
  }
  return;
}





// 函数: void FUN_18084c61e(int64_t param_1)
void FUN_18084c61e(int64_t param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t in_RAX;
  int32_t *puVar5;
  uint uVar6;
  int64_t lVar7;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  lVar7 = in_RAX + 0x14 + param_1 * 8;
  do {
    puVar5 = (int32_t *)SystemDataFlowProcessor();
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(int32_t *)(lVar7 + -0x14) = uVar1;
    *(int32_t *)(lVar7 + -0x10) = uVar2;
    *(int32_t *)(lVar7 + -0xc) = uVar3;
    *(int32_t *)(lVar7 + -8) = uVar4;
    *(uint64_t *)(lVar7 + -4) = unaff_RBP;
    unaff_RSI = unaff_RSI + -1;
    lVar7 = lVar7 + 0x18;
  } while (unaff_RSI != 0);
  *(int *)(unaff_RDI + 8) = (int)unaff_RBP;
  uVar6 = (int)*(uint *)(unaff_RDI + 0xc) >> 0x1f;
  if (0 < (int)((*(uint *)(unaff_RDI + 0xc) ^ uVar6) - uVar6)) {
    FUN_18084d3f0(uVar1,0);
  }
  return;
}





