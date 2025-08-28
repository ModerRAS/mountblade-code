#include "TaleWorlds.Native.Split.h"

// 99_part_05_part031.c - 3 个函数

// 函数: void FUN_1802eaec0(int64_t param_1,int64_t param_2,char param_3,char param_4,int64_t param_5,
void FUN_1802eaec0(int64_t param_1,int64_t param_2,char param_3,char param_4,int64_t param_5,
                  char param_6,char param_7,uint param_8)

{
  int64_t *plVar1;
  int64_t ***ppplVar2;
  int64_t ****pppplVar3;
  int64_t ****pppplVar4;
  code *pcVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint uVar11;
  int iVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  char *pcVar15;
  int64_t *plVar16;
  uint uVar17;
  int64_t lVar18;
  int64_t lVar19;
  uint64_t uVar20;
  uint *puVar21;
  int64_t lVar22;
  uint64_t *puVar23;
  char *pcVar24;
  char *pcVar25;
  int iVar26;
  int64_t ****pppplStackX_8;
  int64_t ****pppplStackX_10;
  char cStackX_18;
  char cStackX_20;
  uint in_stack_ffffffffffffff50;
  int64_t ***ppplStack_98;
  int64_t ****pppplStack_90;
  uint64_t uStack_88;
  int64_t ****pppplStack_80;
  int64_t *plStack_78;
  int64_t *plStack_70;
  int64_t *plStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  
  uStack_88 = 0xfffffffffffffffe;
  lVar18 = *(int64_t *)(param_1 + 0x20);
  cStackX_18 = param_3;
  cStackX_20 = param_4;
  if ((lVar18 == param_2) && (param_2 != 0)) {
    if (((*(uint *)(param_1 + 0x2ac) & 0x10000000) == 0) &&
       (((iVar26 = *(int *)(param_1 + 0x2b8), iVar26 == -1 ||
         (*(uint64_t *)(lVar18 + 0x60838) <= (uint64_t)(int64_t)iVar26)) ||
        ((*(uint64_t *)(*(int64_t *)(lVar18 + 0x60830) + (int64_t)iVar26 * 0x10) &
         0xffffffff00000000) == 0)))) {
      FUN_1803982f0(lVar18 + 0x607e0,param_1);
    }
  }
  else {
    lVar19 = *(int64_t *)(param_1 + 0x168);
    if ((lVar19 != 0) && (*(int64_t *)(lVar19 + 0x20) != param_2)) {
      in_stack_ffffffffffffff50 = param_8;
      FUN_1802eb9a0(lVar19,param_1,0,0,param_7,param_8);
      lVar18 = *(int64_t *)(param_1 + 0x20);
    }
    if (lVar18 != 0) {
      if (*(int64_t *)(param_1 + 0x260) != 0) {
        FUN_180300650(*(int64_t *)(param_1 + 0x260),0);
        FUN_1802fc520(*(uint64_t *)(param_1 + 0x260),param_2 == 0);
        lVar18 = *(int64_t *)(param_1 + 0x20);
      }
      if ((((*(int64_t *)(lVar18 + 0x60830) != 0) &&
           (iVar26 = *(int *)(param_1 + 0x2b8), iVar26 != -1)) &&
          ((uint64_t)(int64_t)iVar26 < *(uint64_t *)(lVar18 + 0x60838))) &&
         ((*(uint64_t *)(*(int64_t *)(lVar18 + 0x60830) + (int64_t)iVar26 * 0x10) &
          0xffffffff00000000) != 0)) {
        FUN_180398450(lVar18 + 0x607e0);
        lVar18 = *(int64_t *)(param_1 + 0x20);
      }
      iVar26 = 0;
      plVar1 = (int64_t *)(param_1 + 0x200);
      if (*(int64_t *)(param_1 + 0x208) - *plVar1 >> 3 != 0) {
        do {
          FUN_1801b0660(*(uint64_t *)(param_1 + 0x20));
          iVar26 = iVar26 + 1;
        } while ((uint64_t)(int64_t)iVar26 <
                 (uint64_t)(*(int64_t *)(param_1 + 0x208) - *plVar1 >> 3));
        lVar18 = *(int64_t *)(param_1 + 0x20);
      }
      if ((*(char *)(lVar18 + 0x607d0) == '\0') && (system_data_ecee == '\0')) {
        puVar21 = (uint *)((int64_t)*(int *)(lVar18 + 0x80c0) * 0x2408 + lVar18 + 0x5cb8);
        for (uVar17 = 0; (uint64_t)(int64_t)(int)uVar17 < (uint64_t)*puVar21; uVar17 = uVar17 + 1
            ) {
          if (*(int64_t *)
               (*(int64_t *)(puVar21 + (uint64_t)(uVar17 >> 7) * 2 + 2) +
               (uint64_t)(uVar17 & 0x7f) * 8) == param_1) {
            *(uint64_t *)
             (*(int64_t *)(puVar21 + (uint64_t)(uVar17 >> 7) * 2 + 2) +
             (uint64_t)(uVar17 & 0x7f) * 8) = 0;
          }
        }
      }
      if (*(int64_t *)(param_1 + 0x170) != 0) {
        lVar18 = *(int64_t *)(param_1 + 0x20);
        uVar13 = FUN_1802267d0();
        FUN_1801ba400(lVar18 + 0xb0,&pppplStack_80,uVar13);
        if (pppplStack_80 !=
            *(int64_t *****)(*(int64_t *)(lVar18 + 0xb8) + *(int64_t *)(lVar18 + 0xc0) * 8)) {
          ppplVar2 = pppplStack_80[0x14];
          plVar1 = plStack_78;
          while (ppplVar2 == (int64_t ***)0x0) {
            plVar1 = plVar1 + 1;
            ppplVar2 = (int64_t ***)*plVar1;
          }
          pppplVar3 = (int64_t ****)*plStack_78;
          pppplVar4 = (int64_t ****)pppplVar3[0x14];
          if (pppplVar3 == pppplStack_80) {
            *plStack_78 = (int64_t)pppplVar4;
          }
          else {
            for (; pppplVar4 != pppplStack_80; pppplVar4 = (int64_t ****)pppplVar4[0x14]) {
              pppplVar3 = pppplVar4;
            }
            pppplVar3[0x14] = pppplVar4[0x14];
          }
          pppplStackX_8 = pppplStack_80;
          *pppplStack_80 = (int64_t ***)&system_state_ptr;
                    // WARNING: Subroutine does not return
          FUN_18064e900(pppplStack_80);
        }
      }
      if (param_7 != '\0') {
        iVar26 = 0;
        if (*(int64_t *)(param_1 + 0x208) - *plVar1 >> 3 != 0) {
          lVar18 = 0;
          do {
            (**(code **)(**(int64_t **)(lVar18 + *plVar1) + 0x80))
                      (*(int64_t **)(lVar18 + *plVar1),param_8);
            iVar26 = iVar26 + 1;
            lVar18 = lVar18 + 8;
          } while ((uint64_t)(int64_t)iVar26 <
                   (uint64_t)(*(int64_t *)(param_1 + 0x208) - *plVar1 >> 3));
        }
        FUN_1800b8500(plVar1);
        *(uint64_t *)(param_1 + 0x228) = *(uint64_t *)(param_1 + 0x220);
      }
      if (((param_6 == '\0') && (*(int64_t *)(param_1 + 0x20) != 0)) &&
         (*(int64_t *)(param_1 + 0x270) != 0)) {
        FUN_1802e8910(param_1);
        *(int8_t *)(param_1 + 0x278) = 0;
      }
      uVar17 = 0;
      iVar26 = FUN_1802ed190(param_1,7);
      if (iVar26 != 0) {
        do {
          puVar14 = (uint64_t *)FUN_1802ed2b0(param_1,&pppplStack_90,7,uVar17);
          plVar1 = (int64_t *)*puVar14;
          if (pppplStack_90 != (int64_t ****)0x0) {
            (*(code *)(*pppplStack_90)[7])();
          }
          pppplStackX_8 =
               (int64_t ****)
               CONCAT44(pppplStackX_8._4_4_,(uint)(*(int64_t *)(param_1 + 0x20) != 0));
          (**(code **)(*plVar1 + 0x128))(plVar1,&pppplStackX_8);
          uVar17 = uVar17 + 1;
          uVar11 = FUN_1802ed190(param_1,7);
        } while (uVar17 < uVar11);
      }
      uVar13 = *(uint64_t *)(param_1 + 0x20);
      iVar26 = 0;
      if (*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3 != 0) {
        lVar18 = 0;
        do {
          FUN_1802549d0(*(uint64_t *)(lVar18 + *(int64_t *)(param_1 + 0xf0)),uVar13);
          iVar26 = iVar26 + 1;
          lVar18 = lVar18 + 8;
        } while ((uint64_t)(int64_t)iVar26 <
                 (uint64_t)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3));
      }
      if (*(int64_t *)(param_1 + 0x260) != 0) {
        FUN_1802fc960(*(int64_t *)(param_1 + 0x260),uVar13);
      }
      lVar18 = *(int64_t *)(param_1 + 0x28);
      param_3 = cStackX_18;
      if (*(int64_t *)(lVar18 + 0x170) != 0) {
        plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x20) + 0x29a8);
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          lVar18 = *(int64_t *)(param_1 + 0x28);
        }
        *(uint64_t *)(lVar18 + 0x170) = 0;
        param_3 = cStackX_18;
      }
    }
    if (param_2 != 0) {
      FUN_1800ee650(param_1);
    }
    *(int64_t *)(param_1 + 0x20) = param_2;
    iVar26 = 0;
    lVar18 = *(int64_t *)(param_1 + 0x1e0);
    lVar19 = param_2;
    if (*(int64_t *)(param_1 + 0x1e8) - lVar18 >> 3 != 0) {
      lVar19 = 0;
      do {
        iVar12 = (**(code **)(**(int64_t **)(lVar18 + lVar19) + 0x98))();
        if ((iVar12 == 4) ||
           (iVar12 = (**(code **)(**(int64_t **)(lVar19 + *(int64_t *)(param_1 + 0x1e0)) + 0x98))
                               (), iVar12 == 2)) {
          plVar1 = *(int64_t **)(lVar19 + *(int64_t *)(param_1 + 0x1e0));
          (**(code **)(*plVar1 + 0x1e0))(plVar1,param_1);
        }
        iVar26 = iVar26 + 1;
        lVar19 = lVar19 + 8;
        lVar18 = *(int64_t *)(param_1 + 0x1e0);
      } while ((uint64_t)(int64_t)iVar26 <
               (uint64_t)(*(int64_t *)(param_1 + 0x1e8) - lVar18 >> 3));
      lVar19 = *(int64_t *)(param_1 + 0x20);
    }
    if (lVar19 != 0) {
      if ((*(uint *)(param_1 + 0x2ac) & 0x10000000) == 0) {
        FUN_1803982f0(lVar19 + 0x607e0,param_1);
        lVar19 = *(int64_t *)(param_1 + 0x20);
      }
      if ((param_3 != '\0') && (lVar19 != 0)) {
        if (*(int64_t *)(param_1 + 0x270) != 0) {
          FUN_1802e8910(param_1);
          *(int8_t *)(param_1 + 0x278) = 0;
          lVar19 = *(int64_t *)(param_1 + 0x20);
        }
        FUN_1802f28f0(param_1,lVar19);
        lVar19 = *(int64_t *)(param_1 + 0x20);
      }
      iVar26 = 0;
      lVar18 = *(int64_t *)(param_1 + 0x208);
      lVar22 = *(int64_t *)(param_1 + 0x200);
      if (lVar18 - lVar22 >> 3 != 0) {
        lVar19 = 0;
        do {
          plVar1 = *(int64_t **)(lVar19 + *(int64_t *)(param_1 + 0x200));
          (**(code **)(*plVar1 + 0x158))(plVar1,*(uint64_t *)(param_1 + 0x20));
          iVar26 = iVar26 + 1;
          lVar19 = lVar19 + 8;
          lVar18 = *(int64_t *)(param_1 + 0x208);
          lVar22 = *(int64_t *)(param_1 + 0x200);
        } while ((uint64_t)(int64_t)iVar26 < (uint64_t)(lVar18 - lVar22 >> 3));
        lVar19 = *(int64_t *)(param_1 + 0x20);
      }
      iVar26 = 0;
      if (lVar18 - lVar22 >> 3 != 0) {
        lVar18 = 0;
        do {
          FUN_1801982b0(*(uint64_t *)(param_1 + 0x20),
                        *(uint64_t *)(lVar18 + *(int64_t *)(param_1 + 0x200)));
          iVar26 = iVar26 + 1;
          lVar18 = lVar18 + 8;
        } while ((uint64_t)(int64_t)iVar26 <
                 (uint64_t)(*(int64_t *)(param_1 + 0x208) - *(int64_t *)(param_1 + 0x200) >> 3));
        lVar19 = *(int64_t *)(param_1 + 0x20);
      }
      FUN_1801b01f0(lVar19,param_1);
      if (*(int64_t *)(param_1 + 0x170) != 0) {
        FUN_1801b08a0(*(uint64_t *)(param_1 + 0x20),param_1);
      }
      if (param_7 != '\0') {
        FUN_1802f0f10(param_1);
        FUN_1802f07e0(param_1);
      }
      if ((*(byte *)(param_1 + 0x2e8) & 0x40) != 0) {
        plStack_70 = (int64_t *)0x0;
        plStack_68 = (int64_t *)0x0;
        uStack_60 = 0;
        uStack_58 = 3;
        FUN_1802e92b0(param_1,&plStack_70,0,0xffffffff);
        plVar10 = plStack_68;
        plVar9 = plStack_70;
        uVar20 = (int64_t)plStack_68 - (int64_t)plStack_70 >> 3;
        iVar26 = 0;
        plVar16 = plStack_70;
        plVar1 = plStack_70;
        if (uVar20 != 0) {
          do {
            lVar18 = *plVar16;
            uVar6 = *(int32_t *)(param_1 + 0x184);
            uVar7 = *(int32_t *)(param_1 + 0x188);
            uVar8 = *(int32_t *)(param_1 + 0x18c);
            *(int32_t *)(lVar18 + 0x238) = *(int32_t *)(param_1 + 0x180);
            *(int32_t *)(lVar18 + 0x23c) = uVar6;
            *(int32_t *)(lVar18 + 0x240) = uVar7;
            *(int32_t *)(lVar18 + 0x244) = uVar8;
            iVar26 = iVar26 + 1;
            plVar16 = plVar16 + 1;
          } while ((uint64_t)(int64_t)iVar26 < uVar20);
        }
        for (; plVar1 != plVar10; plVar1 = plVar1 + 1) {
          if ((int64_t *)*plVar1 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar1 + 0x38))();
          }
        }
        if (plVar9 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar9);
        }
      }
      uVar13 = *(uint64_t *)(param_1 + 0x20);
      iVar26 = 0;
      if (*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3 != 0) {
        lVar18 = 0;
        do {
          FUN_1802548a0(*(uint64_t *)(lVar18 + *(int64_t *)(param_1 + 0xf0)),uVar13);
          iVar26 = iVar26 + 1;
          lVar18 = lVar18 + 8;
        } while ((uint64_t)(int64_t)iVar26 <
                 (uint64_t)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3));
      }
      if (*(int64_t *)(param_1 + 0x260) != 0) {
        FUN_1802fc840(*(int64_t *)(param_1 + 0x260),uVar13);
      }
      if (((cStackX_20 != '\0') &&
          (ppplVar2 = *(int64_t ****)(param_1 + 0x10), ppplVar2 != (int64_t ***)0x0)) &&
         ((*(byte *)(param_1 + 0x2e8) & 0xb) == 0xb)) {
        lVar18 = *(int64_t *)(param_1 + 0x20);
        pppplStackX_8 = (int64_t ****)&pppplStackX_10;
        pppplStackX_10 = (int64_t ****)ppplVar2;
        (*(code *)(*ppplVar2)[5])();
        pppplStack_90 = (int64_t ****)&pppplStackX_10;
        plVar1 = *(int64_t **)(lVar18 + 0x29a8);
        if (plVar1 == (int64_t *)0x0) {
          if (pppplStackX_10 != (int64_t ****)0x0) {
            (*(code *)(*pppplStackX_10)[7])();
          }
          uVar13 = 0;
        }
        else {
          pcVar5 = *(code **)(*plVar1 + 8);
          pppplStackX_8 = &ppplStack_98;
          ppplStack_98 = (int64_t ***)pppplStackX_10;
          if (pppplStackX_10 != (int64_t ****)0x0) {
            (*(code *)(*pppplStackX_10)[5])();
          }
          uVar13 = (*pcVar5)(plVar1,&ppplStack_98);
          if (pppplStackX_10 != (int64_t ****)0x0) {
            (*(code *)(*pppplStackX_10)[7])();
          }
        }
        *(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0x170) = uVar13;
        lVar18 = *(int64_t *)(param_1 + 0x20);
        lVar19 = *(int64_t *)(param_1 + 0x28);
        plVar1 = *(int64_t **)(lVar18 + 0x29a8);
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x18))(plVar1,*(uint64_t *)(lVar19 + 0x170),param_1 + 0x70);
          lVar18 = *(int64_t *)(param_1 + 0x20);
          lVar19 = *(int64_t *)(param_1 + 0x28);
        }
        plVar1 = *(int64_t **)(lVar18 + 0x29a8);
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x20))
                    (plVar1,*(uint64_t *)(lVar19 + 0x170),*(int32_t *)(param_1 + 0x18));
        }
      }
    }
    puVar14 = (uint64_t *)0x0;
    if (param_5 != 0) {
      pcVar25 = "children";
      do {
        pcVar24 = pcVar25;
        pcVar25 = pcVar24 + 1;
      } while (*pcVar25 != '\0');
      puVar23 = *(uint64_t **)(param_5 + 0x30);
LAB_1802eb78f:
      if (puVar23 != (uint64_t *)0x0) {
        pcVar25 = (char *)*puVar23;
        if (pcVar25 == (char *)0x0) {
          pcVar15 = (char *)0x0;
          pcVar25 = (char *)0x180d48d24;
        }
        else {
          pcVar15 = (char *)puVar23[2];
        }
        if (pcVar15 != pcVar24 + -0x180a18037) goto LAB_1802eb7fe;
        pcVar15 = pcVar15 + (int64_t)pcVar25;
        if (pcVar25 < pcVar15) {
          lVar18 = (int64_t)&unknown_var_5064_ptr - (int64_t)pcVar25;
          while (*pcVar25 == pcVar25[lVar18]) {
            pcVar25 = pcVar25 + 1;
            if (pcVar15 <= pcVar25) goto LAB_1802eb7d3;
          }
          goto LAB_1802eb7fe;
        }
LAB_1802eb7d3:
        pcVar25 = "game_entity";
        do {
          pcVar24 = pcVar25;
          pcVar25 = pcVar24 + 1;
        } while (*pcVar25 != '\0');
        for (puVar14 = (uint64_t *)puVar23[6]; puVar14 != (uint64_t *)0x0;
            puVar14 = (uint64_t *)puVar14[0xb]) {
          pcVar25 = (char *)*puVar14;
          if (pcVar25 == (char *)0x0) {
            pcVar15 = (char *)0x0;
            pcVar25 = (char *)0x180d48d24;
          }
          else {
            pcVar15 = (char *)puVar14[2];
          }
          if (pcVar15 == pcVar24 + -0x180a0b67f) {
            pcVar15 = pcVar25 + (int64_t)pcVar15;
            if (pcVar15 <= pcVar25) goto LAB_1802eb83e;
            lVar18 = (int64_t)&unknown_var_3424_ptr - (int64_t)pcVar25;
            while (*pcVar25 == pcVar25[lVar18]) {
              pcVar25 = pcVar25 + 1;
              if (pcVar15 <= pcVar25) goto LAB_1802eb83e;
            }
          }
        }
        puVar14 = (uint64_t *)0x0;
      }
    }
