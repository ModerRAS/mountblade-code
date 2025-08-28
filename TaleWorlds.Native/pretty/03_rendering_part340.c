#include "TaleWorlds.Native.Split.h"

// 03_rendering_part340.c - 13 个函数

// 函数: void FUN_18044baf0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_18044baf0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint64_t uVar2;
  void *puVar3;
  void *puVar4;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3c8) + 0x18);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x3c8) + 0x18);
      plStackX_8 = plVar1;
      if (plVar1 == (longlong *)0x0) {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_2 + 0x1f8) != (void *)0x0) {
          puVar4 = *(void **)(param_2 + 0x1f8);
        }
        puVar3 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1f8) != (void *)0x0) {
          puVar3 = *(void **)(param_1 + 0x1f8);
        }
        FUN_1806272a0(&UNK_180a2a510,puVar3,puVar4,param_4,0,0xfffffffffffffffe);
      }
      else {
        (**(code **)(*plVar1 + 0x28))(plVar1);
        (**(code **)(*plVar1 + 0x38))(plVar1);
        pplStackX_10 = &plStackX_8;
        uVar2 = FUN_1800f8fc0(*(uint64_t *)(param_2 + 0x3c8),&plStackX_8);
        FUN_1802829c0(param_1,uVar2);
      }
    }
    else {
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044bc50(uint64_t param_1,longlong param_2,int param_3,uint64_t param_4)
void FUN_18044bc50(uint64_t param_1,longlong param_2,int param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint64_t *puVar7;
  int8_t uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint64_t uVar12;
  uint64_t *puStack_78;
  uint64_t *puStack_70;
  uint64_t *puStack_68;
  int32_t uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  int32_t uStack_40;
  
  uVar12 = 0xfffffffffffffffe;
  puStack_78 = (uint64_t *)0x0;
  puStack_70 = (uint64_t *)0x0;
  lVar10 = 0;
  puStack_68 = (uint64_t *)0x0;
  uStack_60 = 3;
  lVar5 = (longlong)param_3;
  lVar11 = lVar5;
  FUN_1800e8140(&puStack_78,lVar5);
  puVar4 = puStack_68;
  puVar7 = puStack_78;
  puVar3 = puStack_78;
  uVar8 = (int8_t)uStack_60;
  if (0 < lVar5) {
    do {
      puVar2 = puStack_70;
      puVar3 = (uint64_t *)0x0;
      uVar1 = *(uint64_t *)(param_2 + lVar10 * 8);
      if (puStack_70 < puVar4) {
        *puStack_70 = uVar1;
        puVar3 = puVar7;
      }
      else {
        lVar9 = (longlong)puStack_70 - (longlong)puVar7;
        lVar5 = lVar9 >> 3;
        if (lVar5 == 0) {
          lVar5 = 1;
LAB_18044bd13:
          puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar5 * 8,uVar8,param_4,lVar11,uVar12)
          ;
        }
        else {
          lVar5 = lVar5 * 2;
          if (lVar5 != 0) goto LAB_18044bd13;
        }
        if (puVar7 != puVar2) {
                    // WARNING: Subroutine does not return
          memmove(puVar3,puVar7,lVar9);
        }
        *puVar3 = uVar1;
        if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar7);
        }
        puVar4 = puVar3 + lVar5;
        puStack_78 = puVar3;
        puStack_68 = puVar4;
        uVar8 = (int8_t)uStack_60;
        puStack_70 = puVar3;
      }
      puStack_70 = puStack_70 + 1;
      lVar10 = lVar10 + 1;
      puVar7 = puVar3;
    } while (lVar10 < lVar11);
  }
  puVar4 = puStack_70;
  uVar6 = (longlong)puStack_70 - (longlong)puVar3;
  uStack_40 = uStack_60;
  if (uVar6 < 8) {
    lStack_58 = 0;
  }
  else {
    lStack_58 = FUN_18062b420(_DAT_180c8ed18,((longlong)uVar6 >> 3) * 8,uVar8,param_4,lVar11,uVar12)
    ;
  }
  lStack_48 = lStack_58 + ((longlong)uVar6 >> 3) * 8;
  lStack_50 = lStack_58;
  if (puVar3 != puVar4) {
                    // WARNING: Subroutine does not return
    memmove(lStack_58,puVar3,uVar6);
  }
  FUN_18027f510(param_1,&lStack_58);
  if (puVar3 == (uint64_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Removing unreachable block (ram,0x00018044becb)
// WARNING: Removing unreachable block (ram,0x00018044bf0a)



// 函数: void FUN_18044be30(longlong param_1)
void FUN_18044be30(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plStack_70;
  int8_t auStack_68 [8];
  longlong *plStack_60;
  int32_t uStack_58;
  longlong *plStack_50;
  int16_t uStack_48;
  char cStack_46;
  
  uVar4 = 0;
  lVar3 = *(longlong *)(param_1 + 0x38);
  uVar6 = uVar4;
  if (*(longlong *)(param_1 + 0x40) - lVar3 >> 4 != 0) {
    do {
      plVar1 = *(longlong **)(uVar4 + lVar3);
      if (plVar1[0x42] == 0) {
        plVar1[0x3f] = 0;
        plVar1[0x40] = 0;
        *(int32_t *)(plVar1 + 0x41) = 0;
        FUN_180079520(plVar1);
      }
      else {
        (**(code **)(*plVar1 + 0x28))();
        plStack_50 = (longlong *)0x0;
        plStack_60 = (longlong *)0x0;
        auStack_68[0] = 0;
        (**(code **)(*plVar1 + 0x28))(plVar1);
        uStack_58 = 0;
        plStack_60 = plVar1;
        FUN_18007f4c0(auStack_68);
        plVar2 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          (**(code **)(*plStack_50 + 0x28))(plStack_50);
        }
        plStack_70 = plVar2;
        uStack_48 = 0;
        cStack_46 = '\0';
        (**(code **)(*plVar1 + 0x38))(plVar1);
        *(int32_t *)(plVar2 + 2) = 0;
        *(int32_t *)(plVar2 + 7) = 0;
        *(int32_t *)(plVar2 + 0x11) = 0;
        *(int32_t *)(plVar2 + 0xc) = 0;
        *(int16_t *)(plVar2 + 0x18) = 0;
        if (plVar2[0x17] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar2[0x17] = 0;
        FUN_180085530(plVar2[0x16]);
        plVar2[0x16] = 0;
        *(int32_t *)(plVar2 + 0x19) = 0;
        uStack_48 = 0x101;
        if ((plVar1 != (longlong *)0x0) && (plVar2 != (longlong *)0x0)) {
          if (cStack_46 != '\0') {
            FUN_180075b70();
          }
          FUN_18007f6a0(auStack_68);
          if ((char)uStack_48 != '\0') {
            FUN_180079520(plVar1);
          }
          if (uStack_48._1_1_ != '\0') {
            FUN_180079520(plVar1);
          }
          plStack_70 = (longlong *)0x0;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x38))();
          }
        }
        FUN_18007f6a0(auStack_68);
        if (plStack_50 != (longlong *)0x0) {
          (**(code **)(*plStack_50 + 0x38))();
        }
        if (plStack_70 != (longlong *)0x0) {
          (**(code **)(*plStack_70 + 0x38))();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 0x10;
      lVar3 = *(longlong *)(param_1 + 0x38);
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(param_1 + 0x40) - lVar3 >> 4));
  }
  return;
}





