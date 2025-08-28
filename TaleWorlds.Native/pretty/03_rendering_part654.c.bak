#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part654.c - 8 个函数

// 函数: void FUN_18063c230(longlong param_1,float *param_2)
void FUN_18063c230(longlong param_1,float *param_2)

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
  float fVar10;
  float fVar11;
  bool bVar12;
  char cVar13;
  float *pfVar14;
  char cVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  float fVar19;
  int aiStack_c8 [6];
  ulonglong uStack_b0;
  
  uStack_b0 = GET_SECURITY_COOKIE() ^ (ulonglong)aiStack_c8;
  fVar1 = param_2[0xc];
  pfVar18 = (float *)(param_1 + 0x18);
  fVar2 = param_2[8];
  lVar17 = 0;
  fVar3 = param_2[9];
  fVar4 = param_2[10];
  bVar12 = true;
  pfVar14 = pfVar18;
  lVar16 = lVar17;
  do {
    fVar19 = (fVar3 - pfVar14[-5]) * pfVar14[-1] + (fVar2 - pfVar14[-6]) * pfVar14[-2] +
             (fVar4 - pfVar14[-4]) * *pfVar14;
    cVar15 = '\0';
    if (-fVar1 <= fVar19) {
      cVar15 = (fVar19 < fVar1) + '\x01';
    }
    aiStack_c8[lVar16] = 0;
    if (cVar15 == '\0') goto LAB_18063c57e;
    if (cVar15 == '\x02') {
      bVar12 = false;
      aiStack_c8[lVar16] = 1;
    }
    lVar16 = lVar16 + 1;
    pfVar14 = pfVar14 + 8;
  } while (lVar16 < 6);
  if (!bVar12) {
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar4 = param_2[4];
    fVar19 = param_2[5];
    fVar5 = param_2[6];
    do {
      if (aiStack_c8[lVar17] != 0) {
        fVar6 = pfVar18[-6];
        fVar7 = pfVar18[-5];
        fVar8 = pfVar18[-2];
        fVar9 = pfVar18[-4];
        fVar10 = pfVar18[-1];
        fVar11 = *pfVar18;
        bVar12 = 0.0 <= (fVar1 - fVar6) * fVar8 + (fVar2 - fVar7) * fVar10 +
                        (fVar3 - fVar9) * fVar11;
        cVar15 = bVar12 + '\x01';
        if ((fVar4 - fVar6) * fVar8 + (fVar19 - fVar7) * fVar10 + (fVar5 - fVar9) * fVar11 < 0.0) {
          cVar15 = bVar12;
        }
        cVar13 = cVar15 + '\x01';
        if ((fVar1 - fVar6) * fVar8 + (fVar19 - fVar7) * fVar10 + (fVar3 - fVar9) * fVar11 < 0.0) {
          cVar13 = cVar15;
        }
        cVar15 = cVar13 + '\x01';
        if ((fVar4 - fVar6) * fVar8 + (fVar19 - fVar7) * fVar10 + (fVar3 - fVar9) * fVar11 < 0.0) {
          cVar15 = cVar13;
        }
        cVar13 = cVar15 + '\x01';
        if ((fVar1 - fVar6) * fVar8 + (fVar2 - fVar7) * fVar10 + (fVar5 - fVar9) * fVar11 < 0.0) {
          cVar13 = cVar15;
        }
        cVar15 = cVar13 + '\x01';
        if ((fVar4 - fVar6) * fVar8 + (fVar2 - fVar7) * fVar10 + (fVar5 - fVar9) * fVar11 < 0.0) {
          cVar15 = cVar13;
        }
        cVar13 = cVar15 + '\x01';
        if ((fVar1 - fVar6) * fVar8 + (fVar19 - fVar7) * fVar10 + (fVar5 - fVar9) * fVar11 < 0.0) {
          cVar13 = cVar15;
        }
        cVar15 = cVar13 + '\x01';
        if ((fVar4 - fVar6) * fVar8 + (fVar2 - fVar7) * fVar10 + (fVar3 - fVar9) * fVar11 < 0.0) {
          cVar15 = cVar13;
        }
        if (cVar15 == '\0') break;
      }
      lVar17 = lVar17 + 1;
      pfVar18 = pfVar18 + 8;
    } while (lVar17 < 6);
  }
