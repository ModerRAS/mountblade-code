#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part605.c - 4 个函数
// 函数: void function_59ad70(int64_t param_1,float param_2,uint64_t param_3,uint64_t param_4)
void function_59ad70(int64_t param_1,float param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int8_t uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t lVar12;
  byte bVar13;
  int iVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int iVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int32_t local_var_90;
  int32_t local_var_8c;
  uint64_t local_var_88;
  int32_t local_var_80;
  uint64_t local_var_7c;
  uint64_t local_var_74;
  int32_t local_var_6c;
  int32_t local_var_68;
  int8_t local_var_64;
  if ((system_status_flag == 1) || (system_status_flag == 4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  lVar16 = *(int64_t *)(param_1 + 0x108);
  uVar15 = 0;
  iVar17 = 0;
  uVar1 = *(uint *)(lVar16 + 0x56c);
  if ((!bVar3) && ((uVar1 >> 0xe & 1) != 0)) {
    if (*(int *)(lVar16 + 0x5f8) == 0) {
      lVar12 = *(int64_t *)(lVar16 + 0x590);
      uVar11 = uVar15;
      if (*(int64_t *)(lVar12 + 0x24a8) != 0) {
        uVar11 = *(uint64_t *)(*(int64_t *)(lVar12 + 0x24a8) + 0x1d0);
      }
      uVar19 = uVar15;
      if (*(int64_t *)(lVar12 + 0x2460) != 0) {
        uVar19 = *(uint64_t *)(*(int64_t *)(lVar12 + 0x2460) + 0x1d0);
      }
      uVar18 = uVar19 & 0xffffffffffffff00;
      if ((char)*(uint64_t *)(lVar12 + 0x2470) == '\0') {
        uVar18 = uVar19;
      }
      if ((((uVar18 | *(uint64_t *)(lVar12 + 0x2470) | *(uint64_t *)(lVar12 + 0x24b8) | uVar11) >>
            0x18 & 1) == 0) && (iVar9 = Function_f0310f66(lVar12,0), iVar9 < 2)) {
        if (*(int *)(param_1 + 0x1d4) == 0) {
          lVar12 = *(int64_t *)(lVar16 + 0x20);
          fVar21 = 1.0;
          fVar22 = *(float *)(lVar12 + 0x84) * *(float *)(lVar12 + 0x7c);
          fVar23 = fVar22 * 0.25;
          fVar22 = fVar22 - SQRT(*(float *)(lVar12 + 0x24) * *(float *)(lVar12 + 0x24) +
                                 *(float *)(lVar12 + 0x28) * *(float *)(lVar12 + 0x28) +
                                 *(float *)(lVar12 + 0x2c) * *(float *)(lVar12 + 0x2c));
          if ((fVar22 < fVar23) &&
             (fVar21 = ((fVar23 - fVar22) * 4.0) / fVar23 + 1.0, 3.0 <= fVar21)) {
            fVar21 = 3.0;
          }
          fVar21 = fVar21 * param_2 + *(float *)(param_1 + 0x278);
          *(float *)(param_1 + 0x278) = fVar21;
          if (0.0 < fVar21) {
            lVar16 = *(int64_t *)(*(int64_t *)(lVar16 + 0x8f8) + 0x9e8);
            iVar9 = iVar17;
            if (lVar16 != 0) {
              iVar9 = *(int *)((int64_t)*(int *)(lVar16 + 0xf0) * 0xa0 + 100 +
                              *(int64_t *)(lVar16 + 0xd0));
            }
            function_5a79c0(param_1,(int64_t)iVar9 * 0x170 + render_system_memory);
          }
        }
        else {
          *(uint *)(param_1 + 0x278) = render_system_memory ^ 0x80000000;
        }
        goto LAB_18059af84;
      }
    }
    *(int32_t *)(param_1 + 0x1e0) = 0xffffffff;
  }
LAB_18059af84:
  if (((uVar1 >> 0xb & 1) != 0) &&
     ((((lVar16 = *(int64_t *)(param_1 + 0x108), -1 < *(int *)(lVar16 + 0x564) ||
        ((*(byte *)(*(int64_t *)(lVar16 + 0x590) + 0x3424) & 0x10) != 0)) &&
       (lVar12 = *(int64_t *)(lVar16 + 0x590), lVar12 != 0)) &&
      (((*(uint *)(lVar16 + 0x56c) & 0x800) != 0 && (*(char *)(lVar12 + 0x34bc) != '\0')))))) {
    *(int8_t *)(lVar12 + 0x34bc) = 0;
  }
  iVar9 = *(int *)(*(int64_t *)(param_1 + 0x108) + 0x570);
  uVar20 = uVar1 & 0x4000;
  if ((uVar20 != 0) && ((uVar6 = function_5a35f0(param_1), !bVar3 || (iVar9 == 2)))) {
    function_59aad0(param_1,uVar6);
  }
  lVar16 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590);
  iVar10 = *(int *)(lVar16 + 0x2498);
  if (iVar10 == -1) {
    cVar8 = -1;
  }
  else {
    cVar8 = *(char *)((int64_t)iVar10 * 0x68 + 0x60 + render_system_memory);
  }
  lVar12 = *(int64_t *)(lVar16 + 0x2460);
  iVar14 = iVar17;
  if (lVar12 != 0) {
    iVar14 = (int)*(uint64_t *)(lVar12 + 0x1d0);
  }
  bVar13 = (byte)*(uint64_t *)(lVar16 + 0x2470);
  bVar7 = (byte)iVar14;
  if (bVar13 != 0) {
    bVar7 = bVar13;
  }
  if (bVar7 < 0x21) {
LAB_18059b0ab:
    bVar4 = false;
  }
  else {
    uVar11 = uVar15;
    if (lVar12 != 0) {
      uVar11 = *(uint64_t *)(lVar12 + 0x1d0);
    }
    if (((uVar11 | *(uint64_t *)(lVar16 + 0x2470)) & 0x2000000000) == 0) goto LAB_18059b0ab;
    bVar4 = true;
  }
  lVar12 = *(int64_t *)(lVar16 + 0x24a8);
  iVar14 = iVar17;
  if (lVar12 != 0) {
    iVar14 = *(int *)(lVar12 + 0x1d0);
  }
  bVar13 = (byte)*(uint64_t *)(lVar16 + 0x24b8);
  bVar7 = (byte)iVar14;
  if (bVar13 != 0) {
    bVar7 = bVar13;
  }
  if ((!bVar4) && (bVar7 < 0x40)) goto LAB_18059b24c;
  if (iVar10 != -1) {
    iVar10 = iVar17;
    if (lVar12 != 0) {
      iVar10 = (int)*(uint64_t *)(lVar12 + 0x1d0);
    }
    bVar7 = (byte)iVar10;
    if (bVar13 != 0) {
      bVar7 = bVar13;
    }
    if (bVar7 < 0x40) {
      if (cVar8 == '\0') {
        iVar10 = *(int *)(lVar16 + 0x2450);
        lVar12 = (int64_t)iVar10;
        if ((iVar10 != -1) &&
           ((*(int *)(lVar12 * 0x68 + 0x58 + render_system_memory) == 0x1c ||
            ((iVar10 != -1 &&
             ((*(int *)(lVar12 * 0x68 + 0x58 + render_system_memory) == 0x1d ||
              ((iVar10 != -1 && (*(int *)(lVar12 * 0x68 + 0x58 + render_system_memory) == 0x1e))))))))))
        goto LAB_18059b24c;
        iVar10 = iVar17;
        if (*(int *)(lVar16 + 0x2498) != -1) {
          iVar10 = *(int *)((int64_t)*(int *)(lVar16 + 0x2498) * 0x68 + 0x58 + render_system_memory);
        }
        if (iVar10 == 0x1f) goto LAB_18059b24c;
      }
      local_var_7c = 0x3f80000000000000;
      local_var_74 = 0xbe4ccccdbe4ccccd;
      local_var_80 = 0;
      local_var_6c = 0x3ecccccd;
      local_var_68 = 0x1000000;
      local_var_64 = 0;
      local_var_90 = 1;
      local_var_8c = 0xffffffff;
      local_var_88 = 0x40;
      CoreSystemThreadManager(*(int64_t *)(param_1 + 0x108),&local_var_90);
    }
  }
  if (uVar20 != 0) {
    uVar15 = *(uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x8f8) + 0x9e8);
  }
  iVar10 = iVar17;
  if (uVar15 != 0) {
    iVar10 = *(int *)((int64_t)*(int *)(uVar15 + 0xf0) * 0xa0 + 100 + *(int64_t *)(uVar15 + 0xd0))
    ;
  }
  function_5b1d30(param_1 + 0x110,(int64_t)iVar10 * 0x170 + render_system_memory);
  *(uint64_t *)(param_1 + 600) = 0;
  *(uint64_t *)(param_1 + 0x268) = 0;
LAB_18059b24c:
  lVar16 = render_system_memory;
  if ((uVar1 & 0x80008) != 0) {
    lVar12 = *(int64_t *)(param_1 + 0x108);
    bVar4 = false;
    bVar5 = false;
    if ((((*(uint *)(lVar12 + 0x4c4) & 0x8000) != 0) && (!bVar3)) &&
       (cVar8 = function_59a920(param_1), cVar8 != '\0')) {
      function_5a3c90(param_1,param_4);
      lVar12 = *(int64_t *)(param_1 + 0x108);
      lVar16 = render_system_memory;
    }
    if (uVar20 != 0) {
      lVar12 = *(int64_t *)(param_1 + 0x108);
      lVar2 = *(int64_t *)(*(int64_t *)(lVar12 + 0x8f8) + 0x9e8);
      if ((lVar2 == 0) ||
         ((*(byte *)((int64_t)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar2 + 0xd0)) &
          1) != 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((lVar2 == 0) ||
         ((*(byte *)((int64_t)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar2 + 0xd0))
           >> 1 & 1) == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    }
    lVar12 = *(int64_t *)(lVar12 + 0x590);
    if (*(int *)(lVar12 + 0x2450) != -1) {
      iVar17 = *(int *)((int64_t)*(int *)(lVar12 + 0x2450) * 0x68 + 0x58 + lVar16);
    }
    if ((((bVar4) || (*(int *)(param_1 + 0x28c) != 0)) || (iVar17 - 0x1cU < 2)) ||
       ((*(int *)(lVar12 + 0x2498) != -1 &&
        (*(int *)((int64_t)*(int *)(lVar12 + 0x2498) * 0x68 + 0x58 + lVar16) == 0x1f)))) {
      if (bVar3) {
        if (iVar9 == 2) {
          function_59c170(param_1);
        }
        function_5a31d0(param_1);
      }
      else {
        function_59c810(param_1,lVar12,param_3);
      }
    }
    else if (bVar5) {
      function_59ea80(param_1,lVar12,param_4,param_3);
    }
  }
  if (((uVar1 & 0x10) != 0) && ((!bVar3 || (iVar9 == 2)))) {
    function_59ba40(param_1);
  }
  return;
}
/*
Unable to decompile 'function_59ad86'
Cause:
Low-level Error: Cannot properly adjust input varnodes
*/
/*
Unable to decompile 'function_59ad99'
Cause:
Low-level Error: Cannot properly adjust input varnodes
*/
/*
Unable to decompile 'function_59af94'
Cause:
Low-level Error: Cannot properly adjust input varnodes
*/
// 函数: void function_59b3e8(void)
void function_59b3e8(void)
{
  int unaff_EDI;
  char unaff_R13B;
  if ((unaff_R13B == '\0') || (unaff_EDI == 2)) {
    function_59ba40();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_59b410(int64_t param_1)
void function_59b410(int64_t param_1)
{
  int64_t *plVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint64_t uVar11;
  int64_t lVar12;
  ushort uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint *puVar16;
  int8_t stack_array_88 [32];
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint local_var_58;
  uint local_var_54;
  uint local_var_50;
  uint local_var_4c;
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  lVar12 = *(int64_t *)(param_1 + 0x108);
  lVar5 = *(int64_t *)(lVar12 + 0x590);
  lVar6 = *(int64_t *)(*(int64_t *)(lVar12 + 0x8f8) + 0x9e8);
  uVar11 = *(uint64_t *)(lVar5 + 0x2460);
  lVar7 = *(int64_t *)(*(int64_t *)(lVar12 + 0x8f8) + 0x9f0);
  if (uVar11 != 0) {
    uVar11 = *(uint64_t *)(uVar11 + 0x1d0);
  }
  uVar11 = *(uint64_t *)(lVar5 + 0x2470) | uVar11;
  if (*(int64_t *)(lVar5 + 0x24a8) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(uint64_t *)(*(int64_t *)(lVar5 + 0x24a8) + 0x1d0);
  }
  if (((uVar11 & 0x2000000000) == 0) && (*(int *)(lVar5 + 0x2498) != -1)) {
    uVar11 = *(uint64_t *)(lVar5 + 0x24b8) | uVar14;
  }
  plVar1 = (int64_t *)(lVar12 + 0x728);
  if ((((uVar11 >> 0x1a & 1) == 0) &&
      (lVar15 = *plVar1,
      0.0 <= (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar15 + 0x570) * 8) -
                    *(int64_t *)(lVar15 + 0x568)) * 1e-05)) ||
     (lVar15 = *plVar1, ((*(ushort *)(lVar15 + 0x5ac) | *(ushort *)(lVar15 + 0x5aa)) & 0x7fc) != 0))
  {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((lVar7 == 0) ||
     ((*(uint *)((int64_t)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x58 + *(int64_t *)(lVar7 + 0xd0)) &
      0x100000) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((((*(int *)(lVar12 + 0x564) < 0) || (*(float *)(lVar5 + 0x2434) != 0.0)) ||
      ((iVar4 = *(int *)(lVar5 + 0x2450), iVar4 != -1 &&
       ((*(int *)((int64_t)iVar4 * 0x68 + 0x58 + render_system_memory) == 0x24 ||
        (*(int *)((int64_t)iVar4 * 0x68 + 0x58 + render_system_memory) == 0x25)))))) ||
     ((lVar6 != 0 &&
      ((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0)) >>
        0x15 & 1) != 0)))) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (((bVar8) || (bVar9)) || (bVar10)) {
    lVar12 = *plVar1;
    if (((*(ushort *)(lVar12 + 0x5ac) | *(ushort *)(lVar12 + 0x5aa)) & 0x3003) == 0) {
      *(uint64_t *)(lVar12 + 0x504) = 0;
      *(uint64_t *)(lVar12 + 0x50c) = 0;
      lVar12 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x728);
      *(uint64_t *)(lVar12 + 0x514) = 0;
      *(uint64_t *)(lVar12 + 0x51c) = 0;
      lVar12 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x728);
      *(uint64_t *)(lVar12 + 0x544) = 0;
      *(uint64_t *)(lVar12 + 0x54c) = 0;
      puVar16 = (uint *)((int64_t)
                         *(char *)(*(int64_t *)
                                    (*(int64_t *)
                                      (*(int64_t *)
                                        (*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x6d8) +
                                        0x8a8) + 0x260) + 0x210) + 0xe3) * 0x100 +
                        *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x658) + 0x18))
      ;
      do {
        LOCK();
        uVar3 = *puVar16;
        *puVar16 = *puVar16 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      local_var_68 = *(uint64_t *)(puVar16 + 1);
      local_var_60 = *(uint64_t *)(puVar16 + 3);
      local_var_58 = puVar16[5];
      local_var_54 = puVar16[6];
      local_var_50 = puVar16[7];
      local_var_4c = puVar16[8];
      *puVar16 = 0;
      lVar12 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x728);
      *(uint *)(lVar12 + 0x4f4) = local_var_58;
      *(uint *)(lVar12 + 0x4f8) = local_var_54;
      *(uint *)(lVar12 + 0x4fc) = local_var_50;
      *(uint *)(lVar12 + 0x500) = local_var_4c;
      *(float *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x728) + 0x564) =
           (float)render_system_data_memory * 1e-05;
    }
    lVar12 = *(int64_t *)(param_1 + 0x108);
    if (bVar9) {
      uVar13 = *(ushort *)(*(int64_t *)(lVar12 + 0x728) + 0x5aa) & 0x2000;
      if (uVar13 != 0) {
        puVar2 = (ushort *)(*(int64_t *)(lVar12 + 0x728) + 0x5ac);
        *puVar2 = *puVar2 | uVar13;
        puVar2 = (ushort *)(*(int64_t *)(lVar12 + 0x728) + 0x5aa);
        *puVar2 = *puVar2 & ~uVar13;
        lVar12 = *(int64_t *)(param_1 + 0x108);
      }
      lVar5 = *(int64_t *)(lVar12 + 0x728);
      if (((*(ushort *)(lVar5 + 0x5ac) | *(ushort *)(lVar5 + 0x5aa)) & 0x1000) == 0) {
        *(int32_t *)(lVar5 + 0x80) = 0;
        *(int32_t *)(lVar5 + 0x84) = 0;
        *(int32_t *)(lVar5 + 0x88) = 0;
        *(int32_t *)(lVar5 + 0x8c) = 0;
        lVar12 = *(int64_t *)(param_1 + 0x108);
      }
      CoreEngine_516BD0(lVar12,0x1000,0x382a);
    }
    else {
      lVar5 = *(int64_t *)(lVar12 + 0x728);
      if (bVar10) {
        uVar13 = *(ushort *)(lVar5 + 0x5aa) & 0x1000;
        if (uVar13 != 0) {
          *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar13;
          puVar2 = (ushort *)(*(int64_t *)(lVar12 + 0x728) + 0x5aa);
          *puVar2 = *puVar2 & ~uVar13;
          lVar12 = *(int64_t *)(param_1 + 0x108);
        }
        CoreEngine_516BD0(lVar12,0x2000,0x382a);
      }
      else {
        uVar13 = *(ushort *)(lVar5 + 0x5aa) & 0x3000;
        if (uVar13 != 0) {
          *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar13;
          puVar2 = (ushort *)(*(int64_t *)(lVar12 + 0x728) + 0x5aa);
          *puVar2 = *puVar2 & ~uVar13;
        }
      }
    }
    lVar12 = *(int64_t *)(param_1 + 0x108);
    lVar5 = *(int64_t *)(lVar12 + 0x728);
    if (!bVar8) {
      uVar13 = *(ushort *)(lVar5 + 0x5aa) & 1;
      if (uVar13 != 0) {
        *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar13;
        puVar2 = (ushort *)(*(int64_t *)(lVar12 + 0x728) + 0x5aa);
        *puVar2 = *puVar2 & ~uVar13;
        lVar12 = *(int64_t *)(param_1 + 0x108);
      }
LAB_18059b902:
      uVar13 = *(ushort *)(*(int64_t *)(lVar12 + 0x728) + 0x5aa) & 2;
      if (uVar13 != 0) {
        puVar2 = (ushort *)(*(int64_t *)(lVar12 + 0x728) + 0x5ac);
        *puVar2 = *puVar2 | uVar13;
        lVar12 = *(int64_t *)(lVar12 + 0x728);
        goto LAB_18059b924;
      }
      goto LAB_18059b92e;
    }
    if ((*(byte *)(lVar5 + 0x5aa) & 1) == 0) {
      CoreEngine_516BD0(lVar12,1,0xc7d5);
      lVar12 = *(int64_t *)(param_1 + 0x108);
    }
    if ((bVar9) ||
       ((*(int64_t *)(*(int64_t *)(lVar12 + 0x8f8) + 0x9f0) == 0 &&
        ((lVar5 = *(int64_t *)(*(int64_t *)(lVar12 + 0x8f8) + 0x9e8), lVar5 == 0 ||
         (*(char *)(*(int64_t *)(lVar5 + 0xf8) + 0x88) !=
          *(char *)(*(int64_t *)(lVar12 + 0x590) + 0x25fc))))))) goto LAB_18059b902;
    uVar13 = *(ushort *)(*(int64_t *)(lVar12 + 0x728) + 0x5aa);
    if ((uVar13 & 2) != 0) goto LAB_18059b92e;
    if (((uVar13 & 0x800) == 0) || ((uVar11 & 0x800000000000) == 0)) {
      CoreEngine_516BD0(lVar12,2,0xc7d5);
      goto LAB_18059b92e;
    }
