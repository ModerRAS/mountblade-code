// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
// 99_part_04_part040.c - 2 个函数
// 函数: void function_2ac930(int64_t param_1,int32_t param_2,float *param_3)
void function_2ac930(int64_t param_1,int32_t param_2,float *param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int64_t *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  char cVar27;
  uint uVar28;
  int64_t lVar29;
  uint64_t uVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  float *pfVar34;
  int iVar35;
  int iVar36;
  int64_t lVar37;
  int64_t lVar38;
  int64_t lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  int64_t lStackX_20;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  if (*(int64_t *)(param_1 + 0x48) != 0) {
    if (*(int *)(param_1 + 0x30) != *(int *)(*(int64_t *)(param_1 + 0x48) + 0x40)) {
      function_2adb50();
    }
    if ((*(char *)(param_1 + 0x159) == '\0') ||
       ((*(int64_t *)(param_1 + 0x28) != 0 &&
        ((*(byte *)(*(int64_t *)(param_1 + 0x28) + 0x2e8) & 0xb) != 0xb)))) {
      fVar11 = *param_3;
      fVar12 = param_3[1];
      fVar13 = param_3[2];
      fVar14 = param_3[3];
      fVar15 = param_3[4];
      fVar16 = param_3[5];
      fVar17 = param_3[6];
      fVar18 = param_3[7];
      fVar19 = param_3[8];
      fVar20 = param_3[9];
      fVar21 = param_3[10];
      fVar22 = param_3[0xb];
      fVar40 = *(float *)(param_1 + 0x54);
      fVar41 = *(float *)(param_1 + 0x50);
      fVar42 = *(float *)(param_1 + 0x58);
      fVar1 = *(float *)(param_1 + 100);
      fVar2 = *(float *)(param_1 + 0x60);
      fVar3 = *(float *)(param_1 + 0x68);
      fVar4 = *(float *)(param_1 + 0x74);
      fVar5 = *(float *)(param_1 + 0x70);
      fVar6 = *(float *)(param_1 + 0x78);
      fVar7 = *(float *)(param_1 + 0x84);
      fVar8 = *(float *)(param_1 + 0x80);
      fVar9 = *(float *)(param_1 + 0x88);
      fVar23 = param_3[0xc];
      fVar24 = param_3[0xd];
      fVar25 = param_3[0xe];
      fVar26 = param_3[0xf];
      *(float *)(param_1 + 0x90) = fVar40 * fVar15 + fVar41 * fVar11 + fVar42 * fVar19;
      *(float *)(param_1 + 0x94) = fVar40 * fVar16 + fVar41 * fVar12 + fVar42 * fVar20;
      *(float *)(param_1 + 0x98) = fVar40 * fVar17 + fVar41 * fVar13 + fVar42 * fVar21;
      *(float *)(param_1 + 0x9c) = fVar40 * fVar18 + fVar41 * fVar14 + fVar42 * fVar22;
      *(float *)(param_1 + 0xa0) = fVar1 * fVar15 + fVar2 * fVar11 + fVar3 * fVar19;
      *(float *)(param_1 + 0xa4) = fVar1 * fVar16 + fVar2 * fVar12 + fVar3 * fVar20;
      *(float *)(param_1 + 0xa8) = fVar1 * fVar17 + fVar2 * fVar13 + fVar3 * fVar21;
      *(float *)(param_1 + 0xac) = fVar1 * fVar18 + fVar2 * fVar14 + fVar3 * fVar22;
      *(float *)(param_1 + 0xb0) = fVar4 * fVar15 + fVar5 * fVar11 + fVar6 * fVar19;
      *(float *)(param_1 + 0xb4) = fVar4 * fVar16 + fVar5 * fVar12 + fVar6 * fVar20;
      *(float *)(param_1 + 0xb8) = fVar4 * fVar17 + fVar5 * fVar13 + fVar6 * fVar21;
      *(float *)(param_1 + 0xbc) = fVar4 * fVar18 + fVar5 * fVar14 + fVar6 * fVar22;
      *(float *)(param_1 + 0xc0) = fVar7 * fVar15 + fVar8 * fVar11 + fVar9 * fVar19 + fVar23;
      *(float *)(param_1 + 0xc4) = fVar7 * fVar16 + fVar8 * fVar12 + fVar9 * fVar20 + fVar24;
      *(float *)(param_1 + 200) = fVar7 * fVar17 + fVar8 * fVar13 + fVar9 * fVar21 + fVar25;
      *(float *)(param_1 + 0xcc) = fVar7 * fVar18 + fVar8 * fVar14 + fVar9 * fVar22 + fVar26;
    }
    else {
      iVar35 = (int)((*(int64_t *)(param_1 + 0x140) - *(int64_t *)(param_1 + 0x138)) / 0x28);
      if (iVar35 != 0) {
        fVar1 = *param_3;
        fVar2 = param_3[1];
        fVar3 = param_3[2];
        fVar4 = param_3[3];
        fVar5 = param_3[4];
        fVar6 = param_3[5];
        fVar7 = param_3[6];
        fVar8 = param_3[7];
        fVar9 = param_3[8];
        fVar11 = param_3[9];
        fVar12 = param_3[10];
        fVar13 = param_3[0xb];
        fVar40 = *(float *)(param_1 + 0x54);
        fVar41 = *(float *)(param_1 + 0x58);
        fVar42 = *(float *)(param_1 + 0x50);
        fStack_b8 = fVar42 * fVar1 + fVar40 * fVar5 + fVar41 * fVar9;
        fStack_b4 = fVar42 * fVar2 + fVar40 * fVar6 + fVar41 * fVar11;
        fStack_b0 = fVar42 * fVar3 + fVar40 * fVar7 + fVar41 * fVar12;
        fStack_ac = fVar42 * fVar4 + fVar40 * fVar8 + fVar41 * fVar13;
        fVar40 = *(float *)(param_1 + 100);
        fVar41 = *(float *)(param_1 + 0x68);
        fVar42 = *(float *)(param_1 + 0x60);
        fStack_a8 = fVar42 * fVar1 + fVar40 * fVar5 + fVar41 * fVar9;
        fStack_a4 = fVar42 * fVar2 + fVar40 * fVar6 + fVar41 * fVar11;
        fStack_a0 = fVar42 * fVar3 + fVar40 * fVar7 + fVar41 * fVar12;
        fStack_9c = fVar42 * fVar4 + fVar40 * fVar8 + fVar41 * fVar13;
        fVar40 = *(float *)(param_1 + 0x74);
        fVar41 = *(float *)(param_1 + 0x78);
        fVar42 = *(float *)(param_1 + 0x70);
        fStack_98 = fVar42 * fVar1 + fVar40 * fVar5 + fVar41 * fVar9;
        fStack_94 = fVar42 * fVar2 + fVar40 * fVar6 + fVar41 * fVar11;
        fStack_90 = fVar42 * fVar3 + fVar40 * fVar7 + fVar41 * fVar12;
        fStack_8c = fVar42 * fVar4 + fVar40 * fVar8 + fVar41 * fVar13;
        fVar40 = *(float *)(param_1 + 0x84);
        fVar41 = *(float *)(param_1 + 0x88);
        fVar42 = *(float *)(param_1 + 0x80);
        fStack_88 = fVar42 * fVar1 + fVar40 * fVar5 + fVar41 * fVar9 + param_3[0xc];
        fStack_84 = fVar42 * fVar2 + fVar40 * fVar6 + fVar41 * fVar11 + param_3[0xd];
        fStack_80 = fVar42 * fVar3 + fVar40 * fVar7 + fVar41 * fVar12 + param_3[0xe];
        fStack_7c = fVar42 * fVar4 + fVar40 * fVar8 + fVar41 * fVar13 + param_3[0xf];
        iVar36 = *(int *)(param_1 + 0x40);
        if (iVar36 == -1) {
          *(int32_t *)(param_1 + 0x38) = 0;
          lVar37 = *(int64_t *)(param_1 + 0x130);
          if (*(char *)(lVar37 + 0x562) == '\0') {
            return;
          }
          fVar41 = *(float *)(lVar37 + 0x440) - fStack_80;
          fVar40 = *(float *)(lVar37 + 0x43c) - fStack_84;
          fVar42 = *(float *)(lVar37 + 0x438) - fStack_88;
          fVar40 = fVar42 * fVar42 + fVar40 * fVar40 + fVar41 * fVar41;
          iVar35 = iVar35 + -1;
          lVar37 = (int64_t)iVar35;
          if (-1 < iVar35) {
            pfVar34 = (float *)(*(int64_t *)(param_1 + 0x138) + lVar37 * 0x28);
            do {
              if (*pfVar34 <= fVar40 && fVar40 != *pfVar34) {
                *(int *)(param_1 + 0x38) = iVar35;
                break;
              }
              iVar35 = iVar35 + -1;
              pfVar34 = pfVar34 + -10;
              lVar37 = lVar37 + -1;
            } while (-1 < lVar37);
          }
        }
        else if (iVar36 < 0) {
          *(int32_t *)(param_1 + 0x38) = 0;
        }
        else {
          if (iVar35 <= iVar36) {
            iVar36 = iVar35 + -1;
          }
          *(int *)(param_1 + 0x38) = iVar36;
        }
        if (*(char *)(param_1 + 0x15b) == '\0') {
          iVar35 = (int)((*(int64_t *)(param_1 + 0x140) - *(int64_t *)(param_1 + 0x138)) / 0x28);
          iVar36 = 0;
          lVar37 = (int64_t)iVar35;
          if (0 < iVar35) {
            lStackX_20 = 0;
            do {
              lVar33 = *(int64_t *)(param_1 + 0x138);
              iVar35 = (int)((*(int64_t *)(lStackX_20 + 0x10 + lVar33) -
                             *(int64_t *)(lStackX_20 + 8 + lVar33)) / 0x90);
              lVar39 = (int64_t)iVar35;
              if (iVar36 == *(int *)(param_1 + 0x38)) {
                if (0 < iVar35) {
                  lVar38 = 0;
                  do {
                    lVar31 = *(int64_t *)(lStackX_20 + 8 + lVar33) + lVar38;
                    fVar40 = *(float *)(*(int64_t *)(lVar31 + 0x18) + 0xd4);
                    if (0.0 < fVar40) {
                      uVar28 = (int)(fVar40 * 59.999996) - 1;
                      if (0 < (int)uVar28) {
                        uVar30 = (uint64_t)uVar28;
                        do {
                          function_2aeb00(lVar31,0x3c888889,&fStack_b8,&fStack_b8,0x3f800000);
                          function_2b7360(*(uint64_t *)(lVar31 + 0x20),0x3c888889);
                          iVar35 = (int)((*(int64_t *)(lVar31 + 0x38) -
                                         *(int64_t *)(lVar31 + 0x30)) / 0x88);
                          lVar32 = (int64_t)iVar35;
                          if (0 < iVar35) {
                            lVar29 = 0;
                            do {
                              function_2b7360(*(uint64_t *)(lVar29 + *(int64_t *)(lVar31 + 0x30)),
                                            0x3c888889);
                              lVar29 = lVar29 + 0x88;
                              lVar32 = lVar32 + -1;
                            } while (lVar32 != 0);
                          }
                          uVar30 = uVar30 - 1;
                        } while (uVar30 != 0);
                      }
                      function_2aeb00(lVar31,0x3c888889,&fStack_b8,&fStack_b8,0x3f800000);
                      function_2b7d60(*(uint64_t *)(lVar31 + 0x20),0x3c888889);
                      iVar35 = (int)((*(int64_t *)(lVar31 + 0x38) - *(int64_t *)(lVar31 + 0x30)) /
                                    0x88);
                      lVar32 = (int64_t)iVar35;
                      if (0 < iVar35) {
                        lVar29 = 0;
                        do {
                          function_2b7d60(*(uint64_t *)(lVar29 + *(int64_t *)(lVar31 + 0x30)),
                                        0x3c888889);
                          lVar29 = lVar29 + 0x88;
                          lVar32 = lVar32 + -1;
                        } while (lVar32 != 0);
                      }
                    }
                    lVar38 = lVar38 + 0x90;
                    lVar39 = lVar39 + -1;
                  } while (lVar39 != 0);
                }
              }
              else if (0 < iVar35) {
                lVar38 = 0;
                do {
                  lVar31 = *(int64_t *)(lStackX_20 + 8 + lVar33);
                  if ((*(byte *)(*(int64_t *)(lVar31 + 0x18 + lVar38) + 0x68) & 2) != 0) {
                    *(int8_t *)(lVar31 + lVar38) = 0;
                  }
                  lVar38 = lVar38 + 0x90;
                  lVar39 = lVar39 + -1;
                } while (lVar39 != 0);
              }
              iVar36 = iVar36 + 1;
              lStackX_20 = lStackX_20 + 0x28;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
          }
          *(int8_t *)(param_1 + 0x15b) = 1;
        }
        if (*(char *)(param_1 + 0x15c) == '\0') {
          *(float *)(param_1 + 0x90) = fStack_b8;
          *(float *)(param_1 + 0x94) = fStack_b4;
          *(float *)(param_1 + 0x98) = fStack_b0;
          *(float *)(param_1 + 0x9c) = fStack_ac;
          *(float *)(param_1 + 0xa0) = fStack_a8;
          *(float *)(param_1 + 0xa4) = fStack_a4;
          *(float *)(param_1 + 0xa8) = fStack_a0;
          *(float *)(param_1 + 0xac) = fStack_9c;
          *(float *)(param_1 + 0xb0) = fStack_98;
          *(float *)(param_1 + 0xb4) = fStack_94;
          *(float *)(param_1 + 0xb8) = fStack_90;
          *(float *)(param_1 + 0xbc) = fStack_8c;
          *(float *)(param_1 + 0xc0) = fStack_88;
          *(float *)(param_1 + 0xc4) = fStack_84;
          *(float *)(param_1 + 200) = fStack_80;
          *(float *)(param_1 + 0xcc) = fStack_7c;
          *(int8_t *)(param_1 + 0x15c) = 1;
        }
        cVar27 = '\0';
        iVar35 = (int)((*(int64_t *)
                         (*(int64_t *)(param_1 + 0x138) + 0x10 +
                         (uint64_t)*(uint *)(param_1 + 0x38) * 0x28) -
                       *(int64_t *)
                        (*(int64_t *)(param_1 + 0x138) + 8 +
                        (uint64_t)*(uint *)(param_1 + 0x38) * 0x28)) / 0x90);
        iVar36 = 0;
        lVar37 = (int64_t)iVar35;
        if (0 < iVar35) {
          lVar33 = 0;
          do {
            function_2aeb00((int64_t)iVar36 * 0x90 +
                          *(int64_t *)
                           (*(int64_t *)(param_1 + 0x138) + 8 +
                           (uint64_t)*(uint *)(param_1 + 0x38) * 0x28),param_2,
                          (float *)(param_1 + 0x90),&fStack_b8,*(int32_t *)(param_1 + 0x160));
            if ((cVar27 != '\0') ||
               (*(char *)(lVar33 + *(int64_t *)
                                    (*(int64_t *)(param_1 + 0x138) + 8 +
                                    (uint64_t)*(uint *)(param_1 + 0x38) * 0x28)) != '\0')) {
              cVar27 = '\x01';
            }
            iVar36 = iVar36 + 1;
            lVar33 = lVar33 + 0x90;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
        }
        *(char *)(param_1 + 0x158) = cVar27;
        *(float *)(param_1 + 0x90) = fStack_b8;
        *(float *)(param_1 + 0x94) = fStack_b4;
        *(float *)(param_1 + 0x98) = fStack_b0;
        *(float *)(param_1 + 0x9c) = fStack_ac;
        *(float *)(param_1 + 0xa0) = fStack_a8;
        *(float *)(param_1 + 0xa4) = fStack_a4;
        *(float *)(param_1 + 0xa8) = fStack_a0;
        *(float *)(param_1 + 0xac) = fStack_9c;
        *(float *)(param_1 + 0xb0) = fStack_98;
        *(float *)(param_1 + 0xb4) = fStack_94;
        *(float *)(param_1 + 0xb8) = fStack_90;
        *(float *)(param_1 + 0xbc) = fStack_8c;
        *(float *)(param_1 + 0xc0) = fStack_88;
        *(float *)(param_1 + 0xc4) = fStack_84;
        *(float *)(param_1 + 200) = fStack_80;
        *(float *)(param_1 + 0xcc) = fStack_7c;
        if (*(int64_t **)(param_1 + 0x108) != (int64_t *)0x0) {
          cVar27 = (**(code **)(**(int64_t **)(param_1 + 0x108) + 0xd8))();
          if (cVar27 == '\0') {
            plVar10 = *(int64_t **)(param_1 + 0x108);
            *(uint64_t *)(param_1 + 0x108) = 0;
            if (plVar10 != (int64_t *)0x0) {
              (**(code **)(*plVar10 + 0x38))();
            }
          }
          else {
            (**(code **)(**(int64_t **)(param_1 + 0x108) + 0xa8))
                      (*(int64_t **)(param_1 + 0x108),&fStack_88);
          }
        }
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2ad110(int64_t param_1,int64_t param_2)
void function_2ad110(int64_t param_1,int64_t param_2)
{
  char *pcVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  char *pcVar4;
  void *puVar5;
  uint64_t uVar6;
  char *pcVar7;
  int64_t lVar8;
  int64_t *plVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  void *puVar13;
  char *pcVar14;
  int32_t extraout_XMM0_Da;
  int32_t uVar15;
  int8_t stack_array_1b8 [32];
  void *plocal_var_198;
  int64_t *aplStack_188 [2];
  int64_t *plStack_178;
  int64_t *aplStack_170 [2];
  uint64_t local_var_160;
  int64_t *plStack_158;
  int32_t local_var_150;
  int32_t local_var_14c;
  int64_t *plStack_148;
  int32_t local_var_140;
  int32_t local_var_13c;
  void *plocal_var_138;
  void *plocal_var_130;
  int iStack_128;
  uint8_t stack_array_120 [72];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [40];
  void *plocal_var_98;
  void *plocal_var_90;
  int iStack_88;
  uint8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_160 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1b8;
  pcVar11 = "effect";
  do {
    pcVar12 = pcVar11;
    pcVar11 = pcVar12 + 1;
  } while (*pcVar11 != '\0');
  pcVar14 = (char *)0x0;
  pcVar11 = *(char **)(param_2 + 0x30);
  for (pcVar4 = pcVar11; pcVar10 = pcVar14, pcVar4 != (char *)0x0;
      pcVar4 = *(char **)(pcVar4 + 0x58)) {
    pcVar7 = *(char **)pcVar4;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x180d48d24;
      pcVar1 = pcVar14;
    }
    else {
      pcVar1 = *(char **)(pcVar4 + 0x10);
    }
    if (pcVar1 == pcVar12 + -0x180a17ea7) {
      pcVar1 = pcVar7 + (int64_t)pcVar1;
      pcVar10 = pcVar4;
      if (pcVar1 <= pcVar7) break;
      lVar8 = (int64_t)&processed_var_4664_ptr - (int64_t)pcVar7;
      while (*pcVar7 == pcVar7[lVar8]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar1 <= pcVar7) goto LAB_1802ad1ce;
      }
    }
  }
LAB_1802ad1ce:
  pcVar12 = "effect_ref";
  do {
    pcVar4 = pcVar12;
    pcVar12 = pcVar4 + 1;
  } while (*pcVar12 != '\0');
  for (; pcVar12 = pcVar14, pcVar11 != (char *)0x0; pcVar11 = *(char **)(pcVar11 + 0x58)) {
    pcVar7 = *(char **)pcVar11;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x180d48d24;
      pcVar1 = pcVar14;
    }
    else {
      pcVar1 = *(char **)(pcVar11 + 0x10);
    }
    if (pcVar1 == pcVar4 + -0x180a17eaf) {
      pcVar1 = pcVar1 + (int64_t)pcVar7;
      pcVar12 = pcVar11;
      if (pcVar1 <= pcVar7) break;
      lVar8 = (int64_t)&processed_var_4672_ptr - (int64_t)pcVar7;
      while (*pcVar7 == pcVar7[lVar8]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar1 <= pcVar7) goto LAB_1802ad22e;
      }
    }
  }
LAB_1802ad22e:
  if (pcVar10 == (char *)0x0) {
    if (pcVar12 != (char *)0x0) {
      plocal_var_138 = &memory_allocator_3480_ptr;
      plocal_var_130 = stack_array_120;
      iStack_128 = 0;
      stack_array_120[0] = 0;
      pcVar11 = "base_effect";
      do {
        pcVar4 = pcVar11;
        pcVar11 = pcVar4 + 1;
      } while (*pcVar11 != '\0');
      for (puVar2 = *(uint64_t **)(pcVar12 + 0x40); puVar2 != (uint64_t *)0x0;
          puVar2 = (uint64_t *)puVar2[6]) {
        pcVar11 = (char *)*puVar2;
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x180d48d24;
          pcVar12 = pcVar14;
        }
        else {
          pcVar12 = (char *)puVar2[2];
        }
        if (pcVar12 == pcVar4 + -0x180a17e67) {
          pcVar12 = pcVar12 + (int64_t)pcVar11;
          if (pcVar12 <= pcVar11) {
LAB_1802ad6d5:
            lVar8 = 0x180d48d24;
            if (puVar2[1] != 0) {
              lVar8 = puVar2[1];
            }
            DataStructureManager0(&plocal_var_138,lVar8);
            break;
          }
          lVar8 = (int64_t)&processed_var_4600_ptr - (int64_t)pcVar11;
          while (*pcVar11 == pcVar11[lVar8]) {
            pcVar11 = pcVar11 + 1;
            if (pcVar12 <= pcVar11) goto LAB_1802ad6d5;
          }
        }
      }
      puVar5 = &system_buffer_ptr;
      if (plocal_var_130 != (void *)0x0) {
        puVar5 = plocal_var_130;
      }
      puVar2 = (uint64_t *)function_2c0460(aplStack_170,puVar5);
      plStack_148 = (int64_t *)*puVar2;
      local_var_140 = *(int32_t *)(puVar2 + 1);
      local_var_13c = *(int32_t *)((int64_t)puVar2 + 0xc);
      puVar2 = (uint64_t *)function_0c1670(*(int32_t *)puVar2,aplStack_188,&plStack_148);
      uVar6 = *puVar2;
      *puVar2 = 0;
      plStack_158 = *(int64_t **)(param_1 + 0x48);
      *(uint64_t *)(param_1 + 0x48) = uVar6;
      uVar15 = extraout_XMM0_Da;
      if (plStack_158 != (int64_t *)0x0) {
        uVar15 = (**(code **)(*plStack_158 + 0x38))();
      }
      if (aplStack_188[0] != (int64_t *)0x0) {
        uVar15 = (**(code **)(*aplStack_188[0] + 0x38))();
      }
      if (*(int64_t *)(param_1 + 0x48) == 0) {
        uVar6 = function_2ac200(uVar15,&plStack_158,&ui_system_data_1192_ptr);
        SystemCore_ChecksumValidator(param_1 + 0x48,uVar6);
        if (plStack_158 != (int64_t *)0x0) {
          (**(code **)(*plStack_158 + 0x38))();
        }
        puVar5 = &system_buffer_ptr;
        if (plocal_var_130 != (void *)0x0) {
          puVar5 = plocal_var_130;
        }
        SystemCore_Allocator(&processed_var_4752_ptr,puVar5);
      }
      plocal_var_138 = &system_state_ptr;
    }
  }
  else {
    plStack_178 = (int64_t *)0x0;
    plocal_var_138 = &memory_allocator_3480_ptr;
    plocal_var_130 = stack_array_120;
    iStack_128 = 0;
    stack_array_120[0] = 0;
    plocal_var_98 = &memory_allocator_3480_ptr;
    plocal_var_90 = stack_array_80;
    iStack_88 = 0;
    stack_array_80[0] = 0;
    pcVar11 = "base_effect";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    for (puVar2 = *(uint64_t **)(pcVar10 + 0x40); puVar2 != (uint64_t *)0x0;
        puVar2 = (uint64_t *)puVar2[6]) {
      pcVar11 = (char *)*puVar2;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x180d48d24;
        pcVar4 = pcVar14;
      }
      else {
        pcVar4 = (char *)puVar2[2];
      }
      if (pcVar4 == pcVar12 + -0x180a17e67) {
        pcVar4 = pcVar4 + (int64_t)pcVar11;
        if (pcVar4 <= pcVar11) {
LAB_1802ad2f4:
          lVar8 = 0x180d48d24;
          if (puVar2[1] != 0) {
            lVar8 = puVar2[1];
          }
          DataStructureManager0(&plocal_var_138,lVar8);
          if (0 < iStack_128) {
            puVar5 = &system_buffer_ptr;
            if (plocal_var_130 != (void *)0x0) {
              puVar5 = plocal_var_130;
            }
            puVar2 = (uint64_t *)function_2c0460(aplStack_188,puVar5);
            plStack_158 = (int64_t *)*puVar2;
            local_var_150 = *(int32_t *)(puVar2 + 1);
            local_var_14c = *(int32_t *)((int64_t)puVar2 + 0xc);
            plVar3 = (int64_t *)function_0c1670(*(int32_t *)puVar2,&plStack_148,&plStack_158);
            plVar9 = (int64_t *)*plVar3;
            *plVar3 = 0;
            aplStack_170[0] = (int64_t *)0x0;
            plStack_178 = plVar9;
            if (plStack_148 != (int64_t *)0x0) {
              (**(code **)(*plStack_148 + 0x38))();
            }
            if (plVar9 != (int64_t *)0x0) goto LAB_1802ad540;
            puVar13 = &processed_var_4616_ptr;
            puVar5 = plocal_var_130;
            goto LAB_1802ad479;
          }
          break;
        }
        lVar8 = (int64_t)&processed_var_4600_ptr - (int64_t)pcVar11;
        while (*pcVar11 == pcVar11[lVar8]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar4 <= pcVar11) goto LAB_1802ad2f4;
        }
      }
    }
    pcVar11 = "name";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    puVar2 = *(uint64_t **)(pcVar10 + 0x40);
LAB_1802ad3b0:
    if (puVar2 != (uint64_t *)0x0) {
      pcVar11 = (char *)*puVar2;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x180d48d24;
        pcVar4 = pcVar14;
      }
      else {
        pcVar4 = (char *)puVar2[2];
      }
      if (pcVar4 != pcVar12 + -0x180a03a83) goto LAB_1802ad499;
      pcVar4 = pcVar11 + (int64_t)pcVar4;
      if (pcVar11 < pcVar4) {
        lVar8 = (int64_t)&system_data_3a84 - (int64_t)pcVar11;
        while (*pcVar11 == pcVar11[lVar8]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar4 <= pcVar11) goto LAB_1802ad404;
        }
        goto LAB_1802ad499;
      }
