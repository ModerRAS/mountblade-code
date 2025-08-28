#include "TaleWorlds.Native.Split.h"

// 99_part_07_part026.c - 2 个函数

// 函数: void FUN_1804b4e90(longlong param_1,longlong param_2)
void FUN_1804b4e90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  ulonglong uVar3;
  char *pcVar4;
  ulonglong *puVar5;
  uint64_t *puVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  void *puVar10;
  uint64_t *puVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  ulonglong *puVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar20;
  int aiStackX_18 [2];
  longlong *plStackX_20;
  void *puStack_b8;
  longlong lStack_b0;
  int iStack_a8;
  ulonglong uStack_a0;
  ulonglong *puStack_98;
  void *puStack_90;
  longlong lStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  longlong *plStack_58;
  uint64_t uStack_50;
  uint64_t *puStack_48;
  char *pcVar19;
  
  uStack_50 = 0xfffffffffffffffe;
  pcVar14 = (char *)0x0;
  uVar17 = 0;
  *(int32_t *)(param_1 + 0x3b0) = 0;
  *(int32_t *)(param_1 + 0x3a4) = 0;
  pcVar16 = "tattoo_materials";
  do {
    pcVar7 = pcVar16;
    pcVar16 = pcVar7 + 1;
  } while (*pcVar16 != '\0');
  puVar6 = *(uint64_t **)(param_2 + 0x30);
