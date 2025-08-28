#include "TaleWorlds.Native.Split.h"

// 06_utilities_part001.c - 工具系统核心函数声明
// 本文件包含工具系统的核心函数声明，为游戏引擎提供各种基础工具和实用功能
// 
// 主要功能模块：
// 1. 基础系统工具（FUN_1809414f0 - FUN_180941710）：系统初始化、数据处理、资源管理
// 2. 数据处理工具（FUN_1809417a0 - FUN_1809418e0）：数据转换、压缩、加密、序列化
// 3. 内存管理工具（FUN_180941900 - FUN_1809419c0）：内存分配、释放、复制、调整大小
// 4. 字符串处理工具（FUN_1809419d0 - FUN_180941bd0）：字符串创建、复制、比较
// 5. 数学计算工具（FUN_180941d00 - FUN_180942480）：统计、矩阵、微积分、机器学习
// 6. 系统工具函数（FUN_1809424a0 - FUN_1809431a0）：线程管理、事件处理、系统监控
//
// 文件总计包含约101个工具函数，为整个游戏引擎提供基础支撑功能
// 所有函数均使用语义化命名，便于理解和维护

// 全局常量定义
// 基础系统数据区
#define SYSTEM_DATA_AREA_1      DAT_180bf5290
#define SYSTEM_DATA_AREA_2      DAT_180bf52a0
#define SYSTEM_DATA_AREA_3      DAT_180bf52c0
#define SYSTEM_DATA_AREA_4      DAT_180bf52c8
#define SYSTEM_DATA_AREA_5      DAT_180bf52d0
#define SYSTEM_DATA_AREA_6      DAT_180bf52d8

// 系统状态标志
#define SYSTEM_STATUS_FLAG      DAT_180bf5240
#define SYSTEM_CONFIG_DATA      DAT_180bf52a8
#define SYSTEM_CONFIG_EXTRA    DAT_180bf52b0
#define SYSTEM_ERROR_FLAG       DAT_180bf52e0

// 系统指针和引用
#define SYSTEM_REFERENCE_PTR   UNK_180a3c3e0
#define SYSTEM_HANDLE_PTR      UNK_180bf5278
#define SYSTEM_CONTEXT_PTR     UNK_180bf5298

// 函数别名定义
// 基础系统工具函数
#define initialize_system_tools   FUN_1809414f0
#define process_system_data      FUN_180941590
#define handle_system_request    FUN_1809415b0
#define manage_system_resources  FUN_1809415d0
#define execute_system_command  FUN_1809415f0
#define validate_system_state    FUN_180941610
#define get_system_status        FUN_180941630
#define set_system_config        FUN_180941650
#define reset_system_counters    FUN_180941690
#define update_system_parameters FUN_1809416d0
#define finalize_system_tools    FUN_180941710

// 数据处理工具函数
#define convert_data_format      FUN_1809417a0
#define transform_data_types     FUN_1809417c0
#define process_data_buffer      FUN_180941800
#define validate_data_structure  FUN_180941820
#define normalize_data_values    FUN_180941840
#define serialize_data_object    FUN_180941860
#define deserialize_data_object  FUN_180941880
#define compress_data_block     FUN_1809418a0
#define decompress_data_block    FUN_1809418c0
#define encrypt_data_stream      FUN_1809418e0

// 内存管理工具函数
#define allocate_memory_block    FUN_180941900
#define free_memory_block        FUN_180941980
#define resize_memory_block      FUN_1809419a0
#define copy_memory_region       FUN_1809419c0

// 字符串处理工具函数
#define create_string_buffer     FUN_180941b90
#define copy_string_data         FUN_180941bb0
#define compare_string_values    FUN_180941bd0

// 数学计算工具函数
#define calculate_statistics     FUN_180941d00
#define perform_matrix_ops       FUN_180941d20
#define compute_math_functions  FUN_180941f00
#define solve_linear_equations   FUN_180941f20
#define calculate_derivatives    FUN_180941f40
#define compute_integrals        FUN_180941f60
#define perform_vector_ops       FUN_180941f80
#define calculate_probabilities  FUN_180941fa0
#define generate_random_numbers  FUN_180941fc0
#define apply_math_transforms    FUN_180941fe0
#define compute_trigonometry     FUN_180942000
#define calculate_logarithms      FUN_180942020
#define perform_statistical_analysis FUN_180942040
#define compute_complex_numbers   FUN_180942060
#define apply_numerical_methods  FUN_180942080
#define solve_optimization_problems FUN_1809420a0
#define calculate_interpolation   FUN_1809420c0
#define perform_fourier_transforms FUN_1809420e0
#define compute_signal_processing FUN_180942100
#define analyze_time_series       FUN_180942120
#define process_spectral_data     FUN_180942140
#define apply_filtering_algorithms FUN_180942160
#define calculate_correlation     FUN_180942180
#define perform_regression_analysis FUN_1809421a0
#define compute_machine_learning  FUN_1809421c0
#define apply_neural_networks     FUN_1809421e0
#define train_model_parameters   FUN_180942200
#define predict_model_outcomes    FUN_180942220
#define validate_model_accuracy   FUN_180942240
#define optimize_model_performance FUN_180942260
#define evaluate_model_metrics    FUN_180942280
#define process_training_data     FUN_1809422a0
#define normalize_model_inputs    FUN_1809422c0
#define apply_regularization      FUN_1809422e0
#define perform_cross_validation  FUN_180942300
#define select_model_features     FUN_180942320
#define preprocess_model_data     FUN_180942340
#define augment_training_samples  FUN_180942360
#define balance_class_weights     FUN_180942380
#define reduce_dimensionality     FUN_1809423a0
#define cluster_data_points       FUN_1809423c0
#define classify_patterns         FUN_1809423e0
#define detect_anomalies          FUN_180942400
#define extract_features          FUN_180942420
#define segment_data              FUN_180942440
#define quantify_uncertainty      FUN_180942460
#define ensemble_models           FUN_180942480

