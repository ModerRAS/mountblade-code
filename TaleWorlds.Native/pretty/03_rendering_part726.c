#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part726.c - 2 个函数

// 函数: void FUN_180694c40(uint64_t *param_1,int param_2,int8_t *param_3,int8_t *param_4,
void FUN_180694c40(uint64_t *param_1,int param_2,int8_t *param_3,int8_t *param_4,
                  int8_t *param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int8_t uVar6;
  int8_t uVar7;
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  uint64_t *puVar21;
  int64_t lVar22;
  uint64_t *puVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  uint64_t *puVar26;
  int64_t lVar27;
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  int8_t auVar45 [16];
  
  puVar1 = (uint64_t *)((int64_t)param_2 + (int64_t)param_1);
  auVar45 = ZEXT816(0) << 0x40;
  lVar27 = (int64_t)(param_2 * 5);
  puVar2 = (uint64_t *)((int64_t)(param_2 * 4) + (int64_t)param_1);
  puVar25 = (uint64_t *)((int64_t)param_1 - (int64_t)(param_2 * 4));
  lVar22 = (int64_t)(param_2 * 3);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *(uint64_t *)((int64_t)param_1 - lVar27);
  auVar36 = vmovhps_avx(auVar36,*puVar2);
  auVar43._8_8_ = 0;
  auVar43._0_8_ = *puVar25;
  auVar43 = vmovhps_avx(auVar43,*(uint64_t *)(lVar22 + (int64_t)param_1));
  puVar21 = (uint64_t *)((int64_t)param_1 - (int64_t)(param_2 * 2));
  puVar3 = (uint64_t *)((int64_t)(param_2 * 2) + (int64_t)param_1);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = *(uint64_t *)((int64_t)param_1 - lVar22);
  auVar28 = vmovhps_avx(auVar28,*puVar3);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = *puVar21;
  auVar31 = vmovhps_avx(auVar31,*puVar1);
  puVar23 = (uint64_t *)((int64_t)param_1 - (int64_t)param_2);
  auVar44 = vpshufd_avx(auVar31,0x4e);
  auVar32._8_8_ = 0;
  auVar32._0_8_ = *puVar23;
  auVar32 = vmovhps_avx(auVar32,*param_1);
  uVar6 = *param_5;
  auVar33 = vpsubusb_avx(auVar31,auVar32);
  auVar29 = vpsubusb_avx(auVar32,auVar31);
  auVar35 = vpor_avx(auVar33,auVar29);
  auVar42 = vpshufd_avx(auVar32,0x4e);
  auVar33 = vpsubusb_avx(auVar32,auVar42);
  auVar29 = vpsubusb_avx(auVar42,auVar32);
  auVar30 = vpor_avx(auVar33,auVar29);
  auVar33 = vpsrldq_avx(auVar35,8);
  auVar33 = vpmaxub_avx(auVar35,auVar33);
  auVar38[1] = uVar6;
  auVar38[0] = uVar6;
  auVar38[2] = uVar6;
  auVar38[3] = uVar6;
  auVar38[4] = uVar6;
  auVar38[5] = uVar6;
  auVar38[6] = uVar6;
  auVar38[7] = uVar6;
  auVar38[8] = uVar6;
  auVar38[9] = uVar6;
  auVar38[10] = uVar6;
  auVar38[0xb] = uVar6;
  auVar38[0xc] = uVar6;
  auVar38[0xd] = uVar6;
  auVar38[0xe] = uVar6;
  auVar38[0xf] = uVar6;
  auVar33 = vpsubusb_avx(auVar33,auVar38);
  auVar34 = vpcmpeqb_avx(auVar33,auVar45);
  auVar29 = vpsubusb_avx(auVar43,auVar28);
  auVar33 = vpsubusb_avx(auVar28,auVar31);
  auVar37 = vpsubusb_avx(auVar31,auVar28);
  auVar38 = vpcmpeqb_avx(auVar35,auVar35);
  auVar33 = vpor_avx(auVar33,auVar37);
  auVar37 = vpsubusb_avx(auVar28,auVar43);
  auVar29 = vpor_avx(auVar29,auVar37);
  auVar29 = vpmaxub_avx(auVar33,auVar29);
  auVar33 = vpsubusb_avx(auVar31,auVar44);
  auVar37 = vpsubusb_avx(auVar44,auVar31);
  auVar33 = vpor_avx(auVar33,auVar37);
  auVar33 = vpand_avx(auVar33,render_system_config);
  auVar37 = vpsrlw_avx(auVar33,1);
  auVar33 = vpaddusb_avx(auVar30,auVar30);
  uVar6 = *param_3;
  auVar33 = vpaddusb_avx(auVar37,auVar33);
  uVar7 = *param_4;
  auVar37[1] = uVar6;
  auVar37[0] = uVar6;
  auVar37[2] = uVar6;
  auVar37[3] = uVar6;
  auVar37[4] = uVar6;
  auVar37[5] = uVar6;
  auVar37[6] = uVar6;
  auVar37[7] = uVar6;
  auVar37[8] = uVar6;
  auVar37[9] = uVar6;
  auVar37[10] = uVar6;
  auVar37[0xb] = uVar6;
  auVar37[0xc] = uVar6;
  auVar37[0xd] = uVar6;
  auVar37[0xe] = uVar6;
  auVar37[0xf] = uVar6;
  auVar33 = vpsubusb_avx(auVar33,auVar37);
  auVar33 = vpcmpeqb_avx(auVar33,auVar45);
  auVar33 = vpmaxub_avx(auVar35,auVar33 ^ auVar38);
  auVar33 = vpmaxub_avx(auVar29,auVar33);
  auVar29 = vpsrldq_avx(auVar33,8);
  auVar33 = vpmaxub_avx(auVar33,auVar29);
  auVar29[1] = uVar7;
  auVar29[0] = uVar7;
  auVar29[2] = uVar7;
  auVar29[3] = uVar7;
  auVar29[4] = uVar7;
  auVar29[5] = uVar7;
  auVar29[6] = uVar7;
  auVar29[7] = uVar7;
  auVar29[8] = uVar7;
  auVar29[9] = uVar7;
  auVar29[10] = uVar7;
  auVar29[0xb] = uVar7;
  auVar29[0xc] = uVar7;
  auVar29[0xd] = uVar7;
  auVar29[0xe] = uVar7;
  auVar29[0xf] = uVar7;
  auVar33 = vpsubusb_avx(auVar33,auVar29);
  auVar30 = vpcmpeqb_avx(auVar33,auVar45);
  auVar37 = ZEXT816(0) << 0x20;
  auVar20 = render_system_config ^ auVar31;
  auVar29 = vpsubsb_avx(render_system_config ^ auVar42,render_system_config ^ auVar32);
  auVar33 = vpsubsb_avx(auVar20,render_system_config ^ auVar44);
  auVar33 = vpand_avx(auVar33,auVar34 ^ auVar38);
  auVar33 = vpaddsb_avx(auVar33,auVar29);
  auVar33 = vpaddsb_avx(auVar33,auVar29);
  auVar33 = vpaddsb_avx(auVar33,auVar29);
  auVar29 = vpand_avx(auVar33,auVar30);
  auVar33 = vpaddsb_avx(auVar29,render_system_config);
  auVar29 = vpaddsb_avx(auVar29,render_system_config);
  auVar33 = vpunpcklbw_avx(auVar37,auVar33);
  auVar44 = vpsraw_avx(auVar33,0xb);
  auVar33 = vpunpcklbw_avx(auVar37,auVar29);
  auVar29 = vpsraw_avx(auVar33,0xb);
  auVar33 = vpsubsw_avx(auVar37,auVar44);
  auVar33 = vpacksswb_avx(auVar29,auVar33);
  auVar45 = vpaddsb_avx(auVar33,render_system_config ^ auVar32);
  auVar45 = auVar45 ^ render_system_config;
  auVar33 = vpaddsw_avx(auVar44,render_system_config);
  auVar29 = vpunpcklbw_avx(auVar37,auVar34 ^ auVar38);
  auVar29 = vpsraw_avx(auVar29,8);
  auVar33 = vpsraw_avx(auVar33,1);
  auVar9 = vpandn_avx(auVar29,auVar33);
  auVar33 = vpsubusb_avx(auVar28,auVar32);
  auVar29 = vpsubusb_avx(auVar32,auVar28);
  auVar33 = vpor_avx(auVar33,auVar29);
  auVar29 = vpsubusb_avx(auVar32,auVar43);
  auVar34 = vpsubusb_avx(auVar43,auVar32);
  auVar29 = vpor_avx(auVar34,auVar29);
  auVar33 = vpmaxub_avx(auVar33,auVar29);
  auVar33 = vpmaxub_avx(auVar35,auVar33);
  auVar29 = vpsrldq_avx(auVar33,8);
  auVar33 = vpmaxub_avx(auVar33,auVar29);
  auVar33 = vpsubusb_avx(auVar33,render_system_config);
  puVar24 = (uint64_t *)((int64_t)param_1 - (int64_t)(param_2 * 6));
  auVar33 = vpcmpeqb_avx(auVar33,auVar37);
  auVar8 = vpand_avx(auVar33,auVar30);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = *puVar24;
  auVar33 = vmovhps_avx(auVar33,*(uint64_t *)(lVar27 + (int64_t)param_1));
  puVar4 = (uint64_t *)((int64_t)(param_2 * 6) + (int64_t)param_1);
  puVar26 = (uint64_t *)((int64_t)param_1 - (int64_t)(param_2 * 7));
  auVar34._8_8_ = 0;
  auVar34._0_8_ = *puVar26;
  auVar29 = vmovhps_avx(auVar34,*puVar4);
  auVar38 = vpsubusb_avx(auVar32,auVar29);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = *(uint64_t *)((int64_t)param_1 - (int64_t)(param_2 * 8));
  auVar34 = vmovhps_avx(auVar30,*(uint64_t *)((int64_t)(param_2 * 7) + (int64_t)param_1));
  auVar30 = vpsubusb_avx(auVar29,auVar32);
  auVar38 = vpor_avx(auVar38,auVar30);
  auVar30 = vpsubusb_avx(auVar34,auVar32);
  auVar35 = vpsubusb_avx(auVar32,auVar34);
  auVar30 = vpor_avx(auVar35,auVar30);
  auVar38 = vpmaxub_avx(auVar38,auVar30);
  auVar30 = vpsubusb_avx(auVar36,auVar32);
  auVar35 = vpsubusb_avx(auVar32,auVar36);
  auVar30 = vpor_avx(auVar30,auVar35);
  auVar35 = vpsubusb_avx(auVar33,auVar32);
  auVar44 = vpsubusb_avx(auVar32,auVar33);
  auVar35 = vpor_avx(auVar44,auVar35);
  auVar30 = vpmaxub_avx(auVar30,auVar35);
  auVar38 = vpmaxub_avx(auVar38,auVar30);
  auVar30 = vpsrldq_avx(auVar38,8);
  auVar38 = vpmaxub_avx(auVar38,auVar30);
  auVar38 = vpsubusb_avx(auVar38,render_system_config);
  auVar38 = vpcmpeqb_avx(auVar38,auVar37);
  auVar37 = vpand_avx(auVar38,auVar8);
  auVar30 = ZEXT816(0) << 0x20;
  auVar44 = vpunpcklbw_avx(auVar32,auVar30);
  auVar15 = vpunpcklbw_avx(auVar31,auVar30);
  auVar11 = vpunpckhbw_avx(auVar31,auVar30);
  auVar16 = vpunpcklbw_avx(auVar34,auVar30);
  auVar17 = vpunpcklbw_avx(auVar43,auVar30);
  auVar38 = vpunpcklbw_avx(auVar28,auVar30);
  auVar31 = vpunpckhbw_avx(auVar28,auVar30);
  auVar31 = vpaddw_avx(auVar31,auVar11);
  auVar35 = vpunpckhbw_avx(auVar32,auVar30);
  auVar32 = vpaddw_avx(auVar15,auVar38);
  auVar39 = vpunpcklbw_avx(auVar29,auVar30);
  auVar18 = vpunpcklbw_avx(auVar33,auVar30);
  auVar41 = vpunpcklbw_avx(auVar36,auVar30);
  auVar38 = vpunpckhbw_avx(auVar43,ZEXT816(0) << 0x20);
  auVar12 = vpunpckhbw_avx(auVar36,ZEXT816(0) << 0x20);
  auVar30 = ZEXT816(0) << 0x20;
  auVar13 = vpunpckhbw_avx(auVar33,auVar30);
  auVar14 = vpunpckhbw_avx(auVar34,auVar30);
  auVar32 = vpaddw_avx(auVar32,auVar44);
  auVar34 = vpaddw_avx(auVar12,auVar38);
  auVar38 = vpaddw_avx(auVar41,auVar17);
  auVar42 = vpunpckhbw_avx(auVar29,auVar30);
  auVar31 = vpaddw_avx(auVar31,auVar35);
  auVar30 = vpaddw_avx(auVar42,auVar13);
  auVar34 = vpaddw_avx(auVar30,auVar34);
  auVar30 = vpaddw_avx(auVar18,auVar39);
  auVar34 = vpaddw_avx(auVar34,auVar31);
  auVar38 = vpaddw_avx(auVar38,auVar30);
  auVar38 = vpaddw_avx(auVar38,auVar32);
  auVar31 = vpaddw_avx(auVar31,auVar32);
  auVar30 = vpaddw_avx(auVar31,render_system_config);
  auVar31 = vpaddw_avx(auVar44,auVar16);
  auVar32 = vpaddw_avx(auVar34,auVar38);
  auVar34 = vpaddw_avx(auVar32,render_system_config);
  auVar31 = vpaddw_avx(auVar31,auVar34);
  auVar38 = vpsrlw_avx(auVar31,4);
  auVar31 = vpaddw_avx(auVar14,auVar35);
  auVar31 = vpaddw_avx(auVar31,auVar34);
  auVar31 = vpsrlw_avx(auVar31,4);
  auVar32 = vpaddw_avx(auVar44,auVar17);
  auVar31 = vpackuswb_avx(auVar38,auVar31);
  auVar32 = vpaddw_avx(auVar32,auVar30);
  auVar38 = vpsrlw_avx(auVar32,3);
  auVar32 = vpunpckhbw_avx(auVar43,ZEXT816(0) << 0x20);
  auVar32 = vpaddw_avx(auVar32,auVar35);
  auVar32 = vpaddw_avx(auVar32,auVar30);
  auVar32 = vpsrlw_avx(auVar32,3);
  auVar32 = vpackuswb_avx(auVar38,auVar32);
  auVar38 = vpunpcklbw_avx(auVar29,ZEXT816(0) << 0x20);
  auVar44 = vpsubw_avx(auVar34,auVar38);
  auVar42 = vpsubw_avx(auVar34,auVar42);
  auVar40 = ZEXT816(0) << 0x20;
  auVar34 = vpaddw_avx(auVar16,auVar16);
  auVar38 = vpaddw_avx(auVar34,auVar15);
  auVar38 = vpaddw_avx(auVar38,auVar42);
  auVar39 = vpsrlw_avx(auVar38,4);
  auVar35 = vpaddw_avx(auVar34,auVar16);
  auVar42 = vpsubw_avx(auVar42,auVar13);
  auVar38 = vpaddw_avx(auVar14,auVar14);
  auVar34 = vpaddw_avx(auVar38,auVar11);
  auVar34 = vpaddw_avx(auVar34,auVar44);
  auVar34 = vpsrlw_avx(auVar34,4);
  auVar34 = vpackuswb_avx(auVar39,auVar34);
  auVar19 = vpunpcklbw_avx(auVar28,auVar40);
  auVar18 = vpsubw_avx(auVar30,auVar19);
  auVar39 = vpunpckhbw_avx(auVar28,auVar40);
  auVar10 = vpsubw_avx(auVar30,auVar39);
  auVar30 = vpunpcklbw_avx(auVar33,auVar40);
  auVar13 = vpsubw_avx(auVar44,auVar30);
  auVar30 = vpaddw_avx(auVar35,auVar19);
  auVar30 = vpaddw_avx(auVar30,auVar42);
  auVar44 = vpsrlw_avx(auVar30,4);
  auVar30 = vpaddw_avx(auVar38,auVar14);
  auVar38 = vpaddw_avx(auVar30,auVar39);
  auVar38 = vpaddw_avx(auVar38,auVar13);
  auVar38 = vpsrlw_avx(auVar38,4);
  auVar38 = vpackuswb_avx(auVar44,auVar38);
  auVar35 = vpaddw_avx(auVar35,auVar16);
  auVar44 = vpaddw_avx(auVar35,auVar17);
  auVar42 = vpsubw_avx(auVar42,auVar12);
  auVar44 = vpaddw_avx(auVar44,auVar42);
  auVar40 = vpsrlw_avx(auVar44,4);
  auVar19 = vpunpckhbw_avx(auVar43,ZEXT816(0) << 0x20);
  auVar13 = vpsubw_avx(auVar13,auVar41);
  auVar35 = vpaddw_avx(auVar35,auVar16);
  auVar39 = vpsubw_avx(auVar42,auVar19);
  auVar44 = vpaddw_avx(auVar30,auVar14);
  auVar30 = vpaddw_avx(auVar44,auVar19);
  auVar42 = vpaddw_avx(auVar35,auVar16);
  auVar30 = vpaddw_avx(auVar30,auVar13);
  auVar19 = vpsubw_avx(auVar13,auVar17);
  auVar30 = vpsrlw_avx(auVar30,4);
  auVar30 = vpackuswb_avx(auVar40,auVar30);
  auVar35 = vpaddw_avx(auVar35,auVar41);
  auVar35 = vpaddw_avx(auVar35,auVar39);
  auVar41 = vpsrlw_avx(auVar35,4);
  auVar44 = vpaddw_avx(auVar44,auVar14);
  auVar35 = vpaddw_avx(auVar44,auVar12);
  auVar13 = vpshufd_avx(auVar37,0x44);
  auVar35 = vpaddw_avx(auVar35,auVar19);
  auVar35 = vpsrlw_avx(auVar35,4);
  auVar37 = vpaddw_avx(auVar42,auVar16);
  auVar40 = ZEXT816(0) << 0x20;
  auVar35 = vpackuswb_avx(auVar41,auVar35);
  auVar16 = vpunpckhbw_avx(auVar28,auVar40);
  auVar41 = vpunpcklbw_avx(auVar28,auVar40);
  auVar44 = vpaddw_avx(auVar44,auVar14);
  auVar12 = vpsubw_avx(auVar39,auVar16);
  auVar19 = vpsubw_avx(auVar19,auVar41);
  auVar39 = vpshufd_avx(auVar8,0x44);
  auVar8 = vpunpcklbw_avx(auVar29,auVar40);
  auVar37 = vpaddw_avx(auVar37,auVar8);
  auVar8 = vpsubw_avx(auVar12,auVar11);
  auVar37 = vpaddw_avx(auVar37,auVar8);
  auVar41 = vpsrlw_avx(auVar37,4);
  auVar8 = vpunpckhbw_avx(auVar29,ZEXT816(0) << 0x20);
  auVar37 = vpaddw_avx(auVar44,auVar14);
  auVar37 = vpaddw_avx(auVar37,auVar8);
  auVar8 = vpsubw_avx(auVar19,auVar15);
  auVar37 = vpaddw_avx(auVar37,auVar8);
  auVar8 = vpandn_avx(auVar13,auVar29);
  auVar29 = vpsrlw_avx(auVar37,4);
  auVar29 = vpackuswb_avx(auVar41,auVar29);
  auVar29 = vpand_avx(auVar29,auVar13);
  auVar29 = vpor_avx(auVar29,auVar8);
  *puVar26 = auVar29._0_8_;
  uVar5 = vmovhps_avx(auVar29);
  *puVar4 = uVar5;
  auVar29 = vpunpcklbw_avx(auVar33,ZEXT816(0) << 0x20);
  auVar29 = vpaddw_avx(auVar42,auVar29);
  auVar29 = vpaddw_avx(auVar29,auVar12);
  auVar42 = vpsrlw_avx(auVar29,4);
  auVar29 = vpunpckhbw_avx(auVar33,ZEXT816(0) << 0x20);
  auVar29 = vpaddw_avx(auVar44,auVar29);
  auVar29 = vpaddw_avx(auVar29,auVar19);
  auVar44 = vpandn_avx(auVar13,auVar33);
  auVar33 = vpsrlw_avx(auVar29,4);
  auVar33 = vpackuswb_avx(auVar42,auVar33);
  auVar33 = vpand_avx(auVar33,auVar13);
  auVar29 = vpor_avx(auVar33,auVar44);
  *puVar24 = auVar29._0_8_;
  auVar33 = vpandn_avx(auVar13,auVar36);
  uVar5 = vmovhps_avx(auVar29);
  *(uint64_t *)(lVar27 + (int64_t)param_1) = uVar5;
  auVar36 = vpand_avx(auVar35,auVar13);
  auVar36 = vpor_avx(auVar36,auVar33);
  *(uint64_t *)((int64_t)param_1 - lVar27) = auVar36._0_8_;
  uVar5 = vmovhps_avx(auVar36);
  *puVar2 = uVar5;
  auVar33 = vpandn_avx(auVar13,auVar43);
  auVar36 = vpand_avx(auVar30,auVar13);
  auVar36 = vpor_avx(auVar36,auVar33);
  *puVar25 = auVar36._0_8_;
  uVar5 = vmovhps_avx(auVar36);
  *(uint64_t *)(lVar22 + (int64_t)param_1) = uVar5;
  auVar33 = vpaddw_avx(auVar17,auVar17);
  auVar36 = vpaddw_avx(auVar33,auVar17);
  auVar29 = vpunpcklbw_avx(auVar28,ZEXT816(0) << 0x20);
  auVar36 = vpaddw_avx(auVar36,auVar29);
  auVar29 = vpsubw_avx(auVar10,auVar11);
  auVar36 = vpaddw_avx(auVar36,auVar29);
  auVar29 = vpunpckhbw_avx(auVar43,ZEXT816(0) << 0x20);
  auVar43 = vpaddw_avx(auVar29,auVar29);
  auVar29 = vpaddw_avx(auVar43,auVar29);
  auVar29 = vpaddw_avx(auVar29,auVar16);
  auVar30 = vpsrlw_avx(auVar36,3);
  auVar36 = vpsubw_avx(auVar18,auVar15);
  auVar36 = vpaddw_avx(auVar29,auVar36);
  auVar36 = vpsrlw_avx(auVar36,3);
  auVar36 = vpackuswb_avx(auVar30,auVar36);
  auVar36 = vpand_avx(auVar36,auVar39);
  auVar28 = vpandn_avx(auVar39,auVar28);
  auVar36 = vpor_avx(auVar36,auVar28);
  auVar28 = vpandn_avx(auVar13,auVar36);
  auVar36 = vpand_avx(auVar38,auVar13);
  auVar36 = vpor_avx(auVar28,auVar36);
  *(uint64_t *)((int64_t)param_1 - lVar22) = auVar36._0_8_;
  uVar5 = vmovhps_avx(auVar36);
  *puVar3 = uVar5;
  auVar36 = vpsubsw_avx(ZEXT816(0) << 0x20,auVar9);
  auVar36 = vpacksswb_avx(auVar9,auVar36);
  auVar28 = vpaddsb_avx(auVar36,auVar20);
  auVar36 = vpaddw_avx(auVar43,auVar11);
  auVar28 = vpandn_avx(auVar39,auVar28 ^ render_system_config);
  auVar43 = vpaddw_avx(auVar33,auVar15);
  auVar43 = vpaddw_avx(auVar43,auVar10);
  auVar36 = vpaddw_avx(auVar36,auVar18);
  auVar43 = vpsrlw_avx(auVar43,3);
  auVar36 = vpsrlw_avx(auVar36,3);
  auVar36 = vpackuswb_avx(auVar43,auVar36);
  auVar43 = vpand_avx(auVar34,auVar13);
  auVar36 = vpand_avx(auVar36,auVar39);
  auVar36 = vpor_avx(auVar28,auVar36);
  auVar36 = vpandn_avx(auVar13,auVar36);
  auVar36 = vpor_avx(auVar36,auVar43);
  *puVar21 = auVar36._0_8_;
  auVar43 = vpandn_avx(auVar39,auVar45);
  uVar5 = vmovhps_avx(auVar36);
  *puVar1 = uVar5;
  auVar36 = vpand_avx(auVar32,auVar39);
  auVar36 = vpor_avx(auVar43,auVar36);
  auVar43 = vpandn_avx(auVar13,auVar36);
  auVar36 = vpand_avx(auVar31,auVar13);
  auVar36 = vpor_avx(auVar43,auVar36);
  *puVar23 = auVar36._0_8_;
  uVar5 = vmovhps_avx(auVar36);
  *param_1 = uVar5;
  return;
}





