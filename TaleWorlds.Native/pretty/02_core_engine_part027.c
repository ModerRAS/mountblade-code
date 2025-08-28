#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part027.c - 3 个函数

// 函数: void FUN_180072000(uint64_t param_1,longlong param_2,int32_t param_3,longlong param_4,
void FUN_180072000(uint64_t param_1,longlong param_2,int32_t param_3,longlong param_4,
                  int8_t param_5,char param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int32_t uVar7;
  uint uVar8;
  longlong lVar9;
  int8_t *puVar10;
  void **ppuVar11;
  int32_t *puVar12;
  uint64_t *puVar13;
  int8_t *puVar14;
  void *puVar15;
  uint uVar16;
  longlong lVar17;
  int8_t uVar18;
  ulonglong uVar19;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  void *puStack_138;
  int8_t *puStack_130;
  uint uStack_128;
  ulonglong uStack_120;
  char cStack_118;
  char cStack_117;
  int8_t uStack_116;
  uint uStack_114;
  void *puStack_110;
  int8_t *puStack_108;
  uint uStack_100;
  uint64_t uStack_f8;
  void *puStack_f0;
  longlong lStack_e8;
  int32_t uStack_d8;
  void *puStack_d0;
  uint64_t *puStack_c8;
  int32_t uStack_c0;
  ulonglong uStack_b8;
  int32_t uStack_b0;
  void *puStack_a8;
  void *puStack_a0;
  int32_t uStack_90;
  longlong lStack_88;
  void *puStack_80;
  longlong lStack_78;
  int32_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  ulonglong uStack_48;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  puVar10 = (int8_t *)0x0;
  uStack_114 = 0;
  uStack_116 = 0;
  uStack_b0 = param_3;
  lStack_88 = param_4;
  if ((system_debug_flag != '\0') || (system_event_handler != '\0')) goto LAB_180072d7b;
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_1800634b0(&uStack_58,0x10,&UNK_1809fd0a0,param_3);
  lVar9 = FUN_180627910(&puStack_f0,param_4);
  puStack_110 = &UNK_180a3c3e0;
  uVar16 = 0;
  uStack_f8 = 0;
  puStack_108 = (int8_t *)0x0;
  uStack_100 = 0;
  uStack_114 = 4;
  uVar6 = *(uint *)(lVar9 + 0x10);
  uVar19 = (ulonglong)uVar6;
  uVar4 = 0;
  if (*(longlong *)(lVar9 + 8) == 0) {
LAB_180072120:
    uVar16 = uVar4;
    if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar10,*(uint64_t *)(lVar9 + 8),uVar19);
    }
  }
  else if (uVar6 != 0) {
    iVar3 = uVar6 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar10 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
    *puVar10 = 0;
    puStack_108 = puVar10;
    uVar4 = FUN_18064e990(puVar10);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar4);
    goto LAB_180072120;
  }
  if (puVar10 != (int8_t *)0x0) {
    puVar10[uVar19] = 0;
  }
  uVar4 = *(uint *)(lVar9 + 0x1c);
  uStack_100 = uVar6;
  uStack_f8._4_4_ = uVar4;
  if (param_2 != 0) {
    lVar9 = -1;
    do {
      lVar17 = lVar9;
      lVar9 = lVar17 + 1;
    } while (*(char *)(param_2 + lVar9) != '\0');
    if (0 < (int)lVar9) {
      iVar3 = uVar6 + (int)lVar9;
      if (iVar3 != 0) {
        uVar6 = iVar3 + 1;
        if (puVar10 == (int8_t *)0x0) {
          if ((int)uVar6 < 0x10) {
            uVar6 = 0x10;
          }
          puVar10 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar6,0x13);
          *puVar10 = 0;
        }
        else {
          if (uVar6 <= uVar16) goto LAB_1800721e1;
          puStack_148 = (int8_t *)CONCAT71(puStack_148._1_7_,0x13);
          puVar10 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar10,uVar6,0x10);
        }
        puStack_108 = puVar10;
        uStack_f8._0_4_ = FUN_18064e990(puVar10);
      }
