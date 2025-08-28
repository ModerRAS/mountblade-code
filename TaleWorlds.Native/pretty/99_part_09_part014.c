#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part014.c - 5 个函数

// 函数: void FUN_1805c2ff0(int64_t *param_1,int param_2,int32_t *param_3,int *param_4,int32_t param_5
void FUN_1805c2ff0(int64_t *param_1,int param_2,int32_t *param_3,int *param_4,int32_t param_5
                  )

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint64_t uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  int64_t lVar9;
  byte bVar10;
  int32_t uVar11;
  uint uVar12;
  char cStackX_8;
  char cStackX_10;
  uint64_t uStackX_18;
  int iStackX_20;
  
  uVar11 = *param_3;
  uStackX_18 = CONCAT44(uStackX_18._4_4_,uVar11);
  iStackX_20 = *param_4;
  bVar6 = false;
  uVar12 = *(uint *)(*param_1 + 0x56c) >> 0xe;
  if ((uVar12 & 1) == 0) {
LAB_1805c3059:
    cStackX_10 = '\0';
  }
  else {
    cVar7 = FUN_1805b8130();
    cStackX_10 = '\x01';
    if (cVar7 == '\0') goto LAB_1805c3059;
  }
  if ((uVar12 & 1) == 0) {
LAB_1805c307a:
    cStackX_8 = '\0';
  }
  else {
    cVar7 = FUN_1805b8210(param_1);
    cStackX_8 = '\x01';
    if (cVar7 == '\0') goto LAB_1805c307a;
  }
  iVar1 = (int)param_1[0x295];
  if (iVar1 != param_2) {
    *(int8_t *)(param_1 + 0x43d) = 1;
    *(int *)((int64_t)param_1 + 0x21ec) = iVar1;
    if ((param_2 == 8) || (iVar1 == 8)) {
      pcVar3 = *(code **)(system_system_data_config + 200);
      iVar1 = *(int *)(*param_1 + 0x18);
      if ((iVar1 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x30))(iVar1);
      }
      (*pcVar3)(iVar1,param_2 == 8);
      if ((iVar1 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))(iVar1);
      }
      uVar11 = (int)uStackX_18;
    }
    if (((int)param_1[0x295] == 0) || (param_2 == 0)) {
      *(int8_t *)((int64_t)param_1 + 0x21ff) = 1;
    }
    *(bool *)(param_1 + 0x440) = (int)param_1[0x295] != param_2;
    *(int *)(param_1 + 0x295) = param_2;
    *(int32_t *)((int64_t)param_1 + 0x178c) = 0;
    *(int32_t *)(param_1 + 0x284) = 0;
    *(int32_t *)((int64_t)param_1 + 0x1424) = 0xffffffff;
    if ((((uVar12 & 1) == 0) || ((*(uint *)((int64_t)param_1 + 0x1484) & 0x38) != 0)) ||
       ((*(uint *)((int64_t)param_1 + 0x1484) & 2) == 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
  }
  bVar5 = false;
  if ((uVar12 & 1) != 0) {
    if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
      lVar9 = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
      param_1[0x15] = lVar9;
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
    }
    else {
      lVar9 = param_1[0x15];
    }
    if (lVar9 == 0) {
      if (((*(uint *)((int64_t)param_1 + 0x1484) & 0x38) == 0) &&
         ((*(uint *)((int64_t)param_1 + 0x1484) & 2) != 0)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
    }
    else {
      if (((*(int *)(lVar9 + 0x30) < 1) ||
          ((uVar4 = *(uint64_t *)
                     ((int64_t)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar9 + 0xd0)),
           (uVar4 >> 9 & 1) != 0 && (*(short *)(lVar9 + 8) < 1)))) || ((uVar4 >> 1 & 1) == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((((param_2 - 1U & 0xfffffffd) == 0) && (bVar5)) ||
         (((param_2 - 2U & 0xfffffffd) == 0 && (!bVar5)))) {
        bVar6 = true;
      }
    }
  }
  switch((int)param_1[0x295]) {
  case 0:
    *(int32_t *)((int64_t)param_1 + 0x12dc) = 0xffffffff;
    func_0x0001805da580();
    bVar10 = (byte)((uint)uVar11 >> 0x1f) ^ 1;
    if ((iStackX_20 < 0) || ((char)param_1[0x386] == '\0')) {
code_r0x0001805c3327:
      if (bVar10 != 0) {
        FUN_1805d1c80(param_1,param_3,param_5);
        if ((((*(uint *)((int64_t)param_1 + 0x1484) & 0x38) == 0) &&
            ((*(uint *)((int64_t)param_1 + 0x1484) & 2) != 0)) &&
           (((lVar9 = func_0x0001805b6e80(param_1 + 1), lVar9 == 0 ||
             (lVar9 = func_0x0001805b6e80(), *(int *)(lVar9 + 0x30) < 1)) ||
            ((((*(uint *)((int64_t)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x50 +
                         *(int64_t *)(lVar9 + 0xd0)) >> 9 & 1) != 0 && (*(short *)(lVar9 + 8) < 1))
             || (lVar9 = func_0x0001805b6e80(),
                (*(byte *)((int64_t)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x50 +
                          *(int64_t *)(lVar9 + 0xd0)) & 1) == 0)))))) {
          bVar6 = true;
          break;
        }
        goto code_r0x0001805c3320;
      }
      uStackX_18 = 0xffffffffffffffff;
      FUN_1805d1c80(param_1,&uStackX_18,0);
      if (bVar6) break;
    }
    else {
      if (bVar10 != 0) {
        cVar7 = FUN_1805c79a0(param_1,param_1[0x291] + (int64_t)(int)uStackX_18 * 0xa60 + 0x30a0);
        if (cVar7 != '\0') goto code_r0x0001805c3327;
      }
      FUN_1805d1c80(param_1,param_4,0);
      if ((((*(uint *)((int64_t)param_1 + 0x1484) & 0x38) == 0) &&
          ((*(uint *)((int64_t)param_1 + 0x1484) & 2) != 0)) && (!bVar5)) {
        bVar6 = true;
        break;
      }
code_r0x0001805c3320:
      bVar6 = false;
    }
    if (((bVar5) && (-1 < (int)param_1[0x29a])) &&
       (cVar7 = FUN_1805c79a0(param_1,param_1[0x291] + 0x30a0 +
                                      (int64_t)(int)param_1[0x29a] * 0xa60), cVar7 != '\0')) {
      bVar6 = true;
    }
    break;
  case 1:
    FUN_1805d1c80(param_1,param_3,param_5);
    FUN_1805d9040(param_1 + 0x2f,*param_3);
    break;
  case 2:
  case 4:
    FUN_1805d1c80(param_1,param_4,0);
    if ((int)param_1[0x295] == 2) {
      FUN_1805d9040(param_1 + 0x2f,*param_4);
      break;
    }
    goto code_r0x0001805c34f5;
  case 3:
    FUN_1805d1c80(param_1,param_3,param_5);
    if ((int)param_1[0x284] == 0) {
      lVar9 = FUN_1805b74c0(param_1 + 1);
      FUN_1805d9040(param_1 + 0x2f,*(int32_t *)(lVar9 + 0x10));
    }
    break;
  case 5:
  case 6:
    bVar6 = true;
    uVar2 = *(uint *)((int64_t)param_1 + 0x209c);
    goto code_r0x0001805c325d;
  case 8:
    uVar2 = *(uint *)((int64_t)param_1 + 0x209c);
code_r0x0001805c325d:
    if ((uVar2 >> 0xb & 1) == 0) {
      uStackX_18 = 0xffffffffffffffff;
      FUN_1805d1c80(param_1,&uStackX_18,0);
    }
    goto code_r0x0001805c34f5;
  case 9:
    bVar6 = false;
    FUN_1805d9040(param_1 + 0x2f,*(int32_t *)((int64_t)param_1 + 0x172c));
    break;
  case 10:
    bVar6 = false;
code_r0x0001805c34f5:
    *(int32_t *)((int64_t)param_1 + 0x12dc) = 0xffffffff;
    func_0x0001805da580();
  }
  if (((uVar12 & 1) != 0) && ((*(uint *)(param_1 + 0x413) >> 8 & 1) == 0)) {
    cVar7 = FUN_1805b8130(param_1);
    cVar8 = FUN_1805b8210(param_1);
    if ((bVar6) || ((cStackX_10 != cVar7 || (cStackX_8 != cVar8)))) {
      FUN_1805c7cb0(param_1,cVar7,cVar8);
    }
  }
  return;
}






// 函数: void FUN_1805c3590(int64_t *param_1,int64_t *param_2,int8_t *param_3,char param_4)
void FUN_1805c3590(int64_t *param_1,int64_t *param_2,int8_t *param_3,char param_4)

{
  float *pfVar1;
  uint uVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  char cVar9;
  int32_t *puVar10;
  int64_t lVar11;
  char *pcVar12;
  int64_t *plVar13;
  uint uVar14;
  int64_t lVar15;
  int64_t lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int8_t auStack_a8 [144];
  
  if (((*(uint *)(*param_1 + 0x56c) & 0x4000) != 0) &&
     (uVar14 = *(uint *)((int64_t)param_1 + 0x1484), (uVar14 & 0x18) == 0)) {
    if (((uVar14 & 3) != 0) &&
       ((((*(uint *)(*param_1 + 0x56c) & 8) != 0 && ((*(byte *)(param_1 + 0x413) & 2) == 0)) &&
        ((uVar14 >> 2 & 1) == 0)))) {
      *param_3 = 1;
      cVar9 = func_0x0001805b7c00(param_1);
      if (cVar9 == '\0') {
        puVar10 = (int32_t *)FUN_1805b6980(param_1 + 1);
        cVar9 = FUN_1805b7e80(param_1,*puVar10);
        if ((cVar9 != '\0') && (fVar17 = (float)FUN_1805c9f10(param_1), 4.0 < fVar17)) {
          param_1[0x273] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x274] * 8) + -100;
        }
      }
    }
    if ((param_4 != '\0') && (1 < *(int *)((int64_t)param_1 + 0x178c) - 2U)) {
      plVar13 = param_1 + 1;
      lVar11 = func_0x0001805b7270(plVar13);
      if (lVar11 != 0) {
        cVar9 = func_0x0001805b7d30(param_1);
        if ((cVar9 == '\0') && (cVar9 = FUN_1805caef0(param_1), cVar9 != '\0')) {
          func_0x0001805d8950(param_1);
        }
        else if (((*(uint *)((int64_t)param_1 + 0x209c) >> 2 & 1) != 0) &&
                ((pcVar12 = (char *)FUN_1805b7080(plVar13), *pcVar12 == '\0' &&
                 (pcVar12 = (char *)func_0x0001805b71d0(plVar13), *pcVar12 == '\0')))) {
          func_0x0001805d88c0(param_1);
        }
      }
    }
  }
  uVar14 = *(uint *)(param_1 + 0x413);
  if ((uVar14 & 1) == 0) {
    lVar11 = *param_1;
    if ((uVar14 >> 8 & 1) == 0) {
      uVar2 = *(uint *)(lVar11 + 0x56c);
      if ((uVar2 & 8) == 0) {
        if ((uVar2 >> 0xc & 1) == 0) {
          *param_2 = param_1[0x38];
          lVar11 = param_1[0x3c];
          param_2[3] = param_1[0x3b];
          param_2[4] = lVar11;
          uVar4 = *(int32_t *)((int64_t)param_1 + 0x1ec);
          lVar11 = param_1[0x3e];
          uVar5 = *(int32_t *)((int64_t)param_1 + 500);
          *(int *)(param_2 + 5) = (int)param_1[0x3d];
          *(int32_t *)((int64_t)param_2 + 0x2c) = uVar4;
          *(int *)(param_2 + 6) = (int)lVar11;
          *(int32_t *)((int64_t)param_2 + 0x34) = uVar5;
          param_2[1] = param_1[0x39];
          param_2[2] = param_1[0x3a];
          param_2[7] = param_1[0x3f];
          *(int *)(param_2 + 8) = (int)param_1[0x40];
        }
        else {
          FUN_1805c0300(param_1,param_2);
        }
        if ((*(uint *)(*param_1 + 0x56c) & 0x20000) != 0) {
          uVar14 = *(uint *)(param_1 + 0x34);
          fVar17 = *(float *)(*(int64_t *)(*param_1 + 0x20) + 0x84);
          if ((uVar14 & 8) == 0) {
            if ((uVar14 >> 8 & 1) == 0) {
              if ((uVar14 & 2) == 0) {
                uVar14 = uVar14 | 2;
                *(uint *)(param_1 + 0x34) = uVar14;
                param_1[0x44] =
                     CONCAT44(*(float *)((int64_t)param_1 + 0x1dc) - *(float *)(param_1 + 0x35),
                              *(float *)(param_1 + 0x3b) - *(float *)((int64_t)param_1 + 0x1a4));
              }
              uVar14 = uVar14 | 0x100;
              fVar19 = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x44) +
                       *(float *)((int64_t)param_1 + 0x224) * *(float *)((int64_t)param_1 + 0x224)
              ;
              *(float *)(param_1 + 0x45) = fVar19;
            }
            else {
              fVar19 = *(float *)(param_1 + 0x45);
            }
            *(uint *)((int64_t)param_1 + 0x22c) = (int)fVar19 + 0x3f800000U >> 1;
            *(uint *)(param_1 + 0x34) = uVar14 | 8;
          }
          fVar19 = *(float *)((int64_t)param_1 + 0x22c);
          if ((*(byte *)((int64_t)param_1 + 0x1484) & 3) == 0) {
            lVar11 = *param_1;
            fVar18 = (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar11 + 0x6c0) * 8)
                            - *(int64_t *)(lVar11 + 0x6b8)) * 1e-05;
            if (*(float *)(param_1 + 0x290) <= fVar18 && fVar18 != *(float *)(param_1 + 0x290)) {
              lVar11 = FUN_18065cec0(*(int64_t *)
                                      (*(int64_t *)(*(int64_t *)(lVar11 + 0x590) + 0x2590) + 0xc78
                                      ) + 0x60,0);
              *(float *)((int64_t)param_1 + 0x2204) = *(float *)(lVar11 + 0x10) * 0.9;
              uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
              uVar14 = uVar14 ^ uVar14 >> 0x11;
              uVar14 = uVar14 ^ uVar14 << 5;
              *(uint *)(param_1 + 0x272) = uVar14;
              if (*(float *)(param_1 + 0x296) <= (float)(uVar14 - 1) * 2.3283064e-10) {
                fVar17 = *(float *)(param_1 + 0x296) + 0.003;
                if (0.05 <= fVar17) {
                  fVar17 = 0.05;
                }
                *(float *)(param_1 + 0x296) = fVar17;
              }
              else {
                pfVar1 = (float *)(*(int64_t *)(*param_1 + 0x20) + 0x234);
                if ((*pfVar1 <= fVar17 * 0.1 && fVar17 * 0.1 != *pfVar1) ||
                   (fVar19 < fVar17 * fVar17 * 0.25)) {
                    // WARNING: Subroutine does not return
                  AdvancedSystemController(*(int32_t *)(*(int64_t *)(*param_1 + 0x20) + 0x34));
                }
              }
            }
          }
          else if ((fVar19 < fVar17 * fVar17) && ((*(uint *)(*param_1 + 0x56c) & 0x1000) == 0)) {
            FUN_1805c0300(param_1,param_2);
          }
        }
      }
      else {
        if ((*(uint *)((int64_t)param_1 + 0x1484) & 2) == 0) {
          if ((*(uint *)((int64_t)param_1 + 0x1484) & 1) != 0) {
            *param_2 = param_1[0x27b];
            lVar11 = param_1[0x27f];
            param_2[3] = param_1[0x27e];
            param_2[4] = lVar11;
            lVar11 = param_1[0x281];
            param_2[5] = param_1[0x280];
            param_2[6] = lVar11;
            param_2[1] = param_1[0x27c];
            param_2[2] = param_1[0x27d];
            param_2[7] = param_1[0x282];
            *(int *)(param_2 + 8) = (int)param_1[0x283];
            return;
          }
          if (((uVar2 >> 9 & 1) != 0) && ((char)param_1[0x29b] != '\0')) {
            *param_2 = param_1[0x29e];
            lVar11 = param_1[0x2a2];
            param_2[3] = param_1[0x2a1];
            param_2[4] = lVar11;
            lVar11 = param_1[0x2a4];
            param_2[5] = param_1[0x2a3];
            param_2[6] = lVar11;
            param_2[1] = param_1[0x29f];
            param_2[2] = param_1[0x2a0];
            param_2[7] = param_1[0x2a5];
            *(int *)(param_2 + 8) = (int)param_1[0x2a6];
            return;
          }
        }
        else {
          if (((((uVar2 >> 9 & 1) != 0) && ((char)param_1[0x29b] != '\0')) && ((uVar14 & 3) == 0))
             && ((*(byte *)((int64_t)param_1 + 0x209c) & 1) == 0)) {
            *param_2 = param_1[0x29e];
            lVar11 = param_1[0x2a2];
            param_2[3] = param_1[0x2a1];
            param_2[4] = lVar11;
            lVar11 = param_1[0x2a4];
            param_2[5] = param_1[0x2a3];
            param_2[6] = lVar11;
            param_2[1] = param_1[0x29f];
            param_2[2] = param_1[0x2a0];
            param_2[7] = param_1[0x2a5];
            *(int *)(param_2 + 8) = (int)param_1[0x2a6];
            return;
          }
          cVar9 = func_0x000180522f60(lVar11);
          if (cVar9 != '\0') {
            *param_2 = param_1[0x38];
            lVar11 = param_1[0x3c];
            param_2[3] = param_1[0x3b];
            param_2[4] = lVar11;
            lVar11 = param_1[0x3e];
            param_2[5] = param_1[0x3d];
            param_2[6] = lVar11;
            param_2[1] = param_1[0x39];
            param_2[2] = param_1[0x3a];
            param_2[7] = param_1[0x3f];
            *(int *)(param_2 + 8) = (int)param_1[0x40];
            return;
          }
        }
        plVar13 = (int64_t *)FUN_180516f50(lVar11,auStack_a8);
        *param_2 = *plVar13;
        lVar11 = plVar13[4];
        param_2[3] = plVar13[3];
        param_2[4] = lVar11;
        lVar11 = plVar13[6];
        param_2[5] = plVar13[5];
        param_2[6] = lVar11;
        param_2[1] = plVar13[1];
        param_2[2] = plVar13[2];
        param_2[7] = plVar13[7];
        *(int *)(param_2 + 8) = (int)plVar13[8];
      }
    }
    else {
      lVar3 = *(int64_t *)(lVar11 + 0x9d8);
      lVar16 = *(int64_t *)(lVar11 + 0x20);
      if ((lVar3 == 0) || (cVar9 = FUN_18038d0a0(lVar3), lVar15 = lVar3, cVar9 == '\0')) {
        lVar15 = 0;
      }
      lVar6 = *(int64_t *)(lVar16 + 0xc);
      lVar7 = *(int64_t *)(lVar16 + 0x14);
      lVar8 = *(int64_t *)(lVar16 + 0xb0);
      lVar16 = *(int64_t *)(lVar16 + 0xb8);
      *param_2 = *(int64_t *)(*(int64_t *)(lVar11 + 0x8d8) + 0x18);
      param_2[3] = lVar6;
      param_2[4] = lVar7;
      param_2[1] = lVar15;
      param_2[5] = lVar8;
      param_2[6] = lVar16;
      param_2[2] = lVar3;
      param_2[7] = lVar6;
      *(int32_t *)(param_2 + 8) = 3;
    }
  }
  else {
    *param_2 = param_1[0x414];
    lVar11 = param_1[0x418];
    param_2[3] = param_1[0x417];
    param_2[4] = lVar11;
    lVar11 = param_1[0x41a];
    param_2[5] = param_1[0x419];
    param_2[6] = lVar11;
    param_2[1] = param_1[0x415];
    param_2[2] = param_1[0x416];
    param_2[7] = param_1[0x41b];
    *(int *)(param_2 + 8) = (int)param_1[0x41c];
  }
  return;
}






