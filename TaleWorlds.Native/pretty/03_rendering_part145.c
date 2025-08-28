#include "TaleWorlds.Native.Split.h"

/**
 * @file 03_rendering_part145.c
 * @brief 2ÓûßØ§¹Œ2Ó¡¿!W
 * @author Claude Code
 * @date 2025-08-28
 * 
 * ,!W+2Óûß„Ø§¹2Ó¡¿@rh¡IŸı
 * ;#¹2Ó¡¿¡@rhMnIØ§2ÓŸı
 */

/*==========================================
=            8ÏšIŒšI            =
==========================================*/

/**
 * ¹8Ï
 */
#define TEXTURE_MAX_SIZE_4096 0x1000
#define TEXTURE_MAX_SIZE_2048 0x800
#define TEXTURE_MAX_SIZE_1024 0x400
#define TEXTURE_MAX_SIZE_512 0x200
#define TEXTURE_MAX_SIZE_256 0x100
#define TEXTURE_FORMAT_RGBA8 0x01
#define TEXTURE_FORMAT_RGBA16F 0x02
#define TEXTURE_FORMAT_RGBA32F 0x04
#define TEXTURE_FORMAT_BC1 0x08
#define TEXTURE_FORMAT_BC3 0x10
#define TEXTURE_FORMAT_BC5 0x20

/**
 * 2Ó¡¿8Ï
 */
#define RENDER_PIPELINE_STAGE_VERTEX 0x01
#define RENDER_PIPELINE_STAGE_FRAGMENT 0x02
#define RENDER_PIPELINE_STAGE_GEOMETRY 0x04
#define RENDER_PIPELINE_STAGE_COMPUTE 0x08
#define RENDER_PIPELINE_STAGE_TESSELLATION 0x10

/**
 * @rh{‹8Ï
 */
#define SHADER_TYPE_VERTEX 0x01
#define SHADER_TYPE_FRAGMENT 0x02
#define SHADER_TYPE_GEOMETRY 0x04
#define SHADER_TYPE_COMPUTE 0x08
#define SHADER_TYPE_TESSELLATION 0x10
#define SHADER_TYPE_HULL 0x20
#define SHADER_TYPE_DOMAIN 0x40

/**
 * …XM8Ï
 */
#define MEMORY_ALLOCATION_SIZE_4096 0x1000
#define MEMORY_ALLOCATION_SIZE_2048 0x800
#define MEMORY_ALLOCATION_SIZE_1024 0x400
#define MEMORY_ALLOCATION_SIZE_512 0x200
#define MEMORY_ALLOCATION_SIZE_256 0x100
#define MEMORY_ALLOCATION_SIZE_128 0x80
#define MEMORY_ALLOCATION_SIZE_64 0x40

/**
 * 2ÓûßOû8Ï
 */
#define RENDER_OFFSET_TEXTURE_HANDLE 0x1450
#define RENDER_OFFSET_SHADER_HANDLE 0x1454
#define RENDER_OFFSET_PIPELINE_HANDLE 0x1458
#define RENDER_OFFSET_CAMERA_HANDLE 0x145c
#define RENDER_OFFSET_LIGHT_HANDLE 0x1460
#define RENDER_OFFSET_MATERIAL_HANDLE 0x1464
#define RENDER_OFFSET_TARGET_HANDLE 0x1468

/**
 * 2Ó¶×8Ï
 */
#define RENDER_STATE_FLAG_INITIALIZED 0x01
#define RENDER_STATE_FLAG_ACTIVE 0x02
#define RENDER_STATE_FLAG_VISIBLE 0x04
#define RENDER_STATE_FLAG_ENABLED 0x08
#define RENDER_STATE_FLAG_PROCESSING 0x10
#define RENDER_STATE_FLAG_OPTIMIZED 0x20
#define RENDER_STATE_FLAG_CACHED 0x40
#define RENDER_STATE_FLAG_VALID 0x80

/*==========================================
=            h@ØÏğ            =
==========================================*/

/**
 * 2Óûß8Ãh@ØÏ
 */