LAB_1800721e1:
                    // WARNING: Subroutine does not return
      memcpy(puVar10 + uVar19,param_2,(longlong)((int)lVar17 + 2));
    }
  }
  FUN_180627e10(&puStack_110,&puStack_a8,&uStack_58);
  uStack_114 = 0;
  puStack_110 = &UNK_180a3c3e0;
  if (puVar10 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar10);
  }
  puStack_108 = (int8_t *)0x0;
  uStack_f8 = (ulonglong)uStack_f8._4_4_ << 0x20;
  puStack_110 = &UNK_18098bcb0;
  puStack_f0 = &UNK_180a3c3e0;
  if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_e8 = 0;
  uStack_d8 = 0;
  puStack_f0 = &UNK_18098bcb0;
  puVar15 = &system_buffer_ptr;
  if (puStack_a0 != (void *)0x0) {
    puVar15 = puStack_a0;
  }
  cVar2 = FUN_1800f9600(puVar15);
  if (cVar2 == '\0') {
    iVar3 = WaitForSingleObject(_DAT_180c91900,0);
    if (iVar3 == 0) {
      cStack_117 = '\x01';
      cVar2 = (**(code **)**(uint64_t **)(_DAT_180c8ed08 + 0x18))();
      if ((cVar2 == '\0') && (iVar3 = IsDebuggerPresent(), iVar3 != 0)) {
        cVar2 = '\x01';
      }
      else {
        cVar2 = '\0';
      }
      cStack_118 = cVar2;
      if (_DAT_180c82868 == 0) {
LAB_1800722f5:
        lVar9 = _DAT_180c86950;
        if ((_DAT_180c86950 != 0) && (*(char *)(_DAT_180c86950 + 0x1609) != '\x01')) {
          FUN_1801723a0(*(uint64_t *)(_DAT_180c86870 + 8),
                        *(char *)(_DAT_180c868d0 + 0x2028) != '\0',
                        *(int32_t *)(_DAT_180c86950 + 0x160c));
          *(int8_t *)(lVar9 + 0x1609) = 1;
        }
        if (*(longlong *)(_DAT_180c86870 + 8) != 0) {
          FUN_1801719d0();
        }
      }
      else {
        iVar3 = *(int *)(**(longlong **)(_DAT_180c82868 + 8) + 0x48);
        iVar5 = _Thrd_id();
        cStack_117 = iVar5 == iVar3;
        if ((bool)cStack_117) goto LAB_1800722f5;
      }
      if (cVar2 != '\0') {
        if ((param_6 == '\0') || (*(int *)(_DAT_180c86870 + 0x340) == 2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uStack_116 = 1;
      }
      puStack_110 = &UNK_180a3c3e0;
      uStack_f8 = 0;
      puStack_108 = (void *)0x0;
      uStack_100 = 0;
      if (cVar2 == '\0') {
        lVar9 = FUN_1800f9ce0(&puStack_f0,0);
        uStack_100 = *(uint *)(lVar9 + 0x10);
        puStack_108 = *(int8_t **)(lVar9 + 8);
        uStack_f8 = *(ulonglong *)(lVar9 + 0x18);
        *(int32_t *)(lVar9 + 0x10) = 0;
        *(uint64_t *)(lVar9 + 8) = 0;
        *(uint64_t *)(lVar9 + 0x18) = 0;
        puStack_f0 = &UNK_180a3c3e0;
        if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_e8 = 0;
        uStack_d8 = 0;
        puStack_f0 = &UNK_18098bcb0;
      }
      puVar10 = puStack_108;
      puStack_138 = &UNK_180a3c3e0;
      uStack_120 = 0;
      puStack_130 = (int8_t *)0x0;
      uStack_128 = 0;
      puStack_130 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x15,0x13);
      *puStack_130 = 0;
      uVar6 = FUN_18064e990(puStack_130);
      uStack_120 = CONCAT44(uStack_120._4_4_,uVar6);
      puVar12 = (int32_t *)(puStack_130 + uStack_128);
      *puVar12 = 0x69746f4e;
      puVar12[1] = 0x61636966;
      puVar12[2] = 0x6e6f6974;
      puVar12[3] = 0x73734120;
      puVar12[4] = 0x21747265;
      *(int8_t *)(puVar12 + 5) = 0;
      uStack_128 = 0x14;
      if (puStack_130 == (int8_t *)0x0) {
        uStack_128 = 0x14;
        puStack_130 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13);
        *puStack_130 = 0;
LAB_180072521:
        uVar7 = FUN_18064e990(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      }
      else if (uVar6 < 0x16) {
        puStack_148 = (int8_t *)CONCAT71(puStack_148._1_7_,0x13);
        uStack_128 = 0x14;
        puStack_130 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,0x16,0x10);
        goto LAB_180072521;
      }
      *(int16_t *)(puStack_130 + uStack_128) = 10;
      uStack_128 = 0x15;
      uVar6 = 0x16;
      if (puStack_130 == (int8_t *)0x0) {
        uStack_128 = 0x15;
        puStack_130 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x17,0x13);
        *puStack_130 = 0;
LAB_1800725ac:
        uVar7 = FUN_18064e990(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      }
      else if ((uint)uStack_120 < 0x17) {
        puStack_148 = (int8_t *)CONCAT71(puStack_148._1_7_,0x13);
        uStack_128 = 0x15;
        puStack_130 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,0x17,0x10);
        goto LAB_1800725ac;
      }
      *(int16_t *)(puStack_130 + uStack_128) = 10;
      uStack_128 = 0x16;
      if (param_2 != 0) {
        lVar9 = -1;
        do {
          lVar17 = lVar9;
          lVar9 = lVar17 + 1;
        } while (*(char *)(param_2 + lVar9) != '\0');
        iVar3 = (int)lVar9;
        if (0 < iVar3) {
          uVar4 = uVar6;
          if (iVar3 != -0x16) {
            uVar16 = iVar3 + 0x17;
            if (puStack_130 == (int8_t *)0x0) {
              if ((int)uVar16 < 0x10) {
                uVar16 = 0x10;
              }
              uStack_128 = uVar6;
              puStack_130 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar16,0x13);
              *puStack_130 = 0;
            }
            else {
              uVar4 = uStack_128;
              if (uVar16 <= (uint)uStack_120) goto LAB_180072662;
              puStack_148 = (int8_t *)CONCAT71(puStack_148._1_7_,0x13);
              uStack_128 = uVar6;
              puStack_130 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,uVar16,0x10);
            }
            uVar7 = FUN_18064e990(puStack_130);
            uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
            uVar4 = uStack_128;
          }
LAB_180072662:
          uStack_128 = uVar4;
                    // WARNING: Subroutine does not return
          memcpy(puStack_130 + uStack_128,param_2,(longlong)((int)lVar17 + 2));
        }
      }
      if (puStack_130 == (int8_t *)0x0) {
        uStack_128 = uVar6;
        puStack_130 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x18,0x13);
        *puStack_130 = 0;