// 函数: void FUN_180695530(void)
void FUN_180695530(void)

{
  int in_stack_00000030;
  
  if (in_stack_00000030 == 1) {
    FUN_180694c40();
    return;
  }
  FUN_180694040();
  return;
}



int32_t FUN_180695560(void)

{
  int32_t *in_stack_00000028;
  
  FUN_1806905c0();
  return *in_stack_00000028;
}



int64_t FUN_180695590(void)

{
  int iVar1;
  uint *in_stack_00000038;
  
  iVar1 = FUN_180690800();
  return (uint64_t)*in_stack_00000038 - ((int64_t)iVar1 * (int64_t)iVar1 >> 10);
}



uint64_t FUN_180695600(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                       int64_t param_5,int32_t param_6,uint *param_7,int64_t param_8)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int iStackX_8;
  
  lVar1 = param_8;
  iVar2 = FUN_180690800();
  iVar3 = FUN_180690800(param_1 + 0x20,param_2,param_3,param_4,param_5 + 0x20,param_6,lVar1 + 0x20,
                        0x40,0x40,&param_8);
  *param_7 = (int)param_8 + iStackX_8;
  return (uint64_t)(uint)((int)param_8 + iStackX_8) -
         ((int64_t)(iVar3 + iVar2) * (int64_t)(iVar3 + iVar2) >> 0xc) & 0xffffffff;
}



