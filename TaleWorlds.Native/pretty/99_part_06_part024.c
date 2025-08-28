#include "TaleWorlds.Native.Split.h"

// 99_part_06_part024.c - 3 个函数

// 函数: void FUN_1803bbff0(int32_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803bbff0(int32_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  longlong *plVar2;
  uint64_t uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  uint64_t *in_RCX;
  char *pcVar10;
  char *pcVar11;
  longlong lVar12;
  void *puVar13;
  void *puVar14;
  uint64_t *puVar15;
  int iVar16;
  int iVar17;
  void *puVar18;
  uint64_t *puVar19;
  void *puVar20;
  uint64_t *puVar21;
  char *pcVar22;
  char *pcVar23;
  bool bVar24;
  double dVar25;
  double dVar26;
  int iStack_a8;
  int iStack_a4;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_88;
  uint64_t uStack_80;
  ulonglong uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  longlong *plStack_60;
  uint64_t uStack_58;
  char cStack_50;
  int8_t uStack_4f;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pcVar22 = "children";
  do {
    pcVar23 = pcVar22;
    pcVar22 = pcVar23 + 1;
  } while (*pcVar22 != '\0');
  puVar21 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar21 == (uint64_t *)0x0) {
      return;
    }
    pcVar22 = (char *)*puVar21;
    if (pcVar22 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      pcVar22 = (char *)0x180d48d24;
    }
    else {
      pcVar10 = (char *)puVar21[2];
    }
    if (pcVar10 == pcVar23 + -0x180a18037) {
      pcVar10 = pcVar22 + (longlong)pcVar10;
      if (pcVar10 <= pcVar22) {
LAB_1803bc087:
        bVar4 = false;
        iVar17 = 0;
        iVar16 = 0;
        pcVar22 = "game_entity";
        do {
          pcVar23 = pcVar22;
          pcVar22 = pcVar23 + 1;
        } while (*pcVar22 != '\0');
        for (puVar15 = (uint64_t *)puVar21[6]; puVar15 != (uint64_t *)0x0;
            puVar15 = (uint64_t *)puVar15[0xb]) {
          pcVar22 = (char *)*puVar15;
          if (pcVar22 == (char *)0x0) {
            pcVar10 = (char *)0x0;
            pcVar22 = (char *)0x180d48d24;
          }
          else {
            pcVar10 = (char *)puVar15[2];
          }
          if (pcVar10 == pcVar23 + -0x180a0b67f) {
            pcVar10 = pcVar10 + (longlong)pcVar22;
            if (pcVar10 <= pcVar22) {
LAB_1803bc110:
              do {
                iStack_a8 = 0;
                pcVar22 = "_index_";
                do {
                  pcVar23 = pcVar22;
                  pcVar22 = pcVar23 + 1;
                } while (*pcVar22 != '\0');
                puVar19 = (uint64_t *)puVar15[8];
                if (puVar19 != (uint64_t *)0x0) {
LAB_1803bc140:
                  pcVar22 = (char *)*puVar19;
                  if (pcVar22 == (char *)0x0) {
                    pcVar10 = (char *)0x0;
                    pcVar22 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar10 = (char *)puVar19[2];
                  }
                  if (pcVar10 != pcVar23 + -0x180a1692f) goto LAB_1803bc225;
                  pcVar10 = pcVar10 + (longlong)pcVar22;
                  if (pcVar22 < pcVar10) {
                    lVar12 = (longlong)&UNK_180a16930 - (longlong)pcVar22;
                    while (*pcVar22 == pcVar22[lVar12]) {
                      pcVar22 = pcVar22 + 1;
                      if (pcVar10 <= pcVar22) goto LAB_1803bc194;
                    }
                    goto LAB_1803bc225;
                  }
LAB_1803bc194:
                  pcVar22 = (char *)0x180d48d24;
                  if ((char *)puVar19[1] != (char *)0x0) {
                    pcVar22 = (char *)puVar19[1];
                  }
                  uVar8 = 0xffffffffffffffff;
                  do {
                    uVar8 = uVar8 + 1;
                  } while (pcVar22[uVar8] != '\0');
                  if (((uVar8 < 3) || (*pcVar22 != '0')) ||
                     (puVar13 = &UNK_180a3cb84, (pcVar22[1] + 0xa8U & 0xdf) != 0)) {
                    puVar13 = &UNK_180a063a0;
                  }
                  param_1 = FUN_18010cbc0(pcVar22,puVar13,&iStack_a8);
                  bVar4 = true;
                  if (iVar17 < iStack_a8) {
                    iVar17 = iStack_a8;
                  }
                }
LAB_1803bc1fd:
                iVar16 = iVar16 + 1;
                pcVar22 = "game_entity";
                do {
                  pcVar23 = pcVar22;
                  pcVar22 = pcVar23 + 1;
                } while (*pcVar22 != '\0');
                while( true ) {
                  do {
                    puVar15 = (uint64_t *)puVar15[0xb];
                    if (puVar15 == (uint64_t *)0x0) {
                      if (!bVar4) goto LAB_1803bc2a2;
                      lVar12 = in_RCX[5];
                      uVar8 = *(longlong *)(lVar12 + 0x1c8) - *(longlong *)(lVar12 + 0x1c0) >> 3;
                      if ((uVar8 < (ulonglong)(longlong)iVar16) ||
                         (uVar8 <= (ulonglong)(longlong)iVar17)) {
                        bVar24 = false;
                      }
                      else {
                        bVar24 = true;
                      }
                      goto LAB_1803bc2c1;
                    }
                    pcVar22 = (char *)*puVar15;
                    if (pcVar22 == (char *)0x0) {
                      pcVar10 = (char *)0x0;
                      pcVar22 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar10 = (char *)puVar15[2];
                    }
                  } while (pcVar10 != pcVar23 + -0x180a0b67f);
                  pcVar10 = pcVar10 + (longlong)pcVar22;
                  if (pcVar10 <= pcVar22) break;
                  lVar12 = (longlong)&UNK_180a0b680 - (longlong)pcVar22;
                  while (*pcVar22 == pcVar22[lVar12]) {
                    pcVar22 = pcVar22 + 1;
                    if (pcVar10 <= pcVar22) goto LAB_1803bc110;
                  }
                }
              } while( true );
            }
            lVar12 = (longlong)&UNK_180a0b680 - (longlong)pcVar22;
            while (*pcVar22 == pcVar22[lVar12]) {
              pcVar22 = pcVar22 + 1;
              if (pcVar10 <= pcVar22) goto LAB_1803bc110;
            }
          }
        }
LAB_1803bc2a2:
        lVar12 = in_RCX[5];
        bVar24 = (longlong)iVar16 ==
                 *(longlong *)(lVar12 + 0x1c8) - *(longlong *)(lVar12 + 0x1c0) >> 3;
LAB_1803bc2c1:
        if (bVar24) {
          iVar17 = 0;
          pcVar22 = "game_entity";
          do {
            pcVar23 = pcVar22;
            pcVar22 = pcVar23 + 1;
          } while (*pcVar22 != '\0');
          for (pcVar22 = (char *)puVar21[6]; pcVar22 != (char *)0x0;
              pcVar22 = *(char **)(pcVar22 + 0x58)) {
            pcVar10 = *(char **)pcVar22;
            if (pcVar10 == (char *)0x0) {
              pcVar10 = (char *)0x180d48d24;
              pcVar11 = (char *)0x0;
            }
            else {
              pcVar11 = *(char **)(pcVar22 + 0x10);
            }
            if (pcVar11 == pcVar23 + -0x180a0b67f) {
              pcVar11 = pcVar11 + (longlong)pcVar10;
              if (pcVar11 <= pcVar10) {
LAB_1803bc3f6:
                do {
                  iVar16 = iVar17;
                  if (bVar4) {
                    iStack_a4 = 0;
                    pcVar23 = "_index_";
                    do {
                      pcVar10 = pcVar23;
                      pcVar23 = pcVar10 + 1;
                    } while (*pcVar23 != '\0');
                    puVar21 = *(uint64_t **)(pcVar22 + 0x40);
LAB_1803bc420:
                    iVar16 = iStack_a4;
                    if (puVar21 != (uint64_t *)0x0) {
                      pcVar23 = (char *)*puVar21;
                      if (pcVar23 == (char *)0x0) {
                        pcVar23 = (char *)0x180d48d24;
                        pcVar11 = (char *)0x0;
                      }
                      else {
                        pcVar11 = (char *)puVar21[2];
                      }
                      if (pcVar11 != pcVar10 + -0x180a1692f) goto LAB_1803bc625;
                      pcVar11 = pcVar11 + (longlong)pcVar23;
                      if (pcVar23 < pcVar11) {
                        lVar12 = (longlong)&UNK_180a16930 - (longlong)pcVar23;
                        while (*pcVar23 == pcVar23[lVar12]) {
                          pcVar23 = pcVar23 + 1;
                          if (pcVar11 <= pcVar23) goto LAB_1803bc476;
                        }
                        goto LAB_1803bc625;
                      }
LAB_1803bc476:
                      pcVar23 = (char *)0x180d48d24;
                      if ((char *)puVar21[1] != (char *)0x0) {
                        pcVar23 = (char *)puVar21[1];
                      }
                      uVar8 = 0xffffffffffffffff;
                      do {
                        uVar8 = uVar8 + 1;
                      } while (pcVar23[uVar8] != '\0');
                      if (((uVar8 < 3) || (*pcVar23 != '0')) ||
                         (puVar13 = &UNK_180a3cb84, (pcVar23[1] + 0xa8U & 0xdf) != 0)) {
                        puVar13 = &UNK_180a063a0;
                      }
                      param_1 = FUN_18010cbc0(pcVar23,puVar13,&iStack_a4);
                      iVar16 = iStack_a4;
                    }
                  }
                  plVar2 = *(longlong **)(*(longlong *)(in_RCX[5] + 0x1c0) + (longlong)iVar16 * 8);
                  uStack_a0 = plVar2;
                  if (plVar2 != (longlong *)0x0) {
                    param_1 = (**(code **)(*plVar2 + 0x28))(plVar2);
                  }
                  if (plVar2[0x2e] != 0) {
                    FUN_180639830(param_1,plVar2[0x2f]);
                    puVar21 = (uint64_t *)plVar2[0x2e];
                    if (puVar21 != (uint64_t *)0x0) {
                      lVar12 = __RTCastToVoid(puVar21);
                      (**(code **)*puVar21)(puVar21,0);
                      if (lVar12 != 0) {
                    // WARNING: Subroutine does not return
                        FUN_18064e900(lVar12);
                      }
                    }
                    plVar2[0x2e] = 0;
                  }
                  uVar3 = in_RCX[6];
                  cVar1 = *(char *)(in_RCX + 7);
                  uStack_88 = 0xffffffffffffffff;
                  uStack_80 = 0;
                  uStack_78 = uStack_78 & 0xffffffffffffff00;
                  plStack_60 = plVar2;
                  if (plVar2 != (longlong *)0x0) {
                    (**(code **)(*plVar2 + 0x28))(plVar2);
                  }
                  uStack_4f = 0;
                  *(byte *)(plStack_60 + 0x5d) = *(byte *)(plStack_60 + 0x5d) & 0x7f | cVar1 << 7;
                  uStack_70 = 0;
                  uStack_58 = uVar3;
                  cStack_50 = cVar1;
                  if (in_RCX[3] != 0) {
                    uStack_68 = in_RCX[4];
                    uStack_70 = FUN_18039fda0(uStack_68,plStack_60);
                  }
                  uStack_88 = *in_RCX;
                  uStack_80 = in_RCX[1];
                  uStack_78 = in_RCX[2];
                  param_1 = FUN_1803ba550(&uStack_88,pcVar22,param_3,param_4,1,0);
                  pcVar23 = "game_entity";
                  do {
                    pcVar10 = pcVar23;
                    pcVar23 = pcVar10 + 1;
                  } while (*pcVar23 != '\0');
                  for (pcVar23 = *(char **)(pcVar22 + 0x58); pcVar22 = (char *)0x0,
                      pcVar23 != (char *)0x0; pcVar23 = *(char **)(pcVar23 + 0x58)) {
                    pcVar11 = *(char **)pcVar23;
                    if (pcVar11 == (char *)0x0) {
                      pcVar11 = (char *)0x180d48d24;
                      pcVar9 = (char *)0x0;
                    }
                    else {
                      pcVar9 = *(char **)(pcVar23 + 0x10);
                    }
                    if (pcVar9 == pcVar10 + -0x180a0b67f) {
                      pcVar9 = pcVar9 + (longlong)pcVar11;
                      pcVar22 = pcVar23;
                      if (pcVar9 <= pcVar11) break;
                      lVar12 = (longlong)&UNK_180a0b680 - (longlong)pcVar11;
                      while (*pcVar11 == pcVar11[lVar12]) {
                        pcVar11 = pcVar11 + 1;
                        if (pcVar9 <= pcVar11) goto LAB_1803bc66a;
                      }
                    }
                  }
LAB_1803bc66a:
                  iVar17 = iVar16 + 1;
                  if (bVar4) {
                    iVar17 = iVar16;
                  }
                  if (plStack_60 != (longlong *)0x0) {
                    param_1 = (**(code **)(*plStack_60 + 0x38))();
                  }
                  if (plVar2 != (longlong *)0x0) {
                    param_1 = (**(code **)(*plVar2 + 0x38))(plVar2);
                  }
                  if (pcVar22 == (char *)0x0) {
                    return;
                  }
                } while( true );
              }
              lVar12 = (longlong)&UNK_180a0b680 - (longlong)pcVar10;
              while (*pcVar10 == pcVar10[lVar12]) {
                pcVar10 = pcVar10 + 1;
                if (pcVar11 <= pcVar10) goto LAB_1803bc3f6;
              }
            }
          }
        }
        else {
          lVar7 = *(longlong *)(lVar12 + 0x168);
          lVar6 = lVar12;
          while (lVar5 = lVar7, lVar5 != 0) {
            lVar6 = lVar5;
            lVar7 = *(longlong *)(lVar5 + 0x168);
          }
          uVar3 = *(uint64_t *)(lVar6 + 0xa0);
          uStack_98 = *(uint64_t *)(lVar6 + 0xa8);
          if (system_debug_flag == '\0') {
            puVar13 = &system_buffer_ptr;
            if (*(void **)(lVar6 + 0x290) != (void *)0x0) {
              puVar13 = *(void **)(lVar6 + 0x290);
            }
            puVar20 = &system_buffer_ptr;
            if (*(void **)(in_RCX[6] + 0x4e0) != (void *)0x0) {
              puVar20 = *(void **)(in_RCX[6] + 0x4e0);
            }
            puVar14 = *(void **)(*(longlong *)(lVar12 + 0x268) + 0x290);
            puVar18 = &system_buffer_ptr;
            if (puVar14 != (void *)0x0) {
              puVar18 = puVar14;
            }
            puVar14 = &system_buffer_ptr;
            if (*(void **)(lVar12 + 0x290) != (void *)0x0) {
              puVar14 = *(void **)(lVar12 + 0x290);
            }
            uStack_a0._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
            dVar25 = (double)uStack_a0._4_4_;
            uStack_a0._0_4_ = (float)uVar3;
            dVar26 = (double)(float)uStack_a0;
            uStack_a0 = (longlong *)uVar3;
            FUN_180627020(&UNK_180a23680,puVar14,puVar18,puVar20,puVar13,dVar26,dVar25,
                          (double)(float)uStack_98);
          }
        }
        return;
      }
      lVar12 = (longlong)&UNK_180a18038 - (longlong)pcVar22;
      while (*pcVar22 == pcVar22[lVar12]) {
        pcVar22 = pcVar22 + 1;
        if (pcVar10 <= pcVar22) goto LAB_1803bc087;
      }
    }
    puVar21 = (uint64_t *)puVar21[0xb];
  } while( true );