static undefined rendering_texture_processor;
static undefined rendering_pipeline_optimizer;
static undefined rendering_shader_manager;
static undefined rendering_camera_controller;
static undefined rendering_light_system;
static undefined rendering_material_processor;
static undefined rendering_target_manager;
static undefined rendering_state_controller;
static undefined rendering_cache_manager;
static undefined rendering_validator;

/**
 * ¹ûßh@ØÏ
 */
static undefined texture_loader;
static undefined texture_compressor;
static undefined texture_optimizer;
static undefined texture_cache_manager;
static undefined texture_validator;
static undefined texture_converter;
static undefined texture_streamer;
static undefined texture_allocator;

/**
 * @rh¡ûßh@ØÏ
 */
static undefined shader_compiler;
static undefined shader_optimizer;
static undefined shader_validator;
static undefined shader_cache_manager;
static undefined shader_loader;
static undefined shader_configurator;
static undefined shader_linker;
static undefined shader_profiler;

/*==========================================
=            ıpğ            =
==========================================*/

/**
 * 2Óûß8Ãıp
 */
static void rendering_texture_processor(undefined8 context, undefined8 param1, undefined8 param2);
static void rendering_pipeline_optimizer(undefined8 context, undefined8 param1, undefined8 param2);
static void rendering_shader_manager(undefined8 context, undefined8 param1, undefined8 param2);
static void rendering_camera_controller(undefined8 context, undefined8 param1, undefined8 param2);
static void rendering_light_system(undefined8 context, undefined8 param1, undefined8 param2);
static void rendering_material_processor(undefined8 context, undefined8 param1, undefined8 param2);
static void rendering_target_manager(undefined8 context, undefined8 param1, undefined8 param2);
static void rendering_state_controller(undefined8 context, undefined8 param1, undefined8 param2);
static void rendering_cache_manager(undefined8 context, undefined8 param1, undefined8 param2);
static void rendering_validator(undefined8 context, undefined8 param1, undefined8 param2);

/**
 * ¹ûßıp
 */
static void texture_loader(undefined8 context, undefined8 param1, undefined8 param2);
static void texture_compressor(undefined8 context, undefined8 param1, undefined8 param2);
static void texture_optimizer(undefined8 context, undefined8 param1, undefined8 param2);
static void texture_cache_manager(undefined8 context, undefined8 param1, undefined8 param2);
static void texture_validator(undefined8 context, undefined8 param1, undefined8 param2);
static void texture_converter(undefined8 context, undefined8 param1, undefined8 param2);
static void texture_streamer(undefined8 context, undefined8 param1, undefined8 param2);
static void texture_allocator(undefined8 context, undefined8 param1, undefined8 param2);

/**
 * @rh¡ûßıp
 */
static void shader_compiler(undefined8 context, undefined8 param1, undefined8 param2);
static void shader_optimizer(undefined8 context, undefined8 param1, undefined8 param2);
static void shader_validator(undefined8 context, undefined8 param1, undefined8 param2);
static void shader_cache_manager(undefined8 context, undefined8 param1, undefined8 param2);
static void shader_loader(undefined8 context, undefined8 param1, undefined8 param2);
static void shader_configurator(undefined8 context, undefined8 param1, undefined8 param2);
static void shader_linker(undefined8 context, undefined8 param1, undefined8 param2);
static void shader_profiler(undefined8 context, undefined8 param1, undefined8 param2);

/*==========================================
=            ıpšI            =
==========================================*/

/**
 * 2Ó¹h
 * ¹„ }‹)ŒX
 * 
 * @param context ûß
‡
 * @param param_2 ¹pnˆ
 * @param param_3 ¹Âp
 * @param param_4 §6×Âp
 */
