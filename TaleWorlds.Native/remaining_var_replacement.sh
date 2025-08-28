#!/bin/bash

# 渲染系统函数注册模块剩余变量名替换脚本
# 用于处理剩余的 unknown_var 变量

FILE="pretty/03_rendering_part082_sub002_sub002.c"

# 创建备份
cp "$FILE" "$FILE.bak"

# 替换剩余的 unknown_var 变量为渲染系统相关的语义化名称
# 系统配置和状态变量
sed -i 's/unknown_var_0_ptr/rendering_system_null_ptr/g' "$FILE"
sed -i 's/unknown_var_16_ptr/rendering_system_flags_ptr/g' "$FILE"
sed -i 's/unknown_var_32_ptr/rendering_system_offset_ptr/g' "$FILE"
sed -i 's/unknown_var_48_ptr/rendering_system_base_ptr/g' "$FILE"
sed -i 's/unknown_var_80_ptr/rendering_system_config_ptr/g' "$FILE"
sed -i 's/unknown_var_96_ptr/rendering_system_data_ptr/g' "$FILE"
sed -i 's/unknown_var_112_ptr/rendering_system_param_ptr/g' "$FILE"
sed -i 's/unknown_var_128_ptr/rendering_system_buffer_ptr/g' "$FILE"
sed -i 's/unknown_var_192_ptr/rendering_system_temp_ptr/g' "$FILE"
sed -i 's/unknown_var_208_ptr/rendering_system_callback_ptr/g' "$FILE"
sed -i 's/unknown_var_224_ptr/rendering_system_handler_ptr/g' "$FILE"
sed -i 's/unknown_var_240_ptr/rendering_system_context_ptr/g' "$FILE"
sed -i 's/unknown_var_256_ptr/rendering_system_manager_ptr/g' "$FILE"
sed -i 's/unknown_var_272_ptr/rendering_system_controller_ptr/g' "$FILE"

# 渲染状态变量
sed -i 's/unknown_var_320_ptr/rendering_state0_ptr/g' "$FILE"
sed -i 's/unknown_var_544_ptr/rendering_state1_ptr/g' "$FILE"
sed -i 's/unknown_var_512_ptr/rendering_state2_ptr/g' "$FILE"
sed -i 's/unknown_var_464_ptr/rendering_state3_ptr/g' "$FILE"
sed -i 's/unknown_var_592_ptr/rendering_state4_ptr/g' "$FILE"
sed -i 's/unknown_var_576_ptr/rendering_state5_ptr/g' "$FILE"
sed -i 's/unknown_var_688_ptr/rendering_state6_ptr/g' "$FILE"
sed -i 's/unknown_var_752_ptr/rendering_state7_ptr/g' "$FILE"

# 渲染参数变量
sed -i 's/unknown_var_1008_ptr/rendering_param0_ptr/g' "$FILE"
sed -i 's/unknown_var_672_ptr/rendering_param1_ptr/g' "$FILE"
sed -i 's/unknown_var_1168_ptr/rendering_param2_ptr/g' "$FILE"
sed -i 's/unknown_var_1152_ptr/rendering_param3_ptr/g' "$FILE"
sed -i 's/unknown_var_1184_ptr/rendering_param4_ptr/g' "$FILE"
sed -i 's/unknown_var_1200_ptr/rendering_param5_ptr/g' "$FILE"
sed -i 's/unknown_var_1216_ptr/rendering_param6_ptr/g' "$FILE"
sed -i 's/unknown_var_1232_ptr/rendering_param7_ptr/g' "$FILE"
sed -i 's/unknown_var_1248_ptr/rendering_param8_ptr/g' "$FILE"
sed -i 's/unknown_var_1264_ptr/rendering_param9_ptr/g' "$FILE"

# 渲染缓冲区变量
sed -i 's/unknown_var_1632_ptr/rendering_buffer0_ptr/g' "$FILE"
sed -i 's/unknown_var_2032_ptr/rendering_buffer1_ptr/g' "$FILE"
sed -i 's/unknown_var_1872_ptr/rendering_buffer2_ptr/g' "$FILE"
sed -i 's/unknown_var_1808_ptr/rendering_buffer3_ptr/g' "$FILE"
sed -i 's/unknown_var_1712_ptr/rendering_buffer4_ptr/g' "$FILE"
sed -i 's/unknown_var_1680_ptr/rendering_buffer5_ptr/g' "$FILE"
sed -i 's/unknown_var_1776_ptr/rendering_buffer6_ptr/g' "$FILE"

