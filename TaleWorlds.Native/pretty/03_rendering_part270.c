#include "TaleWorlds.Native.Split.h"

// 03_rendering_part270.c - 12 个函数

// 函数: void FUN_180417c50(uint64_t param_1,longlong param_2)
void FUN_180417c50(uint64_t param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  uint64_t *puVar6;
  char *pcVar7;
  char *pcVar8;
  int8_t auStack_d8 [32];
  int32_t auStack_b8 [2];
  uint64_t uStack_b0;
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  pcVar7 = "string";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  puVar6 = *(uint64_t **)(param_2 + 0x30);
  if (puVar6 != (uint64_t *)0x0) {
    pcVar7 = (char *)0x0;
    do {
      pcVar2 = (char *)*puVar6;
      if (pcVar2 == (char *)0x0) {
        pcVar2 = (char *)0x180d48d24;
        pcVar3 = pcVar7;
      }
      else {
        pcVar3 = (char *)puVar6[2];
      }
      if (pcVar3 == pcVar8 + -0x180a2161b) {
        pcVar3 = pcVar3 + (longlong)pcVar2;
        if (pcVar3 <= pcVar2) {
LAB_180417cf0:
          pcVar8 = "keys";
          do {
            pcVar2 = pcVar8;
            pcVar8 = pcVar2 + 1;
          } while (*pcVar8 != '\0');
          puVar6 = (uint64_t *)puVar6[6];
          do {
            if (puVar6 == (uint64_t *)0x0) goto LAB_180417fa4;
            pcVar8 = (char *)*puVar6;
            if (pcVar8 == (char *)0x0) {
              pcVar8 = (char *)0x180d48d24;
              pcVar3 = pcVar7;
            }
            else {
              pcVar3 = (char *)puVar6[2];
            }
            if (pcVar3 == pcVar2 + -0x180a180c3) {
              pcVar3 = pcVar8 + (longlong)pcVar3;
              if (pcVar3 <= pcVar8) {
LAB_180417d60:
                pcVar8 = "key";
                do {
                  pcVar2 = pcVar8;
                  pcVar8 = pcVar2 + 1;
                } while (*pcVar8 != '\0');
                for (pcVar8 = (char *)puVar6[6]; pcVar8 != (char *)0x0;
                    pcVar8 = *(char **)(pcVar8 + 0x58)) {
                  pcVar3 = *(char **)pcVar8;
                  if (pcVar3 == (char *)0x0) {
                    pcVar3 = (char *)0x180d48d24;
                    pcVar4 = pcVar7;
                  }
                  else {
                    pcVar4 = *(char **)(pcVar8 + 0x10);
                  }
                  if (pcVar4 == pcVar2 + -0x180a18107) {
                    pcVar4 = pcVar4 + (longlong)pcVar3;
                    if (pcVar4 <= pcVar3) {
LAB_180417df0:
                      do {
                        puStack_a8 = &UNK_1809fcc58;
                        puStack_a0 = auStack_90;
                        uStack_98 = 0;
                        auStack_90[0] = 0;
                        pcVar2 = "time";
                        do {
                          pcVar3 = pcVar2;
                          pcVar2 = pcVar3 + 1;
                        } while (*pcVar2 != '\0');
                        for (puVar6 = *(uint64_t **)(pcVar8 + 0x40); puVar6 != (uint64_t *)0x0;
                            puVar6 = (uint64_t *)puVar6[6]) {
                          pcVar2 = (char *)*puVar6;
                          if (pcVar2 == (char *)0x0) {
                            pcVar2 = (char *)0x180d48d24;
                            pcVar4 = pcVar7;
                          }
                          else {
                            pcVar4 = (char *)puVar6[2];
                          }
                          if (pcVar4 == pcVar3 + -0x180a1810b) {
                            pcVar4 = pcVar4 + (longlong)pcVar2;
                            if (pcVar4 <= pcVar2) {
LAB_180417e76:
                              lVar5 = 0x180d48d24;
                              if (puVar6[1] != 0) {
                                lVar5 = puVar6[1];
                              }
                              FUN_18010cbc0(lVar5,&DAT_180a06430,auStack_b8);
                              break;
                            }
                            lVar5 = (longlong)&UNK_180a1810c - (longlong)pcVar2;
                            while (*pcVar2 == pcVar2[lVar5]) {
                              pcVar2 = pcVar2 + 1;
                              if (pcVar4 <= pcVar2) goto LAB_180417e76;
                            }
                          }
                        }
                        pcVar2 = "value";
                        do {
                          pcVar3 = pcVar2;
                          pcVar2 = pcVar3 + 1;
                        } while (*pcVar2 != '\0');
                        for (puVar6 = *(uint64_t **)(pcVar8 + 0x40); puVar6 != (uint64_t *)0x0;
                            puVar6 = (uint64_t *)puVar6[6]) {
                          pcVar2 = (char *)*puVar6;
                          if (pcVar2 == (char *)0x0) {
                            pcVar2 = (char *)0x180d48d24;
                            pcVar4 = pcVar7;
                          }
                          else {
                            pcVar4 = (char *)puVar6[2];
                          }
                          if (pcVar4 == pcVar3 + -0x180a0696b) {
                            pcVar4 = pcVar2 + (longlong)pcVar4;
                            if (pcVar4 <= pcVar2) {
LAB_180417ef6:
                              lVar5 = 0x180d48d24;
                              if (puVar6[1] != 0) {
                                lVar5 = puVar6[1];
                              }
                              (**(code **)(puStack_a8 + 0x10))(&puStack_a8,lVar5);
                              break;
                            }
                            lVar5 = (longlong)&UNK_180a0696c - (longlong)pcVar2;
                            while (*pcVar2 == pcVar2[lVar5]) {
                              pcVar2 = pcVar2 + 1;
                              if (pcVar4 <= pcVar2) goto LAB_180417ef6;
                            }
                          }
                        }
                        FUN_180417830(param_1,auStack_b8[0],&puStack_a8);
                        pcVar2 = "key";
                        do {
                          pcVar3 = pcVar2;
                          pcVar2 = pcVar3 + 1;
                        } while (*pcVar2 != '\0');
                        for (pcVar2 = *(char **)(pcVar8 + 0x58); pcVar8 = pcVar7,
                            pcVar2 != (char *)0x0; pcVar2 = *(char **)(pcVar2 + 0x58)) {
                          pcVar4 = *(char **)pcVar2;
                          if (pcVar4 == (char *)0x0) {
                            pcVar4 = (char *)0x180d48d24;
                            pcVar1 = pcVar7;
                          }
                          else {
                            pcVar1 = *(char **)(pcVar2 + 0x10);
                          }
                          if (pcVar1 == pcVar3 + -0x180a18107) {
                            pcVar1 = pcVar1 + (longlong)pcVar4;
                            pcVar8 = pcVar2;
                            if (pcVar1 <= pcVar4) break;
                            lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar4;
                            while (*pcVar4 == pcVar4[lVar5]) {
                              pcVar4 = pcVar4 + 1;
                              if (pcVar1 <= pcVar4) goto LAB_180417f8f;
                            }
                          }
                        }
LAB_180417f8f:
                        puStack_a8 = &UNK_18098bcb0;
                      } while (pcVar8 != (char *)0x0);
                      break;
                    }
                    lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar3;
                    while (*pcVar3 == pcVar3[lVar5]) {
                      pcVar3 = pcVar3 + 1;
                      if (pcVar4 <= pcVar3) goto LAB_180417df0;
                    }
                  }
                }
                goto LAB_180417fa4;
              }
              lVar5 = (longlong)&UNK_180a180c4 - (longlong)pcVar8;
              while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_180417d60;
              }
            }
            puVar6 = (uint64_t *)puVar6[0xb];
          } while( true );
        }
        lVar5 = (longlong)&UNK_180a2161c - (longlong)pcVar2;
        while (*pcVar2 == pcVar2[lVar5]) {
          pcVar2 = pcVar2 + 1;
          if (pcVar3 <= pcVar2) goto LAB_180417cf0;
        }
      }
      puVar6 = (uint64_t *)puVar6[0xb];
    } while (puVar6 != (uint64_t *)0x0);
  }
