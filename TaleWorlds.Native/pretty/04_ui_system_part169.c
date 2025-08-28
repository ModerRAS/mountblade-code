// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathTrigonometryFunction */
#define MathTrigonometryFunction MathTrigonometryFunction
// 04_ui_system_part169.c - 4 个函数
// 函数: void SystemCore_69b80(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)
void SystemCore_69b80(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)
{
  *(uint64_t *)(param_1 + 0x198) = param_2;
  *(uint64_t *)(param_1 + 0x188) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x174) = 0;
  *(uint64_t *)(param_1 + 0x1e0) = 0;
  *(uint64_t *)(param_1 + 0x1e8) = 0;
  *(uint64_t *)(param_1 + 0x158) = 0;
  *(uint64_t *)(param_1 + 0x16c) = 0;
  *(int32_t *)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x160) = 0;
  *(uint64_t *)(param_1 + 0x1d8) = 0;
  *(int32_t *)(param_1 + 0x180) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x150) = 0;
  *(int32_t *)(param_1 + 0x164) = param_4;
  *(int32_t *)(param_1 + 0x20) = param_3;
  *(int32_t *)(param_1 + 0x24) = param_3;
  *(int32_t *)(param_1 + 400) = 0;
  *(int32_t *)(param_1 + 0x17c) = 0;
  *(int8_t *)(param_1 + 0x3c) = 0;
  *(int32_t *)(param_1 + 0x40) = 3;