LAB_1802eb83e:
    iVar26 = 0;
    lVar18 = *(int64_t *)(param_1 + 0x1c0);
    if (*(int64_t *)(param_1 + 0x1c8) - lVar18 >> 3 != 0) {
      lVar19 = 0;
      do {
        in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xffffff00;
        FUN_1802eaec0(*(uint64_t *)(lVar18 + lVar19),param_2,cStackX_18,cStackX_20,puVar14,
                      in_stack_ffffffffffffff50,param_7,param_8);
        if (puVar14 != (uint64_t *)0x0) {
          pcVar25 = "game_entity";
          do {
            pcVar24 = pcVar25;
            pcVar25 = pcVar24 + 1;
          } while (*pcVar25 != '\0');
          for (puVar14 = (uint64_t *)puVar14[0xb]; puVar14 != (uint64_t *)0x0;
              puVar14 = (uint64_t *)puVar14[0xb]) {
            pcVar25 = (char *)*puVar14;
            if (pcVar25 == (char *)0x0) {
              pcVar15 = (char *)0x0;
              pcVar25 = (char *)0x180d48d24;
            }
            else {
              pcVar15 = (char *)puVar14[2];
            }
            if (pcVar15 == pcVar24 + -0x180a0b67f) {
              pcVar15 = pcVar15 + (int64_t)pcVar25;
              if (pcVar15 <= pcVar25) goto LAB_1802eb904;
              lVar18 = (int64_t)&unknown_var_3424_ptr - (int64_t)pcVar25;
              while (*pcVar25 == pcVar25[lVar18]) {
                pcVar25 = pcVar25 + 1;
                if (pcVar15 <= pcVar25) goto LAB_1802eb904;
              }
            }
          }
          puVar14 = (uint64_t *)0x0;
        }
LAB_1802eb904:
        iVar26 = iVar26 + 1;
        lVar19 = lVar19 + 8;
        lVar18 = *(int64_t *)(param_1 + 0x1c0);
      } while ((uint64_t)(int64_t)iVar26 <
               (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - lVar18 >> 3));
    }
    if ((*(int64_t *)(param_1 + 0x20) == 0) &&
       (pppplVar3 = *(int64_t *****)(param_1 + 0x28), pppplVar3 != (int64_t ****)0x0)) {
      pppplStackX_10 = pppplVar3 + 0x2a;
      if (*pppplStackX_10 != (int64_t ***)0x0) {
        pppplStackX_8 = pppplVar3;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      pppplStackX_8 = pppplVar3 + 0x26;
      if (*pppplStackX_8 == (int64_t ***)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(pppplVar3);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
LAB_1802eb7fe:
  puVar23 = (uint64_t *)puVar23[0xb];
  goto LAB_1802eb78f;
}



uint64_t
FUN_1802eb9a0(int64_t param_1,int64_t *param_2,int8_t param_3,char param_4,int8_t param_5,
             int32_t param_6)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int iVar31;
  uint64_t uVar32;
  int64_t *plVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint uVar36;
  int64_t *plStack_88;
  uint64_t uStack_80;
  int64_t **pplStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  
  uStack_80 = 0xfffffffffffffffe;
  FUN_1802ed990(param_1,1);
  plVar33 = *(int64_t **)(param_1 + 0x1c0);
  uVar35 = 0;
  iVar31 = (int)(*(int64_t *)(param_1 + 0x1c8) - (int64_t)plVar33 >> 3);
  uVar32 = uVar35;
  uVar34 = uVar35;
  if (0 < iVar31) {
    do {
      if ((int64_t *)*plVar33 == param_2) {
        fVar15 = *(float *)(param_1 + 0x70);
        fVar16 = *(float *)(param_1 + 0x74);
        fVar17 = *(float *)(param_1 + 0x78);
        fVar18 = *(float *)(param_1 + 0x7c);
        fVar19 = *(float *)(param_1 + 0x80);
        fVar20 = *(float *)(param_1 + 0x84);
        fVar21 = *(float *)(param_1 + 0x88);
        fVar22 = *(float *)(param_1 + 0x8c);
        fVar23 = *(float *)(param_1 + 0x90);
        fVar24 = *(float *)(param_1 + 0x94);
        fVar25 = *(float *)(param_1 + 0x98);
        fVar26 = *(float *)(param_1 + 0x9c);
        fVar27 = *(float *)(param_1 + 0xa0);
        fVar28 = *(float *)(param_1 + 0xa4);
        fVar29 = *(float *)(param_1 + 0xa8);
        fVar30 = *(float *)(param_1 + 0xac);
        fVar2 = *(float *)((int64_t)param_2 + 0x34);
        fVar3 = *(float *)(param_2 + 7);
        fVar4 = *(float *)(param_2 + 6);
        fVar5 = *(float *)((int64_t)param_2 + 0x44);
        fVar6 = *(float *)(param_2 + 9);
        fVar7 = *(float *)(param_2 + 8);
        fVar8 = *(float *)((int64_t)param_2 + 0x54);
        fVar9 = *(float *)(param_2 + 0xb);
        fVar10 = *(float *)(param_2 + 10);
        fVar11 = *(float *)((int64_t)param_2 + 100);
        fVar12 = *(float *)(param_2 + 0xd);
        fVar13 = *(float *)(param_2 + 0xc);
        *(float *)(param_2 + 6) = fVar4 * fVar15 + fVar2 * fVar19 + fVar3 * fVar23;
        *(float *)((int64_t)param_2 + 0x34) = fVar4 * fVar16 + fVar2 * fVar20 + fVar3 * fVar24;
        *(float *)(param_2 + 7) = fVar4 * fVar17 + fVar2 * fVar21 + fVar3 * fVar25;
        *(float *)((int64_t)param_2 + 0x3c) = fVar4 * fVar18 + fVar2 * fVar22 + fVar3 * fVar26;
        *(float *)(param_2 + 8) = fVar7 * fVar15 + fVar5 * fVar19 + fVar6 * fVar23;
        *(float *)((int64_t)param_2 + 0x44) = fVar7 * fVar16 + fVar5 * fVar20 + fVar6 * fVar24;
        *(float *)(param_2 + 9) = fVar7 * fVar17 + fVar5 * fVar21 + fVar6 * fVar25;
        *(float *)((int64_t)param_2 + 0x4c) = fVar7 * fVar18 + fVar5 * fVar22 + fVar6 * fVar26;
        *(float *)(param_2 + 10) = fVar10 * fVar15 + fVar8 * fVar19 + fVar9 * fVar23;
        *(float *)((int64_t)param_2 + 0x54) = fVar10 * fVar16 + fVar8 * fVar20 + fVar9 * fVar24;
        *(float *)(param_2 + 0xb) = fVar10 * fVar17 + fVar8 * fVar21 + fVar9 * fVar25;
        *(float *)((int64_t)param_2 + 0x5c) = fVar10 * fVar18 + fVar8 * fVar22 + fVar9 * fVar26;
        *(float *)(param_2 + 0xc) = fVar13 * fVar15 + fVar11 * fVar19 + fVar12 * fVar23 + fVar27;
        *(float *)((int64_t)param_2 + 100) =
             fVar13 * fVar16 + fVar11 * fVar20 + fVar12 * fVar24 + fVar28;
        *(float *)(param_2 + 0xd) = fVar13 * fVar17 + fVar11 * fVar21 + fVar12 * fVar25 + fVar29;
        *(float *)((int64_t)param_2 + 0x6c) =
             fVar13 * fVar18 + fVar11 * fVar22 + fVar12 * fVar26 + fVar30;
        param_2[0x2d] = 0;
        FUN_1802f2700(param_2,CONCAT71((int7)((uint64_t)plVar33 >> 8),1));
        if (param_4 == '\0') {
          FUN_1802eaec0(param_2,0,1,1,0,param_3,param_5,param_6);
        }
        FUN_1800ba050(param_1 + 0x1c0,*(int64_t *)(param_1 + 0x1c0) + (int64_t)(int)uVar34 * 8);
        *(short *)(param_1 + 0x2b0) = *(short *)(param_1 + 0x2b0) + 1;
        if (*(int64_t *)(param_1 + 0x168) != 0) {
          func_0x0001802eeba0();
        }
        if (param_4 != '\0') {
          lVar14 = param_2[4];
          *(uint *)((int64_t)param_2 + 0x2ac) = *(uint *)((int64_t)param_2 + 0x2ac) & 0xefffffff;
          if (lVar14 != 0) {
            FUN_1801b01f0(lVar14,param_2);
          }
          lStack_70 = 0;
          lStack_68 = 0;
          uStack_60 = 0;
          uStack_58 = 3;
          FUN_1802e8c60(param_2,&lStack_70);
          uVar32 = uVar35;
          if (lStack_68 - lStack_70 >> 3 != 0) {
            do {
              puVar1 = (uint *)(*(int64_t *)(lStack_70 + uVar35) + 0x2ac);
              *puVar1 = *puVar1 & 0xefffffff;
              if (lVar14 != 0) {
                FUN_1801b01f0(lVar14,*(uint64_t *)(lStack_70 + uVar35));
              }
              uVar36 = (int)uVar32 + 1;
              uVar35 = uVar35 + 8;
              uVar32 = (uint64_t)uVar36;
            } while ((uint64_t)(int64_t)(int)uVar36 < (uint64_t)(lStack_68 - lStack_70 >> 3));
          }
          if (lVar14 != 0) {
            pplStack_78 = &plStack_88;
            plStack_88 = param_2;
            (**(code **)(*param_2 + 0x28))(param_2);
            FUN_180198b90(lVar14,&plStack_88,0,1,0,0,0);
          }
          if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
        }
        return 1;
      }
      uVar32 = uVar32 + 1;
      plVar33 = plVar33 + 1;
      uVar34 = (uint64_t)((int)uVar34 + 1);
    } while ((int64_t)uVar32 < (int64_t)iVar31);
  }
  return 0;
}






// 函数: void FUN_1802ebcb0(int64_t param_1,int32_t param_2,char param_3)
void FUN_1802ebcb0(int64_t param_1,int32_t param_2,char param_3)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  if (((*(byte *)(param_1 + 0x2e9) & 2) != 0) || ((*(uint *)(param_1 + 0x2ac) & 0x100) == 0)) {
    lVar5 = 0;
    iVar3 = (int)(*(int64_t *)(param_1 + 0x1e8) - *(int64_t *)(param_1 + 0x1e0) >> 3);
    lVar4 = lVar5;
    if (0 < iVar3) {
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x1e0) + lVar4 * 8);
        (**(code **)(*plVar1 + 0x1b8))(plVar1,param_2,param_1 + 0x70);
        cVar2 = (**(code **)(*plVar1 + 0x138))(plVar1);
        if (cVar2 != '\0') {
          FUN_1801985e0(*(uint64_t *)(param_1 + 0x20),plVar1,0,param_1,0);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
    if (((*(int64_t *)(param_1 + 0x260) != 0) &&
        (FUN_1802fa820(*(int64_t *)(param_1 + 0x260),param_2,param_1 + 0x70),
        (*(byte *)(*(int64_t *)(param_1 + 0x260) + 0xa8) >> 2 & 1) != 0)) &&
       (*(short *)(param_1 + 0x2b0) = *(short *)(param_1 + 0x2b0) + 1,
       *(int64_t *)(param_1 + 0x168) != 0)) {
      func_0x0001802eeba0();
    }
    if ((((param_3 != '\0') &&
         (iVar3 = (int)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3),
         0 < iVar3)) &&
        ((((*(byte *)(param_1 + 0x2e8) & 0x10) != 0 ||
          ((*(int64_t **)(param_1 + 0x270) != (int64_t *)0x0 &&
           (cVar2 = (**(code **)(**(int64_t **)(param_1 + 0x270) + 0x70))(), cVar2 != '\0')))) ||
         ((*(uint *)(param_1 + 0x2ac) & 0x800000) == 0)))) && (0 < (int64_t)iVar3)) {
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x1c0) + lVar5 * 8);
        if ((*(uint *)(lVar4 + 0x2ac) & 0x20000000) == 0) {
          FUN_1802ebcb0(lVar4,param_2,1);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar3);
    }
  }
  if ((*(int64_t *)(param_1 + 0x260) != 0) &&
     (*(int64_t *)(*(int64_t *)(param_1 + 0x260) + 0x28) == 0)) {
    FUN_1803005b0();
  }
  if (*(short *)(param_1 + 0x2b0) != *(short *)(param_1 + 0x2b4)) {
    if (*(char *)(param_1 + 0x2d8) == '\0') {
      FUN_1802e7e20(param_1);
    }
    else {
      FUN_18063ad30(*(int64_t *)(param_1 + 0x28),*(int64_t *)(param_1 + 0x28) + 0xf8,
                    param_1 + 0x70);
    }
    *(int16_t *)(param_1 + 0x2b0) = *(int16_t *)(param_1 + 0x2b4);
  }
  return;
}