LAB_180417fa4:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_d8);
}





// 函数: void FUN_180417fd0(longlong param_1,longlong *param_2,longlong *param_3)
void FUN_180417fd0(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iStack_58;
  float fStack_54;
  uint64_t uStack_50;
  int iStack_48;
  float fStack_44;
  uint64_t uStack_40;
  
  param_3[2] = param_3[1];
  param_3[6] = param_3[5];
  FUN_180418260();
  param_3[10] = param_3[9];
  lVar8 = *(longlong *)(param_1 + 8);
  do {
    if (lVar8 == param_1) {
                    // WARNING: Could not recover jumptable at 0x000180418185. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*param_3 + 0x20))(param_3,0xf0);
      return;
    }
    lVar6 = func_0x00018066bd70(lVar8);
    if (lVar6 != param_1) {
      lVar4 = *param_2;
      iVar13 = 0;
      lVar5 = param_2[1] - lVar4 >> 0x3f;
      lVar9 = (param_2[1] - lVar4) / 0x58 + lVar5;
      if (lVar9 != lVar5) {
        iVar2 = *(int *)(lVar8 + 0x38);
        lVar12 = 0;
        do {
          iVar3 = *(int *)(lVar12 + 0x10 + lVar4);
          iVar10 = iVar2;
          if (iVar3 == iVar2) {
            if (iVar3 != 0) {
              pbVar7 = *(byte **)(lVar12 + 8 + lVar4);
              lVar11 = *(longlong *)(lVar8 + 0x30) - (longlong)pbVar7;
              do {
                pbVar1 = pbVar7 + lVar11;
                iVar10 = (uint)*pbVar7 - (uint)*pbVar1;
                if (iVar10 != 0) break;
                pbVar7 = pbVar7 + 1;
              } while (*pbVar1 != 0);
            }
LAB_1804180b0:
            if (iVar10 == 0) goto LAB_1804180c7;
          }
          else if (iVar3 == 0) goto LAB_1804180b0;
          iVar13 = iVar13 + 1;
          lVar12 = lVar12 + 0x58;
        } while ((ulonglong)(longlong)iVar13 < (ulonglong)(lVar9 - lVar5));
      }
      iVar13 = -1;
LAB_1804180c7:
      if (iVar13 != -1) {
        iStack_58 = (int)*(float *)(lVar8 + 0x20);
        uStack_50 = 0x40000000;
        iStack_48 = (int)*(float *)(lVar6 + 0x20);
        fStack_54 = (float)iVar13;
        uStack_40 = 0xc0000000;
        fStack_44 = fStack_54;
        FUN_1802b6e50(param_3 + 1,&iStack_58);
      }
    }
    lVar8 = func_0x00018066bd70(lVar8);
  } while( true );
}