# 渲染内存管理变量
sed -i 's/unknown_var_4560_ptr/rendering_memory0_ptr/g' "$FILE"
sed -i 's/unknown_var_3648_ptr/rendering_memory1_ptr/g' "$FILE"
sed -i 's/unknown_var_4576_ptr/rendering_memory2_ptr/g' "$FILE"
sed -i 's/unknown_var_7760_ptr/rendering_memory3_ptr/g' "$FILE"
sed -i 's/unknown_var_9824_ptr/rendering_memory4_ptr/g' "$FILE"
sed -i 's/unknown_var_4592_ptr/rendering_memory5_ptr/g' "$FILE"

# 渲染资源管理变量
sed -i 's/unknown_var_5104_ptr/rendering_resource0_ptr/g' "$FILE"
sed -i 's/unknown_var_4912_ptr/rendering_resource1_ptr/g' "$FILE"
sed -i 's/unknown_var_5280_ptr/rendering_resource2_ptr/g' "$FILE"
sed -i 's/unknown_var_9872_ptr/rendering_resource3_ptr/g' "$FILE"
sed -i 's/unknown_var_9840_ptr/rendering_resource4_ptr/g' "$FILE"
sed -i 's/unknown_var_4944_ptr/rendering_resource5_ptr/g' "$FILE"

# 渲染线程管理变量
sed -i 's/unknown_var_9904_ptr/rendering_thread0_ptr/g' "$FILE"
sed -i 's/unknown_var_4720_ptr/rendering_thread1_ptr/g' "$FILE"
sed -i 's/unknown_var_4816_ptr/rendering_thread2_ptr/g' "$FILE"
sed -i 's/unknown_var_4800_ptr/rendering_thread3_ptr/g' "$FILE"
sed -i 's/unknown_var_5008_ptr/rendering_thread4_ptr/g' "$FILE"

# 渲染配置变量
sed -i 's/unknown_var_5072_ptr/rendering_config0_ptr/g' "$FILE"
sed -i 's/unknown_var_8224_ptr/rendering_config1_ptr/g' "$FILE"
sed -i 's/unknown_var_5120_ptr/rendering_config2_ptr/g' "$FILE"
sed -i 's/unknown_var_4976_ptr/rendering_config3_ptr/g' "$FILE"

# 渲染安全检查变量
sed -i 's/unknown_var_6880_ptr/rendering_security0_ptr/g' "$FILE"
sed -i 's/unknown_var_5968_ptr/rendering_security1_ptr/g' "$FILE"
sed -i 's/unknown_var_5440_ptr/rendering_security2_ptr/g' "$FILE"
sed -i 's/unknown_var_5040_ptr/rendering_security3_ptr/g' "$FILE"

# 渲染调试变量
sed -i 's/unknown_var_4848_ptr/rendering_debug0_ptr/g' "$FILE"
sed -i 's/unknown_var_4880_ptr/rendering_debug1_ptr/g' "$FILE"
sed -i 's/unknown_var_4752_ptr/rendering_debug2_ptr/g' "$FILE"

# 渲染监控变量
sed -i 's/unknown_var_9248_ptr/rendering_monitor0_ptr/g' "$FILE"
sed -i 's/unknown_var_7744_ptr/rendering_monitor1_ptr/g' "$FILE"
sed -i 's/unknown_var_9808_ptr/rendering_monitor2_ptr/g' "$FILE"
sed -i 's/unknown_var_9792_ptr/rendering_monitor3_ptr/g' "$FILE"
sed -i 's/unknown_var_7712_ptr/rendering_monitor4_ptr/g' "$FILE"

# 渲染事件处理变量
sed -i 's/unknown_var_1824_ptr/rendering_event0_ptr/g' "$FILE"
sed -i 's/unknown_var_2656_ptr/rendering_event1_ptr/g' "$FILE"
sed -i 's/unknown_var_2688_ptr/rendering_event2_ptr/g' "$FILE"
sed -i 's/unknown_var_1840_ptr/rendering_event3_ptr/g' "$FILE"

# 渲染数据流变量
sed -i 's/unknown_var_2848_ptr/rendering_dataflow0_ptr/g' "$FILE"
sed -i 's/unknown_var_2608_ptr/rendering_dataflow1_ptr/g' "$FILE"
sed -i 's/unknown_var_2592_ptr/rendering_dataflow2_ptr/g' "$FILE"
sed -i 's/unknown_var_1344_ptr/rendering_dataflow3_ptr/g' "$FILE"

# 渲染性能变量
sed -i 's/unknown_var_2832_ptr/rendering_perf0_ptr/g' "$FILE"
sed -i 's/unknown_var_2624_ptr/rendering_perf1_ptr/g' "$FILE"
sed -i 's/unknown_var_2384_ptr/rendering_perf2_ptr/g' "$FILE"