LAB_1803bc225:
  puVar19 = (uint64_t *)puVar19[6];
  if (puVar19 == (uint64_t *)0x0) goto LAB_1803bc1fd;
  goto LAB_1803bc140;
LAB_1803bc625:
  puVar21 = (uint64_t *)puVar21[6];
  goto LAB_1803bc420;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803bc6d0(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
void FUN_1803bc6d0(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
                  int8_t param_5,uint64_t param_6)

{
  char cVar1;
  char *pcVar2;
  uint64_t uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  char *pcVar7;
  char *pcVar8;
  uint64_t uVar9;
  longlong *plVar10;
  uint64_t uStack_68;
  uint64_t uStack_60;
  ulonglong uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  longlong *plStack_40;
  uint64_t uStack_38;
  char cStack_30;
  char cStack_2f;
  
  uVar9 = 0xfffffffffffffffe;
  pcVar8 = "children";
  do {
    pcVar7 = pcVar8;
    pcVar8 = pcVar7 + 1;
  } while (*pcVar8 != '\0');
  puVar6 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar6 == (uint64_t *)0x0) {
      return;
    }
    pcVar8 = (char *)*puVar6;
    if (pcVar8 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar8 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar6[2];
    }
    if (pcVar2 == pcVar7 + -0x180a18037) {
      pcVar2 = pcVar2 + (longlong)pcVar8;
      if (pcVar2 <= pcVar8) {
LAB_1803bc764:
        pcVar8 = "game_entity";
        do {
          pcVar7 = pcVar8;
          pcVar8 = pcVar7 + 1;
        } while (*pcVar8 != '\0');
        puVar6 = (uint64_t *)puVar6[6];
        do {
          if (puVar6 == (uint64_t *)0x0) {
            return;
          }
          pcVar8 = (char *)*puVar6;
          if (pcVar8 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar8 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar6[2];
          }
          if (pcVar2 == pcVar7 + -0x180a0b67f) {
            pcVar2 = pcVar2 + (longlong)pcVar8;
            if (pcVar2 <= pcVar8) {
LAB_1803bc7f0:
              do {
                uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x2f0,0x10,0xd);
                plVar4 = (longlong *)FUN_1802e6b00(uVar3,*(int8_t *)(param_1[5] + 0x2e5));
                plVar10 = plVar4;
                if (plVar4 != (longlong *)0x0) {
                  (**(code **)(*plVar4 + 0x28))(plVar4);
                }
                *(byte *)(plVar4 + 0x5d) =
                     (*(byte *)(param_1[5] + 0x2e8) ^ *(byte *)(plVar4 + 0x5d)) & 0x7f ^
                     *(byte *)(param_1[5] + 0x2e8);
                uVar3 = param_1[6];
                cVar1 = *(char *)(param_1 + 7);
                uStack_68 = 0xffffffffffffffff;
                uStack_60 = 0;
                uStack_58 = uStack_58 & 0xffffffffffffff00;
                plStack_40 = plVar4;
                (**(code **)(*plVar4 + 0x28))(plVar4);
                cStack_2f = '\0';
                *(byte *)(plStack_40 + 0x5d) = cVar1 << 7 | *(byte *)(plStack_40 + 0x5d) & 0x7f;
                uStack_50 = 0;
                uStack_38 = uVar3;
                cStack_30 = cVar1;
                if (param_1[3] != 0) {
                  uStack_48 = param_1[4];
                  uStack_50 = FUN_18039fda0(uStack_48,plStack_40);
                }
                uStack_68 = *param_1;
                uStack_60 = param_1[1];
                uStack_58 = param_1[2];
                FUN_1803ba550(&uStack_68,puVar6,param_3,param_4,param_5,param_6,uVar9,plVar10);
                if (cStack_2f == '\0') {
                  FUN_1802e8a50(param_1[5],plVar4,0,1);
                  pcVar8 = "game_entity";
                  do {
                    pcVar7 = pcVar8;
                    pcVar8 = pcVar7 + 1;
                  } while (*pcVar8 != '\0');
                  for (puVar6 = (uint64_t *)puVar6[0xb]; puVar6 != (uint64_t *)0x0;
                      puVar6 = (uint64_t *)puVar6[0xb]) {
                    pcVar8 = (char *)*puVar6;
                    if (pcVar8 == (char *)0x0) {
                      pcVar2 = (char *)0x0;
                      pcVar8 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar2 = (char *)puVar6[2];
                    }
                    if (pcVar2 == pcVar7 + -0x180a0b67f) {
                      pcVar2 = pcVar2 + (longlong)pcVar8;
                      if (pcVar2 <= pcVar8) goto LAB_1803bca0d;
                      lVar5 = (longlong)&UNK_180a0b680 - (longlong)pcVar8;
                      while (*pcVar8 == pcVar8[lVar5]) {
                        pcVar8 = pcVar8 + 1;
                        if (pcVar2 <= pcVar8) goto LAB_1803bca0d;
                      }
                    }
                  }
                  puVar6 = (uint64_t *)0x0;
                }
                else {
                  pcVar8 = "game_entity";
                  do {
                    pcVar7 = pcVar8;
                    pcVar8 = pcVar7 + 1;
                  } while (*pcVar8 != '\0');
                  for (puVar6 = (uint64_t *)puVar6[0xb]; puVar6 != (uint64_t *)0x0;
                      puVar6 = (uint64_t *)puVar6[0xb]) {
                    pcVar8 = (char *)*puVar6;
                    if (pcVar8 == (char *)0x0) {
                      pcVar2 = (char *)0x0;
                      pcVar8 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar2 = (char *)puVar6[2];
                    }
                    if (pcVar2 == pcVar7 + -0x180a0b67f) {
                      pcVar2 = pcVar2 + (longlong)pcVar8;
                      if (pcVar2 <= pcVar8) goto LAB_1803bca0d;
                      lVar5 = (longlong)&UNK_180a0b680 - (longlong)pcVar8;
                      while (*pcVar8 == pcVar8[lVar5]) {
                        pcVar8 = pcVar8 + 1;
                        if (pcVar2 <= pcVar8) goto LAB_1803bca0d;
                      }
                    }
                  }
                  puVar6 = (uint64_t *)0x0;
                }
LAB_1803bca0d:
                if (plStack_40 != (longlong *)0x0) {
                  (**(code **)(*plStack_40 + 0x38))();
                }
                (**(code **)(*plVar4 + 0x38))(plVar4);
                if (puVar6 == (uint64_t *)0x0) {
                  return;
                }
              } while( true );
            }
            lVar5 = (longlong)&UNK_180a0b680 - (longlong)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
              pcVar8 = pcVar8 + 1;
              if (pcVar2 <= pcVar8) goto LAB_1803bc7f0;
            }
          }
          puVar6 = (uint64_t *)puVar6[0xb];
        } while( true );
      }
      lVar5 = (longlong)&UNK_180a18038 - (longlong)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_1803bc764;
      }
    }
    puVar6 = (uint64_t *)puVar6[0xb];
  } while( true );
}






