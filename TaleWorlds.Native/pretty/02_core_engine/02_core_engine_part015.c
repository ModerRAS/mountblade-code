#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part015.c - 23 个函数

// 函数：清理对象数组
// 原始函数名：FUN_180055e60
// 功能：遍历对象数组，调用析构函数并清理内存
void cleanup_object_array(longlong object_array_ptr)

{
  longlong *object_array;      // 对象数组指针
  longlong object_item;         // 单个对象项
  ulonglong array_size;         // 数组大小
  ulonglong index;              // 当前索引
  
  array_size = *(ulonglong *)(object_array_ptr + 0x10);
  object_array = *(longlong *)(object_array_ptr + 8);
  index = 0;
  if (array_size != 0) {
    do {
      object_item = *(longlong *)(object_array + index * 8);
      if (object_item != 0) {
        if (*(longlong **)(object_item + 0x10) != (longlong *)0x0) {
          // 调用对象的析构函数
          (**(code **)(**(longlong **)(object_item + 0x10) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        cleanup_object_memory(object_item);
      }
      *(undefined8 *)(object_array + index * 8) = 0;
      index = index + 1;
    } while (index < array_size);
    array_size = *(ulonglong *)(object_array_ptr + 0x10);
  }
  *(undefined8 *)(object_array_ptr + 0x18) = 0;
  if ((1 < array_size) && (*(longlong *)(object_array_ptr + 8) != 0)) {
                    // WARNING: Subroutine does not return
    cleanup_object_memory();
  }
  return;
}



longlong FUN_180055e80(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = &UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}





// 函数: void FUN_180055ed0(longlong param_1)
void FUN_180055ed0(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180055f20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180055f20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180058210(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180055f50(longlong param_1)
void FUN_180055f50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180055f70(undefined8 param_1,undefined4 param_2)
void FUN_180055f70(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (_DAT_180c8f008 != 0) {
    func_0x00018005a410(_DAT_180c8f008 + 8);
  }
  Sleep(2000);
  _Exit(param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180055fa0(void)
void FUN_180055fa0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined8 in_R9;
  undefined8 uVar6;
  
  pcVar3 = _DAT_180c8a9d8;
  uVar6 = 0xfffffffffffffffe;
  if (*_DAT_180c8a9d8 != '\0') {
    puVar1 = (undefined8 *)*_DAT_180c86960;
    iVar4 = _Mtx_lock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    uVar2 = _DAT_180c8a9b0;
    _DAT_180c8a9b0 = *puVar1;
    FUN_1801299b0(&UNK_1809fd9a0,0,0,in_R9,uVar6);
    FUN_18010f010(&UNK_1809fd9b0,*(undefined4 *)(pcVar3 + 4));
    FUN_18010f010(&UNK_1809fd9d0,*(undefined4 *)(pcVar3 + 8));
    FUN_18010f010(&UNK_1809fd9f0,*(undefined4 *)(pcVar3 + 0xc));
    FUN_18010f010(&UNK_1809fda10,*(undefined4 *)(pcVar3 + 0x10));
    FUN_18010f010(&UNK_1809fda30,*(undefined4 *)(pcVar3 + 0x14));
    FUN_18010f010(&UNK_1809fda58,*(undefined4 *)(pcVar3 + 0x18));
    for (pcVar5 = *(char **)(pcVar3 + 0x28); pcVar5 != pcVar3 + 0x20;
        pcVar5 = (char *)func_0x00018066bd70(pcVar5)) {
      FUN_18010f010(&UNK_1809fda80,*(undefined4 *)(pcVar5 + 0x20),*(undefined4 *)(pcVar5 + 0x24));
    }
    for (pcVar5 = *(char **)(pcVar3 + 0x58); pcVar5 != pcVar3 + 0x50;
        pcVar5 = (char *)func_0x00018066bd70(pcVar5)) {
      FUN_18010f010(&UNK_1809fdaa8,*(undefined4 *)(pcVar5 + 0x20),*(undefined4 *)(pcVar5 + 0x24));
    }
    FUN_18010f010(&UNK_1809fdad0,*(undefined4 *)(pcVar3 + 0x80));
    FUN_18010f010(&UNK_1809fdaf8,*(undefined4 *)(pcVar3 + 0x84));
    FUN_18010f010(&UNK_1809fdb20,*(undefined4 *)(pcVar3 + 0x88));
    FUN_18012cfe0();
    _DAT_180c8a9b0 = uVar2;
    iVar4 = _Mtx_unlock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  return;
}





// 函数: void FUN_180056150(longlong param_1)
void FUN_180056150(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  bool bVar20;
  
  uVar10 = 0;
  lVar9 = *(longlong *)(param_1 + 0x50);
  lVar12 = *(longlong *)(param_1 + 0x48);
  if (lVar9 - lVar12 >> 3 != 0) {
    iVar19 = 1;
    lVar16 = 8;
    uVar18 = uVar10;
    do {
      iVar17 = (int)uVar10;
      iVar6 = -1;
      if ((ulonglong)(longlong)iVar19 < (ulonglong)(lVar9 - lVar12 >> 3)) {
        lVar9 = *(longlong *)(param_1 + 0x50);
        lVar14 = lVar16;
        iVar13 = iVar19;
        iVar15 = -1;
        do {
          iVar6 = *(int *)(*(longlong *)(lVar14 + lVar12) + 0x10);
          iVar3 = *(int *)(*(longlong *)(uVar18 + lVar12) + 0x10);
          if (iVar6 == iVar3) {
            if (iVar6 == 0) {
LAB_180056220:
              if (iVar3 != 0) goto LAB_180056228;
              bVar20 = true;
            }
            else {
              pcVar7 = *(char **)(*(longlong *)(lVar14 + lVar12) + 8);
              lVar11 = *(longlong *)(*(longlong *)(uVar18 + lVar12) + 8) - (longlong)pcVar7;
              do {
                cVar1 = *pcVar7;
                cVar2 = pcVar7[lVar11];
                if (cVar1 != cVar2) break;
                pcVar7 = pcVar7 + 1;
              } while (cVar2 != '\0');
              bVar20 = cVar1 == cVar2;
            }
          }
          else {
            if (iVar6 == 0) goto LAB_180056220;
LAB_180056228:
            bVar20 = false;
          }
          iVar6 = iVar13;
          if (!bVar20) {
            iVar6 = iVar15;
          }
          iVar13 = iVar13 + 1;
          lVar14 = lVar14 + 8;
          iVar15 = iVar6;
        } while ((ulonglong)(longlong)iVar13 < (ulonglong)(lVar9 - lVar12 >> 3));
      }
      if (iVar6 != -1) {
        lVar14 = (longlong)iVar6;
        lVar9 = *(longlong *)(lVar12 + lVar14 * 8);
        *(double *)(*(longlong *)(uVar18 + lVar12) + 0x40) =
             *(double *)(lVar9 + 0x40) + *(double *)(*(longlong *)(uVar18 + lVar12) + 0x40);
        plVar8 = *(longlong **)(lVar9 + 0x48);
        if (plVar8 != *(longlong **)(lVar9 + 0x50)) {
          lVar12 = *(longlong *)(param_1 + 0x48);
          do {
            *(undefined8 *)(*plVar8 + 0x68) = *(undefined8 *)(uVar18 + lVar12);
            plVar8 = plVar8 + 1;
            lVar12 = *(longlong *)(param_1 + 0x48);
          } while (plVar8 != *(longlong **)(*(longlong *)(lVar12 + lVar14 * 8) + 0x50));
        }
        lVar9 = *(longlong *)(lVar12 + lVar14 * 8);
        FUN_180058a20(*(longlong *)(uVar18 + lVar12) + 0x48,
                      *(undefined8 *)(*(longlong *)(uVar18 + lVar12) + 0x50),
                      *(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(lVar9 + 0x50));
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar14 * 8);
        *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)(lVar9 + 0x48);
        FUN_180056150(*(undefined8 *)(uVar18 + *(longlong *)(param_1 + 0x48)));
        FUN_180056410(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar14 * 8));
        puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x48) + lVar14 * 8);
        if (puVar4 != (undefined8 *)0x0) {
          if (puVar4[9] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puVar4[4] = &UNK_180a3c3e0;
          if (puVar4[5] == 0) {
            puVar4[5] = 0;
            *(undefined4 *)(puVar4 + 7) = 0;
            puVar4[4] = &UNK_18098bcb0;
            *puVar4 = &UNK_180a3c3e0;
            if (puVar4[1] == 0) {
              puVar4[1] = 0;
              *(undefined4 *)(puVar4 + 3) = 0;
              *puVar4 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar4);
            }
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar14 * 8) = 0;
        lVar9 = *(longlong *)(param_1 + 0x48) + lVar14 * 8;
        uVar10 = lVar9 + 8;
        uVar5 = *(ulonglong *)(param_1 + 0x50);
        if (uVar10 < uVar5) {
                    // WARNING: Subroutine does not return
          memmove(lVar9,uVar10,uVar5 - uVar10);
        }
        lVar9 = uVar5 - 8;
        *(longlong *)(param_1 + 0x50) = lVar9;
        iVar17 = iVar17 + -1;
        iVar19 = iVar19 + -1;
        uVar18 = uVar18 - 8;
        lVar16 = lVar16 + -8;
      }
      uVar10 = (ulonglong)(iVar17 + 1U);
      iVar19 = iVar19 + 1;
      uVar18 = uVar18 + 8;
      lVar16 = lVar16 + 8;
      lVar12 = *(longlong *)(param_1 + 0x48);
    } while ((ulonglong)(longlong)(int)(iVar17 + 1U) < (ulonglong)(lVar9 - lVar12 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180056410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180056410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  uVar3 = 0;
  puVar1 = (ulonglong *)(param_1 + 0x48);
  uVar4 = *puVar1;
  uVar5 = uVar3;
  uVar8 = uVar3;
  if ((longlong)(*(longlong *)(param_1 + 0x50) - uVar4) >> 3 != 0) {
    do {
      FUN_180056410(*(undefined8 *)(uVar4 + uVar5));
      puVar2 = *(undefined8 **)(*puVar1 + uVar5);
      if (puVar2 != (undefined8 *)0x0) {
        if (puVar2[9] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar2[4] = &UNK_180a3c3e0;
        if (puVar2[5] == 0) {
          puVar2[5] = 0;
          *(undefined4 *)(puVar2 + 7) = 0;
          puVar2[4] = &UNK_18098bcb0;
          *puVar2 = &UNK_180a3c3e0;
          if (puVar2[1] == 0) {
            puVar2[1] = 0;
            *(undefined4 *)(puVar2 + 3) = 0;
            *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar2);
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(*puVar1 + uVar5) = 0;
      uVar7 = (int)uVar8 + 1;
      uVar4 = *puVar1;
      uVar5 = uVar5 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)((longlong)(*(longlong *)(param_1 + 0x50) - uVar4) >> 3));
  }
  FUN_180057340(puVar1,0);
  uVar4 = *(ulonglong *)(param_1 + 0x50);
  uVar5 = *puVar1;
  uVar7 = *(uint *)(param_1 + 0x60);
  lVar9 = uVar4 - uVar5;
  lVar6 = lVar9 >> 3;
  if (lVar6 != 0) {
    uVar3 = FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,uVar7 & 0xff,param_4,uVar10,0,0,0,uVar7);
  }
  lVar6 = uVar3 + lVar6 * 8;
  if (uVar5 == uVar4) {
    uVar4 = *puVar1;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x50) = lVar6;
    *(longlong *)(param_1 + 0x58) = lVar6;
    *(uint *)(param_1 + 0x60) = uVar7;
    if (uVar4 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  memmove(uVar3,uVar5,lVar9,param_4,uVar10,uVar3,lVar6,lVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800565f0(longlong *param_1)
void FUN_1800565f0(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  longlong lStack_78;
  longlong *plStack_68;
  longlong **pplStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 *puStack_48;
  undefined4 uStack_40;
  undefined1 auStack_38 [16];
  ulonglong uStack_28;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0xd0,8,3);
  pplStack_60 = (longlong **)plVar4;
  FUN_180049830(plVar4);
  *plVar4 = (longlong)&UNK_1809fdcd8;
  plVar4[0x18] = 0;
  *(undefined4 *)(plVar4 + 0x19) = 0;
  plStack_68 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plStack_68 = (longlong *)*param_1;
  *param_1 = (longlong)plVar4;
  if (plStack_68 != (longlong *)0x0) {
    (**(code **)(*plStack_68 + 0x38))();
  }
  lVar3 = _DAT_180c82868;
  puStack_50 = &UNK_1809fdc18;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 0xc;
  strcpy_s(auStack_38,0x10,&UNK_1809fdb40);
  plVar4 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x208,8,3);
  lStack_78 = lVar3 + 0x70;
  pplStack_60 = (longlong **)plVar4;
  FUN_18020e0e0(plVar4,&puStack_50,3,lVar3 + 0x2e0);
  *plVar4 = (longlong)&UNK_1809fe220;
  plStack_68 = plVar4;
  FUN_18020e840(plVar4);
  FUN_18005ea90(lVar3 + 0x48,&plStack_68);
  param_1[1] = (longlong)plVar4;
  puStack_50 = &UNK_18098bcb0;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = *(code **)*puVar1;
  pplStack_60 = &plStack_68;
  plStack_68 = (longlong *)*param_1;
  if (plStack_68 != (longlong *)0x0) {
    (**(code **)(*plStack_68 + 0x28))();
  }
  (*pcVar2)(puVar1,&plStack_68);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_98);
}



undefined8 FUN_1800567c0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180056810(longlong param_1)
void FUN_180056810(longlong param_1)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined1 auStack_c8 [32];
  undefined1 uStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  uint uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  longlong alStack_70 [2];
  char acStack_60 [16];
  ulonglong uStack_50;
  
  alStack_70[1] = 0xfffffffffffffffe;
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  lVar4 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(&lStack_78);
    lVar4 = lStack_78;
  }
  *(double *)(param_1 + 0xc0) = (double)(lVar4 - _DAT_180c8ed48) * _DAT_180c8ed50;
  LOCK();
  *(undefined4 *)(param_1 + 200) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xcc) = 1;
  UNLOCK();
  while( true ) {
    do {
      if (*(int *)(param_1 + 0xcc) == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_c8);
      }
      Sleep(10);
      lVar4 = _DAT_180c8ed58;
      if (_DAT_180c8ed58 == 0) {
        QueryPerformanceCounter(alStack_70);
        lVar4 = alStack_70[0];
      }
      dVar2 = (double)(lVar4 - _DAT_180c8ed48) * _DAT_180c8ed50;
    } while ((DAT_180c82853 == '\0') || (dVar2 - *(double *)(param_1 + 0xc0) <= 900.0));
    LOCK();
    *(undefined4 *)(param_1 + 200) = 1;
    UNLOCK();
    puStack_98 = &UNK_180a3c3e0;
    uStack_80 = 0;
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0;
    FUN_1806277c0(&puStack_98,0x1c);
    puVar5 = (undefined4 *)(puStack_90 + uStack_88);
    *puVar5 = 0x73736f50;
    puVar5[1] = 0x656c6269;
    puVar5[2] = 0x61656420;
    puVar5[3] = 0x636f6c64;
    *(undefined8 *)(puVar5 + 4) = 0x746365746564206b;
    puVar5[6] = 0x202c6465;
    *(undefined1 *)(puVar5 + 7) = 0;
    uStack_88 = 0x1c;
    FUN_1806277c0(&puStack_98,0x3e);
    puVar5 = (undefined4 *)(puStack_90 + uStack_88);
    *puVar5 = 0x69676e65;
    puVar5[1] = 0x6420656e;
    puVar5[2] = 0x6e206469;
    puVar5[3] = 0x7220746f;
    puVar5[4] = 0x65646e65;
    puVar5[5] = 0x20612072;
    puVar5[6] = 0x6d617266;
    puVar5[7] = 0x6f662065;
    *(undefined2 *)(puVar5 + 8) = 0x2072;
    *(undefined1 *)((longlong)puVar5 + 0x22) = 0;
    uStack_88 = 0x3e;
    FUN_180060680(acStack_60,&UNK_1809fd0a0,900);
    uVar3 = uStack_88;
    lVar4 = -1;
    do {
      lVar8 = lVar4;
      lVar4 = lVar8 + 1;
    } while (acStack_60[lVar8 + 1] != '\0');
    iVar7 = (int)(lVar8 + 1);
    if (0 < iVar7) break;
    uVar1 = uStack_88 + 10;
    FUN_1806277c0(&puStack_98,uVar1);
    puVar6 = (undefined8 *)(puStack_90 + uStack_88);
    *puVar6 = 0x73646e6f63657320;
    *(undefined2 *)(puVar6 + 1) = 0x2021;
    *(undefined1 *)((longlong)puVar6 + 10) = 0;
    uStack_88 = uVar1;
    FUN_1806277c0(&puStack_98,uVar3 + 0x2b);
    puVar5 = (undefined4 *)(puStack_90 + uStack_88);
    *puVar5 = 0x65766544;
    puVar5[1] = 0x65706f6c;
    puVar5[2] = 0x6e692072;
    puVar5[3] = 0x76726574;
    puVar5[4] = 0x69746e65;
    puVar5[5] = 0x73206e6f;
    puVar5[6] = 0x65676775;
    puVar5[7] = 0x64657473;
    *(undefined2 *)(puVar5 + 8) = 0x2e;
    puVar9 = &DAT_18098bc73;
    if (puStack_90 != (undefined *)0x0) {
      puVar9 = puStack_90;
    }
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_88 = uVar3 + 0x2b;
    (**(code **)(*(longlong *)*_DAT_180c8ed08 + 0x20))
              ((longlong *)*_DAT_180c8ed08,&UNK_1809fdbd0,0x175c,puVar9);
    *(double *)(param_1 + 0xc0) = dVar2;
    puStack_98 = &UNK_180a3c3e0;
    if (puStack_90 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_90 = (undefined *)0x0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    puStack_98 = &UNK_18098bcb0;
  }
  FUN_1806277c0(&puStack_98,uStack_88 + iVar7);
                    // WARNING: Subroutine does not return
  memcpy(puStack_90 + uStack_88,acStack_60,(longlong)((int)lVar8 + 2));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180056b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180056b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_30 [16];
  undefined *puStack_20;
  undefined *puStack_18;
  
  FUN_1800b4ec0(param_1,1,1,param_4,0xfffffffffffffffe);
  if (_DAT_180c8f008 != (longlong *)0x0) {
    cVar2 = (**(code **)(*_DAT_180c8f008 + 0x48))();
    if ((cVar2 != '\0') && (_DAT_180c8f008[2] != 0)) {
      (*(code *)_DAT_180c8f008[0x11])(0);
    }
  }
  puStack_20 = &UNK_180058ee0;
  puStack_18 = &UNK_180058ec0;
  FUN_18005c650(auStack_30);
  *(undefined1 *)(_DAT_180c8a980 + 0x3a0) = 1;
  FUN_18005e630(_DAT_180c82868);
  FUN_18005e630(_DAT_180c82868);
  if (_DAT_180c86948 != 0) {
    FUN_18006eb30();
  }
  FUN_18005e630(_DAT_180c82868);
  FUN_18005e630(_DAT_180c82868);
  FUN_18005e630(_DAT_180c82868);
  if (_DAT_180c86948 != 0) {
    FUN_18006eb30();
  }
  FUN_18005e630(_DAT_180c82868);
  FUN_1800b4ec0();
  lVar1 = _DAT_180c86890;
  *(undefined1 *)(_DAT_180c86890 + 0x1504) = 0;
  *(undefined1 *)(lVar1 + 0x1506) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180056c50(undefined8 param_1,undefined8 *param_2,undefined4 param_3)
void FUN_180056c50(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined1 auStack_158 [32];
  undefined **ppuStack_138;
  undefined ***pppuStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined4 uStack_70;
  undefined8 uStack_58;
  undefined4 uStack_50;
  ulonglong uStack_28;
  
  uStack_128 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  ppuStack_138 = &puStack_108;
  puStack_108 = &UNK_1809fcc28;
  puStack_100 = auStack_f0;
  uStack_f8 = 0;
  auStack_f0[0] = 0;
  uStack_70 = 0x17;
  puStack_120 = param_2;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
  uStack_58 = FUN_180627ae0(uVar1,param_2);
  uStack_50 = param_3;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
  ppuVar2 = (undefined **)FUN_18005ce30(uVar1,&puStack_108);
  ppuStack_118 = ppuVar2;
  if (ppuVar2 != (undefined **)0x0) {
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  }
  uVar1 = _DAT_180c82868;
  pppuStack_130 = &ppuStack_138;
  ppuStack_138 = ppuVar2;
  if (ppuVar2 != (undefined **)0x0) {
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  }
  FUN_18005e370(uVar1,&ppuStack_138);
  if (ppuVar2 != (undefined **)0x0) {
    (**(code **)(*ppuVar2 + 0x38))(ppuVar2);
  }
  pppuStack_130 = (undefined ***)&puStack_108;
  puStack_108 = &UNK_18098bcb0;
  *param_2 = &UNK_180a3c3e0;
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *param_2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_158);
}



undefined8 * FUN_180056de0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  return param_1;
}



undefined8 * FUN_180056e10(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  return param_1;
}





// 函数: void FUN_180056e40(void)
void FUN_180056e40(void)

{
  FUN_180057010();
  return;
}



undefined8 * FUN_180056e60(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 10;
  return param_1;
}



undefined8 * FUN_180056e90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0x60f] = 0;
  param_1[0x610] = 0;
  puVar1 = param_1 + 0xf;
  param_1[0xc] = puVar1;
  param_1[0xd] = (ulonglong)(-(int)puVar1 & 7) + (longlong)puVar1;
  param_1[0xe] = param_1 + 0x60f;
  param_1[0x60f] = &UNK_180059b80;
  param_1[0x610] = FUN_180059ba0;
  return param_1;
}



longlong * FUN_180056f10(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = (longlong *)*param_1;
  *param_1 = (longlong)param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}





// 函数: void FUN_180056f70(longlong param_1,longlong param_2)
void FUN_180056f70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_2 + 8);
  }
  if (puVar2 == (undefined *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    **(undefined1 **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (puVar2[lVar1] != '\0');
  if ((int)lVar1 < 0x400) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180056fc2. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(undefined8 *)(param_1 + 8),0x400);
    return;
  }
  FUN_180626f80(&UNK_18098bc48,0x400);
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 8) = 0;
  return;
}