// 函数: void FUN_1805c35af(int64_t *param_1,int64_t *param_2,int8_t *param_3,char param_4)
void FUN_1805c35af(int64_t *param_1,int64_t *param_2,int8_t *param_3,char param_4)

{
  float *pfVar1;
  uint uVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  char cVar9;
  int64_t in_RAX;
  int32_t *puVar10;
  int64_t lVar11;
  char *pcVar12;
  int64_t *plVar13;
  uint uVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t unaff_R14;
  float fVar17;
  float fVar18;
  float fVar19;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000078;
  uint64_t in_stack_00000090;
  uint64_t in_stack_00000098;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  int32_t in_stack_000000b0;
  int32_t in_stack_000000b8;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  uint uStack00000000000000f0;
  float fStack00000000000000f4;
  
  if (((*(uint *)(in_RAX + 0x56c) & 0x4000) != 0) &&
     (uVar14 = *(uint *)((int64_t)param_1 + 0x1484), (uVar14 & 0x18) == 0)) {
    if (((uVar14 & 3) != 0) &&
       ((((*(uint *)(in_RAX + 0x56c) & 8) != 0 && ((*(byte *)(param_1 + 0x413) & 2) == 0)) &&
        ((uVar14 >> 2 & 1) == 0)))) {
      *param_3 = 1;
      cVar9 = func_0x0001805b7c00(param_1);
      if (cVar9 == '\0') {
        puVar10 = (int32_t *)FUN_1805b6980(param_1 + 1);
        cVar9 = FUN_1805b7e80(param_1,*puVar10);
        if ((cVar9 != '\0') && (fVar17 = (float)FUN_1805c9f10(param_1), 4.0 < fVar17)) {
          param_1[0x273] = *(int64_t *)(unaff_R14 + (int64_t)(int)param_1[0x274] * 8) + -100;
        }
      }
    }
    if ((param_4 != '\0') && (1 < *(int *)((int64_t)param_1 + 0x178c) - 2U)) {
      plVar13 = param_1 + 1;
      lVar11 = func_0x0001805b7270(plVar13);
      if (lVar11 != 0) {
        cVar9 = func_0x0001805b7d30(param_1);
        if ((cVar9 == '\0') && (cVar9 = FUN_1805caef0(param_1), cVar9 != '\0')) {
          func_0x0001805d8950(param_1);
        }
        else if (((*(uint *)((int64_t)param_1 + 0x209c) >> 2 & 1) != 0) &&
                ((pcVar12 = (char *)FUN_1805b7080(plVar13), *pcVar12 == '\0' &&
                 (pcVar12 = (char *)func_0x0001805b71d0(plVar13), *pcVar12 == '\0')))) {
          func_0x0001805d88c0(param_1);
        }
      }
    }
  }
  uVar14 = *(uint *)(param_1 + 0x413);
  if ((uVar14 & 1) == 0) {
    lVar11 = *param_1;
    if ((uVar14 >> 8 & 1) == 0) {
      uVar2 = *(uint *)(lVar11 + 0x56c);
      if ((uVar2 & 8) == 0) {
        if ((uVar2 >> 0xc & 1) == 0) {
          *param_2 = param_1[0x38];
          lVar11 = param_1[0x3c];
          param_2[3] = param_1[0x3b];
          param_2[4] = lVar11;
          uVar4 = *(int32_t *)((int64_t)param_1 + 0x1ec);
          lVar11 = param_1[0x3e];
          uVar5 = *(int32_t *)((int64_t)param_1 + 500);
          *(int *)(param_2 + 5) = (int)param_1[0x3d];
          *(int32_t *)((int64_t)param_2 + 0x2c) = uVar4;
          *(int *)(param_2 + 6) = (int)lVar11;
          *(int32_t *)((int64_t)param_2 + 0x34) = uVar5;
          param_2[1] = param_1[0x39];
          param_2[2] = param_1[0x3a];
          param_2[7] = param_1[0x3f];
          *(int *)(param_2 + 8) = (int)param_1[0x40];
        }
        else {
          FUN_1805c0300(param_1,param_2);
        }
        if ((*(uint *)(*param_1 + 0x56c) & 0x20000) != 0) {
          uVar14 = *(uint *)(param_1 + 0x34);
          fVar17 = *(float *)(*(int64_t *)(*param_1 + 0x20) + 0x84);
          if ((uVar14 & 8) == 0) {
            if ((uVar14 >> 8 & 1) == 0) {
              if ((uVar14 & 2) == 0) {
                uVar14 = uVar14 | 2;
                fStack00000000000000f4 =
                     *(float *)((int64_t)param_1 + 0x1dc) - *(float *)(param_1 + 0x35);
                *(uint *)(param_1 + 0x34) = uVar14;
                param_1[0x44] =
                     CONCAT44(fStack00000000000000f4,
                              *(float *)(param_1 + 0x3b) - *(float *)((int64_t)param_1 + 0x1a4));
              }
              uVar14 = uVar14 | 0x100;
              fVar19 = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x44) +
                       *(float *)((int64_t)param_1 + 0x224) * *(float *)((int64_t)param_1 + 0x224)
              ;
              *(float *)(param_1 + 0x45) = fVar19;
            }
            else {
              fVar19 = *(float *)(param_1 + 0x45);
            }
            uStack00000000000000f0 = (int)fVar19 + 0x3f800000U >> 1;
            *(uint *)((int64_t)param_1 + 0x22c) = uStack00000000000000f0;
            *(uint *)(param_1 + 0x34) = uVar14 | 8;
          }
          fVar19 = *(float *)((int64_t)param_1 + 0x22c);
          if ((*(byte *)((int64_t)param_1 + 0x1484) & 3) == 0) {
            lVar11 = *param_1;
            fVar18 = (float)(*(int64_t *)(unaff_R14 + (int64_t)*(int *)(lVar11 + 0x6c0) * 8) -
                            *(int64_t *)(lVar11 + 0x6b8)) * 1e-05;
            if (*(float *)(param_1 + 0x290) <= fVar18 && fVar18 != *(float *)(param_1 + 0x290)) {
              lVar11 = FUN_18065cec0(*(int64_t *)
                                      (*(int64_t *)(*(int64_t *)(lVar11 + 0x590) + 0x2590) + 0xc78
                                      ) + 0x60,0);
              *(float *)((int64_t)param_1 + 0x2204) = *(float *)(lVar11 + 0x10) * 0.9;
              uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
              uVar14 = uVar14 ^ uVar14 >> 0x11;
              uVar14 = uVar14 ^ uVar14 << 5;
              *(uint *)(param_1 + 0x272) = uVar14;
              if (*(float *)(param_1 + 0x296) <= (float)(uVar14 - 1) * 2.3283064e-10) {
                fVar17 = *(float *)(param_1 + 0x296) + 0.003;
                if (0.05 <= fVar17) {
                  fVar17 = 0.05;
                }
                *(float *)(param_1 + 0x296) = fVar17;
              }
              else {
                pfVar1 = (float *)(*(int64_t *)(*param_1 + 0x20) + 0x234);
                if ((*pfVar1 <= fVar17 * 0.1 && fVar17 * 0.1 != *pfVar1) ||
                   (fVar19 < fVar17 * fVar17 * 0.25)) {
                    // WARNING: Subroutine does not return
                  AdvancedSystemController(*(int32_t *)(*(int64_t *)(*param_1 + 0x20) + 0x34));
                }
              }
            }
          }
          else if ((fVar19 < fVar17 * fVar17) && ((*(uint *)(*param_1 + 0x56c) & 0x1000) == 0)) {
            FUN_1805c0300(param_1,param_2);
          }
        }
      }
      else {
        if ((*(uint *)((int64_t)param_1 + 0x1484) & 2) == 0) {
          if ((*(uint *)((int64_t)param_1 + 0x1484) & 1) != 0) {
            *param_2 = param_1[0x27b];
            lVar11 = param_1[0x27f];
            param_2[3] = param_1[0x27e];
            param_2[4] = lVar11;
            lVar11 = param_1[0x281];
            param_2[5] = param_1[0x280];
            param_2[6] = lVar11;
            param_2[1] = param_1[0x27c];
            param_2[2] = param_1[0x27d];
            param_2[7] = param_1[0x282];
            *(int *)(param_2 + 8) = (int)param_1[0x283];
            return;
          }
          if (((uVar2 >> 9 & 1) != 0) && ((char)param_1[0x29b] != '\0')) {
            *param_2 = param_1[0x29e];
            lVar11 = param_1[0x2a2];
            param_2[3] = param_1[0x2a1];
            param_2[4] = lVar11;
            lVar11 = param_1[0x2a4];
            param_2[5] = param_1[0x2a3];
            param_2[6] = lVar11;
            param_2[1] = param_1[0x29f];
            param_2[2] = param_1[0x2a0];
            param_2[7] = param_1[0x2a5];
            *(int *)(param_2 + 8) = (int)param_1[0x2a6];
            return;
          }
        }
        else {
          if (((((uVar2 >> 9 & 1) != 0) && ((char)param_1[0x29b] != '\0')) && ((uVar14 & 3) == 0))
             && ((*(byte *)((int64_t)param_1 + 0x209c) & 1) == 0)) {
            *param_2 = param_1[0x29e];
            lVar11 = param_1[0x2a2];
            param_2[3] = param_1[0x2a1];
            param_2[4] = lVar11;
            lVar11 = param_1[0x2a4];
            param_2[5] = param_1[0x2a3];
            param_2[6] = lVar11;
            param_2[1] = param_1[0x29f];
            param_2[2] = param_1[0x2a0];
            param_2[7] = param_1[0x2a5];
            *(int *)(param_2 + 8) = (int)param_1[0x2a6];
            return;
          }
          cVar9 = func_0x000180522f60(lVar11);
          if (cVar9 != '\0') {
            *param_2 = param_1[0x38];
            lVar11 = param_1[0x3c];
            param_2[3] = param_1[0x3b];
            param_2[4] = lVar11;
            lVar11 = param_1[0x3e];
            param_2[5] = param_1[0x3d];
            param_2[6] = lVar11;
            param_2[1] = param_1[0x39];
            param_2[2] = param_1[0x3a];
            param_2[7] = param_1[0x3f];
            *(int *)(param_2 + 8) = (int)param_1[0x40];
            return;
          }
        }
        plVar13 = (int64_t *)FUN_180516f50(lVar11,&stack0x00000040);
        *param_2 = *plVar13;
        lVar11 = plVar13[4];
        param_2[3] = plVar13[3];
        param_2[4] = lVar11;
        lVar11 = plVar13[6];
        param_2[5] = plVar13[5];
        param_2[6] = lVar11;
        param_2[1] = plVar13[1];
        param_2[2] = plVar13[2];
        param_2[7] = plVar13[7];
        *(int *)(param_2 + 8) = (int)plVar13[8];
      }
    }
    else {
      lVar3 = *(int64_t *)(lVar11 + 0x9d8);
      lVar16 = *(int64_t *)(lVar11 + 0x20);
      if ((lVar3 == 0) || (cVar9 = FUN_18038d0a0(lVar3), lVar15 = lVar3, cVar9 == '\0')) {
        lVar15 = 0;
      }
      lVar6 = *(int64_t *)(lVar16 + 0xc);
      lVar7 = *(int64_t *)(lVar16 + 0x14);
      lVar8 = *(int64_t *)(lVar16 + 0xb0);
      lVar16 = *(int64_t *)(lVar16 + 0xb8);
      *param_2 = *(int64_t *)(*(int64_t *)(lVar11 + 0x8d8) + 0x18);
      param_2[3] = lVar6;
      param_2[4] = lVar7;
      param_2[1] = lVar15;
      param_2[5] = lVar8;
      param_2[6] = lVar16;
      param_2[2] = lVar3;
      param_2[7] = lVar6;
      *(int32_t *)(param_2 + 8) = 3;
    }
  }
  else {
    *param_2 = param_1[0x414];
    lVar11 = param_1[0x418];
    param_2[3] = param_1[0x417];
    param_2[4] = lVar11;
    lVar11 = param_1[0x41a];
    param_2[5] = param_1[0x419];
    param_2[6] = lVar11;
    param_2[1] = param_1[0x415];
    param_2[2] = param_1[0x416];
    param_2[7] = param_1[0x41b];
    *(int *)(param_2 + 8) = (int)param_1[0x41c];
  }
  return;
}