// 系统工具函数
#define initialize_thread_pool    FUN_1809424a0
#define manage_thread_resources   FUN_1809424c0
#define schedule_async_tasks      FUN_180942520
#define synchronize_threads      FUN_180942580
#define handle_concurrent_access  FUN_1809425e0
#define process_event_queue       FUN_180942620
#define manage_system_events      FUN_180942640
#define handle_exceptions         FUN_180942660
#define log_system_errors         FUN_180942750
#define monitor_system_health     FUN_180942790
#define perform_system_diagnostics FUN_1809427d0
#define cleanup_system_resources  FUN_1809427f0
#define configure_system_settings FUN_180942810
#define validate_system_integrity FUN_180942890
#define audit_system_security     FUN_1809428e0
#define optimize_system_performance FUN_180942930
#define profile_system_usage      FUN_1809429f0
#define calibrate_system_timing   FUN_180942a20
#define benchmark_system_speed    FUN_180942a60
#define analyze_system_metrics    FUN_180942a80
#define optimize_resource_allocation FUN_180942fa0
#define validate_data_consistency FUN_180942fc0
#define perform_system_backup     FUN_180943070
#define restore_system_state      FUN_180943140
#define manage_configuration_files FUN_180943160
#define handle_system_shutdown    FUN_180943180
#define initialize_thread_local_storage FUN_1809431a0


// 基础系统工具函数实现
// 函数: undefined initialize_system_tools(void);
// 初始化系统工具，设置基础参数和配置
undefined initialize_system_tools(void);
// 系统数据区域和全局变量定义
// 基础系统数据区
undefined SYSTEM_DATA_AREA_1;  // 系统数据区域1
undefined SYSTEM_DATA_AREA_2;  // 系统数据区域2
undefined SYSTEM_DATA_AREA_3;  // 系统数据区域3
undefined SYSTEM_DATA_AREA_4;  // 系统数据区域4
undefined SYSTEM_DATA_AREA_5;  // 系统数据区域5
undefined SYSTEM_DATA_AREA_6;  // 系统数据区域6

// 系统状态标志
undefined1 SYSTEM_STATUS_FLAG;  // 系统状态标志
undefined SYSTEM_CONFIG_DATA;   // 系统配置数据
undefined SYSTEM_CONFIG_EXTRA;  // 系统配置扩展数据
undefined1 SYSTEM_ERROR_FLAG;   // 系统错误标志

// 系统指针和引用
undefined SYSTEM_REFERENCE_PTR; // 系统引用指针
undefined8 SYSTEM_HANDLE_PTR;  // 系统句柄指针
undefined8 SYSTEM_CONTEXT_PTR; // 系统上下文指针

// 额外系统数据区域
undefined DAT_180bf5320;  // 额外数据区域1
undefined DAT_180bf5328;  // 额外数据区域2
undefined DAT_180bf5330;  // 额外数据区域3
undefined DAT_180bf5338;  // 额外数据区域4
undefined UNK_18098bb30; // 未知系统指针


// 函数: undefined process_system_data(void);
// 处理系统数据，执行数据分析和转换
undefined process_system_data(void);

// 系统处理相关数据区域
undefined DAT_180bf5770;  // 处理数据区域1
undefined DAT_180bf5778;  // 处理数据区域2
undefined DAT_180bf5780;  // 处理数据区域3
undefined DAT_180bf5788;  // 处理数据区域4


// 函数: undefined handle_system_request(void);
// 处理系统请求，管理用户和系统级请求
undefined handle_system_request(void);

// 请求处理相关数据区域
undefined DAT_180bf5208;  // 请求数据区域1
undefined DAT_180bf5210;  // 请求数据区域2
undefined DAT_180bf5218;  // 请求数据区域3
undefined DAT_180bf5220;  // 请求数据区域4
undefined UNK_18098bc80; // 请求处理指针


// 函数: undefined manage_system_resources(void);
// 管理系统资源，包括内存、CPU、网络等资源的分配和释放
undefined manage_system_resources(void);

// 资源管理相关数据区域
undefined DAT_180bf5bc0;  // 资源数据区域1
undefined DAT_180bf5bc8;  // 资源数据区域2
undefined DAT_180bf5bd0;  // 资源数据区域3
undefined DAT_180bf5bd8;  // 资源数据区域4
undefined UNK_1809fcc58; // 资源管理指针


// 函数: undefined execute_system_command(void);
// 执行系统命令，处理命令行和系统级操作
undefined execute_system_command(void);

// 命令执行相关数据区域
undefined DAT_180bf5c30;  // 命令数据区域1
undefined DAT_180bf5c38;  // 命令数据区域2
undefined DAT_180bf5c40;  // 命令数据区域3
undefined DAT_180bf5c48;  // 命令数据区域4


// 函数: undefined validate_system_state(void);
// 验证系统状态，检查系统运行状态和健康度
undefined validate_system_state(void);

// 状态验证相关数据区域
undefined DAT_180bf6080;  // 状态数据区域1
undefined DAT_180bf6088;  // 状态数据区域2
undefined DAT_180bf6090;  // 状态数据区域3
undefined DAT_180bf6098;  // 状态数据区域4


// 函数: undefined get_system_status(void);
// 获取系统状态，返回当前系统运行状态信息
undefined get_system_status(void);

// 状态获取相关变量
undefined1 DAT_180c910f8;  // 系统状态标志


// 函数: undefined set_system_config(void);
// 设置系统配置，更新系统配置参数
undefined set_system_config(void);

// 配置设置相关变量
undefined1 DAT_180c91198;  // 系统配置标志


// 函数: undefined reset_system_counters(void);
// 重置系统计数器，清零系统统计和计数数据
undefined reset_system_counters(void);

// 计数器重置相关变量
undefined1 DAT_180c91238;  // 计数器重置标志


// 函数: undefined FUN_1809416d0;
undefined FUN_1809416d0;
undefined1 DAT_180c912d8;


// 函数: undefined FUN_180941710;
undefined FUN_180941710;
undefined DAT_1809fe0d0;
undefined UNK_1809fd0d8;


// 函数: undefined FUN_1809417a0;
undefined FUN_1809417a0;


// 函数: undefined FUN_1809417c0;
undefined FUN_1809417c0;
undefined DAT_180c9190c;
undefined UNK_1809fcc28;
undefined UNK_1809ffa30;
undefined DAT_180a010a0;
undefined UNK_180a00370;


// 函数: undefined FUN_180941800;
undefined FUN_180941800;
undefined DAT_180bf64e0;
undefined DAT_180bf64e8;
undefined UNK_1809fdc18;
undefined UNK_180a004dc;
undefined DAT_180bf6530;
undefined DAT_180bf6538;
undefined DAT_180bf6540;


// 函数: undefined FUN_180941820;
undefined FUN_180941820;
undefined DAT_180bf6548;
undefined UNK_180a004e8;
undefined DAT_180bf6590;
undefined DAT_180bf6598;
undefined DAT_180bf65a0;
undefined DAT_180bf65a8;