# 渲染初始化变量
sed -i 's/unknown_var_3744_ptr/rendering_init0_ptr/g' "$FILE"
sed -i 's/unknown_var_2000_ptr/rendering_init1_ptr/g' "$FILE"

# 渲染错误处理变量
sed -i 's/unknown_var_9648_ptr/rendering_error0_ptr/g' "$FILE"
sed -i 's/unknown_var_9664_ptr/rendering_error1_ptr/g' "$FILE"

# 渲染优化变量
sed -i 's/unknown_var_5360_ptr/rendering_opt0_ptr/g' "$FILE"
sed -i 's/unknown_var_6480_ptr/rendering_opt1_ptr/g' "$FILE"
sed -i 's/unknown_var_8288_ptr/rendering_opt2_ptr/g' "$FILE"

# 渲染同步变量
sed -i 's/unknown_var_6272_ptr/rendering_sync0_ptr/g' "$FILE"
sed -i 's/unknown_var_6512_ptr/rendering_sync1_ptr/g' "$FILE"
sed -i 's/unknown_var_8560_ptr/rendering_sync2_ptr/g' "$FILE"

# 渲染验证变量
sed -i 's/unknown_var_3792_ptr/rendering_verify0_ptr/g' "$FILE"
sed -i 's/unknown_var_6112_ptr/rendering_verify1_ptr/g' "$FILE"
sed -i 's/unknown_var_6192_ptr/rendering_verify2_ptr/g' "$FILE"

# 渲染清理变量
sed -i 's/unknown_var_7696_ptr/rendering_cleanup0_ptr/g' "$FILE"
sed -i 's/unknown_var_6320_ptr/rendering_cleanup1_ptr/g' "$FILE"
sed -i 's/unknown_var_6304_ptr/rendering_cleanup2_ptr/g' "$FILE"
sed -i 's/unknown_var_6960_ptr/rendering_cleanup3_ptr/g' "$FILE"

# 渲染日志变量
sed -i 's/unknown_var_5936_ptr/rendering_log0_ptr/g' "$FILE"
sed -i 's/unknown_var_768_ptr/rendering_log1_ptr/g' "$FILE"

# 渲染统计变量
sed -i 's/unknown_var_2064_ptr/rendering_stats0_ptr/g' "$FILE"
sed -i 's/unknown_var_3968_ptr/rendering_stats1_ptr/g' "$FILE"
sed -i 's/unknown_var_3984_ptr/rendering_stats2_ptr/g' "$FILE"
sed -i 's/unknown_var_4896_ptr/rendering_stats3_ptr/g' "$FILE"

# 渲染缓冲区管理变量
sed -i 's/unknown_var_7376_ptr/rendering_bufmgr0_ptr/g' "$FILE"
sed -i 's/unknown_var_8720_ptr/rendering_bufmgr1_ptr/g' "$FILE"
sed -i 's/unknown_var_2416_ptr/rendering_bufmgr2_ptr/g' "$FILE"

# 渲染队列变量
sed -i 's/unknown_var_6032_ptr/rendering_queue0_ptr/g' "$FILE"
sed -i 's/unknown_var_7088_ptr/rendering_queue1_ptr/g' "$FILE"

# 渲染缓存变量
sed -i 's/unknown_var_1440_ptr/rendering_cache0_ptr/g' "$FILE"
sed -i 's/unknown_var_3856_ptr/rendering_cache1_ptr/g' "$FILE"
sed -i 's/unknown_var_4928_ptr/rendering_cache2_ptr/g' "$FILE"

# 渲染索引变量
sed -i 's/unknown_var_5376_ptr/rendering_index0_ptr/g' "$FILE"
sed -i 's/unknown_var_6656_ptr/rendering_index1_ptr/g' "$FILE"
sed -i 's/unknown_var_8528_ptr/rendering_index2_ptr/g' "$FILE"

# 渲染映射变量
sed -i 's/unknown_var_2400_ptr/rendering_map0_ptr/g' "$FILE"
sed -i 's/unknown_var_7104_ptr/rendering_map1_ptr/g' "$FILE"

# 渲染池变量
sed -i 's/unknown_var_6944_ptr/rendering_pool0_ptr/g' "$FILE"
sed -i 's/unknown_var_4960_ptr/rendering_pool1_ptr/g' "$FILE"

# 渲染上下文变量
sed -i 's/unknown_var_2336_ptr/rendering_context0_ptr/g' "$FILE"
sed -i 's/unknown_var_6544_ptr/rendering_context1_ptr/g' "$FILE"
sed -i 's/unknown_var_5392_ptr/rendering_context2_ptr/g' "$FILE"