// 函数: void FUN_1803bca60(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_1803bca60(longlong param_1,longlong param_2,uint64_t param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong *plVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  void *puVar10;
  uint64_t *puVar11;
  longlong *plVar12;
  char *pcVar13;
  char *pcVar14;
  void *puVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong *plStackX_20;
  longlong *plStack_68;
  uint64_t uStack_60;
  longlong **pplStack_58;
  longlong **pplStack_50;
  longlong *plStack_48;
  longlong *plStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  
  uStack_60 = 0xfffffffffffffffe;
  pcVar14 = "components";
  do {
    pcVar13 = pcVar14;
    pcVar14 = pcVar13 + 1;
  } while (*pcVar14 != '\0');
  puVar11 = *(uint64_t **)(param_2 + 0x30);
  if (puVar11 != (uint64_t *)0x0) {
    pcVar14 = (char *)0x0;
    do {
      pcVar5 = (char *)*puVar11;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x180d48d24;
        pcVar6 = pcVar14;
      }
      else {
        pcVar6 = (char *)puVar11[2];
      }
      if (pcVar6 == pcVar13 + -0x180a19c77) {
        pcVar6 = pcVar6 + (longlong)pcVar5;
        if (pcVar6 <= pcVar5) {
LAB_1803bcb04:
          lVar9 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(lVar9 + 0x268) != 0) {
            iVar16 = (int)(*(longlong *)(lVar9 + 0xf8) - *(longlong *)(lVar9 + 0xf0) >> 3);
            if ((*(longlong *)(param_1 + 0x18) != 0) &&
               ((pcVar14 = (char *)FUN_1803a0010(*(uint64_t *)(param_1 + 0x20)),
                pcVar14 != (char *)0x0 ||
                ((lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x268),
                 *(longlong *)(lVar9 + 0xf8) - *(longlong *)(lVar9 + 0xf0) >> 3 != 0 &&
                 (pcVar14 = (char *)FUN_18039fda0(*(uint64_t *)(param_1 + 0x20)),
                 pcVar14 != (char *)0x0)))))) {
              iVar16 = iVar16 + *(int *)(pcVar14 + 0x18);
            }
            lVar9 = *(longlong *)(param_1 + 0x28);
            lVar1 = *(longlong *)(lVar9 + 0x268);
            lVar7 = *(longlong *)(lVar1 + 0xf8) - *(longlong *)(lVar1 + 0xf0) >> 3;
            if (iVar16 == lVar7) {
              FUN_1803bf690(lVar9 + 0xf0,(longlong *)(lVar1 + 0xf0),puVar11,param_3,
                            *(uint64_t *)(param_1 + 0x20),pcVar14);
              return;
            }
            puVar15 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x290) != (void *)0x0) {
              puVar15 = *(void **)(lVar1 + 0x290);
            }
            puVar10 = &system_buffer_ptr;
            if (*(void **)(lVar9 + 0x290) != (void *)0x0) {
              puVar10 = *(void **)(lVar9 + 0x290);
            }
            FUN_180627020(&UNK_180a23610,puVar10,
                          *(longlong *)(lVar9 + 0xf8) - *(longlong *)(lVar9 + 0xf0) >> 3,puVar15,
                          lVar7);
            FUN_1802ed990(*(uint64_t *)(param_1 + 0x28),1);
            return;
          }
          plStack_48 = (longlong *)0x0;
          plStack_40 = (longlong *)0x0;
          uStack_38 = 0;
          uStack_30 = 3;
          pcVar13 = pcVar14;
          if (*(char *)(param_1 + 0x38) != '\0') {
            pcVar13 = (char *)(*(longlong *)(param_1 + 0x28) + 0xb0);
          }
          FUN_1803be9f0(param_1,&plStack_48,pcVar13,puVar11,param_3,1);
          plVar4 = plStack_40;
          plVar8 = plStack_48;
          plVar3 = plStack_48;
          if (*(char *)(param_1 + 0x38) == '\0') {
            uVar18 = (longlong)plStack_40 - (longlong)plStack_48 >> 3;
            plVar12 = plStack_48;
            if (uVar18 != 0) {
              do {
                plVar8 = (longlong *)*plVar12;
                if (plVar8 != (longlong *)0x0) {
                  uVar2 = *(uint64_t *)(param_1 + 0x28);
                  pplStack_50 = &plStackX_20;
                  plStackX_20 = plVar8;
                  (**(code **)(*plVar8 + 0x28))();
                  pplStack_58 = &plStackX_20;
                  FUN_1802edcd0(uVar2,plStackX_20,1);
                  if (plStackX_20 != (longlong *)0x0) {
                    (**(code **)(*plStackX_20 + 0x38))();
                  }
                }
                uVar17 = (int)pcVar14 + 1;
                pcVar14 = (char *)(ulonglong)uVar17;
                plVar12 = plVar12 + 1;
                plVar8 = plStack_48;
                plVar3 = plStack_48;
              } while ((ulonglong)(longlong)(int)uVar17 < uVar18);
            }
          }
          else {
            uVar18 = (longlong)plStack_40 - (longlong)plStack_48 >> 3;
            plVar12 = plStack_48;
            if (uVar18 != 0) {
              do {
                plVar8 = (longlong *)*plVar12;
                if (plVar8 == (longlong *)0x0) {
                  plStack_68 = (longlong *)0x0;
                  FUN_1800b87c0(*(longlong *)(param_1 + 0x28) + 0xf0,&plStack_68);
                  plVar8 = plStack_68;
                }
                else {
                  uVar2 = *(uint64_t *)(param_1 + 0x28);
                  pplStack_58 = &plStackX_20;
                  plStackX_20 = plVar8;
                  if (plVar8 != (longlong *)0x0) {
                    (**(code **)(*plVar8 + 0x28))();
                  }
                  pplStack_50 = &plStackX_20;
                  FUN_1802edcd0(uVar2,plStackX_20,1);
                  plVar8 = plStackX_20;
                }
                if (plVar8 != (longlong *)0x0) {
                  (**(code **)(*plVar8 + 0x38))();
                }
                uVar17 = (int)pcVar14 + 1;
                pcVar14 = (char *)(ulonglong)uVar17;
                plVar12 = plVar12 + 1;
                plVar8 = plStack_48;
                plVar3 = plStack_48;
              } while ((ulonglong)(longlong)(int)uVar17 < uVar18);
            }
          }
          for (; plVar12 = plStack_48, plVar8 != plVar4; plVar8 = plVar8 + 1) {
            plStack_48 = plVar3;
            if ((longlong *)*plVar8 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar8 + 0x38))();
            }
            plVar3 = plStack_48;
            plStack_48 = plVar12;
          }
          if (plStack_48 == (longlong *)0x0) {
            return;
          }
          plStack_48 = plVar3;
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar12);
        }
        lVar9 = (longlong)&UNK_180a19c78 - (longlong)pcVar5;
        while (*pcVar5 == pcVar5[lVar9]) {
          pcVar5 = pcVar5 + 1;
          if (pcVar6 <= pcVar5) goto LAB_1803bcb04;
        }
      }
      puVar11 = (uint64_t *)puVar11[0xb];
    } while (puVar11 != (uint64_t *)0x0);
  }
  return;
}