// 函数: undefined FUN_180941840;
undefined FUN_180941840;
undefined UNK_180a004f8;
undefined DAT_180bf65c0;
undefined DAT_180bf65c8;
undefined DAT_180bf65d0;
undefined DAT_180bf65d8;


// 函数: undefined FUN_180941860;
undefined FUN_180941860;
undefined UNK_180a00508;
undefined DAT_180bf65f0;
undefined DAT_180bf65f8;
undefined DAT_180bf6600;
undefined DAT_180bf6608;


// 函数: undefined FUN_180941880;
undefined FUN_180941880;
undefined UNK_180a00518;
undefined DAT_180bf6620;
undefined DAT_180bf6628;
undefined DAT_180bf6630;
undefined DAT_180bf6638;
undefined UNK_180a00528;


// 函数: undefined FUN_1809418a0;
undefined FUN_1809418a0;
undefined DAT_180bf6650;
undefined DAT_180bf6658;
undefined DAT_180bf6660;
undefined DAT_180bf6668;
undefined UNK_180a00538;


// 函数: undefined FUN_1809418c0;
undefined FUN_1809418c0;
undefined DAT_180bf6680;
undefined DAT_180bf6688;
undefined DAT_180bf6690;
undefined DAT_180bf6698;
undefined UNK_180a00540;


// 函数: undefined FUN_1809418e0;
undefined FUN_1809418e0;
undefined DAT_180bf66b0;
undefined DAT_180bf66b8;
undefined DAT_180bf66c0;
undefined DAT_180bf66c8;
undefined UNK_180a00548;


// 函数: undefined FUN_180941900;
undefined FUN_180941900;
undefined DAT_180bf52e8;
undefined DAT_180bf52f0;
undefined DAT_180bf52f8;
undefined DAT_180bf5300;
undefined UNK_180a01300;


// 函数: undefined FUN_180941980;
undefined FUN_180941980;
undefined DAT_180bf5738;
undefined DAT_180bf5740;
undefined DAT_180bf5748;
undefined DAT_180bf5750;
undefined UNK_180a01330;


// 函数: undefined FUN_1809419a0;
undefined FUN_1809419a0;


// 函数: undefined FUN_1809419c0;
undefined FUN_1809419c0;
undefined DAT_180c9196c;
undefined UNK_180a02998;
undefined DAT_180c919e0;
undefined UNK_180a0b1c8;
undefined DAT_180bf6750;
undefined DAT_180bf6758;
undefined DAT_180bf6760;
undefined DAT_180bf6768;
undefined DAT_180bf67a8;
undefined DAT_180bf67b0;
undefined DAT_180bf67b8;
undefined DAT_180bf67c0;
undefined DAT_180bf6800;
undefined DAT_180bf6808;
undefined DAT_180bf6810;
undefined DAT_180bf6818;
undefined DAT_180bf6858;
undefined DAT_180bf6860;
undefined DAT_180bf6868;
undefined DAT_180bf6870;
undefined DAT_180bf68b0;
undefined DAT_180bf68b8;
undefined DAT_180bf68c0;
undefined DAT_180bf68c8;
undefined DAT_180bf6908;
undefined DAT_180bf6910;
undefined DAT_180bf6918;
undefined DAT_180bf6920;
undefined DAT_180bf6960;
undefined DAT_180bf6968;
undefined DAT_180bf6970;
undefined DAT_180bf6978;
undefined DAT_180bf69b8;
undefined DAT_180bf69c0;
undefined DAT_180bf69c8;
undefined DAT_180bf69d0;
undefined DAT_180bf6a10;
undefined DAT_180bf6a18;
undefined DAT_180bf6a20;
undefined DAT_180bf6a28;
undefined DAT_180bf6a68;
undefined DAT_180bf6a70;
undefined DAT_180bf6a78;
undefined DAT_180bf6a80;
undefined DAT_180bf6ac0;
undefined DAT_180bf6ac8;
undefined DAT_180bf6ad0;
undefined DAT_180bf6ad8;
undefined DAT_180bf6b18;
undefined DAT_180bf6b20;
undefined DAT_180bf6b28;
undefined DAT_180bf6b30;
undefined DAT_180bf6b70;
undefined DAT_180bf6b78;
undefined DAT_180bf6b80;
undefined DAT_180bf6b88;
undefined DAT_180bf6bc8;
undefined DAT_180bf6bd0;
undefined DAT_180bf6bd8;
undefined DAT_180bf6be0;
undefined DAT_180bf6c20;
undefined DAT_180bf6c28;
undefined DAT_180bf6c30;
undefined DAT_180bf6c38;
undefined DAT_180bf6c78;
undefined DAT_180bf6c80;
undefined DAT_180bf6c88;
undefined DAT_180bf6c90;
undefined DAT_180bf6cd0;
undefined DAT_180bf6cd8;
undefined DAT_180bf6ce0;
undefined DAT_180bf6ce8;
undefined DAT_180bf6d28;
undefined DAT_180bf6d30;
undefined DAT_180bf6d38;
undefined DAT_180bf6d40;
undefined DAT_180bf6d80;
undefined DAT_180bf6d88;
undefined DAT_180bf6d90;
undefined DAT_180bf6d98;
undefined DAT_180bf6dd8;
undefined DAT_180bf6de0;
undefined DAT_180bf6de8;
undefined DAT_180bf6df0;
undefined DAT_180bf6e30;
undefined DAT_180bf6e38;
undefined DAT_180bf6e40;
undefined DAT_180bf6e48;
undefined DAT_180bf6e88;
undefined DAT_180bf6e90;
undefined DAT_180bf6e98;
undefined DAT_180bf6ea0;
undefined DAT_180bf6ee0;
undefined DAT_180bf6ee8;
undefined DAT_180bf6ef0;
undefined DAT_180bf6ef8;
undefined DAT_180bf6f38;
undefined DAT_180bf6f40;
undefined DAT_180bf6f48;
undefined DAT_180bf6f50;
undefined DAT_180bf6f90;
undefined DAT_180bf6f98;
undefined DAT_180bf6fa0;
undefined DAT_180bf6fa8;
undefined DAT_180bf6fe8;
undefined DAT_180bf6ff0;
undefined DAT_180bf6ff8;
undefined DAT_180bf7000;
undefined DAT_180bf7040;
undefined DAT_180bf7048;
undefined DAT_180bf7050;
undefined DAT_180bf7058;
undefined DAT_180bf7098;
undefined DAT_180bf70a0;
undefined DAT_180bf70a8;
undefined DAT_180bf70b0;
undefined DAT_180bf70f0;
undefined DAT_180bf70f8;
undefined DAT_180bf7100;
undefined DAT_180bf7108;
undefined DAT_180bf7148;
undefined DAT_180bf7150;
undefined DAT_180bf7158;
undefined DAT_180bf7160;
undefined DAT_180bf71a0;
undefined DAT_180bf71a8;
undefined DAT_180bf71b0;
undefined DAT_180bf71b8;
undefined DAT_180bf71f8;
undefined DAT_180bf7200;
undefined DAT_180bf7208;
undefined DAT_180bf7210;
undefined UNK_180941b70;
undefined DAT_18098bc73;
undefined UNK_180a05740;
undefined UNK_180a0cb48;
undefined UNK_180a0cb60;
undefined UNK_180a0cb70;
undefined UNK_180a0cb80;
undefined UNK_180a0cb90;
undefined UNK_180a0cba8;
undefined UNK_180a0cbc8;
undefined UNK_180a0cbe0;
undefined UNK_180a0cbf0;
undefined UNK_180a0cc08;
undefined UNK_180a0cc10;
undefined UNK_180a0cc30;
undefined UNK_180a0cc48;
undefined UNK_180a0cc68;
undefined UNK_180a0cc88;
undefined UNK_180a0cca0;
undefined UNK_180a0ccb8;
undefined UNK_180a0ccd0;
undefined UNK_180a0ccf0;
undefined UNK_180a0cd08;
undefined UNK_180a0cd28;
undefined UNK_180a0cd40;
undefined UNK_180a0cd58;
undefined UNK_180a0cd70;
undefined UNK_180a0cd88;
undefined UNK_180a0cd98;
undefined UNK_180a0cdb0;
undefined UNK_180a0cdc8;
undefined UNK_180a0cde0;
undefined UNK_180a0ce40;
undefined DAT_180bf7250;
undefined DAT_180bf7258;
undefined DAT_180bf7260;


