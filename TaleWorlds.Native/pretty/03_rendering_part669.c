#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part669.c - 13 个函数

// 函数: void SystemDataCleaner(uint *param_1)
void SystemDataCleaner(uint *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  byte bVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint *puVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  bool bVar14;
  
  *(byte *)((int64_t)param_1 + 0xe) = *(byte *)((int64_t)param_1 + 0xe) & 0xfd;
  if ((*(byte *)((int64_t)param_1 + 0xe) & 1) == 0) {
    bVar3 = func_0x00018064ceb0(param_1[7]);
  }
  else {
    bVar3 = 0x4a;
  }
  lVar9 = *(int64_t *)(param_1 + 0xc) + (uint64_t)bVar3 * 0x18;
  puVar10 = (uint64_t *)(lVar9 + 0x410);
  if ((((param_1[7] < 0x4001) && ((*(byte *)((int64_t)param_1 + 0xe) & 1) == 0)) &&
      (*(uint **)(lVar9 + 0x418) == param_1)) && ((uint *)*puVar10 == param_1)) {
    *(byte *)((int64_t)param_1 + 0xf) = *(byte *)((int64_t)param_1 + 0xf) & 1;
    *(byte *)((int64_t)param_1 + 0xf) = *(byte *)((int64_t)param_1 + 0xf) | 0x12;
    lVar9 = *(int64_t *)(param_1 + 0xc);
    uVar7 = ((int64_t)puVar10 + (-0x410 - lVar9)) / 0x18;
    if (uVar7 < *(uint64_t *)(lVar9 + 0xbd0)) {
      *(uint64_t *)(lVar9 + 0xbd0) = uVar7;
    }
    if (*(uint64_t *)(lVar9 + 0xbd8) < uVar7) {
      *(uint64_t *)(lVar9 + 0xbd8) = uVar7;
      return;
    }
    return;
  }
  *(byte *)((int64_t)param_1 + 0xe) = *(byte *)((int64_t)param_1 + 0xe) & 0xfd;
  uVar7 = (uint64_t)param_1[7];
  if (0x3ffffff < uVar7) {
    uVar7 = (uint64_t)*param_1 << 0x10;
  }
  if (uVar7 < 0x4001) {
    lVar2 = **(int64_t **)(param_1 + 0xc);
    FUN_18064d090(puVar10,param_1,0);
    lVar9 = lVar2 + 0x20;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    uVar7 = (uint64_t)param_1 & 0xffffffffffc00000;
    FUN_18064c220(param_1,lVar9);
    if (*(int64_t *)(uVar7 + 0x48) != 0) {
      if (*(int64_t *)(uVar7 + 0x48) == *(int64_t *)(uVar7 + 0x38)) {
        FUN_18064c570(uVar7,lVar9);
      }
      return;
    }
    lVar4 = *(int64_t *)(uVar7 + 0x78);
    for (puVar6 = (uint *)(uVar7 + 0x80); puVar6 < (uint *)(uVar7 + 0x80 + lVar4 * 0x50);
        puVar6 = puVar6 + (uint64_t)*puVar6 * 0x14) {
      if ((puVar6[7] == 0) && (*(int *)(uVar7 + 0x68) != 1)) {
        uVar12 = (uint64_t)*puVar6;
        if (1 < uVar12) {
          uVar11 = uVar12 - 1;
          if (uVar11 == 0) {
            uVar13 = 0x40;
          }
          else {
            lVar5 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            uVar13 = 0x3f - (uint64_t)(0x3f - (int)lVar5);
            if (uVar13 < 3) goto LAB_18064bfea;
          }
          uVar12 = ((uint64_t)((uint)(uVar11 >> ((char)uVar13 - 2U & 0x3f)) & 3) | uVar13 * 4) - 4;
        }
LAB_18064bfea:
        puVar10 = (uint64_t *)(lVar9 + uVar12 * 0x18);
        if (*(int64_t *)(puVar6 + 0x10) != 0) {
          *(uint64_t *)(*(int64_t *)(puVar6 + 0x10) + 0x38) = *(uint64_t *)(puVar6 + 0xe);
        }
        if (puVar6 == (uint *)*puVar10) {
          *puVar10 = *(uint64_t *)(puVar6 + 0xe);
        }
        if (*(int64_t *)(puVar6 + 0xe) != 0) {
          *(uint64_t *)(*(int64_t *)(puVar6 + 0xe) + 0x40) = *(uint64_t *)(puVar6 + 0x10);
        }
        if (puVar6 == (uint *)puVar10[1]) {
          puVar10[1] = *(uint64_t *)(puVar6 + 0x10);
        }
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[7] = 1;
      }
    }
    lVar9 = *(int64_t *)(uVar7 + 0x60) * -0x10000;
    plVar8 = (int64_t *)(*(int64_t *)(lVar2 + 0x3b8) + 0xa0);
  }
  else {
    lVar2 = **(int64_t **)(param_1 + 0xc);
    lVar9 = -uVar7;
    if (uVar7 < 0x200001) {
      plVar8 = (int64_t *)(lVar2 + 0x538);
    }
    else {
      plVar8 = (int64_t *)(lVar2 + 0x518);
    }
  }
  if (lVar9 != 0) {
    if (((int64_t *)0x180c8ed7f < plVar8) && (plVar8 < &system_ptr_efc0)) {
      LOCK();
      plVar1 = plVar8 + 3;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + lVar9;
      UNLOCK();
      lVar4 = plVar8[2];
      do {
        if (lVar2 + lVar9 <= lVar4) break;
        LOCK();
        lVar5 = plVar8[2];
        bVar14 = lVar4 == lVar5;
        if (bVar14) {
          plVar8[2] = lVar2 + lVar9;
          lVar5 = lVar4;
        }
        UNLOCK();
        lVar4 = lVar5;
      } while (!bVar14);
      if (lVar9 < 1) {
        plVar8 = plVar8 + 1;
        lVar9 = -lVar9;
      }
      LOCK();
      *plVar8 = *plVar8 + lVar9;
      UNLOCK();
      return;
    }
    plVar8[3] = plVar8[3] + lVar9;
    if (plVar8[2] < plVar8[3]) {
      plVar8[2] = plVar8[3];
    }
    if (0 < lVar9) {
      *plVar8 = *plVar8 + lVar9;
      return;
    }
    plVar8[1] = plVar8[1] - lVar9;
  }
  return;
}