LAB_18063c57e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b0 ^ (ulonglong)aiStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18063c5e0(longlong param_1,longlong param_2)
void FUN_18063c5e0(longlong param_1,longlong param_2)

{
  float fVar1;
  uint64_t uVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint64_t uVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  float fVar13;
  uint64_t uStack_48;
  uint64_t uStack_40;
  ulonglong uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)&uStack_48;
  uVar2 = *(uint64_t *)(param_2 + 0x20);
  pfVar11 = (float *)(param_1 + 0x18);
  fVar1 = *(float *)(param_2 + 0xb0);
  uStack_48 = uVar2;
  uVar2 = uStack_48;
  uStack_40 = *(uint64_t *)(param_2 + 0x28);
  uVar8 = uStack_40;
  lVar12 = 0;
  uStack_40._0_4_ = (float)*(uint64_t *)(param_2 + 0x28);
  fVar7 = (float)uStack_40;
  uStack_48._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  fVar6 = uStack_48._4_4_;
  uStack_48._0_4_ = (float)uVar2;
  fVar5 = (float)uStack_48;
  pfVar9 = pfVar11;
  uStack_48 = uVar2;
  uStack_40 = uVar8;
  bVar4 = true;
  do {
    fVar13 = (fVar6 - pfVar9[-5]) * pfVar9[-1] + (fVar5 - pfVar9[-6]) * pfVar9[-2] +
             (fVar7 - pfVar9[-4]) * *pfVar9;
    if (fVar13 < -fVar1) goto LAB_18063c728;
    bVar3 = false;
    if (fVar1 <= fVar13) {
      bVar3 = bVar4;
    }
    pfVar9 = pfVar9 + 8;
    *(uint *)((longlong)&uStack_48 + lVar12 * 4) = (uint)(fVar13 < fVar1);
    lVar12 = lVar12 + 1;
    bVar4 = bVar3;
  } while (lVar12 < 6);
  if (!bVar3) {
    lVar12 = 0;
    do {
      if (*(int *)((longlong)&uStack_48 + lVar12 * 4) != 0) {
        pfVar9 = (float *)(param_2 + 0x38);
        lVar10 = 0;
        while ((pfVar9[-2] - pfVar11[-6]) * pfVar11[-2] + (pfVar9[-1] - pfVar11[-5]) * pfVar11[-1] +
               (*pfVar9 - pfVar11[-4]) * *pfVar11 < 0.0) {
          lVar10 = lVar10 + 1;
          pfVar9 = pfVar9 + 4;
          if (7 < lVar10) goto LAB_18063c728;
        }
      }
      lVar12 = lVar12 + 1;
      pfVar11 = pfVar11 + 8;
    } while (lVar12 < 6);
  }
LAB_18063c728:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)&uStack_48);
}



uint64_t FUN_18063c760(longlong param_1,float *param_2,float param_3)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  
  lVar1 = 0;
  pfVar2 = (float *)(param_1 + 0x18);
  while( true ) {
    fVar3 = (*param_2 - pfVar2[-6]) * pfVar2[-2] + (param_2[1] - pfVar2[-5]) * pfVar2[-1] +
            (param_2[2] - pfVar2[-4]) * *pfVar2;
    if (fVar3 < -param_3) {
      return 0;
    }
    if (fVar3 < param_3) break;
    lVar1 = lVar1 + 1;
    pfVar2 = pfVar2 + 8;
    if (5 < lVar1) {
      return 1;
    }
  }
  return 2;
}