// 函数: void FUN_18044c0d0(longlong param_1,uint param_2)
void FUN_18044c0d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4 != 0) {
    lVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x38));
      *(ulonglong *)(lVar1 + 0x1a0) =
           CONCAT44((float)(param_2 >> 8 & 0xff) * 0.003921569,
                    (float)(param_2 >> 0x10 & 0xff) * 0.003921569);
      *(ulonglong *)(lVar1 + 0x1a8) =
           CONCAT44((float)(param_2 >> 0x18) * 0.003921569,(float)(param_2 & 0xff) * 0.003921569);
      lVar3 = lVar3 + 0x10;
    } while ((ulonglong)(longlong)iVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4));
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018044c324)
// WARNING: Removing unreachable block (ram,0x00018044c32d)
// WARNING: Removing unreachable block (ram,0x00018044c2c7)
// WARNING: Removing unreachable block (ram,0x00018044c2cd)
// WARNING: Removing unreachable block (ram,0x00018044c2d0)
// WARNING: Removing unreachable block (ram,0x00018044c2fe)
// WARNING: Removing unreachable block (ram,0x00018044c308)
// WARNING: Removing unreachable block (ram,0x00018044c30c)
// WARNING: Removing unreachable block (ram,0x00018044c37a)
// WARNING: Removing unreachable block (ram,0x00018044c353)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044c190(longlong param_1,longlong *param_2,longlong param_3)
void FUN_18044c190(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int32_t uVar3;
  int8_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar8;
  int iStackX_10;
  longlong lStackX_20;
  longlong *plStack_88;
  uint64_t uStack_80;
  void *puStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  ulonglong uStack_60;
  void *puStack_58;
  int8_t *puStack_50;
  int32_t uStack_48;
  ulonglong uStack_40;
  longlong lVar7;
  
  uStack_80 = 0xfffffffffffffffe;
  iStackX_10 = 0;
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x40) - lVar5 >> 4 != 0) {
    lStackX_20 = 0;
    do {
      lVar5 = *(longlong *)(lStackX_20 + lVar5);
      puStack_58 = &UNK_180a3c3e0;
      uStack_40 = 0;
      puStack_50 = (int8_t *)0x0;
      uStack_48 = 0;
      if (param_3 != 0) {
        lVar6 = -1;
        do {
          lVar7 = lVar6;
          lVar6 = lVar7 + 1;
        } while (*(char *)(param_3 + lVar6) != '\0');
        if ((int)lVar6 != 0) {
          iVar8 = (int)lVar7 + 2;
          iVar2 = iVar8;
          if (iVar8 < 0x10) {
            iVar2 = 0x10;
          }
          puVar4 = (int8_t *)
                   FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,
                                 CONCAT71((int7)((ulonglong)lStackX_20 >> 8),0x13));
          *puVar4 = 0;
          puStack_50 = puVar4;
          uVar3 = FUN_18064e990(puVar4);
          uStack_40 = CONCAT44(uStack_40._4_4_,uVar3);
                    // WARNING: Subroutine does not return
          memcpy(puVar4,param_3,iVar8);
        }
      }
      uStack_48 = 0;
      puStack_78 = &UNK_180a3c3e0;
      uStack_60 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      cVar1 = FUN_180063510(lVar5 + 0x218,&puStack_78);
      uStack_70 = 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      puStack_78 = &UNK_18098bcb0;
      puStack_50 = (int8_t *)0x0;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      puStack_58 = &UNK_18098bcb0;
      if (cVar1 != '\0') {
        plStack_88 = param_2;
        if (param_2 != (longlong *)0x0) {
          (**(code **)(*param_2 + 0x28))(param_2);
        }
        FUN_180076910(lVar5,&plStack_88);
        if (param_2 != (longlong *)0x0) {
          (**(code **)(*param_2 + 0x38))(param_2);
        }
      }
      iStackX_10 = iStackX_10 + 1;
      lStackX_20 = lStackX_20 + 0x10;
      lVar5 = *(longlong *)(param_1 + 0x38);
    } while ((ulonglong)(longlong)iStackX_10 <
             (ulonglong)(*(longlong *)(param_1 + 0x40) - lVar5 >> 4));
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018044c5c3)
// WARNING: Removing unreachable block (ram,0x00018044c5cc)
// WARNING: Removing unreachable block (ram,0x00018044c566)
// WARNING: Removing unreachable block (ram,0x00018044c56c)
// WARNING: Removing unreachable block (ram,0x00018044c56f)
// WARNING: Removing unreachable block (ram,0x00018044c59d)
// WARNING: Removing unreachable block (ram,0x00018044c5a7)
// WARNING: Removing unreachable block (ram,0x00018044c5ab)
// WARNING: Removing unreachable block (ram,0x00018044c619)
// WARNING: Removing unreachable block (ram,0x00018044c5f2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044c420(longlong param_1,uint param_2,longlong param_3)
void FUN_18044c420(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int32_t uVar4;
  int8_t *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint64_t uVar13;
  void *puStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  ulonglong uStack_78;
  void *puStack_70;
  int8_t *puStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  longlong lVar8;
  
  uVar13 = 0xfffffffffffffffe;
  uVar10 = 0;
  lVar9 = *(longlong *)(param_1 + 0x38);
  uVar12 = uVar10;
  if (*(longlong *)(param_1 + 0x40) - lVar9 >> 4 != 0) {
    do {
      lVar1 = *(longlong *)(uVar10 + lVar9);
      puStack_70 = &UNK_180a3c3e0;
      uStack_58 = 0;
      puStack_68 = (int8_t *)0x0;
      uStack_60 = 0;
      if (param_3 != 0) {
        lVar7 = -1;
        do {
          lVar8 = lVar7;
          lVar7 = lVar8 + 1;
        } while (*(char *)(param_3 + lVar7) != '\0');
        if ((int)lVar7 != 0) {
          iVar6 = (int)lVar8 + 2;
          iVar3 = iVar6;
          if (iVar6 < 0x10) {
            iVar3 = 0x10;
          }
          puVar5 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13,lVar9,uVar13);
          *puVar5 = 0;
          puStack_68 = puVar5;
          uVar4 = FUN_18064e990(puVar5);
          uStack_58 = CONCAT44(uStack_58._4_4_,uVar4);
                    // WARNING: Subroutine does not return
          memcpy(puVar5,param_3,iVar6);
        }
      }
      uStack_60 = 0;
      puStack_90 = &UNK_180a3c3e0;
      uStack_78 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      cVar2 = FUN_180063510(lVar1 + 0x218,&puStack_90);
      uStack_88 = 0;
      uStack_78 = uStack_78 & 0xffffffff00000000;
      puStack_90 = &UNK_18098bcb0;
      if (cVar2 != '\0') {
        *(float *)(lVar1 + 0x238) = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(lVar1 + 0x23c) = (float)(param_2 >> 8 & 0xff) * 0.003921569;
        *(float *)(lVar1 + 0x240) = (float)(param_2 & 0xff) * 0.003921569;
        *(float *)(lVar1 + 0x244) = (float)(param_2 >> 0x18) * 0.003921569;
      }
      uVar11 = (int)uVar12 + 1;
      uVar10 = uVar10 + 0x10;
      lVar9 = *(longlong *)(param_1 + 0x38);
      uVar12 = (ulonglong)uVar11;
    } while ((ulonglong)(longlong)(int)uVar11 <
             (ulonglong)(*(longlong *)(param_1 + 0x40) - lVar9 >> 4));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044c840(int32_t param_1,longlong param_2)
void FUN_18044c840(int32_t param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t *puVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  longlong *plStackX_20;
  
  lVar1 = *(longlong *)(_DAT_180c86870 + 8);
  plVar4 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar4 = (longlong)&UNK_180a21690;
  *plVar4 = (longlong)&UNK_180a21720;
  *(int32_t *)(plVar4 + 1) = 0;
  *plVar4 = (longlong)&UNK_18098bdc8;
  LOCK();
  *(int8_t *)(plVar4 + 2) = 0;
  UNLOCK();
  plVar4[3] = -1;
  *plVar4 = (longlong)&UNK_180a08c60;
  *(int32_t *)(plVar4 + 5) = 0xb;
  plVar4[4] = lVar1;
  pplStackX_18 = (longlong **)plVar4;
  plStackX_20 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  *(int32_t *)(plVar4 + 6) = param_1;
  plVar4[7] = param_2;
  puVar2 = *(uint64_t **)(lVar1 + 0x140);
  pcVar3 = *(code **)*puVar2;
  pplStackX_18 = &plStackX_10;
  plStackX_10 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  (*pcVar3)(puVar2,&plStackX_10);
  FUN_18020f150(*(uint64_t *)(lVar1 + 0x140));
                    // WARNING: Could not recover jumptable at 0x00018044c92e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar4 + 0x38))(plVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044c9c0(float param_1,float param_2)
void FUN_18044c9c0(float param_1,float param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = *(char **)(_DAT_180c868d0 + 0x2010);
  iVar2 = (int)(param_2 * *(float *)(_DAT_180c86950 + 0x17f0));
  iVar3 = (int)(param_1 * *(float *)(_DAT_180c86950 + 0x17ec));
  if (*pcVar1 == '\0') {
    *(int *)(pcVar1 + 4) = iVar3;
    *(int *)(pcVar1 + 8) = iVar2;
    *pcVar1 = '\x01';
    return;
  }
  if ((*(int *)(pcVar1 + 4) == iVar3) && (*(int *)(pcVar1 + 8) == iVar2)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a16bd0,*(int *)(pcVar1 + 4),*(int32_t *)(pcVar1 + 8),iVar3
                ,iVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044cb80(longlong param_1)
void FUN_18044cb80(longlong param_1)

{
  longlong lVar1;
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  puStack_78 = &UNK_1809fcc58;
  puStack_70 = auStack_60;
  uStack_68 = 0;
  auStack_60[0] = 0;
  if (param_1 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_1 + lVar1) != '\0');
    uStack_68 = (int32_t)lVar1;
    strcpy_s(auStack_60,0x40,param_1);
  }
  FUN_1800c17c0();
  puStack_78 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18044cc30(uint64_t *param_1,int32_t param_2,uint64_t param_3,int8_t param_4)

{
  uint64_t uVar1;
  longlong *plVar2;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  FUN_1800c1750(param_1,&plStackX_18,param_2,param_4,0);
  if (plStackX_18 == (longlong *)0x0) {
    FUN_180627020(&UNK_180a2a640,param_2);
    *param_1 = 0;
  }
  else {
    uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x168,8,3);
    plVar2 = (longlong *)FUN_1802ac390(uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plStackX_20 = plStackX_18;
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x28))();
    }
    FUN_1802adab0(plVar2,&plStackX_20);
    *param_1 = plVar2;
  }
  if (plStackX_18 != (longlong *)0x0) {
    (**(code **)(*plStackX_18 + 0x38))();
  }
  return param_1;
}