// 函数: void FUN_180418014(void)
void FUN_180418014(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong unaff_RBX;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  uint64_t extraout_XMM0_Qa;
  int iStackX_20;
  float fStackX_24;
  
  do {
    lVar5 = func_0x00018066bd70(unaff_RBX);
    if (lVar5 != unaff_R14) {
      lVar5 = *unaff_R13;
      iVar11 = 0;
      lVar4 = unaff_R13[1] - lVar5 >> 0x3f;
      lVar7 = (unaff_R13[1] - lVar5) / 0x58 + lVar4;
      if (lVar7 != lVar4) {
        iVar2 = *(int *)(unaff_RBX + 0x38);
        lVar10 = 0;
        do {
          iVar3 = *(int *)(lVar10 + 0x10 + lVar5);
          iVar8 = iVar2;
          if (iVar3 == iVar2) {
            if (iVar3 != 0) {
              pbVar6 = *(byte **)(lVar10 + 8 + lVar5);
              lVar9 = *(longlong *)(unaff_RBX + 0x30) - (longlong)pbVar6;
              do {
                pbVar1 = pbVar6 + lVar9;
                iVar8 = (uint)*pbVar6 - (uint)*pbVar1;
                if (iVar8 != 0) break;
                pbVar6 = pbVar6 + 1;
              } while (*pbVar1 != 0);
            }
LAB_1804180b0:
            if (iVar8 == 0) goto LAB_1804180c7;
          }
          else if (iVar3 == 0) goto LAB_1804180b0;
          iVar11 = iVar11 + 1;
          lVar10 = lVar10 + 0x58;
        } while ((ulonglong)(longlong)iVar11 < (ulonglong)(lVar7 - lVar4));
      }
      iVar11 = -1;
LAB_1804180c7:
      if (iVar11 != -1) {
        iStackX_20 = (int)*(float *)(unaff_RBX + 0x20);
        fStackX_24 = (float)iVar11;
        FUN_1802b6e50(unaff_R15 + 1,&iStackX_20);
      }
    }
    unaff_RBX = func_0x00018066bd70(unaff_RBX);
    if (unaff_RBX == unaff_R14) {
                    // WARNING: Could not recover jumptable at 0x000180418185. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*unaff_R15 + 0x20))(extraout_XMM0_Qa,0xf0);
      return;
    }
  } while( true );
}





