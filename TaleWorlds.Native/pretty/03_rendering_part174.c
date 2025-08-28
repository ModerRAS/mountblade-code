#include "TaleWorlds.Native.Split.h"
// 03_rendering_part174.c - 2 个函数
// 函数: void RenderingSystem_752a0(uint param_1)
void RenderingSystem_752a0(uint param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  char cVar8;
  int iVar9;
  int64_t in_RAX;
  int64_t lVar10;
  uint uVar11;
  int iVar12;
  int64_t lVar13;
  int iVar14;
  uint64_t unaff_RBX;
  uint64_t uVar15;
  int32_t *unaff_RBP;
  uint64_t unaff_RSI;
  int iVar16;
  uint64_t unaff_RDI;
  int64_t lVar17;
  int64_t *plVar18;
  int64_t in_R11;
  uint64_t uVar19;
  uint64_t unaff_R12;
  int iVar20;
  int64_t unaff_R13;
  int64_t lVar21;
  int iVar22;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  int64_t lVar23;
  int iStack0000000000000030;
  uint local_buffer_34;
  int64_t lStack0000000000000038;
  uint64_t local_buffer_50;
  int64_t lStack0000000000000058;
  uint64_t local_buffer_60;
  int32_t local_buffer_68;
  int16_t local_buffer_6c;
  uint64_t local_buffer_70;
  uint64_t local_buffer_78;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x30) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R12;
  lStack0000000000000038 = 0;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R14;
  lStack0000000000000058 = 0x118;
  do {
    uVar19 = *(uint64_t *)(lStack0000000000000058 + in_RAX);
    lVar10 = *(int64_t *)(unaff_R15 + 0x10);
    *(int64_t *)(unaff_RBP + -4) = lVar10;
    local_buffer_50 = uVar19;
    if (lVar10 != *(int64_t *)(unaff_R15 + 0x18)) {
      do {
        plVar18 = *(int64_t **)(lVar10 + 8);
        lVar21 = 0;
        *(int64_t **)(unaff_RBP + -0xc) = plVar18;
        lVar17 = 8;
        *(uint64_t *)(unaff_RBP + -8) = 0;
        local_buffer_34 = 1;
        lVar10 = *plVar18;
        *(uint64_t *)(unaff_RBP + -6) = 8;
        do {
          lVar6 = plVar18[3];
          lVar23 = (lVar21 + ((int64_t)*(int *)(unaff_R13 + 0x2140) * 0x20 + lStack0000000000000038
                             ) * 8) * 0x20;
          if (*(int64_t *)(lVar23 + 0x18 + lVar6) - *(int64_t *)(lVar23 + 0x10 + lVar6) >> 5 != 0)
          {
            lVar13 = *(int64_t *)(lVar10 + 0x38);
            iStack0000000000000030 = 0;
            if (*(int64_t *)(lVar10 + 0x40) - lVar13 >> 4 != 0) {
              lVar21 = 0;
              *(uint64_t *)(unaff_RBP + -10) = 0;
              do {
                iVar22 = 0;
                if ((*(uint *)(lVar13 + 8 + lVar21) & local_buffer_34) != 0) {
                  lVar17 = *(int64_t *)(lVar13 + lVar21);
                  uVar15 = *(int64_t *)(lVar23 + 0x18 + lVar6) -
                           *(int64_t *)(lVar23 + 0x10 + lVar6) >> 5;
                  iVar20 = iVar22;
                  if (0 < (int)uVar15) {
                    do {
                      lVar21 = *(int64_t *)(lVar17 + 0x1b8);
                      local_buffer_70 = 0;
                      iVar14 = (int)uVar15;
                      unaff_RBP[-0x1d] = 0;
                      unaff_RBP[-0x18] = 0;
                      iVar16 = 0x200;
                      if (iVar14 < 0x200) {
                        iVar16 = iVar14;
                      }
                      *(uint64_t *)(unaff_RBP + -0x16) = 0;
                      *(uint64_t *)(unaff_RBP + -0xe) = 0;
                      *(int64_t *)(unaff_RBP + 4) =
                           (int64_t)iVar22 * 0x20 + *(int64_t *)(lVar23 + 0x10 + lVar6);
                      unaff_RBP[2] = iVar16;
                      cVar8 = *(char *)(lVar21 + 0x38c);
                      local_buffer_60 = 0;
                      local_buffer_68 = 0xffffffff;
                      local_buffer_6c = 0xff00;
                      local_buffer_78 = 0xffffffffffffffff;
                      unaff_RBP[-0x20] = 0xffffffff;
                      *(int8_t *)(unaff_RBP + -0x1f) = 0xff;
                      unaff_RBP[-0x1e] = 0xffffffff;
                      *(int16_t *)(unaff_RBP + -0x1b) = 0x400;
                      unaff_RBP[-0x14] = 0;
                      *(int8_t *)(unaff_RBP + -0x13) = 0;
                      if (cVar8 == '\t') {
                        uVar5 = *(uint *)(lVar21 + 0x388);
                        if ((uVar5 >> 0x1e & 1) == 0) {
                          if ((uVar5 >> 0x1c & 1) == 0) {
                            uVar11 = uVar5 & 0x1000000;
                            if ((int)uVar5 < 0) {
                              if ((uVar5 >> 0x1b & 1) == 0) {
                                cVar8 = (uVar11 != 0) + '\f';
                              }
                              else {
                                cVar8 = (uVar11 != 0) + '\x0e';
                              }
                            }
                            else if ((uVar5 >> 0x19 & 1) == 0) {
                              cVar8 = uVar11 != 0;
                            }
                            else if ((uVar5 >> 0x1b & 1) == 0) {
                              cVar8 = (uVar11 != 0) + '\x02';
                            }
                            else {
                              cVar8 = (uVar11 != 0) + '\a';
                            }
                          }
                          else {
                            cVar8 = '\x04';
                          }
                        }
                        else {
                          cVar8 = '\t';
                        }
                        *(char *)(lVar21 + 0x38c) = cVar8;
                      }
                      fVar1 = *(float *)(lVar17 + 0x288);
                      fVar2 = *(float *)(lVar17 + 0x278);
                      fVar3 = *(float *)(lVar17 + 0x284);
                      fVar4 = *(float *)(lVar17 + 0x274);
                      *(char *)(unaff_RBP + 6) = cVar8;
                      iVar12 = *(int *)((int64_t)plVar18 + 0xc);
                      unaff_RBP[-0x1c] = 1;
                      iVar9 = (int)(fVar3 - fVar4);
                      unaff_RBP[7] = (iVar12 + 0x14) * 10 + iVar20;
                      iVar12 = (int)(fVar1 - fVar2);
                      unaff_RBP[9] = (int)plVar18[2];
                      if (iVar9 < iVar12) {
                        iVar12 = iVar9;
                      }
                      *(int32_t **)(unaff_RBP + -0x1a) = unaff_RBP + 2;
                      unaff_RBP[8] = (float)iVar12;
                      SystemHealthMonitor(lVar17,uVar19,&system_data_0300,0,&local_buffer_00000060);
                      plVar18 = *(int64_t **)(unaff_RBP + -0xc);
                      uVar15 = (uint64_t)(uint)(iVar14 - iVar16);
                      iVar22 = iVar22 + 0x200;
                      uVar19 = local_buffer_50;
                      iVar20 = iVar20 + 1;
                    } while (0 < iVar14 - iVar16);
                    lVar21 = *(int64_t *)(unaff_RBP + -10);
                  }
                }
                lVar13 = *(int64_t *)(lVar10 + 0x38);
                iStack0000000000000030 = iStack0000000000000030 + 1;
                lVar17 = *(int64_t *)(lVar10 + 0x40);
                lVar21 = lVar21 + 0x10;
                *(int64_t *)(unaff_RBP + -10) = lVar21;
              } while ((uint64_t)(int64_t)iStack0000000000000030 <
                       (uint64_t)(lVar17 - lVar13 >> 4));
              lVar21 = *(int64_t *)(unaff_RBP + -8);
              lVar17 = *(int64_t *)(unaff_RBP + -6);
              unaff_R13 = *(int64_t *)(unaff_RBP + 0x20);
            }
          }
          lVar21 = lVar21 + 1;
          local_buffer_34 =
               local_buffer_34 << 1 | (uint)((int)local_buffer_34 < 0);
          lVar17 = lVar17 + -1;
          *(int64_t *)(unaff_RBP + -6) = lVar17;
          *(int64_t *)(unaff_RBP + -8) = lVar21;
        } while (lVar17 != 0);
        unaff_R15 = *(int64_t *)(unaff_RBP + 0x24);
        lVar10 = *(int64_t *)(unaff_RBP + -4) + 0x10;
        *(int64_t *)(unaff_RBP + -4) = lVar10;
      } while (lVar10 != *(int64_t *)(unaff_R15 + 0x18));
      param_1 = unaff_RBP[0x26];
    }
    uVar19 = local_buffer_50;
    lVar10 = lStack0000000000000038;
    iVar22 = 0;
    if (*(int64_t *)(unaff_R15 + 0x38) - *(int64_t *)(unaff_R15 + 0x30) >> 4 != 0) {
      lVar21 = 0;
      do {
        lVar17 = *(int64_t *)(unaff_R15 + 0x30);
        unaff_RBP[-2] = 0x3f800000;
        unaff_RBP[-1] = 0x3f800000;
        *unaff_RBP = 0x3f800000;
        plVar18 = *(int64_t **)(lVar17 + lVar21);
        unaff_RBP[1] = *(int32_t *)(lVar17 + 8 + lVar21);
        (**(code **)(*plVar18 + 400))(plVar18,unaff_RBP + -2);
        uVar7 = *(uint64_t *)(unaff_R13 + 0x2148);
        local_buffer_68 = 0xffffffff;
        local_buffer_60 = 0;
        local_buffer_70 = 0;
        *(uint64_t *)(unaff_RBP + -0x1d) = 0;
        *(uint64_t *)(unaff_RBP + -0x1a) = 0;
        unaff_RBP[-0x18] = 0;
        *(uint64_t *)(unaff_RBP + -0x16) = 0;
        unaff_RBP[-0x14] = 0;
        *(int8_t *)(unaff_RBP + -0x13) = 0;
        *(uint64_t *)(unaff_RBP + -0xe) = 0;
        local_buffer_6c = 0xff00;
        local_buffer_78 = 0xffffffffffffffff;
        unaff_RBP[-0x20] = 0xffffffff;
        *(int8_t *)(unaff_RBP + -0x1f) = 0xff;
        unaff_RBP[-0x1e] = 0xffffffff;
        *(int16_t *)(unaff_RBP + -0x1b) = 0x400;
        (**(code **)(*plVar18 + 0x1c8))(plVar18,uVar19,uVar7,&system_data_0300,&local_buffer_00000060);
        lVar21 = lVar21 + 0x10;
        iVar22 = iVar22 + 1;
      } while ((uint64_t)(int64_t)iVar22 <
               (uint64_t)(*(int64_t *)(unaff_R15 + 0x38) - *(int64_t *)(unaff_R15 + 0x30) >> 4));
      param_1 = unaff_RBP[0x26];
    }
    param_1 = param_1 + 1;
    lStack0000000000000038 = lVar10 + 1;
    unaff_RBP[0x26] = param_1;
    lStack0000000000000058 = lStack0000000000000058 + 8;
    in_RAX = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x22) + 0x3580);
  } while (param_1 < *(uint *)(in_RAX + 0x110));
  return;
}
// 函数: void RenderingSystem_75748(void)
void RenderingSystem_75748(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address