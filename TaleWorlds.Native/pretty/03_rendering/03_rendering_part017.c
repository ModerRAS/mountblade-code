#include "TaleWorlds.Native.Split.h"

// 03_rendering_part017.c - 渲染系统组件 - 11个函数

// 函数: void FUN_1802776ad(void)
// 渲染对象清理处理
void Process_Render_Object_Cleanup(void)
{
  int *render_count_ptr;
  byte *flag_byte_ptr;
  longlong render_obj;
  longlong slot_data;
  longlong global_context;
  longlong slot_offset;
  longlong frame_context;
  longlong *obj_array_ptr;
  uint render_flags;
  
  do {
    if ((*(uint *)(obj_array_ptr + 1) & render_flags) != 0) {
      render_obj = *obj_array_ptr;
      if (*(longlong *)(render_obj + 0x1b8) != 0) {
        slot_offset = 0xb8;
        global_context = _DAT_180c86870;
        do {
          slot_data = *(longlong *)(slot_offset + *(longlong *)(render_obj + 0x1b8));
          if ((((slot_data != 0) && (*(longlong *)(slot_offset + 0x328 + *(longlong *)(render_obj + 0x1b8)) == 0))
              && ((*(uint *)(slot_data + 0x328) & 0x20000000) == 0)) &&
             (*(longlong *)(slot_data + 0x370) == 0)) {
            if (*(longlong *)(slot_data + 0x1d8) == 0) {
              FUN_18023b050(slot_data,0);
              global_context = _DAT_180c86870;
              render_count_ptr = (int *)(*(longlong *)(slot_offset + *(longlong *)(render_obj + 0x1b8)) + 0x3a8);
              *render_count_ptr = *render_count_ptr + 1;
            }
            else if (global_context != 0) {
              *(longlong *)(slot_data + 0x340) = (longlong)*(int *)(global_context + 0x224);
            }
          }
          slot_offset = slot_offset + 8;
        } while (slot_offset < 0x138);
      }
      if (*(char *)(render_obj + 0xf9) != '\0') {
        if (*(longlong *)(render_obj + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(render_obj + 0x1d8) = 0;
        LOCK();
        *(undefined1 *)(render_obj + 0xf9) = 0;
        UNLOCK();
      }
      if (*(longlong *)(render_obj + 0x1e8) != 0) {
        FUN_180080060();
        *(undefined8 *)(render_obj + 0x1e8) = 0;
        if (*(longlong *)(render_obj + 0x1f0) != 0) {
          flag_byte_ptr = (byte *)(*(longlong *)(render_obj + 0x1f0) + 0xfe);
          *flag_byte_ptr = *flag_byte_ptr & 0xfb;
        }
      }
    }
    obj_array_ptr = obj_array_ptr + 2;
  } while (obj_array_ptr < *(longlong **)(frame_context + 0x40));
  return;
}





// 函数: void FUN_1802777dd(void)
// 空函数 - 渲染系统占位符
void Render_System_Placeholder(void)
{
  return;
}



// WARNING: Removing unreachable block (ram,0x00018027787a)
// WARNING: Removing unreachable block (ram,0x0001802778b9)



// 函数: void FUN_1802777f0(longlong param_1)
// 处理渲染对象数组
void Process_Render_Object_Array(longlong render_context)
{
  longlong *render_obj;
  longlong *temp_obj;
  longlong *obj_iterator;
  longlong *stack_obj_70;
  undefined1 context_buffer[8];
  longlong *stack_obj_60;
  undefined4 process_flag;
  longlong *stack_obj_50;
  undefined2 status_flag;
  char cleanup_flag;
  
  obj_iterator = *(longlong **)(render_context + 0x38);
  if (obj_iterator < *(longlong **)(render_context + 0x40)) {
    do {
      render_obj = (longlong *)*obj_iterator;
      if (render_obj[0x42] == 0) {
        render_obj[0x3f] = 0;
        render_obj[0x40] = 0;
        *(undefined4 *)(render_obj + 0x41) = 0;
        FUN_180079520(render_obj);
      }
      else {
        (**(code **)(*render_obj + 0x28))();
        stack_obj_50 = (longlong *)0x0;
        stack_obj_60 = (longlong *)0x0;
        context_buffer[0] = 0;
        (**(code **)(*render_obj + 0x28))(render_obj);
        process_flag = 0;
        stack_obj_60 = render_obj;
        FUN_18007f4c0(context_buffer);
        temp_obj = stack_obj_50;
        if (stack_obj_50 != (longlong *)0x0) {
          (**(code **)(*stack_obj_50 + 0x28))(stack_obj_50);
        }
        stack_obj_70 = temp_obj;
        status_flag = 0;
        cleanup_flag = '\0';
        (**(code **)(*render_obj + 0x38))(render_obj);
        *(undefined4 *)(temp_obj + 2) = 0;
        *(undefined4 *)(temp_obj + 7) = 0;
        *(undefined4 *)(temp_obj + 0x11) = 0;
        *(undefined4 *)(temp_obj + 0xc) = 0;
        *(undefined2 *)(temp_obj + 0x18) = 0;
        if (temp_obj[0x17] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        temp_obj[0x17] = 0;
        FUN_180085530(temp_obj[0x16]);
        temp_obj[0x16] = 0;
        *(undefined4 *)(temp_obj + 0x19) = 0;
        status_flag = 0x101;
        if ((render_obj != (longlong *)0x0) && (temp_obj != (longlong *)0x0)) {
          if (cleanup_flag != '\0') {
            FUN_180075b70();
          }
          FUN_18007f6a0(context_buffer);
          if ((char)status_flag != '\0') {
            FUN_180079520(render_obj);
          }
          if (status_flag._1_1_ != '\0') {
            FUN_180079520(render_obj);
          }
          stack_obj_70 = (longlong *)0x0;
          if (temp_obj != (longlong *)0x0) {
            (**(code **)(*temp_obj + 0x38))();
          }
        }
        FUN_18007f6a0(context_buffer);
        if (stack_obj_50 != (longlong *)0x0) {
          (**(code **)(*stack_obj_50 + 0x38))();
        }
        if (stack_obj_70 != (longlong *)0x0) {
          (**(code **)(*stack_obj_70 + 0x38))();
        }
        if (render_obj != (longlong *)0x0) {
          (**(code **)(*render_obj + 0x38))();
        }
      }
      obj_iterator = obj_iterator + 2;
    } while (obj_iterator < *(longlong **)(render_context + 0x40));
  }
  return;
}





// 函数: void FUN_180277a20(longlong param_1,byte param_2)
// 渲染对象位图处理和清理
void Process_Render_Object_Bitmap(longlong render_context,byte flag_mask)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar9 = 1 << (param_2 & 0x1f);
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  if (puVar6 != puVar4) {
    puVar7 = puVar6 + 2;
    do {
      uVar1 = *(uint *)(puVar6 + 1);
      if (uVar1 == uVar9) {
        if ((puVar7 < puVar4) &&
           (lVar8 = (longlong)puVar4 - (longlong)puVar7 >> 4, puVar5 = puVar7, 0 < lVar8)) {
          do {
            uVar2 = *puVar5;
            *puVar5 = 0;
            plVar3 = (longlong *)puVar5[-2];
            puVar5[-2] = uVar2;
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x38))();
            }
            *(undefined4 *)(puVar5 + -1) = *(undefined4 *)(puVar5 + 1);
            lVar8 = lVar8 + -1;
            puVar5 = puVar5 + 2;
          } while (0 < lVar8);
          puVar4 = *(undefined8 **)(param_1 + 0x40);
        }
        *(undefined8 **)(param_1 + 0x40) = puVar4 + -2;
        plVar3 = (longlong *)puVar4[-2];
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
      }
      else {
        if ((uVar9 & uVar1) != 0) {
          *(uint *)(puVar6 + 1) = ~uVar9 & uVar1;
        }
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 2;
      }
      puVar4 = *(undefined8 **)(param_1 + 0x40);
    } while (puVar6 != puVar4);
  }
  FUN_180278270(param_1);
  lVar8 = *(longlong *)(param_1 + 0x28);
  if ((lVar8 != 0) &&
     (*(short *)(lVar8 + 0x2b0) = *(short *)(lVar8 + 0x2b0) + 1, *(longlong *)(lVar8 + 0x168) != 0))
  {
    func_0x0001802eeba0();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277b50(longlong param_1,uint param_2)
void FUN_180277b50(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)0x0;
  uVar5 = 0;
  plVar10 = *(longlong **)(param_1 + 0x38);
  plVar8 = (longlong *)0x0;
  plVar3 = (longlong *)0x0;
  plVar9 = plVar3;
  plVar11 = plVar8;
  plVar12 = plVar7;
  plVar4 = plVar7;
  if (*(longlong *)(param_1 + 0x40) - (longlong)plVar10 >> 4 != 0) {
    do {
      plVar3 = plVar9;
      plVar8 = plVar11;
      uVar6 = (uint)plVar7;
      if ((*(uint *)((longlong)(plVar10 + 1) + (longlong)plVar12) >> (param_2 & 0x1f) & 1) != 0) {
        if (plVar11 < plVar4) {
          plVar8 = plVar11 + 2;
          plVar9 = *(longlong **)((longlong)plVar10 + (longlong)plVar12);
          *plVar11 = (longlong)plVar9;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x28))();
            uVar6 = uVar5;
          }
          *(undefined4 *)(plVar11 + 1) =
               *(undefined4 *)((longlong)(plVar10 + 1) + (longlong)plVar12);
        }
        else {
          lVar2 = (longlong)plVar11 - (longlong)plVar9 >> 4;
          if (lVar2 == 0) {
            lVar2 = 1;
LAB_180277c31:
            plVar3 = (longlong *)
                     FUN_18062b420(_DAT_180c8ed18,lVar2 << 4,
                                   CONCAT71((uint7)(uint3)(param_2 >> 8),0x16));
          }
          else {
            lVar2 = lVar2 * 2;
            plVar3 = (longlong *)0x0;
            if (lVar2 != 0) goto LAB_180277c31;
          }
          plVar8 = plVar3;
          if (plVar9 != plVar11) {
            plVar4 = plVar9;
            do {
              *plVar8 = *plVar4;
              *plVar4 = 0;
              puVar1 = (undefined4 *)((longlong)plVar3 + (8 - (longlong)plVar9) + (longlong)plVar4);
              *puVar1 = *(undefined4 *)((longlong)puVar1 + ((longlong)plVar9 - (longlong)plVar3));
              plVar4 = plVar4 + 2;
              plVar8 = plVar8 + 2;
            } while (plVar4 != plVar11);
          }
          plVar4 = *(longlong **)((longlong)plVar10 + (longlong)plVar12);
          *plVar8 = (longlong)plVar4;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x28))();
          }
          *(undefined4 *)(plVar8 + 1) = *(undefined4 *)((longlong)(plVar10 + 1) + (longlong)plVar12)
          ;
          plVar8 = plVar8 + 2;
          for (plVar10 = plVar9; plVar10 != plVar11; plVar10 = plVar10 + 2) {
            if ((longlong *)*plVar10 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar10 + 0x38))();
            }
          }
          if (plVar9 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar9);
          }
          plVar4 = plVar3 + lVar2 * 2;
          uVar6 = uVar5;
        }
      }
      uVar5 = uVar6 + 1;
      plVar7 = (longlong *)(ulonglong)uVar5;
      plVar10 = *(longlong **)(param_1 + 0x38);
      plVar9 = plVar3;
      plVar11 = plVar8;
      plVar12 = plVar12 + 2;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(param_1 + 0x40) - (longlong)plVar10 >> 4));
  }
  *(longlong **)(param_1 + 0x38) = plVar3;
  plVar3 = *(longlong **)(param_1 + 0x40);
  *(longlong **)(param_1 + 0x40) = plVar8;
  *(longlong **)(param_1 + 0x48) = plVar4;
  *(undefined4 *)(param_1 + 0x50) = 0x16;
  FUN_180278270(param_1);
  lVar2 = *(longlong *)(param_1 + 0x28);
  plVar8 = plVar10;
  if ((lVar2 != 0) &&
     (*(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1, *(longlong *)(lVar2 + 0x168) != 0))
  {
    func_0x0001802eeba0();
  }
  for (; plVar8 != plVar3; plVar8 = plVar8 + 2) {
    if ((longlong *)*plVar8 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar8 + 0x38))();
    }
  }
  if (plVar10 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277e30(longlong param_1,ulonglong *param_2,uint param_3)
void FUN_180277e30(longlong param_1,ulonglong *param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  if (puVar5 < *(undefined8 **)(param_1 + 0x40)) {
    do {
      if ((*(uint *)(puVar5 + 1) & param_3) != 0) {
        puVar6 = (undefined8 *)param_2[1];
        uVar1 = *puVar5;
        if (puVar6 < (undefined8 *)param_2[2]) {
          param_2[1] = (ulonglong)(puVar6 + 1);
          *puVar6 = uVar1;
        }
        else {
          puVar4 = (undefined8 *)*param_2;
          lVar2 = (longlong)puVar6 - (longlong)puVar4 >> 3;
          if (lVar2 == 0) {
            lVar2 = 1;
LAB_180277eb2:
            puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)param_2[3]);
            puVar4 = (undefined8 *)*param_2;
            puVar6 = (undefined8 *)param_2[1];
          }
          else {
            lVar2 = lVar2 * 2;
            if (lVar2 != 0) goto LAB_180277eb2;
            puVar3 = (undefined8 *)0x0;
          }
          if (puVar4 != puVar6) {
                    // WARNING: Subroutine does not return
            memmove(puVar3,puVar4,(longlong)puVar6 - (longlong)puVar4);
          }
          *puVar3 = uVar1;
          if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_2 = (ulonglong)puVar3;
          param_2[2] = (ulonglong)(puVar3 + lVar2);
          param_2[1] = (ulonglong)(puVar3 + 1);
        }
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 < *(undefined8 **)(param_1 + 0x40));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277e52(void)
void FUN_180277e52(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong *unaff_RBX;
  undefined8 *unaff_RSI;
  undefined8 *puVar5;
  uint unaff_R12D;
  longlong unaff_R13;
  
  do {
    if ((*(uint *)(unaff_RSI + 1) & unaff_R12D) != 0) {
      puVar5 = (undefined8 *)unaff_RBX[1];
      uVar1 = *unaff_RSI;
      if (puVar5 < (undefined8 *)unaff_RBX[2]) {
        unaff_RBX[1] = (ulonglong)(puVar5 + 1);
        *puVar5 = uVar1;
      }
      else {
        puVar4 = (undefined8 *)*unaff_RBX;
        lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_180277eb2:
          puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)unaff_RBX[3]);
          puVar4 = (undefined8 *)*unaff_RBX;
          puVar5 = (undefined8 *)unaff_RBX[1];
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_180277eb2;
          puVar3 = (undefined8 *)0x0;
        }
        if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
          memmove(puVar3,puVar4,(longlong)puVar5 - (longlong)puVar4);
        }
        *puVar3 = uVar1;
        if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *unaff_RBX = (ulonglong)puVar3;
        unaff_RBX[2] = (ulonglong)(puVar3 + lVar2);
        unaff_RBX[1] = (ulonglong)(puVar3 + 1);
      }
    }
    unaff_RSI = unaff_RSI + 2;
    if (*(undefined8 **)(unaff_R13 + 0x40) <= unaff_RSI) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180277f3a(void)