// 函数: void FUN_18041816d(void)
void FUN_18041816d(void)

{
  longlong *unaff_R15;
  
                    // WARNING: Could not recover jumptable at 0x000180418185. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*unaff_R15 + 0x20))();
  return;
}





// 函数: void FUN_180418190(longlong param_1,longlong *param_2,longlong param_3)
void FUN_180418190(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  FUN_1803aeb70(param_1,*(uint64_t *)(param_1 + 0x10));
  *(longlong *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(longlong *)(param_1 + 8) = param_1;
  lVar2 = *(longlong *)(param_3 + 8);
  if (lVar2 != *(longlong *)(param_3 + 0x10)) {
    do {
      uVar1 = (param_2[1] - *param_2) / 0x58;
      if ((ulonglong)(longlong)(int)*(float *)(lVar2 + 4) < uVar1) {
        FUN_180417830(param_1,uVar1,*param_2 + (longlong)(int)*(float *)(lVar2 + 4) * 0x58);
        FUN_180417830(param_1);
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(longlong *)(param_3 + 0x10));
  }
  return;
}





// 函数: void FUN_1804181cd(void)
void FUN_1804181cd(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong *unaff_R14;
  
  do {
    if ((ulonglong)(longlong)(int)*(float *)(unaff_RDI + 4) <
        (ulonglong)((unaff_R14[1] - *unaff_R14) / 0x58)) {
      FUN_180417830();
      FUN_180417830();
    }
    unaff_RDI = unaff_RDI + 0x20;
  } while (unaff_RDI != *(longlong *)(unaff_RBP + 0x10));
  return;
}





// 函数: void FUN_18041824c(void)
void FUN_18041824c(void)

{
  return;
}





// 函数: void FUN_180418260(ulonglong *param_1)
void FUN_180418260(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = (uint64_t *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 5;
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804182d0(longlong param_1)
void FUN_1804182d0(longlong param_1)

{
  longlong lVar1;
  void **ppuVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  uint64_t uVar9;
  int32_t extraout_XMM0_Da;
  void **ppuStackX_8;
  void *puStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  int32_t uStack_e8;
  void *puStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  void *puStack_c0;
  longlong lStack_b8;
  int32_t uStack_b0;
  uint64_t uStack_a8;
  int8_t auStack_a0 [104];
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar1 = param_1 + 8;
  uStack_120 = 0;
  uStack_118 = 0;
  uVar9 = 0;
  uStack_110 = 0;
  uStack_108 = 3;
  puStack_128 = &UNK_180a27bf8;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 5;
  ppuStackX_8 = &puStack_e0;
  puStack_e0 = (void *)0x0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 5;
  FUN_180627ae0(&puStack_c0);
  FUN_18041afd0(auStack_a0,&puStack_128);
  lVar5 = FUN_18062b420(_DAT_180c8ed18,0xa8,*(int8_t *)(param_1 + 0x30));
  ppuVar2 = (void **)(lVar5 + 0x20);
  *ppuVar2 = &UNK_18098bcb0;
  *(uint64_t *)(lVar5 + 0x28) = 0;
  *(int32_t *)(lVar5 + 0x30) = 0;
  *ppuVar2 = &UNK_180a3c3e0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x28) = 0;
  *(int32_t *)(lVar5 + 0x30) = 0;
  *(int32_t *)(lVar5 + 0x30) = uStack_b0;
  *(longlong *)(lVar5 + 0x28) = lStack_b8;
  *(int32_t *)(lVar5 + 0x3c) = uStack_a8._4_4_;
  *(int32_t *)(lVar5 + 0x38) = (int32_t)uStack_a8;
  uStack_b0 = 0;
  lStack_b8 = 0;
  uStack_a8 = 0;
  ppuStackX_8 = ppuVar2;
  FUN_18041afd0(lVar5 + 0x40,auStack_a0);
  lVar6 = FUN_1800590b0(lVar1,&ppuStackX_8,ppuVar2);
  if ((char)ppuStackX_8 == '\0') {
    FUN_18041b200(extraout_XMM0_Da,lVar5);
    FUN_18041aa70(auStack_a0);
    ppuStackX_8 = &puStack_c0;
    puStack_c0 = &UNK_180a3c3e0;
    if (lStack_b8 == 0) {
      lStack_b8 = 0;
      uStack_a8 = uStack_a8 & 0xffffffff00000000;
      puStack_c0 = &UNK_18098bcb0;
      FUN_18041aa70(&puStack_128);
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (lVar6 == lVar1) goto LAB_180418472;
  if (*(int *)(lVar6 + 0x30) != 0) {
    if (*(int *)(lVar5 + 0x30) == 0) goto LAB_180418472;
    pbVar7 = *(byte **)(lVar6 + 0x28);
    lVar8 = *(longlong *)(lVar5 + 0x28) - (longlong)pbVar7;
    do {
      bVar3 = *pbVar7;
      uVar4 = (uint)pbVar7[lVar8];
      if (bVar3 != uVar4) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar4 != 0);
    if (0 < (int)(bVar3 - uVar4)) goto LAB_180418472;
  }
  uVar9 = 1;
LAB_180418472:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,lVar6,lVar1,uVar9);
}





// 函数: void FUN_1804184f0(uint64_t *param_1)
void FUN_1804184f0(uint64_t *param_1)

{
  FUN_18041aa70(param_1 + 4);
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}



int32_t FUN_180418550(longlong param_1,uint64_t param_2,float param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  lVar7 = FUN_18041adc0(param_1 + 8);
  iVar9 = 0;
  iVar4 = 0;
  lVar2 = *(longlong *)(lVar7 + 0x28);
  uVar10 = *(longlong *)(lVar7 + 0x30) - lVar2 >> 3;
  uVar8 = uVar10 & 0xffffffff;
  iVar6 = 0;
  if (0 < (int)uVar10) {
    do {
      iVar4 = (uint)uVar8 - iVar6;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      uVar1 = (iVar4 >> 1) + iVar6;
      bVar3 = *(float *)(lVar2 + (longlong)(int)uVar1 * 8) < param_3;
      uVar5 = uVar1;
      if (bVar3) {
        uVar5 = (uint)uVar8;
      }
      uVar8 = (ulonglong)uVar5;
      iVar4 = iVar6;
      if (bVar3) {
        iVar4 = uVar1 + 1;
      }
      iVar6 = iVar4;
    } while (iVar4 < (int)uVar5);
  }
  uVar8 = uVar10 & 0xffffffff;
  if (0 < (int)uVar10) {
    do {
      iVar6 = (int)uVar8 - iVar9;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      uVar1 = (iVar6 >> 1) + iVar9;
      iVar6 = uVar1 + 1;
      if (param_3 < *(float *)(lVar2 + (longlong)(int)uVar1 * 8)) {
        uVar8 = (ulonglong)uVar1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
    } while (iVar9 < (int)uVar8);
  }
  uVar8 = (ulonglong)iVar4;
  if (uVar8 != uVar10) {
    if (ABS(*(float *)(lVar2 + (longlong)iVar9 * 8) - param_3) <=
        ABS(*(float *)(lVar2 + uVar8 * 8) - param_3)) {
      return *(int32_t *)(lVar2 + 4 + (longlong)iVar9 * 8);
    }
    return *(int32_t *)(lVar2 + 4 + uVar8 * 8);
  }
  if (lVar2 != *(longlong *)(lVar7 + 0x30)) {
    return *(int32_t *)(*(longlong *)(lVar7 + 0x30) + -4);
  }
  return 0x7f7fffff;
}





// 函数: void FUN_180418670(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180418670(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_18041b140(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_1804186a0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804186a0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_18041b140(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