LAB_1800726e7:
        uVar7 = FUN_18064e990(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      }
      else if ((uint)uStack_120 < 0x18) {
        puStack_148 = (int8_t *)CONCAT71(puStack_148._1_7_,0x13);
        uStack_128 = uVar6;
        puStack_130 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,0x18,0x10);
        goto LAB_1800726e7;
      }
      *(int16_t *)(puStack_130 + uStack_128) = 0x3a;
      uStack_128 = 0x17;
      FUN_180628380(&puStack_138,uStack_b0);
      uVar6 = uStack_128;
      uVar4 = uStack_128 + 1;
      if (uVar4 != 0) {
        uVar16 = uStack_128 + 2;
        if (puStack_130 == (int8_t *)0x0) {
          if ((int)uVar16 < 0x10) {
            uVar16 = 0x10;
          }
          puStack_130 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar16,0x13);
          *puStack_130 = 0;
        }
        else {
          if (uVar16 <= (uint)uStack_120) goto LAB_180072780;
          puStack_148 = (int8_t *)CONCAT71(puStack_148._1_7_,0x13);
          puStack_130 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,uVar16,0x10);
        }
        uVar7 = FUN_18064e990(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      }
LAB_180072780:
      *(int16_t *)(puStack_130 + uStack_128) = 10;
      uVar16 = uVar6 + 0xd;
      uStack_128 = uVar4;
      if (uVar16 != 0) {
        uVar4 = uVar6 + 0xe;
        if (puStack_130 == (int8_t *)0x0) {
          if ((int)uVar4 < 0x10) {
            uVar4 = 0x10;
          }
          puStack_130 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar4,0x13);
          *puStack_130 = 0;
        }
        else {
          if (uVar4 <= (uint)uStack_120) goto LAB_1800727ff;
          puStack_148 = (int8_t *)CONCAT71(puStack_148._1_7_,0x13);
          puStack_130 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,uVar4,0x10);
        }
        uVar7 = FUN_18064e990(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      }
