#include "TaleWorlds.Native.Split.h"

// 99_part_04_part038.c - 13 个函数

// 函数: void FUN_1802aa4b0(longlong param_1)
void FUN_1802aa4b0(longlong param_1)

{
  int iVar1;
  longlong *plStackX_8;
  uint64_t uStackX_10;
  
  uStackX_10 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0xc0))
                    (*(longlong **)(param_1 + 200),&uStackX_10,&plStackX_8);
  if (iVar1 < 0) {
    FUN_180220810(iVar1,&UNK_180a17b38);
  }
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xe0))(*(longlong **)(param_1 + 0xd0),plStackX_8);
  do {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xe8))
                      (*(longlong **)(param_1 + 0xd0),plStackX_8,0,0,0);
  } while (iVar1 < 0);
  (**(code **)(*plStackX_8 + 0x10))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1802aa550(char *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6,char param_7,uint64_t param_8,uint64_t param_9,int32_t param_10
             ,int32_t param_11)

{
  float fVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t uVar10;
  int32_t uVar11;
  float fVar12;
  float fVar13;
  
  if (param_1[0xd9] == '\0') {
    return 0xbad00000;
  }
  uVar10 = *(uint64_t *)(param_6 + 0x170);
  uVar2 = *(uint64_t *)(param_4 + 0x170);
  uVar3 = *(uint64_t *)(param_3 + 0x170);
  uVar4 = *(uint64_t *)(param_1 + 0xd0);
  uVar5 = *(uint64_t *)(param_2 + 0x170);
  uVar6 = *(uint64_t *)(param_5 + 0x170);
  iVar9 = _Mtx_lock(param_1 + 0x70);
  if (iVar9 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar9);
  }
  fVar1 = *(float *)(param_1 + 0x68);
  iVar9 = _Mtx_unlock(param_1 + 0x70);
  if (iVar9 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar9);
  }
  fVar12 = *(float *)(param_1 + 0xf0);
  if (1.0 <= fVar12) {
    fVar12 = 1.0;
  }
  fVar13 = *(float *)(_DAT_180c86920 + 0x2060) * 0.015384615;
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (1.0 <= fVar13) {
    fVar13 = 1.0;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if ((param_7 == '\0') && (*param_1 == '\0')) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  uVar7 = *(uint64_t *)(param_1 + 0xe0);
  uVar8 = *(uint64_t *)(param_1 + 0xe8);
  NVSDK_NGX_Parameter_SetD3d11Resource(uVar7,&UNK_180a06428,uVar5);
  NVSDK_NGX_Parameter_SetD3d11Resource(uVar7,&UNK_180a17b88,uVar2);
  NVSDK_NGX_Parameter_SetD3d11Resource(uVar7,&UNK_180a17b98,uVar3);
  NVSDK_NGX_Parameter_SetD3d11Resource(uVar7,&UNK_180a17b78,uVar10);
  NVSDK_NGX_Parameter_SetD3d11Resource(uVar7,&UNK_180a06438,uVar6);
  NVSDK_NGX_Parameter_SetD3d11Resource(uVar7,&UNK_180a17bc0,0);
  NVSDK_NGX_Parameter_SetI(uVar7,&UNK_180a01714,uVar11);
  NVSDK_NGX_Parameter_SetF(uVar7,&UNK_180a17bd8,0x3f800000);
  NVSDK_NGX_Parameter_SetF(uVar7,&UNK_180a17ba0,0x3f800000);
  NVSDK_NGX_Parameter_SetF(uVar7,&UNK_180a17bb0,param_10);
  NVSDK_NGX_Parameter_SetF(uVar7,&UNK_180a17be8,param_11);
  NVSDK_NGX_Parameter_SetF(uVar7,&UNK_180a17d90,fVar13 * (1.0 - fVar12) + fVar12);
  NVSDK_NGX_Parameter_SetF(uVar7,&UNK_180a17bf8,fVar1 * 0.08);
  uVar10 = NVSDK_NGX_D3D11_EvaluateFeature_C(uVar4,uVar8,uVar7,0);
  *param_1 = '\0';
  return uVar10;
}