joined_r0x0001804b4ee9:
  if (puVar6 == (uint64_t *)0x0) {
    return;
  }
  pcVar16 = (char *)*puVar6;
  if (pcVar16 == (char *)0x0) {
    pcVar16 = (char *)0x180d48d24;
    pcVar4 = pcVar14;
  }
  else {
    pcVar4 = (char *)puVar6[2];
  }
  if (pcVar4 == pcVar7 + -0x180a2e64f) {
    pcVar4 = pcVar4 + (longlong)pcVar16;
    if (pcVar4 <= pcVar16) {
LAB_1804b4f30:
      FUN_180631330(puVar6,&UNK_180a2e1d8,param_1 + 0xa64);
      pcVar16 = "zero_probability";
      do {
        pcVar7 = pcVar16;
        pcVar16 = pcVar7 + 1;
      } while (*pcVar16 != '\0');
      for (puVar11 = (uint64_t *)puVar6[8]; puVar11 != (uint64_t *)0x0;
          puVar11 = (uint64_t *)puVar11[6]) {
        pcVar16 = (char *)*puVar11;
        if (pcVar16 == (char *)0x0) {
          pcVar16 = (char *)0x180d48d24;
          pcVar4 = pcVar14;
        }
        else {
          pcVar4 = (char *)puVar11[2];
        }
        if (pcVar4 == pcVar7 + -0x180a2e637) {
          pcVar4 = pcVar4 + (longlong)pcVar16;
          if (pcVar4 <= pcVar16) {
LAB_1804b4fc4:
            pcVar16 = (char *)0x180d48d24;
            if ((char *)puVar11[1] != (char *)0x0) {
              pcVar16 = (char *)puVar11[1];
            }
            uVar3 = 0xffffffffffffffff;
            do {
              uVar3 = uVar3 + 1;
            } while (pcVar16[uVar3] != '\0');
            if (((uVar3 < 3) || (*pcVar16 != '0')) ||
               (puVar10 = &UNK_180a3cb84, (pcVar16[1] + 0xa8U & 0xdf) != 0)) {
              puVar10 = &UNK_180a063a0;
            }
            FUN_18010cbc0(pcVar16,puVar10,aiStackX_18);
            break;
          }
          lVar9 = (longlong)&UNK_180a2e638 - (longlong)pcVar16;
          while (*pcVar16 == pcVar16[lVar9]) {
            pcVar16 = pcVar16 + 1;
            if (pcVar4 <= pcVar16) goto LAB_1804b4fc4;
          }
        }
      }
      *(float *)(param_1 + 0x3a4) = (float)aiStackX_18[0] * 0.01;
      pcVar16 = "tattoo_material";
      do {
        pcVar7 = pcVar16;
        pcVar16 = pcVar7 + 1;
      } while (*pcVar16 != '\0');
      for (puVar11 = (uint64_t *)puVar6[6]; puVar11 != (uint64_t *)0x0;
          puVar11 = (uint64_t *)puVar11[0xb]) {
        pcVar16 = (char *)*puVar11;
        if (pcVar16 == (char *)0x0) {
          pcVar16 = (char *)0x180d48d24;
          pcVar4 = pcVar14;
        }
        else {
          pcVar4 = (char *)puVar11[2];
        }
        if (pcVar4 == pcVar7 + -0x180a2e6f7) {
          pcVar4 = pcVar4 + (longlong)pcVar16;
          pcVar19 = pcVar14;
          if (pcVar4 <= pcVar16) {
LAB_1804b50a0:
            do {
              uVar17 = (int)pcVar19 + 1;
              pcVar16 = "tattoo_material";
              do {
                pcVar7 = pcVar16;
                pcVar16 = pcVar7 + 1;
              } while (*pcVar16 != '\0');
              while( true ) {
                do {
                  puVar11 = (uint64_t *)puVar11[0xb];
                  if (puVar11 == (uint64_t *)0x0) goto LAB_1804b5106;
                  pcVar16 = (char *)*puVar11;
                  if (pcVar16 == (char *)0x0) {
                    pcVar16 = (char *)0x180d48d24;
                    pcVar4 = pcVar14;
                  }
                  else {
                    pcVar4 = (char *)puVar11[2];
                  }
                } while (pcVar4 != pcVar7 + -0x180a2e6f7);
                pcVar4 = pcVar4 + (longlong)pcVar16;
                pcVar19 = (char *)(ulonglong)uVar17;
                if (pcVar4 <= pcVar16) break;
                lVar9 = -(longlong)pcVar16;
                while (*pcVar16 == pcVar16[(longlong)(&UNK_180a2e6f8 + lVar9)]) {
                  pcVar16 = pcVar16 + 1;
                  if (pcVar4 <= pcVar16) goto LAB_1804b50a0;
                }
              }
            } while( true );
          }
          lVar9 = -(longlong)pcVar16;
          while (*pcVar16 == pcVar16[(longlong)(&UNK_180a2e6f8 + lVar9)]) {
            pcVar16 = pcVar16 + 1;
            if (pcVar4 <= pcVar16) goto LAB_1804b50a0;
          }
        }
      }
LAB_1804b5106:
      *(uint *)(param_1 + 0x3b0) = uVar17 + 1;
      uVar3 = (longlong)(int)uVar17 + 1;
      if (uVar3 == 0) {
        puVar15 = (ulonglong *)0x0;
      }
      else {
        puVar5 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,uVar3 * 0x48 + 0x10,0x12);
        *puVar5 = uVar3 << 0x20 | 0x48;
        puVar15 = puVar5 + 2;
        iVar8 = 0;
        puVar5 = puVar5 + 7;
        do {
          puVar5[-5] = (ulonglong)&UNK_18098bcb0;
          puVar5[-4] = 0;
          *(int32_t *)(puVar5 + -3) = 0;
          puVar5[-5] = (ulonglong)&UNK_180a3c3e0;
          puVar5[-2] = 0;
          puVar5[-4] = 0;
          *(int32_t *)(puVar5 + -3) = 0;
          puStack_98 = puVar5 + -1;
          *puStack_98 = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
          *(int32_t *)(puVar5 + 2) = 3;
          puVar5[3] = 0;
          iVar8 = iVar8 + 1;
          puVar5 = puVar5 + 9;
        } while ((ulonglong)(longlong)iVar8 < uVar3);
      }
      *(ulonglong **)(param_1 + 0x3a8) = puVar15;
      plStackX_20 = (longlong *)puVar15[8];
      puVar15[8] = 0;
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      pcVar16 = "tattoo_material";
      do {
        pcVar14 = pcVar16;
        pcVar16 = pcVar14 + 1;
      } while (*pcVar16 != '\0');
      for (plStackX_20 = (longlong *)puVar6[6]; plStackX_20 != (uint64_t *)0x0;
          plStackX_20 = (longlong *)plStackX_20[0xb]) {
        pcVar16 = (char *)*plStackX_20;
        if (pcVar16 == (char *)0x0) {
          pcVar7 = (char *)0x0;
          pcVar16 = (char *)0x180d48d24;
        }
        else {
          pcVar7 = (char *)plStackX_20[2];
        }
        if (pcVar7 == pcVar14 + -0x180a2e6f7) {
          pcVar7 = pcVar16 + (longlong)pcVar7;
          if (pcVar7 <= pcVar16) goto LAB_1804b5266;
          lVar9 = (longlong)&UNK_180a2e6f8 - (longlong)pcVar16;
          while (*pcVar16 == pcVar16[lVar9]) {
            pcVar16 = pcVar16 + 1;
            if (pcVar7 <= pcVar16) goto LAB_1804b5266;
          }
        }
      }
      plStackX_20 = (uint64_t *)0x0;
LAB_1804b5266:
      puStack_90 = &UNK_180a3c3e0;
      uStack_78 = 0;
      lStack_88 = 0;
      uStack_80 = 0;
      uStack_70 = 1;
      if (*(int *)(param_1 + 0x3b0) < 2) {
LAB_1804b589b:
        puStack_90 = &UNK_180a3c3e0;
        if (lStack_88 == 0) {
          return;
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_68 = 1;
      do {
        lVar9 = lStack_68;
        plVar20 = plStackX_20;
        iVar8 = (int)uStack_70;
        pcVar16 = "name";
        do {
          pcVar14 = pcVar16;
          pcVar16 = pcVar14 + 1;
        } while (*pcVar16 != '\0');
        for (puVar6 = (uint64_t *)plStackX_20[8]; puVar6 != (uint64_t *)0x0;
            puVar6 = (uint64_t *)puVar6[6]) {
          pcVar16 = (char *)*puVar6;
          if (pcVar16 == (char *)0x0) {
            pcVar16 = (char *)0x180d48d24;
            pcVar7 = (char *)0x0;
          }
          else {
            pcVar7 = (char *)puVar6[2];
          }
          if (pcVar7 == pcVar14 + -0x180a03a83) {
            pcVar7 = pcVar7 + (longlong)pcVar16;
            if (pcVar7 <= pcVar16) {
LAB_1804b5300:
              lVar12 = 0x180d48d24;
              if (puVar6[1] != 0) {
                lVar12 = puVar6[1];
              }
              (**(code **)(puStack_90 + 0x10))(&puStack_90,lVar12);
              break;
            }
            lVar12 = (longlong)&DAT_180a03a84 - (longlong)pcVar16;
            while (*pcVar16 == pcVar16[lVar12]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar7 <= pcVar16) goto LAB_1804b5300;
            }
          }
        }
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x3a8) + lVar9 * 0x48);
        pcVar16 = "tags";
        do {
          pcVar14 = pcVar16;
          pcVar16 = pcVar14 + 1;
        } while (*pcVar16 != '\0');
        for (puVar6 = (uint64_t *)plVar20[8]; puVar6 != (uint64_t *)0x0;
            puVar6 = (uint64_t *)puVar6[6]) {
          pcVar16 = (char *)*puVar6;
          if (pcVar16 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar16 = (char *)0x180d48d24;
          }
          else {
            pcVar7 = (char *)puVar6[2];
          }
          if (pcVar7 == pcVar14 + -0x180a23573) {
            pcVar7 = pcVar7 + (longlong)pcVar16;
            if (pcVar7 <= pcVar16) {
LAB_1804b5394:
              lVar12 = 0x180d48d24;
              if (puVar6[1] != 0) {
                lVar12 = puVar6[1];
              }
              (**(code **)(*plVar1 + 0x10))(plVar1,lVar12);
              break;
            }
            lVar12 = (longlong)&UNK_180a23574 - (longlong)pcVar16;
            while (*pcVar16 == pcVar16[lVar12]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar7 <= pcVar16) goto LAB_1804b5394;
            }
          }
        }
        puVar6 = (uint64_t *)FUN_1800b30d0(_DAT_180c86930,&puStack_98,&puStack_90,1);
        lVar12 = *(longlong *)(param_1 + 0x3a8);
        uVar2 = *puVar6;
        *puVar6 = 0;
        plStack_58 = *(longlong **)(lVar12 + 0x40 + lVar9 * 0x48);
        *(uint64_t *)(lVar12 + 0x40 + lVar9 * 0x48) = uVar2;
        if (plStack_58 != (longlong *)0x0) {
          (**(code **)(*plStack_58 + 0x38))();
        }
        if (puStack_98 != (ulonglong *)0x0) {
          (**(code **)(*puStack_98 + 0x38))();
        }
        pcVar16 = "style_tags";
        do {
          pcVar14 = pcVar16;
          pcVar16 = pcVar14 + 1;
        } while (*pcVar16 != '\0');
        puVar6 = (uint64_t *)plVar20[6];