bool FUN_18063c810(longlong param_1,longlong param_2,uint64_t param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = FUN_1806506a0(param_2,param_3,param_1 + 0x80,param_1 + 0x60);
  if (cVar1 != '\0') {
    iVar2 = 1;
  }
  cVar1 = FUN_1806506a0(param_2 + 0x70);
  if (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  cVar1 = FUN_1806506a0(param_2 + 0x20);
  if (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  cVar1 = FUN_1806506a0(param_2 + 0x30);
  if (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  cVar1 = FUN_1806506a0(param_2 + 0x40,param_1 + 0x20,param_1 + 0x80,param_1 + 0x60);
  if (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  cVar1 = FUN_1806506a0(param_2 + 0x50);
  if (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  cVar1 = FUN_1806506a0(param_2 + 0x60);
  if (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  cVar1 = FUN_1806506a0(param_2 + 0x10);
  if (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  return iVar2 == 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18063c930(longlong param_1,longlong param_2)
void FUN_18063c930(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  char cVar8;
  float *pfVar9;
  char cVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  float fVar15;
  uint64_t uStack_68;
  uint64_t uStack_60;
  ulonglong uStack_50;
  
  uStack_50 = GET_SECURITY_COOKIE() ^ (ulonglong)&uStack_68;
  uVar6 = *(uint64_t *)(param_2 + 0x20);
  pfVar14 = (float *)(param_1 + 0x18);
  lVar13 = 0;
  fVar1 = *(float *)(param_2 + 0xb0);
  uStack_68 = uVar6;
  uVar6 = uStack_68;
  uStack_60 = *(uint64_t *)(param_2 + 0x28);
  uVar7 = uStack_60;
  bVar11 = true;
  uStack_60._0_4_ = (float)*(uint64_t *)(param_2 + 0x28);
  fVar4 = (float)uStack_60;
  uStack_68._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
  fVar3 = uStack_68._4_4_;
  uStack_68._0_4_ = (float)uVar6;
  fVar2 = (float)uStack_68;
  pfVar9 = pfVar14;
  lVar12 = lVar13;
  uStack_68 = uVar6;
  uStack_60 = uVar7;
  do {
    fVar15 = (fVar2 - pfVar9[-6]) * pfVar9[-2] + (fVar3 - pfVar9[-5]) * pfVar9[-1] +
             (fVar4 - pfVar9[-4]) * *pfVar9;
    cVar10 = '\0';
    if (-fVar1 <= fVar15) {
      cVar10 = (fVar15 < fVar1) + '\x01';
    }
    *(int32_t *)((longlong)&uStack_68 + lVar12 * 4) = 0;
    if (cVar10 == '\0') goto LAB_18063cc89;
    if (cVar10 == '\x02') {
      bVar11 = false;
      *(int32_t *)((longlong)&uStack_68 + lVar12 * 4) = 1;
    }
    lVar12 = lVar12 + 1;
    pfVar9 = pfVar9 + 8;
  } while (lVar12 < 6);
  if (!bVar11) {
    do {
      if (*(int *)((longlong)&uStack_68 + lVar13 * 4) != 0) {
        fVar1 = pfVar14[-6];
        fVar2 = pfVar14[-5];
        fVar3 = pfVar14[-1];
        fVar4 = pfVar14[-4];
        fVar15 = pfVar14[-2];
        fVar5 = *pfVar14;
        bVar11 = 0.0 <= (*(float *)(param_2 + 0x34) - fVar2) * fVar3 +
                        (*(float *)(param_2 + 0x30) - fVar1) * fVar15 +
                        (*(float *)(param_2 + 0x38) - fVar4) * fVar5;
        cVar10 = bVar11 + '\x01';
        if ((*(float *)(param_2 + 0x44) - fVar2) * fVar3 +
            (*(float *)(param_2 + 0x40) - fVar1) * fVar15 +
            (*(float *)(param_2 + 0x48) - fVar4) * fVar5 < 0.0) {
          cVar10 = bVar11;
        }
        cVar8 = cVar10 + '\x01';
        if ((*(float *)(param_2 + 0x54) - fVar2) * fVar3 +
            (*(float *)(param_2 + 0x50) - fVar1) * fVar15 +
            (*(float *)(param_2 + 0x58) - fVar4) * fVar5 < 0.0) {
          cVar8 = cVar10;
        }
        cVar10 = cVar8 + '\x01';
        if ((*(float *)(param_2 + 100) - fVar2) * fVar3 +
            (*(float *)(param_2 + 0x60) - fVar1) * fVar15 +
            (*(float *)(param_2 + 0x68) - fVar4) * fVar5 < 0.0) {
          cVar10 = cVar8;
        }
        cVar8 = cVar10 + '\x01';
        if ((*(float *)(param_2 + 0x74) - fVar2) * fVar3 +
            (*(float *)(param_2 + 0x70) - fVar1) * fVar15 +
            (*(float *)(param_2 + 0x78) - fVar4) * fVar5 < 0.0) {
          cVar8 = cVar10;
        }
        cVar10 = cVar8 + '\x01';
        if ((*(float *)(param_2 + 0x84) - fVar2) * fVar3 +
            (*(float *)(param_2 + 0x80) - fVar1) * fVar15 +
            (*(float *)(param_2 + 0x88) - fVar4) * fVar5 < 0.0) {
          cVar10 = cVar8;
        }
        cVar8 = cVar10 + '\x01';
        if ((*(float *)(param_2 + 0x94) - fVar2) * fVar3 +
            (*(float *)(param_2 + 0x90) - fVar1) * fVar15 +
            (*(float *)(param_2 + 0x98) - fVar4) * fVar5 < 0.0) {
          cVar8 = cVar10;
        }
        cVar10 = cVar8 + '\x01';
        if ((*(float *)(param_2 + 0xa4) - fVar2) * fVar3 +
            (*(float *)(param_2 + 0xa0) - fVar1) * fVar15 +
            (*(float *)(param_2 + 0xa8) - fVar4) * fVar5 < 0.0) {
          cVar10 = cVar8;
        }
        if (cVar10 == '\0') break;
      }
      lVar13 = lVar13 + 1;
      pfVar14 = pfVar14 + 8;
    } while (lVar13 < 6);
  }
LAB_18063cc89:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)&uStack_68);
}



longlong * FUN_18063ccc0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = (longlong)&system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = (longlong)&system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  plVar1 = param_1 + 4;
  *plVar1 = (longlong)&system_state_ptr;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *plVar1 = (longlong)&system_data_buffer_ptr;
  param_1[7] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  plVar2 = param_1 + 0xb;
  *plVar2 = (longlong)&system_state_ptr;
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xd) = 0;
  *plVar2 = (longlong)&system_data_buffer_ptr;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xd) = 0;
  plVar3 = param_1 + 0xf;
  *plVar3 = (longlong)&system_state_ptr;
  param_1[0x10] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  *plVar3 = (longlong)&system_data_buffer_ptr;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&system_buffer_ptr,param_3,param_4,0xfffffffffffffffe);
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  *(int8_t *)(param_1 + 8) = 0;
  *(int32_t *)((longlong)param_1 + 0x44) = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[9] = 0;
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  (**(code **)(*plVar3 + 0x10))(plVar3,&system_buffer_ptr);
  param_1[0x15] = 0;
  return param_1;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18063cde0(longlong *param_1,int8_t *param_2)
void FUN_18063cde0(longlong *param_1,int8_t *param_2)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int8_t *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int8_t auStack_578 [32];
  int8_t *puStack_558;
  longlong *plStack_550;
  longlong *plStack_548;
  uint64_t uStack_540;
  longlong alStack_538 [4];
  int8_t auStack_518 [1232];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_578;
  param_1[1] = *param_1;
  if (param_2 == (int8_t *)0x0) {
    RtlCaptureContext(auStack_518);
  }
  puVar11 = auStack_518;
  if (param_2 != (int8_t *)0x0) {
    puVar11 = param_2;
  }
  uVar14 = 0;
  do {
    plVar7 = (longlong *)0x0;
    if (*(longlong *)(puVar11 + 0xf8) == 0) break;
    alStack_538[0] = 0;
    lVar6 = RtlLookupFunctionEntry(*(longlong *)(puVar11 + 0xf8),alStack_538,0);
    lVar5 = alStack_538[0];
    plVar9 = (longlong *)param_1[1];
    lVar13 = *(longlong *)(puVar11 + 0xf8) - alStack_538[0];
    if (plVar9 < (longlong *)param_1[2]) {
      *plVar9 = alStack_538[0];
      plVar9[1] = lVar13;
      param_1[1] = param_1[1] + 0x10;
    }
    else {
      lVar8 = *param_1;
      lVar12 = (longlong)plVar9 - lVar8 >> 4;
      if (lVar12 == 0) {
        lVar12 = 1;
LAB_18063cebe:
        plVar7 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar12 << 4);
        plVar9 = (longlong *)param_1[1];
        lVar8 = *param_1;
      }
      else {
        lVar12 = lVar12 * 2;
        if (lVar12 != 0) goto LAB_18063cebe;
      }
      lVar10 = (longlong)plVar9 - lVar8 >> 4;
      plVar9 = plVar7;
      if (0 < lVar10) {
        do {
          puVar1 = (int32_t *)((lVar8 - (longlong)plVar7) + (longlong)plVar9);
          uVar2 = puVar1[1];
          uVar3 = puVar1[2];
          uVar4 = puVar1[3];
          lVar10 = lVar10 + -1;
          *(int32_t *)plVar9 = *puVar1;
          *(int32_t *)((longlong)plVar9 + 4) = uVar2;
          *(int32_t *)(plVar9 + 1) = uVar3;
          *(int32_t *)((longlong)plVar9 + 0xc) = uVar4;
          plVar9 = plVar9 + 2;
        } while (0 < lVar10);
      }
      plVar9[1] = lVar13;
      *plVar9 = lVar5;
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *param_1 = (longlong)plVar7;
      param_1[2] = (longlong)(plVar7 + lVar12 * 2);
      param_1[1] = (longlong)(plVar9 + 2);
    }
    if (lVar6 == 0) {
      *(uint64_t *)(puVar11 + 0xf8) = **(uint64_t **)(puVar11 + 0x98);
      *(uint64_t **)(puVar11 + 0x98) = *(uint64_t **)(puVar11 + 0x98) + 1;
    }
    else {
      plStack_548 = alStack_538 + 1;
      uStack_540 = 0;
      plStack_550 = alStack_538 + 2;
      alStack_538[2] = 0;
      alStack_538[1] = 0;
      puStack_558 = puVar11;
      RtlVirtualUnwind(0,alStack_538[0],*(uint64_t *)(puVar11 + 0xf8),lVar6);
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 0x80);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_578);
}





// 函数: void FUN_18063cfe0(uint64_t *param_1)
void FUN_18063cfe0(uint64_t *param_1)

{
  param_1[0xf] = &system_data_buffer_ptr;
  if (param_1[0x10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x10] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  param_1[0xf] = &system_state_ptr;
  param_1[0xb] = &system_data_buffer_ptr;
  if (param_1[0xc] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  param_1[0xb] = &system_state_ptr;
  param_1[4] = &system_data_buffer_ptr;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[5] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[4] = &system_state_ptr;
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18063d0c0(void)
void FUN_18063d0c0(void)

{
  int8_t auStack_2a8 [144];
  uint64_t uStack_218;
  int8_t auStack_178 [288];
  ulonglong uStack_58;
  
  uStack_218 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_2a8;
                    // WARNING: Subroutine does not return
  memset(auStack_178,0,0x118);
}





// 函数: void FUN_18063d4e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_18063d4e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  uint uVar1;
  void *puStack_50;
  longlong lStack_48;
  uint uStack_40;
  uint64_t uStack_38;
  
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  FUN_1806277c0(&puStack_50,1,param_3,param_4,0xfffffffffffffffe);
  *(int16_t *)((ulonglong)uStack_40 + lStack_48) = 0x40;
  uStack_40 = 1;
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_1806277c0(&puStack_50,*(int *)(param_2 + 0x10) + 1);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_40 + lStack_48,*(uint64_t *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  FUN_1806277c0(&puStack_50,2);
  *(int16_t *)((ulonglong)uStack_40 + lStack_48) = 0x40;
  uStack_40 = 2;
  if (0 < *(int *)(param_3 + 0x10)) {
    FUN_1806277c0(&puStack_50,*(int *)(param_3 + 0x10) + 2);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_40 + lStack_48,*(uint64_t *)(param_3 + 8),
           (longlong)(*(int *)(param_3 + 0x10) + 1));
  }
  FUN_1806277c0(&puStack_50,4);
  *(int16_t *)((ulonglong)uStack_40 + lStack_48) = 0x2820;
  *(int8_t *)((int16_t *)((ulonglong)uStack_40 + lStack_48) + 1) = 0;
  uStack_40 = 4;
  if (0 < *(int *)(param_4 + 0x10)) {
    FUN_1806277c0(&puStack_50,*(int *)(param_4 + 0x10) + 4);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_40 + lStack_48,*(uint64_t *)(param_4 + 8),
           (longlong)(*(int *)(param_4 + 0x10) + 1));
  }
  uVar1 = 7;
  FUN_1806277c0(&puStack_50,7);
  *(int32_t *)((ulonglong)uStack_40 + lStack_48) = 0x203a29;
  uStack_40 = uVar1;
  if (0 < *(int *)(param_5 + 0x10)) {
    FUN_1806277c0(&puStack_50,*(int *)(param_5 + 0x10) + 7);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_40 + lStack_48,*(uint64_t *)(param_5 + 8),
           (longlong)(*(int *)(param_5 + 0x10) + 1));
  }
  if (*(ulonglong *)(param_1 + 8) < *(ulonglong *)(param_1 + 0x10)) {
    *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) + 0x20;
    FUN_180627ae0();
  }
  else {
    FUN_180059820(param_1,&puStack_50);
  }
  puStack_50 = &system_data_buffer_ptr;
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18063d700(uint64_t param_1,longlong *param_2)
void FUN_18063d700(uint64_t param_1,longlong *param_2)

{
  int iVar1;
  int8_t auStack_de8 [184];
  int8_t auStack_d30 [32];
  uint64_t uStack_d10;
  uint64_t uStack_d08;
  int8_t auStack_848 [2048];
  ulonglong uStack_48;
  
  uStack_d10 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_de8;
  FUN_180057110();
  uStack_d08 = 0x180c96740;
  iVar1 = _Mtx_lock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  if ((int)(param_2[1] - *param_2 >> 4) != 0) {
    FUN_180629090(auStack_d30);
                    // WARNING: Subroutine does not return
    memset(auStack_848,0,0x800);
  }
  iVar1 = _Mtx_unlock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_de8);
}