// WARNING: Subroutine does not return
  memset(param_1 + 0x44,0,0x100);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int SystemCore_69c60(int64_t *param_1,int64_t param_2,int param_3,int param_4,int64_t param_5)
{
  uint uVar1;
  code *pcVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  *(uint *)((int64_t)param_1 + 0x194) = *(uint *)((int64_t)param_1 + 0x194) & 0xfffffffb;
  *(int *)(param_1 + 0x2f) = param_4;
  *(uint64_t *)((int64_t)param_1 + 0x16c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x174) = 0;
  *(int32_t *)(param_1 + 0x2d) = 0;
  *(int32_t *)(param_1 + 0x2b) = 0;
  *(int32_t *)(param_1 + 0x2c) = 0;
  *(int32_t *)(param_1 + 0x3b) = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *(uint *)((int64_t)param_1 + 0x194) = *(uint *)((int64_t)param_1 + 0x194) & 0xffffffef;
  *(int *)((int64_t)param_1 + 0x24) = param_3 + param_4;
  param_1[0x2a] = 0;
  *(int *)(param_1 + 4) = param_3;
  if ((param_5 != 0) && (param_1[0x29] == 0)) {
    uVar3 = Function_055df91e(param_5);
    *(int32_t *)(param_1 + 0x2a) = uVar3;
    lVar6 = SystemCore_6b520(param_5);
    param_1[0x29] = lVar6;
  }
  iVar4 = *(int *)((int64_t)param_1 + 0x164);
  *(int *)((int64_t)param_1 + 0x15c) = iVar4;
  if ((iVar4 != 0) && (param_1[0x3c] == 0)) {
    lVar6 = param_1[0x3d];
    lVar7 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar4 + 1,&ui_system_data_1664_ptr,0x6d0,0);
    param_1[0x3d] = lVar7;
    if (lVar7 == 0) {
      return 0x26;
    }
    param_1[0x3c] = lVar7;
    if (lVar6 != 0) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar6,&ui_system_data_1664_ptr,0x6df,1);
    }
  }
  iVar4 = (**(code **)(*param_1 + 0x20))(param_1,param_2,(int64_t)param_1 + 0x24);
  if (iVar4 == 0) {
    if ((param_2 != 0) && ((*(uint *)((int64_t)param_1 + 0x194) & 2) != 0)) {
      Function_30e71e27((int64_t)param_1 + 0x44,param_2,0x100);
    }
    if ((param_1[0x33] != 0) &&
       (pcVar2 = *(code **)(param_1[0x33] + 0x11818), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_2,(int64_t)param_1 + 0x24,param_1 + 6,param_1 + 5);
    }
    uVar1 = *(uint *)((int64_t)param_1 + 0x24);
    uVar5 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 4) == 0) {
      *(uint *)(param_1 + 4) = uVar1;
      uVar5 = uVar1;
    }
    if (uVar1 < uVar5 + (int)param_1[0x2f]) {
      *(uint *)(param_1 + 4) = uVar1 - (int)param_1[0x2f];
    }
    iVar4 = 0;
  }
  else {
    if (param_1[0x29] != 0) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0x29],&ui_system_data_1664_ptr,0x1be,1);
    }
    if (param_1[0x3d] != 0) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0x3d],&ui_system_data_1664_ptr,0x1c4,1);
    }
  }
  return iVar4;
}
uint64_t SystemPerformanceOptimizer(int64_t *param_1,uint *param_2,uint param_3,int param_4,uint *param_5)
{
  int64_t *plVar1;
  code *pcVar2;
  bool bVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint *puVar7;
  int iVar8;
  uint64_t uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint astack_special_x_18 [2];
  uVar6 = 0;
  bVar3 = false;
  if ((param_2 == (uint *)0x0) || (uVar5 = param_3 * param_4, (int)uVar5 < 0)) {
    return 0x1f;
  }
  iVar8 = (int)param_1[4];
  *(int8_t *)((int64_t)param_1 + 0x3c) = 0;
  uVar4 = uVar6;
  if (iVar8 != -1) {
    uVar12 = *(uint *)((int64_t)param_1 + 0x16c);
    uVar11 = (int)param_1[0x2f] + iVar8;
    if (uVar11 < uVar5 + uVar12) {
      if (uVar11 < uVar12) {
        return 0xd;
      }
      bVar3 = true;
      uVar5 = ((int)param_1[0x2f] - uVar12) + iVar8;
    }
  }
  do {
    uVar12 = (uint)uVar4;
    if (uVar5 == 0) {
LAB_18076a1af:
      if (param_3 == 2) {
        if (((*(uint *)((int64_t)param_1 + 0x194) & 4) != 0) && (uVar12 >> 1 != 0)) {
          uVar9 = (uint64_t)(uVar12 >> 1);
          puVar7 = param_2;
          do {
            *(ushort *)puVar7 = (ushort)*puVar7 << 8 | (ushort)*puVar7 >> 8;
            uVar9 = uVar9 - 1;
            puVar7 = (uint *)((int64_t)puVar7 + 2);
          } while (uVar9 != 0);
        }
      }
      else if (((param_3 == 4) && ((*(uint *)((int64_t)param_1 + 0x194) & 4) != 0)) &&
              (uVar9 = uVar4 >> 2, puVar7 = param_2, (int)uVar9 != 0)) {
        do {
          uVar5 = *puVar7;
          *puVar7 = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 | (uVar5 << 0x10 | uVar5 & 0xff00) << 8;
          uVar9 = uVar9 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar9 != 0);
      }
      if (((int)param_1[0x2a] != 0) && (uVar9 = uVar4, uVar12 != 0)) {
        do {
          bVar10 = (byte)*param_2;
          bVar10 = (byte)((byte)((byte)(bVar10 & 0x40 | bVar10 >> 2) >> 2 | bVar10 & 0x20) >> 2 |
                         bVar10 & 0x10) >> 1 |
                   (((bVar10 & 2 | bVar10 << 2) << 2 | bVar10 & 4) << 2 | bVar10 & 8) * '\x02';
          *(byte *)param_2 = bVar10;
          *(byte *)param_2 =
               *(byte *)((int64_t)*(int *)((int64_t)param_1 + 0x154) + param_1[0x29]) ^ bVar10;
          *(int *)((int64_t)param_1 + 0x154) = *(int *)((int64_t)param_1 + 0x154) + 1;
          iVar8 = *(int *)((int64_t)param_1 + 0x154);
          if ((int)param_1[0x2a] <= *(int *)((int64_t)param_1 + 0x154)) {
            iVar8 = 0;
          }
          *(int *)((int64_t)param_1 + 0x154) = iVar8;
          uVar9 = uVar9 - 1;
          param_2 = (uint *)((int64_t)param_2 + 1);
        } while (uVar9 != 0);
      }
      if (param_3 != 0) {
        uVar12 = (uint)(uVar4 / param_3);
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar12;
      }
      if (((int)uVar6 == 0) && (bVar3)) {
        uVar6 = 0x10;
      }
      return uVar6;
    }
    astack_special_x_18[0] = uVar5;
    if ((((*(uint *)((int64_t)param_1 + 0x164) != *(uint *)((int64_t)param_1 + 0x15c)) ||
         (uVar5 <= *(uint *)((int64_t)param_1 + 0x164))) || ((int)param_1[0x2b] != 0)) ||
       ((*(uint *)((int64_t)param_1 + 0x194) & 1) == 0)) {
      uVar5 = SystemCore_68d60(param_1);
      uVar6 = (uint64_t)uVar5;
      if (uVar5 == 0x10) {
        if ((*(int *)((int64_t)param_1 + 0x164) == *(int *)((int64_t)param_1 + 0x15c)) &&
           ((int)param_1[4] == -1)) goto LAB_18076a1af;
      }
      else if (uVar5 != 0) goto LAB_18076a1af;
      uVar5 = *(uint *)((int64_t)param_1 + 0x164) -
              *(uint *)(param_1 + 0x2b) % *(uint *)((int64_t)param_1 + 0x164);
      if (uVar5 < astack_special_x_18[0]) {
        astack_special_x_18[0] = uVar5;
      }
// WARNING: Subroutine does not return
      memcpy((byte *)(uVar4 + (int64_t)param_2),
             (uint64_t)*(uint *)(param_1 + 0x2b) + param_1[0x3c],astack_special_x_18[0]);
    }
    if (*(int *)((int64_t)param_1 + 0x164) != 0) {
      if ((*(int *)((int64_t)param_1 + 0x16c) != (int)param_1[0x2e]) &&
         (uVar6 = SystemCore_6a5d0(param_1), (int)uVar6 != 0)) {
        return uVar6;
      }
      astack_special_x_18[0] =
           (astack_special_x_18[0] / *(uint *)((int64_t)param_1 + 0x164)) *
           *(uint *)((int64_t)param_1 + 0x164);
    }
    *(int *)(param_1 + 0x35) = (int)param_1[0x2e];
    *(int32_t *)(param_1 + 0x39) = 0;
    param_1[0x38] = (int64_t)(uVar4 + (int64_t)param_2);
    param_1[0x34] = (int64_t)param_1;
    *(uint *)((int64_t)param_1 + 0x1ac) = astack_special_x_18[0];
    *(uint *)(param_1 + 0x36) = -(uint)((*(uint *)((int64_t)param_1 + 0x194) & 0x100) != 0) & 100;
    if ((param_1[0x33] != 0) && ((int)param_1[8] != 3)) {
      LOCK();
      plVar1 = (int64_t *)(param_1[0x33] + 0x115f0 + (int64_t)(int)param_1[8] * 8);
      *plVar1 = *plVar1 + (int64_t)(int)astack_special_x_18[0];
      UNLOCK();
    }
    uVar11 = (**(code **)(*param_1 + 0x48))(param_1,param_1 + 0x34,astack_special_x_18,1);
    uVar6 = (uint64_t)uVar11;
    *(int32_t *)(param_1 + 0x39) = 0;
    *(uint *)((int64_t)param_1 + 0x194) = *(uint *)((int64_t)param_1 + 0x194) & 0xfffffff7;
    if ((param_1[0x33] != 0) &&
       (pcVar2 = *(code **)(param_1[0x33] + 0x11828), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1[6],(byte *)(uVar4 + (int64_t)param_2),astack_special_x_18[0],0,param_1[5]);
    }
    if ((uVar11 & 0xffffffef) != 0) {
      return uVar6;
    }
    *(int *)((int64_t)param_1 + 0x174) = (int)param_1[0x2e];
    *(uint *)(param_1 + 0x2e) = (int)param_1[0x2e] + astack_special_x_18[0];
    if (astack_special_x_18[0] == 0) {
      uVar6 = 0x10;
      goto LAB_18076a1af;
    }
    if (uVar11 == 0x10) goto LAB_18076a1af;
    *(int *)((int64_t)param_1 + 0x16c) = *(int *)((int64_t)param_1 + 0x16c) + astack_special_x_18[0];
    uVar5 = uVar5 - astack_special_x_18[0];
    uVar4 = (uint64_t)(uVar12 + astack_special_x_18[0]);
  } while( true );
}
uint64_t SystemCore_69f12(int64_t param_1,int param_2)
{
  int64_t *plVar1;
  code *pcVar2;
  uint in_EAX;
  uint64_t uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int64_t *unaff_RBX;
  byte *pbVar7;
  uint unaff_EDI;
  byte bVar8;
  uint uVar9;
  int in_R10D;
  uint unaff_R12D;
  char unaff_R13B;
  uint64_t unaff_R14;
  uint *unaff_R15;
  uint local_buffer_70;
  uint *local_var_80;
  *(char *)(param_1 + 0x3c) = (char)unaff_EDI;
  if (param_2 != -1) {
    uVar4 = *(uint *)((int64_t)unaff_RBX + 0x16c);
    uVar9 = *(int *)(param_1 + 0x178) + param_2;
    if (uVar9 < in_EAX + uVar4) {
      if (uVar9 < uVar4) {
        return 0xd;
      }
      unaff_R13B = '\x01';
      in_EAX = (*(int *)(param_1 + 0x178) - uVar4) + param_2;
    }
  }
  if (in_EAX != 0) {
    do {
      local_buffer_70 = in_EAX;
      if ((((*(uint *)((int64_t)unaff_RBX + 0x164) != *(uint *)((int64_t)unaff_RBX + 0x15c)) ||
           (in_EAX <= *(uint *)((int64_t)unaff_RBX + 0x164))) || ((int)unaff_RBX[0x2b] != 0)) ||
         ((*(uint *)((int64_t)unaff_RBX + 0x194) & 1) == 0)) {
        unaff_EDI = SystemCore_68d60();
        if (unaff_EDI == 0x10) {
          if ((*(int *)((int64_t)unaff_RBX + 0x164) == *(int *)((int64_t)unaff_RBX + 0x15c)) &&
             ((int)unaff_RBX[4] == -1)) break;
        }
        else if (unaff_EDI != 0) break;
        uVar4 = *(uint *)((int64_t)unaff_RBX + 0x164) -
                *(uint *)(unaff_RBX + 0x2b) % *(uint *)((int64_t)unaff_RBX + 0x164);
        if (uVar4 < local_buffer_70) {
          local_buffer_70 = uVar4;
        }
// WARNING: Subroutine does not return
        memcpy((byte *)((unaff_R14 & 0xffffffff) + (int64_t)unaff_R15),
               (uint64_t)*(uint *)(unaff_RBX + 0x2b) + unaff_RBX[0x3c],local_buffer_70);
      }
      if (*(int *)((int64_t)unaff_RBX + 0x164) != 0) {
        if (*(int *)((int64_t)unaff_RBX + 0x16c) != (int)unaff_RBX[0x2e]) {
          uVar3 = SystemCore_6a5d0();
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          in_R10D = 0;
        }
        local_buffer_70 =
             (local_buffer_70 / *(uint *)((int64_t)unaff_RBX + 0x164)) *
             *(uint *)((int64_t)unaff_RBX + 0x164);
      }
      *(int *)(unaff_RBX + 0x35) = (int)unaff_RBX[0x2e];
      pbVar7 = (byte *)((unaff_R14 & 0xffffffff) + (int64_t)unaff_R15);
      *(int *)(unaff_RBX + 0x39) = in_R10D;
      unaff_RBX[0x38] = (int64_t)pbVar7;
      unaff_RBX[0x34] = (int64_t)unaff_RBX;
      *(uint *)((int64_t)unaff_RBX + 0x1ac) = local_buffer_70;
      *(uint *)(unaff_RBX + 0x36) =
           -(uint)((*(uint *)((int64_t)unaff_RBX + 0x194) & 0x100) != 0) & 100;
      if ((unaff_RBX[0x33] != 0) && ((int)unaff_RBX[8] != 3)) {
        LOCK();
        plVar1 = (int64_t *)(unaff_RBX[0x33] + 0x115f0 + (int64_t)(int)unaff_RBX[8] * 8);
        *plVar1 = *plVar1 + (int64_t)(int)local_buffer_70;
        UNLOCK();
      }
      unaff_EDI = (**(code **)(*unaff_RBX + 0x48))();
      *(int32_t *)(unaff_RBX + 0x39) = 0;
      *(uint *)((int64_t)unaff_RBX + 0x194) = *(uint *)((int64_t)unaff_RBX + 0x194) & 0xfffffff7;
      if ((unaff_RBX[0x33] != 0) &&
         (pcVar2 = *(code **)(unaff_RBX[0x33] + 0x11828), pcVar2 != (code *)0x0)) {
        (*pcVar2)(unaff_RBX[6],pbVar7,local_buffer_70,0,unaff_RBX[5]);
      }
      if ((unaff_EDI & 0xffffffef) != 0) goto LAB_18076a329;
      in_R10D = 0;
      *(int *)((int64_t)unaff_RBX + 0x174) = (int)unaff_RBX[0x2e];
      *(uint *)(unaff_RBX + 0x2e) = (int)unaff_RBX[0x2e] + local_buffer_70;
      if (local_buffer_70 == 0) {
        unaff_EDI = 0x10;
        goto LAB_18076a1af;
      }
      if (unaff_EDI == 0x10) break;
      *(int *)((int64_t)unaff_RBX + 0x16c) =
           *(int *)((int64_t)unaff_RBX + 0x16c) + local_buffer_70;
      unaff_R14 = (uint64_t)((int)unaff_R14 + local_buffer_70);
      in_EAX = in_EAX - local_buffer_70;
    } while (in_EAX != 0);
    in_R10D = 0;
  }
LAB_18076a1af:
  uVar4 = (uint)unaff_R14;
  if (unaff_R12D == 2) {
    if (((*(uint *)((int64_t)unaff_RBX + 0x194) & 4) != 0) && (uVar4 >> 1 != 0)) {
      uVar3 = (uint64_t)(uVar4 >> 1);
      puVar5 = unaff_R15;
      do {
        *(ushort *)puVar5 = (ushort)*puVar5 << 8 | (ushort)*puVar5 >> 8;
        uVar3 = uVar3 - 1;
        puVar5 = (uint *)((int64_t)puVar5 + 2);
      } while (uVar3 != 0);
    }
  }
  else if (((unaff_R12D == 4) && ((*(uint *)((int64_t)unaff_RBX + 0x194) & 4) != 0)) &&
          (uVar3 = unaff_R14 >> 2 & 0x3fffffff, puVar5 = unaff_R15, (int)uVar3 != 0)) {
    do {
      uVar9 = *puVar5;
      *puVar5 = (uVar9 & 0xff0000 | uVar9 >> 0x10) >> 8 | (uVar9 << 0x10 | uVar9 & 0xff00) << 8;
      uVar3 = uVar3 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar3 != 0);
  }
  if (((int)unaff_RBX[0x2a] != 0) && (uVar4 != 0)) {
    uVar3 = unaff_R14 & 0xffffffff;
    do {
      bVar8 = (byte)*unaff_R15;
      bVar8 = (byte)((byte)((byte)(bVar8 & 0x40 | bVar8 >> 2) >> 2 | bVar8 & 0x20) >> 2 |
                    bVar8 & 0x10) >> 1 |
              (((bVar8 & 2 | bVar8 << 2) << 2 | bVar8 & 4) << 2 | bVar8 & 8) * '\x02';
      *(byte *)unaff_R15 = bVar8;
      *(byte *)unaff_R15 =
           *(byte *)((int64_t)*(int *)((int64_t)unaff_RBX + 0x154) + unaff_RBX[0x29]) ^ bVar8;
      *(int *)((int64_t)unaff_RBX + 0x154) = *(int *)((int64_t)unaff_RBX + 0x154) + 1;
      iVar6 = *(int *)((int64_t)unaff_RBX + 0x154);
      if ((int)unaff_RBX[0x2a] <= *(int *)((int64_t)unaff_RBX + 0x154)) {
        iVar6 = in_R10D;
      }
      *(int *)((int64_t)unaff_RBX + 0x154) = iVar6;
      uVar3 = uVar3 - 1;
      unaff_R15 = (uint *)((int64_t)unaff_R15 + 1);
    } while (uVar3 != 0);
  }
  if (unaff_R12D != 0) {
    uVar4 = (uint)((unaff_R14 & 0xffffffff) / (uint64_t)unaff_R12D);
  }
  if (local_var_80 != (uint *)0x0) {
    *local_var_80 = uVar4;
  }
  if ((unaff_EDI == 0) && (unaff_EDI = 0, unaff_R13B != '\0')) {
    unaff_EDI = 0x10;
  }
LAB_18076a329:
  return (uint64_t)unaff_EDI;
}
uint64_t SystemCore_69f55(void)
{
  int64_t *plVar1;
  uint uVar2;
  code *pcVar3;
  uint64_t uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int64_t *unaff_RBX;
  uint unaff_EBP;
  byte *pbVar8;
  uint unaff_EDI;
  byte bVar9;
  int in_R10D;
  uint unaff_R12D;
  char unaff_R13B;
  uint64_t unaff_R14;
  uint *unaff_R15;
  uint local_buffer_70;
  uint *local_var_80;
  if (unaff_EBP != 0) {
    do {
      local_buffer_70 = unaff_EBP;
      if ((((*(uint *)((int64_t)unaff_RBX + 0x164) != *(uint *)((int64_t)unaff_RBX + 0x15c)) ||
           (unaff_EBP <= *(uint *)((int64_t)unaff_RBX + 0x164))) || ((int)unaff_RBX[0x2b] != 0)) ||
         ((*(uint *)((int64_t)unaff_RBX + 0x194) & 1) == 0)) {
        unaff_EDI = SystemCore_68d60();
        if (unaff_EDI == 0x10) {
          if ((*(int *)((int64_t)unaff_RBX + 0x164) == *(int *)((int64_t)unaff_RBX + 0x15c)) &&
             ((int)unaff_RBX[4] == -1)) break;
        }
        else if (unaff_EDI != 0) break;
        uVar5 = *(uint *)((int64_t)unaff_RBX + 0x164) -
                *(uint *)(unaff_RBX + 0x2b) % *(uint *)((int64_t)unaff_RBX + 0x164);
        if (uVar5 < local_buffer_70) {
          local_buffer_70 = uVar5;
        }
// WARNING: Subroutine does not return
        memcpy((byte *)((unaff_R14 & 0xffffffff) + (int64_t)unaff_R15),
               (uint64_t)*(uint *)(unaff_RBX + 0x2b) + unaff_RBX[0x3c],local_buffer_70);
      }
      if (*(int *)((int64_t)unaff_RBX + 0x164) != 0) {
        if (*(int *)((int64_t)unaff_RBX + 0x16c) != (int)unaff_RBX[0x2e]) {
          uVar4 = SystemCore_6a5d0();
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          in_R10D = 0;
        }
        local_buffer_70 =
             (local_buffer_70 / *(uint *)((int64_t)unaff_RBX + 0x164)) *
             *(uint *)((int64_t)unaff_RBX + 0x164);
      }
      *(int *)(unaff_RBX + 0x35) = (int)unaff_RBX[0x2e];
      pbVar8 = (byte *)((unaff_R14 & 0xffffffff) + (int64_t)unaff_R15);
      *(int *)(unaff_RBX + 0x39) = in_R10D;
      unaff_RBX[0x38] = (int64_t)pbVar8;
      unaff_RBX[0x34] = (int64_t)unaff_RBX;
      *(uint *)((int64_t)unaff_RBX + 0x1ac) = local_buffer_70;
      *(uint *)(unaff_RBX + 0x36) =
           -(uint)((*(uint *)((int64_t)unaff_RBX + 0x194) & 0x100) != 0) & 100;
      if ((unaff_RBX[0x33] != 0) && ((int)unaff_RBX[8] != 3)) {
        LOCK();
        plVar1 = (int64_t *)(unaff_RBX[0x33] + 0x115f0 + (int64_t)(int)unaff_RBX[8] * 8);
        *plVar1 = *plVar1 + (int64_t)(int)local_buffer_70;
        UNLOCK();
      }
      unaff_EDI = (**(code **)(*unaff_RBX + 0x48))();
      *(int32_t *)(unaff_RBX + 0x39) = 0;
      *(uint *)((int64_t)unaff_RBX + 0x194) = *(uint *)((int64_t)unaff_RBX + 0x194) & 0xfffffff7;
      if ((unaff_RBX[0x33] != 0) &&
         (pcVar3 = *(code **)(unaff_RBX[0x33] + 0x11828), pcVar3 != (code *)0x0)) {
        (*pcVar3)(unaff_RBX[6],pbVar8,local_buffer_70,0,unaff_RBX[5]);
      }
      if ((unaff_EDI & 0xffffffef) != 0) goto LAB_18076a329;
      in_R10D = 0;
      *(int *)((int64_t)unaff_RBX + 0x174) = (int)unaff_RBX[0x2e];
      *(uint *)(unaff_RBX + 0x2e) = (int)unaff_RBX[0x2e] + local_buffer_70;
      if (local_buffer_70 == 0) {
        unaff_EDI = 0x10;
        goto LAB_18076a1af;
      }
      if (unaff_EDI == 0x10) break;
      *(int *)((int64_t)unaff_RBX + 0x16c) =
           *(int *)((int64_t)unaff_RBX + 0x16c) + local_buffer_70;
      unaff_R14 = (uint64_t)((int)unaff_R14 + local_buffer_70);
      unaff_EBP = unaff_EBP - local_buffer_70;
    } while (unaff_EBP != 0);
    in_R10D = 0;
  }
LAB_18076a1af:
  uVar5 = (uint)unaff_R14;
  if (unaff_R12D == 2) {
    if (((*(uint *)((int64_t)unaff_RBX + 0x194) & 4) != 0) && (uVar5 >> 1 != 0)) {
      uVar4 = (uint64_t)(uVar5 >> 1);
      puVar6 = unaff_R15;
      do {
        *(ushort *)puVar6 = (ushort)*puVar6 << 8 | (ushort)*puVar6 >> 8;
        uVar4 = uVar4 - 1;
        puVar6 = (uint *)((int64_t)puVar6 + 2);
      } while (uVar4 != 0);
    }
  }
  else if (((unaff_R12D == 4) && ((*(uint *)((int64_t)unaff_RBX + 0x194) & 4) != 0)) &&
          (uVar4 = unaff_R14 >> 2 & 0x3fffffff, puVar6 = unaff_R15, (int)uVar4 != 0)) {
    do {
      uVar2 = *puVar6;
      *puVar6 = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
      uVar4 = uVar4 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 != 0);
  }
  if (((int)unaff_RBX[0x2a] != 0) && (uVar5 != 0)) {
    uVar4 = unaff_R14 & 0xffffffff;
    do {
      bVar9 = (byte)*unaff_R15;
      bVar9 = (byte)((byte)((byte)(bVar9 & 0x40 | bVar9 >> 2) >> 2 | bVar9 & 0x20) >> 2 |
                    bVar9 & 0x10) >> 1 |
              (((bVar9 & 2 | bVar9 << 2) << 2 | bVar9 & 4) << 2 | bVar9 & 8) * '\x02';
      *(byte *)unaff_R15 = bVar9;
      *(byte *)unaff_R15 =
           *(byte *)((int64_t)*(int *)((int64_t)unaff_RBX + 0x154) + unaff_RBX[0x29]) ^ bVar9;
      *(int *)((int64_t)unaff_RBX + 0x154) = *(int *)((int64_t)unaff_RBX + 0x154) + 1;
      iVar7 = *(int *)((int64_t)unaff_RBX + 0x154);
      if ((int)unaff_RBX[0x2a] <= *(int *)((int64_t)unaff_RBX + 0x154)) {
        iVar7 = in_R10D;
      }
      *(int *)((int64_t)unaff_RBX + 0x154) = iVar7;
      uVar4 = uVar4 - 1;
      unaff_R15 = (uint *)((int64_t)unaff_R15 + 1);
    } while (uVar4 != 0);
  }
  if (unaff_R12D != 0) {
    uVar5 = (uint)((unaff_R14 & 0xffffffff) / (uint64_t)unaff_R12D);
  }
  if (local_var_80 != (uint *)0x0) {
    *local_var_80 = uVar5;
  }
  if ((unaff_EDI == 0) && (unaff_EDI = 0, unaff_R13B != '\0')) {
    unaff_EDI = 0x10;
  }
LAB_18076a329:
  return (uint64_t)unaff_EDI;
}
uint64_t SystemCore_6a0f0(void)
{
  return 0xd;
}
int SystemCore_6a0fa(void)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t unaff_RBX;
  byte bVar7;
  uint unaff_R12D;
  char unaff_R13B;
  uint64_t unaff_R14;
  uint *unaff_R15;
  uint local_var_70;
  uint *local_var_80;
  uVar3 = (uint)unaff_R14;
  iVar2 = SystemCore_68d60();
  if (iVar2 == 0x10) {
    if ((*(int *)(unaff_RBX + 0x164) == *(int *)(unaff_RBX + 0x15c)) &&
       (*(int *)(unaff_RBX + 0x20) == -1)) {
LAB_18076a1a6:
      if (unaff_R12D == 2) {
        if (((*(uint *)(unaff_RBX + 0x194) & 4) != 0) && (uVar3 >> 1 != 0)) {
          uVar6 = (uint64_t)(uVar3 >> 1);
          puVar4 = unaff_R15;
          do {
            *(ushort *)puVar4 = (ushort)*puVar4 << 8 | (ushort)*puVar4 >> 8;
            uVar6 = uVar6 - 1;
            puVar4 = (uint *)((int64_t)puVar4 + 2);
          } while (uVar6 != 0);
        }
      }
      else if (((unaff_R12D == 4) && ((*(uint *)(unaff_RBX + 0x194) & 4) != 0)) &&
              (uVar6 = unaff_R14 >> 2 & 0x3fffffff, puVar4 = unaff_R15, (int)uVar6 != 0)) {
        do {
          uVar1 = *puVar4;
          *puVar4 = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
          uVar6 = uVar6 - 1;
          puVar4 = puVar4 + 1;
        } while (uVar6 != 0);
      }
      if ((*(int *)(unaff_RBX + 0x150) != 0) && (uVar3 != 0)) {
        uVar6 = unaff_R14 & 0xffffffff;
        do {
          bVar7 = (byte)*unaff_R15;
          bVar7 = (byte)((byte)((byte)(bVar7 & 0x40 | bVar7 >> 2) >> 2 | bVar7 & 0x20) >> 2 |
                        bVar7 & 0x10) >> 1 |
                  (((bVar7 & 2 | bVar7 << 2) << 2 | bVar7 & 4) << 2 | bVar7 & 8) * '\x02';
          *(byte *)unaff_R15 = bVar7;
          *(byte *)unaff_R15 =
               *(byte *)((int64_t)*(int *)(unaff_RBX + 0x154) + *(int64_t *)(unaff_RBX + 0x148)) ^
               bVar7;
          *(int *)(unaff_RBX + 0x154) = *(int *)(unaff_RBX + 0x154) + 1;
          iVar5 = *(int *)(unaff_RBX + 0x154);
          if (*(int *)(unaff_RBX + 0x150) <= *(int *)(unaff_RBX + 0x154)) {
            iVar5 = 0;
          }
          *(int *)(unaff_RBX + 0x154) = iVar5;
          uVar6 = uVar6 - 1;
          unaff_R15 = (uint *)((int64_t)unaff_R15 + 1);
        } while (uVar6 != 0);
      }
      if (unaff_R12D != 0) {
        uVar3 = (uint)((unaff_R14 & 0xffffffff) / (uint64_t)unaff_R12D);
      }
      if (local_var_80 != (uint *)0x0) {
        *local_var_80 = uVar3;
      }
      if ((iVar2 == 0) && (unaff_R13B != '\0')) {
        iVar2 = 0x10;
      }
      return iVar2;
    }
  }
  else if (iVar2 != 0) goto LAB_18076a1a6;
  uVar3 = *(uint *)(unaff_RBX + 0x164) - *(uint *)(unaff_RBX + 0x158) % *(uint *)(unaff_RBX + 0x164)
  ;
  if (uVar3 < local_var_70) {
    local_var_70 = uVar3;
  }