uint64_t *
FUN_1802aa800(longlong param_1,uint64_t *param_2,uint64_t *param_3,int32_t param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uStackX_8;
  uint64_t uStack_48;
  uint64_t uStack_40;
  code *apcStack_38 [2];
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStackX_8 = 0;
  if (*(char *)(param_1 + 0xd8) == '\0') {
    *(int32_t *)(param_1 + 0xf0) = 0x3c23d70a;
    *param_2 = *param_3;
    return param_2;
  }
  uVar3 = *(uint64_t *)(param_1 + 0xe0);
  uVar1 = *(int32_t *)param_3;
  uVar2 = *(int32_t *)((longlong)param_3 + 4);
  apcStack_38[0] = (code *)0x0;
  NVSDK_NGX_Parameter_GetVoidPointer(uVar3,&UNK_180a17c60,apcStack_38);
  if (apcStack_38[0] == (code *)0x0) {
    uVar4 = 0xbad0000c;
  }
  else {
    NVSDK_NGX_Parameter_SetUI(uVar3,&DAT_180a09e30,uVar1);
    NVSDK_NGX_Parameter_SetUI(uVar3,&DAT_180a09e38,uVar2);
    NVSDK_NGX_Parameter_SetI(uVar3,&UNK_180a17c48,param_4);
    NVSDK_NGX_Parameter_SetI(uVar3,&UNK_180a17cb8,0);
    uVar4 = (*apcStack_38[0])(uVar3);
    if ((uVar4 & 0xfff00000) != 0xbad00000) {
      NVSDK_NGX_Parameter_GetUI(uVar3,&UNK_180a17cc8,&uStackX_8);
      NVSDK_NGX_Parameter_GetUI(uVar3,&UNK_180a17c80,(longlong)&uStackX_8 + 4);
      uStack_48 = uStackX_8;
      uStack_40 = uStackX_8;
      NVSDK_NGX_Parameter_GetUI(uVar3,&UNK_180a17c90,&uStack_48);
      NVSDK_NGX_Parameter_GetUI(uVar3,&UNK_180a17d00,(longlong)&uStack_48 + 4);
      NVSDK_NGX_Parameter_GetUI(uVar3,&UNK_180a17d28,&uStack_40);
      NVSDK_NGX_Parameter_GetUI(uVar3,&UNK_180a17cd8,(longlong)&uStack_40 + 4);
      NVSDK_NGX_Parameter_GetF(uVar3,&UNK_180a17d90,param_1 + 0xf0);
    }
  }
  if (*(float *)(param_1 + 0xf0) <= 0.01 && *(float *)(param_1 + 0xf0) != 0.01) {
    *(int32_t *)(param_1 + 0xf0) = 0x3c23d70a;
  }
  if ((uVar4 & 0xfff00000) == 0xbad00000) {
    FUN_180626f80(&UNK_180a17d50,uVar4);
    uStackX_8 = *param_3;
    *(int32_t *)(param_1 + 0xf0) = 0x3c23d70a;
  }
  *param_2 = uStackX_8;
  return param_2;
}






// 函数: void FUN_1802aa84c(longlong param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4,
void FUN_1802aa84c(longlong param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4,
                  uint64_t param_5)

{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  code *in_RAX;
  longlong unaff_RBX;
  int32_t *unaff_RSI;
  uint64_t *unaff_RDI;
  int32_t unaff_R14D;
  code *pcStack0000000000000030;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  
  uVar3 = *(uint64_t *)(param_1 + 0xe0);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  pcStack0000000000000030 = in_RAX;
  NVSDK_NGX_Parameter_GetVoidPointer(uVar3,&UNK_180a17c60,&stack0x00000030);
  if (pcStack0000000000000030 == (code *)0x0) {
    uVar4 = 0xbad0000c;
  }
  else {
    NVSDK_NGX_Parameter_SetUI(uVar3,&DAT_180a09e30,uVar1);
    NVSDK_NGX_Parameter_SetUI(uVar3,&DAT_180a09e38,uVar2);
    NVSDK_NGX_Parameter_SetI(uVar3,&UNK_180a17c48,unaff_R14D);
    NVSDK_NGX_Parameter_SetI(uVar3,&UNK_180a17cb8,0);
    uVar4 = (*pcStack0000000000000030)(uVar3);
    if ((uVar4 & 0xfff00000) != 0xbad00000) {
      NVSDK_NGX_Parameter_GetUI(uVar3,&UNK_180a17cc8,&stack0x00000070);
      NVSDK_NGX_Parameter_GetUI(uVar3,&UNK_180a17c80,(longlong)&stack0x00000070 + 4);
      param_5 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
      NVSDK_NGX_Parameter_GetUI(uVar3,&UNK_180a17c90,&stack0x00000020,param_4,param_5);
      NVSDK_NGX_Parameter_GetUI(uVar3,&UNK_180a17d00,&stack0x00000024);
      NVSDK_NGX_Parameter_GetUI(uVar3,&UNK_180a17d28,&param_5);
      NVSDK_NGX_Parameter_GetUI(uVar3,&UNK_180a17cd8,(longlong)&param_5 + 4);
      NVSDK_NGX_Parameter_GetF(uVar3,&UNK_180a17d90,unaff_RBX + 0xf0);
    }
  }
  if (*(float *)(unaff_RBX + 0xf0) <= 0.01 && *(float *)(unaff_RBX + 0xf0) != 0.01) {
    *(int32_t *)(unaff_RBX + 0xf0) = 0x3c23d70a;
  }
  if ((uVar4 & 0xfff00000) == 0xbad00000) {
    FUN_180626f80(&UNK_180a17d50,uVar4);
    uStack0000000000000070 = *unaff_RSI;
    uStack0000000000000074 = unaff_RSI[1];
    *(int32_t *)(unaff_RBX + 0xf0) = 0x3c23d70a;
  }
  *unaff_RDI = CONCAT44(uStack0000000000000074,uStack0000000000000070);
  return;
}






