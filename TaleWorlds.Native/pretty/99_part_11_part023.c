#include "TaleWorlds.Native.Split.h"

// 99_part_11_part023.c - 8 个函数

// 函数: void FUN_1806f2375(void)
void FUN_1806f2375(void)

{
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  
  unaff_RSI[1] = unaff_RDI;
  *unaff_RSI = &UNK_18094bfa8;
  unaff_RSI[2] = unaff_RDI;
  return;
}



uint64_t *
FUN_1806f23a0(longlong *param_1,uint64_t *param_2,longlong *param_3,uint64_t param_4,
             uint64_t *param_5,longlong *param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStackX_10;
  longlong *aplStackX_18 [2];
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  plVar4 = (longlong *)0x0;
  plStackX_10 = (longlong *)0x0;
  aplStackX_18[0] = (longlong *)0x0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  cVar1 = (**(code **)(*param_3 + 0x18))(param_3,&UNK_18094e420);
  plVar6 = plVar4;
  plVar7 = plVar4;
  if (cVar1 != '\0') {
    bVar2 = FUN_1806c4940(param_3,param_6,&UNK_18094e498,&plStackX_10);
    bVar3 = FUN_1806c4940(param_3,param_6,&UNK_18094e4a0,aplStackX_18);
    (**(code **)(*param_3 + 0x48))(param_3);
    plVar6 = aplStackX_18[0];
    plVar7 = plStackX_10;
    if ((bVar2 & bVar3) == 0) goto FUN_1806f24d5;
  }
  plVar4 = (longlong *)FUN_1806e78b0(*param_5,plVar7,&uStack_58,plVar6,&uStack_78);
  if (plVar4 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 200))(plVar4);
    (**(code **)(*param_6 + 8))(param_6,uVar5,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar4,param_3,param_4,param_5,param_6);
  }
FUN_1806f24d5:
  param_2[1] = plVar4;
  *param_2 = &UNK_18094bfb8;
  param_2[2] = plVar4;
  return param_2;
}






// 函数: void FUN_1806f2462(void)
void FUN_1806f2462(void)

{
  longlong *plVar1;
  uint64_t *unaff_RSI;
  longlong *unaff_R12;
  longlong *unaff_R15;
  uint64_t *in_stack_000000d0;
  
  plVar1 = (longlong *)FUN_1806e78b0(*in_stack_000000d0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
    (**(code **)(*unaff_R15 + 8))();
    (**(code **)(*unaff_R12 + 0x28))();
  }
  unaff_RSI[1] = plVar1;
  *unaff_RSI = &UNK_18094bfb8;
  unaff_RSI[2] = plVar1;
  return;
}






// 函数: void FUN_1806f24d5(void)
void FUN_1806f24d5(void)

{
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  
  unaff_RSI[1] = unaff_RDI;
  *unaff_RSI = &UNK_18094bfb8;
  unaff_RSI[2] = unaff_RDI;
  return;
}



uint64_t *
FUN_1806f2500(longlong *param_1,uint64_t *param_2,longlong *param_3,uint64_t param_4,
             uint64_t *param_5,longlong *param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStackX_10;
  longlong *aplStackX_18 [2];
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  plVar4 = (longlong *)0x0;
  plStackX_10 = (longlong *)0x0;
  aplStackX_18[0] = (longlong *)0x0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  cVar1 = (**(code **)(*param_3 + 0x18))(param_3,&UNK_18094e420);
  plVar6 = plVar4;
  plVar7 = plVar4;
  if (cVar1 != '\0') {
    bVar2 = FUN_1806c4940(param_3,param_6,&UNK_18094e498,&plStackX_10);
    bVar3 = FUN_1806c4940(param_3,param_6,&UNK_18094e4a0,aplStackX_18);
    (**(code **)(*param_3 + 0x48))(param_3);
    plVar6 = aplStackX_18[0];
    plVar7 = plStackX_10;
    if ((bVar2 & bVar3) == 0) goto FUN_1806f2635;
  }
  plVar4 = (longlong *)FUN_1806e91d0(*param_5,plVar7,&uStack_58,plVar6,&uStack_78);
  if (plVar4 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 200))(plVar4);
    (**(code **)(*param_6 + 8))(param_6,uVar5,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar4,param_3,param_4,param_5,param_6);
  }
FUN_1806f2635:
  param_2[1] = plVar4;
  *param_2 = &UNK_18094bfc8;
  param_2[2] = plVar4;
  return param_2;
}






// 函数: void FUN_1806f25c2(void)
void FUN_1806f25c2(void)

{
  longlong *plVar1;
  uint64_t *unaff_RSI;
  longlong *unaff_R12;
  longlong *unaff_R15;
  uint64_t *in_stack_000000d0;
  
  plVar1 = (longlong *)FUN_1806e91d0(*in_stack_000000d0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
    (**(code **)(*unaff_R15 + 8))();
    (**(code **)(*unaff_R12 + 0x28))();
  }
  unaff_RSI[1] = plVar1;
  *unaff_RSI = &UNK_18094bfc8;
  unaff_RSI[2] = plVar1;
  return;
}






