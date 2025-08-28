#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 06_utilities_part002.c - 工具系统高级数据处理和内存管理模块
// ============================================================================

// 模块描述：工具系统第二部分，包含21个核心函数，涵盖高级数据处理、内存管理、
// 字符串操作、异常处理、系统调用等工具功能。主要功能包括数据结构处理、
// 内存分配优化、字符串格式化、异常管理、系统配置等高级工具功能。

// ============================================================================
// 核心常量定义
// ============================================================================

#define UTILITIES_PART002_MAX_FUNCTIONS 21           // 最大函数数量
#define UTILITIES_PART002_MAX_DATA_SIZE 1024         // 最大数据大小
#define UTILITIES_PART002_MAX_STRING_LENGTH 512      // 最大字符串长度
#define UTILITIES_PART02_MEMORY_POOL_SIZE 2048       // 内存池大小
#define UTILITIES_PART02_MAX_EXCEPTIONS 32           // 最大异常数量
#define UTILITIES_PART02_MAX_THREADS 16              // 最大线程数

// ============================================================================
// 全局数据声明
// ============================================================================

// 工具系统核心数据结构
static undefined *utilities_core_data_table[UTILITIES_PART002_MAX_DATA_SIZE];
static undefined utilities_system_config[UTILITIES_PART002_MAX_STRING_LENGTH];
static void *utilities_memory_pool[UTILITIES_PART02_MEMORY_POOL_SIZE];
static char utilities_string_buffer[UTILITIES_PART002_MAX_STRING_LENGTH];

// 异常处理系统数据
static void *ExceptionList;                                          // 异常列表指针
static undefined *utilities_exception_handlers[UTILITIES_PART02_MAX_EXCEPTIONS]; // 异常处理器数组
static undefined utilities_exception_context[UTILITIES_PART02_MAX_DATA_SIZE];    // 异常上下文数据

// 系统配置和状态数据
static undefined DAT_180c96800;      // 系统配置数据块1
static undefined DAT_180c96808;      // 系统配置数据块2
static undefined DAT_180c0c6c0;      // 系统状态数据1
static undefined DAT_180be14a0;      // 系统状态数据2
static undefined DAT_180be1324;      // 系统状态数据3
static undefined UNK_180943250;      // 系统内部指针1
static undefined UNK_180943260;      // 系统内部指针2
static undefined DAT_180c0c6d0;      // 配置参数1
static undefined DAT_180c0c6d8;      // 配置参数2
static undefined DAT_180c0d100;      // 配置参数3
static undefined DAT_180c0e170;      // 配置参数4
static undefined DAT_180c108d0;      // 配置参数5
static undefined DAT_180c2bca0;      // 配置参数6
static undefined DAT_180c31148;      // 配置参数7
static undefined UNK_180943270;      // 内存管理指针1
static undefined UNK_18097e888;      // 内存管理指针2
static undefined DAT_180c4ea58;      // 内存池数据1
static undefined DAT_180c4ea60;      // 内存池数据2
static undefined UNK_180943310;      // 数据处理指针1
static undefined UNK_180943320;      // 数据处理指针2
static undefined1 DAT_180c82841;     // 系统标志位1
static undefined1 DAT_180c82840;     // 系统标志位2
static undefined DAT_180c82864;      // 系统标志位3
static undefined DAT_180c91048;      // 系统标志位4
static undefined DAT_180c8ed18;      // 系统标志位5
static undefined DAT_180c86948;      // 系统标志位6
static undefined DAT_180c86870;      // 系统标志位7
static undefined DAT_180c82868;      // 系统标志位8
static undefined UNK_18098bd40;      // 字符串处理指针1
static undefined UNK_18098bdc8;      // 字符串处理指针2
static undefined UNK_1809fe100;      // 字符串处理指针3
static undefined UNK_180a21690;      // 字符串处理指针4
static undefined UNK_180a21720;      // 字符串处理指针5
static undefined DAT_180bf00a8;      // 字符串缓冲区指针
static undefined DAT_180c86928;      // 字符串缓冲区大小
static undefined UNK_18098bab0;      // 字符串格式化指针1
static undefined UNK_18098bac8;      // 字符串格式化指针2
static undefined UNK_1809fd0a0;      // 字符串格式化指针3
static undefined UNK_180a3c110;      // 字符串格式化指针4
static undefined UNK_180a3c138;      // 字符串格式化指针5
static undefined UNK_1809ff040;      // 字符串格式化指针6
static undefined UNK_180a3c090;      // 字符串格式化指针7
static undefined DAT_180c8ed10;      // 字符串数据缓冲区1
static undefined UNK_180a3c410;      // 字符串数据缓冲区2
static undefined UNK_180a3c428;      // 字符串数据缓冲区3
static undefined DAT_180c8ed08;      // 字符串数据缓冲区4
static undefined DAT_180c8ed68;      // 字符串数据缓冲区5
static undefined DAT_180c8ed00;      // 字符串数据缓冲区6
static undefined DAT_180c8ed50;      // 字符串数据缓冲区7
static char DAT_180bf0102;          // 字符串终止符
static undefined DAT_180c8ed58;      // 字符串临时数据1
static undefined DAT_180c8ed48;      // 字符串临时数据2
static undefined DAT_180c8ed40;      // 字符串临时数据3
static undefined DAT_180c86940;      // 字符串临时数据4
static undefined UNK_18098bae0;      // 字符串操作指针1
static undefined UNK_18098bb60;      // 字符串操作指针2
static undefined UNK_18098bb88;      // 字符串操作指针3
static undefined UNK_1809fee70;      // 字符串操作指针4
static undefined UNK_1809ff2f8;      // 字符串操作指针5
static undefined UNK_1809ff3f8;      // 字符串操作指针6
static undefined DAT_180c82854;      // 字符串操作数据1
static undefined UNK_18098bc48;      // 字符串操作数据2
static char DAT_180c82860;          // 字符串操作标志
static undefined UNK_18098bc00;      // 字符串操作结果
static undefined DAT_180c86920;      // 字符串操作状态
static undefined UNK_180046dd0;      // 系统调用指针1
static undefined UNK_1809fcb00;      // 系统调用指针2
static undefined DAT_180c86960;      // 系统调用数据1
static undefined DAT_180bf52b8;      // 系统调用数据2
static undefined DAT_180bf52bc;      // 系统调用数据3
static undefined DAT_180bf5248;      // 系统调用数据4
static undefined DAT_180c8ed60;      // 系统调用结果
static undefined UNK_180047d20;      // 系统调用状态1
static undefined UNK_1800adc10;      // 系统调用状态2
static undefined UNK_1809fc790;      // 系统调用状态3
static undefined UNK_1809fc7a0;      // 系统调用状态4
static undefined UNK_1809fc7b8;      // 系统调用状态5
static undefined DAT_1809fc7ec;      // 系统调用状态6
static undefined DAT_180bf5240;      // 系统调用结果存储