uint64_t *
FUN_18063dda0(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *puVar5;
  int32_t uVar6;
  uint64_t uVar7;
  void *puStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  
  uVar7 = 0xfffffffffffffffe;
  lVar4 = 0;
  uVar6 = 0;
  uVar3 = param_1[1] - *param_1 >> 5;
  iVar2 = (int)uVar3;
  if (iVar2 == 0) {
    FUN_180627910(param_2,&unknown_var_7104_ptr);
  }
  else {
    puStack_48 = &system_data_buffer_ptr;
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    if (iVar2 != 0) {
      uVar3 = uVar3 & 0xffffffff;
      do {
        puVar1 = *(void **)(lVar4 + 8 + *param_1);
        puVar5 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar5 = puVar1;
        }
        System_DataHandler(&puStack_48,&unknown_var_92_ptr,puVar5,param_4,uVar6,uVar7);
        lVar4 = lVar4 + 0x20;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    *(int32_t *)(param_2 + 2) = uStack_38;
    param_2[1] = uStack_40;
    *(int32_t *)((longlong)param_2 + 0x1c) = uStack_30._4_4_;
    *(int32_t *)(param_2 + 3) = (int32_t)uStack_30;
  }
  return param_2;
}



float FUN_18063dee0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                   float *param_6)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar2 = param_4[2] - param_3[2];
  fVar8 = *param_2 - *param_1;
  fVar6 = *param_1 - *param_3;
  fVar4 = param_2[1] - param_1[1];
  fVar11 = param_1[1] - param_3[1];
  fVar10 = param_2[2] - param_1[2];
  fVar13 = param_1[2] - param_3[2];
  fVar18 = *param_4 - *param_3;
  fVar19 = param_4[1] - param_3[1];
  fVar12 = fVar4 * fVar4 + fVar8 * fVar8 + fVar10 * fVar10;
  fVar17 = fVar19 * fVar4 + fVar18 * fVar8 + fVar2 * fVar10;
  fVar16 = fVar19 * fVar19 + fVar18 * fVar18 + fVar2 * fVar2;
  fVar15 = fVar11 * fVar4 + fVar6 * fVar8 + fVar13 * fVar10;
  fVar3 = 0.0;
  fVar14 = fVar11 * fVar19 + fVar6 * fVar18 + fVar13 * fVar2;
  fVar7 = fVar16 * fVar12 - fVar17 * fVar17;
  fVar5 = fVar14;
  fVar9 = fVar16;
  if (0.0001 <= fVar7) {
    fVar1 = fVar14 * fVar17 - fVar15 * fVar16;
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else {
      fVar5 = fVar14 * fVar12 - fVar15 * fVar17;
      fVar9 = fVar7;
      if (fVar7 < fVar1) {
        fVar5 = fVar14 + fVar17;
        fVar1 = fVar7;
        fVar9 = fVar16;
      }
    }
  }
  else {
    fVar7 = 1.0;
    fVar1 = 0.0;
  }
  fVar14 = fVar7;
  if (0.0 <= fVar5) {
    if (fVar5 <= fVar9) goto LAB_18063e11c;
    fVar1 = fVar17 - fVar15;
    fVar5 = fVar9;
    if (fVar1 < 0.0) goto LAB_18063e113;
  }
  else {
    fVar1 = -fVar15;
    fVar5 = 0.0;
    if (-0.0 < fVar15) {
LAB_18063e113:
      fVar1 = 0.0;
      goto LAB_18063e11c;
    }
  }
  fVar14 = fVar12;
  if (fVar12 < fVar1) {
    fVar1 = fVar7;
    fVar14 = fVar7;
  }