# 渲染会话变量
sed -i 's/unknown_var_3088_ptr/rendering_session0_ptr/g' "$FILE"
sed -i 's/unknown_var_6448_ptr/rendering_session1_ptr/g' "$FILE"
sed -i 's/unknown_var_7680_ptr/rendering_session2_ptr/g' "$FILE"

# 渲染句柄变量
sed -i 's/unknown_var_1184_ptr/rendering_handle0_ptr/g' "$FILE"
sed -i 's/unknown_var_6208_ptr/rendering_handle1_ptr/g' "$FILE"

# 渲染锁变量
sed -i 's/unknown_var_4032_ptr/rendering_lock0_ptr/g' "$FILE"
sed -i 's/unknown_var_6064_ptr/rendering_lock1_ptr/g' "$FILE"
sed -i 's/unknown_var_6352_ptr/rendering_lock2_ptr/g' "$FILE"

# 渲染信号变量
sed -i 's/unknown_var_1984_ptr/rendering_signal0_ptr/g' "$FILE"
sed -i 's/unknown_var_4992_ptr/rendering_signal1_ptr/g' "$FILE"
sed -i 's/unknown_var_6672_ptr/rendering_signal2_ptr/g' "$FILE"
sed -i 's/unknown_var_4048_ptr/rendering_signal3_ptr/g' "$FILE"

# 渲染屏障变量
sed -i 's/unknown_var_4976_ptr/rendering_barrier0_ptr/g' "$FILE"
sed -i 's/unknown_var_1872_ptr/rendering_barrier1_ptr/g' "$FILE"

# 渲染原子变量
sed -i 's/unknown_var_4128_ptr/rendering_atomic0_ptr/g' "$FILE"
sed -i 's/unknown_var_4176_ptr/rendering_atomic1_ptr/g' "$FILE"
sed -i 's/unknown_var_4240_ptr/rendering_atomic2_ptr/g' "$FILE"
sed -i 's/unknown_var_4864_ptr/rendering_atomic3_ptr/g' "$FILE"
sed -i 's/unknown_var_4224_ptr/rendering_atomic4_ptr/g' "$FILE"
sed -i 's/unknown_var_4928_ptr/rendering_atomic5_ptr/g' "$FILE"

# 渲染计数器变量
sed -i 's/unknown_var_4096_ptr/rendering_counter0_ptr/g' "$FILE"
sed -i 's/unknown_var_4880_ptr/rendering_counter1_ptr/g' "$FILE"
sed -i 's/unknown_var_384_ptr/rendering_counter2_ptr/g' "$FILE"
sed -i 's/unknown_var_432_ptr/rendering_counter3_ptr/g' "$FILE"
sed -i 's/unknown_var_352_ptr/rendering_counter4_ptr/g' "$FILE"
sed -i 's/unknown_var_368_ptr/rendering_counter5_ptr/g' "$FILE"
sed -i 's/unknown_var_336_ptr/rendering_counter6_ptr/g' "$FILE"

# 渲染计时器变量
sed -i 's/unknown_var_4080_ptr/rendering_timer0_ptr/g' "$FILE"
sed -i 's/unknown_var_4640_ptr/rendering_timer1_ptr/g' "$FILE"
sed -i 's/unknown_var_4464_ptr/rendering_timer2_ptr/g' "$FILE"
sed -i 's/unknown_var_5216_ptr/rendering_timer3_ptr/g' "$FILE"

# 渲染标志变量
sed -i 's/unknown_var_4112_ptr/rendering_flag0_ptr/g' "$FILE"
sed -i 's/unknown_var_4256_ptr/rendering_flag1_ptr/g' "$FILE"
sed -i 's/unknown_var_4272_ptr/rendering_flag2_ptr/g' "$FILE"
sed -i 's/unknown_var_7648_ptr/rendering_flag3_ptr/g' "$FILE"
sed -i 's/unknown_var_7792_ptr/rendering_flag4_ptr/g' "$FILE"