// 函数: void FUN_180057010(longlong *param_1)
void FUN_180057010(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = param_1 + 3;
  lVar2 = *param_1;
  while ((longlong *)lVar2 != plVar1) {
    lVar2 = *(longlong *)((ulonglong)(-(int)lVar2 & 7) + lVar2);
    if ((code *)param_1[0x604] == (code *)0x0) {
      free();
    }
    else {
      (*(code *)param_1[0x604])();
    }
    *param_1 = lVar2;
  }
  *param_1 = (longlong)plVar1;
  param_1[1] = (ulonglong)(-(int)plVar1 & 7) + (longlong)plVar1;
  param_1[2] = (longlong)(param_1 + 0x603);
  return;
}





// 函数: void FUN_180057029(longlong param_1)
void FUN_180057029(longlong param_1)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  do {
    param_1 = *(longlong *)((ulonglong)(-(int)param_1 & 7) + param_1);
    if ((code *)unaff_RDI[0x604] == (code *)0x0) {
      free();
    }
    else {
      (*(code *)unaff_RDI[0x604])();
    }
    *unaff_RDI = param_1;
  } while (param_1 != unaff_RSI);
  *unaff_RDI = unaff_RSI;
  unaff_RDI[1] = (ulonglong)(-(int)unaff_RSI & 7) + unaff_RSI;
  unaff_RDI[2] = (longlong)(unaff_RDI + 0x603);
  return;
}





