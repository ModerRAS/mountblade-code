#include "TaleWorlds.Native.Split.h"

// 99_part_10_part058.c - 1 个函数

// 函数: void FUN_1806d3d20(undefined8 param_1,longlong *param_2,longlong *param_3)
void FUN_1806d3d20(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)PxGetFoundation();
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
  plVar5 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,0x70,&UNK_18094c758,&UNK_18094c718,0xc5);
  lVar3 = param_2[1];
  *plVar5 = *param_2;
  plVar5[1] = lVar3;
  lVar3 = param_2[3];
  plVar5[2] = param_2[2];
  plVar5[3] = lVar3;
  lVar3 = param_2[5];
  plVar5[4] = param_2[4];
  plVar5[5] = lVar3;
  lVar3 = param_2[7];
  plVar5[6] = param_2[6];
  plVar5[7] = lVar3;
  lVar3 = param_2[9];
  plVar5[8] = param_2[8];
  plVar5[9] = lVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x54);
  lVar3 = param_2[0xb];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(int *)(plVar5 + 10) = (int)param_2[10];
  *(undefined4 *)((longlong)plVar5 + 0x54) = uVar1;
  *(int *)(plVar5 + 0xb) = (int)lVar3;
  *(undefined4 *)((longlong)plVar5 + 0x5c) = uVar2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 100);
  lVar3 = param_2[0xd];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(int *)(plVar5 + 0xc) = (int)param_2[0xc];
  *(undefined4 *)((longlong)plVar5 + 100) = uVar1;
  *(int *)(plVar5 + 0xd) = (int)lVar3;
  *(undefined4 *)((longlong)plVar5 + 0x6c) = uVar2;
  (**(code **)(*plVar5 + 0x130))(plVar5);
  (**(code **)(*param_3 + 0x10))(param_3,plVar5,0x70);
                    // WARNING: Could not recover jumptable at 0x0001806d3de8. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar4 + 0x10))(plVar4,plVar5);
  return;
}



undefined8 *
FUN_1806d3e50(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_5);
  if ((lVar2 != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2,param_3,param_4,param_5,param_6),
     cVar1 != '\0')) {
    param_2[1] = lVar2;
    *param_2 = &UNK_18094bf50;
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &DAT_18098bc73;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



undefined8 *
FUN_1806d3f00(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_5);
  if ((lVar2 != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2,param_3,param_4,param_5,param_6),
     cVar1 != '\0')) {
    param_2[1] = lVar2;
    *param_2 = &UNK_18094bf60;
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &DAT_18098bc73;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



undefined8 *
FUN_1806d3fb0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_5);
  if ((lVar2 != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2,param_3,param_4,param_5,param_6),
     cVar1 != '\0')) {
    param_2[1] = lVar2;
    *param_2 = &UNK_18094bec8;
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &DAT_18098bc73;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



undefined8 *
FUN_1806d4060(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_5);
  if ((lVar2 != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2,param_3,param_4,param_5,param_6),
     cVar1 != '\0')) {
    param_2[1] = lVar2;
    *param_2 = &UNK_180a05020;
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &DAT_18098bc73;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



undefined8 *
FUN_1806d4110(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_5);
  if ((lVar2 != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2,param_3,param_4,param_5,param_6),
     cVar1 != '\0')) {
    param_2[1] = lVar2;
    *param_2 = &UNK_18094bf28;
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &DAT_18098bc73;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x0001806d4257)
// WARNING: Removing unreachable block (ram,0x0001806d425b)
// WARNING: Removing unreachable block (ram,0x0001806d423e)
// WARNING: Removing unreachable block (ram,0x0001806d4230)
// WARNING: Removing unreachable block (ram,0x0001806d4234)
// WARNING: Removing unreachable block (ram,0x0001806d4265)

undefined8 FUN_1806d41c0(void)

{
  longlong *in_R9;
  undefined1 auStack_78 [120];
  
  (**(code **)(*in_R9 + 0x18))();
  __0PxAggregateGeneratedInfo_physx__QEAA_XZ(auStack_78);
  return 1;
}



bool FUN_1806d4280(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uStackX_10;
  undefined8 *puStack_298;
  longlong lStack_290;
  ulonglong uStack_288;
  undefined8 *puStack_280;
  longlong lStack_278;
  ulonglong uStack_270;
  undefined8 **ppuStack_268;
  undefined8 **ppuStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  longlong *plStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [480];
  
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar1 = param_5[2];
  uStackX_10 = (**(code **)(*param_4 + 0x18))();
  puStack_280 = &uStackX_10;
  lStack_278 = 0;
  puStack_298 = &uStackX_10;
  uStack_270 = 0;
  lStack_290 = 0;
  uStack_288 = 0;
  __0PxArticulationGeneratedInfo_physx__QEAA_XZ(auStack_1f8);
  uVar4 = param_6;
  ppuStack_268 = &puStack_280;
  ppuStack_260 = &puStack_298;
  param_5._0_1_ = '\0';
  puStack_218 = &param_5;
  uStack_228 = param_6;
  uStack_220 = 1;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_258 = uVar2;
  uStack_250 = uVar3;
  uStack_248 = uVar1;
  uStack_240 = param_3;
  uStack_238 = param_2;
  plStack_230 = param_4;
  FUN_1806c52c0(auStack_1f8,&ppuStack_268,0);
  ppuStack_268 = &puStack_280;
  ppuStack_260 = &puStack_298;
  puStack_218 = &param_5;
  uStack_228 = uVar4;
  uStack_220 = 1;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_258 = uVar2;
  uStack_250 = uVar3;
  uStack_248 = uVar1;
  uStack_240 = param_3;
  uStack_238 = param_2;
  plStack_230 = param_4;
  FUN_1806c55d0(auStack_1f8,&ppuStack_268,0);
  bVar5 = (char)param_5 == '\0';
  if ((((uStack_288 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_288)) && (lStack_290 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_298 + 0x10))();
  }
  if ((((uStack_270 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_270)) && (lStack_278 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_280 + 0x10))();
  }
  return bVar5;
}