// 函数: void FUN_1805c36f1(void)
void FUN_1805c36f1(void)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  uint64_t *unaff_RDI;
  
  *unaff_RDI = *(uint64_t *)(unaff_RBX + 0x20a0);
  uVar1 = *(uint64_t *)(unaff_RBX + 0x20c0);
  unaff_RDI[3] = *(uint64_t *)(unaff_RBX + 0x20b8);
  unaff_RDI[4] = uVar1;
  uVar1 = *(uint64_t *)(unaff_RBX + 0x20d0);
  unaff_RDI[5] = *(uint64_t *)(unaff_RBX + 0x20c8);
  unaff_RDI[6] = uVar1;
  unaff_RDI[1] = *(uint64_t *)(unaff_RBX + 0x20a8);
  unaff_RDI[2] = *(uint64_t *)(unaff_RBX + 0x20b0);
  unaff_RDI[7] = *(uint64_t *)(unaff_RBX + 0x20d8);
  *(int32_t *)(unaff_RDI + 8) = *(int32_t *)(unaff_RBX + 0x20e0);
  return;
}






// 函数: void FUN_1805c384f(uint param_1)
void FUN_1805c384f(uint param_1)

{
  float *pfVar1;
  int64_t in_RAX;
  int64_t lVar2;
  uint uVar3;
  int64_t *unaff_RBX;
  int64_t unaff_R14;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(in_RAX + 0x84);
  if ((param_1 & 8) == 0) {
    if ((param_1 >> 8 & 1) == 0) {
      if ((param_1 & 2) == 0) {
        param_1 = param_1 | 2;
        *(uint *)(unaff_RBX + 0x34) = param_1;
        unaff_RBX[0x44] =
             CONCAT44(*(float *)((int64_t)unaff_RBX + 0x1dc) - *(float *)(unaff_RBX + 0x35),
                      *(float *)(unaff_RBX + 0x3b) - *(float *)((int64_t)unaff_RBX + 0x1a4));
      }
      param_1 = param_1 | 0x100;
      fVar5 = *(float *)(unaff_RBX + 0x44) * *(float *)(unaff_RBX + 0x44) +
              *(float *)((int64_t)unaff_RBX + 0x224) * *(float *)((int64_t)unaff_RBX + 0x224);
      *(float *)(unaff_RBX + 0x45) = fVar5;
    }
    else {
      fVar5 = *(float *)(unaff_RBX + 0x45);
    }
    *(uint *)((int64_t)unaff_RBX + 0x22c) = (int)fVar5 + 0x3f800000U >> 1;
    *(uint *)(unaff_RBX + 0x34) = param_1 | 8;
  }
  fVar5 = *(float *)((int64_t)unaff_RBX + 0x22c);
  if ((*(byte *)((int64_t)unaff_RBX + 0x1484) & 3) == 0) {
    lVar2 = *unaff_RBX;
    fVar4 = (float)(*(int64_t *)(unaff_R14 + (int64_t)*(int *)(lVar2 + 0x6c0) * 8) -
                   *(int64_t *)(lVar2 + 0x6b8)) * 1e-05;
    if (*(float *)(unaff_RBX + 0x290) <= fVar4 && fVar4 != *(float *)(unaff_RBX + 0x290)) {
      lVar2 = FUN_18065cec0(*(int64_t *)
                             (*(int64_t *)(*(int64_t *)(lVar2 + 0x590) + 0x2590) + 0xc78) + 0x60,0
                           );
      *(float *)((int64_t)unaff_RBX + 0x2204) = *(float *)(lVar2 + 0x10) * 0.9;
      uVar3 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar3 = uVar3 ^ uVar3 >> 0x11;
      uVar3 = uVar3 ^ uVar3 << 5;
      *(uint *)(unaff_RBX + 0x272) = uVar3;
      if (*(float *)(unaff_RBX + 0x296) <= (float)(uVar3 - 1) * 2.3283064e-10) {
        fVar6 = *(float *)(unaff_RBX + 0x296) + 0.003;
        if (0.05 <= fVar6) {
          fVar6 = 0.05;
        }
        *(float *)(unaff_RBX + 0x296) = fVar6;
      }
      else {
        pfVar1 = (float *)(*(int64_t *)(*unaff_RBX + 0x20) + 0x234);
        if ((*pfVar1 <= fVar6 * 0.1 && fVar6 * 0.1 != *pfVar1) || (fVar5 < fVar6 * fVar6 * 0.25)) {
                    // WARNING: Subroutine does not return
          AdvancedSystemController(*(int32_t *)(*(int64_t *)(*unaff_RBX + 0x20) + 0x34));
        }
      }
    }
  }
  else if ((fVar5 < fVar6 * fVar6) && ((*(uint *)(*unaff_RBX + 0x56c) & 0x1000) == 0)) {
    FUN_1805c0300();
  }
  return;
}