LAB_1802ad404:
      lVar8 = 0x180d48d24;
      if (puVar2[1] != 0) {
        lVar8 = puVar2[1];
      }
      (**(code **)(plocal_var_98 + 0x10))(&plocal_var_98,lVar8);
      if (0 < iStack_88) {
        plVar3 = (int64_t *)function_0c1520(system_system_data_memory,aplStack_170,&plocal_var_98);
        plVar9 = (int64_t *)*plVar3;
        *plVar3 = 0;
        plStack_148 = (int64_t *)0x0;
        plStack_178 = plVar9;
        if (aplStack_170[0] != (int64_t *)0x0) {
          (**(code **)(*aplStack_170[0] + 0x38))();
        }
        if (plVar9 == (int64_t *)0x0) {
          puVar13 = &processed_var_4840_ptr;
          puVar5 = plocal_var_90;
LAB_1802ad479:
          plocal_var_198 = &system_buffer_ptr;
          if (puVar5 != (void *)0x0) {
            plocal_var_198 = puVar5;
          }
          SystemManager_DataHandler(system_message_context,0,6,puVar13);
          goto LAB_1802ad4bb;
        }
        goto LAB_1802ad540;
      }
    }
    SystemManager_DataHandler(system_message_context,0,6,&processed_var_4896_ptr);