# 渲染位图变量
sed -i 's/unknown_var_8592_ptr/rendering_bitmap0_ptr/g' "$FILE"
sed -i 's/unknown_var_8624_ptr/rendering_bitmap1_ptr/g' "$FILE"
sed -i 's/unknown_var_8656_ptr/rendering_bitmap2_ptr/g' "$FILE"
sed -i 's/unknown_var_8096_ptr/rendering_bitmap3_ptr/g' "$FILE"
sed -i 's/unknown_var_6288_ptr/rendering_bitmap4_ptr/g' "$FILE"
sed -i 's/unknown_var_8432_ptr/rendering_bitmap5_ptr/g' "$FILE"
sed -i 's/unknown_var_8512_ptr/rendering_bitmap6_ptr/g' "$FILE"
sed -i 's/unknown_var_8688_ptr/rendering_bitmap7_ptr/g' "$FILE"
sed -i 's/unknown_var_8704_ptr/rendering_bitmap8_ptr/g' "$FILE"
sed -i 's/unknown_var_8192_ptr/rendering_bitmap9_ptr/g' "$FILE"
sed -i 's/unknown_var_8752_ptr/rendering_bitmap10_ptr/g' "$FILE"
sed -i 's/unknown_var_6336_ptr/rendering_bitmap11_ptr/g' "$FILE"
sed -i 's/unknown_var_7904_ptr/rendering_bitmap12_ptr/g' "$FILE"
sed -i 's/unknown_var_7824_ptr/rendering_bitmap13_ptr/g' "$FILE"
sed -i 's/unknown_var_8224_ptr/rendering_bitmap14_ptr/g' "$FILE"
sed -i 's/unknown_var_8736_ptr/rendering_bitmap15_ptr/g' "$FILE"
sed -i 's/unknown_var_8720_ptr/rendering_bitmap16_ptr/g' "$FILE"

# 渲染设备变量
sed -i 's/unknown_var_7200_ptr/rendering_device0_ptr/g' "$FILE"
sed -i 's/unknown_var_9200_ptr/rendering_device1_ptr/g' "$FILE"
sed -i 's/unknown_var_9408_ptr/rendering_device2_ptr/g' "$FILE"
sed -i 's/unknown_var_9328_ptr/rendering_device3_ptr/g' "$FILE"
sed -i 's/unknown_var_9216_ptr/rendering_device4_ptr/g' "$FILE"
sed -i 's/unknown_var_9008_ptr/rendering_device5_ptr/g' "$FILE"
sed -i 's/unknown_var_9360_ptr/rendering_device6_ptr/g' "$FILE"
sed -i 's/unknown_var_9392_ptr/rendering_device7_ptr/g' "$FILE"
sed -i 's/unknown_var_9168_ptr/rendering_device8_ptr/g' "$FILE"
sed -i 's/unknown_var_9104_ptr/rendering_device9_ptr/g' "$FILE"
sed -i 's/unknown_var_9344_ptr/rendering_device10_ptr/g' "$FILE"
sed -i 's/unknown_var_9232_ptr/rendering_device11_ptr/g' "$FILE"

# 渲染管线变量
sed -i 's/unknown_var_9824_ptr/rendering_pipeline0_ptr/g' "$FILE"
sed -i 's/unknown_var_4352_ptr/rendering_pipeline1_ptr/g' "$FILE"
sed -i 's/unknown_var_4480_ptr/rendering_pipeline2_ptr/g' "$FILE"
sed -i 's/unknown_var_4336_ptr/rendering_pipeline3_ptr/g' "$FILE"
sed -i 's/unknown_var_4592_ptr/rendering_pipeline4_ptr/g' "$FILE"
sed -i 's/unknown_var_4272_ptr/rendering_pipeline5_ptr/g' "$FILE"
sed -i 's/unknown_var_1888_ptr/rendering_pipeline6_ptr/g' "$FILE"

# 渲染着色器变量
sed -i 's/unknown_var_2144_ptr/rendering_shader0_ptr/g' "$FILE"
sed -i 's/unknown_var_3344_ptr/rendering_shader1_ptr/g' "$FILE"
sed -i 's/unknown_var_3424_ptr/rendering_shader2_ptr/g' "$FILE"
sed -i 's/unknown_var_3328_ptr/rendering_shader3_ptr/g' "$FILE"
sed -i 's/unknown_var_1904_ptr/rendering_shader4_ptr/g' "$FILE"
sed -i 's/unknown_var_1952_ptr/rendering_shader5_ptr/g' "$FILE"
sed -i 's/unknown_var_3296_ptr/rendering_shader6_ptr/g' "$FILE"

# 渲染纹理变量
sed -i 's/unknown_var_4496_ptr/rendering_texture0_ptr/g' "$FILE"
sed -i 's/unknown_var_1968_ptr/rendering_texture1_ptr/g' "$FILE"
sed -i 's/unknown_var_9808_ptr/rendering_texture2_ptr/g' "$FILE"
sed -i 's/unknown_var_4560_ptr/rendering_texture3_ptr/g' "$FILE"