uint64_t *
FUN_18044cd30(uint64_t *param_1,uint64_t param_2,uint64_t param_3,ulonglong param_4,
             longlong *param_5)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong *plStackX_8;
  longlong *plStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  
  FUN_18044cc30(&plStackX_8,param_2,param_3,param_4,0xfffffffffffffffe);
  if (plStackX_8 == (longlong *)0x0) {
    plStack_20 = plStackX_8;
    uStack_18 = 0xffffffff;
  }
  else {
    lVar3 = param_5[1];
    plStackX_8[10] = *param_5;
    plStackX_8[0xb] = lVar3;
    lVar3 = param_5[3];
    plStackX_8[0xc] = param_5[2];
    plStackX_8[0xd] = lVar3;
    uVar1 = *(int32_t *)((longlong)param_5 + 0x24);
    lVar3 = param_5[5];
    uVar2 = *(int32_t *)((longlong)param_5 + 0x2c);
    *(int *)(plStackX_8 + 0xe) = (int)param_5[4];
    *(int32_t *)((longlong)plStackX_8 + 0x74) = uVar1;
    *(int *)(plStackX_8 + 0xf) = (int)lVar3;
    *(int32_t *)((longlong)plStackX_8 + 0x7c) = uVar2;
    uVar1 = *(int32_t *)((longlong)param_5 + 0x34);
    lVar3 = param_5[7];
    uVar2 = *(int32_t *)((longlong)param_5 + 0x3c);
    *(int *)(plStackX_8 + 0x10) = (int)param_5[6];
    *(int32_t *)((longlong)plStackX_8 + 0x84) = uVar1;
    *(int *)(plStackX_8 + 0x11) = (int)lVar3;
    *(int32_t *)((longlong)plStackX_8 + 0x8c) = uVar2;
    FUN_1802fbf30(param_3,param_4 & 0xff,plStackX_8);
    plStack_20 = plStackX_8;
    if (plStackX_8 == (longlong *)0x0) {
      uStack_18 = 0xffffffff;
    }
    else {
      uStack_18 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    }
    if (plStack_20 != (longlong *)0x0) {
      (**(code **)(*plStack_20 + 0x28))(plStack_20);
    }
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *param_1 = plStack_20;
  param_1[1] = CONCAT44(uStack_14,uStack_18);
  return param_1;
}