LAB_1804b5414:
        if (puVar6 == (uint64_t *)0x0) goto LAB_1804b57ee;
        pcVar16 = (char *)*puVar6;
        if (pcVar16 == (char *)0x0) {
          pcVar7 = (char *)0x0;
          pcVar16 = (char *)0x180d48d24;
        }
        else {
          pcVar7 = (char *)puVar6[2];
        }
        if (pcVar7 != pcVar14 + -0x180a2e687) {
LAB_1804b549a:
          puVar6 = (uint64_t *)puVar6[0xb];
          goto LAB_1804b5414;
        }
        pcVar7 = pcVar7 + (longlong)pcVar16;
        if (pcVar16 < pcVar7) {
          lVar12 = (longlong)&UNK_180a2e688 - (longlong)pcVar16;
          while (*pcVar16 == pcVar16[lVar12]) {
            pcVar16 = pcVar16 + 1;
            if (pcVar7 <= pcVar16) goto LAB_1804b5464;
          }
          goto LAB_1804b549a;
        }
LAB_1804b5464:
        pcVar16 = "style_tag";
        do {
          pcVar14 = pcVar16;
          pcVar16 = pcVar14 + 1;
        } while (*pcVar16 != '\0');
        puVar6 = (uint64_t *)puVar6[6];
        for (puVar11 = puVar6; puVar11 != (uint64_t *)0x0; puVar11 = (uint64_t *)puVar11[0xb]) {
          pcVar16 = (char *)*puVar11;
          if (pcVar16 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar16 = (char *)0x180d48d24;
          }
          else {
            pcVar7 = (char *)puVar11[2];
          }
          if (pcVar7 == pcVar14 + -0x180a2e627) {
            pcVar7 = pcVar7 + (longlong)pcVar16;
            if (pcVar7 <= pcVar16) {
LAB_1804b54d0:
              iVar18 = 0;
LAB_1804b54e0:
              do {
                iVar18 = iVar18 + 1;
                pcVar16 = "style_tag";
                do {
                  pcVar14 = pcVar16;
                  pcVar16 = pcVar14 + 1;
                } while (*pcVar16 != '\0');
                while( true ) {
                  do {
                    puVar11 = (uint64_t *)puVar11[0xb];
                    if (puVar11 == (uint64_t *)0x0) goto LAB_1804b5545;
                    pcVar16 = (char *)*puVar11;
                    if (pcVar16 == (char *)0x0) {
                      pcVar7 = (char *)0x0;
                      pcVar16 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar7 = (char *)puVar11[2];
                    }
                  } while (pcVar7 != pcVar14 + -0x180a2e627);
                  pcVar7 = pcVar7 + (longlong)pcVar16;
                  if (pcVar7 <= pcVar16) break;
                  lVar12 = (longlong)&UNK_180a2e628 - (longlong)pcVar16;
                  while (*pcVar16 == pcVar16[lVar12]) {
                    pcVar16 = pcVar16 + 1;
                    if (pcVar7 <= pcVar16) goto LAB_1804b54e0;
                  }
                }
              } while( true );
            }
            lVar12 = (longlong)&UNK_180a2e628 - (longlong)pcVar16;
            while (*pcVar16 == pcVar16[lVar12]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar7 <= pcVar16) goto LAB_1804b54d0;
            }
          }
        }
        iVar18 = 0;