# 渲染缓冲区变量
sed -i 's/unknown_var_5632_ptr/rendering_buffer10_ptr/g' "$FILE"
sed -i 's/unknown_var_5584_ptr/rendering_buffer11_ptr/g' "$FILE"
sed -i 's/unknown_var_6080_ptr/rendering_buffer12_ptr/g' "$FILE"
sed -i 's/unknown_var_5344_ptr/rendering_buffer13_ptr/g' "$FILE"
sed -i 's/unknown_var_5952_ptr/rendering_buffer14_ptr/g' "$FILE"
sed -i 's/unknown_var_5648_ptr/rendering_buffer15_ptr/g' "$FILE"
sed -i 's/unknown_var_5568_ptr/rendering_buffer16_ptr/g' "$FILE"
sed -i 's/unknown_var_6256_ptr/rendering_buffer17_ptr/g' "$FILE"
sed -i 's/unknown_var_6096_ptr/rendering_buffer18_ptr/g' "$FILE"
sed -i 's/unknown_var_5600_ptr/rendering_buffer19_ptr/g' "$FILE"
sed -i 's/unknown_var_5552_ptr/rendering_buffer20_ptr/g' "$FILE"
sed -i 's/unknown_var_6336_ptr/rendering_buffer21_ptr/g' "$FILE"
sed -i 's/unknown_var_9264_ptr/rendering_buffer22_ptr/g' "$FILE"
sed -i 's/unknown_var_9280_ptr/rendering_buffer23_ptr/g' "$FILE"

# 渲染顶点变量
sed -i 's/unknown_var_896_ptr/rendering_vertex0_ptr/g' "$FILE"
sed -i 's/unknown_var_1040_ptr/rendering_vertex1_ptr/g' "$FILE"
sed -i 's/unknown_var_848_ptr/rendering_vertex2_ptr/g' "$FILE"

# 渲染索引变量
sed -i 's/unknown_var_6352_ptr/rendering_index3_ptr/g' "$FILE"
sed -i 's/unknown_var_1200_ptr/rendering_index4_ptr/g' "$FILE"

# 渲染常量变量
sed -i 's/unknown_var_7520_ptr/rendering_const0_ptr/g' "$FILE"
sed -i 's/unknown_var_9440_ptr/rendering_const1_ptr/g' "$FILE"
sed -i 's/unknown_var_6368_ptr/rendering_const2_ptr/g' "$FILE"
sed -i 's/unknown_var_832_ptr/rendering_const3_ptr/g' "$FILE"

# 渲染采样器变量
sed -i 's/unknown_var_6992_ptr/rendering_sampler0_ptr/g' "$FILE"
sed -i 's/unknown_var_9424_ptr/rendering_sampler1_ptr/g' "$FILE"

# 渲染帧缓冲区变量
sed -i 's/unknown_var_1184_ptr/rendering_framebuffer0_ptr/g' "$FILE"
sed -i 's/unknown_var_6704_ptr/rendering_framebuffer1_ptr/g' "$FILE"

# 渲染渲染目标变量
sed -i 's/unknown_var_1232_ptr/rendering_target0_ptr/g' "$FILE"
sed -i 's/unknown_var_384_ptr/rendering_target1_ptr/g' "$FILE"
sed -i 's/unknown_var_352_ptr/rendering_target2_ptr/g' "$FILE"
sed -i 's/unknown_var_368_ptr/rendering_target3_ptr/g' "$FILE"
sed -i 's/unknown_var_336_ptr/rendering_target4_ptr/g' "$FILE"

# 渲染视口变量
sed -i 's/unknown_var_7312_ptr/rendering_viewport0_ptr/g' "$FILE"
sed -i 's/unknown_var_1264_ptr/rendering_viewport1_ptr/g' "$FILE"

# 渲染剪刀变量
sed -i 's/unknown_var_3840_ptr/rendering_scissor0_ptr/g' "$FILE"
sed -i 's/unknown_var_4176_ptr/rendering_scissor1_ptr/g' "$FILE"

# 渲染深度变量
sed -i 's/unknown_var_3792_ptr/rendering_depth0_ptr/g' "$FILE"
sed -i 's/unknown_var_5168_ptr/rendering_depth1_ptr/g' "$FILE"
sed -i 's/unknown_var_9264_ptr/rendering_depth2_ptr/g' "$FILE"
sed -i 's/unknown_var_5568_ptr/rendering_depth3_ptr/g' "$FILE"

# 渲染模板变量
sed -i 's/unknown_var_6720_ptr/rendering_stencil0_ptr/g' "$FILE"
sed -i 's/unknown_var_6736_ptr/rendering_stencil1_ptr/g' "$FILE"

# 渲染混合变量
sed -i 's/unknown_var_3040_ptr/rendering_blend0_ptr/g' "$FILE"
sed -i 's/unknown_var_6736_ptr/rendering_blend1_ptr/g' "$FILE"
sed -i 's/unknown_var_1248_ptr/rendering_blend2_ptr/g' "$FILE"
sed -i 's/unknown_var_6656_ptr/rendering_blend3_ptr/g' "$FILE"