LAB_18059b933:
    lVar12 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x728);
    if (((*(ushort *)(lVar12 + 0x5aa) & 0x342a) == 0) &&
       ((*(ushort *)(lVar12 + 0x5ac) & 0x342a) == 0)) {
      CoreEngine_516BD0(*(int64_t *)(param_1 + 0x108),0x800,0x382a);
      goto LAB_18059b99c;
    }
  }
  else {
    uVar13 = *(ushort *)(lVar15 + 0x5aa) & 0x3003;
    if (uVar13 == 0) goto LAB_18059b92e;
    *(ushort *)(lVar15 + 0x5ac) = *(ushort *)(lVar15 + 0x5ac) | uVar13;
    lVar12 = *(int64_t *)(lVar12 + 0x728);
LAB_18059b924:
    *(ushort *)(lVar12 + 0x5aa) = *(ushort *)(lVar12 + 0x5aa) & ~uVar13;
LAB_18059b92e:
    if ((uVar11 & 0x800000000000) != 0) goto LAB_18059b933;
  }
  lVar12 = *(int64_t *)(param_1 + 0x108);
  lVar5 = *(int64_t *)(lVar12 + 0x728);
  uVar13 = *(ushort *)(lVar5 + 0x5aa) & 0x800;
  if (uVar13 != 0) {
    puVar2 = (ushort *)(lVar5 + 0x5ac);
    *puVar2 = *puVar2 | uVar13;
    puVar2 = (ushort *)(*(int64_t *)(lVar12 + 0x728) + 0x5aa);
    *puVar2 = *puVar2 & ~uVar13;
  }