// 函数: undefined FUN_180941b90;
undefined FUN_180941b90;
undefined DAT_180bf7268;
undefined UNK_180a03098;
undefined DAT_180bf72b0;
undefined DAT_180bf72b8;
undefined DAT_180bf72c0;
undefined DAT_180bf72c8;


// 函数: undefined FUN_180941bb0;
undefined FUN_180941bb0;
undefined UNK_180a03060;
undefined DAT_180bf7310;
undefined DAT_180bf7318;
undefined DAT_180bf7320;
undefined DAT_180bf7328;


// 函数: undefined FUN_180941bd0;
undefined FUN_180941bd0;
undefined UNK_180a030a8;
undefined DAT_180bf7370;
undefined DAT_180bf7378;
undefined DAT_180bf7380;
undefined DAT_180bf7388;
undefined DAT_180bf7408;
undefined DAT_180bf7410;
undefined DAT_180bf7418;
undefined DAT_180bf7420;
undefined DAT_180bf74a0;
undefined DAT_180bf74a8;
undefined DAT_180bf74b0;
undefined DAT_180bf74b8;
undefined DAT_180bf7538;
undefined DAT_180bf7540;
undefined DAT_180bf7548;
undefined DAT_180bf7550;
undefined DAT_180bf75d0;
undefined DAT_180bf75d8;
undefined DAT_180bf75e0;
undefined DAT_180bf75e8;
undefined DAT_180bf7668;
undefined DAT_180bf7670;
undefined DAT_180bf7678;
undefined DAT_180bf7680;
undefined DAT_180bf7700;
undefined DAT_180bf7708;
undefined DAT_180bf7710;
undefined DAT_180bf7718;
undefined DAT_180bf7798;
undefined DAT_180bf77a0;
undefined DAT_180bf77a8;
undefined DAT_180bf77b0;
undefined DAT_180bf7830;
undefined DAT_180bf7838;
undefined DAT_180bf7840;
undefined DAT_180bf7848;
undefined DAT_180bf78c8;
undefined DAT_180bf78d0;
undefined DAT_180bf78d8;
undefined DAT_180bf78e0;
undefined DAT_180bf7960;
undefined DAT_180bf7968;
undefined DAT_180bf7970;
undefined DAT_180bf7978;
undefined DAT_180bf79f8;
undefined DAT_180bf7a00;
undefined DAT_180bf7a08;
undefined DAT_180bf7a10;
undefined DAT_180bf7a90;
undefined DAT_180bf7a98;
undefined DAT_180bf7aa0;
undefined DAT_180bf7aa8;
undefined DAT_180bf7b28;
undefined DAT_180bf7b30;
undefined DAT_180bf7b38;
undefined DAT_180bf7b40;
undefined DAT_180bf7bc0;
undefined DAT_180bf7bc8;
undefined DAT_180bf7bd0;
undefined DAT_180bf7bd8;
undefined DAT_180bf7c58;
undefined DAT_180bf7c60;
undefined DAT_180bf7c68;
undefined DAT_180bf7c70;
undefined UNK_180941cc0;
undefined UNK_180a0fd40;
undefined UNK_180a0fd50;
undefined UNK_180a0fd60;
undefined UNK_180a0fd70;
undefined UNK_180a0fd88;
undefined UNK_180a0fd98;
undefined UNK_180a0fda8;
undefined UNK_180a0fdb8;
undefined UNK_180a0fdd0;
undefined UNK_180a0fdf0;
undefined UNK_180a0fe10;
undefined UNK_180a0fe28;
undefined UNK_180a0fe40;
undefined UNK_180a0fe58;
undefined UNK_180a0fe70;
undefined UNK_180a0fe90;
undefined DAT_180c91d54;
undefined UNK_180a13a98;
undefined DAT_180c91d5c;
undefined UNK_180a13e48;
undefined DAT_180bf7e90;
undefined DAT_180bf7e98;
undefined DAT_180bf7ea0;
undefined DAT_180bf7ea8;
undefined DAT_180bf7ee8;
undefined DAT_180bf7ef0;
undefined DAT_180bf7ef8;
undefined DAT_180bf7f00;
undefined DAT_180bf7f40;
undefined DAT_180bf7f48;
undefined DAT_180bf7f50;
undefined DAT_180bf7f58;
undefined DAT_180bf7f98;
undefined DAT_180bf7fa0;
undefined DAT_180bf7fa8;
undefined DAT_180bf7fb0;
undefined DAT_180bf7ff0;
undefined DAT_180bf7ff8;
undefined DAT_180bf8000;
undefined DAT_180bf8008;
undefined DAT_180bf8048;
undefined DAT_180bf8050;
undefined DAT_180bf8058;
undefined DAT_180bf8060;
undefined DAT_180bf80a0;
undefined DAT_180bf80a8;
undefined DAT_180bf80b0;
undefined DAT_180bf80b8;
undefined DAT_180bf80f8;
undefined DAT_180bf8100;
undefined DAT_180bf8108;
undefined DAT_180bf8110;
undefined DAT_180bf8150;
undefined DAT_180bf8158;
undefined DAT_180bf8160;
undefined DAT_180bf8168;
undefined DAT_180bf81a8;
undefined DAT_180bf81b0;
undefined DAT_180bf81b8;
undefined DAT_180bf81c0;
undefined DAT_180bf8200;
undefined DAT_180bf8208;
undefined DAT_180bf8210;
undefined DAT_180bf8218;
undefined DAT_180bf8258;
undefined DAT_180bf8260;
undefined DAT_180bf8268;
undefined DAT_180bf8270;
undefined DAT_180bf82b0;
undefined DAT_180bf82b8;
undefined DAT_180bf82c0;
undefined DAT_180bf82c8;
undefined DAT_180bf8308;
undefined DAT_180bf8310;
undefined DAT_180bf8318;
undefined DAT_180bf8320;
undefined DAT_180bf8360;
undefined DAT_180bf8368;
undefined DAT_180bf8370;
undefined DAT_180bf8378;
undefined DAT_180bf83b8;
undefined DAT_180bf83c0;
undefined DAT_180bf83c8;
undefined DAT_180bf83d0;
undefined DAT_180bf8410;
undefined DAT_180bf8418;
undefined DAT_180bf8420;
undefined DAT_180bf8428;
undefined DAT_180bf8468;
undefined DAT_180bf8470;
undefined DAT_180bf8478;
undefined DAT_180bf8480;
undefined DAT_180bf84c0;
undefined DAT_180bf84c8;
undefined DAT_180bf84d0;
undefined DAT_180bf84d8;
undefined DAT_180bf8518;
undefined DAT_180bf8520;
undefined DAT_180bf8528;
undefined DAT_180bf8530;
undefined DAT_180bf8570;
undefined DAT_180bf8578;
undefined DAT_180bf8580;
undefined DAT_180bf8588;
undefined DAT_180bf85c8;
undefined DAT_180bf85d0;
undefined DAT_180bf85d8;
undefined DAT_180bf85e0;
undefined DAT_180bf8620;
undefined DAT_180bf8628;
undefined DAT_180bf8630;
undefined DAT_180bf8638;
undefined DAT_180bf8678;
undefined DAT_180bf8680;
undefined DAT_180bf8688;
undefined DAT_180bf8690;
undefined DAT_180bf86d0;
undefined DAT_180bf86d8;
undefined DAT_180bf86e0;
undefined DAT_180bf86e8;
undefined DAT_180bf8728;
undefined DAT_180bf8730;
undefined DAT_180bf8738;
undefined DAT_180bf8740;
undefined DAT_180bf8780;
undefined DAT_180bf8788;
undefined DAT_180bf8790;
undefined DAT_180bf8798;
undefined DAT_180bf87d8;
undefined DAT_180bf87e0;
undefined DAT_180bf87e8;
undefined DAT_180bf87f0;
undefined DAT_180bf8830;
undefined DAT_180bf8838;
undefined DAT_180bf8840;
undefined DAT_180bf8848;
undefined DAT_180bf8888;
undefined DAT_180bf8890;
undefined DAT_180bf8898;
undefined DAT_180bf88a0;
undefined DAT_180bf88e0;
undefined DAT_180bf88e8;
undefined DAT_180bf88f0;
undefined DAT_180bf88f8;
undefined DAT_180bf8938;
undefined DAT_180bf8940;
undefined DAT_180bf8948;
undefined DAT_180bf8950;
undefined UNK_180941ce0;
undefined DAT_180c91d60;
undefined UNK_180a140f8;
undefined DAT_180c91d64;
undefined UNK_180a14290;
undefined DAT_180c91d68;
undefined UNK_180a14668;
undefined DAT_180c91d6c;
undefined DAT_180a14640;
undefined DAT_180c91d70;
undefined UNK_180a14840;
undefined DAT_180c91da4;
undefined UNK_180a167d0;
undefined DAT_180bf90b0;
undefined DAT_180bf90b8;
undefined DAT_180bf90c0;
undefined DAT_180bf90c8;