LAB_1804b5545:
        pcVar16 = "style_tag";
        do {
          pcVar14 = pcVar16;
          pcVar16 = pcVar14 + 1;
        } while (*pcVar16 != '\0');
        for (; puVar6 != (uint64_t *)0x0; puVar6 = (uint64_t *)puVar6[0xb]) {
          pcVar16 = (char *)*puVar6;
          if (pcVar16 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar16 = (char *)0x180d48d24;
          }
          else {
            pcVar7 = (char *)puVar6[2];
          }
          if (pcVar7 == pcVar14 + -0x180a2e627) {
            pcVar7 = pcVar16 + (longlong)pcVar7;
            if (pcVar7 <= pcVar16) goto LAB_1804b55a5;
            lVar12 = (longlong)&UNK_180a2e628 - (longlong)pcVar16;
            while (*pcVar16 == pcVar16[lVar12]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar7 <= pcVar16) goto LAB_1804b55a5;
            }
          }
        }
        puVar6 = (uint64_t *)0x0;
LAB_1804b55a5:
        lVar12 = (longlong)iVar18;
        if (0 < iVar18) {
          lVar9 = 0;
          do {
            puStack_b8 = &UNK_180a3c3e0;
            uStack_a0 = 0;
            lStack_b0 = 0;
            iStack_a8 = 0;
            pcVar16 = "name";
            do {
              pcVar14 = pcVar16;
              pcVar16 = pcVar14 + 1;
            } while (*pcVar16 != '\0');
            for (puVar11 = (uint64_t *)puVar6[8]; puVar11 != (uint64_t *)0x0;
                puVar11 = (uint64_t *)puVar11[6]) {
              pcVar16 = (char *)*puVar11;
              if (pcVar16 == (char *)0x0) {
                pcVar16 = (char *)0x180d48d24;
                pcVar7 = (char *)0x0;
              }
              else {
                pcVar7 = (char *)puVar11[2];
              }
              if (pcVar7 == pcVar14 + -0x180a03a83) {
                pcVar7 = pcVar7 + (longlong)pcVar16;
                if (pcVar7 <= pcVar16) {
LAB_1804b5656:
                  lVar13 = 0x180d48d24;
                  if (puVar11[1] != 0) {
                    lVar13 = puVar11[1];
                  }
                  FUN_180627c50(&puStack_b8,lVar13);
                  break;
                }
                lVar13 = (longlong)&DAT_180a03a84 - (longlong)pcVar16;
                while (*pcVar16 == pcVar16[lVar13]) {
                  pcVar16 = pcVar16 + 1;
                  if (pcVar7 <= pcVar16) goto LAB_1804b5656;
                }
              }
            }
            lVar13 = *(longlong *)(param_1 + 0x3a8) + 0x20 + lVar9;
            puVar11 = *(uint64_t **)(lVar13 + 8);
            if (puVar11 < *(uint64_t **)(lVar13 + 0x10)) {
              *(uint64_t **)(lVar13 + 8) = puVar11 + 4;
              *puVar11 = &UNK_18098bcb0;
              puVar11[1] = 0;
              *(int32_t *)(puVar11 + 2) = 0;
              *puVar11 = &UNK_180a3c3e0;
              puVar11[3] = 0;
              puVar11[1] = 0;
              *(int32_t *)(puVar11 + 2) = 0;
              puStack_48 = puVar11;
              FUN_1806277c0(puVar11,iStack_a8);
              if (iStack_a8 != 0) {
                    // WARNING: Subroutine does not return
                memcpy(puVar11[1],lStack_b0,iStack_a8 + 1);
              }
              if (lStack_b0 != 0) {
                *(int32_t *)(puVar11 + 2) = 0;
                if ((int8_t *)puVar11[1] != (int8_t *)0x0) {
                  *(int8_t *)puVar11[1] = 0;
                }
                *(int32_t *)((longlong)puVar11 + 0x1c) = 0;
              }
            }
            else {
              FUN_180059820(lVar13,&puStack_b8);
            }
            pcVar16 = "style_tag";
            do {
              pcVar14 = pcVar16;
              pcVar16 = pcVar14 + 1;
            } while (*pcVar16 != '\0');
            for (puVar6 = (uint64_t *)puVar6[0xb]; puVar6 != (uint64_t *)0x0;
                puVar6 = (uint64_t *)puVar6[0xb]) {
              pcVar7 = (char *)*puVar6;
              pcVar16 = (char *)0x0;
              if (pcVar7 == (char *)0x0) {
                pcVar7 = (char *)0x180d48d24;
              }
              else {
                pcVar16 = (char *)puVar6[2];
              }
              if (pcVar16 == pcVar14 + -0x180a2e627) {
                pcVar16 = pcVar7 + (longlong)pcVar16;
                if (pcVar16 <= pcVar7) goto LAB_1804b5797;
                lVar13 = (longlong)&UNK_180a2e628 - (longlong)pcVar7;
                while (*pcVar7 == pcVar7[lVar13]) {
                  pcVar7 = pcVar7 + 1;
                  if (pcVar16 <= pcVar7) goto LAB_1804b5797;
                }
              }
            }
            puVar6 = (uint64_t *)0x0;
LAB_1804b5797:
            puStack_b8 = &UNK_180a3c3e0;
            if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            lStack_b0 = 0;
            uStack_a0 = uStack_a0 & 0xffffffff00000000;
            puStack_b8 = &UNK_18098bcb0;
            lVar9 = lVar9 + 0x48;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          iVar8 = (int)uStack_70;
          lVar9 = lStack_68;
          plVar20 = plStackX_20;
        }
LAB_1804b57ee:
        pcVar16 = "tattoo_material";
        do {
          pcVar14 = pcVar16;
          pcVar16 = pcVar14 + 1;
        } while (*pcVar16 != '\0');
        for (plStackX_20 = (longlong *)plVar20[0xb]; plStackX_20 != (uint64_t *)0x0;
            plStackX_20 = (longlong *)plStackX_20[0xb]) {
          pcVar16 = (char *)*plStackX_20;
          if (pcVar16 == (char *)0x0) {
            pcVar16 = (char *)0x180d48d24;
            pcVar7 = (char *)0x0;
          }
          else {
            pcVar7 = (char *)plStackX_20[2];
          }
          if (pcVar7 == pcVar14 + -0x180a2e6f7) {
            pcVar7 = pcVar7 + (longlong)pcVar16;
            if (pcVar7 <= pcVar16) goto LAB_1804b5872;
            lVar12 = (longlong)&UNK_180a2e6f8 - (longlong)pcVar16;
            while (*pcVar16 == pcVar16[lVar12]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar7 <= pcVar16) goto LAB_1804b5872;
            }
          }
        }
        plStackX_20 = (uint64_t *)0x0;
