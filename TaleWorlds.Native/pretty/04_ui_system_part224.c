#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part224.c - 2 个函数
// 函数: void SystemCore_97acb(int32_t param_1)
void SystemCore_97acb(int32_t param_1)
{
  int32_t *unaff_RBP;
  uint64_t local_var_40;
  *unaff_RBP = param_1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)&local_buffer_00000000);
}
uint64_t SystemCore_97b10(int64_t param_1,int param_2)
{
  float fVar1;
  bool bVar2;
  uint64_t uVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  if (param_2 == 1) {
    if ((*(int *)(param_1 + 0x278) < *(int *)(param_1 + 0x27c)) &&
       (((((((*(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x27c),
             *(float *)(param_1 + 0x28c) != *(float *)(param_1 + 0x240) ||
             (*(float *)(param_1 + 0x290) != *(float *)(param_1 + 0x244))) ||
            (*(float *)(param_1 + 0x294) != *(float *)(param_1 + 0x248))) ||
           ((*(float *)(param_1 + 0x298) != *(float *)(param_1 + 0x24c) ||
            (*(int *)(param_1 + 0x250) != *(int *)(param_1 + 0x29c))))) ||
          ((*(float *)(param_1 + 0x2a0) != *(float *)(param_1 + 0x254) ||
           ((*(float *)(param_1 + 0x2a4) != *(float *)(param_1 + 600) ||
            (*(int *)(param_1 + 0x25c) != *(int *)(param_1 + 0x2a8))))))) ||
         (*(float *)(param_1 + 0x2ac) != *(float *)(param_1 + 0x260))) ||
        ((*(float *)(param_1 + 0x2b0) != *(float *)(param_1 + 0x264) ||
         (*(float *)(param_1 + 0x2c0) != *(float *)(param_1 + 0x274))))))) {
      bVar2 = false;
      cVar4 = '\0';
      if (((*(float *)(param_1 + 0x290) == *(float *)(param_1 + 0x244)) &&
          (((*(float *)(param_1 + 0x294) == *(float *)(param_1 + 0x248) &&
            (*(float *)(param_1 + 0x2a0) == *(float *)(param_1 + 0x254))) &&
           (*(int *)(param_1 + 0x25c) == *(int *)(param_1 + 0x2a8))))) &&
         ((*(float *)(param_1 + 0x2ac) == *(float *)(param_1 + 0x260) &&
          (*(float *)(param_1 + 0x2b0) == *(float *)(param_1 + 0x264))))) {
        if ((*(int *)(param_1 + 0x250) != *(int *)(param_1 + 0x29c)) ||
           (*(float *)(param_1 + 0x2a4) != *(float *)(param_1 + 600))) {
          cVar4 = '\x01';
        }
      }
      else {
        cVar4 = '\x01';
        bVar2 = true;
      }
      *(uint64_t *)(param_1 + 0x240) = *(uint64_t *)(param_1 + 0x28c);
      *(uint64_t *)(param_1 + 0x248) = *(uint64_t *)(param_1 + 0x294);
      *(uint64_t *)(param_1 + 0x250) = *(uint64_t *)(param_1 + 0x29c);
      *(uint64_t *)(param_1 + 600) = *(uint64_t *)(param_1 + 0x2a4);
      *(uint64_t *)(param_1 + 0x260) = *(uint64_t *)(param_1 + 0x2ac);
      *(uint64_t *)(param_1 + 0x268) = *(uint64_t *)(param_1 + 0x2b4);
      *(uint64_t *)(param_1 + 0x270) = *(uint64_t *)(param_1 + 700);
      if (bVar2) {
        *(int32_t *)(param_1 + 0x224) = 0;
        if (*(int *)(param_1 + 0x25c) == 0) {
          fVar6 = 0.0;
          fVar5 = *(float *)(param_1 + 0x254) + *(float *)(param_1 + 0x254);
          if ((0.0 < fVar5) && (fVar1 = *(float *)(param_1 + 0x248), fVar1 < fVar5 * 5.0)) {
            fVar6 = 360.0 / (((fVar1 * fVar1) / (fVar5 * fVar5)) * 4.0 + 1.0);
          }
          *(float *)(param_1 + 0x224) = fVar6;
        }
        else if (*(int *)(param_1 + 0x25c) == 1) {
          fVar5 = (float)SystemFunction_000180797e00(*(int32_t *)(param_1 + 0x248),
                                             *(int32_t *)(param_1 + 0x260));
          if (fVar5 <= *(float *)(param_1 + 0x264)) {
            fVar5 = *(float *)(param_1 + 0x264);
          }
          *(float *)(param_1 + 0x224) = fVar5;
        }
      }
      if (cVar4 != '\0') {
        SystemFunction_0001807d49f0(*(int32_t *)(param_1 + 0x250),*(int32_t *)(param_1 + 0x244),
                            *(int32_t *)(param_1 + 0x254),*(int32_t *)(param_1 + 600),
                            param_1 + 0x218,*(int32_t *)(*(int64_t *)(param_1 + 0xa8) + 0x11408)
                           );
      }
      *(int8_t *)(param_1 + 0x288) = 1;
      return 0;
    }
  }
  else if ((param_2 == 0x80) && (*(int64_t *)(param_1 + 0x280) != 0)) {
    uVar3 = SystemFunction_000180745fc0(*(uint64_t *)(param_1 + 0xa8));
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *(uint64_t *)(param_1 + 0x280) = 0;
  }
  return 0;
}
// 函数: void SystemCore_97e50(void)
void SystemCore_97e50(void)
{
// WARNING: Subroutine does not return
  memset(0x180c11074,0,0x5c);
}
uint64_t
SystemCore_98350(int64_t param_1,int32_t param_2,int64_t param_3,uint64_t param_4,int param_5,
             int param_6)
{
  uint64_t uVar1;
  float fVar2;
  uint64_t local_var_f08;
  int32_t uVar3;
  int64_t alStack_e8 [2];
  uint64_t local_var_d8;
  uint64_t **pplocal_var_d0;
  uint64_t **pplocal_var_c8;
  uint64_t local_var_c0;
  uint64_t **pplocal_var_b8;
  uint64_t **pplocal_var_b0;
  uint64_t local_var_a8;
  int32_t local_var_a0;
  uint64_t local_var_98;
  int32_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  int32_t local_var_40;
  uint64_t local_var_38;
  uVar3 = (int32_t)((uint64_t)local_var_f08 >> 0x20);
  if (param_6 == 1) {
    if (param_5 == 0) {
      return 0;
    }
  }
  else {
    alStack_e8[0] = 0;
    uVar1 = SystemCore_47d80(*(uint64_t *)(param_1 + 0xa8),*(uint64_t *)(param_1 + 0x280),
                          alStack_e8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    pplocal_var_c8 = &pplocal_var_d0;
    pplocal_var_d0 = &pplocal_var_d0;
    pplocal_var_b0 = &pplocal_var_b8;
    pplocal_var_b8 = &pplocal_var_b8;
    local_var_c0 = 0;
    local_var_a8 = 0;
    local_var_98 = 0;
    local_var_a0 = 0;
    local_var_88 = 0;
    local_var_90 = 0;
    local_var_38 = 0;
    local_var_40 = 0;
    local_var_d8 = 0;
    local_var_80 = 0;
    local_var_78 = 0;
    uVar1 = SystemFunction_000180763630(&local_var_d8,*(uint64_t *)(param_1 + 0xa8),
                                *(int32_t *)(param_1 + 0x274));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemCore_636f0(&local_var_d8,*(uint64_t *)(alStack_e8[0] + 0x50),
                          **(uint64_t **)(param_3 + 0x18),0,1,**(int32_t **)(param_3 + 8),
                          CONCAT44(uVar3,param_2),1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(char *)(param_1 + 0x288) != '\0') {
      *(uint64_t *)(alStack_e8[0] + 0x10) = 0;
      *(uint64_t *)(alStack_e8[0] + 0x18) = 0;
      *(uint64_t *)(alStack_e8[0] + 0x20) = 0;
      *(uint64_t *)(alStack_e8[0] + 0x28) = 0;
      *(uint64_t *)(alStack_e8[0] + 0x30) = 0;
      *(uint64_t *)(alStack_e8[0] + 0x38) = 0;
      SystemCore_d7510(*(uint64_t *)(param_1 + 0x238),*(int32_t *)(param_1 + 0x240),
                    *(int32_t *)(param_1 + 0x224),0,0x3f800000,1,alStack_e8[0] + 0x10);
      *(int32_t *)(alStack_e8[0] + 0x40) = *(int32_t *)(param_1 + 0x268);
      *(int32_t *)(alStack_e8[0] + 0x44) = *(int32_t *)(param_1 + 0x26c);
      *(int32_t *)(alStack_e8[0] + 0x48) = *(int32_t *)(param_1 + 0x270);
      uVar3 = *(int32_t *)(param_1 + 0x224);
      *(int32_t *)(alStack_e8[0] + 8) = uVar3;
      fVar2 = *(float *)(param_1 + 0x218);
      if (1.0 <= fVar2) {
        fVar2 = 1.0;
      }
      *(float *)(alStack_e8[0] + 4) = fVar2;
      if (*(float *)(param_1 + 0x26c) <= 0.0) {
        *(float *)(alStack_e8[0] + 0xc) = (1.0 - *(float *)(param_1 + 0x218)) + 1.0;
      }
      else {
        fVar2 = (float)atan2f(uVar3,SQRT(*(float *)(param_1 + 0x270) * *(float *)(param_1 + 0x270) +
                                         *(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x268)))
        ;
        *(float *)(alStack_e8[0] + 0xc) = fVar2 * 0.63661975;
        *(float *)(alStack_e8[0] + 0xc) =
             *(float *)(alStack_e8[0] + 0xc) * *(float *)(param_1 + 0x218);
        *(float *)(alStack_e8[0] + 0xc) = 1.0 - *(float *)(alStack_e8[0] + 0xc);
      }
      *(float *)(alStack_e8[0] + 0xc) = *(float *)(alStack_e8[0] + 0xc) * 0.5;
      *(int8_t *)(param_1 + 0x288) = 0;
    }
    uVar1 = SystemFunction_000180069ee0(*(uint64_t *)(param_1 + 0xa8),*(uint64_t *)(param_1 + 0x280),
                                alStack_e8[0]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0xb;
}
uint64_t SystemCore_98486(uint64_t param_1)
{
  int32_t uVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  int64_t unaff_RBX;
  int8_t unaff_R14B;
  float fVar3;
  int32_t local_buffer_28;
  int64_t lStack0000000000000030;
  int64_t local_var_40;
  *(uint64_t *)(in_RAX + 0x10) = param_1;
  *(uint64_t *)(in_RAX + 0x18) = param_1;
  *(uint64_t *)(in_RAX + 0x20) = param_1;
  *(uint64_t *)(in_RAX + 0x28) = param_1;
  *(uint64_t *)(in_RAX + 0x30) = param_1;
  *(uint64_t *)(in_RAX + 0x38) = param_1;
  lStack0000000000000030 = local_var_40 + 0x10;
  local_buffer_28 = 1;
  SystemCore_d7510(*(uint64_t *)(unaff_RBX + 0x238),*(int32_t *)(unaff_RBX + 0x240),
                *(int32_t *)(unaff_RBX + 0x224),0,0x3f800000);
  *(int32_t *)(local_var_40 + 0x40) = *(int32_t *)(unaff_RBX + 0x268);
  *(int32_t *)(local_var_40 + 0x44) = *(int32_t *)(unaff_RBX + 0x26c);
  *(int32_t *)(local_var_40 + 0x48) = *(int32_t *)(unaff_RBX + 0x270);
  uVar1 = *(int32_t *)(unaff_RBX + 0x224);
  *(int32_t *)(local_var_40 + 8) = uVar1;
  fVar3 = *(float *)(unaff_RBX + 0x218);
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  *(float *)(local_var_40 + 4) = fVar3;
  if (*(float *)(unaff_RBX + 0x26c) <= 0.0) {
    *(float *)(local_var_40 + 0xc) = (1.0 - *(float *)(unaff_RBX + 0x218)) + 1.0;
  }
  else {
    fVar3 = (float)atan2f(uVar1,SQRT(*(float *)(unaff_RBX + 0x270) * *(float *)(unaff_RBX + 0x270) +
                                     *(float *)(unaff_RBX + 0x268) * *(float *)(unaff_RBX + 0x268)))
    ;
    *(float *)(local_var_40 + 0xc) = fVar3 * 0.63661975;
    *(float *)(local_var_40 + 0xc) =
         *(float *)(local_var_40 + 0xc) * *(float *)(unaff_RBX + 0x218);
    *(float *)(local_var_40 + 0xc) = 1.0 - *(float *)(local_var_40 + 0xc);
  }
  *(float *)(local_var_40 + 0xc) = *(float *)(local_var_40 + 0xc) * 0.5;
  *(int8_t *)(unaff_RBX + 0x288) = unaff_R14B;
  uVar2 = SystemFunction_000180069ee0(*(uint64_t *)(unaff_RBX + 0xa8),*(uint64_t *)(unaff_RBX + 0x280),
                              local_var_40);
  if ((int)uVar2 == 0) {
    uVar2 = 0xb;
  }
  return uVar2;
}
uint64_t SystemCore_98557(uint64_t param_1)
{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int8_t unaff_R14B;
  float fVar2;
  float unaff_XMM7_Da;
  int64_t local_var_40;
  fVar2 = (float)atan2f(param_1,SQRT(*(float *)(unaff_RBX + 0x270) * *(float *)(unaff_RBX + 0x270) +
                                     *(float *)(unaff_RBX + 0x268) * *(float *)(unaff_RBX + 0x268)))
  ;
  *(float *)(local_var_40 + 0xc) = fVar2 * 0.63661975;
  *(float *)(local_var_40 + 0xc) =
       *(float *)(local_var_40 + 0xc) * *(float *)(unaff_RBX + 0x218);
  *(float *)(local_var_40 + 0xc) = unaff_XMM7_Da - *(float *)(local_var_40 + 0xc);
  *(float *)(local_var_40 + 0xc) = *(float *)(local_var_40 + 0xc) * 0.5;
  *(int8_t *)(unaff_RBX + 0x288) = unaff_R14B;
  uVar1 = SystemFunction_000180069ee0(*(uint64_t *)(unaff_RBX + 0xa8),*(uint64_t *)(unaff_RBX + 0x280),
                              local_var_40);
  if ((int)uVar1 == 0) {
    uVar1 = 0xb;
  }
  return uVar1;
}
uint64_t SystemCore_985f8(void)
{
  uint64_t uVar1;
  int64_t unaff_RBX;
  uint64_t local_var_40;
  uVar1 = SystemFunction_000180069ee0(*(uint64_t *)(unaff_RBX + 0xa8),*(uint64_t *)(unaff_RBX + 0x280),
                              local_var_40);
  if ((int)uVar1 == 0) {
    uVar1 = 0xb;
  }
  return uVar1;
}
uint64_t SystemCore_98640(int64_t *param_1)
{
  uint uVar1;
  int64_t lVar2;
  int *piVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  uint *puVar9;
  lVar2 = *param_1;
  iVar7 = 0;
  lVar4 = *(int64_t *)(lVar2 + 0xa8);
  *(int32_t *)(lVar2 + 0x21c) = 1;
  puVar9 = (uint *)(lVar4 + 0x117d8);
  uVar6 = *puVar9 << 0xb ^ *puVar9;
  *puVar9 = *(uint *)(lVar4 + 0x117dc);
  *(int32_t *)(lVar4 + 0x117dc) = *(int32_t *)(lVar4 + 0x117e0);
  uVar1 = *(uint *)(lVar4 + 0x117e4);
  *(uint *)(lVar4 + 0x117e0) = uVar1;
  uVar6 = (uVar1 >> 0xb ^ uVar6) >> 8 ^ uVar1 ^ uVar6;
  *(uint *)(lVar4 + 0x117e4) = uVar6;
  *(uint *)(lVar2 + 0x224) = uVar6;
  *(uint *)(lVar2 + 0x228) = ~uVar6;
  *(uint *)(lVar2 + 0x22c) = uVar6 * 0x2220c267;
  *(uint *)(lVar2 + 0x230) = ~uVar6 * -0x57dea137;
  lVar4 = *(int64_t *)(lVar2 + 0xe8);
  if (0 < *(int *)(lVar4 + 0x60)) {
    lVar8 = 0;
    do {
      piVar3 = *(int **)(lVar8 + *(int64_t *)(lVar4 + 0x68));
      if (*piVar3 == 0) {
        uVar5 = SystemFunction_000180762a70(lVar2,iVar7,piVar3[0xe]);
LAB_180798712:
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      else if (*piVar3 == 1) {
        uVar5 = SystemFunction_000180762af0(lVar2,iVar7,piVar3[0xe]);
        goto LAB_180798712;
      }
      lVar4 = *(int64_t *)(lVar2 + 0xe8);
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar7 < *(int *)(lVar4 + 0x60));
  }
  return 0;
}
uint64_t SystemCore_98790(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)
{
  int64_t lVar1;
  if (param_2 == 1) {
    lVar1 = *param_1;
    *param_3 = *(int32_t *)(lVar1 + 0x238);
    if (param_4 != 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(param_4,0x20,&rendering_buffer_2048_ptr,(double)*(float *)(lVar1 + 0x238));
    }
  }
  return 0;
}
uint64_t SystemCore_98800(int64_t *param_1,int param_2,int *param_3,int64_t param_4)
{
  int64_t lVar1;
  int iVar2;
  if (param_2 != 0) {
    return 0x1f;
  }
  lVar1 = *param_1;
  iVar2 = *(int *)(lVar1 + 0x234);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (6 < iVar2) {
    iVar2 = 6;
  }
  *param_3 = iVar2;
  if (param_4 != 0) {
    SystemFunction_00018076b450(param_4,*(uint64_t *)((int64_t)*(int *)(lVar1 + 0x218) * 8 + 0x180be3230)
                        ,0x20);
  }
  return 0;
}