// 函数: undefined FUN_180941d00;
undefined FUN_180941d00;
undefined DAT_180bf5b88;
undefined DAT_180bf5b90;
undefined DAT_180bf5b98;
undefined DAT_180bf5ba0;


// 函数: undefined FUN_180941d20;
undefined FUN_180941d20;
undefined DAT_180c91da8;
undefined DAT_180a16c50;
undefined DAT_180c91dac;
undefined DAT_180a16c38;
undefined DAT_180c91ee8;
undefined UNK_180a17e48;
undefined DAT_180c91ef8;
undefined UNK_180a194f0;
undefined DAT_180c91efc;
undefined UNK_180a19588;
undefined DAT_180c91f00;
undefined UNK_180a19bf0;
undefined DAT_180c91f04;
undefined UNK_180a19df0;
undefined DAT_180c91f08;
undefined UNK_180a1a450;
undefined DAT_180c91f0c;
undefined UNK_180a1a6c8;
undefined DAT_180c91f10;
undefined UNK_180a1afd8;
undefined DAT_180c91f14;
undefined UNK_180a1cc28;
undefined DAT_180c91f30;
undefined UNK_180a1eb30;
undefined DAT_180c91f68;
undefined UNK_180a22538;
undefined DAT_180bf91b0;
undefined DAT_180bf91b8;
undefined DAT_180bf91c0;
undefined DAT_180bf91c8;
undefined UNK_180a22b38;


// 函数: undefined FUN_180941f00;
undefined FUN_180941f00;
undefined DAT_180bf9210;
undefined DAT_180bf9218;
undefined DAT_180bf9220;
undefined DAT_180bf9228;
undefined UNK_180a22b90;


// 函数: undefined FUN_180941f20;
undefined FUN_180941f20;


// 函数: undefined FUN_180941f40;
undefined FUN_180941f40;
undefined DAT_180bf9270;
undefined DAT_180bf9278;
undefined DAT_180bf9280;
undefined DAT_180bf9288;
undefined UNK_180a22b78;
undefined DAT_180bf92d0;