uint64_t *
FUN_18044ce10(uint64_t *param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plStackX_8;
  longlong *plStack_28;
  uint64_t uStack_20;
  longlong **pplStack_18;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_20 = 0xfffffffffffffffe;
  FUN_18044cc30(&plStackX_8);
  if (plStackX_8 == (longlong *)0x0) {
    pplStack_18 = (longlong **)plStackX_8;
    uStack_10 = 0xffffffff;
  }
  else {
    lVar3 = param_4[1];
    plStackX_8[10] = *param_4;
    plStackX_8[0xb] = lVar3;
    lVar3 = param_4[3];
    plStackX_8[0xc] = param_4[2];
    plStackX_8[0xd] = lVar3;
    uVar1 = *(int32_t *)((longlong)param_4 + 0x24);
    lVar3 = param_4[5];
    uVar2 = *(int32_t *)((longlong)param_4 + 0x2c);
    *(int *)(plStackX_8 + 0xe) = (int)param_4[4];
    *(int32_t *)((longlong)plStackX_8 + 0x74) = uVar1;
    *(int *)(plStackX_8 + 0xf) = (int)lVar3;
    *(int32_t *)((longlong)plStackX_8 + 0x7c) = uVar2;
    uVar1 = *(int32_t *)((longlong)param_4 + 0x34);
    lVar3 = param_4[7];
    uVar2 = *(int32_t *)((longlong)param_4 + 0x3c);
    *(int *)(plStackX_8 + 0x10) = (int)param_4[6];
    *(int32_t *)((longlong)plStackX_8 + 0x84) = uVar1;
    *(int *)(plStackX_8 + 0x11) = (int)lVar3;
    *(int32_t *)((longlong)plStackX_8 + 0x8c) = uVar2;
    plStack_28 = plStackX_8;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    pplStack_18 = &plStack_28;
    FUN_1802edcd0(param_3,plStack_28,1);
    if (plStack_28 != (longlong *)0x0) {
      (**(code **)(*plStack_28 + 0x38))();
    }
    plVar4 = plStackX_8;
    if (plStackX_8 == (longlong *)0x0) {
      uStack_10 = 0xffffffff;
    }
    else {
      uStack_10 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    }
    pplStack_18 = (longlong **)plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *param_1 = pplStack_18;
  param_1[1] = CONCAT44(uStack_c,uStack_10);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044cf20(uint64_t param_1,longlong param_2)
void FUN_18044cf20(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  int8_t auStack_b8 [32];
  longlong *plStack_98;
  longlong *plStack_90;
  uint64_t uStack_88;
  longlong **pplStack_80;
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  puStack_78 = &UNK_1809fcc58;
  puStack_70 = auStack_60;
  uStack_68 = 0;
  auStack_60[0] = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    uStack_68 = (int32_t)lVar1;
    strcpy_s(auStack_60,0x40,param_2);
  }
  FUN_1800c1520(_DAT_180c86970,&plStack_90,&puStack_78);
  puStack_78 = &UNK_18098bcb0;
  pplStack_80 = &plStack_98;
  plStack_98 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    (**(code **)(*plStack_90 + 0x28))();
  }
  FUN_1802adab0(param_1,&plStack_98);
  if (plStack_90 != (longlong *)0x0) {
    (**(code **)(*plStack_90 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_b8);
}





// 函数: void FUN_18044d0b0(longlong param_1,uint64_t *param_2)
void FUN_18044d0b0(longlong param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t auStack_58 [80];
  
  if (param_1 != 0) {
    puVar2 = (uint64_t *)FUN_180466610(param_1,auStack_58);
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    uVar1 = puVar2[3];
    param_2[2] = puVar2[2];
    param_2[3] = uVar1;
    uVar1 = puVar2[5];
    param_2[4] = puVar2[4];
    param_2[5] = uVar1;
    uVar1 = puVar2[7];
    param_2[6] = puVar2[6];
    param_2[7] = uVar1;
  }
  return;
}





// 函数: void FUN_18044d0f0(longlong param_1,uint64_t *param_2)
void FUN_18044d0f0(longlong param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t auStack_58 [80];
  
  if (param_1 != 0) {
    puVar2 = (uint64_t *)FUN_180466700(param_1,auStack_58);
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    uVar1 = puVar2[3];
    param_2[2] = puVar2[2];
    param_2[3] = uVar1;
    uVar1 = puVar2[5];
    param_2[4] = puVar2[4];
    param_2[5] = uVar1;
    uVar1 = puVar2[7];
    param_2[6] = puVar2[6];
    param_2[7] = uVar1;
  }
  return;
}





// 函数: void FUN_18044d130(longlong param_1,int32_t *param_2,float param_3,byte param_4,float param_5)
void FUN_18044d130(longlong param_1,int32_t *param_2,float param_3,byte param_4,float param_5)

{
  float *pfVar1;
  longlong lVar2;
  int32_t *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0xf0)) {
      FUN_180467500();
      *(int32_t *)(param_1 + 0xf0) = *(int32_t *)(param_1 + 0x70);
    }
    fVar9 = 0.0;
    uVar5 = 0;
    iVar7 = (int)(*(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0) >> 3);
    if (iVar7 != 1) {
      do {
        fVar8 = (float)FUN_180466360(param_1,uVar5);
        fVar9 = fVar9 + fVar8;
        if (param_3 < fVar9) goto LAB_18044d1c0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < iVar7 - 1U);
    }
    uVar5 = 0xffffffff;
LAB_18044d1c0:
    lVar2 = *(longlong *)(param_1 + 0xd0);
    iVar7 = (int)(*(longlong *)(param_1 + 0xd8) - lVar2 >> 3);
    if ((((iVar7 < 2) || ((int)uVar5 < 0)) ||
        (pfVar1 = (float *)(*(longlong *)(lVar2 + (ulonglong)uVar5 * 8) + 0xcc),
        param_5 < *pfVar1 || param_5 == *pfVar1)) ||
       (pfVar1 = (float *)(*(longlong *)(lVar2 + (ulonglong)(uVar5 + 1) * 8) + 0xcc),
       param_5 < *pfVar1 || param_5 == *pfVar1)) {
LAB_18044d253:
      FUN_180466700(param_1,&uStack_78,param_3);
    }
    else {
      uVar6 = (ulonglong)uVar5;
      if (param_4 != 0) {
        uVar6 = (ulonglong)(uVar5 + 1);
      }
      uVar5 = (uint)uVar6;
      do {
        uVar4 = uVar6;
        uVar5 = (uint)param_4 * 2 + -1 + uVar5;
        if (((int)uVar5 < 0) || (iVar7 <= (int)uVar5)) goto LAB_18044d253;
        pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)uVar5 * 8) +
                          0xcc);
        uVar6 = (ulonglong)uVar5;
      } while (*pfVar1 <= param_5 && param_5 != *pfVar1);
      puVar3 = *(int32_t **)(*(longlong *)(param_1 + 0xd0) + (longlong)(int)uVar4 * 8);
      uStack_78 = *puVar3;
      uStack_74 = puVar3[1];
      uStack_70 = puVar3[2];
      uStack_6c = puVar3[3];
      uStack_68 = puVar3[4];
      uStack_64 = puVar3[5];
      uStack_60 = puVar3[6];
      uStack_5c = puVar3[7];
      uStack_58 = puVar3[8];
      uStack_54 = puVar3[9];
      uStack_50 = puVar3[10];
      uStack_4c = puVar3[0xb];
      uStack_48 = puVar3[0xc];
      uStack_44 = puVar3[0xd];
      uStack_40 = puVar3[0xe];
      uStack_3c = puVar3[0xf];
    }
    *param_2 = uStack_78;
    param_2[1] = uStack_74;
    param_2[2] = uStack_70;
    param_2[3] = uStack_6c;
    param_2[4] = uStack_68;
    param_2[5] = uStack_64;
    param_2[6] = uStack_60;
    param_2[7] = uStack_5c;
    param_2[8] = uStack_58;
    param_2[9] = uStack_54;
    param_2[10] = uStack_50;
    param_2[0xb] = uStack_4c;
    param_2[0xc] = uStack_48;
    param_2[0xd] = uStack_44;
    param_2[0xe] = uStack_40;
    param_2[0xf] = uStack_3c;
  }
  return;
}