// 函数: void FUN_180057062(void)
void FUN_180057062(void)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  *unaff_RDI = unaff_RSI;
  unaff_RDI[1] = (ulonglong)(-(int)unaff_RSI & 7) + unaff_RSI;
  unaff_RDI[2] = (longlong)(unaff_RDI + 0x603);
  return;
}



undefined8 *
FUN_180057090(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809fdc18;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    *(int *)(param_1 + 2) = (int)lVar1;
    strcpy_s(param_1[1],0x10,param_2,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180057110(longlong *param_1)
void FUN_180057110(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (longlong)puVar2;
  return;
}





// 函数: void FUN_180057170(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180057170(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)param_1[1];
  for (puVar2 = (undefined8 *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0xb) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800571e0(longlong *param_1,undefined4 *param_2)
void FUN_1800571e0(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4 < (undefined4 *)param_1[2]) {
    param_1[1] = (longlong)(puVar4 + 1);
    *puVar4 = *param_2;
    return;
  }
  puVar3 = (undefined4 *)*param_1;
  lVar1 = (longlong)puVar4 - (longlong)puVar3 >> 2;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      puVar2 = (undefined4 *)0x0;
      goto LAB_18005726e;
    }
  }
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,(char)param_1[3]);
  puVar3 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)param_1[1];
LAB_18005726e:
  if (puVar3 != puVar4) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar3,(longlong)puVar4 - (longlong)puVar3);
  }
  *puVar2 = *param_2;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (longlong)puVar2;
  param_1[1] = (longlong)(puVar2 + 1);
  param_1[2] = (longlong)(puVar2 + lVar1);
  return;
}





// 函数: void FUN_1800572d0(longlong param_1)
void FUN_1800572d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18004b790(param_1,*puVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  *(longlong *)param_1 = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(longlong *)(param_1 + 8) = param_1;
  return;
}





// 函数: void FUN_1800572e6(void)
void FUN_1800572e6(void)

{
  FUN_18004b790();
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180057314(void)
void FUN_180057314(void)

{
  longlong unaff_RBX;
  
  *(longlong *)unaff_RBX = unaff_RBX;
  *(undefined8 *)(unaff_RBX + 0x10) = 0;
  *(undefined1 *)(unaff_RBX + 0x18) = 0;
  *(undefined8 *)(unaff_RBX + 0x20) = 0;
  *(longlong *)(unaff_RBX + 8) = unaff_RBX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