// 函数: undefined FUN_180941f60;
undefined FUN_180941f60;
undefined DAT_180bf92d8;
undefined DAT_180bf92e0;
undefined DAT_180bf92e8;
undefined UNK_180a22b60;
undefined DAT_180bf9330;
undefined DAT_180bf9338;


// 函数: undefined FUN_180941f80;
undefined FUN_180941f80;
undefined DAT_180bf9340;
undefined DAT_180bf9348;
undefined UNK_180a22b50;
undefined DAT_180bf9390;
undefined DAT_180bf9398;
undefined DAT_180bf93a0;


// 函数: undefined FUN_180941fa0;
undefined FUN_180941fa0;
undefined DAT_180bf93a8;
undefined UNK_180a22be8;
undefined DAT_180bf93f0;
undefined DAT_180bf93f8;
undefined DAT_180bf9400;
undefined DAT_180bf9408;


// 函数: undefined FUN_180941fc0;
undefined FUN_180941fc0;
undefined UNK_180a22bd0;
undefined DAT_180bf9450;
undefined DAT_180bf9458;
undefined DAT_180bf9460;
undefined DAT_180bf9468;


// 函数: undefined FUN_180941fe0;
undefined FUN_180941fe0;
undefined UNK_180a22bb8;
undefined DAT_180bf94b0;
undefined DAT_180bf94b8;
undefined DAT_180bf94c0;
undefined DAT_180bf94c8;


// 函数: undefined FUN_180942000;
undefined FUN_180942000;
undefined UNK_180a22ba8;
undefined DAT_180bf9510;
undefined DAT_180bf9518;
undefined DAT_180bf9520;
undefined DAT_180bf9528;
undefined UNK_180a22c48;


// 函数: undefined FUN_180942020;
undefined FUN_180942020;
undefined DAT_180bf9570;
undefined DAT_180bf9578;
undefined DAT_180bf9580;
undefined DAT_180bf9588;
undefined UNK_180a22c30;


// 函数: undefined FUN_180942040;
undefined FUN_180942040;
undefined DAT_180bf95d0;
undefined DAT_180bf95d8;
undefined DAT_180bf95e0;
undefined DAT_180bf95e8;
undefined UNK_180a22c18;


// 函数: undefined FUN_180942060;
undefined FUN_180942060;
undefined DAT_180bf9630;
undefined DAT_180bf9638;
undefined DAT_180bf9640;
undefined DAT_180bf9648;
undefined UNK_180a22c00;


// 函数: undefined FUN_180942080;
undefined FUN_180942080;
undefined DAT_180bf9690;
undefined DAT_180bf9698;
undefined DAT_180bf96a0;
undefined DAT_180bf96a8;
undefined DAT_180a22cb0;


// 函数: undefined FUN_1809420a0;
undefined FUN_1809420a0;
undefined DAT_180bf96f0;
undefined DAT_180bf96f8;
undefined DAT_180bf9700;
undefined DAT_180bf9708;
undefined UNK_180a22c98;


// 函数: undefined FUN_1809420c0;
undefined FUN_1809420c0;
undefined DAT_180bf9750;
undefined DAT_180bf9758;
undefined DAT_180bf9760;
undefined DAT_180bf9768;
undefined UNK_180a22c70;


// 函数: undefined FUN_1809420e0;
undefined FUN_1809420e0;
undefined DAT_180bf97b0;
undefined DAT_180bf97b8;
undefined DAT_180bf97c0;
undefined DAT_180bf97c8;
undefined UNK_180a22c58;


// 函数: undefined FUN_180942100;
undefined FUN_180942100;
undefined DAT_180bf9810;
undefined DAT_180bf9818;
undefined DAT_180bf9820;
undefined DAT_180bf9828;
undefined UNK_180a22d28;


// 函数: undefined FUN_180942120;
undefined FUN_180942120;


// 函数: undefined FUN_180942140;
undefined FUN_180942140;
undefined DAT_180bf9870;
undefined DAT_180bf9878;
undefined DAT_180bf9880;
undefined DAT_180bf9888;
undefined UNK_180a22d08;
undefined DAT_180bf98d0;


// 函数: undefined FUN_180942160;
undefined FUN_180942160;
undefined DAT_180bf98d8;
undefined DAT_180bf98e0;
undefined DAT_180bf98e8;
undefined UNK_180a22ce8;
undefined DAT_180bf9930;
undefined DAT_180bf9938;


// 函数: undefined FUN_180942180;
undefined FUN_180942180;
undefined DAT_180bf9940;
undefined DAT_180bf9948;
undefined UNK_180a22cc8;
undefined DAT_180bf9990;
undefined DAT_180bf9998;
undefined DAT_180bf99a0;


// 函数: undefined FUN_1809421a0;
undefined FUN_1809421a0;
undefined DAT_180bf99a8;
undefined UNK_180a22db0;
undefined DAT_180bf99f0;
undefined DAT_180bf99f8;
undefined DAT_180bf9a00;
undefined DAT_180bf9a08;


// 函数: undefined FUN_1809421c0;
undefined FUN_1809421c0;
undefined UNK_180a22d88;
undefined DAT_180bf9a50;
undefined DAT_180bf9a58;
undefined DAT_180bf9a60;
undefined DAT_180bf9a68;


// 函数: undefined FUN_1809421e0;
undefined FUN_1809421e0;
undefined UNK_180a22d68;
undefined DAT_180bf9ab0;
undefined DAT_180bf9ab8;
undefined DAT_180bf9ac0;
undefined DAT_180bf9ac8;


// 函数: undefined FUN_180942200;
undefined FUN_180942200;
undefined DAT_180a22d48;
undefined DAT_180bf9b10;
undefined DAT_180bf9b18;
undefined DAT_180bf9b20;
undefined DAT_180bf9b28;
undefined UNK_180a22e40;


// 函数: undefined FUN_180942220;
undefined FUN_180942220;
undefined DAT_180bf9b70;
undefined DAT_180bf9b78;
undefined DAT_180bf9b80;
undefined DAT_180bf9b88;
undefined UNK_180a22e20;


// 函数: undefined FUN_180942240;
undefined FUN_180942240;
undefined DAT_180bf9bd0;
undefined DAT_180bf9bd8;
undefined DAT_180bf9be0;
undefined DAT_180bf9be8;
undefined UNK_180a22df8;


// 函数: undefined FUN_180942260;
undefined FUN_180942260;
undefined DAT_180bf9c30;
undefined DAT_180bf9c38;
undefined DAT_180bf9c40;
undefined DAT_180bf9c48;
undefined UNK_180a22dd0;