int64_t FUN_180695700(void)

{
  int iVar1;
  uint *in_stack_00000038;
  
  iVar1 = FUN_180691080();
  return (uint64_t)*in_stack_00000038 - ((int64_t)iVar1 * (int64_t)iVar1 >> 10);
}



uint64_t FUN_180695750(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                       int64_t param_5,int32_t param_6,uint *param_7)

{
  int64_t lVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int iStackX_8;
  
  uVar2 = param_6;
  lVar1 = param_5;
  iVar3 = FUN_180691080();
  iVar4 = FUN_180691080(param_1 + 0x20,param_2,param_3,param_4,lVar1 + 0x20,uVar2,0x40,&param_5);
  *param_7 = (int)param_5 + iStackX_8;
  return (uint64_t)(uint)((int)param_5 + iStackX_8) -
         ((int64_t)(iVar4 + iVar3) * (int64_t)(iVar4 + iVar3) >> 0xc) & 0xffffffff;
}



int FUN_180695820(void)

{
  int iStack0000000000000028;
  int iStack_18;
  
  *_iStack0000000000000028 = 0;
  FUN_1806905c0();
  *_iStack0000000000000028 = *_iStack0000000000000028 + iStack0000000000000028;
  return *_iStack0000000000000028 - ((uint)(iStack_18 * iStack_18) >> 8);
}