LAB_1804b5872:
        uStack_70 = (ulonglong)(iVar8 + 1U);
        lStack_68 = lVar9 + 1;
        if (*(int *)(param_1 + 0x3b0) <= (int)(iVar8 + 1U)) goto LAB_1804b589b;
      } while( true );
    }
    lVar9 = (longlong)&UNK_180a2e650 - (longlong)pcVar16;
    while (*pcVar16 == pcVar16[lVar9]) {
      pcVar16 = pcVar16 + 1;
      if (pcVar4 <= pcVar16) goto LAB_1804b4f30;
    }
  }
  puVar6 = (uint64_t *)puVar6[0xb];
  goto joined_r0x0001804b4ee9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804b58f0(longlong param_1,longlong param_2)
void FUN_1804b58f0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  uint64_t *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  ulonglong *puVar14;
  
  puVar14 = (ulonglong *)0x0;
  uVar13 = 0;
  *(int32_t *)(param_1 + 0x380) = 0;
  pcVar11 = "hair_meshes";
  do {
    pcVar12 = pcVar11;
    pcVar11 = pcVar12 + 1;
  } while (*pcVar11 != '\0');
  for (puVar3 = *(ulonglong **)(param_2 + 0x30); puVar5 = puVar14, puVar3 != (ulonglong *)0x0;
      puVar3 = (ulonglong *)puVar3[0xb]) {
    pcVar11 = (char *)*puVar3;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x180d48d24;
    }
    else {
      puVar5 = (ulonglong *)puVar3[2];
    }
    if (puVar5 == (ulonglong *)(pcVar12 + -0x180a2e6e7)) {
      pcVar1 = (char *)((longlong)puVar5 + (longlong)pcVar11);
      puVar5 = puVar3;
      if (pcVar1 <= pcVar11) break;
      lVar6 = (longlong)&UNK_180a2e6e8 - (longlong)pcVar11;
      while (*pcVar11 == pcVar11[lVar6]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar1 <= pcVar11) goto LAB_1804b5996;
      }
    }
  }