// 函数: void FUN_1802aa9ba(void)
void FUN_1802aa9ba(void)

{
  longlong unaff_RBX;
  int32_t *unaff_RSI;
  uint64_t *unaff_RDI;
  uint unaff_R14D;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  
  *(int32_t *)(unaff_RBX + 0xf0) = 0x3c23d70a;
  if ((unaff_R14D & 0xfff00000) == 0xbad00000) {
    FUN_180626f80(&UNK_180a17d50,unaff_R14D);
    uStack0000000000000070 = *unaff_RSI;
    uStack0000000000000074 = unaff_RSI[1];
    *(int32_t *)(unaff_RBX + 0xf0) = 0x3c23d70a;
  }
  *unaff_RDI = CONCAT44(uStack0000000000000074,uStack0000000000000070);
  return;
}






// 函数: void FUN_1802aaa10(longlong *param_1,int param_2,int param_3)
void FUN_1802aaa10(longlong *param_1,int param_2,int param_3)

{
  byte bVar1;
  void *puVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  void *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  uVar15 = (ulonglong)param_2;
  uVar16 = uVar15;
  while( true ) {
    uVar5 = (uint)uVar16;
    uVar10 = uVar16 & 0xffffffff;
    puVar2 = *(void **)
              (*(longlong *)(*param_1 + (longlong)((int)(uVar5 + param_3) >> 1) * 8) + 0x38);
    puVar8 = &DAT_18098bc73;
    if (puVar2 != (void *)0x0) {
      puVar8 = puVar2;
    }
    lVar13 = (longlong)param_3;
    iVar14 = param_3;
    uVar9 = uVar5;
    if ((longlong)uVar15 <= (longlong)param_3) break;
LAB_1802aab40:
    if ((int)uVar5 < iVar14) {
      FUN_1802aaa10(param_1,uVar16 & 0xffffffff,iVar14);
    }
    if (param_3 <= (int)uVar9) {
      return;
    }
    uVar16 = (ulonglong)uVar9;
  }
LAB_1802aaa80:
  lVar3 = *param_1;
  plVar12 = (longlong *)(lVar3 + uVar15 * 8);
  do {
    uVar9 = (uint)uVar10;
    pbVar6 = &DAT_18098bc73;
    if (*(byte **)(*plVar12 + 0x38) != (byte *)0x0) {
      pbVar6 = *(byte **)(*plVar12 + 0x38);
    }
    lVar11 = (longlong)puVar8 - (longlong)pbVar6;
    do {
      bVar1 = *pbVar6;
      uVar7 = (uint)pbVar6[lVar11];
      if (bVar1 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar1 - uVar7)) break;
    uVar10 = (ulonglong)(uVar9 + 1);
    uVar15 = uVar15 + 1;
    plVar12 = plVar12 + 1;
  } while( true );
  plVar12 = (longlong *)(lVar3 + lVar13 * 8);
  do {
    pbVar6 = &DAT_18098bc73;
    if (*(byte **)(*plVar12 + 0x38) != (byte *)0x0) {
      pbVar6 = *(byte **)(*plVar12 + 0x38);
    }
    lVar11 = (longlong)puVar8 - (longlong)pbVar6;
    do {
      bVar1 = *pbVar6;
      uVar7 = (uint)pbVar6[lVar11];
      if (bVar1 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if ((int)(bVar1 - uVar7) < 1) break;
    iVar14 = iVar14 + -1;
    lVar13 = lVar13 + -1;
    plVar12 = plVar12 + -1;
  } while( true );
  if (lVar13 < (longlong)uVar15) goto LAB_1802aab40;
  uVar9 = uVar9 + 1;
  uVar10 = (ulonglong)uVar9;
  uVar4 = *(uint64_t *)(lVar3 + uVar15 * 8);
  iVar14 = iVar14 + -1;
  *(uint64_t *)(lVar3 + uVar15 * 8) = *(uint64_t *)(lVar3 + lVar13 * 8);
  uVar15 = uVar15 + 1;
  *(uint64_t *)(*param_1 + lVar13 * 8) = uVar4;
  lVar13 = lVar13 + -1;
  if (lVar13 < (longlong)uVar15) goto LAB_1802aab40;
  goto LAB_1802aaa80;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802aab80(ulonglong *param_1)
void FUN_1802aab80(ulonglong *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uStackX_10;
  uint uStackX_18;
  
  iVar2 = _Mtx_lock(param_1 + 8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  FUN_1802aaa10(param_1,0,(int)((longlong)(param_1[1] - *param_1) >> 3) + -1);
  puVar1 = param_1 + 4;
  param_1[5] = *puVar1;
  FUN_1802ab620(puVar1,100);
  uVar3 = 0;
  iVar2 = 0;
  uStackX_18 = 0;
  uStackX_10 = 0;
  plVar10 = (longlong *)*param_1;
  if (plVar10 < (longlong *)param_1[1]) {
    uVar12 = uVar3;
    uVar4 = uVar3;
    uVar15 = uVar3;
    do {
      uVar7 = (uint)uVar3;
      uVar13 = (uint)uVar4;
      pcVar5 = "";
      if (*(char **)(*plVar10 + 0x38) != (char *)0x0) {
        pcVar5 = *(char **)(*plVar10 + 0x38);
      }
      uVar14 = (((int)*pcVar5 << 8 | (int)pcVar5[1]) << 8 | (int)pcVar5[2]) << 8 | (int)pcVar5[3];
      if (uVar14 != (uint)uVar12) {
        uVar3 = param_1[5];
        uVar12 = *puVar1;
        uVar4 = (longlong)(uVar3 - uVar12) >> 3;
        if (uVar4 <= (ulonglong)(longlong)(int)uVar13) {
          uVar6 = (ulonglong)(int)(uVar13 * 2);
          if (uVar4 < uVar6) {
            uVar11 = uVar6 - uVar4;
            if ((ulonglong)((longlong)(param_1[6] - uVar3) >> 3) < uVar11) {
              uVar8 = uVar4 * 2;
              if (uVar4 == 0) {
                uVar8 = 1;
              }
              if (uVar8 < uVar6) {
                uVar8 = uVar6;
              }
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = FUN_18062b420(_DAT_180c8ed18,uVar8 * 8,(char)param_1[7]);
                uVar3 = param_1[5];
                uVar12 = *puVar1;
              }
              if (uVar12 != uVar3) {
                    // WARNING: Subroutine does not return
                memmove(uVar4,uVar12,uVar3 - uVar12);
              }
              if (uVar11 != 0) {
                    // WARNING: Subroutine does not return
                memset(uVar4,0,uVar11 * 8);
              }
              if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *puVar1 = uVar4;
              param_1[5] = uVar4;
              param_1[6] = uVar4 + uVar8 * 8;
              uVar13 = uStackX_10;
              uVar7 = uStackX_18;
              goto LAB_1802aadb0;
            }
            if (uVar11 != 0) {
                    // WARNING: Subroutine does not return
              memset(uVar3,0,uVar11 * 8);
            }
          }
          else {
            uVar3 = uVar12 + uVar6 * 8;
          }
          param_1[5] = uVar3;
        }
LAB_1802aadb0:
        *(uint *)(*puVar1 + uVar15) = uVar14;
        *(uint *)(*puVar1 + 4 + uVar15) = uVar7;
        uStackX_10 = uVar13 + 1;
        uVar4 = (ulonglong)uStackX_10;
        uVar15 = uVar15 + 8;
        uVar12 = (ulonglong)uVar14;
      }
      iVar2 = (int)uVar4;
      plVar10 = plVar10 + 1;
      uStackX_18 = uVar7 + 1;
      uVar3 = (ulonglong)uStackX_18;
    } while (plVar10 < (longlong *)param_1[1]);
  }
  uVar15 = 0;
  FUN_1802ab620(puVar1,(longlong)iVar2);
  uVar3 = param_1[5];
  uVar12 = *puVar1;
  uVar4 = param_1[7];
  lVar16 = uVar3 - uVar12;
  lVar9 = lVar16 >> 3;
  if (lVar9 != 0) {
    uVar15 = FUN_18062b420(_DAT_180c8ed18,lVar9 * 8,(uint)uVar4 & 0xff);
  }
  uVar6 = lVar9 * 8 + uVar15;
  if (uVar12 == uVar3) {
    uVar3 = *puVar1;
    *puVar1 = uVar15;
    param_1[5] = uVar6;
    param_1[6] = uVar6;
    *(uint *)(param_1 + 7) = (uint)uVar4;
    if (uVar3 == 0) {
      *(int8_t *)(param_1 + 0x12) = 0;
      iVar2 = _Mtx_unlock(param_1 + 8);
      if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
      }
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  memmove(uVar15,uVar12,lVar16);
}



longlong FUN_1802aaef0(longlong *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  void *puVar9;
  longlong lVar10;
  void *puVar11;
  longlong lVar12;
  void *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar16;
  
  iVar5 = _Mtx_lock(param_1 + 8);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  if ((param_1[1] - *param_1 & 0xfffffffffffffff8U) == 0) {
LAB_1802aaf46:
    lVar12 = 0;
  }
  else {
    if ((char)param_1[0x12] != '\0') {
      FUN_1802aab80(param_1);
    }
    iVar5 = FUN_1802ab1f0(param_1,param_2);
    lVar10 = (longlong)iVar5;
    bVar4 = false;
    lVar12 = param_1[4];
    if (lVar10 == (param_1[5] - lVar12 >> 3) + -1) {
      lVar17 = (longlong)*(int *)(lVar12 + 4 + lVar10 * 8);
      lVar14 = *param_1;
      if (lVar17 == param_1[1] - lVar14 >> 3) {
        puVar9 = *(void **)(*(longlong *)(lVar14 + lVar17 * 8) + 0x38);
        puVar11 = &DAT_18098bc73;
        if (puVar9 != (void *)0x0) {
          puVar11 = puVar9;
        }
        pcVar8 = "";
        if (*(char **)(param_2 + 8) != (char *)0x0) {
          pcVar8 = *(char **)(param_2 + 8);
        }
        lVar12 = (longlong)puVar11 - (longlong)pcVar8;
        do {
          cVar1 = *pcVar8;
          cVar2 = pcVar8[lVar12];
          if (cVar1 != cVar2) break;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          lVar12 = *(longlong *)(lVar14 + lVar17 * 8);
          goto LAB_1802ab08a;
        }
        goto LAB_1802aaf46;
      }
      bVar4 = true;
    }
    uVar6 = *(uint *)(lVar12 + 4 + lVar10 * 8);
    uVar18 = (ulonglong)uVar6;
    if (bVar4) {
      uVar15 = (int)(param_1[1] - *param_1 >> 3) - 1;
    }
    else {
      uVar15 = *(uint *)(lVar12 + 4 + (longlong)(iVar5 + 1) * 8);
    }
    uVar16 = (ulonglong)uVar15;
    lVar12 = 0;
    if ((int)uVar6 <= (int)uVar15) {
      lVar10 = *param_1;
      puVar9 = &DAT_18098bc73;
      do {
        iVar5 = (int)uVar16 + (int)uVar18 >> 1;
        lVar12 = *(longlong *)(lVar10 + (longlong)iVar5 * 8);
        puVar11 = *(void **)(lVar12 + 0x38);
        puVar13 = puVar9;
        if (puVar11 != (void *)0x0) {
          puVar13 = puVar11;
        }
        pbVar7 = (byte *)func_0x0001800464d0(param_2);
        lVar14 = (longlong)puVar13 - (longlong)pbVar7;
        do {
          bVar3 = *pbVar7;
          if (bVar3 != pbVar7[lVar14]) {
            uVar6 = -(uint)(bVar3 < pbVar7[lVar14]) | 1;
            goto LAB_1802ab070;
          }
          pbVar7 = pbVar7 + 1;
        } while (bVar3 != 0);
        uVar6 = 0;
LAB_1802ab070:
        if ((int)uVar6 < 1) {
          if (-1 < (int)uVar6) break;
          uVar16 = (ulonglong)(iVar5 - 1);
        }
        else {
          uVar18 = (ulonglong)(iVar5 + 1);
        }
        lVar12 = 0;
      } while ((int)uVar18 <= (int)uVar16);
    }
  }
LAB_1802ab08a:
  iVar5 = _Mtx_unlock(param_1 + 8);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  return lVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ab0c0(ulonglong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802ab0c0(ulonglong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  puVar5 = (uint64_t *)param_1[1];
  if (puVar5 < (uint64_t *)param_1[2]) {
    param_1[1] = (ulonglong)(puVar5 + 1);
    *puVar5 = param_2;
    goto LAB_1802ab1ac;
  }
  puVar4 = (uint64_t *)*param_1;
  lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
  if (lVar2 == 0) {
    lVar2 = 1;
LAB_1802ab146:
    puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)param_1[3],param_4,uVar6);
    puVar5 = (uint64_t *)param_1[1];
    puVar4 = (uint64_t *)*param_1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 != 0) goto LAB_1802ab146;
    puVar3 = (uint64_t *)0x0;
  }
  if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
    memmove(puVar3,puVar4,(longlong)puVar5 - (longlong)puVar4);
  }
  *puVar3 = param_2;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (ulonglong)puVar3;
  param_1[1] = (ulonglong)(puVar3 + 1);
  param_1[2] = (ulonglong)(puVar3 + lVar2);
LAB_1802ab1ac:
  *(int8_t *)(param_1 + 0x12) = 1;
  iVar1 = _Mtx_unlock(param_1 + 8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



int FUN_1802ab1f0(longlong param_1,longlong param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = _Mtx_lock(param_1 + 0x40);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  iVar3 = *(int *)(param_2 + 0x10);
  uVar6 = 0;
  if (iVar3 < 4) {
    if (iVar3 == 1) {
      uVar4 = (int)**(char **)(param_2 + 8) << 0x18;
    }
    else if (iVar3 == 2) {
      uVar4 = (**(char **)(param_2 + 8) * 0x100 + (int)(*(char **)(param_2 + 8))[1]) * 0x10000;
    }
    else {
      uVar4 = uVar6;
      if (iVar3 == 3) {
        pcVar2 = *(char **)(param_2 + 8);
        uVar4 = (((int)pcVar2[1] + *pcVar2 * 0x100) * 0x100 + (int)pcVar2[2]) * 0x100;
      }
    }
  }
  else {
    pcVar2 = *(char **)(param_2 + 8);
    uVar4 = (((int)pcVar2[1] | (int)*pcVar2 << 8) << 8 | (int)pcVar2[2]) << 8 | (int)pcVar2[3];
  }
  iVar3 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + -1;
  iVar5 = -1;
  if (-1 < iVar3) {
    do {
      iVar5 = (int)(iVar3 + uVar6) >> 1;
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 8);
      if (iVar1 < (int)uVar4) {
        uVar6 = iVar5 + 1;
      }
      else {
        if (iVar1 <= (int)uVar4) break;
        iVar3 = iVar5 + -1;
      }
    } while ((int)uVar6 <= iVar3);
  }
  iVar3 = _Mtx_unlock(param_1 + 0x40);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return iVar5;
}






// 函数: void FUN_1802ab320(ulonglong *param_1)
void FUN_1802ab320(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1802ab380();
  _Mtx_destroy_in_situ();
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1802ab380(uint64_t *param_1)
void FUN_1802ab380(uint64_t *param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  param_1[1] = *param_1;
  param_1[5] = param_1[4];
  *(int8_t *)(param_1 + 0x12) = 0;
  iVar1 = _Mtx_unlock(param_1 + 8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}






// 函数: void FUN_1802ab3f0(longlong *param_1)
void FUN_1802ab3f0(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = 0;
  lVar3 = *param_1;
  if (param_1[1] - lVar3 >> 3 != 0) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar7 + lVar3);
      AcquireSRWLockExclusive(0x180c91dc8);
      plVar1 = *(longlong **)(lVar3 + 8);
      lVar5 = *plVar1;
      plVar4 = plVar1;
      if (lVar5 == 0) {
        plVar4 = plVar1 + 1;
        lVar5 = *plVar4;
        while (lVar5 == 0) {
          plVar4 = plVar4 + 1;
          lVar5 = *plVar4;
        }
      }
      if (lVar5 != plVar1[*(longlong *)(lVar3 + 0x10)]) {
        do {
          if (*(longlong *)(lVar5 + 0x10) != 0) {
            FUN_18029a450();
          }
          lVar5 = *(longlong *)(lVar5 + 0x18);
          while (lVar5 == 0) {
            plVar4 = plVar4 + 1;
            lVar5 = *plVar4;
          }
        } while (lVar5 != *(longlong *)(*(longlong *)(lVar3 + 8) + *(longlong *)(lVar3 + 0x10) * 8))
        ;
      }
      uVar6 = 0;
      *(uint64_t *)(lVar3 + 0x20) = 0x400000003f800000;
      *(int32_t *)(lVar3 + 0x28) = 0;
      lVar5 = *(longlong *)(lVar3 + 8);
      *(void **)(lVar3 + 8) = &DAT_180be0000;
      uVar2 = *(ulonglong *)(lVar3 + 0x10);
      *(uint64_t *)(lVar3 + 0x10) = 1;
      *(uint64_t *)(lVar3 + 0x18) = 0;
      if (uVar2 != 0) {
        do {
          lVar3 = *(longlong *)(lVar5 + uVar6 * 8);
          if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar3);
          }
          *(uint64_t *)(lVar5 + uVar6 * 8) = 0;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      if ((1 < uVar2) && (lVar5 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar5);
      }
      ReleaseSRWLockExclusive(0x180c91dc8);
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
      lVar3 = *param_1;
    } while ((ulonglong)(longlong)iVar8 < (ulonglong)(param_1[1] - lVar3 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ab620(longlong *param_1,ulonglong param_2)
void FUN_1802ab620(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = param_1[1];
  lVar3 = *param_1;
  uVar2 = lVar5 - lVar3 >> 3;
  if (param_2 <= uVar2) {
    param_1[1] = lVar3 + param_2 * 8;
    return;
  }
  param_2 = param_2 - uVar2;
  if (param_2 <= (ulonglong)(param_1[2] - lVar5 >> 3)) {
    if (param_2 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar5,0,param_2 * 8);
    }
    param_1[1] = lVar5;
    return;
  }
  uVar4 = uVar2 * 2;
  if (uVar2 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < uVar2 + param_2) {
    uVar4 = uVar2 + param_2;
  }
  if (uVar4 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar4 * 8,(char)param_1[3]);
    lVar3 = *param_1;
    lVar5 = param_1[1];
  }
  if (lVar3 != lVar5) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,lVar3,lVar5 - lVar3);
  }
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,param_2 * 8);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = lVar1;
  param_1[2] = lVar1 + uVar4 * 8;
  param_1[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ab666(longlong param_1,longlong param_2)
void FUN_1802ab666(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong unaff_RBX;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  uVar2 = param_1 * 2;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < (ulonglong)(param_1 + unaff_RBX)) {
    uVar2 = param_1 + unaff_RBX;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar2 * 8,(char)unaff_RDI[3]);
    param_2 = *unaff_RDI;
    unaff_RSI = unaff_RDI[1];
  }
  if (param_2 != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_2,unaff_RSI - param_2);
  }
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,unaff_RBX * 8);
  }
  if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RDI = lVar1;
  unaff_RDI[2] = lVar1 + uVar2 * 8;
  unaff_RDI[1] = lVar1;
  return;
}






// 函数: void FUN_1802ab727(void)
void FUN_1802ab727(void)

{
  longlong unaff_RBX;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_RDI + 8) = unaff_RSI;
  return;
}



uint64_t *
FUN_1802ab780(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0x1a;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 3;
  _Mtx_init_in_situ(param_1 + 8,0x102,param_3,param_4,0xfffffffffffffffe);
  return param_1;
}






// 函数: void FUN_1802ab7f0(longlong *param_1)
void FUN_1802ab7f0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1800ba290();
  _Mtx_destroy_in_situ();
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