# 渲染光栅化变量
sed -i 's/unknown_var_3648_ptr/rendering_raster0_ptr/g' "$FILE"
sed -i 's/unknown_var_7296_ptr/rendering_raster1_ptr/g' "$FILE"
sed -i 's/unknown_var_6592_ptr/rendering_raster2_ptr/g' "$FILE"

# 渲染多边形变量
sed -i 's/unknown_var_400_ptr/rendering_polygon0_ptr/g' "$FILE"

# 渲染剔除变量
sed -i 's/unknown_var_8352_ptr/rendering_cull0_ptr/g' "$FILE"
sed -i 's/unknown_var_8976_ptr/rendering_cull1_ptr/g' "$FILE"
sed -i 's/unknown_var_8912_ptr/rendering_cull2_ptr/g' "$FILE"
sed -i 's/unknown_var_9008_ptr/rendering_cull3_ptr/g' "$FILE"
sed -i 's/unknown_var_9168_ptr/rendering_cull4_ptr/g' "$FILE"
sed -i 's/unknown_var_9264_ptr/rendering_cull5_ptr/g' "$FILE"
sed -i 's/unknown_var_9360_ptr/rendering_cull6_ptr/g' "$FILE"
sed -i 's/unknown_var_9200_ptr/rendering_cull7_ptr/g' "$FILE"
sed -i 's/unknown_var_9392_ptr/rendering_cull8_ptr/g' "$FILE"
sed -i 's/unknown_var_9328_ptr/rendering_cull9_ptr/g' "$FILE"
sed -i 's/unknown_var_9296_ptr/rendering_cull10_ptr/g' "$FILE"
sed -i 's/unknown_var_9456_ptr/rendering_cull11_ptr/g' "$FILE"
sed -i 's/unknown_var_9424_ptr/rendering_cull12_ptr/g' "$FILE"
sed -i 's/unknown_var_9232_ptr/rendering_cull13_ptr/g' "$FILE"

# 渲染线框变量
sed -i 's/unknown_var_768_ptr/rendering_wireframe0_ptr/g' "$FILE"
sed -i 's/unknown_var_688_ptr/rendering_wireframe1_ptr/g' "$FILE"
sed -i 's/unknown_var_1200_ptr/rendering_wireframe2_ptr/g' "$FILE"
sed -i 's/unknown_var_704_ptr/rendering_wireframe3_ptr/g' "$FILE"

# 渲染点变量
sed -i 's/unknown_var_1456_ptr/rendering_point0_ptr/g' "$FILE"

# 渲染线变量
sed -i 's/unknown_var_2272_ptr/rendering_line0_ptr/g' "$FILE"
sed -i 's/unknown_var_784_ptr/rendering_line1_ptr/g' "$FILE"

# 渲染三角形变量
sed -i 's/unknown_var_1680_ptr/rendering_triangle0_ptr/g' "$FILE"
sed -i 's/unknown_var_1664_ptr/rendering_triangle1_ptr/g' "$FILE"
sed -i 's/unknown_var_1696_ptr/rendering_triangle2_ptr/g' "$FILE"

# 渲染四边形变量
sed -i 's/unknown_var_2528_ptr/rendering_quad0_ptr/g' "$FILE"
sed -i 's/unknown_var_2464_ptr/rendering_quad1_ptr/g' "$FILE"
sed -i 's/unknown_var_2624_ptr/rendering_quad2_ptr/g' "$FILE"
sed -i 's/unknown_var_2416_ptr/rendering_quad3_ptr/g' "$FILE"
sed -i 's/unknown_var_2496_ptr/rendering_quad4_ptr/g' "$FILE"
sed -i 's/unknown_var_2592_ptr/rendering_quad5_ptr/g' "$FILE"
sed -i 's/unknown_var_2560_ptr/rendering_quad6_ptr/g' "$FILE"

# 渲染实例变量
sed -i 's/unknown_var_6144_ptr/rendering_instance0_ptr/g' "$FILE"

# 渲染间接变量
sed -i 's/unknown_var_7056_ptr/rendering_indirect0_ptr/g' "$FILE"
sed -i 's/unknown_var_6624_ptr/rendering_indirect1_ptr/g' "$FILE"
sed -i 's/unknown_var_6592_ptr/rendering_indirect2_ptr/g' "$FILE"

# 渲染查询变量
sed -i 's/unknown_var_5344_ptr/rendering_query0_ptr/g' "$FILE"

