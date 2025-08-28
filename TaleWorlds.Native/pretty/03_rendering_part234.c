#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part234.c - 1 个函数

// 函数: void FUN_18039bee0(uint64_t param_1,longlong param_2,longlong *param_3,int32_t param_4)
void FUN_18039bee0(uint64_t param_1,longlong param_2,longlong *param_3,int32_t param_4)

{
  byte bVar1;
  bool bVar2;
  int32_t uVar3;
  int iVar4;
  longlong *plVar5;
  uint64_t uVar6;
  longlong *plVar7;
  uint64_t *puVar8;
  int8_t *puVar9;
  longlong *******ppppppplVar10;
  byte *pbVar11;
  longlong *******ppppppplVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  uint uVar15;
  uint uVar16;
  longlong ******pppppplVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint64_t *puVar21;
  longlong *******ppppppplVar22;
  longlong *******ppppppplVar23;
  longlong lVar24;
  void *puStack_188;
  byte *pbStack_180;
  int iStack_178;
  ulonglong uStack_170;
  longlong *******ppppppplStack_168;
  longlong *******ppppppplStack_160;
  longlong *******ppppppplStack_158;
  uint64_t uStack_150;
  longlong lStack_148;
  int32_t uStack_140;
  void *puStack_138;
  int8_t *puStack_130;
  int32_t uStack_128;
  ulonglong uStack_120;
  void *puStack_118;
  uint64_t *puStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  void *puStack_f8;
  uint64_t *puStack_f0;
  int32_t uStack_e8;
  uint64_t uStack_e0;
  longlong lStack_d8;
  int8_t auStack_d0 [72];
  int8_t auStack_88 [32];
  uint64_t uStack_68;
  longlong *plStack_60;
  
  uStack_68 = 0xfffffffffffffffe;
  plVar5 = (longlong *)0x0;
  uStack_140 = 3;
  ppppppplStack_168 = (longlong *******)&ppppppplStack_168;
  ppppppplStack_160 = (longlong *******)&ppppppplStack_168;
  ppppppplStack_158 = (longlong *******)0x0;
  uStack_150 = 0;
  lStack_148 = 0;
  uVar15 = **(uint **)(param_2 + 8);
  *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
  uVar15 = uVar15 & 0x7fffffff;
  plVar7 = (longlong *)*param_3;
  if ((ulonglong)(param_3[2] - (longlong)plVar7 >> 3) < (ulonglong)uVar15) {
    if (uVar15 != 0) {
      plVar5 = (longlong *)FUN_18062b420(_DAT_180c8ed18,(ulonglong)uVar15 * 8,(char)param_3[3]);
      plVar7 = (longlong *)*param_3;
    }
    plVar20 = (longlong *)param_3[1];
    plVar19 = plVar5;
    if (plVar7 != plVar20) {
      do {
        *plVar19 = *plVar7;
        *plVar7 = 0;
        plVar7 = plVar7 + 1;
        plVar19 = plVar19 + 1;
      } while (plVar7 != plVar20);
      plVar20 = (longlong *)param_3[1];
      plVar7 = (longlong *)*param_3;
      if (plVar7 != plVar20) {
        do {
          if ((longlong *)*plVar7 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar7 + 0x38))();
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar20);
        plVar7 = (longlong *)*param_3;
      }
    }
    if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar7);
    }
    *param_3 = (longlong)plVar5;
    param_3[1] = (longlong)plVar19;
    param_3[2] = (longlong)(plVar5 + uVar15);
  }
  iVar4 = 0;
  if (uVar15 != 0) {
    do {
      uVar6 = FUN_18062b1e0(_DAT_180c8ed18,400,8,0xe);
      plVar7 = (longlong *)FUN_1803dc330(uVar6);
      plStack_60 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7);
      }
      puStack_188 = &unknown_var_3456_ptr;
      uStack_170 = 0;
      pbStack_180 = (byte *)0x0;
      iStack_178 = 0;
      FUN_1803dcdd0(plVar7,param_2,&puStack_188,param_4);
      if ((int)plVar7[10] == -1) {
        ppppppplVar10 = (longlong *******)&ppppppplStack_168;
        ppppppplVar23 = ppppppplStack_158;
        if (ppppppplStack_158 == (longlong *******)0x0) {
LAB_18039c19a:
          ppppppplVar10 = (longlong *******)&ppppppplStack_168;
        }
        else {
          do {
            if (iStack_178 == 0) {
              bVar2 = false;
              ppppppplVar12 = (longlong *******)ppppppplVar23[1];
            }
            else {
              if (*(int *)(ppppppplVar23 + 6) == 0) {
                bVar2 = true;
              }
              else {
                pbVar11 = pbStack_180;
                do {
                  uVar16 = (uint)pbVar11[(longlong)ppppppplVar23[5] - (longlong)pbStack_180];
                  iVar18 = *pbVar11 - uVar16;
                  if (*pbVar11 != uVar16) break;
                  pbVar11 = pbVar11 + 1;
                } while (uVar16 != 0);
                bVar2 = 0 < iVar18;
                if (iVar18 < 1) {
                  ppppppplVar12 = (longlong *******)ppppppplVar23[1];
                  goto LAB_18039c14d;
                }
              }
              ppppppplVar12 = (longlong *******)*ppppppplVar23;
            }
LAB_18039c14d:
            if (bVar2) {
              ppppppplVar23 = ppppppplVar10;
            }
            ppppppplVar10 = ppppppplVar23;
            ppppppplVar23 = ppppppplVar12;
          } while (ppppppplVar12 != (longlong *******)0x0);
          if ((longlong ********)ppppppplVar10 == &ppppppplStack_168) goto LAB_18039c19a;
          if (*(int *)(ppppppplVar10 + 6) != 0) {
            if (iStack_178 != 0) {
              pppppplVar17 = ppppppplVar10[5];
              lVar24 = (longlong)pbStack_180 - (longlong)pppppplVar17;
              do {
                bVar1 = *(byte *)pppppplVar17;
                uVar16 = (uint)*(byte *)((longlong)pppppplVar17 + lVar24);
                if (bVar1 != uVar16) break;
                pppppplVar17 = (longlong ******)((longlong)pppppplVar17 + 1);
              } while (uVar16 != 0);
              if ((int)(bVar1 - uVar16) < 1) goto LAB_18039c19f;
            }
            goto LAB_18039c19a;
          }
        }
LAB_18039c19f:
        if ((longlong ********)ppppppplVar10 == &ppppppplStack_168) {
          puVar9 = (int8_t *)0x0;
          puStack_f8 = &unknown_var_3456_ptr;
          uStack_e0 = 0;
          puStack_f0 = (uint64_t *)0x0;
          uStack_e8 = 0;
          puVar8 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x33,0x13);
          *(int8_t *)puVar8 = 0;
          puStack_f0 = puVar8;
          uVar3 = FUN_18064e990(puVar8);
          uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar3);
          *puVar8 = 0x6c61766e69206e41;
          puVar8[1] = 0x61726f6c66206469;
          *(int32_t *)(puVar8 + 2) = 0x70797420;
          *(int32_t *)((longlong)puVar8 + 0x14) = 0x73692065;
          *(int32_t *)(puVar8 + 3) = 0x756f6620;
          *(int32_t *)((longlong)puVar8 + 0x1c) = 0x6f20646e;
          *(int32_t *)(puVar8 + 4) = 0x6373206e;
          *(int32_t *)((longlong)puVar8 + 0x24) = 0x20656e65;
          *(int32_t *)(puVar8 + 5) = 0x68746977;
          *(int32_t *)((longlong)puVar8 + 0x2c) = 0x6d616e20;
          *(int16_t *)(puVar8 + 6) = 0x2065;
          *(int8_t *)((longlong)puVar8 + 0x32) = 0;
          uStack_e8 = 0x32;
          puStack_138 = &unknown_var_3456_ptr;
          uStack_120 = 0;
          puStack_130 = (int8_t *)0x0;
          uStack_128 = 0;
          if (iStack_178 != 0) {
            iVar4 = iStack_178 + 1;
            if (iVar4 < 0x10) {
              iVar4 = 0x10;
            }
            puVar9 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar4,0x13);
            *puVar9 = 0;
            puStack_130 = puVar9;
            uVar3 = FUN_18064e990(puVar9);
            uStack_120 = CONCAT44(uStack_120._4_4_,uVar3);
            if (iStack_178 != 0) {
                    // WARNING: Subroutine does not return
              memcpy(puVar9,pbStack_180,iStack_178 + 1);
            }
          }
          if (pbStack_180 != (byte *)0x0) {
            uStack_128 = 0;
            if (puVar9 != (int8_t *)0x0) {
              *puVar9 = 0;
            }
            uStack_120 = uStack_120 & 0xffffffff;
          }
          uVar6 = FUN_180627ce0(&puStack_f8,auStack_88,&puStack_138);
          puStack_118 = &unknown_var_3456_ptr;
          uStack_100 = 0;
          puStack_110 = (uint64_t *)0x0;
          uStack_108 = 0;
          puVar8 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
          *(int8_t *)puVar8 = 0;
          puStack_110 = puVar8;
          uVar3 = FUN_18064e990(puVar8);
          uStack_100 = CONCAT44(uStack_100._4_4_,uVar3);
          *puVar8 = 0x6574656c6544202e;
          *(int32_t *)(puVar8 + 1) = 0x3f746920;
          *(int8_t *)((longlong)puVar8 + 0xc) = 0;
          uStack_108 = 0xc;
          FUN_180627ce0(uVar6,auStack_d0,&puStack_118);
          puStack_118 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar8);
        }
        ppppppplVar23 = (longlong *******)&ppppppplStack_168;
        ppppppplVar10 = ppppppplStack_158;
        while (ppppppplVar12 = ppppppplVar23, ppppppplVar10 != (longlong *******)0x0) {
          if (iStack_178 == 0) {
            bVar2 = false;
            ppppppplVar22 = (longlong *******)ppppppplVar10[1];
          }
          else {
            if (*(int *)(ppppppplVar10 + 6) == 0) {
              bVar2 = true;
            }
            else {
              pbVar11 = pbStack_180;
              do {
                uVar16 = (uint)pbVar11[(longlong)ppppppplVar10[5] - (longlong)pbStack_180];
                iVar18 = *pbVar11 - uVar16;
                if (*pbVar11 != uVar16) break;
                pbVar11 = pbVar11 + 1;
              } while (uVar16 != 0);
              bVar2 = 0 < iVar18;
              if (iVar18 < 1) {
                ppppppplVar22 = (longlong *******)ppppppplVar10[1];
                goto LAB_18039c5e7;
              }
            }
            ppppppplVar22 = (longlong *******)*ppppppplVar10;
          }
LAB_18039c5e7:
          ppppppplVar23 = ppppppplVar10;
          ppppppplVar10 = ppppppplVar22;
          if (bVar2) {
            ppppppplVar23 = ppppppplVar12;
          }
        }
        if ((longlong ********)ppppppplVar12 == &ppppppplStack_168) {
LAB_18039c63b:
          if ((ppppppplVar12 == ppppppplStack_168) ||
             ((longlong ********)ppppppplVar12 == &ppppppplStack_168)) {
            if ((lStack_148 != 0) && (iStack_178 != 0)) {
              ppppppplVar12 = ppppppplStack_168;
              if (*(int *)(ppppppplStack_168 + 6) != 0) {
                pbVar11 = pbStack_180;
                do {
                  bVar1 = *pbVar11;
                  uVar16 = (uint)pbVar11[(longlong)ppppppplStack_168[5] - (longlong)pbStack_180];
                  if (bVar1 != uVar16) break;
                  pbVar11 = pbVar11 + 1;
                } while (uVar16 != 0);
                if ((int)(bVar1 - uVar16) < 1) goto LAB_18039c7b3;
              }
LAB_18039c72b:
              bVar2 = false;
              ppppppplVar10 = ppppppplVar12;
LAB_18039c72d:
              if (ppppppplVar10 != (longlong *******)0x0) {
                if ((bVar2) || ((longlong ********)ppppppplVar10 == &ppppppplStack_168))
                goto LAB_18039c76f;
                if (*(int *)(ppppppplVar10 + 6) == 0) goto LAB_18039c767;
                pppppplVar17 = ppppppplVar10[5];
                lVar24 = (longlong)pbStack_180 - (longlong)pppppplVar17;
                goto LAB_18039c751;
              }
            }
          }
          else {
            ppppppplVar10 = (longlong *******)func_0x00018066bd70(ppppppplVar12);
            if (iStack_178 != 0) {
              if (*(int *)(ppppppplVar12 + 6) != 0) {
                pbVar11 = pbStack_180;
                do {
                  bVar1 = *pbVar11;
                  uVar16 = (uint)pbVar11[(longlong)ppppppplVar12[5] - (longlong)pbStack_180];
                  if (bVar1 != uVar16) break;
                  pbVar11 = pbVar11 + 1;
                } while (uVar16 != 0);
                if ((int)(bVar1 - uVar16) < 1) goto LAB_18039c7b3;
              }
              if (*(int *)(ppppppplVar10 + 6) != 0) {
                pppppplVar17 = ppppppplVar10[5];
                lVar24 = (longlong)pbStack_180 - (longlong)pppppplVar17;
                do {
                  bVar1 = *(byte *)pppppplVar17;
                  uVar16 = (uint)*(byte *)((longlong)pppppplVar17 + lVar24);
                  if (bVar1 != uVar16) break;
                  pppppplVar17 = (longlong ******)((longlong)pppppplVar17 + 1);
                } while (uVar16 != 0);
                if (0 < (int)(bVar1 - uVar16)) {
                  if (*ppppppplVar12 == (longlong ******)0x0) goto LAB_18039c72b;
                  bVar2 = true;
                  goto LAB_18039c72d;
                }
              }
            }
          }
LAB_18039c7b3:
          bVar2 = true;
          ppppppplVar10 = (longlong *******)&ppppppplStack_168;
          ppppppplVar23 = ppppppplStack_158;
          while (ppppppplVar23 != (longlong *******)0x0) {
            ppppppplVar10 = ppppppplVar23;
            if (*(int *)(ppppppplVar23 + 6) == 0) {
              bVar2 = false;
LAB_18039c7e0:
              ppppppplVar23 = (longlong *******)*ppppppplVar23;
            }
            else {
              if (iStack_178 == 0) {
                bVar2 = true;
              }
              else {
                pppppplVar17 = ppppppplVar23[5];
                lVar24 = (longlong)pbStack_180 - (longlong)pppppplVar17;
                do {
                  bVar1 = *(byte *)pppppplVar17;
                  uVar16 = (uint)*(byte *)((longlong)pppppplVar17 + lVar24);
                  if (bVar1 != uVar16) break;
                  pppppplVar17 = (longlong ******)((longlong)pppppplVar17 + 1);
                } while (uVar16 != 0);
                bVar2 = 0 < (int)(bVar1 - uVar16);
              }
              if (!bVar2) goto LAB_18039c7e0;
              ppppppplVar23 = (longlong *******)ppppppplVar23[1];
            }
          }
          ppppppplVar12 = ppppppplVar10;
          if (bVar2) {
            if (ppppppplVar10 != ppppppplStack_160) {
              ppppppplVar12 = (longlong *******)func_0x00018066b9a0(ppppppplVar10);
              goto LAB_18039c80b;
            }
          }
          else {
LAB_18039c80b:
            if (iStack_178 == 0) goto LAB_18039c913;
            if (*(int *)(ppppppplVar12 + 6) != 0) {
              pbVar11 = pbStack_180;
              do {
                bVar1 = *pbVar11;
                uVar16 = (uint)pbVar11[(longlong)ppppppplVar12[5] - (longlong)pbStack_180];
                if (bVar1 != uVar16) break;
                pbVar11 = pbVar11 + 1;
              } while (uVar16 != 0);
              if ((int)(bVar1 - uVar16) < 1) goto LAB_18039c913;
            }
          }
          if ((longlong ********)ppppppplVar10 == &ppppppplStack_168) goto LAB_18039c8bd;
          if (*(int *)(ppppppplVar10 + 6) == 0) goto LAB_18039c876;
          if (iStack_178 == 0) goto LAB_18039c8bd;
          pppppplVar17 = ppppppplVar10[5];
          lVar24 = (longlong)pbStack_180 - (longlong)pppppplVar17;
          goto LAB_18039c860;
        }
        if (*(int *)(ppppppplVar12 + 6) != 0) {
          if (iStack_178 != 0) {
            pppppplVar17 = ppppppplVar12[5];
            lVar24 = (longlong)pbStack_180 - (longlong)pppppplVar17;
            do {
              bVar1 = *(byte *)pppppplVar17;
              uVar16 = (uint)*(byte *)((longlong)pppppplVar17 + lVar24);
              if (bVar1 != uVar16) break;
              pppppplVar17 = (longlong ******)((longlong)pppppplVar17 + 1);
            } while (uVar16 != 0);
            if ((int)(bVar1 - uVar16) < 1) goto LAB_18039c913;
          }
          goto LAB_18039c63b;
        }