// 函数: undefined FUN_1809417e0;
undefined FUN_1809417e0;
undefined DAT_180d49160;
undefined DAT_180d49168;
undefined DAT_180d49170;
undefined DAT_180d49178;
undefined UNK_1809ffb30;
undefined DAT_180a001d0;
undefined UNK_180083380;
undefined UNK_180a00030;
undefined UNK_180a00100;
undefined UNK_180a00168;


// 函数: undefined FUN_180941920;
undefined FUN_180941920;
undefined UNK_180a009a8;
undefined UNK_180a00a18;
undefined UNK_180a00ae8;


// 函数: undefined FUN_1809419e0;
undefined FUN_1809419e0;
undefined UNK_180a015f0;
undefined UNK_180a015fc;
undefined UNK_180a01604;
undefined UNK_180a01610;
undefined DAT_180a01440;
undefined DAT_180d48d38;
undefined UNK_180a01668;
undefined UNK_18098b928;
undefined UNK_180a01638;
undefined UNK_180a01650;
undefined DAT_180d48d30;
undefined *PTR_?id@?$codecvt@DDU_Mbstatet@@@std@@2V0locale@2@A_180944718;
undefined UNK_180bd8990;
undefined UNK_180a01630;
undefined UNK_18009ee10;
undefined UNK_18009edf0;
undefined UNK_1800a1660;
undefined UNK_180a01620;
undefined UNK_180a016e0;
undefined UNK_180a02740;
undefined UNK_180a01748;
undefined UNK_180a02710;
undefined UNK_180a02718;
undefined UNK_180a02728;
undefined UNK_180a028c8;


// 函数: undefined FUN_180941a30;
undefined FUN_180941a30;
undefined DAT_180d49238;
undefined DAT_180d49250;
undefined DAT_180d49248;
undefined DAT_180d49240;
undefined DAT_180d49258;
undefined DAT_180d4925c;
undefined UNK_180a02c10;


// 函数: undefined FUN_180941ad0;
undefined FUN_180941ad0;
undefined UNK_180a07328;
undefined UNK_180a07370;
undefined UNK_180a18a00;
undefined UNK_180a18a20;
undefined UNK_180a18a40;
undefined UNK_180a18a58;
undefined UNK_180a18a78;
undefined UNK_1801527b4;
undefined UNK_180a07340;
undefined UNK_180a07378;
longlong UNK_180c961a8;
uint UNK_180d48d44;
double UNK_180d48d48;
double UNK_180d48d50;
int UNK_180d49260;
double UNK_180d49268;
undefined UNK_180a073d8;
undefined UNK_180a073b8;
undefined UNK_180155fc0;
undefined UNK_180155fe0;
undefined UNK_180156000;
undefined UNK_180156020;
undefined UNK_180156040;
undefined UNK_180156060;
undefined UNK_180156080;
undefined UNK_1801560a0;
undefined UNK_1801560c0;
undefined UNK_1801560e0;
undefined UNK_180156100;
undefined UNK_180156120;
undefined UNK_180156140;
undefined UNK_180156160;
undefined UNK_180156180;
undefined UNK_1801561a0;
undefined UNK_1801561c0;
undefined UNK_1801561e0;
undefined UNK_180156200;
undefined UNK_180156220;
undefined UNK_180156240;
undefined UNK_180156260;
undefined UNK_180156280;
undefined UNK_1801562a0;
undefined UNK_1801562c0;
undefined UNK_1801562e0;
undefined UNK_180a073f0;
undefined UNK_180a07400;
undefined UNK_180a07420;
undefined UNK_180a07438;
undefined UNK_180a07450;
undefined UNK_180a07470;
undefined UNK_180a07490;
undefined UNK_180a074b8;
undefined UNK_180a074d8;
undefined UNK_180a074f8;
undefined UNK_180a07518;
undefined UNK_180a07530;
undefined UNK_180a07548;
undefined UNK_180a07568;
undefined UNK_180a07580;
undefined UNK_180a075a0;
undefined UNK_180a075b0;
undefined UNK_180a075d0;
undefined UNK_180a075f0;
undefined UNK_180a07610;
undefined UNK_180a07628;
undefined UNK_180a07640;
undefined UNK_180a07650;
undefined UNK_180a07668;
undefined UNK_180a07688;
undefined UNK_180a076a0;
undefined UNK_180a076c0;
undefined UNK_180a076d8;
undefined UNK_180a076f8;
undefined UNK_180a07720;
undefined UNK_180a07748;
undefined UNK_180a07760;
undefined UNK_180a07cd0;
undefined UNK_180a1afb8;
undefined UNK_180a079c0;
undefined UNK_180a07b48;
undefined UNK_180a3c313;
undefined UNK_18098d6d0;
undefined UNK_180a078fc;
undefined UNK_180a07804;
undefined UNK_18098d6b0;
undefined UNK_18015c090;


