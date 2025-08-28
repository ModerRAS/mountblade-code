#include "TaleWorlds.Native.Split.h"

// 03_rendering_part231.c - 2 个函数

// 函数: void FUN_180399af0(int64_t param_1,int64_t param_2)
void FUN_180399af0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  char *pcVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint64_t uVar9;
  void *puStack_60;
  int64_t lStack_58;
  int iStack_50;
  uint64_t uStack_48;
  
  uVar9 = 0xfffffffffffffffe;
  pcVar8 = (char *)0x0;
  puStack_60 = &system_data_buffer_ptr;
  uStack_48 = 0;
  lStack_58 = 0;
  iStack_50 = 0;
  pcVar7 = "outer_mesh";
  do {
    pcVar6 = pcVar7;
    pcVar7 = pcVar6 + 1;
  } while (*pcVar7 != '\0');
  puVar4 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar4 == (uint64_t *)0x0) goto LAB_18039a23e;
    pcVar7 = (char *)*puVar4;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x180d48d24;
      pcVar2 = pcVar8;
    }
    else {
      pcVar2 = (char *)puVar4[2];
    }
    if (pcVar2 == pcVar6 + -0x180a12e9f) {
      pcVar2 = pcVar2 + (int64_t)pcVar7;
      if (pcVar2 <= pcVar7) {
LAB_180399bb0:
        pcVar7 = "variable";
        do {
          pcVar6 = pcVar7;
          pcVar7 = pcVar6 + 1;
        } while (*pcVar7 != '\0');
        for (puVar4 = (uint64_t *)puVar4[6]; puVar4 != (uint64_t *)0x0;
            puVar4 = (uint64_t *)puVar4[0xb]) {
          pcVar7 = (char *)*puVar4;
          if (pcVar7 == (char *)0x0) {
            pcVar7 = (char *)0x180d48d24;
            pcVar2 = pcVar8;
          }
          else {
            pcVar2 = (char *)puVar4[2];
          }
          if (pcVar2 == pcVar6 + -0x180a194ff) {
            pcVar2 = pcVar7 + (int64_t)pcVar2;
            if (pcVar2 <= pcVar7) {
LAB_180399c32:
              do {
                pcVar7 = "name";
                do {
                  pcVar6 = pcVar7;
                  pcVar7 = pcVar6 + 1;
                } while (*pcVar7 != '\0');
                for (puVar5 = (uint64_t *)puVar4[8]; puVar5 != (uint64_t *)0x0;
                    puVar5 = (uint64_t *)puVar5[6]) {
                  pcVar7 = (char *)*puVar5;
                  if (pcVar7 == (char *)0x0) {
                    pcVar7 = (char *)0x180d48d24;
                    pcVar2 = pcVar8;
                  }
                  else {
                    pcVar2 = (char *)puVar5[2];
                  }
                  if (pcVar2 == pcVar6 + -0x180a03a83) {
                    pcVar2 = pcVar2 + (int64_t)pcVar7;
                    if (pcVar2 <= pcVar7) {
LAB_180399c97:
                      lVar3 = 0x180d48d24;
                      if (puVar5[1] != 0) {
                        lVar3 = puVar5[1];
                      }
                      (**(code **)(puStack_60 + 0x10))(&puStack_60,lVar3,pcVar2,puVar5,uVar9);
                      break;
                    }
                    lVar3 = (int64_t)&system_data_3a84 - (int64_t)pcVar7;
                    while (*pcVar7 == pcVar7[lVar3]) {
                      pcVar7 = pcVar7 + 1;
                      if (pcVar2 <= pcVar7) goto LAB_180399c97;
                    }
                  }
                }
                if (iStack_50 == 0xf) {
                  iVar1 = strcmp(lStack_58,&unknown_var_6400_ptr);
                  if (iVar1 == 0) {
                    pcVar7 = "value";
                    do {
                      pcVar6 = pcVar7;
                      pcVar7 = pcVar6 + 1;
                    } while (*pcVar7 != '\0');
                    for (puVar5 = (uint64_t *)puVar4[8]; puVar5 != (uint64_t *)0x0;
                        puVar5 = (uint64_t *)puVar5[6]) {
                      pcVar7 = (char *)*puVar5;
                      if (pcVar7 == (char *)0x0) {
                        pcVar7 = (char *)0x180d48d24;
                        pcVar2 = pcVar8;
                      }
                      else {
                        pcVar2 = (char *)puVar5[2];
                      }
                      if (pcVar2 == pcVar6 + -0x180a0696b) {
                        pcVar2 = pcVar2 + (int64_t)pcVar7;
                        if (pcVar2 <= pcVar7) {
LAB_180399d36:
                          lVar3 = 0x180d48d24;
                          if (puVar5[1] != 0) {
                            lVar3 = puVar5[1];
                          }
                          (**(code **)(*(int64_t *)(param_1 + 0x20) + 0x10))(param_1 + 0x20,lVar3);
                          break;
                        }
                        lVar3 = (int64_t)&unknown_var_3692_ptr - (int64_t)pcVar7;
                        while (*pcVar7 == pcVar7[lVar3]) {
                          pcVar7 = pcVar7 + 1;
                          if (pcVar2 <= pcVar7) goto LAB_180399d36;
                        }
                      }
                    }
                  }
                }
                else if (iStack_50 == 0x15) {
                  iVar1 = strcmp(lStack_58,&unknown_var_6376_ptr);
                  if (iVar1 == 0) {
                    pcVar7 = "value";
                    do {
                      pcVar6 = pcVar7;
                      pcVar7 = pcVar6 + 1;
                    } while (*pcVar7 != '\0');
                    for (puVar5 = (uint64_t *)puVar4[8]; puVar5 != (uint64_t *)0x0;
                        puVar5 = (uint64_t *)puVar5[6]) {
                      pcVar7 = (char *)*puVar5;
                      if (pcVar7 == (char *)0x0) {
                        pcVar7 = (char *)0x180d48d24;
                        pcVar2 = pcVar8;
                      }
                      else {
                        pcVar2 = (char *)puVar5[2];
                      }
                      if (pcVar2 == pcVar6 + -0x180a0696b) {
                        pcVar2 = pcVar2 + (int64_t)pcVar7;
                        if (pcVar2 <= pcVar7) {
LAB_180399dd1:
                          lVar3 = 0x180d48d24;
                          if (puVar5[1] != 0) {
                            lVar3 = puVar5[1];
                          }
                          (**(code **)(*(int64_t *)(param_1 + 0x48) + 0x10))(param_1 + 0x48,lVar3);
                          break;
                        }
                        lVar3 = (int64_t)&unknown_var_3692_ptr - (int64_t)pcVar7;
                        while (*pcVar7 == pcVar7[lVar3]) {
                          pcVar7 = pcVar7 + 1;
                          if (pcVar2 <= pcVar7) goto LAB_180399dd1;
                        }
                      }
                    }
                  }
                  else {
                    iVar1 = strcmp(lStack_58,&unknown_var_6352_ptr);
                    if (iVar1 == 0) {
                      pcVar7 = "value";
                      do {
                        pcVar6 = pcVar7;
                        pcVar7 = pcVar6 + 1;
                      } while (*pcVar7 != '\0');
                      for (puVar5 = (uint64_t *)puVar4[8]; puVar5 != (uint64_t *)0x0;
                          puVar5 = (uint64_t *)puVar5[6]) {
                        pcVar7 = (char *)*puVar5;
                        if (pcVar7 == (char *)0x0) {
                          pcVar7 = (char *)0x180d48d24;
                          pcVar2 = pcVar8;
                        }
                        else {
                          pcVar2 = (char *)puVar5[2];
                        }
                        if (pcVar2 == pcVar6 + -0x180a0696b) {
                          pcVar2 = pcVar2 + (int64_t)pcVar7;
                          if (pcVar2 <= pcVar7) {
LAB_180399e61:
                            lVar3 = 0x180d48d24;
                            if (puVar5[1] != 0) {
                              lVar3 = puVar5[1];
                            }
                            (**(code **)(*(int64_t *)(param_1 + 0x68) + 0x10))
                                      (param_1 + 0x68,lVar3);
                            break;
                          }
                          lVar3 = (int64_t)&unknown_var_3692_ptr - (int64_t)pcVar7;
                          while (*pcVar7 == pcVar7[lVar3]) {
                            pcVar7 = pcVar7 + 1;
                            if (pcVar2 <= pcVar7) goto LAB_180399e61;
                          }
                        }
                      }
                    }
                    else {
                      iVar1 = strcmp(lStack_58,&unknown_var_6520_ptr);
                      if (iVar1 == 0) {
                        pcVar7 = "value";
                        do {
                          pcVar6 = pcVar7;
                          pcVar7 = pcVar6 + 1;
                        } while (*pcVar7 != '\0');
                        for (puVar5 = (uint64_t *)puVar4[8]; puVar5 != (uint64_t *)0x0;
                            puVar5 = (uint64_t *)puVar5[6]) {
                          pcVar7 = (char *)*puVar5;
                          if (pcVar7 == (char *)0x0) {
                            pcVar7 = (char *)0x180d48d24;
                            pcVar2 = pcVar8;
                          }
                          else {
                            pcVar2 = (char *)puVar5[2];
                          }
                          if (pcVar2 == pcVar6 + -0x180a0696b) {
                            pcVar2 = pcVar2 + (int64_t)pcVar7;
                            if (pcVar2 <= pcVar7) {
LAB_180399ef1:
                              lVar3 = 0x180d48d24;
                              if (puVar5[1] != 0) {
                                lVar3 = puVar5[1];
                              }
                              (**(code **)(*(int64_t *)(param_1 + 0x88) + 0x10))
                                        (param_1 + 0x88,lVar3);
                              break;
                            }
                            lVar3 = (int64_t)&unknown_var_3692_ptr - (int64_t)pcVar7;
                            while (*pcVar7 == pcVar7[lVar3]) {
                              pcVar7 = pcVar7 + 1;
                              if (pcVar2 <= pcVar7) goto LAB_180399ef1;
                            }
                          }
                        }
                      }
                      else {
                        iVar1 = strcmp(lStack_58,&unknown_var_6472_ptr);
                        if (iVar1 == 0) {
                          pcVar7 = "value";
                          do {
                            pcVar6 = pcVar7;
                            pcVar7 = pcVar6 + 1;
                          } while (*pcVar7 != '\0');
                          for (puVar5 = (uint64_t *)puVar4[8]; puVar5 != (uint64_t *)0x0;
                              puVar5 = (uint64_t *)puVar5[6]) {
                            pcVar7 = (char *)*puVar5;
                            if (pcVar7 == (char *)0x0) {
                              pcVar7 = (char *)0x180d48d24;
                              pcVar2 = pcVar8;
                            }
                            else {
                              pcVar2 = (char *)puVar5[2];
                            }
                            if (pcVar2 == pcVar6 + -0x180a0696b) {
                              pcVar2 = pcVar2 + (int64_t)pcVar7;
                              if (pcVar2 <= pcVar7) {
LAB_180399f87:
                                lVar3 = 0x180d48d24;
                                if (puVar5[1] != 0) {
                                  lVar3 = puVar5[1];
                                }
                                (**(code **)(*(int64_t *)(param_1 + 200) + 0x10))
                                          (param_1 + 200,lVar3);
                                break;
                              }
                              lVar3 = (int64_t)&unknown_var_3692_ptr - (int64_t)pcVar7;
                              while (*pcVar7 == pcVar7[lVar3]) {
                                pcVar7 = pcVar7 + 1;
                                if (pcVar2 <= pcVar7) goto LAB_180399f87;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else if (iStack_50 == 0x14) {
                  iVar1 = strcmp(lStack_58,&unknown_var_6496_ptr);
                  if (iVar1 == 0) {
                    pcVar7 = "value";
                    do {
                      pcVar6 = pcVar7;
                      pcVar7 = pcVar6 + 1;
                    } while (*pcVar7 != '\0');
                    for (puVar5 = (uint64_t *)puVar4[8]; puVar5 != (uint64_t *)0x0;
                        puVar5 = (uint64_t *)puVar5[6]) {
                      pcVar7 = (char *)*puVar5;
                      if (pcVar7 == (char *)0x0) {
                        pcVar7 = (char *)0x180d48d24;
                        pcVar2 = pcVar8;
                      }
                      else {
                        pcVar2 = (char *)puVar5[2];
                      }
                      if (pcVar2 == pcVar6 + -0x180a0696b) {
                        pcVar2 = pcVar2 + (int64_t)pcVar7;
                        if (pcVar2 <= pcVar7) {
LAB_18039a027:
                          lVar3 = 0x180d48d24;
                          if (puVar5[1] != 0) {
                            lVar3 = puVar5[1];
                          }
                          (**(code **)(*(int64_t *)(param_1 + 0xa8) + 0x10))(param_1 + 0xa8,lVar3);
                          break;
                        }
                        lVar3 = (int64_t)&unknown_var_3692_ptr - (int64_t)pcVar7;
                        while (*pcVar7 == pcVar7[lVar3]) {
                          pcVar7 = pcVar7 + 1;
                          if (pcVar2 <= pcVar7) goto LAB_18039a027;
                        }
                      }
                    }
                  }
                  else {
                    iVar1 = strcmp(lStack_58,&unknown_var_6448_ptr);
                    if (iVar1 == 0) {
                      pcVar7 = "value";
                      do {
                        pcVar6 = pcVar7;
                        pcVar7 = pcVar6 + 1;
                      } while (*pcVar7 != '\0');
                      for (puVar5 = (uint64_t *)puVar4[8]; puVar5 != (uint64_t *)0x0;
                          puVar5 = (uint64_t *)puVar5[6]) {
                        pcVar7 = (char *)*puVar5;
                        if (pcVar7 == (char *)0x0) {
                          pcVar7 = (char *)0x180d48d24;
                          pcVar2 = pcVar8;
                        }
                        else {
                          pcVar2 = (char *)puVar5[2];
                        }
                        if (pcVar2 == pcVar6 + -0x180a0696b) {
                          pcVar2 = pcVar7 + (int64_t)pcVar2;
                          if (pcVar2 <= pcVar7) {
LAB_18039a0c1:
                            lVar3 = 0x180d48d24;
                            if (puVar5[1] != 0) {
                              lVar3 = puVar5[1];
                            }
                            (**(code **)(*(int64_t *)(param_1 + 0xe8) + 0x10))
                                      (param_1 + 0xe8,lVar3);
                            break;
                          }
                          lVar3 = (int64_t)&unknown_var_3692_ptr - (int64_t)pcVar7;
                          while (*pcVar7 == pcVar7[lVar3]) {
                            pcVar7 = pcVar7 + 1;
                            if (pcVar2 <= pcVar7) goto LAB_18039a0c1;
                          }
                        }
                      }
                    }
                  }
                }
                else if (iStack_50 == 0x21) {
                  iVar1 = strcmp(lStack_58,&unknown_var_6664_ptr);
                  if (iVar1 == 0) {
                    lVar3 = param_1 + 0x108;
                  }
                  else {
                    iVar1 = strcmp(lStack_58,&unknown_var_6624_ptr);
                    if (iVar1 == 0) {
                      lVar3 = param_1 + 0x10c;
                    }
                    else {
                      iVar1 = strcmp(lStack_58,&unknown_var_6584_ptr);
                      if (iVar1 != 0) goto LAB_18039a1d9;
                      lVar3 = param_1 + 0x110;
                    }
                  }
LAB_18039a1ce:
                  FUN_1806313c0(puVar4,&unknown_var_3692_ptr,lVar3);
                }
                else if (iStack_50 == 0x24) {
                  iVar1 = strcmp(lStack_58,&unknown_var_6544_ptr);
                  if (iVar1 == 0) {
                    lVar3 = param_1 + 0x114;
                    goto LAB_18039a1ce;
                  }
                }
                else if (iStack_50 == 0x13) {
                  iVar1 = strcmp(lStack_58,&unknown_var_6840_ptr);
                  if ((iVar1 == 0) &&
                     (FUN_1806313c0(puVar4,&unknown_var_3692_ptr,param_1 + 0x40),
                     *(float *)(param_1 + 0x40) <= 1.0 && *(float *)(param_1 + 0x40) != 1.0)) {
                    *(int32_t *)(param_1 + 0x40) = 0x3f800000;
                  }
                }
                else if ((iStack_50 == 0x1a) &&
                        (iVar1 = strcmp(lStack_58,&unknown_var_6808_ptr), iVar1 == 0)) {
                  lVar3 = param_1 + 0x118;
                  goto LAB_18039a1ce;
                }
LAB_18039a1d9:
                pcVar7 = "variable";
                do {
                  pcVar6 = pcVar7;
                  pcVar7 = pcVar6 + 1;
                } while (*pcVar7 != '\0');
                while( true ) {
                  do {
                    puVar4 = (uint64_t *)puVar4[0xb];
                    if (puVar4 == (uint64_t *)0x0) goto LAB_18039a23e;
                    pcVar7 = (char *)*puVar4;
                    if (pcVar7 == (char *)0x0) {
                      pcVar7 = (char *)0x180d48d24;
                      pcVar2 = pcVar8;
                    }
                    else {
                      pcVar2 = (char *)puVar4[2];
                    }
                  } while (pcVar2 != pcVar6 + -0x180a194ff);
                  pcVar2 = pcVar2 + (int64_t)pcVar7;
                  if (pcVar2 <= pcVar7) break;
                  lVar3 = (int64_t)&unknown_var_384_ptr - (int64_t)pcVar7;
                  while (*pcVar7 == pcVar7[lVar3]) {
                    pcVar7 = pcVar7 + 1;
                    if (pcVar2 <= pcVar7) goto LAB_180399c32;
                  }
                }
              } while( true );
            }
            lVar3 = (int64_t)&unknown_var_384_ptr - (int64_t)pcVar7;
            while (*pcVar7 == pcVar7[lVar3]) {
              pcVar7 = pcVar7 + 1;
              if (pcVar2 <= pcVar7) goto LAB_180399c32;
            }
          }
        }
LAB_18039a23e:
        puStack_60 = &system_data_buffer_ptr;
        if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        return;
      }
      lVar3 = (int64_t)&unknown_var_4176_ptr - (int64_t)pcVar7;
      while (*pcVar7 == pcVar7[lVar3]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar2 <= pcVar7) goto LAB_180399bb0;
      }
    }
    puVar4 = (uint64_t *)puVar4[0xb];
  } while( true );
}





// 函数: void FUN_18039a290(int64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_18039a290(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  char *pcVar2;
  uint64_t uVar3;
  char *pcVar4;
  int64_t lVar5;
  void *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int aiStackX_8 [2];
  char *pcVar10;
  
  pcVar9 = "layers";
  do {
    pcVar10 = pcVar9;
    pcVar9 = pcVar10 + 1;
  } while (*pcVar9 != '\0');
  pcVar8 = (char *)0x0;
  for (pcVar9 = *(char **)(param_2 + 0x30); pcVar7 = pcVar8, pcVar9 != (char *)0x0;
      pcVar9 = *(char **)(pcVar9 + 0x58)) {
    pcVar2 = *(char **)pcVar9;
    if (pcVar2 == (char *)0x0) {
      pcVar2 = (char *)0x180d48d24;
      pcVar4 = pcVar8;
    }
    else {
      pcVar4 = *(char **)(pcVar9 + 0x10);
    }
    if (pcVar4 == pcVar10 + -0x180a2233b) {
      pcVar4 = pcVar4 + (int64_t)pcVar2;
      pcVar7 = pcVar9;
      if (pcVar4 <= pcVar2) break;
      lVar5 = (int64_t)&unknown_var_6796_ptr - (int64_t)pcVar2;
      while (*pcVar2 == pcVar2[lVar5]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar4 <= pcVar2) goto LAB_18039a316;
      }
    }
  }
LAB_18039a316:
  aiStackX_8[0] = 0;
  pcVar9 = "version";
  do {
    pcVar10 = pcVar9;
    pcVar9 = pcVar10 + 1;
  } while (*pcVar9 != '\0');
  puVar1 = *(uint64_t **)(pcVar7 + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) goto LAB_18039a3d2;
    pcVar9 = (char *)*puVar1;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar2 = pcVar8;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar10 + -0x180a015af) {
      pcVar2 = pcVar2 + (int64_t)pcVar9;
      if (pcVar2 <= pcVar9) {
LAB_18039a381:
        pcVar9 = (char *)0x180d48d24;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar9 = (char *)puVar1[1];
        }
        uVar3 = 0xffffffffffffffff;
        do {
          uVar3 = uVar3 + 1;
        } while (pcVar9[uVar3] != '\0');
        if (((uVar3 < 3) || (*pcVar9 != '0')) ||
           (puVar6 = &unknown_var_5412_ptr, (pcVar9[1] + 0xa8U & 0xdf) != 0)) {
          puVar6 = &unknown_var_2208_ptr;
        }
        AdvancedSystemOptimizer(pcVar9,puVar6,aiStackX_8);
LAB_18039a3d2:
        *(int *)(param_1 + 0x224) = aiStackX_8[0];
        if (aiStackX_8[0] == 1) {
          FUN_18039d3d0(param_1,pcVar7,param_3);
        }
        else {
          FUN_180626f80(&unknown_var_6704_ptr);
        }
        return;
      }
      lVar5 = (int64_t)&unknown_var_2256_ptr - (int64_t)pcVar9;
      while (*pcVar9 == pcVar9[lVar5]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar2 <= pcVar9) goto LAB_18039a381;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00018039a6f1)
// WARNING: Removing unreachable block (ram,0x00018039a704)
// WARNING: Removing unreachable block (ram,0x00018039a710)
// WARNING: Removing unreachable block (ram,0x00018039a71d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



