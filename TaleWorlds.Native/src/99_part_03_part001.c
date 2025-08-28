#include "TaleWorlds.Native.Split.h"

// 99_part_03_part001.c - 7 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_03.c - 500 个函数


// 函数: void FUN_1801c4410(undefined8 **param_1,longlong param_2)
void FUN_1801c4410(undefined8 **param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined8 **ppuStackX_8;
  undefined8 ***pppuStackX_10;
  undefined8 **ppuStackX_18;
  undefined8 *puStackX_20;
  undefined8 *puStack_c8;
  undefined1 uStack_c0;
  undefined *puStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a0;
  undefined8 *puStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  longlong lStack_80;
  undefined4 uStack_70;
  undefined8 *apuStack_68 [2];
  code *pcStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  puVar1 = _DAT_180c8aa08;
  uStack_48 = 0xfffffffffffffffe;
  uVar9 = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  ppuStackX_8 = param_1;
  if (iVar2 == 7) {
    lVar3 = 0;
    do {
      lVar8 = lVar3 + 1;
      if (*(char *)(*(longlong *)(param_2 + 8) + lVar3) != (&UNK_180a0ce90)[lVar3])
      goto LAB_1801c4476;
      lVar3 = lVar8;
    } while (lVar8 != 8);
  }
  else {
LAB_1801c4476:
    if (iVar2 == 5) {
      lVar3 = 0;
      do {
        lVar8 = lVar3 + 1;
        if (*(char *)(*(longlong *)(param_2 + 8) + lVar3) != (&UNK_180a0ce64)[lVar3])
        goto LAB_1801c44a6;
        lVar3 = lVar8;
      } while (lVar8 != 6);
    }
    else {
LAB_1801c44a6:
      if ((iVar2 != 8) ||
         ((iVar2 = strcmp(*(undefined8 *)(param_2 + 8),&UNK_180a0ce70), iVar2 != 0 &&
          (iVar2 = strcmp(*(undefined8 *)(param_2 + 8),&UNK_180a0cf50), iVar2 != 0))))
      goto LAB_1801c44da;
    }
  }
  uVar9 = 1;
LAB_1801c44da:
  FUN_18005e630(_DAT_180c82868);
  FUN_1801c9940(puVar1);
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x580,8,3);
  plVar5 = (longlong *)FUN_1803e8a40(uVar4,param_2);
  *puVar1 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  *(undefined1 *)(_DAT_180c86870 + 0x60) = 1;
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
  ppuStackX_8 = apuStack_68;
  pppuStackX_10 = (undefined8 ***)&puStack_98;
  puStack_98 = puVar1;
  uStack_90 = uVar9;
  FUN_180627ae0(&puStack_88,param_2);
  pppuStackX_10 = (undefined8 ***)&puStack_98;
  ppuStackX_18 = &puStack_c8;
  puStack_c8 = puStack_98;
  uStack_c0 = uStack_90;
  FUN_180627ae0(&puStack_b8,&puStack_88);
  ppuStackX_18 = &puStack_c8;
  pcStack_58 = FUN_1801eb5a0;
  pcStack_50 = FUN_1801eb560;
  puVar6 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,DAT_180bf65bc);
  *puVar6 = puStack_c8;
  *(undefined1 *)(puVar6 + 1) = uStack_c0;
  puStackX_20 = puVar6;
  FUN_180627ae0(puVar6 + 2,&puStack_b8);
  ppuStackX_18 = (undefined8 **)&puStack_b8;
  puStack_b8 = &UNK_180a3c3e0;
  apuStack_68[0] = puVar6;
  if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_b0 = 0;
  uStack_a0 = 0;
  puStack_b8 = &UNK_18098bcb0;
  pppuStackX_10 = (undefined8 ***)&puStack_88;
  puStack_88 = &UNK_180a3c3e0;
  if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_80 = 0;
  uStack_70 = 0;
  puStack_88 = &UNK_18098bcb0;
  ppuVar7 = (undefined8 **)FUN_18006b640(uVar4,apuStack_68);
  if (ppuVar7 != (undefined8 **)0x0) {
    ppuStackX_8 = ppuVar7;
    (*(code *)(*ppuVar7)[5])(ppuVar7);
  }
  ppuStackX_8 = (undefined8 **)puVar1[9];
  puVar1[9] = ppuVar7;
  if (ppuStackX_8 != (undefined8 **)0x0) {
    (*(code *)(*ppuStackX_8)[7])();
  }
  *(undefined8 *)(puVar1[9] + 0x18) = 0xfffffffffffffffd;
  uVar4 = _DAT_180c82868;
  pppuStackX_10 = &ppuStackX_8;
  ppuStackX_8 = (undefined8 **)puVar1[9];
  if (ppuStackX_8 != (undefined8 **)0x0) {
    (*(code *)(*ppuStackX_8)[5])();
  }
  FUN_18005e110(uVar4,&ppuStackX_8);
  return;
}