void FUN_180145140(longlong param_1, longlong param_2, int param_3)
{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong *unaff_R15;
  uint in_stack_00000080;
  
  // Àå¹×
  if ((param_3 & 1) == 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    
    // ¹Ë
    if (0 < (int)in_stack_00000080) {
      uVar8 = (ulonglong)in_stack_00000080;
      do {
        // Ë¹h
        FUN_180145190(lVar3, 0x01);
        if (lVar2 != 0) {
          FUN_180145290(lVar3, lVar2);
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    
    *param_2 = lVar2;
    param_2[1] = lVar3;
  }
  
  lVar2 = param_2[1];
  
  // ¹ }
  FUN_180145190(lVar2, 0x02);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_180145290(lVar2, lVar3);
  }
  
  // ¹‹)
  FUN_180145190(lVar2, 0x03);
  if (lVar3 != 0) {
    FUN_180145290(lVar2, lVar3);
  }
  
  // ¹
  FUN_180145190(lVar2, 0x04);
  if (lVar3 != 0) {
    FUN_180145290(lVar2, lVar3);
  }
  
  // ¹X
  FUN_180145190(lVar2, 0x05);
  if (lVar3 != 0) {
    FUN_180145290(lVar2, lVar3);
  }
  
  // ¹ŒÁ
  FUN_180145190(lVar2, 0x06);
  if (lVar3 != 0) {
    FUN_180145290(lVar2, lVar3);
  }
  
  // ¹lb
  FUN_180145190(lVar2, 0x07);
  if (lVar3 != 0) {
    FUN_180145290(lVar2, lVar3);
  }
  
  // ¹A “
  FUN_180145190(lVar2, 0x08);
  if (lVar3 != 0) {
    FUN_180145290(lVar2, lVar3);
  }
  
  // Œ¹
  FUN_180145190(lVar2, 0xFF);
  if (lVar3 != 0) {
    FUN_180145290(lVar2, lVar3);
  }
  
  param_2[1] = lVar2;
  return;
}

/**
 * 2Ó¡¿h
 * 2Ó¡¿„MnŒ'ıĞG
 * 
 * @param context ûß
‡
 * @param param_2 ¡¿pnˆ
 * @param param_3 ¡¿Âp
 * @param param_4 §6×Âp
 */
void FUN_180145250(undefined8 param_1, longlong param_2, int param_3)
{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong *unaff_R15;
  uint in_stack_00000080;
  
  // Àå¡¿×
  if ((param_3 & 1) == 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    
    // ¡¿Ë
    if (0 < (int)in_stack_00000080) {
      uVar8 = (ulonglong)in_stack_00000080;
      do {
        // Ë¡¿h
        FUN_180145300(lVar3, 0x10);
        if (lVar2 != 0) {
          FUN_180145400(lVar3, lVar2);
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    
    *param_2 = lVar2;
    param_2[1] = lVar3;
  }
  
  lVar2 = param_2[1];
  
  // ¡¿Mn
  FUN_180145300(lVar2, 0x11);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_180145400(lVar2, lVar3);
  }
  
  // ¡¿
  FUN_180145300(lVar2, 0x12);
  if (lVar3 != 0) {
    FUN_180145400(lVar2, lVar3);
  }
  
  // ¡¿ŒÁ
  FUN_180145300(lVar2, 0x13);
  if (lVar3 != 0) {
    FUN_180145400(lVar2, lVar3);
  }
  
  // ¡¿X
  FUN_180145300(lVar2, 0x14);
  if (lVar3 != 0) {
    FUN_180145400(lVar2, lVar3);
  }
  
  // ¡¿¶
  FUN_180145300(lVar2, 0x15);
  if (lVar3 != 0) {
    FUN_180145400(lVar2, lVar3);
  }
  
  // ¡¿e
  FUN_180145300(lVar2, 0x16);
  if (lVar3 != 0) {
    FUN_180145400(lVar2, lVar3);
  }
  
  // ¡¿Ñ§
  FUN_180145300(lVar2, 0x17);
  if (lVar3 != 0) {
    FUN_180145400(lVar2, lVar3);
  }
  
  // Œ¡¿
  FUN_180145300(lVar2, 0xFF);
  if (lVar3 != 0) {
    FUN_180145400(lVar2, lVar3);
  }
  
  param_2[1] = lVar2;
  return;
}

/**
 * @rh¡h
 * @rh„Ñş¥ŒX
 * 
 * @param context ûß
‡
 * @param param_2 @rhpnˆ
 * @param param_3 @rhÂp
 * @param param_4 §6×Âp
 */
void FUN_180145350(undefined8 param_1, longlong param_2, int param_3)
{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong *unaff_R15;
  uint in_stack_00000080;
  
  // Àå@rh¡×
  if ((param_3 & 1) == 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    
    // @rhË
    if (0 < (int)in_stack_00000080) {
      uVar8 = (ulonglong)in_stack_00000080;
      do {
        // Ë@rh¡h
        FUN_180145400(lVar3, 0x20);
        if (lVar2 != 0) {
          FUN_180145500(lVar3, lVar2);
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    
    *param_2 = lVar2;
    param_2[1] = lVar3;
  }
  
  lVar2 = param_2[1];
  
  // @rhÑ
  FUN_180145400(lVar2, 0x21);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_180145500(lVar2, lVar3);
  }
  
  // @rh
  FUN_180145400(lVar2, 0x22);
  if (lVar3 != 0) {
    FUN_180145500(lVar2, lVar3);
  }
  
  // @rhş¥
  FUN_180145400(lVar2, 0x23);
  if (lVar3 != 0) {
    FUN_180145500(lVar2, lVar3);
  }
  
  // @rhX
  FUN_180145400(lVar2, 0x24);
  if (lVar3 != 0) {
    FUN_180145500(lVar2, lVar3);
  }
  
  // @rhŒÁ
  FUN_180145400(lVar2, 0x25);
  if (lVar3 != 0) {
    FUN_180145500(lVar2, lVar3);
  }
  
  // @rhMn
  FUN_180145400(lVar2, 0x26);
  if (lVar3 != 0) {
    FUN_180145500(lVar2, lVar3);
  }
  
  // @rh
  FUN_180145400(lVar2, 0x27);
  if (lVar3 != 0) {
    FUN_180145500(lVar2, lVar3);
  }
  
  // Œ@rh
  FUN_180145400(lVar2, 0xFF);
  if (lVar3 != 0) {
    FUN_180145500(lVar2, lVar3);
  }
  
  param_2[1] = lVar2;
  return;
}

/**
 * 2Óø:§6h
 * ø:„Øb•qŒÆşé5
 * 
 * @param context ûß
‡
 * @param param_2 ø:pnˆ
 * @param param_3 ø:Âp
 * @param param_4 §6×Âp
 */
void FUN_180145400(undefined8 param_1, longlong param_2, int param_3)
{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong *unaff_R15;
  uint in_stack_00000080;
  
  // Àåø:§6×
  if ((param_3 & 1) == 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    
    // ø:Ë
    if (0 < (int)in_stack_00000080) {
      uVar8 = (ulonglong)in_stack_00000080;
      do {
        // Ëø:§6h
        FUN_180145450(lVar3, 0x30);
        if (lVar2 != 0) {
          FUN_180145550(lVar3, lVar2);
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    
    *param_2 = lVar2;
    param_2[1] = lVar3;
  }
  
  lVar2 = param_2[1];
  
  // ø:Øb
  FUN_180145450(lVar2, 0x31);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_180145550(lVar2, lVar3);
  }
  
  // ø:•q
  FUN_180145450(lVar2, 0x32);
  if (lVar3 != 0) {
    FUN_180145550(lVar2, lVar3);
  }
  
  // ø:Æş
  FUN_180145450(lVar2, 0x33);
  if (lVar3 != 0) {
    FUN_180145550(lVar2, lVar3);
  }
  
  // ø:Áj
  FUN_180145450(lVar2, 0x34);
  if (lVar3 != 0) {
    FUN_180145550(lVar2, lVar3);
  }
  
  // ø:)>
  FUN_180145450(lVar2, 0x35);
  if (lVar3 != 0) {
    FUN_180145550(lVar2, lVar3);
  }
  
  // ø:Ël
  FUN_180145450(lVar2, 0x36);
  if (lVar3 != 0) {
    FUN_180145550(lVar2, lVar3);
  }
  
  // ø:sû
  FUN_180145450(lVar2, 0x37);
  if (lVar3 != 0) {
    FUN_180145550(lVar2, lVar3);
  }
  
  // Œø:
  FUN_180145450(lVar2, 0xFF);
  if (lVar3 != 0) {
    FUN_180145550(lVar2, lVar3);
  }
  
  param_2[1] = lVar2;
  return;
}

/**
 * 2ÓIgûß
 * Ig„¡—4qŒ@r
 * 
 * @param context ûß
‡
 * @param param_2 Igpnˆ
 * @param param_3 IgÂp
 * @param param_4 §6×Âp
 */
void FUN_180145450(undefined8 param_1, longlong param_2, int param_3)
{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong *unaff_R15;
  uint in_stack_00000080;
  
  // ÀåIgûß×
  if ((param_3 & 1) == 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    
    // IgË
    if (0 < (int)in_stack_00000080) {
      uVar8 = (ulonglong)in_stack_00000080;
      do {
        // ËIgûß
        FUN_180145500(lVar3, 0x40);
        if (lVar2 != 0) {
          FUN_180145600(lVar3, lVar2);
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    
    *param_2 = lVar2;
    param_2[1] = lVar3;
  }
  
  lVar2 = param_2[1];
  
  // ¯ƒIg
  FUN_180145500(lVar2, 0x41);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_180145600(lVar2, lVar3);
  }
  
  // ¹Ig
  FUN_180145500(lVar2, 0x42);
  if (lVar3 != 0) {
    FUN_180145600(lVar2, lVar3);
  }
  
  // ¹I
  FUN_180145500(lVar2, 0x43);
  if (lVar3 != 0) {
    FUN_180145600(lVar2, lVar3);
  }
  
  // ZIo
  FUN_180145500(lVar2, 0x44);
  if (lVar3 != 0) {
    FUN_180145600(lVar2, lVar3);
  }
  
  // 4q¡—
  FUN_180145500(lVar2, 0x45);
  if (lVar3 != 0) {
    FUN_180145600(lVar2, lVar3);
  }
  
  // IgpÏ
  FUN_180145500(lVar2, 0x46);
  if (lVar3 != 0) {
    FUN_180145600(lVar2, lVar3);
  }
  
  // Igœr
  FUN_180145500(lVar2, 0x47);
  if (lVar3 != 0) {
    FUN_180145600(lVar2, lVar3);
  }
  
  // ŒIg
  FUN_180145500(lVar2, 0xFF);
  if (lVar3 != 0) {
    FUN_180145600(lVar2, lVar3);
  }
  
  param_2[1] = lVar2;
  return;
}

/*==========================================
=            ıp+šI            =
==========================================*/

/**
 * 2Óûß8Ãıp+
 */
#define RenderingTextureProcessor FUN_180145140
#define RenderingPipelineOptimizer FUN_180145250
#define RenderingShaderManager FUN_180145350
#define RenderingCameraController FUN_180145400
#define RenderingLightSystem FUN_180145450

/*==========================================
=            €/ô            =
==========================================*/

/**
 * @section €/°ô
 * 
 * ,2Óûß!W°†Ø§„2ÓŸı+å8Ãy'
 * 
 * 1. **¹ûß**
 *    - /Í¹<RGBA8RGBA16FRGBA32FBC1BC3BC5	
 *    - °¹‹)Œ—Õ
 *    - /¹XŒA “
 *    - Ğ›¹ŒÁŒlbŸı
 * 
 * 2. **2Ó¡¿**
 *    - /6µ2Ó¡¿v¹GµàU¡—Æ	
 *    - °¡¿MnŒ—Õ
 *    - /¡¿XŒ¶¡
 *    - Ğ›¡¿'ıÑ§Œ
 * 
 * 3. **@rh¡ûß**
 *    - /Í@rh{‹v¹GµàU¡—Æ	
 *    - °@rhÑŒ—Õ
 *    - /@rhş¥ŒX¡
 *    - Ğ›@rhŒŒÁŸı
 * 
 * 4. **ø:§6ûß**
 *    - /Íø:ØbŒ•q
 *    - °ø:ÆşŒÁj—Õ
 *    - /ø:)>ËlŒsû
 *    - Ğ›ø:ÂpMnŸı
 * 
 * 5. **Igûß**
 *    - /ÍI{‹¯ƒI¹I¹IZIo	
 *    - °Ig¡—Œ4q—Õ
 *    - /IgpÏŒœr
 *    - Ğ›IgÂpMnŸı
 * 
 * ,!WÇ(Ø§2Ó€/Ğ›Œt„2Óã³¹H
 * (ÍB„2Ó Bw	Ø'ıŒØ(Ï„y¹
 */