LAB_1802ad4bb:
    plocal_var_d8 = &processed_var_672_ptr;
    plocal_var_d0 = stack_array_c0;
    stack_array_c0[0] = 0;
    local_var_c8 = 0x10;
    strcpy_s(stack_array_c0,0x20,&ui_system_data_1192_ptr);
    plVar3 = (int64_t *)function_0c1520(system_system_data_memory,&plStack_158,&plocal_var_d8);
    plVar9 = (int64_t *)*plVar3;
    *plVar3 = 0;
    aplStack_188[0] = (int64_t *)0x0;
    plStack_178 = plVar9;
    if (plStack_158 != (int64_t *)0x0) {
      (**(code **)(*plStack_158 + 0x38))();
    }
    plocal_var_d8 = &system_state_ptr;
LAB_1802ad540:
    if (*(int64_t *)(param_1 + 0x48) != 0) {
      lVar8 = *(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x10);
      if ((*(int64_t *)(lVar8 + 0xc) != *(int64_t *)(plVar9[2] + 0xc)) ||
         (*(int64_t *)(lVar8 + 0x14) != *(int64_t *)(plVar9[2] + 0x14))) {
        SystemManager_DataHandler(system_message_context,0,6,&processed_var_4688_ptr);
        aplStack_188[0] = *(int64_t **)(param_1 + 0x48);
        *(uint64_t *)(param_1 + 0x48) = 0;
        if (aplStack_188[0] != (int64_t *)0x0) {
          (**(code **)(*aplStack_188[0] + 0x38))();
        }
      }
    }
    if (*(int64_t *)(param_1 + 0x48) == 0) {
      puVar2 = (uint64_t *)function_2b5ac0(plVar9,aplStack_188);
      uVar6 = *puVar2;
      *puVar2 = 0;
      plStack_158 = *(int64_t **)(param_1 + 0x48);
      *(uint64_t *)(param_1 + 0x48) = uVar6;
      if (plStack_158 != (int64_t *)0x0) {
        (**(code **)(*plStack_158 + 0x38))();
      }
    }
    else {
      puVar2 = (uint64_t *)function_2b5ac0(*(int64_t *)(param_1 + 0x48),aplStack_188);
      uVar6 = *puVar2;
      *puVar2 = 0;
      plStack_158 = *(int64_t **)(param_1 + 0x48);
      *(uint64_t *)(param_1 + 0x48) = uVar6;
      if (plStack_158 != (int64_t *)0x0) {
        (**(code **)(*plStack_158 + 0x38))();
      }
    }
    if (aplStack_188[0] != (int64_t *)0x0) {
      (**(code **)(*aplStack_188[0] + 0x38))();
    }
    function_2b4ef0(*(uint64_t *)(param_1 + 0x48),pcVar10);
    plocal_var_98 = &system_state_ptr;
    plocal_var_138 = &system_state_ptr;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x38))(plVar9);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_1b8);
LAB_1802ad499:
  puVar2 = (uint64_t *)puVar2[6];
  goto LAB_1802ad3b0;
}