LAB_1800727ff:
      puVar13 = (uint64_t *)(puStack_130 + uStack_128);
      *puVar13 = 0x6973736572707845;
      *(int32_t *)(puVar13 + 1) = 0x203a6e6f;
      *(int8_t *)((longlong)puVar13 + 0xc) = 0;
      lVar9 = -1;
      uStack_128 = uVar16;
      if (param_4 != 0) {
        do {
          lVar17 = lVar9;
          lVar9 = lVar17 + 1;
        } while (*(char *)(lVar9 + param_4) != '\0');
        if (0 < (int)lVar9) {
          iVar3 = uVar16 + (int)lVar9;
          if (iVar3 != 0) {
            uVar6 = iVar3 + 1;
            if (puStack_130 == (int8_t *)0x0) {
              if ((int)uVar6 < 0x10) {
                uVar6 = 0x10;
              }
              puStack_130 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar6,0x13);
              *puStack_130 = 0;
            }
            else {
              if (uVar6 <= (uint)uStack_120) goto LAB_1800728ad;
              puStack_148 = (int8_t *)CONCAT71(puStack_148._1_7_,0x13);
              puStack_130 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,uVar6,0x10);
            }
            uVar7 = FUN_18064e990(puStack_130);
            uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
          }
LAB_1800728ad:
                    // WARNING: Subroutine does not return
          memcpy(puStack_130 + uStack_128,param_4,(longlong)((int)lVar17 + 2));
        }
      }
      uVar4 = uVar6 + 0xf;
      if (uVar4 != 0) {
        uVar8 = uVar6 + 0x10;
        if (puStack_130 == (int8_t *)0x0) {
          if ((int)uVar8 < 0x10) {
            uVar8 = 0x10;
          }
          puStack_130 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar8,0x13);
          *puStack_130 = 0;
        }
        else {
          if (uVar8 <= (uint)uStack_120) goto LAB_180072934;
          puStack_148 = (int8_t *)CONCAT71(puStack_148._1_7_,0x13);
          puStack_130 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,uVar8,0x10);
        }
        uVar7 = FUN_18064e990(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      }
LAB_180072934:
      *(int16_t *)(puStack_130 + uStack_128) = 0xa0a;
      *(int8_t *)((longlong)(puStack_130 + uStack_128) + 2) = 0;
      uStack_128 = uVar4;
      if (uVar6 + 0x6d != 0) {
        uVar4 = uVar6 + 0x6e;
        if (puStack_130 == (int8_t *)0x0) {
          if ((int)uVar4 < 0x10) {
            uVar4 = 0x10;
          }
          puStack_130 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar4,0x13);
          *puStack_130 = 0;
        }
        else {
          if (uVar4 <= (uint)uStack_120) goto LAB_1800729bd;
          puStack_148 = (int8_t *)CONCAT71(puStack_148._1_7_,0x13);
          puStack_130 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,uVar4,0x10);
        }
        uVar7 = FUN_18064e990(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      }