LAB_18063e11c:
  if (0.0001 <= ABS(fVar1)) {
    fVar1 = fVar1 / fVar14;
  }
  else {
    fVar1 = 0.0;
  }
  *param_5 = fVar1;
  if (0.0001 <= ABS(fVar5)) {
    fVar3 = fVar5 / fVar9;
  }
  fVar2 = (fVar10 * fVar1 + fVar13) - fVar2 * fVar3;
  *param_6 = fVar3;
  fVar9 = (fVar8 * fVar1 + fVar6) - fVar18 * fVar3;
  fVar5 = (fVar4 * fVar1 + fVar11) - fVar19 * fVar3;
  return SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar2 * fVar2);
}



uint64_t FUN_18063e220(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  float *pfVar4;
  float extraout_XMM0_Da;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float afStackX_8 [2];
  float afStackX_10 [2];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int32_t uStack_6c;
  
  fVar7 = param_1[8];
  fVar10 = param_1[4];
  fVar1 = param_2[8];
  fVar6 = param_1[5];
  pfVar4 = param_2 + 4;
  fVar8 = param_1[6];
  fStack_78 = fVar10 * fVar7 + *param_1;
  uStack_6c = 0x7f7fffff;
  fStack_74 = fVar6 * fVar7 + param_1[1];
  fStack_70 = fVar8 * fVar7 + param_1[2];
  FUN_18063dee0(param_2,pfVar4,param_1,&fStack_78,afStackX_10,afStackX_8);
  if (fVar1 < extraout_XMM0_Da) {
    uVar3 = 0;
    *param_4 = 0.0;
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[3] = 3.4028235e+38;
  }
  else {
    fVar7 = fVar7 * afStackX_8[0];
    fVar5 = pfVar4[1];
    fVar2 = param_2[1];
    fVar9 = fVar10 * fVar7 + *param_1;
    fVar10 = fVar6 * fVar7 + param_1[1];
    fVar11 = fVar8 * fVar7 + param_1[2];
    fVar7 = param_2[1];
    fVar8 = fVar9 - ((*pfVar4 - *param_2) * afStackX_10[0] + *param_2);
    fVar6 = fVar11 - ((pfVar4[2] - param_2[2]) * afStackX_10[0] + param_2[2]);
    *param_3 = fVar9;
    param_3[1] = fVar10;
    param_3[2] = fVar11;
    param_3[3] = 3.4028235e+38;
    fVar10 = fVar10 - ((fVar5 - fVar2) * afStackX_10[0] + fVar7);
    fVar7 = fVar10 * fVar10 + fVar8 * fVar8 + fVar6 * fVar6;
    if (fVar7 <= 1e-09) {
      fVar10 = 1.0;
      fVar8 = 0.0;
      fVar6 = 0.0;
      fVar7 = 0.0;
    }
    else {
      fVar7 = SQRT(fVar7);
      fVar5 = 1.0 / fVar7;
      fVar8 = fVar8 * fVar5;
      fVar10 = fVar10 * fVar5;
      fVar6 = fVar6 * fVar5;
    }
    if (fVar1 <= fVar7) {
      fVar7 = fVar1;
    }
    fVar10 = -((fVar8 * param_1[4] + fVar10 * param_1[5] + fVar6 * param_1[6]) * (fVar7 + fVar7));
    fVar7 = SQRT(fVar10 * fVar10 - (fVar7 * fVar7 * 4.0 - fVar1 * fVar1 * 4.0));
    if (fVar7 < fVar10) {
      uVar3 = 1;
      *param_4 = (-fVar10 - fVar7) * 0.5;
    }
    else {
      uVar3 = 1;
      *param_4 = fVar7 * 0.5 - fVar10 * 0.5;
    }
  }
  return uVar3;
}