// 函数: void FUN_1806f2635(void)
void FUN_1806f2635(void)

{
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  
  unaff_RSI[1] = unaff_RDI;
  *unaff_RSI = &UNK_18094bfc8;
  unaff_RSI[2] = unaff_RDI;
  return;
}



uint64_t *
FUN_1806f2660(longlong *param_1,uint64_t *param_2,longlong *param_3,uint64_t param_4,
             uint64_t *param_5,longlong *param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStackX_10;
  longlong *aplStackX_18 [2];
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  plVar4 = (longlong *)0x0;
  plStackX_10 = (longlong *)0x0;
  aplStackX_18[0] = (longlong *)0x0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  cVar1 = (**(code **)(*param_3 + 0x18))(param_3,&UNK_18094e420);
  plVar6 = plVar4;
  plVar7 = plVar4;
  if (cVar1 != '\0') {
    bVar2 = FUN_1806c4940(param_3,param_6,&UNK_18094e498,&plStackX_10);
    bVar3 = FUN_1806c4940(param_3,param_6,&UNK_18094e4a0,aplStackX_18);
    (**(code **)(*param_3 + 0x48))(param_3);
    plVar6 = aplStackX_18[0];
    plVar7 = plStackX_10;
    if ((bVar2 & bVar3) == 0) goto FUN_1806f2795;
  }
  plVar4 = (longlong *)FUN_1806e3cd0(*param_5,plVar7,&uStack_58,plVar6,&uStack_78);
  if (plVar4 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 200))(plVar4);
    (**(code **)(*param_6 + 8))(param_6,uVar5,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar4,param_3,param_4,param_5,param_6);
  }
FUN_1806f2795:
  param_2[1] = plVar4;
  *param_2 = &UNK_18094bfe0;
  param_2[2] = plVar4;
  return param_2;
}






// 函数: void FUN_1806f2722(void)
void FUN_1806f2722(void)

{
  longlong *plVar1;
  uint64_t *unaff_RSI;
  longlong *unaff_R12;
  longlong *unaff_R15;
  uint64_t *in_stack_000000d0;
  
  plVar1 = (longlong *)FUN_1806e3cd0(*in_stack_000000d0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
    (**(code **)(*unaff_R15 + 8))();
    (**(code **)(*unaff_R12 + 0x28))();
  }
  unaff_RSI[1] = plVar1;
  *unaff_RSI = &UNK_18094bfe0;
  unaff_RSI[2] = plVar1;
  return;
}






// 函数: void FUN_1806f2795(void)
void FUN_1806f2795(void)

{
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  
  unaff_RSI[1] = unaff_RDI;
  *unaff_RSI = &UNK_18094bfe0;
  unaff_RSI[2] = unaff_RDI;
  return;
}



uint64_t *
FUN_1806f27c0(longlong *param_1,uint64_t *param_2,longlong *param_3,uint64_t param_4,
             uint64_t *param_5,longlong *param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStackX_10;
  longlong *aplStackX_18 [2];
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  plVar4 = (longlong *)0x0;
  plStackX_10 = (longlong *)0x0;
  aplStackX_18[0] = (longlong *)0x0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  cVar1 = (**(code **)(*param_3 + 0x18))(param_3,&UNK_18094e420);
  plVar6 = plVar4;
  plVar7 = plVar4;
  if (cVar1 != '\0') {
    bVar2 = FUN_1806c4940(param_3,param_6,&UNK_18094e498,&plStackX_10);
    bVar3 = FUN_1806c4940(param_3,param_6,&UNK_18094e4a0,aplStackX_18);
    (**(code **)(*param_3 + 0x48))(param_3);
    plVar6 = aplStackX_18[0];
    plVar7 = plStackX_10;
    if ((bVar2 & bVar3) == 0) goto FUN_1806f28f5;
  }
  plVar4 = (longlong *)FUN_1806eb180(*param_5,plVar7,&uStack_58,plVar6,&uStack_78);
  if (plVar4 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 200))(plVar4);
    (**(code **)(*param_6 + 8))(param_6,uVar5,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar4,param_3,param_4,param_5,param_6);
  }
FUN_1806f28f5:
  param_2[1] = plVar4;
  *param_2 = &UNK_18094bff0;
  param_2[2] = plVar4;
  return param_2;
}






// 函数: void FUN_1806f2882(void)
void FUN_1806f2882(void)

{
  longlong *plVar1;
  uint64_t *unaff_RSI;
  longlong *unaff_R12;
  longlong *unaff_R15;
  uint64_t *in_stack_000000d0;
  
  plVar1 = (longlong *)FUN_1806eb180(*in_stack_000000d0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
    (**(code **)(*unaff_R15 + 8))();
    (**(code **)(*unaff_R12 + 0x28))();
  }
  unaff_RSI[1] = plVar1;
  *unaff_RSI = &UNK_18094bff0;
  unaff_RSI[2] = plVar1;
  return;
}