// WARNING: Subroutine does not return
  memcpy((byte *)((unaff_R14 & 0xffffffff) + (int64_t)unaff_R15),
         (uint64_t)*(uint *)(unaff_RBX + 0x158) + *(int64_t *)(unaff_RBX + 0x1e0),
         local_var_70);
}
// 函数: void SystemCore_6a330(void)
void SystemCore_6a330(void)
{
  return;
}
uint64_t SystemCore_6a348(void)
{
  return 0x1f;
}
// 函数: void SystemCore_6a370(int64_t *param_1,int64_t param_2,int32_t *param_3)
void SystemCore_6a370(int64_t *param_1,int64_t param_2,int32_t *param_3)
{
  (**(code **)(*param_1 + 0x30))
            (param_1,*(uint64_t *)(param_2 + 0x20),*(int32_t *)(param_2 + 0xc),
             (int32_t *)(param_2 + 0x28));
  *param_3 = *(int32_t *)(param_2 + 0x28);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_6a3b0(int64_t *param_1)
void SystemCore_6a3b0(int64_t *param_1)
{
  *(int64_t *)param_1[1] = *param_1;
  *(int64_t *)(*param_1 + 8) = param_1[1];
  param_1[1] = (int64_t)param_1;
  *param_1 = (int64_t)param_1;
  *(int8_t *)(param_1 + 0x2d) = 0;
  SystemCore_67ad0(param_1 + 3);
  if (*(char *)((int64_t)param_1 + 0x1a4) == '\0') {
    *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x40) = 0;
  }
  if (param_1[0x33] != 0) {
    SystemCore_DataHandler(param_1[0x33],0);
  }
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&ui_system_data_1664_ptr,0xd5,1);
}
int32_t MathTrigonometryFunction0(int64_t *param_1,int param_2,uint param_3)
{
  uint uVar1;
  code *pcVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uVar5 = 0;
  if (2 < param_3) {
    return 0x1f;
  }
  *(int8_t *)((int64_t)param_1 + 0x3c) = 0;
  if (param_3 == 0) {
    iVar4 = (int)param_1[0x2f];
  }
  else if (param_3 == 1) {
    iVar4 = *(int *)((int64_t)param_1 + 0x16c);
  }
  else {
    if (param_3 != 2) goto LAB_18076a49f;
    iVar4 = (int)param_1[0x2f] + (int)param_1[4];
  }
  uVar5 = iVar4 + param_2;
LAB_18076a49f:
  if ((((int)param_1[4] != -1) && (uVar6 = (int)param_1[0x2f] + (int)param_1[4], uVar6 < uVar5)) &&
     (uVar5 = 0, -1 < param_2)) {
    uVar5 = uVar6;
  }
  if ((((int)param_1[0x2e] == 0) && ((*(uint *)((int64_t)param_1 + 0x194) & 1) == 0)) &&
     (*(uint *)((int64_t)param_1 + 0x164) <= uVar5)) {
    return 0xe;
  }
  if ((*(int *)((int64_t)param_1 + 0x164) == *(int *)((int64_t)param_1 + 0x15c)) &&
     ((*(uint *)((int64_t)param_1 + 0x194) & 1) == 0)) {
    uVar6 = *(uint *)(param_1 + 0x2e);
    uVar1 = *(uint *)((int64_t)param_1 + 0x164);
    if (uVar1 <= uVar6) {
      if ((uVar6 != 0) && (uVar5 < uVar6 - uVar1)) {
        return 0xe;
      }
      if (uVar1 + uVar6 <= uVar5) {
        return 0xe;
      }
    }
  }
  *(uint *)((int64_t)param_1 + 0x16c) = uVar5;
  if (*(uint *)(param_1 + 0x2a) != 0) {
    *(uint *)((int64_t)param_1 + 0x154) = (uVar5 - (int)param_1[0x2f]) % *(uint *)(param_1 + 0x2a);
  }
  if (*(uint *)((int64_t)param_1 + 0x15c) == 0) {
    *(uint *)(param_1 + 0x2e) = uVar5;
    *(uint *)((int64_t)param_1 + 0x174) = uVar5;
    uVar3 = (**(code **)(*param_1 + 0x38))(param_1,uVar5);
    if ((param_1[0x33] != 0) &&
       (pcVar2 = *(code **)(param_1[0x33] + 0x11830), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1[6],uVar5,param_1[5]);
    }
    return uVar3;
  }
  *(uint *)(param_1 + 0x2b) = uVar5 % *(uint *)((int64_t)param_1 + 0x15c);
  return 0;
}
int32_t SystemCore_6a5d0(int64_t *param_1)
{
  code *pcVar1;
  int32_t uVar2;
  uint uVar3;
  int iVar4;
  if ((*(uint *)((int64_t)param_1 + 0x194) & 8) != 0) {
    iVar4 = (int)param_1[0x32];
    while (iVar4 != 0) {
      UIComponent_EventHandler(10);
      iVar4 = (int)param_1[0x32];
    }
  }
  uVar3 = *(uint *)((int64_t)param_1 + 0x16c) % *(uint *)((int64_t)param_1 + 0x15c);
  *(int32_t *)(param_1 + 0x2d) = 0;
  iVar4 = *(uint *)((int64_t)param_1 + 0x16c) - uVar3;
  *(int32_t *)(param_1 + 0x2c) = 0;
  *(int32_t *)(param_1 + 0x3b) = 0;
  *(uint *)(param_1 + 0x2b) = uVar3;
  *(int *)(param_1 + 0x2e) = iVar4;
  *(int *)((int64_t)param_1 + 0x174) = iVar4;
  *(uint *)((int64_t)param_1 + 0x194) = *(uint *)((int64_t)param_1 + 0x194) & 0xffffffbf;
  *(uint *)((int64_t)param_1 + 0x194) = *(uint *)((int64_t)param_1 + 0x194) & 0xffffff7f;
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1,iVar4);
  if ((param_1[0x33] != 0) && (pcVar1 = *(code **)(param_1[0x33] + 0x11830), pcVar1 != (code *)0x0))
  {
    (*pcVar1)(param_1[6],iVar4,param_1[5]);
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_6a6f0(void)
{
  int64_t *plVar1;
  plVar1 = *(int64_t **)(SYSTEM_MAIN_CONTROL_BLOCK + 0x28);
  if (plVar1 != (int64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x28)) {
    *(int64_t *)plVar1[1] = *plVar1;
    *(int64_t *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    *(int8_t *)(plVar1 + 0x2d) = 0;
    SystemCore_67ad0(plVar1 + 3);
    if (*(char *)((int64_t)plVar1 + 0x1a4) == '\0') {
      *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x40) = 0;
    }
    if (plVar1[0x33] != 0) {
      SystemCore_DataHandler(plVar1[0x33],0);
    }
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar1,&ui_system_data_1664_ptr,0xd5,1);
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address