void FUN_180277f3a(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277f50(longlong param_1,ulonglong *param_2,ulonglong *param_3,float *param_4)
void FUN_180277f50(longlong param_1,ulonglong *param_2,ulonglong *param_3,float *param_4)

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
  longlong lVar15;
  longlong *plVar16;
  float *pfVar17;
  longlong *plVar18;
  float *pfVar19;
  longlong *plVar20;
  float *pfVar21;
  longlong lVar22;
  longlong *plVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  plVar23 = *(longlong **)(param_1 + 0x38);
  if (plVar23 < *(longlong **)(param_1 + 0x40)) {
    do {
      if (((uint)param_4[0x10] & *(uint *)(plVar23 + 1)) != 0) {
        plVar20 = (longlong *)param_2[1];
        lVar22 = *plVar23;
        if (plVar20 < (longlong *)param_2[2]) {
          param_2[1] = (ulonglong)(plVar20 + 1);
          *plVar20 = lVar22;
        }
        else {
          plVar18 = (longlong *)*param_2;
          lVar15 = (longlong)plVar20 - (longlong)plVar18 >> 3;
          if (lVar15 == 0) {
            lVar15 = 1;
LAB_180277fef:
            plVar16 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar15 * 8,(char)param_2[3]);
            plVar18 = (longlong *)*param_2;
            plVar20 = (longlong *)param_2[1];
          }
          else {
            lVar15 = lVar15 * 2;
            if (lVar15 != 0) goto LAB_180277fef;
            plVar16 = (longlong *)0x0;
          }
          if (plVar18 != plVar20) {
                    // WARNING: Subroutine does not return
            memmove(plVar16,plVar18,(longlong)plVar20 - (longlong)plVar18);
          }
          *plVar16 = lVar22;
          if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          param_2[2] = (ulonglong)(plVar16 + lVar15);
          *param_2 = (ulonglong)plVar16;
          param_2[1] = (ulonglong)(plVar16 + 1);
        }
        fVar3 = *param_4;
        fVar4 = param_4[1];
        fVar5 = param_4[2];
        fVar6 = param_4[3];
        pfVar21 = (float *)param_3[1];
        fVar7 = param_4[4];
        fVar8 = param_4[5];
        fVar9 = param_4[6];
        fVar10 = param_4[7];
        fVar11 = param_4[8];
        fVar12 = param_4[9];
        fVar13 = param_4[10];
        fVar14 = param_4[0xb];
        fVar27 = *(float *)(lVar22 + 0x124);
        fVar24 = *(float *)(lVar22 + 0x120);
        fVar1 = *(float *)(lVar22 + 0x128);
        fVar25 = *(float *)(lVar22 + 0x130);
        fVar26 = *(float *)(lVar22 + 0x140);
        fVar2 = *(float *)(lVar22 + 0x150);
        fVar35 = *(float *)(lVar22 + 0x134);
        fVar28 = fVar27 * fVar7 + fVar24 * fVar3 + fVar1 * fVar11;
        fVar29 = fVar27 * fVar8 + fVar24 * fVar4 + fVar1 * fVar12;
        fVar30 = fVar27 * fVar9 + fVar24 * fVar5 + fVar1 * fVar13;
        fVar31 = fVar27 * fVar10 + fVar24 * fVar6 + fVar1 * fVar14;
        fVar27 = *(float *)(lVar22 + 0x138);
        fVar24 = *(float *)(lVar22 + 0x144);
        fVar32 = fVar25 * fVar3 + fVar35 * fVar7 + fVar27 * fVar11;
        fVar33 = fVar25 * fVar4 + fVar35 * fVar8 + fVar27 * fVar12;
        fVar34 = fVar25 * fVar5 + fVar35 * fVar9 + fVar27 * fVar13;
        fVar35 = fVar25 * fVar6 + fVar35 * fVar10 + fVar27 * fVar14;
        fVar27 = *(float *)(lVar22 + 0x148);
        fVar1 = *(float *)(lVar22 + 0x154);
        fVar36 = fVar26 * fVar3 + fVar24 * fVar7 + fVar27 * fVar11;
        fVar37 = fVar26 * fVar4 + fVar24 * fVar8 + fVar27 * fVar12;
        fVar38 = fVar26 * fVar5 + fVar24 * fVar9 + fVar27 * fVar13;
        fVar39 = fVar26 * fVar6 + fVar24 * fVar10 + fVar27 * fVar14;
        fVar27 = *(float *)(lVar22 + 0x158);
        fVar24 = fVar2 * fVar3 + fVar1 * fVar7 + fVar27 * fVar11 + param_4[0xc];
        fVar25 = fVar2 * fVar4 + fVar1 * fVar8 + fVar27 * fVar12 + param_4[0xd];
        fVar26 = fVar2 * fVar5 + fVar1 * fVar9 + fVar27 * fVar13 + param_4[0xe];
        fVar27 = fVar2 * fVar6 + fVar1 * fVar10 + fVar27 * fVar14 + param_4[0xf];
        if (pfVar21 < (float *)param_3[2]) {
          param_3[1] = (ulonglong)(pfVar21 + 0x10);
          *pfVar21 = fVar28;
          pfVar21[1] = fVar29;
          pfVar21[2] = fVar30;
          pfVar21[3] = fVar31;
          pfVar21[4] = fVar32;
          pfVar21[5] = fVar33;
          pfVar21[6] = fVar34;
          pfVar21[7] = fVar35;
          pfVar21[8] = fVar36;
          pfVar21[9] = fVar37;
          pfVar21[10] = fVar38;
          pfVar21[0xb] = fVar39;
          pfVar21[0xc] = fVar24;
          pfVar21[0xd] = fVar25;
          pfVar21[0xe] = fVar26;
          pfVar21[0xf] = fVar27;
        }
        else {
          pfVar19 = (float *)*param_3;
          lVar22 = (longlong)pfVar21 - (longlong)pfVar19 >> 6;
          if (lVar22 == 0) {
            lVar22 = 1;
LAB_1802781a7:
            pfVar17 = (float *)FUN_18062b420(_DAT_180c8ed18,lVar22 << 6,(char)param_3[3]);
            pfVar19 = (float *)*param_3;
            pfVar21 = (float *)param_3[1];
          }
          else {
            lVar22 = lVar22 * 2;
            if (lVar22 != 0) goto LAB_1802781a7;
            pfVar17 = (float *)0x0;
          }
          if (pfVar19 != pfVar21) {
                    // WARNING: Subroutine does not return
            memmove(pfVar17,pfVar19,(longlong)pfVar21 - (longlong)pfVar19);
          }
          *pfVar17 = fVar28;
          pfVar17[1] = fVar29;
          pfVar17[2] = fVar30;
          pfVar17[3] = fVar31;
          pfVar17[4] = fVar32;
          pfVar17[5] = fVar33;
          pfVar17[6] = fVar34;
          pfVar17[7] = fVar35;
          pfVar17[8] = fVar36;
          pfVar17[9] = fVar37;
          pfVar17[10] = fVar38;
          pfVar17[0xb] = fVar39;
          pfVar17[0xc] = fVar24;
          pfVar17[0xd] = fVar25;
          pfVar17[0xe] = fVar26;
          pfVar17[0xf] = fVar27;
          if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_3 = (ulonglong)pfVar17;
          param_3[2] = (ulonglong)(pfVar17 + lVar22 * 0x10);
          param_3[1] = (ulonglong)(pfVar17 + 0x10);
        }
      }
      plVar23 = plVar23 + 2;
    } while (plVar23 < *(longlong **)(param_1 + 0x40));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277f79(void)
void FUN_180277f79(void)

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
  longlong in_RAX;
  longlong lVar15;
  longlong *plVar16;
  float *pfVar17;
  longlong *plVar18;
  float *pfVar19;
  undefined8 unaff_RBX;
  longlong *plVar20;
  float *pfVar21;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong lVar22;
  ulonglong *unaff_RDI;
  float *in_R9;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong *unaff_R14;
  longlong *unaff_R15;
  undefined4 unaff_XMM6_Da;
  float fVar23;
  undefined4 unaff_XMM6_Db;
  float fVar24;
  undefined4 unaff_XMM6_Dc;
  float fVar25;
  undefined4 unaff_XMM6_Dd;
  float fVar26;
  undefined4 unaff_XMM7_Da;
  float fVar27;
  undefined4 unaff_XMM7_Db;
  float fVar28;
  undefined4 unaff_XMM7_Dc;
  float fVar29;
  undefined4 unaff_XMM7_Dd;
  float fVar30;
  undefined4 unaff_XMM8_Da;
  float fVar31;
  undefined4 unaff_XMM8_Db;
  float fVar32;
  undefined4 unaff_XMM8_Dc;
  float fVar33;
  undefined4 unaff_XMM8_Dd;
  float fVar34;
  undefined4 unaff_XMM9_Da;
  float fVar35;
  undefined4 unaff_XMM9_Db;
  float fVar36;
  undefined4 unaff_XMM9_Dc;
  float fVar37;
  undefined4 unaff_XMM9_Dd;
  float fVar38;
  float *in_stack_000000a8;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
  *(undefined8 *)(in_RAX + 0x18) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R12;
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_RAX + -0x58) = unaff_XMM8_Da;
  *(undefined4 *)(in_RAX + -0x54) = unaff_XMM8_Db;
  *(undefined4 *)(in_RAX + -0x50) = unaff_XMM8_Dc;
  *(undefined4 *)(in_RAX + -0x4c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_RAX + -0x68) = unaff_XMM9_Da;
  *(undefined4 *)(in_RAX + -100) = unaff_XMM9_Db;
  *(undefined4 *)(in_RAX + -0x60) = unaff_XMM9_Dc;
  *(undefined4 *)(in_RAX + -0x5c) = unaff_XMM9_Dd;
  do {
    if (((uint)in_R9[0x10] & *(uint *)(unaff_R15 + 1)) != 0) {
      plVar20 = (longlong *)unaff_RDI[1];
      lVar22 = *unaff_R15;
      if (plVar20 < (longlong *)unaff_RDI[2]) {
        unaff_RDI[1] = (ulonglong)(plVar20 + 1);
        *plVar20 = lVar22;
      }
      else {
        plVar18 = (longlong *)*unaff_RDI;
        lVar15 = (longlong)plVar20 - (longlong)plVar18 >> 3;
        if (lVar15 == 0) {
          lVar15 = 1;
LAB_180277fef:
          plVar16 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar15 * 8,(char)unaff_RDI[3]);
          plVar18 = (longlong *)*unaff_RDI;
          plVar20 = (longlong *)unaff_RDI[1];
        }
        else {
          lVar15 = lVar15 * 2;
          if (lVar15 != 0) goto LAB_180277fef;
          plVar16 = (longlong *)0x0;
        }
        if (plVar18 != plVar20) {
                    // WARNING: Subroutine does not return
          memmove(plVar16,plVar18,(longlong)plVar20 - (longlong)plVar18);
        }
        *plVar16 = lVar22;
        if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        unaff_RDI[2] = (ulonglong)(plVar16 + lVar15);
        *unaff_RDI = (ulonglong)plVar16;
        unaff_RDI[1] = (ulonglong)(plVar16 + 1);
        in_R9 = in_stack_000000a8;
      }
      fVar3 = *in_R9;
      fVar4 = in_R9[1];
      fVar5 = in_R9[2];
      fVar6 = in_R9[3];
      pfVar21 = (float *)unaff_R14[1];
      fVar7 = in_R9[4];
      fVar8 = in_R9[5];
      fVar9 = in_R9[6];
      fVar10 = in_R9[7];
      fVar11 = in_R9[8];
      fVar12 = in_R9[9];
      fVar13 = in_R9[10];
      fVar14 = in_R9[0xb];
      fVar26 = *(float *)(lVar22 + 0x124);
      fVar23 = *(float *)(lVar22 + 0x120);
      fVar1 = *(float *)(lVar22 + 0x128);
      fVar24 = *(float *)(lVar22 + 0x130);
      fVar25 = *(float *)(lVar22 + 0x140);
      fVar2 = *(float *)(lVar22 + 0x150);
      fVar34 = *(float *)(lVar22 + 0x134);
      fVar27 = fVar26 * fVar7 + fVar23 * fVar3 + fVar1 * fVar11;
      fVar28 = fVar26 * fVar8 + fVar23 * fVar4 + fVar1 * fVar12;
      fVar29 = fVar26 * fVar9 + fVar23 * fVar5 + fVar1 * fVar13;
      fVar30 = fVar26 * fVar10 + fVar23 * fVar6 + fVar1 * fVar14;
      fVar26 = *(float *)(lVar22 + 0x138);
      fVar23 = *(float *)(lVar22 + 0x144);
      fVar31 = fVar24 * fVar3 + fVar34 * fVar7 + fVar26 * fVar11;
      fVar32 = fVar24 * fVar4 + fVar34 * fVar8 + fVar26 * fVar12;
      fVar33 = fVar24 * fVar5 + fVar34 * fVar9 + fVar26 * fVar13;
      fVar34 = fVar24 * fVar6 + fVar34 * fVar10 + fVar26 * fVar14;
      fVar26 = *(float *)(lVar22 + 0x148);
      fVar1 = *(float *)(lVar22 + 0x154);
      fVar35 = fVar25 * fVar3 + fVar23 * fVar7 + fVar26 * fVar11;
      fVar36 = fVar25 * fVar4 + fVar23 * fVar8 + fVar26 * fVar12;
      fVar37 = fVar25 * fVar5 + fVar23 * fVar9 + fVar26 * fVar13;
      fVar38 = fVar25 * fVar6 + fVar23 * fVar10 + fVar26 * fVar14;
      fVar26 = *(float *)(lVar22 + 0x158);
      fVar23 = fVar2 * fVar3 + fVar1 * fVar7 + fVar26 * fVar11 + in_R9[0xc];
      fVar24 = fVar2 * fVar4 + fVar1 * fVar8 + fVar26 * fVar12 + in_R9[0xd];
      fVar25 = fVar2 * fVar5 + fVar1 * fVar9 + fVar26 * fVar13 + in_R9[0xe];
      fVar26 = fVar2 * fVar6 + fVar1 * fVar10 + fVar26 * fVar14 + in_R9[0xf];
      if (pfVar21 < (float *)unaff_R14[2]) {
        unaff_R14[1] = (ulonglong)(pfVar21 + 0x10);
        *pfVar21 = fVar27;
        pfVar21[1] = fVar28;
        pfVar21[2] = fVar29;
        pfVar21[3] = fVar30;
        pfVar21[4] = fVar31;
        pfVar21[5] = fVar32;
        pfVar21[6] = fVar33;
        pfVar21[7] = fVar34;
        pfVar21[8] = fVar35;
        pfVar21[9] = fVar36;
        pfVar21[10] = fVar37;
        pfVar21[0xb] = fVar38;
        pfVar21[0xc] = fVar23;
        pfVar21[0xd] = fVar24;
        pfVar21[0xe] = fVar25;
        pfVar21[0xf] = fVar26;
      }
      else {
        pfVar19 = (float *)*unaff_R14;
        lVar22 = (longlong)pfVar21 - (longlong)pfVar19 >> 6;
        if (lVar22 == 0) {
          lVar22 = 1;
LAB_1802781a7:
          pfVar17 = (float *)FUN_18062b420(_DAT_180c8ed18,lVar22 << 6,(char)unaff_R14[3]);
          pfVar19 = (float *)*unaff_R14;
          pfVar21 = (float *)unaff_R14[1];
        }
        else {
          lVar22 = lVar22 * 2;
          if (lVar22 != 0) goto LAB_1802781a7;
          pfVar17 = (float *)0x0;
        }
        if (pfVar19 != pfVar21) {
                    // WARNING: Subroutine does not return
          memmove(pfVar17,pfVar19,(longlong)pfVar21 - (longlong)pfVar19);
        }
        *pfVar17 = fVar27;
        pfVar17[1] = fVar28;
        pfVar17[2] = fVar29;
        pfVar17[3] = fVar30;
        pfVar17[4] = fVar31;
        pfVar17[5] = fVar32;
        pfVar17[6] = fVar33;
        pfVar17[7] = fVar34;
        pfVar17[8] = fVar35;
        pfVar17[9] = fVar36;
        pfVar17[10] = fVar37;
        pfVar17[0xb] = fVar38;
        pfVar17[0xc] = fVar23;
        pfVar17[0xd] = fVar24;
        pfVar17[0xe] = fVar25;
        pfVar17[0xf] = fVar26;
        if (*unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *unaff_R14 = (ulonglong)pfVar17;
        unaff_R14[2] = (ulonglong)(pfVar17 + lVar22 * 0x10);
        unaff_R14[1] = (ulonglong)(pfVar17 + 0x10);
        in_R9 = in_stack_000000a8;
      }
    }
    unaff_R15 = unaff_R15 + 2;
    if (*(longlong **)(unaff_R13 + 0x40) <= unaff_R15) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180278261(void)
void FUN_180278261(void)

{
  return;
}