LAB_1804b5996:
  FUN_180631330(puVar5,&UNK_180a2e1d8,param_1 + 0xa60);
  if (puVar5 != (ulonglong *)0x0) {
    pcVar11 = "hair_mesh";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    for (puVar7 = (uint64_t *)puVar5[6]; puVar7 != (uint64_t *)0x0;
        puVar7 = (uint64_t *)puVar7[0xb]) {
      pcVar11 = (char *)*puVar7;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x180d48d24;
        puVar3 = puVar14;
      }
      else {
        puVar3 = (ulonglong *)puVar7[2];
      }
      if (puVar3 == (ulonglong *)(pcVar12 + -0x180a2e717)) {
        pcVar1 = pcVar11 + (longlong)puVar3;
        puVar3 = puVar14;
        if (pcVar1 <= pcVar11) {
LAB_1804b5a20:
          do {
            uVar13 = (int)puVar3 + 1;
            pcVar11 = "hair_mesh";
            do {
              pcVar12 = pcVar11;
              pcVar11 = pcVar12 + 1;
            } while (*pcVar11 != '\0');
            while( true ) {
              do {
                puVar7 = (uint64_t *)puVar7[0xb];
                if (puVar7 == (uint64_t *)0x0) goto LAB_1804b5a86;
                pcVar11 = (char *)*puVar7;
                if (pcVar11 == (char *)0x0) {
                  pcVar11 = (char *)0x180d48d24;
                  puVar3 = puVar14;
                }
                else {
                  puVar3 = (ulonglong *)puVar7[2];
                }
              } while (puVar3 != (ulonglong *)(pcVar12 + -0x180a2e717));
              pcVar1 = (char *)((longlong)puVar3 + (longlong)pcVar11);
              puVar3 = (ulonglong *)(ulonglong)uVar13;
              if (pcVar1 <= pcVar11) break;
              lVar6 = (longlong)&UNK_180a2e718 - (longlong)pcVar11;
              while (*pcVar11 == pcVar11[lVar6]) {
                pcVar11 = pcVar11 + 1;
                if (pcVar1 <= pcVar11) goto LAB_1804b5a20;
              }
            }
          } while( true );
        }
        lVar6 = (longlong)&UNK_180a2e718 - (longlong)pcVar11;
        while (*pcVar11 == pcVar11[lVar6]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar1 <= pcVar11) goto LAB_1804b5a20;
        }
      }
    }