// 函数: void FUN_1801c46e0(longlong param_1)
void FUN_1801c46e0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c4730(undefined8 param_1,longlong param_2)
void FUN_1801c4730(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  undefined1 auStack_238 [32];
  uint *puStack_218;
  undefined1 uStack_208;
  char acStack_207 [7];
  longlong lStack_200;
  uint *puStack_1f8;
  undefined8 uStack_1f0;
  undefined2 uStack_1e8;
  undefined1 uStack_1e6;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  uint uStack_1d0;
  ulonglong uStack_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  longlong lStack_198;
  int iStack_190;
  ulonglong uStack_188;
  undefined8 *puStack_180;
  longlong lStack_178;
  undefined1 uStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  undefined8 *puStack_148;
  longlong lStack_140;
  undefined1 uStack_138;
  longlong lStack_130;
  undefined1 uStack_128;
  longlong lStack_120;
  undefined1 uStack_118;
  longlong lStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  longlong lStack_f0;
  uint *puStack_e8;
  longlong lStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  longlong lStack_c0;
  undefined8 *puStack_b8;
  longlong lStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  longlong lStack_90;
  undefined8 *puStack_88;
  longlong lStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  longlong lStack_60;
  uint *puStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  ulonglong uStack_30;
  
  lVar16 = _DAT_180c8aa08;
  uStack_50 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  lStack_178 = _DAT_180c8aa08;
  FUN_1801d8e90(_DAT_180c8aa08,param_2,0);
  puStack_1e0 = &UNK_180a3c3e0;
  uStack_1c8 = 0;
  puStack_1d8 = (undefined *)0x0;
  uStack_1d0 = 0;
  FUN_1801c5870(&puStack_1e0,param_2);
  iVar15 = uStack_1d0 + 0x12;
  FUN_1806277c0(&puStack_1e0,iVar15);
  puVar11 = (undefined4 *)(puStack_1d8 + uStack_1d0);
  *puVar11 = 0x64616873;
  puVar11[1] = 0x6d5f7265;
  puVar11[2] = 0x69707061;
  puVar11[3] = 0x622e676e;
  *(undefined2 *)(puVar11 + 4) = 0x6e69;
  *(undefined1 *)((longlong)puVar11 + 0x12) = 0;
  uStack_160 = 0;
  lStack_158 = 0;
  puVar13 = &DAT_18098bc73;
  if (puStack_1d8 != (undefined *)0x0) {
    puVar13 = puStack_1d8;
  }
  uStack_1d0 = iVar15;
  iVar15 = FUN_18062dee0(&uStack_160,puVar13,&UNK_180a01ff0);
  lVar17 = lStack_158;
  if (iVar15 == 0) {
    uVar7 = _ftelli64(lStack_158);
    _fseeki64(lVar17,0,2);
    lVar8 = _ftelli64(lVar17);
    _fseeki64(lVar17,uVar7,0);
    lStack_200 = 0;
    puStack_1f8 = (uint *)0x0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e6 = 3;
    FUN_180639bf0(&lStack_200,lVar8);
    fread(lStack_200,lVar8,1,lVar17);
    puStack_1a0 = &UNK_180a3c3e0;
    uStack_188 = 0;
    lStack_198 = 0;
    iStack_190 = 0;
    uVar2 = *(uint *)((longlong)puStack_1f8 + 4);
    puVar18 = (uint *)((longlong)puStack_1f8 + 8);
    if (uVar2 != 0) {
      puStack_1f8 = puVar18;
      FUN_180628f30(&puStack_1a0,puVar18,uVar2);
      puVar18 = (uint *)((longlong)puVar18 + (ulonglong)uVar2);
    }
    iVar15 = iStack_190 + 8;
    puStack_1f8 = puVar18;
    if (param_2 == 0) {
      lVar16 = *(longlong *)(lVar16 + 0x50);
      lStack_140 = lVar16 + 0x360;
      uStack_138 = 0;
      lStack_168 = lVar16;
      AcquireSRWLockExclusive(lStack_140);
      uStack_138 = 1;
      uVar14 = (ulonglong)(lVar8 - iVar15) / 0x18;
      lVar8 = lStack_140;
      if (0 < (int)uVar14) {
        uVar14 = uVar14 & 0xffffffff;
        do {
          uStack_48 = *puVar18;
          uStack_44 = puVar18[1];
          uStack_40 = puVar18[2];
          uStack_3c = puVar18[3];
          uVar2 = puVar18[4];
          uVar3 = puVar18[5];
          puVar18 = puVar18 + 6;
          puVar1 = *(undefined8 **)(lVar16 + 0x318);
          uStack_38._2_1_ = (byte)(uVar2 >> 0x10);
          uStack_38._0_2_ = (ushort)uVar2;
          puVar9 = puVar1;
          puVar4 = (undefined8 *)puVar1[2];
          while (puVar10 = puVar9, puVar4 != (undefined8 *)0x0) {
            if ((*(uint *)(puVar4 + 4) < uStack_48) ||
               ((*(uint *)(puVar4 + 4) <= uStack_48 &&
                ((*(ushort *)(puVar4 + 6) < (ushort)uStack_38 ||
                 ((*(ushort *)(puVar4 + 6) <= (ushort)uStack_38 &&
                  ((*(uint *)((longlong)puVar4 + 0x24) < uStack_44 ||
                   ((*(uint *)((longlong)puVar4 + 0x24) <= uStack_44 &&
                    ((*(uint *)(puVar4 + 5) < uStack_40 ||
                     ((*(uint *)(puVar4 + 5) <= uStack_40 &&
                      ((*(uint *)((longlong)puVar4 + 0x2c) < uStack_3c ||
                       ((*(uint *)((longlong)puVar4 + 0x2c) <= uStack_3c &&
                        (*(byte *)((longlong)puVar4 + 0x32) < uStack_38._2_1_)))))))))))))))))))) {
              bVar5 = true;
              puVar12 = (undefined8 *)*puVar4;
            }
            else {
              bVar5 = false;
              puVar12 = (undefined8 *)puVar4[1];
            }
            puVar9 = puVar4;
            puVar4 = puVar12;
            if (bVar5) {
              puVar9 = puVar10;
            }
          }
          puStack_1f8 = puVar18;
          if (((puVar10 == puVar1) || (uStack_48 < *(uint *)(puVar10 + 4))) ||
             ((puVar4 = puStack_180, uStack_48 <= *(uint *)(puVar10 + 4) &&
              (((ushort)uStack_38 < *(ushort *)(puVar10 + 6) ||
               (((ushort)uStack_38 <= *(ushort *)(puVar10 + 6) &&
                ((uStack_44 < *(uint *)((longlong)puVar10 + 0x24) ||
                 ((uStack_44 <= *(uint *)((longlong)puVar10 + 0x24) &&
                  ((uStack_40 < *(uint *)(puVar10 + 5) ||
                   ((uStack_40 <= *(uint *)(puVar10 + 5) &&
                    ((uStack_3c < *(uint *)((longlong)puVar10 + 0x2c) ||
                     ((uStack_3c <= *(uint *)((longlong)puVar10 + 0x2c) &&
                      (uStack_38._2_1_ < *(byte *)((longlong)puVar10 + 0x32))))))))))))))))))))) {
            uStack_38 = uVar2;
            lVar16 = FUN_1801ea180(puVar1,puVar10,&uStack_208,&uStack_48);
            if (lVar16 == 0) {
              puVar10 = (undefined8 *)FUN_1801ea730(puVar1,acStack_207,&uStack_48);
              puVar4 = puVar10;
              uVar2 = uStack_38;
              if (acStack_207[0] != '\0') {
                puStack_218 = &uStack_48;
                FUN_1801ea0a0(puVar1,&puStack_148,puVar10,0);
                puVar10 = puStack_148;
                puVar4 = puStack_148;
                uVar2 = uStack_38;
              }
            }
            else {
              puStack_218 = &uStack_48;
              FUN_1801ea0a0(puVar1,&puStack_180,lVar16,uStack_208);
              puVar10 = puStack_180;
              puVar4 = puStack_180;
              uVar2 = uStack_38;
            }
          }
          uStack_38 = uVar2;
          puStack_180 = puVar4;
          *(uint *)((longlong)puVar10 + 0x34) = uVar3;
          lVar17 = (ulonglong)uStack_38._2_1_ * 0x70 + *(longlong *)(lStack_178 + 0x50);
          lVar16 = lVar17 + 0x70;
          uStack_118 = 0;
          lStack_120 = lVar16;
          AcquireSRWLockExclusive(lVar16);
          uStack_118 = 1;
          if (*(int *)(lVar17 + 0x78) < (int)uVar3) {
            *(uint *)(lVar17 + 0x78) = uVar3;
          }
          ReleaseSRWLockExclusive(lVar16);
          uVar14 = uVar14 - 1;
          lVar8 = lStack_140;
          lVar16 = lStack_168;
          lVar17 = lStack_158;
        } while (uVar14 != 0);
      }
    }
    else {
      puVar1 = (undefined8 *)(param_2 + 0x328);
      lStack_178 = param_2 + 0x360;
      uStack_170 = 0;
      AcquireSRWLockExclusive(lStack_178);
      uStack_170 = 1;
      uVar14 = (lVar8 - 4U) / 0x24;
      lVar8 = lStack_178;
      if (0 < (int)uVar14) {
        uVar14 = uVar14 & 0xffffffff;
        do {
          uStack_1c0 = *puVar18;
          uStack_1bc = puVar18[1];
          uStack_1b8 = *(undefined8 *)(puVar18 + 2);
          uStack_1b0 = *(undefined8 *)(puVar18 + 4);
          uStack_1a8 = *(ulonglong *)(puVar18 + 6);
          uVar2 = puVar18[8];
          puVar18 = puVar18 + 9;
          puVar9 = puVar1;
          puStack_1f8 = puVar18;
          puVar4 = *(undefined8 **)(param_2 + 0x338);
          while (puVar4 != (undefined8 *)0x0) {
            puStack_b8 = puVar4 + 4;
            lStack_110 = (longlong)&uStack_1a8 + 4;
            puStack_108 = &uStack_1a8;
            puStack_100 = &uStack_1b0;
            puStack_f8 = &uStack_1b8;
            lStack_f0 = (longlong)&uStack_1b0 + 4;
            puStack_e8 = &uStack_1c0;
            lStack_e0 = (longlong)puVar4 + 0x3c;
            puStack_d8 = puVar4 + 7;
            puStack_d0 = puVar4 + 6;
            puStack_c8 = puVar4 + 5;
            lStack_c0 = (longlong)puVar4 + 0x34;
            cVar6 = func_0x0001801eb6f0(&lStack_e0,&lStack_110);
            if (cVar6 == '\0') {
              puVar9 = puVar4;
              puVar4 = (undefined8 *)puVar4[1];
            }
            else {
              puVar4 = (undefined8 *)*puVar4;
            }
          }
          if (puVar9 == puVar1) {
LAB_1801c4b08:
            puStack_218 = &uStack_1c0;
            puVar9 = (undefined8 *)FUN_1801e8280(puVar1,&lStack_168);
            puVar9 = (undefined8 *)*puVar9;
          }
          else {
            puStack_88 = puVar9 + 4;
            lStack_b0 = (longlong)puVar9 + 0x3c;
            puStack_a8 = puVar9 + 7;
            puStack_a0 = puVar9 + 6;
            puStack_98 = puVar9 + 5;
            lStack_90 = (longlong)puVar9 + 0x34;
            lStack_80 = (longlong)&uStack_1a8 + 4;
            puStack_78 = &uStack_1a8;
            puStack_70 = &uStack_1b0;
            puStack_68 = &uStack_1b8;
            lStack_60 = (longlong)&uStack_1b0 + 4;
            puStack_58 = &uStack_1c0;
            cVar6 = func_0x0001801eb6f0(&lStack_80,&lStack_b0);
            if (cVar6 != '\0') goto LAB_1801c4b08;
          }
          *(uint *)(puVar9 + 8) = uVar2;
          lVar16 = (uStack_1a8 & 0xff) * 0x70;
          lVar17 = param_2 + 0x70 + lVar16;
          uStack_128 = 0;
          lStack_130 = lVar17;
          AcquireSRWLockExclusive(lVar17);
          uStack_128 = 1;
          if (*(int *)(lVar16 + 0x78 + param_2) < (int)uVar2) {
            *(uint *)(lVar16 + 0x78 + param_2) = uVar2;
          }
          ReleaseSRWLockExclusive(lVar17);
          uVar14 = uVar14 - 1;
          lVar8 = lStack_178;
          lVar17 = lStack_158;
        } while (uVar14 != 0);
      }
    }
    ReleaseSRWLockExclusive(lVar8);
    puStack_1a0 = &UNK_180a3c3e0;
    if (lStack_198 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_198 = 0;
    uStack_188 = uStack_188 & 0xffffffff00000000;
    puStack_1a0 = &UNK_18098bcb0;
    if (((char)uStack_1e8 == '\0') && (lStack_200 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (lVar17 != 0) {
    fclose(lVar17);
    lStack_158 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_1e0 = &UNK_180a3c3e0;
  if (puStack_1d8 == (undefined *)0x0) {
    puStack_1d8 = (undefined *)0x0;
    uStack_1c8 = uStack_1c8 & 0xffffffff00000000;
    puStack_1e0 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_238);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1801c4eb0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  int aiStackX_10 [2];
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  longlong alStack_70 [2];
  undefined *puStack_60;
  undefined *puStack_58;
  uint uStack_50;
  undefined8 uStack_48;
  
  bVar8 = true;
  uVar6 = 0;
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  puStack_58 = (undefined *)0x0;
  uStack_50 = 0;
  FUN_1801c5700(&puStack_60,param_1);
  iVar4 = uStack_50 + 0x1c;
  FUN_1806277c0(&puStack_60,iVar4);
  puVar2 = (undefined4 *)(puStack_58 + uStack_50);
  *puVar2 = 0x706d6f63;
  puVar2[1] = 0x73736572;
  puVar2[2] = 0x735f6465;
  puVar2[3] = 0x65646168;
  *(undefined8 *)(puVar2 + 4) = 0x2e65686361635f72;
  puVar2[6] = 0x6b636173;
  *(undefined1 *)(puVar2 + 7) = 0;
  alStack_70[0] = -1;
  puVar3 = &DAT_18098bc73;
  if (puStack_58 != (undefined *)0x0) {
    puVar3 = puStack_58;
  }
  uStack_50 = iVar4;
  FUN_18063ba00(alStack_70,puVar3,5,0x104);
  lVar1 = alStack_70[0];
  aiStackX_10[0] = 0;
  uVar5 = uVar6;
  if (alStack_70[0] != -1) {
    do {
      uVar7 = 0x1000000;
      if (4 - uVar5 < 0x1000000) {
        uVar7 = 4 - uVar5 & 0xffffffff;
      }
      auStackX_18[0] = 0;
      iVar4 = ReadFile(lVar1,(longlong)aiStackX_10 + uVar5,uVar7,auStackX_18,0);
    } while (((iVar4 != 0) && (auStackX_18[0] != 0)) && (uVar5 = uVar5 + auStackX_18[0], uVar5 < 4))
    ;
    do {
      uVar5 = 0x1000000;
      if (4 - uVar6 < 0x1000000) {
        uVar5 = 4 - uVar6 & 0xffffffff;
      }
      auStackX_20[0] = 0;
      iVar4 = ReadFile(lVar1,(longlong)aiStackX_10 + uVar6,uVar5,auStackX_20,0);
    } while (((iVar4 != 0) && (auStackX_20[0] != 0)) && (uVar6 = uVar6 + auStackX_20[0], uVar6 < 4))
    ;
    LOCK();
    _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
    UNLOCK();
    CloseHandle(alStack_70[0]);
    alStack_70[0] = -1;
    bVar8 = aiStackX_10[0] == 0x5ef;
  }
  lVar1 = alStack_70[0];
  if (((DAT_180c82860 == '\0') && (bVar8 == false)) &&
     ((*(int *)(_DAT_180c86908 + 0x620) == 0 && (param_1 == 0)))) {
    if (DAT_180c82842 == '\0') {
      MessageBoxA(0,&UNK_180a0cea0,&UNK_180a0cf60,0x41040);
    }
    else if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
      FUN_1800623b0(_DAT_180c86928,3,0xffffffff00000000,0xd,&UNK_180a04f08,&UNK_180a0cf60,
                    &UNK_180a0cea0);
    }
  }
  if (lVar1 != -1) {
    LOCK();
    _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
    UNLOCK();
    CloseHandle(alStack_70[0]);
    alStack_70[0] = -1;
  }
  puStack_60 = &UNK_180a3c3e0;
  if (puStack_58 == (undefined *)0x0) {
    return bVar8;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c5160(undefined8 param_1)
void FUN_1801c5160(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 auStack_f8 [32];
  int iStack_d8;
  int aiStack_d4 [3];
  undefined *puStack_c8;
  undefined *puStack_c0;
  uint uStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [32];
  ulonglong uStack_30;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uVar2 = 0;
  aiStack_d4[1] = 0;
  puStack_c8 = &UNK_180a3c3e0;
  uStack_b0 = 0;
  puStack_c0 = (undefined *)0x0;
  uStack_b8 = 0;
  FUN_1801c5870(&puStack_c8,param_1);
  iVar5 = uStack_b8 + 0x12;
  FUN_1806277c0(&puStack_c8,iVar5);
  puVar3 = (undefined4 *)(puStack_c0 + uStack_b8);
  *puVar3 = 0x64616873;
  puVar3[1] = 0x6d5f7265;
  puVar3[2] = 0x69707061;
  puVar3[3] = 0x622e676e;
  *(undefined2 *)(puVar3 + 4) = 0x6e69;
  *(undefined1 *)((longlong)puVar3 + 0x12) = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  puVar4 = &DAT_18098bc73;
  if (puStack_c0 != (undefined *)0x0) {
    puVar4 = puStack_c0;
  }
  uStack_b8 = iVar5;
  FUN_18062dee0(&uStack_a8,puVar4,&UNK_180a01ff0);
  lVar1 = lStack_a0;
  aiStack_d4[0] = 0;
  if (lStack_a0 != 0) {
    fread(aiStack_d4,4,1,lStack_a0);
    if (aiStack_d4[0] == 0x5ef) {
      puStack_68 = &UNK_18098bc80;
      puStack_60 = auStack_50;
      uStack_58 = 0;
      auStack_50[0] = 0;
      aiStack_d4[1] = 1;
      FUN_18004b860(&puStack_68,&UNK_1809fd0a0,0x130a7);
      iStack_d8 = 0;
      fread(&iStack_d8,4,1,lVar1);
      if (iStack_d8 < 9) {
        if (iStack_d8 + 1 != 0) {
          uVar2 = FUN_18062b420(_DAT_180c8ed18,(longlong)(iStack_d8 + 1),3);
        }
                    // WARNING: Subroutine does not return
        memset(uVar2,0,(longlong)(iStack_d8 + 1));
      }
      aiStack_d4[1] = 0;
      puStack_68 = &UNK_18098bcb0;
    }
    fclose(lVar1);
    lStack_a0 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  if (lStack_a0 != 0) {
    fclose(lStack_a0);
    lStack_a0 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_c8 = &UNK_180a3c3e0;
  if (puStack_c0 == (undefined *)0x0) {
    puStack_c0 = (undefined *)0x0;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    puStack_c8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_f8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c5450(void)
void FUN_1801c5450(void)

{
  longlong lVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 auStack_f8 [32];
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  uint uStack_c8;
  ulonglong uStack_c0;
  int aiStack_b8 [2];
  undefined *puStack_b0;
  longlong lStack_a8;
  int iStack_a0;
  ulonglong uStack_98;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  longlong lStack_80;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  int iStack_58;
  undefined auStack_50 [32];
  ulonglong uStack_30;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  aiStack_b8[1] = 0;
  if (*(char *)(_DAT_180c86870 + 0x168) == '\0') {
    puStack_b0 = &UNK_180a3c3e0;
    uStack_98 = 0;
    lStack_a8 = 0;
    iStack_a0 = 0;
    FUN_1801c5870(&puStack_b0);
    puStack_d8 = &UNK_180a3c3e0;
    uStack_c0 = 0;
    puStack_d0 = (undefined1 *)0x0;
    uStack_c8 = 0;
    FUN_1806277c0(&puStack_d8,iStack_a0);
    if (iStack_a0 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_d0,lStack_a8,iStack_a0 + 1);
    }
    if (lStack_a8 != 0) {
      uStack_c8 = 0;
      if (puStack_d0 != (undefined1 *)0x0) {
        *puStack_d0 = 0;
      }
      uStack_c0 = uStack_c0 & 0xffffffff;
    }
    iVar5 = uStack_c8 + 0x12;
    FUN_1806277c0(&puStack_d8,iVar5);
    puVar3 = (undefined4 *)(puStack_d0 + uStack_c8);
    *puVar3 = 0x64616873;
    puVar3[1] = 0x6d5f7265;
    puVar3[2] = 0x69707061;
    puVar3[3] = 0x622e676e;
    *(undefined2 *)(puVar3 + 4) = 0x6e69;
    *(undefined1 *)((longlong)puVar3 + 0x12) = 0;
    uStack_c8 = iVar5;
    cVar2 = FUN_180624af0(&puStack_d8);
    if (cVar2 == '\0') {
      FUN_18062c1e0(&puStack_b0,1);
      uStack_88 = 0;
      lStack_80 = 0;
      puVar4 = &DAT_18098bc73;
      if (puStack_d0 != (undefined1 *)0x0) {
        puVar4 = puStack_d0;
      }
      FUN_18062dee0(&uStack_88,puVar4,&UNK_180a0cf4c);
      lVar1 = lStack_80;
      if (lStack_80 == 0) {
                    // WARNING: Subroutine does not return
        FUN_180062300(_DAT_180c86928,&UNK_180a0cfa0);
      }
      auStack_90[0] = 0x5ef;
      fwrite(auStack_90,4,1,lStack_80);
      puStack_68 = &UNK_18098bc80;
      puStack_60 = auStack_50;
      iStack_58 = 0;
      auStack_50[0] = 0;
      aiStack_b8[1] = 1;
      FUN_18004b860(&puStack_68,&UNK_1809fd0a0,0x130a7);
      aiStack_b8[0] = iStack_58;
      fwrite(aiStack_b8,4,1,lVar1);
      puVar6 = &DAT_18098bc73;
      if (puStack_60 != (undefined *)0x0) {
        puVar6 = puStack_60;
      }
      fwrite(puVar6,1,(longlong)aiStack_b8[0],lVar1);
      fclose(lVar1);
      lStack_80 = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
      aiStack_b8[1] = 0;
      puStack_68 = &UNK_18098bcb0;
    }
    puStack_d8 = &UNK_180a3c3e0;
    if (puStack_d0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_d0 = (undefined1 *)0x0;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    puStack_d8 = &UNK_18098bcb0;
    puStack_b0 = &UNK_180a3c3e0;
    if (lStack_a8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_a8 = 0;
    uStack_98 = uStack_98 & 0xffffffff00000000;
    puStack_b0 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c5700(longlong *param_1,longlong param_2)
void FUN_1801c5700(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined4 uStack_28;
  undefined auStack_20 [16];
  ulonglong uStack_10;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  uStack_48 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((undefined1 *)param_1[1] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[1] = 0;
  }
  if (param_2 == 0) {
    puStack_38 = &UNK_1809fdc18;
    puStack_30 = auStack_20;
    auStack_20[0] = 0;
    uStack_28 = 6;
    strcpy_s(auStack_20,0x10,&UNK_180a3c07c);
    uStack_48 = 1;
    puVar5 = &DAT_18098bc73;
    if (puStack_30 != (undefined *)0x0) {
      puVar5 = puStack_30;
    }
    (**(code **)(*param_1 + 0x10))(param_1,puVar5);
    uStack_48 = 0;
    puStack_38 = &UNK_18098bcb0;
    lVar3 = param_1[2];
    iVar6 = (int)lVar3 + 8;
    FUN_1806277c0(param_1,iVar6);
    uVar1 = *(uint *)(param_1 + 2);
    lVar2 = param_1[1];
    *(undefined8 *)((ulonglong)uVar1 + lVar2) = 0x2f73726564616853;
    *(undefined1 *)((undefined8 *)((ulonglong)uVar1 + lVar2) + 1) = 0;
    *(int *)(param_1 + 2) = iVar6;
    iVar6 = (int)lVar3 + 0xe;
    FUN_1806277c0(param_1,iVar6);
    puVar4 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
    *puVar4 = 0x31443344;
    *(undefined2 *)(puVar4 + 1) = 0x2f31;
    *(undefined1 *)((longlong)puVar4 + 6) = 0;
    *(int *)(param_1 + 2) = iVar6;
    FUN_18062c1e0(param_1,1);
  }
  else {
    FUN_180627be0(param_1,param_2 + 0x2d0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_68);
}



longlong FUN_1801c5870(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined *puStack_30;
  longlong lStack_28;
  undefined4 uStack_18;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  if (param_2 == 0) {
    uVar2 = FUN_1800baa80(&puStack_30);
    FUN_18005d190(param_1,uVar2);
    puStack_30 = &UNK_180a3c3e0;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_28 = 0;
    uStack_18 = 0;
    puStack_30 = &UNK_18098bcb0;
    iVar4 = *(int *)(param_1 + 0x10) + 0x12;
    FUN_1806277c0(param_1,iVar4);
    puVar3 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8));
    *puVar3 = 0x6461685365726f43;
    puVar3[1] = 0x314433442f737265;
    *(undefined2 *)(puVar3 + 2) = 0x2f31;
    *(undefined1 *)((longlong)puVar3 + 0x12) = 0;
    *(int *)(param_1 + 0x10) = iVar4;
    return 0;
  }
  uVar1 = *(uint *)(param_2 + 0x2c0);
  uVar5 = (ulonglong)uVar1;
  if (*(longlong *)(param_2 + 0x2b8) != 0) {
    puStack_30 = (undefined *)0x180627c06;
    FUN_1806277c0(param_1,uVar5);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    puStack_30 = (undefined *)0x180627c1a;
    memcpy(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x2b8),uVar5);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined1 *)(uVar5 + *(longlong *)(param_1 + 8)) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x2cc);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