int8_t FUN_18063e316(float param_1,longlong param_2,float *param_3,float param_4)

{
  float *unaff_RBX;
  float *unaff_RDI;
  float *in_R10;
  float fVar1;
  float in_XMM2_Dd;
  float fVar2;
  float in_XMM5_Da;
  float unaff_XMM8_Da;
  float fVar3;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar4;
  float unaff_XMM11_Da;
  float fVar5;
  float unaff_XMM12_Da;
  float fVar6;
  
  fVar4 = unaff_XMM10_Da * unaff_XMM8_Da + *param_3;
  fVar5 = unaff_XMM11_Da * unaff_XMM8_Da + param_3[1];
  fVar6 = unaff_XMM12_Da * unaff_XMM8_Da + param_3[2];
  fVar1 = unaff_RBX[1];
  fVar3 = fVar4 - (param_4 + *unaff_RBX);
  fVar2 = fVar6 - ((*(float *)(param_2 + 8) - unaff_RBX[2]) * param_1 + unaff_RBX[2]);
  *unaff_RDI = fVar4;
  unaff_RDI[1] = fVar5;
  unaff_RDI[2] = fVar6;
  unaff_RDI[3] = in_XMM2_Dd;
  fVar5 = fVar5 - (in_XMM5_Da * param_1 + fVar1);
  fVar1 = fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2;
  if (fVar1 <= 1e-09) {
    fVar5 = 1.0;
    fVar3 = 0.0;
    fVar2 = 0.0;
    fVar1 = 0.0;
  }
  else {
    fVar1 = SQRT(fVar1);
    fVar4 = 1.0 / fVar1;
    fVar3 = fVar3 * fVar4;
    fVar5 = fVar5 * fVar4;
    fVar2 = fVar2 * fVar4;
  }
  if (unaff_XMM9_Da <= fVar1) {
    fVar1 = unaff_XMM9_Da;
  }
  fVar5 = -((fVar3 * param_3[4] + fVar5 * param_3[5] + fVar2 * param_3[6]) * (fVar1 + fVar1));
  fVar1 = SQRT(fVar5 * fVar5 - (fVar1 * fVar1 * 4.0 - unaff_XMM9_Da * unaff_XMM9_Da * 4.0));
  if (fVar1 < fVar5) {
    *in_R10 = (-fVar5 - fVar1) * 0.5;
  }
  else {
    *in_R10 = fVar1 * 0.5 - fVar5 * 0.5;
  }
  return 1;
}