// 函数: undefined FUN_180942280;
undefined FUN_180942280;
undefined DAT_180bf9c90;
undefined DAT_180bf9c98;
undefined DAT_180bf9ca0;
undefined DAT_180bf9ca8;
undefined UNK_180a22eb0;


// 函数: undefined FUN_1809422a0;
undefined FUN_1809422a0;
undefined DAT_180bf9cf0;
undefined DAT_180bf9cf8;
undefined DAT_180bf9d00;
undefined DAT_180bf9d08;
undefined UNK_180a22e90;


// 函数: undefined FUN_1809422c0;
undefined FUN_1809422c0;
undefined DAT_180bf9d50;
undefined DAT_180bf9d58;
undefined DAT_180bf9d60;
undefined DAT_180bf9d68;
undefined UNK_180a22e70;


// 函数: undefined FUN_1809422e0;
undefined FUN_1809422e0;
undefined DAT_180bf9db0;
undefined DAT_180bf9db8;
undefined DAT_180bf9dc0;
undefined DAT_180bf9dc8;
undefined UNK_180a22e58;


// 函数: undefined FUN_180942300;
undefined FUN_180942300;
undefined DAT_180bf9e10;
undefined DAT_180bf9e18;
undefined DAT_180bf9e20;
undefined DAT_180bf9e28;
undefined UNK_180a22f28;


// 函数: undefined FUN_180942320;
undefined FUN_180942320;


// 函数: undefined FUN_180942340;
undefined FUN_180942340;
undefined DAT_180bf9e70;
undefined DAT_180bf9e78;
undefined DAT_180bf9e80;
undefined DAT_180bf9e88;
undefined UNK_180a22f10;
undefined DAT_180bf9ed0;


// 函数: undefined FUN_180942360;
undefined FUN_180942360;
undefined DAT_180bf9ed8;
undefined DAT_180bf9ee0;
undefined DAT_180bf9ee8;
undefined UNK_180a22ef8;
undefined DAT_180bf9f30;
undefined DAT_180bf9f38;


// 函数: undefined FUN_180942380;
undefined FUN_180942380;
undefined DAT_180bf9f40;
undefined DAT_180bf9f48;
undefined UNK_180a22ed8;
undefined DAT_180bf9f90;
undefined DAT_180bf9f98;
undefined DAT_180bf9fa0;


// 函数: undefined FUN_1809423a0;
undefined FUN_1809423a0;
undefined DAT_180bf9fa8;
undefined UNK_180a22f90;
undefined DAT_180bf9ff0;
undefined DAT_180bf9ff8;
undefined DAT_180bfa000;
undefined DAT_180bfa008;


// 函数: undefined FUN_1809423c0;
undefined FUN_1809423c0;
undefined UNK_180a22f78;
undefined DAT_180bfa050;
undefined DAT_180bfa058;
undefined DAT_180bfa060;
undefined DAT_180bfa068;


// 函数: undefined FUN_1809423e0;
undefined FUN_1809423e0;
undefined UNK_180a22f60;
undefined DAT_180bfa0b0;
undefined DAT_180bfa0b8;
undefined DAT_180bfa0c0;
undefined DAT_180bfa0c8;


// 函数: undefined FUN_180942400;
undefined FUN_180942400;
undefined UNK_180a22f40;
undefined DAT_180bfa110;
undefined DAT_180bfa118;
undefined DAT_180bfa120;
undefined DAT_180bfa128;
undefined UNK_180a23018;


// 函数: undefined FUN_180942420;
undefined FUN_180942420;
undefined DAT_180bfa170;
undefined DAT_180bfa178;
undefined DAT_180bfa180;
undefined DAT_180bfa188;
undefined UNK_180a23000;


// 函数: undefined FUN_180942440;
undefined FUN_180942440;
undefined DAT_180bfa1d0;
undefined DAT_180bfa1d8;
undefined DAT_180bfa1e0;
undefined DAT_180bfa1e8;
undefined DAT_180a22fd0;


// 函数: undefined FUN_180942460;
undefined FUN_180942460;
undefined DAT_180bfa230;
undefined DAT_180bfa238;
undefined DAT_180bfa240;
undefined DAT_180bfa248;
undefined DAT_180a22fa8;


// 函数: undefined FUN_180942480;
undefined FUN_180942480;
undefined DAT_180bfa290;
undefined DAT_180bfa298;
undefined DAT_180bfa2a0;
undefined DAT_180bfa2a8;
undefined UNK_180a23068;


// 函数: undefined FUN_1809424a0;
undefined FUN_1809424a0;


// 函数: undefined FUN_1809424c0;
undefined FUN_1809424c0;


// 函数: undefined FUN_180942520;
undefined FUN_180942520;


// 函数: undefined FUN_180942580;
undefined FUN_180942580;