int64_t FUN_180695870(void)

{
  int iStack0000000000000028;
  int iStack_18;
  
  *_iStack0000000000000028 = 0;
  FUN_180690700();
  *_iStack0000000000000028 = *_iStack0000000000000028 + iStack0000000000000028;
  return (uint64_t)*_iStack0000000000000028 - ((int64_t)iStack_18 * (int64_t)iStack_18 >> 9);
}



int64_t FUN_1806958c0(int64_t param_1,int param_2,int64_t param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  int iVar2;
  int64_t lVar3;
  int aiStack_38 [2];
  int64_t lStack_30;
  
  puVar1 = param_5;
  iVar2 = 0;
  *param_5 = 0;
  lVar3 = 2;
  lStack_30 = (int64_t)(param_4 << 4);
  do {
    FUN_180690700(param_1,param_2,param_3,param_4,&param_5,aiStack_38);
    param_1 = param_1 + (param_2 << 4);
    *puVar1 = *puVar1 + (int)param_5;
    iVar2 = iVar2 + aiStack_38[0];
    param_3 = param_3 + lStack_30;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return (uint64_t)*puVar1 - ((int64_t)iVar2 * (int64_t)iVar2 >> 10);
}



int64_t FUN_180695990(int64_t param_1,int param_2,int64_t param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int aiStack_78 [2];
  int64_t lStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  
  puVar1 = param_5;
  uVar4 = 0;
  lStack_70 = 0;
  lStack_58 = (int64_t)(param_4 << 4);
  lStack_60 = (int64_t)(param_2 << 4);
  *param_5 = 0;
  lStack_68 = 2;
  uVar7 = uVar4;
  do {
    lVar2 = uVar7 + param_1;
    lVar5 = 2;
    lVar6 = lStack_70 - uVar7;
    do {
      FUN_180690700(lVar2,param_2,(lVar6 - param_1) + param_3 + lVar2,param_4,&param_5,aiStack_78);
      lVar2 = lVar2 + 0x20;
      *puVar1 = *puVar1 + (int)param_5;
      uVar3 = (int)uVar4 + aiStack_78[0];
      uVar4 = (uint64_t)uVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lStack_70 = lStack_70 + lStack_58;
    uVar7 = uVar7 + lStack_60;
    lStack_68 = lStack_68 + -1;
  } while (lStack_68 != 0);
  return (uint64_t)*puVar1 - ((int64_t)(int)uVar3 * (int64_t)(int)uVar3 >> 0xb);
}



int64_t FUN_180695ac0(int64_t param_1,int param_2,int64_t param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int aiStack_78 [2];
  int64_t lStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  
  puVar1 = param_5;
  uVar4 = 0;
  lStack_70 = 0;
  lStack_58 = (int64_t)(param_4 << 4);
  lStack_60 = (int64_t)(param_2 << 4);
  *param_5 = 0;
  lStack_68 = 4;
  uVar7 = uVar4;
  do {
    lVar2 = uVar7 + param_1;
    lVar5 = 2;
    lVar6 = lStack_70 - uVar7;
    do {
      FUN_180690700(lVar2,param_2,(lVar6 - param_1) + param_3 + lVar2,param_4,&param_5,aiStack_78);
      lVar2 = lVar2 + 0x20;
      *puVar1 = *puVar1 + (int)param_5;
      uVar3 = (int)uVar4 + aiStack_78[0];
      uVar4 = (uint64_t)uVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lStack_70 = lStack_70 + lStack_58;
    uVar7 = uVar7 + lStack_60;
    lStack_68 = lStack_68 + -1;
  } while (lStack_68 != 0);
  return (uint64_t)*puVar1 - ((int64_t)(int)uVar3 * (int64_t)(int)uVar3 >> 0xc);
}