LAB_1804b5a86:
    *(uint *)(param_1 + 0x380) = uVar13;
    uVar10 = (ulonglong)(int)uVar13;
    puVar3 = puVar14;
    if (uVar13 != 0) {
      puVar4 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,uVar10 * 400 + 0x10,0x12);
      *puVar4 = uVar10 << 0x20 | 400;
      puVar8 = puVar4 + 7;
      puVar9 = puVar14;
      do {
        puVar8[-5] = 0;
        puVar8[-4] = 0;
        puVar8[-3] = 0;
        *(int32_t *)(puVar8 + -2) = 3;
        puVar8[-1] = (ulonglong)&UNK_18098bcb0;
        *puVar8 = 0;
        *(int32_t *)(puVar8 + 1) = 0;
        puVar8[-1] = (ulonglong)&UNK_180a3c3e0;
        puVar8[2] = 0;
        *puVar8 = 0;
        *(int32_t *)(puVar8 + 1) = 0;
        FUN_1808fc838(puVar8 + 9,0x30,6,FUN_1802092f0,FUN_180209450);
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        uVar13 = (int)puVar9 + 1;
        puVar9 = (ulonglong *)(ulonglong)uVar13;
        puVar8 = puVar8 + 0x32;
        puVar3 = puVar4 + 2;
      } while ((ulonglong)(longlong)(int)uVar13 < uVar10);
    }
    *(ulonglong **)(param_1 + 0x378) = puVar3;
    pcVar11 = "hair_mesh";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    for (puVar3 = (ulonglong *)puVar5[6]; puVar5 = puVar14, puVar3 != (ulonglong *)0x0;
        puVar3 = (ulonglong *)puVar3[0xb]) {
      pcVar11 = (char *)*puVar3;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x180d48d24;
      }
      else {
        puVar5 = (ulonglong *)puVar3[2];
      }
      if (puVar5 == (ulonglong *)(pcVar12 + -0x180a2e717)) {
        pcVar1 = (char *)((longlong)puVar5 + (longlong)pcVar11);
        puVar5 = puVar3;
        if (pcVar1 <= pcVar11) break;
        lVar6 = (longlong)&UNK_180a2e718 - (longlong)pcVar11;
        while (*pcVar11 == pcVar11[lVar6]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar1 <= pcVar11) goto LAB_1804b5c0e;
        }
      }
    }