// 函数: undefined FUN_180941b20;
undefined FUN_180941b20;
undefined DAT_180d49648;
undefined DAT_180d49640;
undefined DAT_180d49650;
undefined UNK_180a0b650;
undefined DAT_180d49638;
undefined UNK_180a0c258;
undefined UNK_1801bc7a0;
undefined UNK_1801bc7e0;
undefined UNK_180a0b640;
undefined UNK_180a0b660;
undefined UNK_180a0b670;
undefined UNK_1801bc6b0;
undefined UNK_180a0b680;
undefined UNK_180a0b690;


// 函数: undefined FUN_180941d50;
undefined FUN_180941d50;
undefined UNK_180bd8a60;
undefined UNK_180a185f0;
undefined UNK_180a18618;
undefined UNK_180a18630;
undefined UNK_180a18860;
undefined UNK_180a18888;
undefined DAT_180a06b58;
undefined UNK_180a18870;
undefined UNK_180a18898;
undefined UNK_180a06b98;
undefined UNK_180a18880;
undefined UNK_180a188a8;
undefined UNK_180a188c0;
undefined UNK_180a188d8;
undefined UNK_180a188e0;
undefined UNK_180a188f8;
undefined UNK_180a18908;
undefined UNK_180a18918;
undefined UNK_180a1892c;
undefined UNK_180a18938;
undefined UNK_180a18980;
undefined UNK_180a18998;
undefined UNK_180a18968;
undefined UNK_180a189b8;
undefined DAT_180c96830;
undefined UNK_180a189f8;
undefined UNK_180a18a98;
undefined UNK_180a18aa8;
undefined UNK_180a18ab8;
undefined UNK_180a18ad0;
undefined UNK_180a18ae8;
undefined UNK_180a18af8;
undefined UNK_180a18b10;
undefined UNK_180a18b40;
undefined UNK_180a18b50;
undefined UNK_180a18b68;
undefined UNK_180a18b6c;
undefined UNK_180a18b88;
undefined UNK_180a18ba0;
undefined UNK_180a18bb0;
undefined UNK_180a18bc4;
undefined UNK_180a18bc8;
undefined UNK_180a18c08;
undefined UNK_180a18c20;
undefined UNK_180a18c78;
undefined UNK_180a18ca0;
undefined UNK_180a18cd8;
undefined UNK_180a18d20;
undefined UNK_180a18d48;
undefined UNK_180a18d00;
undefined UNK_180a18d10;
undefined UNK_180a18d68;
undefined UNK_180a18e08;
undefined UNK_180a18de8;
undefined UNK_180a18df8;
undefined UNK_180a18e20;


// 函数: undefined FUN_180941da0;
undefined FUN_180941da0;
undefined UNK_180a19fd8;
undefined UNK_180a19eb0;
undefined UNK_180302310;
undefined UNK_180a19e28;
undefined UNK_180a19e38;
undefined UNK_1803048b0;
undefined UNK_180a19e88;


// 函数: undefined FUN_180941dd0;
undefined FUN_180941dd0;
undefined DAT_180d497d0;


// 函数: undefined FUN_180941e00;
undefined FUN_180941e00;
undefined DAT_180d49990;
undefined DAT_180d48de0;
undefined DAT_180d48de8;
undefined DAT_180d48df0;
undefined DAT_180d48df8;
undefined DAT_180d48e00;
undefined DAT_180d48e08;
undefined DAT_180c918d8;
undefined DAT_180d48e10;
undefined DAT_180d48e18;
undefined DAT_180c918c0;
undefined UNK_180a1b150;
undefined UNK_180a1b118;
undefined UNK_18033cd70;


// 函数: undefined FUN_180942830;
undefined FUN_180942830;
undefined UNK_180a02fc8;
undefined UNK_180a02fa0;
undefined DAT_180d49d08;
undefined DAT_180d49bf0;
undefined DAT_180d49bf8;
undefined DAT_180d49c00;
undefined DAT_180d49c08;
undefined UNK_18045f200;
undefined UNK_18045f210;