int8_t FUN_18063e3cb(uint64_t param_1,uint64_t param_2,longlong param_3,float param_4)

{
  float *in_R10;
  float fVar1;
  float in_XMM2_Da;
  float in_XMM4_Da;
  float unaff_XMM8_Da;
  float fVar2;
  float unaff_XMM9_Da;
  
  in_XMM2_Da = SQRT(in_XMM2_Da);
  fVar1 = 1.0 / in_XMM2_Da;
  if (unaff_XMM9_Da <= in_XMM2_Da) {
    in_XMM2_Da = unaff_XMM9_Da;
  }
  fVar2 = -((unaff_XMM8_Da * fVar1 * *(float *)(param_3 + 0x10) +
             param_4 * fVar1 * *(float *)(param_3 + 0x14) +
            in_XMM4_Da * fVar1 * *(float *)(param_3 + 0x18)) * (in_XMM2_Da + in_XMM2_Da));
  fVar1 = SQRT(fVar2 * fVar2 - (in_XMM2_Da * in_XMM2_Da * 4.0 - unaff_XMM9_Da * unaff_XMM9_Da * 4.0)
              );
  if (fVar1 < fVar2) {
    *in_R10 = (-fVar2 - fVar1) * 0.5;
  }
  else {
    *in_R10 = fVar1 * 0.5 - fVar2 * 0.5;
  }
  return 1;
}