// 函数: void FUN_1802ebcc0(int64_t param_1,int32_t param_2,char param_3)
void FUN_1802ebcc0(int64_t param_1,int32_t param_2,char param_3)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t unaff_RBX;
  int64_t lVar4;
  int64_t lVar5;
  bool in_ZF;
  
  if ((!in_ZF) || ((*(uint *)(param_1 + 0x2ac) & 0x100) == 0)) {
    lVar5 = 0;
    iVar3 = (int)(*(int64_t *)(param_1 + 0x1e8) - *(int64_t *)(param_1 + 0x1e0) >> 3);
    lVar4 = lVar5;
    if (0 < iVar3) {
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(unaff_RBX + 0x1e0) + lVar4 * 8);
        (**(code **)(*plVar1 + 0x1b8))(plVar1,param_2,unaff_RBX + 0x70);
        cVar2 = (**(code **)(*plVar1 + 0x138))(plVar1);
        if (cVar2 != '\0') {
          FUN_1801985e0(*(uint64_t *)(unaff_RBX + 0x20),plVar1,0);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
    if (((*(int64_t *)(unaff_RBX + 0x260) != 0) &&
        (FUN_1802fa820(*(int64_t *)(unaff_RBX + 0x260),param_2,unaff_RBX + 0x70),
        (*(byte *)(*(int64_t *)(unaff_RBX + 0x260) + 0xa8) >> 2 & 1) != 0)) &&
       (*(short *)(unaff_RBX + 0x2b0) = *(short *)(unaff_RBX + 0x2b0) + 1,
       *(int64_t *)(unaff_RBX + 0x168) != 0)) {
      func_0x0001802eeba0();
    }
    if ((((param_3 != '\0') &&
         (iVar3 = (int)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3),
         0 < iVar3)) &&
        ((((*(byte *)(unaff_RBX + 0x2e8) & 0x10) != 0 ||
          ((*(int64_t **)(unaff_RBX + 0x270) != (int64_t *)0x0 &&
           (cVar2 = (**(code **)(**(int64_t **)(unaff_RBX + 0x270) + 0x70))(), cVar2 != '\0')))) ||
         ((*(uint *)(unaff_RBX + 0x2ac) & 0x800000) == 0)))) && (0 < (int64_t)iVar3)) {
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x1c0) + lVar5 * 8);
        if ((*(uint *)(lVar4 + 0x2ac) & 0x20000000) == 0) {
          FUN_1802ebcb0(lVar4,param_2,1);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar3);
    }
  }
  if ((*(int64_t *)(unaff_RBX + 0x260) != 0) &&
     (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x260) + 0x28) == 0)) {
    FUN_1803005b0();
  }
  if (*(short *)(unaff_RBX + 0x2b0) != *(short *)(unaff_RBX + 0x2b4)) {
    if (*(char *)(unaff_RBX + 0x2d8) == '\0') {
      FUN_1802e7e20();
    }
    else {
      FUN_18063ad30(*(int64_t *)(unaff_RBX + 0x28),*(int64_t *)(unaff_RBX + 0x28) + 0xf8,
                    unaff_RBX + 0x70);
    }
    *(int16_t *)(unaff_RBX + 0x2b0) = *(int16_t *)(unaff_RBX + 0x2b4);
  }
  return;
}