LAB_1804b5c0e:
    iVar2 = *(int *)(param_1 + 0x380);
    puVar3 = puVar14;
    if (0 < iVar2) {
      do {
        FUN_1804b3e80((longlong)(int)puVar3 * 400 + *(longlong *)(param_1 + 0x378),puVar5);
        pcVar11 = "hair_mesh";
        do {
          pcVar12 = pcVar11;
          pcVar11 = pcVar12 + 1;
        } while (*pcVar11 != '\0');
        for (puVar8 = (ulonglong *)puVar5[0xb]; puVar5 = puVar14, puVar8 != (ulonglong *)0x0;
            puVar8 = (ulonglong *)puVar8[0xb]) {
          pcVar11 = (char *)*puVar8;
          if (pcVar11 == (char *)0x0) {
            pcVar11 = (char *)0x180d48d24;
          }
          else {
            puVar5 = (ulonglong *)puVar8[2];
          }
          if (puVar5 == (ulonglong *)(pcVar12 + -0x180a2e717)) {
            pcVar1 = (char *)((longlong)puVar5 + (longlong)pcVar11);
            puVar5 = puVar8;
            if (pcVar1 <= pcVar11) break;
            lVar6 = (longlong)&UNK_180a2e718 - (longlong)pcVar11;
            while (*pcVar11 == pcVar11[lVar6]) {
              pcVar11 = pcVar11 + 1;
              if (pcVar1 <= pcVar11) goto LAB_1804b5c9e;
            }
          }
        }
LAB_1804b5c9e:
        uVar13 = (int)puVar3 + 1;
        puVar3 = (ulonglong *)(ulonglong)uVar13;
        iVar2 = *(int *)(param_1 + 0x380);
      } while ((int)uVar13 < iVar2);
    }
    if (0x20 < iVar2) {
      *(int32_t *)(param_1 + 0x380) = 0x20;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