LAB_18059b99c:
  lVar12 = *(int64_t *)(param_1 + 0x108);
  lVar5 = *(int64_t *)(lVar12 + 0x728);
  uVar13 = *(ushort *)(lVar5 + 0x5aa) & 0x3c0;
  if ((uVar13 != 0) &&
     (0.0 <= (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar5 + 0x580) * 8) -
                    *(int64_t *)(lVar5 + 0x578)) * 1e-05)) {
    *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar13;
    puVar2 = (ushort *)(*(int64_t *)(lVar12 + 0x728) + 0x5aa);
    *puVar2 = *puVar2 & ~uVar13;
    *(int32_t *)(*(int64_t *)(lVar12 + 0x728) + 0x5a4) = 0xffffffff;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_88);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_59ba40(int64_t param_1)
void function_59ba40(int64_t param_1)
{
  uint *puVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int64_t *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int32_t *puVar9;
  int64_t lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int32_t uVar14;
  float fVar15;
  uint64_t local_var_a8;
  int32_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  uint64_t local_var_70;
  int16_t local_var_68;
  int8_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  uint64_t local_var_54;
  uint64_t local_var_4c;
  uint64_t local_var_44;
  uint64_t local_var_3c;
  int32_t local_var_34;
  uint64_t local_var_30;
  int8_t local_var_28;
  uint64_t local_var_24;
  int32_t local_var_1c;
  bVar6 = false;
  iVar13 = 0;
  uVar11 = 0;
  if ((float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x210) * 8) -
             *(int64_t *)(param_1 + 0x208)) * 1e-05 < 0.0) goto LAB_18059bd8e;
  lVar10 = *(int64_t *)(param_1 + 0x108);
  if (*(int *)(param_1 + 0x1d4) != 7) {
    iVar8 = *(int *)(*(int64_t *)(lVar10 + 0x590) + 0x2498);
    if ((iVar8 == -1) || (*(char *)((int64_t)iVar8 * 0x68 + 0x60 + render_system_memory) != '\x05')) {
      if ((*(uint *)(lVar10 + 0x4c8) & 0x7c00) == 0) {
        return;
      }
      cVar7 = function_59c100(param_1);
      if (cVar7 != '\0') {
        return;
      }
      uVar11 = *(uint *)(*(int64_t *)(param_1 + 0x108) + 0x4c8);
      if ((((uVar11 >> 0xe & 1) == 0) || ((uVar11 & 0x3c00) == 0)) ||
         ((*(int *)(*(int64_t *)(param_1 + 0x108) + 0x570) != 1 &&
          ((system_status_flag != 0 && (system_status_flag != 5)))))) {
        lVar10 = *(int64_t *)(param_1 + 0x270);
      }
      else if ((uVar11 & 0x2000) == 0) {
        if ((uVar11 & 0x1000) == 0) {
          uVar12 = (uVar11 & 0x800 | 0x1400) >> 10;
          if ((uVar11 & 0x400) != 0) {
            uVar12 = 6;
          }
          lVar10 = function_5a0900(param_1,uVar12);
        }
        else {
          lVar10 = function_5a0900(param_1,4);
        }
      }
      else {
        lVar10 = function_5a0900(param_1,5);
      }
      *(int64_t *)(param_1 + 0x260) = lVar10;
      if (lVar10 == 0) {
        return;
      }
      if (*(int *)(lVar10 + 0xc) == -1) {
        return;
      }
      iVar8 = Function_f0310f66(*(uint64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590),1);
      if (0xf < iVar8) {
        return;
      }
      if (*(int *)(param_1 + 0x1d4) == 5) {
        return;
      }
      if (*(int *)(param_1 + 0x1d4) == 2) {
        return;
      }
      *(uint64_t *)(param_1 + 0x228) =
           *(uint64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x230) * 8);
      iVar8 = *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590) + 0x2498);
      if (iVar8 != -1) {
        iVar13 = *(int *)((int64_t)iVar8 * 0x68 + 0x58 + render_system_memory);
      }
      if (*(int *)((int64_t)(int)(*(int32_t **)(param_1 + 0x260))[3] * 0x68 + 0x58 +
                  render_system_memory) == iVar13) {
        return;
      }
      uVar14 = **(int32_t **)(param_1 + 0x260);
      cVar7 = Function_c538c986(param_1,uVar14);
      if (cVar7 == '\0') {
        return;
      }
      local_var_60 = 0;
      local_var_98 = 0;
      local_var_90 = 0;
      local_var_54 = 0;
      local_var_4c = 0;
      local_var_a8 = 0xffffffffffffffff;
      local_var_44 = 0;
      local_var_3c = 0;
      local_var_a0 = 0;
      local_var_1c = 0x3f800000;
      local_var_88 = 0;
      local_var_80 = 0;
      local_var_7c = 0x3f800000;
      local_var_78 = 0xbe4ccccd;
      local_var_74 = 0xbe4ccccd;
      local_var_70 = 0x3ecccccd;
      local_var_68 = 0x100;
      local_var_5c = 5;
      local_var_30 = 0xffffffffffffffff;
      local_var_28 = 0xff;
      local_var_24 = 0;
      local_var_34 = 0xffffffff;
      local_var_58 = uVar14;
      UISystem_InputHandler(param_1,1,&local_var_a8,1);
      *(uint64_t *)(param_1 + 0x218) =
           *(uint64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x220) * 8);
      return;
    }
    goto LAB_18059bd8e;
  }
  if ((*(uint *)(lVar10 + 0x4c8) & 0x7c00) == 0) {
    lVar3 = *(int64_t *)(param_1 + 0x260);
    if (lVar3 != 0) {
      plVar4 = *(int64_t **)(lVar10 + 0x590);
      iVar13 = (int)plVar4[0x493];
      if ((iVar13 != -1) &&
         ((((iVar13 == *(int *)(lVar3 + 0xc) || (iVar13 == *(int *)(lVar3 + 0x10))) ||
           (iVar13 == *(int *)(lVar3 + 0x14))) || (iVar13 == *(int *)(lVar3 + 0x18))))) {
        if ((float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x230) * 8) -
                   *(int64_t *)(param_1 + 0x228)) * 1e-05 <= render_system_temp_buffer) {
          return;
        }
        fVar15 = (float)(**(code **)(*plVar4 + 0xa0))(plVar4,1);
        if (fVar15 <= 0.999) {
          return;
        }
      }
    }
    goto LAB_18059bd8e;
  }
  *(uint64_t *)(param_1 + 0x228) =
       *(uint64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x230) * 8);
  puVar9 = *(int32_t **)(param_1 + 0x260);
  if (puVar9 == (int32_t *)0x0) {
LAB_18059bb85:
    bVar5 = false;
LAB_18059bb87:
    uVar14 = *puVar9;
    if (bVar5) {
      puVar9 = (int32_t *)function_5a0900(param_1,uVar14);
      if (((puVar9 != (int32_t *)0x0) &&
          (cVar7 = Function_ae66d806(lVar10), *(char *)((int64_t)puVar9 + 5) == cVar7)) &&
         ((iVar13 = *(int *)(*(int64_t *)(lVar10 + 0x590) + 0x2498), iVar13 != -1 &&
          (*(char *)((int64_t)iVar13 * 0x68 + 0x60 + render_system_memory) == '\x05')))) {
        local_var_58 = *puVar9;
        local_var_98 = 0;
        local_var_90 = 0;
        local_var_54 = 0;
        local_var_4c = 0;
        local_var_60 = 0;
        local_var_44 = 0;
        local_var_3c = 0;
        local_var_a8 = 0xffffffffffffffff;
        local_var_a0 = 0;
        local_var_88 = 0;
        local_var_80 = 0;
        local_var_7c = 0x3f800000;
        local_var_78 = 0xbe4ccccd;
        local_var_74 = 0xbe4ccccd;
        local_var_70 = 0x3ecccccd;
        local_var_68 = 0x100;
        local_var_5c = 5;
        local_var_30 = 0xffffffffffffffff;
        local_var_28 = 0xff;
        local_var_24 = 0;
        local_var_34 = 0xffffffff;
        local_var_1c = 0x3f800000;
        cVar7 = UISystem_InputHandler(param_1,1,&local_var_a8,1);
        if (cVar7 != '\0') {
          *(int32_t **)(param_1 + 0x270) = puVar9;
        }
      }
    }
    else {
      cVar7 = Function_c538c986();
      if (cVar7 != '\0') goto LAB_18059bba5;
    }
  }
  else {
    iVar13 = *(int *)(*(int64_t *)(lVar10 + 0x590) + 0x2498);
    if ((iVar13 == -1) ||
       ((((iVar13 != puVar9[3] && (iVar13 != puVar9[4])) &&
         ((iVar13 != puVar9[5] && (iVar13 != puVar9[6])))) ||
        (cVar7 = Function_ae66d806(lVar10), *(char *)((int64_t)puVar9 + 5) != cVar7)))) {
      if (((puVar9 == (int32_t *)0x0) ||
          (iVar13 = *(int *)(*(int64_t *)(lVar10 + 0x590) + 0x2498), iVar13 == -1)) ||
         ((iVar13 != puVar9[3] &&
          (((iVar13 != puVar9[4] && (iVar13 != puVar9[5])) && (iVar13 != puVar9[6]))))))
      goto LAB_18059bb85;
      bVar5 = true;
      goto LAB_18059bb87;
    }
    if (((*(uint *)(lVar10 + 0x4c8) & 0x4000) == 0) &&
       (puVar2 = *(int32_t **)(param_1 + 0x270), puVar2 != puVar9)) {
      if (puVar2 == (int32_t *)0x0) {
LAB_18059bb4e:
        bVar6 = true;
        goto label_59bd17;
      }
      uVar14 = *puVar2;
      cVar7 = Function_c538c986(param_1,uVar14);
      if (cVar7 == '\0') goto LAB_18059bb4e;
LAB_18059bba5:
      local_var_60 = 0;
      local_var_98 = 0;
      local_var_90 = 0;
      local_var_54 = 0;
      local_var_4c = 0;
      local_var_a8 = 0xffffffffffffffff;
      local_var_44 = 0;
      local_var_3c = 0;
      local_var_a0 = 0;
      local_var_88 = 0;
      local_var_80 = 0;
      local_var_7c = 0x3f800000;
      local_var_78 = 0xbe4ccccd;
      local_var_74 = 0xbe4ccccd;
      local_var_70 = 0x3ecccccd;
      local_var_68 = 0x100;
      local_var_5c = 5;
      local_var_30 = 0xffffffffffffffff;
      local_var_28 = 0xff;
      local_var_24 = 0;
      local_var_34 = 0xffffffff;
      local_var_1c = 0x3f800000;
      local_var_58 = uVar14;
      UISystem_InputHandler(param_1,1,&local_var_a8,1);
    }
  }