// 函数: undefined FUN_180942850;
undefined FUN_180942850;
undefined DAT_180c91038;
undefined UNK_180a3e440;
undefined UNK_180a2a8a0;
undefined UNK_18045f1a0;
undefined UNK_18045f1c0;
undefined UNK_18045f140;
undefined UNK_18045f160;
undefined UNK_180a2c548;
undefined UNK_180a2a8c0;
undefined UNK_180a2a8e0;
undefined UNK_180a2a900;
undefined UNK_180a2a920;
undefined UNK_180a2a948;
undefined UNK_180a2a968;
undefined UNK_180462fc0;
undefined UNK_180462ff0;
undefined UNK_180463030;
undefined UNK_180463060;
undefined UNK_180a2aa08;
undefined UNK_180a2a9a0;
undefined UNK_180a2aa68;
undefined UNK_180a2abb0;
undefined UNK_18098be5c;
undefined UNK_180a2aac8;
undefined UNK_180a2aad0;
undefined UNK_180a2aa78;
undefined UNK_180a2aa90;
undefined UNK_180a2aaa8;
undefined UNK_180a2aab8;
undefined UNK_180a2aae0;
undefined UNK_180a2aaf0;
undefined UNK_180a2ab48;
undefined UNK_180a2ab58;
undefined DAT_180d49d0c;
undefined DAT_180d49d10;
undefined DAT_180d49d18;
undefined DAT_180d49d20;
undefined DAT_180d49d28;
undefined DAT_180d49d30;
undefined DAT_180d49d38;
undefined DAT_180d49d40;
undefined DAT_180d49d48;
undefined UNK_180942870;
undefined4 UNK_180d49d2c;
undefined4 UNK_180d49d4c;
undefined UNK_180a2ae38;
undefined DAT_180c8ecd4;
undefined UNK_1809f7770;
undefined UNK_18046df70;
undefined DAT_180bfbb50;
undefined DAT_180bfbb60;
undefined DAT_180bfbb70;
undefined DAT_180bfbb80;


// 函数: undefined FUN_180942a40;
undefined FUN_180942a40;


// 函数: undefined FUN_180942aa0;
undefined FUN_180942aa0;
undefined DAT_180a2de40;
undefined1 DAT_180d49e30;
undefined UNK_180a2dfd0;
undefined UNK_180a2e018;
undefined UNK_180a2e040;
undefined UNK_180a2e070;
undefined UNK_180a2e088;


// 函数: undefined FUN_180943020;
undefined FUN_180943020;
undefined UNK_180a30ce8;
undefined UNK_180a30d28;
undefined DAT_180c96128;
undefined UNK_180a30d40;
undefined DAT_180c9612c;
undefined DAT_180c96410;
undefined UNK_180a30c98;
undefined UNK_180a30cb0;
undefined DAT_180d49ec0;
undefined DAT_180d49ec4;
undefined DAT_180c9642c;
undefined DAT_180c96430;