LAB_18039c913:
        if (*(int *)(ppppppplVar12 + 8) != 4) goto LAB_18039c942;
        puStack_188 = &unknown_var_3456_ptr;
        if (pbStack_180 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      else {
LAB_18039c942:
        puVar13 = (uint64_t *)0x0;
        puVar8 = (uint64_t *)param_3[1];
        if (puVar8 < (uint64_t *)param_3[2]) {
          param_3[1] = (longlong)(puVar8 + 1);
          *puVar8 = plVar7;
          (**(code **)(*plVar7 + 0x28))(plVar7);
        }
        else {
          puVar14 = (uint64_t *)*param_3;
          lVar24 = (longlong)puVar8 - (longlong)puVar14 >> 3;
          if (lVar24 == 0) {
            lVar24 = 1;
LAB_18039c98d:
            puVar13 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar24 * 8,(char)param_3[3]);
            puVar8 = (uint64_t *)param_3[1];
            puVar14 = (uint64_t *)*param_3;
            puVar21 = puVar13;
          }
          else {
            lVar24 = lVar24 * 2;
            puVar21 = puVar13;
            if (lVar24 != 0) goto LAB_18039c98d;
          }
          for (; puVar14 != puVar8; puVar14 = puVar14 + 1) {
            *puVar13 = *puVar14;
            *puVar14 = 0;
            puVar13 = puVar13 + 1;
          }
          *puVar13 = plVar7;
          (**(code **)(*plVar7 + 0x28))(plVar7);
          plVar5 = (longlong *)param_3[1];
          plVar20 = (longlong *)*param_3;
          if (plVar20 != plVar5) {
            do {
              if ((longlong *)*plVar20 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar20 + 0x38))();
              }
              plVar20 = plVar20 + 1;
            } while (plVar20 != plVar5);
            plVar20 = (longlong *)*param_3;
          }
          if (plVar20 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar20);
          }
          *param_3 = (longlong)puVar21;
          param_3[1] = (longlong)(puVar13 + 1);
          param_3[2] = (longlong)(puVar21 + lVar24);
        }
        puStack_188 = &unknown_var_3456_ptr;
        if (pbStack_180 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      uStack_170 = uStack_170 & 0xffffffff00000000;
      pbStack_180 = (byte *)0x0;
      puStack_188 = &unknown_var_720_ptr;
      (**(code **)(*plVar7 + 0x38))(plVar7);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar15);
  }
  ppppppplVar10 = ppppppplStack_158;
  if (ppppppplStack_158 == (longlong *******)0x0) {
    return;
  }
  FUN_180058370(&ppppppplStack_168,*ppppppplStack_158);
  ppppppplVar10[4] = (longlong ******)&unknown_var_3456_ptr;
  if (ppppppplVar10[5] != (longlong ******)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  ppppppplVar10[5] = (longlong ******)0x0;
  *(int32_t *)(ppppppplVar10 + 7) = 0;
  ppppppplVar10[4] = (longlong ******)&unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(ppppppplVar10);
  while (pppppplVar17 = (longlong ******)((longlong)pppppplVar17 + 1), uVar15 != 0) {
LAB_18039c751:
    bVar1 = *(byte *)pppppplVar17;
    uVar15 = (uint)*(byte *)((longlong)pppppplVar17 + lVar24);
    if (bVar1 != uVar15) break;
  }
  if ((int)(bVar1 - uVar15) < 1) {
LAB_18039c767:
    uVar3 = 1;
  }
  else {
LAB_18039c76f:
    uVar3 = 0;
  }
  lVar24 = FUN_18062b420(_DAT_180c8ed18,0x48,(int8_t)uStack_140);
  lStack_d8 = lVar24 + 0x20;
  FUN_180627ae0(lStack_d8,&puStack_188);
  *(int32_t *)(lVar24 + 0x40) = 0;
  goto LAB_18039c8fb;
  while (pppppplVar17 = (longlong ******)((longlong)pppppplVar17 + 1), uVar15 != 0) {
LAB_18039c860:
    bVar1 = *(byte *)pppppplVar17;
    uVar15 = (uint)*(byte *)((longlong)pppppplVar17 + lVar24);
    if (bVar1 != uVar15) break;
  }
  if ((int)(bVar1 - uVar15) < 1) {
LAB_18039c876:
    uVar3 = 1;
  }
  else {
LAB_18039c8bd:
    uVar3 = 0;
  }
  lVar24 = FUN_18062b420(_DAT_180c8ed18,0x48,(int8_t)uStack_140);
  lStack_d8 = lVar24 + 0x20;
  FUN_180627ae0(lStack_d8,&puStack_188);
  *(int32_t *)(lVar24 + 0x40) = 0;
LAB_18039c8fb:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar24,ppppppplVar10,&ppppppplStack_168,uVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



