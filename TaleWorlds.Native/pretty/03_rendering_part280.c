#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part280.c - 3 个函数

// 函数: void FUN_18041eb4a(uint param_1)
void FUN_18041eb4a(uint param_1)

{
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  ulonglong uVar1;
  uint64_t unaff_R14;
  ulonglong unaff_R15;
  int8_t auStackX_20 [8];
  ulonglong in_stack_00000820;
  
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x30) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R14;
  uVar1 = (ulonglong)param_1;
  do {
    if (unaff_R15 != 0) {
      uVar1 = 0x800;
      if (unaff_R15 < 0x800) {
        uVar1 = unaff_R15;
      }
                    // WARNING: Subroutine does not return
      memcpy(auStackX_20,unaff_R12,uVar1);
    }
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000820 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18041ec11(void)
void FUN_18041ec11(void)

{
  ulonglong in_stack_00000820;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000820 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18041ec30(uint64_t param_1,int *param_2,int *param_3,int *param_4)

{
  uint64_t *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint64_t *puVar14;
  ulonglong uVar15;
  uint uVar16;
  ushort *puVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  int iStack_38;
  
  uVar11 = FUN_18041e290();
  if (uVar11 == 0) {
    return 0;
  }
  uVar15 = uVar11;
  if (iStack_38 != 8) {
    uVar16 = *param_2 * *param_3 * *param_4;
    uVar12 = FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar16,0x22);
    uVar15 = 0;
    if (uVar12 != 0) {
      if (((0 < (int)uVar16) && (0x1f < uVar16)) &&
         ((uVar11 + (longlong)(int)(uVar16 - 1) * 2 < uVar12 ||
          ((longlong)(int)(uVar16 - 1) + uVar12 < uVar11)))) {
        uVar10 = uVar16 & 0x8000001f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
        }
        puVar14 = (uint64_t *)(uVar12 + 8);
        puVar17 = (ushort *)(uVar11 + 0x20);
        do {
          puVar1 = puVar14 + 4;
          uVar15 = (ulonglong)((int)uVar15 + 0x20);
          uVar2 = puVar17[-8];
          uVar3 = puVar17[-7];
          uVar4 = puVar17[-6];
          uVar5 = puVar17[-5];
          uVar6 = puVar17[-4];
          uVar7 = puVar17[-3];
          uVar8 = puVar17[-2];
          uVar9 = puVar17[-1];
          uVar18 = puVar17[-0x10] >> 8;
          uVar19 = puVar17[-0xf] >> 8;
          uVar20 = puVar17[-0xe] >> 8;
          uVar21 = puVar17[-0xd] >> 8;
          uVar22 = puVar17[-0xc] >> 8;
          uVar23 = puVar17[-0xb] >> 8;
          uVar24 = puVar17[-10] >> 8;
          uVar25 = puVar17[-9] >> 8;
          uVar26 = uVar2 >> 8;
          uVar27 = uVar3 >> 8;
          uVar28 = uVar4 >> 8;
          uVar29 = uVar5 >> 8;
          uVar30 = uVar6 >> 8;
          uVar31 = uVar7 >> 8;
          uVar32 = uVar8 >> 8;
          uVar33 = uVar9 >> 8;
          puVar14[-1] = CONCAT17((uVar25 != 0) * (uVar25 < 0x100) * (char)(puVar17[-9] >> 8) -
                                 (0xff < uVar25),
                                 CONCAT16((uVar24 != 0) * (uVar24 < 0x100) *
                                          (char)(puVar17[-10] >> 8) - (0xff < uVar24),
                                          CONCAT15((uVar23 != 0) * (uVar23 < 0x100) *
                                                   (char)(puVar17[-0xb] >> 8) - (0xff < uVar23),
                                                   CONCAT14((uVar22 != 0) * (uVar22 < 0x100) *
                                                            (char)(puVar17[-0xc] >> 8) -
                                                            (0xff < uVar22),
                                                            CONCAT13((uVar21 != 0) *
                                                                     (uVar21 < 0x100) *
                                                                     (char)(puVar17[-0xd] >> 8) -
                                                                     (0xff < uVar21),
                                                                     CONCAT12((uVar20 != 0) *
                                                                              (uVar20 < 0x100) *
                                                                              (char)(puVar17[-0xe]
                                                                                    >> 8) -
                                                                              (0xff < uVar20),
                                                                              CONCAT11((uVar19 != 0)
                                                                                       * (uVar19 < 
                                                  0x100) * (char)(puVar17[-0xf] >> 8) -
                                                  (0xff < uVar19),
                                                  (uVar18 != 0) * (uVar18 < 0x100) *
                                                  (char)(puVar17[-0x10] >> 8) - (0xff < uVar18))))))
                                         ));
          *puVar14 = CONCAT17((uVar33 != 0) * (uVar33 < 0x100) * (char)(uVar9 >> 8) -
                              (0xff < uVar33),
                              CONCAT16((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar8 >> 8) -
                                       (0xff < uVar32),
                                       CONCAT15((uVar31 != 0) * (uVar31 < 0x100) *
                                                (char)(uVar7 >> 8) - (0xff < uVar31),
                                                CONCAT14((uVar30 != 0) * (uVar30 < 0x100) *
                                                         (char)(uVar6 >> 8) - (0xff < uVar30),
                                                         CONCAT13((uVar29 != 0) * (uVar29 < 0x100) *
                                                                  (char)(uVar5 >> 8) -
                                                                  (0xff < uVar29),
                                                                  CONCAT12((uVar28 != 0) *
                                                                           (uVar28 < 0x100) *
                                                                           (char)(uVar4 >> 8) -
                                                                           (0xff < uVar28),
                                                                           CONCAT11((uVar27 != 0) *
                                                                                    (uVar27 < 0x100)
                                                                                    * (char)(uVar3 
                                                  >> 8) - (0xff < uVar27),
                                                  (uVar26 != 0) * (uVar26 < 0x100) *
                                                  (char)(uVar2 >> 8) - (0xff < uVar26))))))));
          uVar2 = puVar17[8];
          uVar3 = puVar17[9];
          uVar4 = puVar17[10];
          uVar5 = puVar17[0xb];
          uVar6 = puVar17[0xc];
          uVar7 = puVar17[0xd];
          uVar8 = puVar17[0xe];
          uVar9 = puVar17[0xf];
          uVar18 = *puVar17 >> 8;
          uVar19 = puVar17[1] >> 8;
          uVar20 = puVar17[2] >> 8;
          uVar21 = puVar17[3] >> 8;
          uVar22 = puVar17[4] >> 8;
          uVar23 = puVar17[5] >> 8;
          uVar24 = puVar17[6] >> 8;
          uVar25 = puVar17[7] >> 8;
          uVar26 = uVar2 >> 8;
          uVar27 = uVar3 >> 8;
          uVar28 = uVar4 >> 8;
          uVar29 = uVar5 >> 8;
          uVar30 = uVar6 >> 8;
          uVar31 = uVar7 >> 8;
          uVar32 = uVar8 >> 8;
          uVar33 = uVar9 >> 8;
          puVar14[1] = CONCAT17((uVar25 != 0) * (uVar25 < 0x100) * (char)(puVar17[7] >> 8) -
                                (0xff < uVar25),
                                CONCAT16((uVar24 != 0) * (uVar24 < 0x100) * (char)(puVar17[6] >> 8)
                                         - (0xff < uVar24),
                                         CONCAT15((uVar23 != 0) * (uVar23 < 0x100) *
                                                  (char)(puVar17[5] >> 8) - (0xff < uVar23),
                                                  CONCAT14((uVar22 != 0) * (uVar22 < 0x100) *
                                                           (char)(puVar17[4] >> 8) - (0xff < uVar22)
                                                           ,CONCAT13((uVar21 != 0) *
                                                                     (uVar21 < 0x100) *
                                                                     (char)(puVar17[3] >> 8) -
                                                                     (0xff < uVar21),
                                                                     CONCAT12((uVar20 != 0) *
                                                                              (uVar20 < 0x100) *
                                                                              (char)(puVar17[2] >> 8
                                                                                    ) - (0xff < 
                                                  uVar20),CONCAT11((uVar19 != 0) * (uVar19 < 0x100)
                                                                   * (char)(puVar17[1] >> 8) -
                                                                   (0xff < uVar19),
                                                                   (uVar18 != 0) * (uVar18 < 0x100)
                                                                   * (char)(*puVar17 >> 8) -
                                                                   (0xff < uVar18))))))));
          puVar14[2] = CONCAT17((uVar33 != 0) * (uVar33 < 0x100) * (char)(uVar9 >> 8) -
                                (0xff < uVar33),
                                CONCAT16((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar8 >> 8) -
                                         (0xff < uVar32),
                                         CONCAT15((uVar31 != 0) * (uVar31 < 0x100) *
                                                  (char)(uVar7 >> 8) - (0xff < uVar31),
                                                  CONCAT14((uVar30 != 0) * (uVar30 < 0x100) *
                                                           (char)(uVar6 >> 8) - (0xff < uVar30),
                                                           CONCAT13((uVar29 != 0) * (uVar29 < 0x100)
                                                                    * (char)(uVar5 >> 8) -
                                                                    (0xff < uVar29),
                                                                    CONCAT12((uVar28 != 0) *
                                                                             (uVar28 < 0x100) *
                                                                             (char)(uVar4 >> 8) -
                                                                             (0xff < uVar28),
                                                                             CONCAT11((uVar27 != 0)
                                                                                      * (uVar27 < 
                                                  0x100) * (char)(uVar3 >> 8) - (0xff < uVar27),
                                                  (uVar26 != 0) * (uVar26 < 0x100) *
                                                  (char)(uVar2 >> 8) - (0xff < uVar26))))))));
          puVar14 = puVar1;
          puVar17 = puVar17 + 0x20;
        } while ((longlong)((-8 - uVar12) + (longlong)puVar1) < (longlong)(int)(uVar16 - uVar10));
      }
      for (lVar13 = (longlong)(int)uVar15; lVar13 < (int)uVar16; lVar13 = lVar13 + 1) {
        *(int8_t *)(lVar13 + uVar12) = *(int8_t *)(uVar11 + 1 + lVar13 * 2);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(uVar11);
    }
  }
  if (_DAT_180c8ecd0 != 0) {
    FUN_18041eb10(uVar15,*param_2,*param_3,*param_4);
  }
  return uVar15;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18041ec8c(void)

{
  uint64_t *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint64_t *puVar13;
  int iVar14;
  ulonglong unaff_RBX;
  uint uVar15;
  ushort *puVar16;
  int *unaff_R12;
  uint unaff_R13D;
  int *unaff_R14;
  int *unaff_R15;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ulonglong uVar33;
  
  uVar15 = *unaff_R12 * *unaff_R15 * *unaff_R14;
  uVar11 = FUN_18062b420();
  iVar14 = 0;
  if (uVar11 == 0) {
    if (_DAT_180c8ecd0 != 0) {
      FUN_18041eb10(0,*unaff_R12,*unaff_R15,*unaff_R14);
    }
    return 0;
  }
  if (((0 < (int)uVar15) && (0x1f < uVar15)) &&
     ((unaff_RBX + (longlong)(int)(uVar15 - 1) * 2 < uVar11 ||
      ((longlong)(int)(uVar15 - 1) + uVar11 < unaff_RBX)))) {
    uVar10 = uVar15 & 0x8000001f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
    }
    puVar13 = (uint64_t *)(uVar11 + 8);
    puVar16 = (ushort *)(unaff_RBX + 0x20);
    do {
      puVar1 = puVar13 + 4;
      iVar14 = iVar14 + 0x20;
      uVar2 = puVar16[-8];
      uVar3 = puVar16[-7];
      uVar4 = puVar16[-6];
      uVar5 = puVar16[-5];
      uVar6 = puVar16[-4];
      uVar7 = puVar16[-3];
      uVar8 = puVar16[-2];
      uVar9 = puVar16[-1];
      uVar33 = (ulonglong)unaff_R13D;
      uVar17 = puVar16[-0x10] >> uVar33 & 0xff;
      uVar18 = puVar16[-0xf] >> uVar33 & 0xff;
      uVar19 = puVar16[-0xe] >> uVar33 & 0xff;
      uVar20 = puVar16[-0xd] >> uVar33 & 0xff;
      uVar21 = puVar16[-0xc] >> uVar33 & 0xff;
      uVar22 = puVar16[-0xb] >> uVar33 & 0xff;
      uVar23 = puVar16[-10] >> uVar33 & 0xff;
      uVar24 = puVar16[-9] >> uVar33 & 0xff;
      uVar25 = uVar2 >> uVar33 & 0xff;
      uVar26 = uVar3 >> uVar33 & 0xff;
      uVar27 = uVar4 >> uVar33 & 0xff;
      uVar28 = uVar5 >> uVar33 & 0xff;
      uVar29 = uVar6 >> uVar33 & 0xff;
      uVar30 = uVar7 >> uVar33 & 0xff;
      uVar31 = uVar8 >> uVar33 & 0xff;
      uVar32 = uVar9 >> uVar33 & 0xff;
      puVar13[-1] = CONCAT17((uVar24 != 0) * (uVar24 < 0x100) * (char)(puVar16[-9] >> uVar33) -
                             (0xff < uVar24),
                             CONCAT16((uVar23 != 0) * (uVar23 < 0x100) *
                                      (char)(puVar16[-10] >> uVar33) - (0xff < uVar23),
                                      CONCAT15((uVar22 != 0) * (uVar22 < 0x100) *
                                               (char)(puVar16[-0xb] >> uVar33) - (0xff < uVar22),
                                               CONCAT14((uVar21 != 0) * (uVar21 < 0x100) *
                                                        (char)(puVar16[-0xc] >> uVar33) -
                                                        (0xff < uVar21),
                                                        CONCAT13((uVar20 != 0) * (uVar20 < 0x100) *
                                                                 (char)(puVar16[-0xd] >> uVar33) -
                                                                 (0xff < uVar20),
                                                                 CONCAT12((uVar19 != 0) *
                                                                          (uVar19 < 0x100) *
                                                                          (char)(puVar16[-0xe] >>
                                                                                uVar33) -
                                                                          (0xff < uVar19),
                                                                          CONCAT11((uVar18 != 0) *
                                                                                   (uVar18 < 0x100)
                                                                                   * (char)(puVar16[
                                                  -0xf] >> uVar33) - (0xff < uVar18),
                                                  (uVar17 != 0) * (uVar17 < 0x100) *
                                                  (char)(puVar16[-0x10] >> uVar33) - (0xff < uVar17)
                                                  )))))));
      *puVar13 = CONCAT17((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar9 >> uVar33) -
                          (0xff < uVar32),
                          CONCAT16((uVar31 != 0) * (uVar31 < 0x100) * (char)(uVar8 >> uVar33) -
                                   (0xff < uVar31),
                                   CONCAT15((uVar30 != 0) * (uVar30 < 0x100) *
                                            (char)(uVar7 >> uVar33) - (0xff < uVar30),
                                            CONCAT14((uVar29 != 0) * (uVar29 < 0x100) *
                                                     (char)(uVar6 >> uVar33) - (0xff < uVar29),
                                                     CONCAT13((uVar28 != 0) * (uVar28 < 0x100) *
                                                              (char)(uVar5 >> uVar33) -
                                                              (0xff < uVar28),
                                                              CONCAT12((uVar27 != 0) *
                                                                       (uVar27 < 0x100) *
                                                                       (char)(uVar4 >> uVar33) -
                                                                       (0xff < uVar27),
                                                                       CONCAT11((uVar26 != 0) *
                                                                                (uVar26 < 0x100) *
                                                                                (char)(uVar3 >> 
                                                  uVar33) - (0xff < uVar26),
                                                  (uVar25 != 0) * (uVar25 < 0x100) *
                                                  (char)(uVar2 >> uVar33) - (0xff < uVar25))))))));
      uVar2 = puVar16[8];
      uVar3 = puVar16[9];
      uVar4 = puVar16[10];
      uVar5 = puVar16[0xb];
      uVar6 = puVar16[0xc];
      uVar7 = puVar16[0xd];
      uVar8 = puVar16[0xe];
      uVar9 = puVar16[0xf];
      uVar33 = (ulonglong)unaff_R13D;
      uVar17 = *puVar16 >> uVar33 & 0xff;
      uVar18 = puVar16[1] >> uVar33 & 0xff;
      uVar19 = puVar16[2] >> uVar33 & 0xff;
      uVar20 = puVar16[3] >> uVar33 & 0xff;
      uVar21 = puVar16[4] >> uVar33 & 0xff;
      uVar22 = puVar16[5] >> uVar33 & 0xff;
      uVar23 = puVar16[6] >> uVar33 & 0xff;
      uVar24 = puVar16[7] >> uVar33 & 0xff;
      uVar25 = uVar2 >> uVar33 & 0xff;
      uVar26 = uVar3 >> uVar33 & 0xff;
      uVar27 = uVar4 >> uVar33 & 0xff;
      uVar28 = uVar5 >> uVar33 & 0xff;
      uVar29 = uVar6 >> uVar33 & 0xff;
      uVar30 = uVar7 >> uVar33 & 0xff;
      uVar31 = uVar8 >> uVar33 & 0xff;
      uVar32 = uVar9 >> uVar33 & 0xff;
      puVar13[1] = CONCAT17((uVar24 != 0) * (uVar24 < 0x100) * (char)(puVar16[7] >> uVar33) -
                            (0xff < uVar24),
                            CONCAT16((uVar23 != 0) * (uVar23 < 0x100) * (char)(puVar16[6] >> uVar33)
                                     - (0xff < uVar23),
                                     CONCAT15((uVar22 != 0) * (uVar22 < 0x100) *
                                              (char)(puVar16[5] >> uVar33) - (0xff < uVar22),
                                              CONCAT14((uVar21 != 0) * (uVar21 < 0x100) *
                                                       (char)(puVar16[4] >> uVar33) -
                                                       (0xff < uVar21),
                                                       CONCAT13((uVar20 != 0) * (uVar20 < 0x100) *
                                                                (char)(puVar16[3] >> uVar33) -
                                                                (0xff < uVar20),
                                                                CONCAT12((uVar19 != 0) *
                                                                         (uVar19 < 0x100) *
                                                                         (char)(puVar16[2] >> uVar33
                                                                               ) - (0xff < uVar19),
                                                                         CONCAT11((uVar18 != 0) *
                                                                                  (uVar18 < 0x100) *
                                                                                  (char)(puVar16[1]
                                                                                        >> uVar33) -
                                                                                  (0xff < uVar18),
                                                                                  (uVar17 != 0) *
                                                                                  (uVar17 < 0x100) *
                                                                                  (char)(*puVar16 >>
                                                                                        uVar33) -
                                                                                  (0xff < uVar17))))
                                                      ))));
      puVar13[2] = CONCAT17((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar9 >> uVar33) -
                            (0xff < uVar32),
                            CONCAT16((uVar31 != 0) * (uVar31 < 0x100) * (char)(uVar8 >> uVar33) -
                                     (0xff < uVar31),
                                     CONCAT15((uVar30 != 0) * (uVar30 < 0x100) *
                                              (char)(uVar7 >> uVar33) - (0xff < uVar30),
                                              CONCAT14((uVar29 != 0) * (uVar29 < 0x100) *
                                                       (char)(uVar6 >> uVar33) - (0xff < uVar29),
                                                       CONCAT13((uVar28 != 0) * (uVar28 < 0x100) *
                                                                (char)(uVar5 >> uVar33) -
                                                                (0xff < uVar28),
                                                                CONCAT12((uVar27 != 0) *
                                                                         (uVar27 < 0x100) *
                                                                         (char)(uVar4 >> uVar33) -
                                                                         (0xff < uVar27),
                                                                         CONCAT11((uVar26 != 0) *
                                                                                  (uVar26 < 0x100) *
                                                                                  (char)(uVar3 >> 
                                                  uVar33) - (0xff < uVar26),
                                                  (uVar25 != 0) * (uVar25 < 0x100) *
                                                  (char)(uVar2 >> uVar33) - (0xff < uVar25))))))));
      puVar13 = puVar1;
      puVar16 = puVar16 + 0x20;
    } while ((longlong)((-8 - uVar11) + (longlong)puVar1) < (longlong)(int)(uVar15 - uVar10));
  }
  for (lVar12 = (longlong)iVar14; lVar12 < (int)uVar15; lVar12 = lVar12 + 1) {
    *(int8_t *)(lVar12 + uVar11) = *(int8_t *)(unaff_RBX + 1 + lVar12 * 2);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18041edf3(void)
void FUN_18041edf3(void)

{
  if (_DAT_180c8ecd0 != 0) {
    FUN_18041eb10();
  }
  return;
}