// 函数: undefined FUN_180943040;
undefined FUN_180943040;
undefined DAT_180c963e8;
undefined DAT_180d49f60;
undefined DAT_180d49f64;
undefined UNK_180a30dc0;
undefined UNK_180a30e10;
undefined UNK_180a30e38;
undefined UNK_180a30e60;
undefined UNK_180a2fca0;
undefined UNK_180a2fcd8;
undefined UNK_1809f89f8;
undefined UNK_1809f8a08;
undefined UNK_1809f8a18;
undefined UNK_1809f8a28;
undefined UNK_1809f8a38;
undefined UNK_1809f8a48;
undefined UNK_1809f8a58;
undefined UNK_1809f8a68;
undefined UNK_1809f8a78;
undefined UNK_1809f8a88;
undefined UNK_1809f8a98;
undefined UNK_1809f8aa8;
undefined DAT_180c963d4;
undefined DAT_180c963dc;
undefined DAT_180c963d8;
undefined DAT_180c9644c;
undefined DAT_180c96450;
undefined UNK_180a30ee8;
undefined UNK_180a30ef8;
undefined UNK_180a30ec8;
undefined UNK_180a30ed8;
undefined UNK_180a30f00;
undefined DAT_180d49128;
undefined UNK_180943060;
undefined UNK_1809fa490;
undefined UNK_180a30280;
undefined UNK_180a302c0;
undefined UNK_180a301c8;
undefined UNK_180a301f8;
undefined UNK_180a30230;
undefined UNK_180a30378;
undefined UNK_180a303f8;
undefined UNK_180a303c8;
undefined UNK_180a30330;
undefined UNK_180a30368;
undefined UNK_1809fa470;
undefined UNK_1809fa480;
undefined DAT_180bfbcc0;
undefined UNK_1809fa360;
undefined UNK_1809fa370;
undefined UNK_180a30568;
undefined UNK_180a305a0;
undefined UNK_1809fa350;
undefined UNK_180a305f8;
undefined UNK_180a30638;
undefined UNK_180a30660;
undefined UNK_180a306a8;
undefined UNK_1809fa550;
undefined UNK_180a31018;
undefined UNK_180a31040;
undefined UNK_180a31058;
undefined UNK_180a31078;
undefined UNK_180a310a0;
undefined UNK_180a310d0;
undefined UNK_180a31110;
undefined UNK_180a31138;
undefined UNK_180a31158;
undefined UNK_180a31178;
undefined UNK_180a31198;
undefined UNK_180a311d8;
undefined UNK_180a311f8;
undefined UNK_180a31228;
undefined UNK_180a31250;
undefined UNK_180a31288;
undefined UNK_180a312b0;
undefined UNK_180a312d8;
undefined UNK_180a312f8;
undefined UNK_180a31320;
undefined UNK_180a31348;
undefined UNK_180a31380;
undefined UNK_180a313a8;
undefined UNK_180a313d0;
undefined UNK_180a313f8;
undefined UNK_180a31420;
undefined UNK_180a31448;
undefined UNK_180a31478;
undefined UNK_180a31498;
undefined UNK_180a314c8;
undefined UNK_180a31500;
undefined UNK_180a31530;
undefined UNK_180a31560;
undefined UNK_180a31598;
undefined UNK_180a315c0;
undefined UNK_180a315f8;
undefined UNK_180a31620;
undefined UNK_180a31638;
undefined UNK_180a31660;
undefined UNK_180a31688;
undefined UNK_180a316b0;
undefined UNK_180a316c8;
undefined UNK_180a316f8;
undefined UNK_180a31720;
undefined UNK_180a31740;
undefined UNK_180a31770;
undefined UNK_180a31790;
undefined UNK_180a317b8;
undefined UNK_180a317e0;
undefined UNK_180a317f8;
undefined UNK_180a31820;
undefined UNK_180a31850;
undefined UNK_180a31878;
undefined UNK_180a318a8;
undefined UNK_180a318d0;
undefined UNK_180a31918;
undefined UNK_180a31948;
undefined UNK_180a31978;
undefined UNK_180a319a0;
undefined UNK_180a319b8;
undefined UNK_180a319e8;
undefined UNK_180a31a00;
undefined UNK_180a31a30;
undefined UNK_180a31a60;
undefined UNK_180a31a80;
undefined UNK_180a31ab8;
undefined UNK_180a31af0;
undefined UNK_180a31b10;
undefined UNK_180a31b48;
undefined UNK_180a31b80;
undefined UNK_180a31bb0;
undefined UNK_180a31bd8;
undefined UNK_180a31c08;
undefined UNK_180a31c40;
undefined UNK_180a31c70;
undefined UNK_180a31ca0;
undefined UNK_180a31cd0;
undefined UNK_180a31cf8;
undefined UNK_180a31d18;
undefined UNK_180a31d40;
undefined UNK_180a31d58;
undefined UNK_180a31d80;
undefined UNK_180a31da8;
undefined UNK_180a31dc8;
undefined UNK_180a31de8;
undefined UNK_180a31e08;
undefined UNK_180a31e28;
undefined UNK_180a31e48;
undefined UNK_180a31e68;
undefined UNK_180a31e88;
undefined UNK_180a31eb0;
undefined UNK_180a31ed0;
undefined UNK_180a31ef0;
undefined UNK_180a31f38;
undefined UNK_180a31f58;
undefined UNK_180a31f80;
undefined UNK_180a31fc8;
undefined UNK_180a31ff0;
undefined UNK_180a32010;
undefined UNK_180a32040;
undefined UNK_180a32070;
undefined UNK_180a320b0;
undefined UNK_180a320d8;
undefined UNK_180a32120;
undefined UNK_180a32168;
undefined UNK_180a32180;
undefined UNK_180a32198;
undefined UNK_180a321c8;
undefined UNK_180a321f8;
undefined UNK_180a32240;
undefined UNK_180a32288;
undefined UNK_180a322d0;
undefined UNK_180a32318;
undefined UNK_180a32350;
undefined UNK_180a32398;
undefined UNK_180a323e0;
undefined UNK_180a32428;
undefined UNK_180a32470;
undefined UNK_180a324b8;
undefined UNK_180a324f0;
undefined UNK_180a32538;
undefined UNK_180a32580;
undefined UNK_180a325c8;
undefined UNK_180a32610;
undefined UNK_180a32658;
undefined UNK_180a326a0;
undefined UNK_180a326e8;
undefined UNK_180a32730;
undefined UNK_180a32778;
undefined UNK_180a327b0;
undefined UNK_180a327f8;
undefined UNK_180a32830;
undefined UNK_180a32870;
undefined UNK_180a328a0;
undefined UNK_180a328e8;
undefined UNK_180a32920;
undefined UNK_180a32960;
undefined UNK_180a329a0;
undefined UNK_180a329e8;
undefined UNK_180a32a30;
undefined UNK_180a32a78;
undefined UNK_180a32ab0;
undefined UNK_180a32af0;
undefined UNK_180a32b30;
undefined UNK_180a32b70;
undefined UNK_180a32ba8;
undefined UNK_180a32be8;
undefined UNK_180a32c20;
undefined UNK_180a32c60;
undefined UNK_180a32c98;
undefined UNK_180a32cd8;
undefined UNK_180a32d10;
undefined UNK_180a32d58;
undefined UNK_180a32d90;
undefined UNK_180a32dd0;
undefined UNK_180a32e08;
undefined UNK_180a32e48;
undefined UNK_180a32e70;
undefined UNK_180a32eb8;
undefined UNK_180a32ee0;
undefined UNK_180a32f10;
undefined UNK_180a32f50;
undefined UNK_180a32f90;
undefined UNK_180a32fd0;
undefined UNK_180a33020;
undefined UNK_180a33060;
undefined UNK_180a330b0;
undefined UNK_180a330f0;
undefined UNK_180a33140;
undefined UNK_180a33188;
undefined UNK_180a331c0;
undefined UNK_180a33200;
undefined UNK_180a33250;
undefined UNK_180a33280;
undefined UNK_180a332c8;
undefined UNK_180a332f8;
undefined UNK_180a33330;
undefined UNK_180a33370;
undefined UNK_180a333c0;
undefined UNK_180a33400;
undefined UNK_180a33450;
undefined UNK_180a334a0;
undefined UNK_180a334f0;
undefined UNK_180a33540;
undefined UNK_180a33590;
undefined UNK_180a335d8;
undefined UNK_180a33610;
undefined UNK_180a33660;
undefined UNK_180a336b0;
undefined UNK_180a336f0;
undefined UNK_180a33740;
undefined UNK_180a33780;
undefined UNK_180a337d0;
undefined UNK_180a33820;
undefined UNK_180a33870;
undefined UNK_180a338e0;
undefined UNK_180a33930;
undefined UNK_180a2c968;
undefined UNK_180a33988;
undefined UNK_180a339b0;
undefined UNK_180a339c0;
undefined UNK_180a339e0;
undefined UNK_180a339e8;
undefined UNK_180a33a60;
undefined UNK_180a33c10;
undefined UNK_180a33c90;
undefined UNK_18053f010;
undefined UNK_18053f040;
undefined UNK_18053f080;
undefined UNK_18053f090;
byte DAT_180c91d14;
undefined DAT_180c91d18;
undefined UNK_180a33ca8;
undefined UNK_18053eee0;
undefined UNK_18053efd0;