LAB_1800729bd:
      puVar13 = (uint64_t *)(puStack_130 + uStack_128);
      *puVar13 = 0x232323232323233c;
      puVar13[1] = 0x2323232323232323;
      puVar13[2] = 0x2323232323232323;
      puVar13[3] = 0x2323232323232323;
      puVar13[4] = 0x2323232323232323;
      puVar13[5] = 0x2323232323232323;
      puVar13[6] = 0x2323232323232323;
      puVar13[7] = 0x2323232323232323;
      *(int32_t *)(puVar13 + 8) = 0x23232323;
      *(int32_t *)((longlong)puVar13 + 0x44) = 0x23232323;
      *(int32_t *)(puVar13 + 9) = 0x23232323;
      *(int32_t *)((longlong)puVar13 + 0x4c) = 0x23232323;
      puVar13[10] = 0x2323232323232323;
      *(int32_t *)(puVar13 + 0xb) = 0x3e232323;
      *(int16_t *)((longlong)puVar13 + 0x5c) = 0xa0a;
      *(int8_t *)((longlong)puVar13 + 0x5e) = 0;
      puStack_148 = &system_buffer_ptr;
      if (puStack_130 != (int8_t *)0x0) {
        puStack_148 = puStack_130;
      }
      uStack_128 = uVar6 + 0x6d;
      FUN_180062380(_DAT_180c86928,4,0xffffffff00000000,&UNK_1809ff5b0);
      puStack_148 = &system_buffer_ptr;
      if (puVar10 != (void *)0x0) {
        puStack_148 = puVar10;
      }
      FUN_1800623b0(_DAT_180c86928,4,0xffffffff00000000,3);
      FUN_1800623e0();
      puVar14 = &system_buffer_ptr;
      if (puStack_130 != (int8_t *)0x0) {
        puVar14 = puStack_130;
      }
      OutputDebugStringA(puVar14);
      FUN_18004c2b0(param_4);
      puVar15 = &system_buffer_ptr;
      if (puStack_a0 != (void *)0x0) {
        puVar15 = puStack_a0;
      }
      iVar3 = FUN_1800f98e0(puVar15);
      if ((cStack_118 == '\0') && (iVar3 == 0)) {
        if ((_DAT_180c86870 == 0) || (*(char *)(_DAT_180c86870 + 0x141) == '\0')) {
          uVar18 = 0;
        }
        else {
          uVar18 = 1;
        }
        if (_DAT_180c86870 == 0) {
          puStack_d0 = &UNK_180a3c3e0;
          uStack_b8 = 0;
          puStack_c8 = (uint64_t *)0x0;
          uStack_c0 = 0;
          puVar13 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x34,0x13);
          *(int8_t *)puVar13 = 0;
          puStack_c8 = puVar13;
          uVar7 = FUN_18064e990(puVar13);
          uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar7);
          *puVar13 = 0x7270706d75645c5c;
          puVar13[1] = 0x2e726f737365636f;
          puVar13[2] = 0x6c726f77656c6174;
          puVar13[3] = 0x445c6d6f632e7364;
          *(int32_t *)(puVar13 + 4) = 0x50706d75;
          *(int32_t *)((longlong)puVar13 + 0x24) = 0x65636f72;
          *(int32_t *)(puVar13 + 5) = 0x6e697373;
          *(int32_t *)((longlong)puVar13 + 0x2c) = 0x6c6f4667;
          *(int32_t *)(puVar13 + 6) = 0x726564;
          uStack_c0 = 0x33;
          ppuVar11 = &puStack_d0;
          uVar6 = 2;
          uStack_114 = 2;
        }
        else {
          ppuVar11 = (void **)FUN_180627ae0(&puStack_80,_DAT_180c86870 + 0x148);
          uVar6 = 1;
          uStack_114 = 1;
          puVar13 = puStack_c8;
        }
        uVar7 = FUN_180627ae0(&puStack_f0,ppuVar11);
        if ((uVar6 & 2) != 0) {
          uVar6 = uVar6 & 0xfffffffd;
          puStack_d0 = &UNK_180a3c3e0;
          uStack_114 = uVar6;
          if (puVar13 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar13);
          }
          puStack_c8 = (uint64_t *)0x0;
          uStack_b8 = uStack_b8 & 0xffffffff00000000;
          puStack_d0 = &UNK_18098bcb0;
        }
        if ((uVar6 & 1) != 0) {
          uStack_114 = uVar6 & 0xfffffffe;
          puStack_80 = &UNK_180a3c3e0;
          if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_78 = 0;
          uStack_68 = 0;
          puStack_80 = &UNK_18098bcb0;
        }
        puStack_148 = &system_buffer_ptr;
        if (puVar10 != (void *)0x0) {
          puStack_148 = puVar10;
        }
        FUN_1800669c0(uVar7,&puStack_f0,uVar18,param_5);
        puStack_f0 = &UNK_180a3c3e0;
        if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_e8 = 0;
        uStack_d8 = 0;
        puStack_f0 = &UNK_18098bcb0;
      }
      puVar15 = &system_buffer_ptr;
      if (puStack_a0 != (void *)0x0) {
        puVar15 = puStack_a0;
      }
      FUN_1800f96b0(puVar15,1);
      if (cStack_117 != '\0') {
        if (*(longlong *)(_DAT_180c86870 + 8) != 0) {
          FUN_1801718f0();
        }
        if (_DAT_180c86950 != 0) {
          FUN_180092940(_DAT_180c86950,*(int8_t *)(_DAT_180c86950 + 0x160a));
        }
      }