label_59bd17:
  if ((*(int *)(*(int64_t *)(param_1 + 0x108) + 0x570) == 2) && (**(int **)(param_1 + 0x260) != 8))
  {
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0x108) + 0x4c8);
    *puVar1 = *puVar1 & 0xffff83ff;
    iVar13 = **(int **)(param_1 + 0x260);
    if (iVar13 == 4) {
      uVar11 = 0x1000;
    }
    else if (iVar13 == 5) {
      uVar11 = 0x2000;
    }
    else if (iVar13 == 6) {
      uVar11 = 0x400;
    }
    else if (iVar13 == 7) {
      uVar11 = 0x800;
    }
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0x108) + 0x4c8);
    *puVar1 = *puVar1 | uVar11;
  }
  if (!bVar6) {
    return;
  }
LAB_18059bd8e:
  local_var_60 = 0;
  local_var_98 = 0;
  local_var_90 = 0;
  local_var_54 = 0;
  local_var_4c = 0;
  local_var_a8 = 0xffffffffffffffff;
  local_var_44 = 0;
  local_var_3c = 0;
  local_var_a0 = 0;
  local_var_88 = 0;
  local_var_80 = 0;
  local_var_7c = 0x3f800000;
  local_var_78 = 0xbe4ccccd;
  local_var_74 = 0xbe4ccccd;
  local_var_70 = 0x3ecccccd;
  local_var_68 = 0x100;
  local_var_5c = 7;
  local_var_58 = 0xffffffff;
  local_var_30 = 0xffffffffffffffff;
  local_var_28 = 0xff;
  local_var_24 = 0;
  local_var_34 = 0xffffffff;
  local_var_1c = 0x3f800000;
  UISystem_InputHandler(param_1,1,&local_var_a8,1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address