// 函数: undefined FUN_180943090;
undefined FUN_180943090;
undefined DAT_180d49ff8;


// 函数: undefined FUN_1809430b0;
undefined FUN_1809430b0;
undefined UNK_180a38958;
undefined UNK_180a38978;
undefined UNK_180a38988;
undefined UNK_180a389b0;
undefined UNK_180a389d8;
undefined UNK_180a389f0;
undefined UNK_180a38a08;
undefined UNK_180a38a20;
undefined UNK_180a38a3c;
undefined UNK_180a38a48;
undefined UNK_180a38a60;
undefined UNK_180a38a78;
undefined UNK_180a38a88;
undefined UNK_180a38aa8;
undefined UNK_180a38ac0;
undefined UNK_180a38ad8;
undefined UNK_180a38ae8;
undefined UNK_180a38b20;
undefined UNK_180a38b48;
undefined UNK_180a38b60;
undefined UNK_180a38b70;
undefined UNK_180a38b88;
undefined UNK_180a38ba0;
undefined UNK_180a38bb8;
undefined UNK_180a38bd0;
undefined UNK_180a38be0;
undefined UNK_180a38be8;
undefined UNK_180a38c08;
undefined UNK_180a38c28;
undefined UNK_180a38c40;
undefined UNK_180a38c58;
undefined UNK_180a38c78;
undefined UNK_180a38c98;
undefined UNK_180a38ca8;
undefined UNK_180a38cc0;
undefined UNK_180a38ce8;
undefined UNK_180a38d10;
undefined UNK_180a38d20;
undefined UNK_180a38d38;
undefined UNK_180a38d58;
undefined UNK_180a38d80;
undefined UNK_180a38d98;
undefined UNK_180a38db8;
undefined UNK_180a38dc8;
undefined UNK_180a38dd8;
undefined UNK_180a38de8;
undefined UNK_180a38df8;
undefined UNK_180a38e10;
undefined UNK_180a38e28;
undefined UNK_180a38e38;
undefined UNK_180a38e50;
undefined UNK_180a38e60;
undefined UNK_180a38e78;
undefined UNK_180a38e90;
undefined UNK_180a38ea0;
undefined UNK_180a38ec0;
undefined UNK_180a38f10;
undefined UNK_180a38f30;
undefined UNK_180a04be8;
undefined UNK_180a2e9e0;
undefined UNK_180a38ed0;
undefined UNK_180a38ee0;
undefined UNK_180a38ef0;
undefined UNK_180a38f00;
undefined UNK_180a38f40;
undefined UNK_180a38f50;
undefined UNK_180a38f60;
undefined UNK_180a38f78;
undefined UNK_180a38f90;
undefined UNK_180a38fa8;
undefined UNK_180a38fc0;
undefined UNK_180a38fd8;
undefined UNK_180a38ff0;
undefined UNK_180a39008;
undefined UNK_180a39020;
undefined UNK_180a39030;
undefined UNK_180a39058;
undefined UNK_180a39078;
undefined UNK_180a39090;
undefined UNK_180a390b8;
undefined UNK_180a390d0;
undefined UNK_180a390f0;
undefined UNK_180a39110;
undefined UNK_180a39128;
undefined UNK_180a39148;
undefined UNK_180a39170;
undefined UNK_180a39188;
undefined UNK_180a391b8;
undefined UNK_180a391e8;
undefined UNK_180a39210;
undefined UNK_180a39230;
undefined UNK_180a39250;
undefined UNK_180a39270;
undefined UNK_180a39298;
undefined UNK_180a392b8;
undefined UNK_180a392d0;
undefined UNK_180a392e8;
undefined UNK_180a39308;
undefined UNK_180a39328;
undefined UNK_180a39348;
undefined UNK_180a39360;
undefined UNK_180a39378;
undefined UNK_180a39390;
undefined UNK_180a393a8;
undefined UNK_180a393d0;
undefined UNK_180a393f0;
undefined UNK_180a39408;
undefined UNK_180a39428;
undefined UNK_180a39450;
undefined UNK_180a39468;
undefined UNK_180a39480;
undefined UNK_180a394a0;
undefined UNK_180a394b8;
undefined UNK_180a394e0;
undefined UNK_180a39500;
undefined UNK_180a39518;
undefined UNK_180a39538;
undefined UNK_180a39568;
undefined UNK_180a39598;
undefined UNK_180a395c0;
undefined UNK_180a395e0;
undefined UNK_180a39600;
undefined UNK_180a39628;
undefined UNK_180a39640;
undefined UNK_180a39660;
undefined UNK_180a39688;
undefined UNK_180a396b0;
undefined UNK_180a396c8;
undefined UNK_180a396f0;
undefined UNK_180a39710;
undefined UNK_180a39728;
undefined UNK_180a39740;
undefined UNK_180a39758;
undefined UNK_180a39768;
undefined UNK_180a39788;
undefined UNK_180a397a8;
undefined UNK_180a397c8;
undefined UNK_180a397d8;
undefined UNK_180a397e8;
undefined UNK_180a397f8;
undefined UNK_180a39820;
undefined UNK_180a39850;
undefined UNK_180a39864;
undefined UNK_180a39870;
undefined UNK_180a39888;
undefined UNK_180a398a8;
undefined UNK_180a398b8;
undefined UNK_180a398d8;
undefined UNK_180a398f0;
undefined UNK_180a39910;
undefined UNK_180a39920;
undefined UNK_180a39940;
undefined UNK_180a39970;
undefined UNK_180a39988;
undefined UNK_180a399a8;
undefined UNK_180a399c0;
undefined UNK_180a399e0;
undefined UNK_180a399f0;
undefined UNK_180a39a18;
undefined UNK_180a39a28;
undefined UNK_180a39a40;
undefined UNK_180a39a60;
undefined UNK_180a39a70;
undefined UNK_180a39a88;
undefined UNK_180a39aa0;
undefined UNK_180a39ab8;
undefined UNK_180a39ad8;
undefined UNK_180a39af0;
undefined UNK_180a39b00;
undefined UNK_180a39b18;
undefined UNK_180a39b30;
undefined UNK_180a39b48;
undefined UNK_180a39b68;
undefined UNK_180a39b78;
undefined UNK_180a39b88;
undefined UNK_180a39ba0;
undefined UNK_180a39bc0;
undefined UNK_180a39bd8;
undefined UNK_180a39bf0;
undefined UNK_180a39c10;
undefined UNK_180a39c30;
undefined UNK_180a39c50;
undefined UNK_180a39c60;
undefined UNK_180a39c80;
undefined UNK_180a39c98;
undefined UNK_180a39cb8;
undefined UNK_180a39ccc;
undefined UNK_180a39cd0;
undefined UNK_180a39cd4;
undefined UNK_180a39cd8;
undefined UNK_180a39ce0;
undefined UNK_180a39cf8;
undefined UNK_180a39d10;
undefined UNK_180a39d28;
undefined UNK_180a39d40;
undefined UNK_180a39d58;
undefined UNK_180a39d70;
undefined UNK_180a39d88;
undefined UNK_180a39d98;
undefined UNK_180a39da8;
undefined UNK_180a39db0;
undefined UNK_180a39dc0;
undefined UNK_180a39dd0;
undefined UNK_180a39de0;
undefined UNK_180a39df0;
undefined UNK_180a39e08;
undefined UNK_180a39e18;
undefined UNK_180a39e30;
undefined UNK_180a39e48;
undefined UNK_180a39e58;
undefined UNK_180a39e78;
undefined UNK_180a39e90;
undefined UNK_180a39ea8;
undefined UNK_180a39eb8;
undefined UNK_180a39ed0;
undefined UNK_180a39ee0;
undefined UNK_180a39ef0;
undefined UNK_180a39f00;
undefined UNK_180a39f18;
undefined UNK_180a39f28;
undefined UNK_180a39f50;
undefined UNK_180a39f60;
undefined UNK_180a39f78;
undefined UNK_180a39f88;
undefined UNK_180a39f98;
undefined UNK_180a39fb0;
undefined UNK_180a39fc0;
undefined UNK_180a39fe0;
undefined UNK_180a39ff8;
undefined UNK_180a3a018;
undefined UNK_180a3a038;
undefined UNK_180a3a048;
undefined UNK_180a3a058;
undefined UNK_180a3a068;
undefined UNK_180a3a078;
undefined UNK_180a3a098;
undefined UNK_180a3a0b8;
undefined UNK_180a3a0d0;
undefined UNK_180a3a0f0;
undefined UNK_180a3a118;
undefined UNK_180a3a140;
undefined UNK_180a3a158;
undefined UNK_180a3a178;
undefined UNK_180a3a188;
undefined UNK_180a3a1a8;
undefined UNK_180a3a1b8;
undefined UNK_180a3a1c8;
undefined UNK_180a3a1e8;
undefined UNK_180a3a208;
undefined UNK_180a3a220;
undefined UNK_180a3a240;
undefined UNK_180a3a250;
undefined UNK_180a3a260;
undefined UNK_180a3a278;
undefined UNK_180a3a298;
undefined UNK_180a3a2b0;
undefined UNK_180a3a2c0;
undefined UNK_180a3a2d8;
undefined UNK_180a3a2e8;
undefined UNK_180a3a2f8;
undefined UNK_180a3a300;
undefined UNK_180a3a310;
undefined UNK_180a3a320;
undefined UNK_180a3a348;
undefined UNK_180a3a370;
undefined UNK_180a3a398;
undefined UNK_180a3a3c0;
undefined UNK_180a3a3d0;
undefined UNK_180a3a3e8;
undefined UNK_180a3a3f8;
undefined UNK_180a3a408;
undefined UNK_180a3a418;
undefined UNK_180a3a428;
undefined UNK_180a3a440;
undefined UNK_180a3a458;
undefined UNK_180a3a468;
undefined UNK_180a3a478;
undefined UNK_180a3a498;
undefined UNK_180a3a4a8;
undefined UNK_180a3a4c0;
undefined UNK_180a3a4d0;
undefined UNK_180a3a4e0;
undefined UNK_180a3a4f8;
undefined UNK_180a3a508;
undefined UNK_180a3a520;
undefined UNK_180a3a530;
undefined UNK_180a3a540;
undefined UNK_180a3a560;
undefined UNK_180a3a580;
undefined UNK_180a3a5a8;
undefined UNK_180a3a5c0;
undefined UNK_180a3a5d0;
undefined UNK_180a3a5e0;
undefined UNK_180a3a600;
undefined UNK_180a3a620;
undefined UNK_180a3a630;
undefined UNK_180a3a640;
undefined UNK_180a3a650;
undefined UNK_180a3a660;
undefined UNK_180a3a670;
undefined UNK_180a3a688;
undefined UNK_180a3a6a0;
undefined UNK_180a3a6c0;
undefined UNK_180a3a6e0;
undefined UNK_180a3a6f8;
undefined UNK_180a3a708;
undefined UNK_180a3a720;
undefined UNK_180a3a738;
undefined UNK_180a3a748;
undefined UNK_180a3a754;
undefined UNK_180a3a758;
undefined UNK_180a3a768;
undefined UNK_180a3a778;
undefined UNK_180a3a788;
undefined UNK_180a3a798;
undefined UNK_180a3a7a8;
undefined UNK_180a3a7b8;
undefined UNK_180a3a7d0;
undefined UNK_180a3a7e0;
undefined UNK_180a3a7f0;
undefined UNK_180a3a800;
undefined UNK_180a3a820;
undefined UNK_180a3a830;
undefined UNK_180a3a850;
undefined UNK_180a3a860;
undefined UNK_180a3a870;
undefined UNK_180a3a880;
undefined UNK_180a3a898;
undefined UNK_180a3a8b0;
undefined UNK_180a3a8c0;
undefined UNK_180a3a8d8;
undefined UNK_180a3a8f0;
undefined UNK_180a3a900;
undefined UNK_180a3a910;
undefined UNK_180a3a920;
undefined UNK_180a3a938;
undefined UNK_180a3a948;
undefined UNK_180a3a960;
undefined UNK_180a3a970;
undefined UNK_180a3a988;
undefined UNK_180a3a998;
undefined UNK_180a3a9b0;
undefined UNK_180a3a9c8;
undefined UNK_180a3a9d8;
undefined UNK_180a3a9e0;
undefined UNK_180a3a9f0;
undefined UNK_180a3aa08;
undefined UNK_180a3aa20;
undefined UNK_180a3aa38;
undefined UNK_180a3aa50;
undefined UNK_180a3aa70;
undefined UNK_180a3aa98;
undefined UNK_180a3aab0;
undefined UNK_180a3aac0;
undefined UNK_180a3aad8;
undefined UNK_180a3aae8;
undefined UNK_180a3aaf8;
undefined UNK_180a3ab08;
undefined UNK_180a3ab18;
undefined UNK_180a3ab28;
undefined UNK_180a3ab38;
undefined UNK_180a3ab50;
undefined UNK_180a3ab60;
undefined UNK_180a3ab70;
undefined UNK_180a3ab80;
undefined UNK_180a3ab90;
undefined UNK_180a3aba0;
undefined UNK_180a3abb0;
undefined UNK_180a3abc0;
undefined UNK_180a3abd0;
undefined UNK_180a3abe0;
undefined UNK_180a3abe8;
undefined UNK_180a3ac00;
undefined UNK_180a3ac10;
undefined UNK_180a3ac18;
undefined UNK_180a3ac30;
undefined UNK_180a3ac48;
undefined UNK_180a3ac68;
undefined UNK_180a3ac80;
undefined UNK_180a3ac90;
undefined UNK_180a3aca8;
undefined UNK_180a3acc8;
undefined UNK_180a3acd8;
undefined UNK_180a3acf8;
undefined UNK_180a3ad18;
undefined UNK_180a3ad30;
undefined UNK_180a3ad60;
undefined UNK_180a3ad88;
undefined UNK_180a3ada0;
undefined UNK_180a3adb8;
undefined UNK_180a3add0;
undefined UNK_180a3ade8;
undefined UNK_180a3ae00;
undefined UNK_180a3ae18;
undefined UNK_180a2eac0;
undefined DAT_180c92510;
char DAT_180c8aa68;
undefined UNK_180a3e5e8;