// 函数: void FUN_180072e80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180072e80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint64_t uVar2;
  void *puStack_30;
  longlong lStack_28;
  
  plVar1 = *(longlong **)(_DAT_180c86870 + 0x2b0);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x110))(plVar1,&puStack_30,param_3,param_4,0xfffffffffffffffe);
    FUN_18005d190(param_2,uVar2);
    puStack_30 = &UNK_180a3c3e0;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_180072f00(uint64_t param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t **ppuVar7;
  int8_t *puVar8;
  uint64_t uVar9;
  int16_t *puVar10;
  uint uVar11;
  uint64_t *puVar12;
  void *puVar13;
  void *puVar14;
  char cStackX_10;
  uint uVar15;
  void *puStack_110;
  uint64_t *puStack_108;
  int iStack_100;
  uint64_t uStack_f8;
  void *puStack_f0;
  int16_t *puStack_e8;
  int32_t uStack_e0;
  uint64_t uStack_d8;
  void *puStack_d0;
  void *puStack_c8;
  int32_t uStack_c0;
  ulonglong uStack_b8;
  void *puStack_b0;
  uint64_t *puStack_a8;
  int32_t uStack_a0;
  ulonglong uStack_98;
  void *puStack_90;
  int8_t *puStack_88;
  int32_t uStack_80;
  ulonglong uStack_78;
  void *puStack_70;
  uint64_t *puStack_68;
  uint64_t *puStack_60;
  longlong lStack_48;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puVar5 = (uint64_t *)0x0;
  iVar3 = 0;
  WaitForSingleObject(_DAT_180c91900,300000);
  lStack_48 = _DAT_180c82868;
  if (_DAT_180c82868 != 0) {
    FUN_18005dab0(_DAT_180c82868);
  }
  puStack_f0 = &UNK_180a3c3e0;
  uStack_d8 = 0;
  puStack_e8 = (int16_t *)0x0;
  uStack_e0 = 0;
  puStack_e8 = (int16_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puStack_e8 = 0;
  uVar1 = FUN_18064e990(puStack_e8);
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar1);
  *puStack_e8 = 0xa0a;
  *(int8_t *)(puStack_e8 + 1) = 0;
  uStack_e0 = 2;
  puStack_d0 = &UNK_180a3c3e0;
  uStack_b8 = 0;
  puStack_c8 = (void *)0x0;
  uStack_c0 = 0;
  FUN_1800a32b0(_DAT_180c86938,&puStack_68);
  if (puStack_68 != puStack_60) {
    FUN_180628040(&puStack_f0,&UNK_1809fe62c,&UNK_1809ff7c0);
    puVar6 = puVar5;
    puVar12 = puVar5;
    if ((longlong)puStack_60 - (longlong)puStack_68 >> 5 != 0) {
      do {
        puVar13 = &system_buffer_ptr;
        if (*(void **)((longlong)(puVar6 + 1) + (longlong)puStack_68) != (void *)0x0) {
          puVar13 = *(void **)((longlong)(puVar6 + 1) + (longlong)puStack_68);
        }
        FUN_180628040(&puStack_f0,&UNK_1809fe62c,puVar13);
        uVar11 = (int)puVar12 + 1;
        puVar6 = puVar6 + 4;
        puVar12 = (uint64_t *)(ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 <
               (ulonglong)((longlong)puStack_60 - (longlong)puStack_68 >> 5));
    }
    FUN_180628040(&puStack_f0,&UNK_1809ff840,&UNK_1809ff800);
    FUN_18006f590(&puStack_110);
    if (iStack_100 != 0) {
      FUN_180628040(&puStack_f0,&UNK_1809fe62c,&UNK_1809ff848);
      puVar6 = (uint64_t *)&system_buffer_ptr;
      if (puStack_108 != (uint64_t *)0x0) {
        puVar6 = puStack_108;
      }
      FUN_180628040(&puStack_f0,&UNK_1809ff888,puVar6);
      FUN_180628040(&puStack_f0,&UNK_1809ff840,&UNK_1809ff800);
    }
    puStack_110 = &UNK_180a3c3e0;
    if (puStack_108 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_108 = (uint64_t *)0x0;
    uStack_f8 = (ulonglong)uStack_f8._4_4_ << 0x20;
    puStack_110 = &UNK_18098bcb0;
  }
  lVar4 = FUN_1800f9ce0(&puStack_110,param_2[1]);
  uStack_c0 = *(int32_t *)(lVar4 + 0x10);
  puVar13 = *(void **)(lVar4 + 8);
  uStack_b8 = *(ulonglong *)(lVar4 + 0x18);
  *(int32_t *)(lVar4 + 0x10) = 0;
  *(uint64_t *)(lVar4 + 8) = 0;
  *(uint64_t *)(lVar4 + 0x18) = 0;
  puStack_110 = &UNK_180a3c3e0;
  puStack_c8 = puVar13;
  puStack_70 = puVar13;
  if (puStack_108 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_108 = (uint64_t *)0x0;
  uStack_f8 = uStack_f8 & 0xffffffff00000000;
  puStack_110 = &UNK_18098bcb0;
  FUN_180628040(&puStack_f0,&UNK_1809ff8a8,*(int32_t *)*param_2,
                *(uint64_t *)((int32_t *)*param_2 + 4));
  FUN_180628040(&puStack_f0,&UNK_1809fe62c,&UNK_1809ff8d8);
  puVar14 = &system_buffer_ptr;
  if (puVar13 != (void *)0x0) {
    puVar14 = puVar13;
  }
  FUN_180628040(&puStack_f0,&UNK_1809fe62c,puVar14);
  puVar10 = (int16_t *)&system_buffer_ptr;
  if (puStack_e8 != (int16_t *)0x0) {
    puVar10 = puStack_e8;
  }
  FUN_1800623b0(_DAT_180c86928,5,0xffffffff00000000,3,&UNK_1809fe62c,puVar10);
  FUN_1800623e0();
  lVar4 = _DAT_180c86870;
  if (_DAT_180c86870 == 0) {
    cStackX_10 = '\0';
    puStack_110 = &UNK_180a3c3e0;
    uStack_f8 = 0;
    puStack_108 = (uint64_t *)0x0;
    iStack_100 = 0;
    puVar6 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x34,0x13);
    *(int8_t *)puVar6 = 0;
    puStack_108 = puVar6;
    uVar1 = FUN_18064e990(puVar6);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar1);
    *puVar6 = 0x7270706d75645c5c;
    puVar6[1] = 0x2e726f737365636f;
    puVar6[2] = 0x6c726f77656c6174;
    puVar6[3] = 0x445c6d6f632e7364;
    *(int32_t *)(puVar6 + 4) = 0x50706d75;
    *(int32_t *)((longlong)puVar6 + 0x24) = 0x65636f72;
    *(int32_t *)(puVar6 + 5) = 0x6e697373;
    *(int32_t *)((longlong)puVar6 + 0x2c) = 0x6c6f4667;
    *(int32_t *)(puVar6 + 6) = 0x726564;
    iVar3 = 0x33;
    iStack_100 = 0x33;
    uVar11 = 2;
    uVar15 = 2;
    ppuVar7 = &puStack_108;
    puVar5 = puStack_a8;
  }
  else {
    cStackX_10 = *(char *)(_DAT_180c86870 + 0x141);
    puStack_b0 = &UNK_180a3c3e0;
    uStack_98 = 0;
    puStack_a8 = (uint64_t *)0x0;
    uStack_a0 = 0;
    if (*(int *)(_DAT_180c86870 + 0x158) != 0) {
      iVar2 = *(int *)(_DAT_180c86870 + 0x158) + 1;
      if (iVar2 < 0x10) {
        iVar2 = 0x10;
      }
      puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,0x13);
      *(int8_t *)puVar5 = 0;
      puStack_a8 = puVar5;
      uVar1 = FUN_18064e990(puVar5);
      uStack_98 = CONCAT44(uStack_98._4_4_,uVar1);
      if (*(int *)(lVar4 + 0x158) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puVar5,*(uint64_t *)(lVar4 + 0x150),*(int *)(lVar4 + 0x158) + 1);
      }
    }
    if (*(longlong *)(lVar4 + 0x150) != 0) {
      uStack_a0 = 0;
      if (puVar5 != (uint64_t *)0x0) {
        *(int8_t *)puVar5 = 0;
      }
      uStack_98 = uStack_98 & 0xffffffff;
    }
    uVar11 = 1;
    uVar15 = 1;
    ppuVar7 = &puStack_a8;
    puVar6 = puStack_108;
  }
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (int8_t *)0x0;
  uStack_80 = 0;
  if (iVar3 != 0) {
    uVar15 = iVar3 + 1;
    uVar11 = uVar15;
    if (uVar15 < 0x10) {
      uVar11 = 0x10;
    }
    puVar8 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,uVar11,0x13);
    *puVar8 = 0;
    puStack_88 = puVar8;
    uVar1 = FUN_18064e990(puVar8);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
                    // WARNING: Subroutine does not return
    memcpy(puVar8,*ppuVar7,uVar15);
  }
  uStack_78 = 0;
  uStack_80 = 0;
  if ((uVar11 & 2) != 0) {
    uVar15 = uVar11 & 0xfffffffd;
    puStack_110 = &UNK_180a3c3e0;
    if (puVar6 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
    puStack_108 = (uint64_t *)0x0;
    uStack_f8 = uStack_f8 & 0xffffffff00000000;
    puStack_110 = &UNK_18098bcb0;
    uVar11 = uVar15;
  }
  if ((uVar11 & 1) != 0) {
    uVar15 = uVar11 & 0xfffffffe;
    puStack_b0 = &UNK_180a3c3e0;
    if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
    puStack_a8 = (uint64_t *)0x0;
    uStack_98 = uStack_98 & 0xffffffff00000000;
    puStack_b0 = &UNK_18098bcb0;
  }
  puVar14 = &system_buffer_ptr;
  if (puVar13 != (void *)0x0) {
    puVar14 = puVar13;
  }
  FUN_180066320(0,&puStack_90,cStackX_10,1,puVar14,puVar10,uVar15);
  if (lStack_48 != 0) {
    FUN_18005db30();
  }
  do {
    iVar3 = ReleaseSemaphore(_DAT_180c91900,1);
  } while (iVar3 == 0);
  uVar9 = __acrt_iob_func(1);
  fflush(uVar9);
  uVar9 = __acrt_iob_func(2);
  fflush(uVar9);
  puStack_90 = &UNK_180a3c3e0;
  if (puStack_88 == (int8_t *)0x0) {
    puStack_88 = (int8_t *)0x0;
    uStack_78 = uStack_78 & 0xffffffff00000000;
    puStack_90 = &UNK_18098bcb0;
    for (puVar5 = puStack_68; puVar5 != puStack_60; puVar5 = puVar5 + 4) {
      (**(code **)*puVar5)(puVar5,0);
    }
    if (puStack_68 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_d0 = &UNK_180a3c3e0;
    if (puStack_70 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_c8 = (void *)0x0;
    uStack_b8 = uStack_b8 & 0xffffffff00000000;
    puStack_d0 = &UNK_18098bcb0;
    puStack_f0 = &UNK_180a3c3e0;
    if (puStack_e8 == (int16_t *)0x0) {
      return cStackX_10 != '\0';
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180073630(uint64_t param_1,uint64_t param_2)
void FUN_180073630(uint64_t param_1,uint64_t param_2)

{
  void *puVar1;
  char cVar2;
  int32_t auStackX_18 [4];
  void *puStack_30;
  longlong lStack_28;
  
  FUN_1800623b0(_DAT_180c86928,0,0x100000000,0,&UNK_1809ff918,param_2,0xfffffffffffffffe);
  if (system_debug_flag == '\0') {
    auStackX_18[0] = 0xffff0000;
    FUN_180627910(&puStack_30,param_2);
    puVar1 = *(void **)*_DAT_180c8ed08;
    if (puVar1 == &UNK_18098bb88) {
      cVar2 = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
    }
    else {
      cVar2 = (**(code **)(puVar1 + 0x50))((uint64_t *)*_DAT_180c8ed08);
    }
    if (cVar2 == '\0') {
      (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                ((longlong *)_DAT_180c8ed08[1],&puStack_30,auStackX_18);
    }
    puStack_30 = &UNK_180a3c3e0;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