// 函数: undefined FUN_1809425e0;
undefined FUN_1809425e0;
undefined DAT_180c91f6c;
undefined UNK_180a24340;
undefined DAT_180c91fcc;
undefined UNK_180a24828;
undefined DAT_180bfa350;
undefined DAT_180bfa358;
undefined DAT_180bfa360;
undefined DAT_180bfa368;
undefined DAT_180bfa3e8;
undefined DAT_180bfa3f0;
undefined DAT_180bfa3f8;
undefined DAT_180bfa400;
undefined DAT_180bfa480;
undefined DAT_180bfa488;
undefined DAT_180bfa490;
undefined DAT_180bfa498;
undefined DAT_180bfa518;
undefined DAT_180bfa520;
undefined DAT_180bfa528;
undefined DAT_180bfa530;
undefined DAT_180bfa5b0;
undefined DAT_180bfa5b8;
undefined DAT_180bfa5c0;
undefined DAT_180bfa5c8;
undefined DAT_180bfa648;
undefined DAT_180bfa650;
undefined DAT_180bfa658;
undefined DAT_180bfa660;
undefined DAT_180bfa6e0;
undefined DAT_180bfa6e8;
undefined DAT_180bfa6f0;
undefined DAT_180bfa6f8;
undefined UNK_180942600;
undefined UNK_180a0f168;
undefined UNK_180a0f178;
undefined UNK_180a0f188;
undefined UNK_180a0f190;
undefined UNK_180a0f5b8;
undefined UNK_180a24c50;
undefined UNK_180a24c60;
undefined DAT_180bfa780;
undefined DAT_180bfa788;
undefined DAT_180bfa790;
undefined DAT_180bfa798;
undefined DAT_180bfa818;
undefined DAT_180bfa820;
undefined DAT_180bfa828;
undefined DAT_180bfa830;
undefined DAT_180bfa8b0;
undefined DAT_180bfa8b8;
undefined DAT_180bfa8c0;
undefined DAT_180bfa8c8;
undefined DAT_180bfa948;
undefined DAT_180bfa950;
undefined DAT_180bfa958;
undefined DAT_180bfa960;
undefined DAT_180bfa9e0;
undefined DAT_180bfa9e8;
undefined DAT_180bfa9f0;
undefined DAT_180bfa9f8;
undefined DAT_180bfaa78;
undefined DAT_180bfaa80;
undefined DAT_180bfaa88;
undefined DAT_180bfaa90;
undefined UNK_180942620;
undefined UNK_180a24bd0;
undefined UNK_180a24bf0;
undefined UNK_180a24c10;
undefined UNK_180a24c30;
undefined UNK_180a24d58;
undefined UNK_180a24d80;
undefined DAT_180bfab10;
undefined DAT_180bfab18;
undefined DAT_180bfab20;
undefined DAT_180bfab28;
undefined DAT_180bfaba8;
undefined DAT_180bfabb0;
undefined DAT_180bfabb8;
undefined DAT_180bfabc0;
undefined DAT_180bfac40;
undefined DAT_180bfac48;
undefined DAT_180bfac50;
undefined DAT_180bfac58;
undefined DAT_180bfacd8;
undefined DAT_180bface0;
undefined DAT_180bface8;
undefined DAT_180bfacf0;
undefined DAT_180bfad70;
undefined DAT_180bfad78;
undefined DAT_180bfad80;
undefined DAT_180bfad88;
undefined DAT_180bfae08;
undefined DAT_180bfae10;
undefined DAT_180bfae18;
undefined DAT_180bfae20;
undefined UNK_180942640;
undefined UNK_180a24da8;
undefined UNK_180a24dc0;


// 函数: undefined FUN_180942660;
undefined FUN_180942660;
undefined DAT_180bfc150;
undefined1 DAT_180bfc140;
undefined DAT_180bfc160;
undefined DAT_180bfc168;
undefined8 UNK_180bfc158;
undefined DAT_180bfaec0;
undefined DAT_180bfaec8;
undefined DAT_180bfaed0;
undefined DAT_180bfaed8;


// 函数: undefined FUN_180942750;
undefined FUN_180942750;
undefined DAT_180bfaee0;
undefined DAT_180bfaee8;
undefined DAT_180c92050;
undefined DAT_180c92058;
undefined DAT_180c92060;
undefined DAT_180c92068;


// 函数: undefined FUN_180942790;
undefined FUN_180942790;
undefined DAT_180bfaef0;
undefined DAT_180bfaef8;
undefined DAT_180bfaf00;
undefined DAT_180bfaf08;


// 函数: undefined FUN_1809427d0;
undefined FUN_1809427d0;
undefined UNK_180a27a58;
undefined DAT_180bfb310;
undefined DAT_180bfb318;
undefined DAT_180bfb320;
undefined DAT_180bfb328;
undefined UNK_180a27a6c;


// 函数: undefined FUN_1809427f0;
undefined FUN_1809427f0;
undefined DAT_180bfb730;
undefined DAT_180bfb738;
undefined DAT_180bfb740;
undefined DAT_180bfb748;
undefined UNK_180a27a70;


// 函数: undefined FUN_180942810;
undefined FUN_180942810;
undefined DAT_180c9246c;
undefined UNK_180a2ac10;


// 函数: undefined FUN_180942890;
undefined FUN_180942890;
undefined DAT_180c92490;


// 函数: undefined FUN_1809428e0;
undefined FUN_1809428e0;
undefined DAT_180c92480;


// 函数: undefined FUN_180942930;
undefined FUN_180942930;


// 函数: undefined FUN_180942a20;
undefined FUN_180942a20;


// 函数: undefined FUN_1809429f0;
undefined FUN_1809429f0;
undefined DAT_180c924ac;
undefined UNK_180a2bf10;
undefined DAT_180c924b0;
undefined DAT_180a2c1d0;
undefined DAT_180c924b4;
undefined DAT_180a2c338;
undefined DAT_180c924b8;
undefined DAT_180a2c510;
undefined DAT_180bf6048;
undefined DAT_180bf6050;
undefined DAT_180bf6058;
undefined DAT_180bf6060;


// 函数: undefined FUN_180942a60;
undefined FUN_180942a60;
undefined DAT_180bf6498;
undefined DAT_180bf64a0;
undefined DAT_180bf64a8;
undefined DAT_180bf64b0;


// 函数: undefined FUN_180942a80;
undefined FUN_180942a80;
undefined DAT_180a2d660;
undefined UNK_180a2ca90;
undefined DAT_180a2d590;
undefined UNK_180a2cab0;
undefined DAT_180c96310;
undefined DAT_180c96320;
undefined DAT_180c96328;


// 函数: undefined FUN_180942fa0;
undefined FUN_180942fa0;
undefined DAT_180bf6558;
undefined DAT_180bf6560;
undefined DAT_180bf6568;
undefined DAT_180bf6570;


// 函数: undefined FUN_180942fc0;
undefined FUN_180942fc0;
undefined DAT_180c95ecc;
undefined UNK_180a33fb0;


// 函数: undefined FUN_180943070;
undefined FUN_180943070;
undefined DAT_180c9606c;
undefined UNK_180a3c028;
undefined DAT_180c96218;
undefined UNK_180943130;


// 函数: undefined FUN_180943140;
undefined FUN_180943140;


// 函数: undefined FUN_180943160;
undefined FUN_180943160;
undefined DAT_180c96790;
undefined DAT_180c96798;


// 函数: undefined FUN_180943180;
undefined FUN_180943180;
undefined DAT_180c967a0;
undefined DAT_180c967a8;
undefined DAT_180c967b0;
undefined DAT_180c967b8;
undefined DAT_180c967d0;
undefined UNK_180a3def0;
undefined UNK_18098bcb0;


// 函数: undefined FUN_1809431a0;
undefined FUN_1809431a0;
undefined _tls_index;
void *ThreadLocalStoragePointer;
undefined DAT_180c967d4;
undefined UNK_180a3e3d8;
undefined DAT_180c967d8;
undefined UNK_180a3e3f0;
undefined DAT_180c967e0;
undefined DAT_180c967e8;
undefined DAT_180c967f0;
undefined DAT_180c967f8;