# 系统变量
sed -i 's/unknown_var_5488_ptr/system_temp_ptr/g' "$FILE"
sed -i 's/unknown_var_5808_ptr/system_data_ptr/g' "$FILE"
sed -i 's/unknown_var_9648_ptr/system_error_ptr/g' "$FILE"
sed -i 's/unknown_var_0_ptr/system_null_ptr/g' "$FILE"
sed -i 's/unknown_var_128_ptr/system_id_ptr/g' "$FILE"
sed -i 's/unknown_var_160_ptr/system_callback_ptr/g' "$FILE"
sed -i 's/unknown_var_208_ptr/system_event_ptr/g' "$FILE"
sed -i 's/unknown_var_2256_ptr/system_buffer_ptr/g' "$FILE"
sed -i 's/unknown_var_2736_ptr/system_cache_ptr/g' "$FILE"
sed -i 's/unknown_var_3776_ptr/system_pool_ptr/g' "$FILE"
sed -i 's/unknown_var_9312_ptr/system_table_ptr/g' "$FILE"
sed -i 's/unknown_var_9696_ptr/system_array_ptr/g' "$FILE"
sed -i 's/unknown_var_3024_ptr/system_stack_ptr/g' "$FILE"
sed -i 's/unknown_var_5888_ptr/system_queue_ptr/g' "$FILE"
sed -i 's/unknown_var_5792_ptr/system_heap_ptr/g' "$FILE"
sed -i 's/unknown_var_5408_ptr/system_list_ptr/g' "$FILE"
sed -i 's/unknown_var_5328_ptr/system_map_ptr/g' "$FILE"
sed -i 's/unknown_var_5296_ptr/system_set_ptr/g' "$FILE"
sed -i 's/unknown_var_5760_ptr/system_tree_ptr/g' "$FILE"
sed -i 's/unknown_var_224_ptr/system_node_ptr/g' "$FILE"
sed -i 's/unknown_var_2448_ptr/system_edge_ptr/g' "$FILE"
sed -i 's/unknown_var_2672_ptr/system_graph_ptr/g' "$FILE"
sed -i 's/unknown_var_2704_ptr/system_network_ptr/g' "$FILE"
sed -i 's/unknown_var_9504_ptr/system_config_ptr/g' "$FILE"
sed -i 's/unknown_var_5536_ptr/system_state_ptr/g' "$FILE"
sed -i 's/unknown_var_1936_ptr/system_info_ptr/g' "$FILE"
sed -i 's/unknown_var_1744_ptr/system_flag_ptr/g' "$FILE"
sed -i 's/unknown_var_5744_ptr/system_lock_ptr/g' "$FILE"
sed -i 's/unknown_var_240_ptr/system_param_ptr/g' "$FILE"
sed -i 's/unknown_var_2800_ptr/system_result_ptr/g' "$FILE"
sed -i 's/unknown_var_2544_ptr/system_output_ptr/g' "$FILE"
sed -i 's/unknown_var_9472_ptr/system_input_ptr/g' "$FILE"
sed -i 's/unknown_var_9136_ptr/system_stream_ptr/g' "$FILE"
sed -i 's/unknown_var_1296_ptr/system_file_ptr/g' "$FILE"
sed -i 's/unknown_var_1808_ptr/system_dir_ptr/g' "$FILE"
sed -i 's/unknown_var_1872_ptr/system_path_ptr/g' "$FILE"
sed -i 's/unknown_var_1712_ptr/system_folder_ptr/g' "$FILE"
sed -i 's/unknown_var_1680_ptr/system_archive_ptr/g' "$FILE"
sed -i 's/unknown_var_1776_ptr/system_package_ptr/g' "$FILE"
sed -i 's/unknown_var_112_ptr/system_index_ptr/g' "$FILE"
sed -i 's/unknown_var_9648_ptr/system_error_ptr/g' "$FILE"
sed -i 's/unknown_var_2576_ptr/system_warning_ptr/g' "$FILE"
sed -i 's/unknown_var_2640_ptr/system_debug_ptr/g' "$FILE"

# 处理剩余的变量
sed -i 's/unknown_var_9680_ptr/rendering_system_status_ptr/g' "$FILE"
sed -i 's/unknown_var_5328_ptr/rendering_system_data_ptr/g' "$FILE"
sed -i 's/unknown_var_5296_ptr/rendering_system_info_ptr/g' "$FILE"
sed -i 's/unknown_var_240_ptr/rendering_system_handle_ptr/g' "$FILE"
sed -i 's/unknown_var_1264_ptr/rendering_system_size_ptr/g' "$FILE"
sed -i 's/unknown_var_1200_ptr/rendering_system_limit_ptr/g' "$FILE"
sed -i 's/unknown_var_1232_ptr/rendering_system_capacity_ptr/g' "$FILE"
sed -i 's/unknown_var_1216_ptr/rendering_system_threshold_ptr/g' "$FILE"
sed -i 's/unknown_var_1248_ptr/rendering_system_timeout_ptr/g' "$FILE"

echo "剩余变量名替换完成"