// 函数: void FUN_18064d6f0(int64_t param_1,char param_2)
void FUN_18064d6f0(int64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  uVar5 = *(uint64_t *)(param_1 + 0xbd0);
  uVar6 = 0;
  uVar7 = 0x4a;
  if (*(uint64_t *)(param_1 + 0xbd8) < uVar5) {
    *(uint64_t *)(param_1 + 0xbd0) = 0x4a;
    *(uint64_t *)(param_1 + 0xbd8) = 0;
  }
  else {
    do {
      lVar1 = param_1 + uVar5 * 0x18;
      lVar2 = *(int64_t *)(lVar1 + 0x410);
      if ((lVar2 != 0) && (bVar3 = *(byte *)(lVar2 + 0xf), 1 < bVar3)) {
        if (*(int *)(lVar2 + 0x18) == 0) {
          bVar3 = ((bVar3 >> 1) - 1) * '\x02' | bVar3 & 1;
          *(byte *)(lVar2 + 0xf) = bVar3;
          if ((param_2 == '\0') && (1 < bVar3)) {
            uVar4 = uVar5;
            if (uVar7 <= uVar5) {
              uVar4 = uVar7;
            }
            uVar7 = uVar4;
            if (uVar6 < uVar5) {
              uVar6 = uVar5;
            }
          }
          else {
            FUN_18064d590(*(uint64_t *)(lVar1 + 0x410),lVar1 + 0x410,param_2);
          }
        }
        else {
          *(byte *)(lVar2 + 0xf) = bVar3 & 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= *(uint64_t *)(param_1 + 0xbd8));
    *(uint64_t *)(param_1 + 0xbd0) = uVar7;
    *(uint64_t *)(param_1 + 0xbd8) = uVar6;
  }
  return;
}





// 函数: void FUN_18064d7f0(uint64_t param_1,int64_t param_2,int64_t param_3)
void FUN_18064d7f0(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  
  lVar2 = ((int64_t)((param_1 - (param_1 & 0xffffffffffc00000)) + -0x80) / 0x50) * 0x10000 +
          (param_1 & 0xffffffffffc00000);
  plVar4 = (int64_t *)((uint64_t)*(ushort *)(param_1 + 10) * param_2 + lVar2);
  plVar3 = (int64_t *)((param_3 + -1 + (uint64_t)*(ushort *)(param_1 + 10)) * param_2 + lVar2);
  plVar1 = plVar4;
  while (plVar1 <= plVar3) {
    *plVar1 = (int64_t)plVar1 + param_2;
    plVar1 = (int64_t *)((int64_t)plVar1 + param_2);
  }
  *plVar3 = *(int64_t *)(param_1 + 0x10);
  *(int64_t **)(param_1 + 0x10) = plVar4;
  return;
}





// 函数: void FUN_18064d880(uint64_t param_1,uint *param_2)
void FUN_18064d880(uint64_t param_1,uint *param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  short sVar3;
  uint64_t uVar4;
  
  if (*(int64_t *)(param_2 + 4) == 0) {
    if (*(ushort *)((int64_t)param_2 + 10) < (ushort)param_2[3]) {
      uVar2 = (uint64_t)param_2[7];
      if (0x3ffffff < param_2[7]) {
        uVar2 = (uint64_t)*param_2 << 0x10;
      }
      uVar4 = (uint64_t)(ushort)param_2[3] - (uint64_t)*(ushort *)((int64_t)param_2 + 10);
      if (uVar2 < 0x1000) {
        uVar1 = 0x1000 / (uVar2 & 0xffffffff);
      }
      else {
        uVar1 = 1;
      }
      if (uVar1 == 0) {
        uVar1 = 1;
      }
      if ((uVar1 < uVar4) && (uVar4 = uVar1, uVar1 == 0)) {
        uVar4 = 1;
      }
      sVar3 = (short)uVar4;
      FUN_18064d7f0(param_2,uVar2);
      *(short *)((int64_t)param_2 + 10) = *(short *)((int64_t)param_2 + 10) + sVar3;
      if ((param_2[2] & 4) == 0) {
        *(byte *)((int64_t)param_2 + 0xf) = *(byte *)((int64_t)param_2 + 0xf) & 0xfe;
      }
    }
  }
  return;
}



int64_t FUN_18064d910(uint64_t param_1,int64_t *param_2,char param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t *puVar8;
  bool bVar9;
  
  lVar6 = *param_2;
  do {
    lVar3 = lVar6;
    if (lVar3 == 0) {
      FUN_18064d6f0(param_1,0);
      lVar6 = FUN_18064d320(param_1,param_2,param_2[2]);
      if ((lVar6 == 0) && (lVar6 = 0, param_3 != '\0')) {
        lVar6 = FUN_18064d910(param_1,param_2,0);
      }
      return lVar6;
    }
    lVar6 = *(int64_t *)(lVar3 + 0x38);
    if ((*(uint64_t *)(lVar3 + 0x28) & 0xfffffffffffffffc) != 0) {
      uVar4 = *(uint64_t *)(lVar3 + 0x28);
      do {
        puVar8 = (uint64_t *)(uVar4 & 0xfffffffffffffffc);
        LOCK();
        uVar5 = *(uint64_t *)(lVar3 + 0x28);
        bVar9 = uVar4 == uVar5;
        if (bVar9) {
          *(uint64_t *)(lVar3 + 0x28) = (uint64_t)((uint)uVar4 & 3);
          uVar5 = uVar4;
        }
        UNLOCK();
        uVar4 = uVar5;
      } while (!bVar9);
      if (puVar8 != (uint64_t *)0x0) {
        uVar7 = 1;
        puVar1 = puVar8;
        for (puVar2 = (uint64_t *)*puVar8; puVar2 != (uint64_t *)0x0;
            puVar2 = (uint64_t *)*puVar2) {
          if (*(ushort *)(lVar3 + 10) < uVar7) goto LAB_18064d9b7;
          uVar7 = uVar7 + 1;
          puVar1 = puVar2;
        }
        if (*(ushort *)(lVar3 + 10) < uVar7) {
LAB_18064d9b7:
          FUN_1806503d0(0xe,&unknown_var_8816_ptr);
        }
        else {
          *puVar1 = *(uint64_t *)(lVar3 + 0x20);
          *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) - uVar7;
          *(uint64_t **)(lVar3 + 0x20) = puVar8;
        }
      }
    }
    if (*(int64_t *)(lVar3 + 0x20) != 0) {
      if (*(int64_t *)(lVar3 + 0x10) != 0) goto LAB_18064db1a;
      *(byte *)(lVar3 + 0xf) = *(byte *)(lVar3 + 0xf) & 0xfe;
      *(int64_t *)(lVar3 + 0x10) = *(int64_t *)(lVar3 + 0x20);
      *(uint64_t *)(lVar3 + 0x20) = 0;
    }
    if (*(int64_t *)(lVar3 + 0x10) != 0) {
LAB_18064db1a:
      *(byte *)(lVar3 + 0xf) = *(byte *)(lVar3 + 0xf) & 1;
      return lVar3;
    }
    if (*(ushort *)(lVar3 + 10) < *(ushort *)(lVar3 + 0xc)) {
      FUN_18064d880();
      goto LAB_18064db1a;
    }
    if ((*(byte *)(lVar3 + 0xe) & 1) == 0) {
      FUN_18064d170(*(int64_t *)(lVar3 + 0x30) + 0xb00,param_2,lVar3);
      if ((*(uint64_t *)(lVar3 + 0x28) & 0xfffffffffffffffc) != 0) {
        uVar4 = *(uint64_t *)(lVar3 + 0x28);
        do {
          puVar8 = (uint64_t *)(uVar4 & 0xfffffffffffffffc);
          LOCK();
          uVar5 = *(uint64_t *)(lVar3 + 0x28);
          bVar9 = uVar4 == uVar5;
          if (bVar9) {
            *(uint64_t *)(lVar3 + 0x28) = (uint64_t)((uint)uVar4 & 3);
            uVar5 = uVar4;
          }
          UNLOCK();
          uVar4 = uVar5;
        } while (!bVar9);
        if (puVar8 != (uint64_t *)0x0) {
          uVar7 = 1;
          puVar1 = puVar8;
          for (puVar2 = (uint64_t *)*puVar8; puVar2 != (uint64_t *)0x0;
              puVar2 = (uint64_t *)*puVar2) {
            if (*(ushort *)(lVar3 + 10) < uVar7) goto LAB_18064da97;
            uVar7 = uVar7 + 1;
            puVar1 = puVar2;
          }
          if (*(ushort *)(lVar3 + 10) < uVar7) {
LAB_18064da97:
            FUN_1806503d0(0xe,&unknown_var_8816_ptr);
          }
          else {
            *puVar1 = *(uint64_t *)(lVar3 + 0x20);
            *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) - uVar7;
            *(uint64_t **)(lVar3 + 0x20) = puVar8;
          }
        }
      }
      if ((*(int64_t *)(lVar3 + 0x20) != 0) && (*(int64_t *)(lVar3 + 0x10) == 0)) {
        *(byte *)(lVar3 + 0xf) = *(byte *)(lVar3 + 0xf) & 0xfe;
        *(int64_t *)(lVar3 + 0x10) = *(int64_t *)(lVar3 + 0x20);
        *(uint64_t *)(lVar3 + 0x20) = 0;
      }
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064db40(int64_t *param_1,int8_t param_2)
void FUN_18064db40(int64_t *param_1,int8_t param_2)

{
  *(int64_t *)*param_1 = *(int64_t *)*param_1 + 1;
  if ((render_system_config != (code *)0x0) && (*(char *)(*param_1 + 8) == '\0')) {
    *(int8_t *)(*param_1 + 8) = 1;
    (*render_system_config)(param_2,*(uint64_t *)*param_1,render_system_config);
    *(int8_t *)(*param_1 + 8) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * FUN_18064dba0(int64_t *param_1,uint64_t param_2)

{
  byte bVar1;
  uint *puVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  
  if (param_2 < ~render_system_control_config) {
    uVar3 = render_system_control_config - 1;
    param_2 = uVar3 + param_2;
    if ((uVar3 & render_system_control_config) == 0) {
      param_2 = ~uVar3 & param_2;
    }
    else {
      param_2 = param_2 - param_2 % render_system_control_config;
    }
  }
  if (param_2 < 0x200001) {
    bVar1 = func_0x00018064ceb0(param_2);
    plVar4 = param_1 + (uint64_t)bVar1 * 3 + 0x82;
  }
  else {
    plVar4 = (int64_t *)0x0;
  }
  puVar2 = (uint *)FUN_18064d320(param_1,plVar4,param_2);
  if (puVar2 != (uint *)0x0) {
    uVar3 = (uint64_t)puVar2[7];
    if (0x3ffffff < uVar3) {
      uVar3 = (uint64_t)*puVar2 << 0x10;
    }
    if (plVar4 == (int64_t *)0x0) {
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
    }
    if (uVar3 < 0x200001) {
      func_0x000180646ff0(*param_1 + 0x538);
      plVar4 = (int64_t *)(*param_1 + 0x608);
    }
    else {
      func_0x000180646ff0(*param_1 + 0x518);
      plVar4 = (int64_t *)(*param_1 + 0x5f8);
    }
    if (((int64_t *)0x180c8ed7f < plVar4) && (plVar4 < &system_ptr_efc0)) {
      LOCK();
      plVar4[1] = plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *plVar4 = *plVar4 + 1;
      UNLOCK();
      return puVar2;
    }
    plVar4[1] = plVar4[1] + 1;
    *plVar4 = *plVar4 + 1;
  }
  return puVar2;
}



int64_t FUN_18064dce0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  byte bVar2;
  int64_t lVar3;
  
  if (param_2 < 0x4001) {
    bVar2 = func_0x00018064ceb0(param_2);
    lVar3 = param_1 + (uint64_t)bVar2 * 0x18;
    lVar1 = *(int64_t *)(lVar3 + 0x410);
    if (lVar1 != 0) {
      FUN_18064d230(lVar1,0);
      if (*(int64_t *)(lVar1 + 0x10) != 0) {
        *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) & 1;
        return lVar1;
      }
    }
    lVar3 = FUN_18064d910(param_1,lVar3 + 0x410,1);
    return lVar3;
  }
  if (0x7fffffffffffffff < param_2) {
    FUN_1806503d0(0x84,&unknown_var_8848_ptr,param_2,param_4,0xfffffffffffffffe);
    return 0;
  }
  lVar3 = FUN_18064dba0();
  return lVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18064ddd0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if (param_1 == (int64_t *)&unknown_var_7056_ptr) {
    FUN_18064f980();
    param_1 = *(int64_t **)
               (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
               0x10);
    if (param_1 == (int64_t *)&unknown_var_7056_ptr) {
      return (uint64_t *)0x0;
    }
  }
  *(int64_t *)*param_1 = *(int64_t *)*param_1 + 1;
  if ((render_system_config != (code *)0x0) && (*(char *)(*param_1 + 8) == '\0')) {
    *(int8_t *)(*param_1 + 8) = 1;
    (*render_system_config)(0,*(uint64_t *)*param_1,render_system_config,param_4,uVar3);
    *(int8_t *)(*param_1 + 8) = 0;
  }
  FUN_18064d420(param_1);
  lVar1 = FUN_18064dce0(param_1,param_2);
  if (lVar1 == 0) {
    FUN_18064e0d0(param_1,1);
    lVar1 = FUN_18064dce0(param_1,param_2);
    if (lVar1 == 0) {
      FUN_1806503d0(0xc,&unknown_var_8776_ptr,param_2);
      return (uint64_t *)0x0;
    }
  }
  puVar2 = *(uint64_t **)(lVar1 + 0x10);
  if (puVar2 != (uint64_t *)0x0) {
    *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
    *(uint64_t *)(lVar1 + 0x10) = *puVar2;
    return puVar2;
  }
  puVar2 = (uint64_t *)FUN_18064ddd0(param_1,param_2);
  return puVar2;
}



int8_t FUN_18064df10(int64_t param_1,code *param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int8_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  
  if ((param_1 == 0) || (*(int64_t *)(param_1 + 0xbc8) == 0)) {
LAB_18064df95:
    uVar4 = 0;
  }
  else {
    uVar5 = 0;
    plVar6 = (int64_t *)(param_1 + 0x410);
    do {
      lVar2 = *plVar6;
      while (lVar2 != 0) {
        lVar1 = *(int64_t *)(lVar2 + 0x38);
        cVar3 = (*param_2)(param_1,plVar6,lVar2,param_3,0);
        lVar2 = lVar1;
        if (cVar3 == '\0') goto LAB_18064df95;
      }
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 3;
    } while (uVar5 < 0x4b);
    uVar4 = 1;
  }
  return uVar4;
}



uint64_t FUN_18064dfc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int *param_4)

{
  int iVar1;
  int64_t lVar2;
  
  iVar1 = *param_4;
  FUN_18064d230(param_3,0 < iVar1);
  if (*(int *)(param_3 + 0x18) == 0) {
    FUN_18064d590(param_3,param_2,0 < iVar1);
  }
  else if (iVar1 == 2) {
    lVar2 = **(int64_t **)(param_3 + 0x30);
    FUN_18064d090(param_2,param_3);
    *(uint64_t *)(param_3 + 0x30) = 0;
    param_3 = param_3 & 0xffffffffffc00000;
    *(int64_t *)(param_3 + 0x38) = *(int64_t *)(param_3 + 0x38) + 1;
    func_0x000180646ff0(*(int64_t *)(lVar2 + 0x3b8) + 0xe0,1);
    if (*(int64_t *)(param_3 + 0x48) == *(int64_t *)(param_3 + 0x38)) {
      FUN_18064c570(param_3,lVar2 + 0x20);
    }
  }
  return 1;
}



uint64_t FUN_18064e080(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  bool bVar4;
  
  do {
    while( true ) {
      uVar1 = *(uint64_t *)(param_3 + 0x28);
      uVar2 = (uint)uVar1 & 3;
      uVar3 = 0;
      if (uVar2 != 1) break;
      _Thrd_yield();
    }
    if (uVar2 == 3) break;
    LOCK();
    uVar3 = *(uint64_t *)(param_3 + 0x28);
    bVar4 = uVar1 == uVar3;
    if (bVar4) {
      *(uint64_t *)(param_3 + 0x28) = uVar1 | 3;
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (!bVar4);
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064e0d0(int64_t *param_1,int param_2)
void FUN_18064e0d0(int64_t *param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  bool bVar8;
  int aiStackX_10 [2];
  
  if (param_1 == (int64_t *)0x0) {
    return;
  }
  if (param_1 == (int64_t *)&unknown_var_7056_ptr) {
    return;
  }
  aiStackX_10[0] = param_2;
  FUN_18064db40(param_1,0 < param_2);
  if (aiStackX_10[0] == 1) {
    if ((((render_system_control_config != (void **)0x0) && (render_system_control_config != &ExceptionList)) ||
        (lVar3 = *param_1, *(int64_t **)(lVar3 + 0x10) != param_1)) ||
       ((char)param_1[0x17d] != '\0')) goto LAB_18064e189;
    lVar5 = func_0x00018064c400();
    while (lVar5 != 0) {
      FUN_18064c940(lVar5,param_1,0,0,lVar3 + 0x20);
      lVar5 = func_0x00018064c400();
    }
  }
  if (aiStackX_10[0] == 2) {
    FUN_18064df10(param_1,FUN_18064e080,0);
  }
LAB_18064e189:
  FUN_18064d420(param_1);
  FUN_18064d6f0(param_1,0 < aiStackX_10[0]);
  FUN_18064df10(param_1,FUN_18064dfc0,aiStackX_10);
  if (0 < aiStackX_10[0]) {
    lVar3 = *param_1;
    while (lVar5 = *(int64_t *)(lVar3 + 0x3b0), lVar5 != 0) {
      *(int64_t *)(lVar3 + 0x3a0) = *(int64_t *)(lVar3 + 0x3a0) + -1;
      *(uint64_t *)(lVar3 + 0x3b0) = *(uint64_t *)(lVar5 + 0x30);
      *(uint64_t *)(lVar5 + 0x30) = 0;
      lVar4 = *(int64_t *)(lVar3 + 0x3b8);
      if (((void *)(lVar4 + 0x1a0) < &system_ptr_ed80) ||
         ((void *)0x180c8efbf < (void *)(lVar4 + 0x1a0))) {
        *(int64_t *)(lVar4 + 0x1b8) = *(int64_t *)(lVar4 + 0x1b8) + -1;
        if (*(int64_t *)(lVar4 + 0x1b0) < *(int64_t *)(lVar4 + 0x1b8)) {
          *(int64_t *)(lVar4 + 0x1b0) = *(int64_t *)(lVar4 + 0x1b8);
        }
        *(int64_t *)(lVar4 + 0x1a8) = *(int64_t *)(lVar4 + 0x1a8) + 1;
        FUN_18064aeb0(lVar5,lVar3 + 0x20);
      }
      else {
        LOCK();
        plVar1 = (int64_t *)(lVar4 + 0x1b8);
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        lVar6 = *(int64_t *)(lVar4 + 0x1b0);
        do {
          if (lVar2 + -1 <= lVar6) break;
          LOCK();
          lVar7 = *(int64_t *)(lVar4 + 0x1b0);
          bVar8 = lVar6 == lVar7;
          if (bVar8) {
            *(int64_t *)(lVar4 + 0x1b0) = lVar2 + -1;
            lVar7 = lVar6;
          }
          UNLOCK();
          lVar6 = lVar7;
        } while (!bVar8);
        LOCK();
        *(int64_t *)(lVar4 + 0x1a8) = *(int64_t *)(lVar4 + 0x1a8) + 1;
        UNLOCK();
        FUN_18064aeb0(lVar5,lVar3 + 0x20);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064e0f8(uint64_t param_1)
void FUN_18064e0f8(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t *unaff_RBX;
  bool bVar8;
  char in_SF;
  char in_OF;
  int in_stack_00000048;
  
  FUN_18064db40(param_1,in_OF == in_SF);
  if (in_stack_00000048 == 1) {
    if ((((render_system_control_config != (void **)0x0) && (render_system_control_config != &ExceptionList)) ||
        (*(int64_t **)(*unaff_RBX + 0x10) != unaff_RBX)) || ((char)unaff_RBX[0x17d] != '\0'))
    goto LAB_18064e189;
    lVar5 = func_0x00018064c400();
    while (lVar5 != 0) {
      FUN_18064c940(lVar5);
      lVar5 = func_0x00018064c400();
    }
  }
  if (in_stack_00000048 == 2) {
    FUN_18064df10();
  }
LAB_18064e189:
  FUN_18064d420();
  FUN_18064d6f0();
  FUN_18064df10();
  if (0 < in_stack_00000048) {
    lVar5 = *unaff_RBX;
    while (lVar3 = *(int64_t *)(lVar5 + 0x3b0), lVar3 != 0) {
      *(int64_t *)(lVar5 + 0x3a0) = *(int64_t *)(lVar5 + 0x3a0) + -1;
      *(uint64_t *)(lVar5 + 0x3b0) = *(uint64_t *)(lVar3 + 0x30);
      *(uint64_t *)(lVar3 + 0x30) = 0;
      lVar4 = *(int64_t *)(lVar5 + 0x3b8);
      if (((void *)(lVar4 + 0x1a0) < &system_ptr_ed80) ||
         ((void *)0x180c8efbf < (void *)(lVar4 + 0x1a0))) {
        *(int64_t *)(lVar4 + 0x1b8) = *(int64_t *)(lVar4 + 0x1b8) + -1;
        if (*(int64_t *)(lVar4 + 0x1b0) < *(int64_t *)(lVar4 + 0x1b8)) {
          *(int64_t *)(lVar4 + 0x1b0) = *(int64_t *)(lVar4 + 0x1b8);
        }
        *(int64_t *)(lVar4 + 0x1a8) = *(int64_t *)(lVar4 + 0x1a8) + 1;
        FUN_18064aeb0(lVar3,lVar5 + 0x20);
      }
      else {
        LOCK();
        plVar1 = (int64_t *)(lVar4 + 0x1b8);
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        lVar6 = *(int64_t *)(lVar4 + 0x1b0);
        do {
          if (lVar2 + -1 <= lVar6) break;
          LOCK();
          lVar7 = *(int64_t *)(lVar4 + 0x1b0);
          bVar8 = lVar6 == lVar7;
          if (bVar8) {
            *(int64_t *)(lVar4 + 0x1b0) = lVar2 + -1;
            lVar7 = lVar6;
          }
          UNLOCK();
          lVar6 = lVar7;
        } while (!bVar8);
        LOCK();
        *(int64_t *)(lVar4 + 0x1a8) = *(int64_t *)(lVar4 + 0x1a8) + 1;
        UNLOCK();
        FUN_18064aeb0(lVar3,lVar5 + 0x20);
      }
    }
  }
  return;
}





// 函数: void FUN_18064e1ca(void)
void FUN_18064e1ca(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t unaff_RBX;
  uint64_t unaff_RDI;
  bool bVar7;
  
  do {
    while( true ) {
      lVar3 = *(int64_t *)(unaff_RBX + 0x3b0);
      if (lVar3 == 0) {
        return;
      }
      *(int64_t *)(unaff_RBX + 0x3a0) = *(int64_t *)(unaff_RBX + 0x3a0) + -1;
      *(uint64_t *)(unaff_RBX + 0x3b0) = *(uint64_t *)(lVar3 + 0x30);
      *(uint64_t *)(lVar3 + 0x30) = 0;
      lVar4 = *(int64_t *)(unaff_RBX + 0x3b8);
      if ((0x180c8ed7f < lVar4 + 0x1a0U) && (lVar4 + 0x1a0U < unaff_RDI)) break;
      *(int64_t *)(lVar4 + 0x1b8) = *(int64_t *)(lVar4 + 0x1b8) + -1;
      if (*(int64_t *)(lVar4 + 0x1b0) < *(int64_t *)(lVar4 + 0x1b8)) {
        *(int64_t *)(lVar4 + 0x1b0) = *(int64_t *)(lVar4 + 0x1b8);
      }
      *(int64_t *)(lVar4 + 0x1a8) = *(int64_t *)(lVar4 + 0x1a8) + 1;
      FUN_18064aeb0(lVar3,unaff_RBX + 0x20);
    }
    LOCK();
    plVar1 = (int64_t *)(lVar4 + 0x1b8);
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    lVar5 = *(int64_t *)(lVar4 + 0x1b0);
    do {
      if (lVar2 + -1 <= lVar5) break;
      LOCK();
      lVar6 = *(int64_t *)(lVar4 + 0x1b0);
      bVar7 = lVar5 == lVar6;
      if (bVar7) {
        *(int64_t *)(lVar4 + 0x1b0) = lVar2 + -1;
        lVar6 = lVar5;
      }
      UNLOCK();
      lVar5 = lVar6;
    } while (!bVar7);
    LOCK();
    *(int64_t *)(lVar4 + 0x1a8) = *(int64_t *)(lVar4 + 0x1a8) + 1;
    UNLOCK();
    FUN_18064aeb0(lVar3,unaff_RBX + 0x20);
  } while( true );
}





// 函数: void FUN_18064e289(void)
void FUN_18064e289(void)

{
  return;
}





// 函数: void FUN_18064e28e(void)
void FUN_18064e28e(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18064e2a0(void)

{
  FUN_18064f980();
  return *(uint64_t *)
          (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) + 0x10);
}





// 函数: void FUN_18064e2d0(int64_t param_1)
void FUN_18064e2d0(int64_t param_1)

{
                    // WARNING: Subroutine does not return
  memset(param_1 + 8,0,0x408);
}



uint64_t FUN_18064e2fa(int8_t *param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  void *puVar3;
  
  puVar3 = &unknown_var_8096_ptr;
  for (lVar2 = 0x708; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  LOCK();
  uVar1 = *(uint64_t *)(unaff_RBX + 0xb18);
  *(uint64_t *)(unaff_RBX + 0xb18) = 0;
  UNLOCK();
  *(uint64_t *)(unaff_RBX + 0xbc8) = 0;
  return uVar1;
}





// 函数: void FUN_18064e321(uint64_t param_1)
void FUN_18064e321(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  memcpy(param_1,&unknown_var_8096_ptr,0x708);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064e350(int64_t *param_1)
void FUN_18064e350(int64_t *param_1)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  if (((param_1 == (int64_t *)0x0) || (param_1 == (int64_t *)&unknown_var_7056_ptr)) ||
     (lVar5 = *param_1, *(int64_t **)(lVar5 + 0x10) == param_1)) {
    return;
  }
  if (param_1 ==
      *(int64_t **)
       (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) + 0x10)) {
    func_0x00018064fb90();
    lVar5 = *param_1;
  }
  plVar4 = *(int64_t **)(lVar5 + 0x18);
  plVar3 = (int64_t *)0x0;
  while (plVar2 = plVar4, plVar2 != param_1) {
    if (plVar2 == (int64_t *)0x0) goto LAB_18064e3ed;
    plVar3 = plVar2;
    plVar4 = (int64_t *)plVar2[0x17c];
  }
  if (plVar3 != (int64_t *)0x0) {
    plVar3[0x17c] = param_1[0x17c];
    uVar6 = (uint64_t)param_1 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar5 = uVar6 + 0x80 + ((int64_t)param_1 - uVar6 >> 0x10) * 0x50;
      lVar5 = lVar5 - (uint64_t)*(uint *)(lVar5 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar5 + 0xe) == '\0')) {
        *param_1 = *(int64_t *)(lVar5 + 0x20);
        *(int64_t **)(lVar5 + 0x20) = param_1;
        piVar1 = (int *)(lVar5 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            param_1,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  *(int64_t *)(lVar5 + 0x18) = param_1[0x17c];
LAB_18064e3ed:
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