// 函数: undefined FUN_1809430e0;
undefined FUN_1809430e0;
undefined1 DAT_180bf66d8;
undefined DAT_180c96858;
undefined DAT_180bfbf64;
undefined DAT_180bfbf7c;
undefined DAT_180bfbf60;
undefined DAT_180bf7308;
undefined DAT_180bfbf78;
undefined DAT_180bf72a8;
char DAT_180c8efc8;
undefined UNK_18064ffc0;
undefined UNK_180a3c8c8;
undefined UNK_180a3c908;
undefined UNK_180a3d970;
undefined UNK_180a3db60;
undefined DAT_180bfbd80;


// 函数: void FUN_1808900e0(longlong param_1,longlong param_2)
void FUN_1808900e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_278 [32];
  longlong alStack_258 [2];
  undefined1 *puStack_248;
  int iStack_240;
  undefined4 uStack_23c;
  undefined1 auStack_238 [512];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_278;
  iVar2 = func_0x00018088c530(*(undefined4 *)(param_1 + 0x10),alStack_258);
  if ((iVar2 == 0) && (*(longlong *)(alStack_258[0] + 8) != 0)) {
    puStack_248 = auStack_238;
    iVar4 = 0;
    iStack_240 = 0;
    uStack_23c = 0xffffffc0;
    iVar2 = FUN_1808bf350(*(undefined8 *)(param_2 + 0x90),*(longlong *)(alStack_258[0] + 8),
                          &puStack_248);
    if (iVar2 == 0) {
      if (0 < iStack_240) {
        lVar3 = 0;
        do {
          uVar1 = *(undefined8 *)(puStack_248 + lVar3);
          iVar2 = FUN_1808605e0(uVar1);
          if (iVar2 != 2) {
                    // WARNING: Subroutine does not return
            FUN_180862e00(uVar1,1);
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 8;
        } while (iVar4 < iStack_240);
      }
      FUN_18085dbf0(&puStack_248);
    }
    else {
      FUN_18085dbf0(&puStack_248);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_278);
}





