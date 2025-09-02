/**
 * @file 00_data_definitions.h
 * @brief 游戏引擎数据定义头文件
 * 
 * 该文件定义了游戏引擎中使用的全局数据结构、变量和常量。
 * 包含系统配置、内存管理、字符串处理、模块初始化等核心数据定义。
 */

#ifndef DATA_DEFINITIONS_H
#define DATA_DEFINITIONS_H

// 全局系统数据指针
void* SystemGlobalData;
// 系统字符串缓冲区 - 用于存储系统字符串数据
void* SystemStringBufferMain;
void* SystemStringBufferSecondary;
void* SystemStringBufferTertiary;
void* SystemStringBufferQuaternary;
void* SystemStringBufferQuinary;
void* SystemStringBufferSenary;
void* SystemStringBufferSeptenary;
void* SystemStringBufferOctonary;
void* SystemStringBufferNonary;
void* SystemStringBufferDenary;
void* SystemStringBufferUndenary;
void* SystemStringBufferDuodenary;
void* SystemStringBufferTredecenary;
void* SystemStringBufferQuattuordecenary;
void* SystemStringBufferQuindecenary;
void* SystemStringBufferSexdecenary;
void* SystemStringBufferSeptendecenary;
void* SystemStringBufferOctodecenary;
void* SystemStringBufferNovemdecenary;
void* SystemStringBufferVigesimal;
void* SystemStringBufferUnvigesimal;
void* SystemStringBufferDuovigesimal;
void* SystemStringBufferTrevigesimal;
void* SystemStringBufferQuattuorvigesimal;
void* SystemStringBufferQuinvigesimal;
void* SystemStringBufferSexvigesimal;
void* SystemStringBufferSeptenvigesimal;
void* SystemStringBufferOctovigesimal;
void* SystemStringBufferNovemvigesimal;
void* SystemStringBufferTrigesimal;

// 系统内存池 - 用于动态内存分配
void* SystemMemoryPool;

// 系统内存配置缓冲区 - 用于存储内存配置数据
void* SystemMemoryConfigBufferMain;
void* SystemMemoryConfigBufferSecondary;
void* SystemMemoryConfigBufferTertiary;
void* SystemMemoryConfigBufferQuaternary;
void* SystemMemoryConfigBufferQuinary;
void* SystemMemoryConfigBufferSenary;
void* SystemMemoryConfigBufferSeptenary;
void* SystemMemoryConfigBufferOctonary;
void* SystemMemoryConfigBufferNonary;
void* SystemMemoryConfigBufferDenary;
void* SystemMemoryConfigBufferUndenary;
void* SystemMemoryConfigBufferDuodenary;
void* SystemMemoryConfigBufferTredecenary;
void* SystemMemoryConfigBufferQuattuordecenary;
void* SystemMemoryConfigBufferQuindecenary;
void* SystemMemoryConfigBufferSexdecenary;
void* SystemMemoryConfigBufferSeptendecenary;
void* SystemMemoryConfigBufferOctodecenary;

// 系统内存池缓冲区 - 用于存储内存池数据
void* SystemMemoryPoolBufferMain;
void* SystemMemoryPoolBufferSecondary;
void* SystemMemoryPoolBufferTertiary;
void* SystemMemoryPoolBufferQuaternary;

// 系统字符串内存缓冲区 - 用于存储字符串内存数据
void* SystemStringMemoryBufferMain;
void* SystemStringMemoryBufferSecondary;
void* SystemStringMemoryBufferTertiary;
void* SystemStringMemoryBufferQuaternary;

// 系统状态标志 - 用于存储系统运行状态
char SystemStatusFlagMain;
char SystemStatusFlagSecondary;

// 系统字符串数据缓冲区 - 用于存储字符串处理数据
void* SystemStringDataBufferMain;
void* SystemStringDataBufferSecondary;
void* SystemStringDataBufferTertiary;

// 系统字符串标志 - 用于存储字符串处理状态
char SystemStringFlagMain;
char SystemStringFlagSecondary;
char SystemStringFlagTertiary;

// 系统配置缓冲区 - 用于存储系统配置数据
void* SystemConfigurationBufferMain;
void* SystemConfigurationBufferSecondary;

// 系统配置标志 - 用于存储系统配置状态
char SystemConfigurationFlagMain;

// 系统常量字符串 - 用于存储系统常量字符串数据
char* SystemConstantStringMain;

// 系统模块缓冲区 - 用于存储系统模块数据
char* SystemModuleAudioBuffer;
char* SystemModuleGraphicsBuffer;

// 字符串处理器标志 - 用于字符串处理操作
uint32_t StringProcessorFlags;
uint32_t SystemMutexFlags;

// 字符串处理系统AB的配置变量
void* StringProcessingSystemABMemoryPool;
void* StringProcessingSystemABConfigBuffer;
char StringProcessingSystemABConfigBuffer[64];
uint32_t StringProcessingSystemABConfigSize;

// 字符串处理系统AC的配置变量
void* StringProcessingSystemACMemoryPool;
void* StringProcessingSystemACConfigBuffer;
char StringProcessingSystemACConfigBuffer[64];
uint32_t StringProcessingSystemACConfigSize;

// 字符串处理系统AD的配置变量
void* StringProcessingSystemADMemoryPool;
void* StringProcessingSystemADConfigBuffer;
char StringProcessingSystemADConfigBuffer[64];
uint32_t StringProcessingSystemADConfigSize;

// 字符串处理系统AE的配置变量
void* StringProcessingSystemAEMemoryPool;
void* StringProcessingSystemAEConfigBuffer;
char StringProcessingSystemAEConfigBuffer[64];
uint32_t StringProcessingSystemAEConfigSize;

// 字符串处理系统AF的配置变量
void* StringProcessingSystemAFMemoryPoolPointer;
void* StringProcessingSystemAFConfigBufferPointer;
char StringProcessingSystemAFConfigBuffer[64];
uint32_t StringProcessingSystemAFConfigSize;

// 字符串处理系统AG的配置变量
void* StringProcessingSystemAGMemoryPoolPointer;
void* StringProcessingSystemAGConfigBufferPointer;
char StringProcessingSystemAGConfigBuffer[64];
uint32_t StringProcessingSystemAGConfigSize;

// 字符串处理系统AH的配置变量
void* StringProcessingSystemAHMemoryPoolPointer;
void* StringProcessingSystemAHConfigBufferPointer;
char StringProcessingSystemAHConfigBuffer[64];
uint32_t StringProcessingSystemAHConfigSize;

// 字符串处理系统AI的配置变量
void* StringProcessingSystemAIMemoryPoolPointer;
void* StringProcessingSystemAIConfigBufferPointer;
char StringProcessingSystemAIConfigBuffer[64];
uint32_t StringProcessingSystemAIConfigSize;

// 字符串处理系统AJ的配置变量
void* StringProcessingSystemAJMemoryPool;
void* StringProcessingSystemAJConfigBuffer;
char StringProcessingSystemAJConfigBuffer[64];
uint32_t StringProcessingSystemAJConfigSize;

// 系统内存配置模板 - 用于内存配置操作
void* SystemMemoryConfigTemplate;

// 系统内存池模板 - 用于内存池操作
void* SystemMemoryPoolTemplate;

// 系统字符串内存模板 - 用于字符串内存操作
void* SystemStringMemoryTemplate;

// 系统常量 - 用于系统常量定义
void* SystemEngineConstant;
void* SystemFrameworkConstant;

// 系统内存管理器指针 - 用于管理核心内存分配
void* SystemMemoryManager;
void* SystemMemoryAllocator;
void* SystemMemoryPoolManager;
void* SystemMemoryBufferManager;
void* SystemMemoryCache;
void* SystemMemoryHeap;
void* SystemMemoryStack;
void* SystemMemoryPage;
// 系统引擎内部数据指针 - 用于存储引擎核心内部数据
void* SystemEngineInternalDataRenderContext;
void* SystemEngineInternalDataPhysicsWorld;
void* SystemEngineInternalDataAudioSystem;
void* SystemEngineInternalDataInputManager;
void* SystemEngineInternalDataSceneManager;
void* SystemEngineInternalDataResourceManager;
void* SystemEngineInternalDataNetworkManager;
void* SystemEngineInternalDataAnimationSystem;
void* SystemEngineInternalDataParticleEffect;
void* SystemEngineInternalDataPostProcessing;
void* SystemEngineInternalDataLightingSystem;
void* SystemEngineInternalDataShadowMapping;
void* SystemEngineInternalDataCollisionSystem;

// 系统模块数据指针 - 用于存储模块相关数据
void* SystemModuleDataPointer01;
void* SystemModuleDataPointer02;
void* SystemModuleDataPointer03;
void* SystemModuleDataPointer04;
void* SystemModuleDataPointer05;
void* SystemModuleDataPointer06;
void* SystemModuleDataPointer07;
void* SystemModuleDataPointer08;
void* SystemModuleDataPointer09;
void* SystemModuleDataPointer10;
void* SystemModuleDataPointer11;
void* SystemModuleDataPointer12;
void* SystemModuleDataPointer13;
void* SystemModuleDataPointer14;
void* SystemModuleDataPointer15;
void* SystemModuleDataPointer16;
void* SystemModuleDataPointer17;
void* SystemModuleDataPointer18;
void* SystemModuleDataPointer19;
void* SystemModuleDataPointer20;

// 字符串处理系统V-AA的变量声明 - 用于字符串处理系统的数据管理
void* StringProcessingSystemV_BasePointer;
void* StringProcessingSystemV_BufferPointer;
void* StringProcessingSystemV_DataBuffer;
uint32_t StringProcessingSystemV_BufferSize;
void* StringProcessingSystemV_Template;

void* StringProcessingSystemW_BasePointer;
void* StringProcessingSystemW_BufferPointer;
void* StringProcessingSystemW_DataBuffer;
uint32_t StringProcessingSystemW_BufferSize;
void* StringProcessingSystemW_Template;

void* StringProcessingSystemX_BasePointer;
void* StringProcessingSystemX_BufferPointer;
void* StringProcessingSystemX_DataBuffer;
uint32_t StringProcessingSystemX_BufferSize;
void* StringProcessingSystemX_Template;

void* StringProcessingSystemY_BasePointer;
void* StringProcessingSystemY_BufferPointer;
void* StringProcessingSystemY_DataBuffer;
uint32_t StringProcessingSystemY_BufferSize;
void* StringProcessingSystemY_Template;

void* StringProcessingSystemZ_BasePointer;
void* StringProcessingSystemZ_BufferPointer;
void* StringProcessingSystemZ_DataBuffer;
uint32_t StringProcessingSystemZ_BufferSize;
void* StringProcessingSystemZ_Template;

void* StringProcessingSystemAA_BasePointer;
void* StringProcessingSystemAA_BufferPointer;
void* StringProcessingSystemAA_DataBuffer;
uint32_t StringProcessingSystemAA_BufferSize;
void* StringProcessingSystemAA_Template;

// 系统配置数据指针 - 用于存储系统配置信息
void* SystemConfigDataPointer01;
void* SystemConfigDataPointer02;
void* SystemConfigDataPointer03;
void* SystemConfigDataPointer04;
void* SystemConfigDataPointer05;
void* SystemConfigDataPointer06;
void* SystemConfigDataPointer07;
void* SystemConfigDataPointer08;
void* SystemConfigDataPointer09;
void* SystemConfigDataPointer10;
void* SystemConfigDataPointer11;
void* SystemConfigDataPointer12;
void* SystemConfigDataPointer13;
void* SystemConfigDataPointer14;
void* SystemConfigDataPointer15;
void* SystemConfigDataPointer16;
void* SystemConfigDataPointer17;
void* SystemConfigDataPointer18;
void* SystemConfigDataPointer19;
void* SystemConfigDataPointer20;
void* SystemConfigDataPointer21;
void* SystemConfigDataPointer22;
void* SystemConfigDataPointer23;
void* SystemConfigDataPointer24;
void* SystemConfigDataPointer25;
void* SystemConfigDataPointer26;
void* SystemConfigDataPointer27;
void* SystemConfigDataPointer28;
void* SystemConfigDataPointer29;
void* SystemConfigDataPointer30;
void* SystemConfigDataPointer31;
void* SystemConfigDataPointer32;
void* SystemConfigDataPointer33;
void* SystemConfigDataPointer34;
void* SystemConfigDataPointer35;

// 系统和网络相关数据指针 - 用于存储系统和网络模块的数据
void* SystemNetworkDataPointer01;
void* SystemNetworkDataPointer02;
void* SystemNetworkDataPointer03;
void* SystemNetworkDataPointer04;
void* SystemNetworkDataPointer05;
void* SystemNetworkDataPointer06;
void* SystemNetworkDataPointer07;
void* SystemNetworkDataPointer08;
void* SystemNetworkDataPointer09;
void* SystemNetworkDataPointer10;
void* SystemNetworkDataPointer11;
void* SystemNetworkDataPointer12;
void* SystemNetworkDataPointer13;
void* SystemNetworkDataPointer14;
void* SystemNetworkDataPointer15;
void* SystemNetworkDataPointer16;
void* SystemNetworkDataPointer17;
void* SystemNetworkDataPointer18;
void* SystemNetworkDataPointer19;
void* UnknownDataPointer180a02fa0;
void* UnknownDataPointer18045f210;
void* UnknownDataPointer18045f200;
void* UnknownDataPointer180a1a2f0;
void* UnknownDataPointer180a2fc20;
void* UnknownDataPointer1804ce1a0;
void* UnknownDataPointer1804ce100;
void* UnknownDataPointer180a353b8;
void* UnknownDataPointer180a389f0;
void* UnknownDataPointer180a38a08;
void* UnknownDataPointer180a38c28;
void* UnknownDataPointer180a389d8;
void* UnknownDataPointer180a38aa8;
void* UnknownDataPointer180a38ac0;
void* UnknownDataPointer180a38ba0;
void* UnknownDataPointer180a38a20;
void* UnknownDataPointer180a38c98;
void* UnknownDataPointer180a38958;
void* UnknownDataPointer180a38c08;
void* UnknownDataPointer180a38ea0;
void* UnknownDataPointer180a389b0;
void* UnknownDataPointer180a38988;
void* UnknownDataPointer180a38a88;
void* UnknownDataPointer180a38d38;
void* UnknownDataPointer180a38ad8;
void* UnknownDataPointer180a38a78;
void* UnknownDataPointer180a38ec0;
void* UnknownDataPointer180a38a48;
void* UnknownDataPointer180a38b48;
void* UnknownDataPointer180a38c40;
void* UnknownDataPointer180a38ca8;
void* UnknownDataPointer180a38e38;
void* UnknownDataPointer180a38a3c;
void* UnknownDataPointer180a38bb8;
void* UnknownDataPointer180a38e78;
void* UnknownDataPointer180a38b20;
void* UnknownDataPointer180a38ae8;
void* UnknownDataPointer180a38c78;
void* UnknownDataPointer180a38c58;
void* UnknownDataPointer180a38be8;
void* UnknownDataPointer180a38be0;
void* UnknownDataPointer180a38bd0;
void* UnknownDataPointer180a38e50;
void* UnknownDataPointer180a38d58;
void* UnknownDataPointer180a38cc0;
void* UnknownDataPointer180a38ce8;
void* UnknownDataPointer180a38dd8;
void* UnknownDataPointer180a38dc8;
void* UnknownDataPointer180a38e90;
void* UnknownDataPointer180a38e10;
void* UnknownDataPointer180a38df8;
void* UnknownDataPointer180a38d80;
void* UnknownDataPointer180a38f10;
void* UnknownDataPointer180a38e28;
void* UnknownDataPointer180a38b60;
void* UnknownDataPointer180a38d10;
void* UnknownDataPointer180a38de8;
void* UnknownDataPointer180a38db8;
void* UnknownDataPointer180a38b88;
void* UnknownDataPointer180a38b70;
void* UnknownDataPointer180a38d20;
void* UnknownDataPointer180a38e60;
void* UnknownDataPointer180a389d8;
void* UnknownDataPointer180a38a08;
void* UnknownDataPointer180a38958;
void* UnknownDataPointer180a389b0;
void* UnknownDataPointer180a38988;
void* UnknownDataPointer180a38aa8;
void* UnknownDataPointer180a38a88;
void* UnknownDataPointer180a38ac0;
void* UnknownDataPointer180a38a48;
void* UnknownDataPointer180a38a3c;
void* UnknownDataPointer180a38a60;
void* UnknownDataPointer180a38b70;
void* UnknownDataPointer180a38b20;
void* UnknownDataPointer180a38ae8;
void* UnknownDataPointer180a38b60;
void* UnknownDataPointer180a38b48;
void* UnknownDataPointer180a38c40;
void* UnknownDataPointer180a38c78;
void* UnknownDataPointer180a38c58;
void* UnknownDataPointer180a38bd0;
void* UnknownDataPointer180a38c08;
void* UnknownDataPointer180a29944;
void* UnknownDataPointer180a38d10;
void* UnknownDataPointer180a38d58;
void* UnknownDataPointer180a38ca8;
void* UnknownDataPointer180a38ce8;
void* UnknownDataPointer180a38cc0;
void* UnknownDataPointer180a38dd8;
void* UnknownDataPointer180a38df8;
void* UnknownDataPointer180a38db8;
void* UnknownDataPointer180a38e78;
void* UnknownDataPointer180a38ea0;
void* UnknownDataPointer180a3ac00;
void* UnknownDataPointer180a3acf8;
void* UnknownDataPointer180a3acd8;
void* UnknownDataPointer180a3ad30;
void* UnknownDataPointer180a3ad18;
void* UnknownDataPointer180a3ac90;
void* UnknownDataPointer180a3ac80;
void* UnknownDataPointer180a3acc8;
void* UnknownDataPointer180a3aca8;
void* UnknownDataPointer180a3ade8;
void* UnknownDataPointer180a3add0;
void* UnknownDataPointer180a3ae18;
void* UnknownDataPointer180a3ae00;
void* UnknownDataPointer180a3ad88;
void* UnknownDataPointer180a29da8;
void* UnknownDataPointer180a3ad60;
void* UnknownDataPointer180a3adb8;
void* UnknownDataPointer180a3ada0;
void* UnknownDataPointer180a3abe0;
void* UnknownDataPointer180a1029c;
void* UnknownDataPointer180a3ac10;
void* UnknownDataPointer180a3ac48;
void* UnknownDataPointer180a3abe8;
void* UnknownDataPointer180a3a960;
void* UnknownDataPointer180a3ab28;
void* UnknownDataPointer180a39f78;
void* UnknownDataPointer180a3ab18;
void* UnknownDataPointer180a39fb0;
void* UnknownDataPointer180a3ab50;
void* UnknownDataPointer180a3ab38;
void* UnknownDataPointer180a3aae8;
void* UnknownDataPointer180a3aad8;
void* UnknownDataPointer180a3ab08;
void* UnknownDataPointer180a3aaf8;
void* UnknownDataPointer180a3abb0;
void* UnknownDataPointer180a3aba0;
void* UnknownDataPointer180a3abd0;
void* UnknownDataPointer180a3abc0;
void* UnknownDataPointer180a3ab70;
void* UnknownDataPointer180a3ab60;
void* UnknownDataPointer180a3ab90;
void* UnknownDataPointer180a3ab80;
void* UnknownDataPointer180a3ac30;
void* UnknownDataPointer180a3ac18;
void* UnknownDataPointer180a3ac68;
void* UnknownDataPointer180a3a8b0;
void* UnknownDataPointer180a3a850;
void* UnknownDataPointer180a3a830;
void* UnknownDataPointer180a3a870;
void* UnknownDataPointer180a3a860;
void* UnknownDataPointer180a04be8;
void* UnknownDataPointer180a3a938;
void* UnknownDataPointer180a3a920;
void* UnknownDataPointer180a3a960;
void* UnknownDataPointer180a3a948;

// 其他系统相关未知指针
void* UnknownDataPointer180a0cf4c;
void* UnknownDataPointer18042d5d0;
void* UnknownDataPointer18098bc48;
void* UnknownDataPointer180a1a2f0;
void* UnknownDataPointer1808fc820;
void* UnknownDataPointer1808fc838;
void* UnknownDataPointer180d49f98;

// 字符串处理器数据基址 - 用于存储字符串处理器的数据结构
void* StringProcessorDatabaseMain;
void* StringProcessorDatabaseBackup;
void* StringProcessorDatabaseCache;
void* StringProcessorDatabaseTemp;
void* StringProcessorDatabaseReserved;
void* StringProcessorDatabaseSecure;
void* StringProcessorDatabaseDebug;
void* StringProcessorDatabaseLog;
void* StringProcessorDatabaseConfig;
void* StringProcessorDatabaseState;
void* StringProcessorDatabaseEvent;
void* StringProcessorDatabaseCallback;
void* StringProcessorDatabaseHandler;
void* StringProcessorDatabaseManager;
void* StringProcessorDatabaseController;
void* StringProcessorDatabaseProcessor;
void* StringProcessorDatabaseEncoder;
void* StringProcessorDatabaseDecoder;
void* StringProcessorDatabaseValidator;
void* StringProcessorDatabaseFormatter;
void* StringProcessorDatabaseParser;
void* StringProcessorDatabaseOptimizer;
void* StringProcessorDatabaseCompressor;
void* StringProcessorDatabaseEncryptor;
void* StringProcessorDatabaseDecryptor;
void* StringProcessorDatabaseHasher;
void* StringProcessorDatabaseSigner;
void* StringProcessorDatabaseVerifier;
void* StringProcessorDatabaseConverter;
void* StringProcessorDatabaseTransformer;
void* StringProcessorDatabaseNormalizer;
void* StringProcessorDatabaseSanitizer;
void* StringProcessorDatabaseSerializer;
void* StringProcessorDatabaseDeserializer;
void* StringProcessorDatabaseMarshaller;
void* StringProcessorDatabaseUnmarshaller;
void* StringProcessorDatabaseAllocator;
void* StringProcessorDatabaseDeallocator;
void* StringProcessorDatabaseCollector;
void* StringProcessorDatabaseCleaner;

// 字符串处理器数据模板 - 用于存储字符串处理器的模板数据
void* StringProcessorTemplateMain;
void* StringProcessorTemplateBackup;
void* StringProcessorTemplateCache;
void* StringProcessorTemplateTemp;
void* StringProcessorTemplateReserved;
void* StringProcessorTemplateSecure;
void* StringProcessorTemplateDebug;
void* StringProcessorTemplateLog;
void* StringProcessorTemplateConfig;
void* StringProcessorTemplateState;
void* StringProcessorTemplateEvent;
void* StringProcessorTemplateCallback;
void* StringProcessorTemplateHandler;
void* StringProcessorTemplateManager;
void* StringProcessorTemplateController;
void* StringProcessorTemplateProcessor;
void* StringProcessorTemplateEncoder;
void* StringProcessorTemplateDecoder;
void* StringProcessorTemplateValidator;
void* StringProcessorTemplateFormatter;
void* StringProcessorTemplateParser;
void* StringProcessorTemplateOptimizer;
void* StringProcessorTemplateCompressor;
void* StringProcessorTemplateEncryptor;
void* StringProcessorTemplateDecryptor;
void* StringProcessorTemplateHasher;
void* StringProcessorTemplateSigner;
void* StringProcessorTemplateVerifier;
void* StringProcessorTemplateConverter;
void* StringProcessorTemplateTransformer;
void* StringProcessorTemplateNormalizer;
void* StringProcessorTemplateSanitizer;
void* StringProcessorTemplateSerializer;
void* StringProcessorTemplateDeserializer;
void* StringProcessorTemplateMarshaller;
void* StringProcessorTemplateUnmarshaller;
void* StringProcessorTemplateAllocator;
void* StringProcessorTemplateDeallocator;
void* StringProcessorTemplateCollector;
void* StringProcessorTemplateCleaner;

// 全局字符串数据指针和缓冲区 - 用于存储全局字符串数据
void* GlobalStringDataMainPointer;
void* GlobalStringDataMainBuffer;
void* GlobalStringDataMainLength;

// 系统配置数据指针和缓冲区 - 用于存储系统配置数据
void* SystemConfigMainPointer;
void* SystemConfigBackupPointer;
void* SystemConfigCachePointer;
void* SystemConfigTempPointer;
void* SystemConfigReservedPointer;
void* SystemConfigSecurePointer;
void* SystemConfigDebugPointer;
void* SystemConfigLogPointer;
void* SystemConfigConfigPointer;
void* SystemConfigStatePointer;
void* SystemConfigEventPointer;
void* SystemConfigCallbackPointer;
void* SystemConfigHandlerPointer;
void* SystemConfigManagerPointer;
void* SystemConfigControllerPointer;
void* SystemConfigProcessorPointer;
void* SystemConfigEncoderPointer;
void* SystemConfigDecoderPointer;
void* SystemConfigValidatorPointer;
void* SystemConfigFormatterPointer;
void* SystemConfigParserPointer;
void* SystemConfigOptimizerPointer;

// 系统配置数据缓冲区 - 用于存储系统配置数据
void* SystemConfigMainBuffer;
void* SystemConfigBackupBuffer;
void* SystemConfigCacheBuffer;
void* SystemConfigTempBuffer;
void* SystemConfigReservedBuffer;
void* SystemConfigSecureBuffer;
void* SystemConfigDebugBuffer;
void* SystemConfigLogBuffer;
void* SystemConfigConfigBuffer;
void* SystemConfigStateBuffer;
void* SystemConfigEventBuffer;

// 系统配置数据长度 - 用于存储系统配置数据的长度
void* SystemConfigMainLength;
void* SystemConfigBackupLength;
void* SystemConfigCacheLength;
void* SystemConfigTempLength;
void* SystemConfigReservedLength;
void* SystemConfigSecureLength;
void* SystemConfigDebugLength;
void* SystemConfigLogLength;
void* SystemConfigConfigLength;
void* SystemConfigStateLength;
void* SystemConfigEventLength;

// 系统配置缓冲区组 - 用于存储各种系统配置数据
char SystemConfigMainArray[0x40];
char SystemConfigBackupArray[0x40];
char SystemConfigCacheArray[0x40];
char SystemConfigTempArray[0x40];
char SystemConfigReservedArray[0x40];
char SystemConfigSecureArray[0x40];
char SystemConfigDebugArray[0x40];
char SystemConfigLogArray[0x40];
char SystemConfigConfigArray[0x40];
char SystemConfigStateArray[0x40];

// 系统地址常量定义
#define SystemConditionMutexMainAddress 0x180c911e8
#define SystemConditionMutexBackupAddress 0x180c91288
#define SystemMutexMainAddress 0x180c91970
#define SystemEventMutexAddress 0x180c91f70
#define SystemRequestMutexAddress 0x180c91ff0
#define SystemMutexFlagsMask 0xfffffffffffffffe

// 未知数据模板常量定义
#define SystemConfigTemplateAlpha SystemConfigDataAlpha
#define SystemConfigTemplateBeta SystemConfigDataBeta  
#define SystemConfigTemplateGamma SystemConfigDataGamma
#define SystemConfigTemplateDelta SystemConfigDataDelta
#define SystemConfigTemplateEpsilon SystemConfigDataEpsilon
#define SystemConfigTemplateZeta SystemConfigDataZeta
#define SystemConfigTemplateEta SystemConfigDataEta
#define SystemConfigTemplateTheta SystemConfigDataTheta
#define SystemConfigTemplateIota SystemConfigDataIota
#define SystemConfigTemplateKappa SystemConfigDataKappa
#define SystemConfigTemplateLambda SystemConfigDataLambda
#define SystemConfigTemplateMu SystemConfigDataMu
#define SystemConfigTemplateNu SystemConfigDataNu
#define SystemConfigTemplateXi SystemConfigDataXi
#define SystemConfigTemplateOmicron SystemConfigDataOmicron
#define SystemConfigTemplatePi SystemConfigDataPi
#define SystemConfigTemplateRho SystemConfigDataRho
#define SystemConfigTemplateSigma SystemConfigDataSigma
#define SystemConfigTemplateTau SystemConfigDataTau
#define SystemConfigTemplateUpsilon SystemConfigDataUpsilon
#define SystemConfigTemplatePhi SystemConfigDataPhi
#define SystemConfigTemplateChi SystemConfigDataChi
#define SystemConfigTemplatePsi SystemConfigDataPsi
#define SystemConfigTemplateOmega SystemConfigDataOmega
#define SystemConfigTemplateAlpha2 SystemConfigDataAlpha2
#define SystemConfigTemplateBeta2 SystemConfigDataBeta2
#define SystemConfigTemplateGamma2 SystemConfigDataGamma2

// 系统配置字符串模板 - 用于系统初始化和配置
char SystemConfigDataTemplatePrimary[] = "SystemConfigTemplatePrimary";
char SystemConfigDataTemplateSecondary[] = "SystemConfigTemplateSecondary";
char SystemConfigDataTemplateTertiary[] = "SystemConfigTemplateTertiary";
char SystemConfigDataTemplateQuaternary[] = "SystemConfigTemplateQuaternary";
char SystemConfigDataTemplateQuinary[] = "SystemConfigTemplateQuinary";
char SystemConfigDataTemplateSenary[] = "SystemConfigTemplateSenary";
char SystemConfigDataTemplateSeptenary[] = "SystemConfigTemplateSeptenary";
char SystemConfigDataTemplateOctonary[] = "SystemConfigTemplateOctonary";
char SystemConfigDataTemplateNonary[] = "SystemConfigTemplateNonary";
char SystemConfigDataTemplateDenary[] = "SystemConfigTemplateDenary";
char SystemConfigDataTemplateUndenary[] = "SystemConfigTemplateUndenary";
char SystemConfigDataTemplateDuodenary[] = "SystemConfigTemplateDuodenary";
char SystemConfigDataTemplateTerdenary[] = "SystemConfigTemplateTerdenary";
char SystemConfigDataTemplateQuaternarySecondary[] = "SystemConfigTemplateQuaternarySecondary";
char SystemConfigDataTemplateQuinarySecondary[] = "SystemConfigTemplateQuinarySecondary";
char SystemConfigDataTemplateSenarySecondary[] = "SystemConfigTemplateSenarySecondary";
char SystemConfigDataTemplateSeptenarySecondary[] = "SystemConfigTemplateSeptenarySecondary";
char SystemConfigDataTemplateOctonarySecondary[] = "SystemConfigTemplateOctonarySecondary";
char SystemConfigDataTemplateNonarySecondary[] = "SystemConfigTemplateNonarySecondary";
char SystemConfigDataTemplateDenarySecondary[] = "SystemConfigTemplateDenarySecondary";
char SystemConfigDataTemplateUndenarySecondary[] = "SystemConfigTemplateUndenarySecondary";
char SystemConfigDataTemplateDuodenarySecondary[] = "SystemConfigTemplateDuodenarySecondary";
char SystemConfigDataTemplateTerdenarySecondary[] = "SystemConfigTemplateTerdenarySecondary";
char SystemConfigDataTemplateQuaternaryTertiary[] = "SystemConfigTemplateQuaternaryTertiary";
char SystemConfigDataTemplateQuinaryTertiary[] = "SystemConfigTemplateQuinaryTertiary";
char SystemConfigDataTemplateSenaryTertiary[] = "SystemConfigTemplateSenaryTertiary";
char SystemConfigDataTemplateSeptenaryTertiary[] = "SystemConfigTemplateSeptenaryTertiary";
char SystemConfigDataTemplateOctonaryTertiary[] = "SystemConfigTemplateOctonaryTertiary";
char SystemConfigDataTemplateNonaryTertiary[] = "SystemConfigTemplateNonaryTertiary";
char SystemConfigDataTemplateDenaryTertiary[] = "SystemConfigTemplateDenaryTertiary";
char SystemConfigDataTemplateUndenaryTertiary[] = "SystemConfigTemplateUndenaryTertiary";
char SystemConfigDataTemplateDuodenaryTertiary[] = "SystemConfigTemplateDuodenaryTertiary";
char SystemConfigDataTemplateTerdenaryTertiary[] = "SystemConfigTemplateTerdenaryTertiary";

// 系统模块配置字符串模板 - 用于模块初始化和配置
char SystemModuleConfigTemplatePrimary[] = "SystemModuleConfigPrimary";
char SystemModuleConfigTemplateSecondary[] = "SystemModuleConfigSecondary";
char SystemModuleConfigTemplateTertiary[] = "SystemModuleConfigTertiary";
char SystemModuleConfigTemplateQuaternary[] = "SystemModuleConfigQuaternary";
char SystemModuleConfigTemplateQuinary[] = "SystemModuleConfigQuinary";
char SystemModuleConfigTemplateSenary[] = "SystemModuleConfigSenary";
char SystemModuleConfigTemplateSeptenary[] = "SystemModuleConfigSeptenary";
char SystemModuleConfigTemplateOctonary[] = "SystemModuleConfigOctonary";
char SystemModuleConfigTemplateNonary[] = "SystemModuleConfigNonary";
char SystemModuleConfigTemplateDenary[] = "SystemModuleConfigDenary";
char SystemModuleConfigTemplateUndenary[] = "SystemModuleConfigUndenary";
char SystemModuleConfigTemplateDuodenary[] = "SystemModuleConfigDuodenary";
char SystemModuleConfigTemplateTerdenary[] = "SystemModuleConfigTerdenary";
char SystemModuleConfigTemplateQuaternarySecondary[] = "SystemModuleConfigQuaternarySecondary";
char SystemModuleConfigTemplateQuinarySecondary[] = "SystemModuleConfigQuinarySecondary";
char SystemModuleConfigTemplateSenarySecondary[] = "SystemModuleConfigSenarySecondary";
char SystemModuleConfigTemplateSeptenarySecondary[] = "SystemModuleConfigSeptenarySecondary";
char SystemModuleConfigTemplateOctonarySecondary[] = "SystemModuleConfigOctonarySecondary";
char SystemModuleConfigTemplateNonarySecondary[] = "SystemModuleConfigNonarySecondary";
char SystemModuleConfigTemplateDenarySecondary[] = "SystemModuleConfigDenarySecondary";
char SystemModuleConfigTemplateUndenarySecondary[] = "SystemModuleConfigUndenarySecondary";
char SystemModuleConfigTemplateDuodenarySecondary[] = "SystemModuleConfigDuodenarySecondary";
char SystemModuleConfigTemplateTerdenarySecondary[] = "SystemModuleConfigTerdenarySecondary";
char SystemModuleConfigTemplateQuaternaryTertiary[] = "SystemModuleConfigQuaternaryTertiary";
char SystemModuleConfigTemplateQuinaryTertiary[] = "SystemModuleConfigQuinaryTertiary";
char SystemModuleConfigTemplateSenaryTertiary[] = "SystemModuleConfigSenaryTertiary";
char SystemModuleConfigTemplateSeptenaryTertiary[] = "SystemModuleConfigSeptenaryTertiary";
char SystemModuleConfigTemplateOctonaryTertiary[] = "SystemModuleConfigOctonaryTertiary";
char SystemModuleConfigTemplateNonaryTertiary[] = "SystemModuleConfigNonaryTertiary";
char SystemModuleConfigTemplateDenaryTertiary[] = "SystemModuleConfigDenaryTertiary";
char SystemModuleConfigTemplateUndenaryTertiary[] = "SystemModuleConfigUndenaryTertiary";
char SystemModuleConfigTemplateDuodenaryTertiary[] = "SystemModuleConfigDuodenaryTertiary";
char SystemModuleConfigTemplateTerdenaryTertiary[] = "SystemModuleConfigTerdenaryTertiary";

/**
 * 初始化渲染系统模块
 * 设置渲染系统所需的全局数据结构和状态标志
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeRenderingSystem(void)
{
  int64_t CallbackRegistrationResult;
  GlobalRenderingSystemEnabled = 1;
  GlobalRenderingSystemFlags = 0;
  GlobalRenderingSystemMaxValue = 0x7fffffffffffffff;
  GlobalRenderingSystemStatus = 0;
  CallbackRegistrationResult = RegisterSystemCallback(RenderingSystemCallback);
  return (CallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化物理引擎模块
 * 设置物理引擎所需的全局数据结构和碰撞检测参数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializePhysicsEngine(void)
{
  int64_t CallbackRegistrationResult;
  GlobalPhysicsEngineData = &GlobalUnknownDataPointer;
  GlobalPhysicsEngineConfig = &GlobalPhysicsEngineState;
  GlobalPhysicsEngineFlags = 0;
  GlobalPhysicsEngineState = 0;
  CallbackRegistrationResult = RegisterSystemCallback(PhysicsEngineCallback);
  return (CallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化音频系统模块
 * 设置音频系统所需的全局数据结构和音效参数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeAudioSystem(void)
{
  int64_t CallbackRegistrationResult;
  GlobalAudioSystemData = &GlobalUnknownDataPointer;
  GlobalAudioSystemConfig = &GlobalAudioSystemState;
  GlobalAudioSystemFlags = 0;
  GlobalAudioSystemState = 0;
  CallbackRegistrationResult = RegisterSystemCallback(AudioSystemCallback);
  return (CallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化输入系统模块
 * 设置输入系统所需的全局数据结构和控制器映射
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeInputSystem(void)
{
  int64_t CallbackRegistrationResult;
  GlobalInputSystemData = &GlobalUnknownInputDataPointer;
  GlobalInputSystemConfig = &GlobalInputSystemState;
  GlobalInputSystemFlags = 0;
  GlobalInputSystemState = 0;
  CallbackRegistrationResult = RegisterSystemCallback(InputSystemCallback);
  return (CallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化网络系统模块
 * 设置网络系统所需的全局数据结构和连接参数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeNetworkSystem(void)
{
  int64_t CallbackRegistrationResult;
  GlobalNetworkSystemData = &GlobalUnknownNetworkDataPointer;
  GlobalNetworkSystemConfig = &GlobalNetworkSystemState;
  GlobalNetworkSystemFlags = 0;
  GlobalNetworkSystemState = 0;
  CallbackRegistrationResult = RegisterSystemCallback(NetworkSystemCallback);
  return (CallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化文件系统模块
 * 设置文件系统所需的全局数据结构和IO缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeFileSystem(void)
{
  int64_t CallbackRegistrationResult;
  GlobalFileSystemData = &GlobalUnknownDataPointer;
  GlobalFileSystemConfig = &GlobalFileSystemState;
  GlobalFileSystemFlags = 0;
  GlobalFileSystemState = 0;
  CallbackRegistrationResult = RegisterSystemCallback(FileSystemCallback);
  return (CallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化内存管理模块
 * 设置内存管理所需的全局数据结构和内存池
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeMemoryManager(void)
{
  int64_t CallbackRegistrationResult;
  GlobalMemoryManagerData = &GlobalUnknownDataPointer;
  GlobalMemoryManagerConfig = &GlobalMemoryManagerState;
  GlobalMemoryManagerFlags = 0;
  GlobalMemoryManagerState = 0;
  CallbackRegistrationResult = RegisterSystemCallback(MemoryManagerCallback);
  return (CallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化渲染线程同步机制
 * 设置渲染系统所需的条件变量和互斥锁
 * 
 * @param threadId 线程ID参数
 * @param syncPtr 同步对象指针
 * @param mutexType 互斥锁类型
 * @param mutexAttr 互斥锁属性
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeRenderingThreadSync(uint64_t threadId, uint64_t syncPtr, uint64_t mutexType, uint64_t mutexAttr)
{
  int64_t CallbackRegistrationResult;
  uint64_t RenderingThreadMutexFlags;
  RenderingThreadMutexFlags = SystemMutexFlags;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(RENDER_MUTEX_ADDRESS, 2, mutexType, mutexAttr, RenderingThreadMutexFlags);
  RenderingSyncState = 0;
  CallbackRegistrationResult = RegisterSystemCallback(RenderingThreadSyncCallback);
  return (CallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化物理引擎同步机制
 * 设置物理引擎所需的条件变量和互斥锁
 * 
 * @param threadId 线程ID参数
 * @param syncPtr 同步对象指针
 * @param mutexType 互斥锁类型
 * @param mutexAttr 互斥锁属性
 * @return 初始化成功返回0，失败返回-1
 */
int InitializePhysicsEngineSync(uint64_t threadId, uint64_t syncPtr, uint64_t mutexType, uint64_t mutexAttr)
{
  int64_t CallbackRegistrationResult;
  uint64_t PhysicsEngineMutexFlags;
  PhysicsEngineMutexFlags = SystemMutexFlags;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(PHYSICS_MUTEX_ADDRESS, 2, mutexType, mutexAttr, PhysicsEngineMutexFlags);
  PhysicsSyncState = 0;
  CallbackRegistrationResult = RegisterSystemCallback(PhysicsEngineSyncCallback);
  return (CallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化条件变量和互斥锁C
 * 设置线程同步所需的条件变量和互斥锁
 * 
 * @param threadId 线程ID，用于标识当前线程
 * @param syncPtr 同步对象指针，指向同步数据结构
 * @param mutexType 互斥锁类型，定义互斥锁的行为特性
 * @param mutexAttr 互斥锁属性，包含互斥锁的配置参数
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeConditionMutexC(uint64_t threadId,uint64_t syncPtr,uint64_t mutexType,uint64_t mutexAttr)
{
  int64_t CallbackRegistrationResult;
  uint64_t ConditionMutexCFlags;
  ConditionMutexCFlags = SystemMutexFlags;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(ConditionMutexAddressA,2,mutexType,mutexAttr,ConditionMutexCFlags);
  GlobalConditionMutexCStatus = 0;
  CallbackRegistrationResult = RegisterSystemCallback(InitializeConditionMutexC_Callback);
  return (CallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化条件变量和互斥锁D
 * 设置线程同步所需的条件变量和互斥锁
 * 
 * @param threadId 线程ID，用于标识当前线程
 * @param syncPtr 同步对象指针，指向同步数据结构
 * @param mutexType 互斥锁类型，定义互斥锁的行为特性
 * @param mutexAttr 互斥锁属性，包含互斥锁的配置参数
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeConditionMutexD(uint64_t threadId,uint64_t syncPtr,uint64_t mutexType,uint64_t mutexAttr)
{
  int64_t CallbackRegistrationResult;
  uint64_t ConditionMutexDFlags;
  ConditionMutexDFlags = SystemMutexFlags;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(ConditionMutexAddressB,2,mutexType,mutexAttr,ConditionMutexDFlags);
  GlobalConditionMutexDStatus = 0;
  CallbackRegistrationResult = RegisterSystemCallback(InitializeConditionMutexD_Callback);
  return (CallbackRegistrationResult != 0) - 1;
}

/**
 * 初始化字符串处理器A
 * 设置字符串处理所需的数据结构和回调
 */
int InitializeStringProcessorA(void)
{
  int64_t CallbackRegistrationResult;
  uint64_t StringProcessorAFlags;
  StringProcessorA_Base = &SystemStringDataTemplate;
  StringProcessorA_BufferPtr = &StringProcessorA_Buffer;
  StringProcessorA_Buffer = 0;
  StringProcessorA_Length = 0xd;
  strcpy_s(&StringProcessorA_Buffer,0x10,&StringProcessorATemplate,StringProcessorAFlags,SystemMutexFlags);
  CallbackRegistrationResult = RegisterSystemCallback(InitializeStringProcessorA_Callback);
  return (CallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化字符串处理器B
 * 设置字符串处理所需的数据结构和回调
 */
int InitializeStringProcessorB(void)
{
  int64_t SystemCallbackRegistrationResult;
  uint64_t StringProcessorBFlags;
  StringProcessorB_Base = &SystemStringDataTemplate;
  StringProcessorB_BufferPtr = &StringProcessorB_Buffer;
  StringProcessorB_Buffer = 0;
  StringProcessorB_Length = 0xf;
  strcpy_s(&StringProcessorB_Buffer,0x10,&StringProcessorBTemplate,StringProcessorBFlags,SystemMutexFlags);
  SystemCallbackRegistrationResult = RegisterSystemCallback(InitializeStringProcessorB_Callback);
  return (SystemCallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化字符串处理器C
 * 设置字符串处理所需的数据结构和回调
 */
int InitializeStringProcessorC(void)
{
  int64_t SystemCallbackRegistrationResult;
  uint64_t StringProcessorCFlags;
  g_stringProcessorC_Base = &StringProcessorDataTemplate;
  g_stringProcessorC_BufferPtr = &g_stringProcessorC_Buffer;
  g_stringProcessorC_Buffer = 0;
  g_stringProcessorC_Length = 0xf;
  strcpy_s(&g_stringProcessorC_Buffer,0x10,&StringProcessorCTemplate,StringProcessorCFlags,SystemMutexFlags);
  SystemCallbackRegistrationResult = RegisterSystemCallback(InitializeStringProcessorC_Callback);
  return (SystemCallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化字符串处理器D
 * 设置字符串处理所需的数据结构和回调
 */
int InitializeStringProcessorD(void)
{
  int64_t SystemCallbackRegistrationResult;
  uint64_t StringProcessorDFlags;
  g_stringProcessorD_Base = &StringProcessorDataBaseD;
  g_stringProcessorD_BufferPtr = &g_stringProcessorD_Buffer;
  g_stringProcessorD_Buffer = 0;
  g_stringProcessorD_Length = 0xd;
  strcpy_s(&g_stringProcessorD_Buffer,0x10,&StringProcessorDataTemplateD,StringProcessorDFlags,SystemMutexFlags);
  SystemCallbackRegistrationResult = RegisterSystemCallback(InitializeStringProcessorD_Callback);
  return (SystemCallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化字符串处理器E
 * 设置字符串处理所需的数据结构和回调
 */
int InitializeStringProcessorE(void)
{
  int64_t SystemCallbackRegistrationResult;
  uint64_t StringProcessorEFlags;
  g_stringProcessorE_Base = &StringProcessorDataBaseE;
  g_stringProcessorE_BufferPtr = &g_stringProcessorE_Buffer;
  g_stringProcessorE_Buffer = 0;
  g_stringProcessorE_Length = 0xc;
  strcpy_s(&g_stringProcessorE_Buffer,0x10,&StringProcessorDataTemplateE,StringProcessorEFlags,SystemMutexFlags);
  SystemCallbackRegistrationResult = RegisterSystemCallback(InitializeStringProcessorE_Callback);
  return (SystemCallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化字符串处理器F
 * 设置字符串处理所需的数据结构和回调
 */
int InitializeStringProcessorF(void)
{
  int64_t SystemCallbackRegistrationResult;
  uint64_t StringProcessorFFlags;
  g_stringProcessorF_Base = &StringProcessorDataBaseF;
  GlobalStringDataPointerF = &GlobalStringDataBufferF;
  GlobalStringDataBufferF = 0;
  GlobalStringDataLengthF = 4;
  strcpy_s(&GlobalStringDataBufferF,0x10,&StringProcessorDataTemplateF,StringProcessorFFlags,SystemMutexFlags);
  SystemCallbackRegistrationResult = RegisterSystemCallback(InitializeStringProcessorF_Callback);
  return (SystemCallbackRegistrationResult != 0) - 1;
}
/**
 * 初始化模块配置A
 * 设置模块A所需的全局数据结构和配置参数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeModuleConfigurationA(void)
{
  int64_t ModuleInitializationResult;
  uint64_t ModuleConfigurationFlags;
  g_stringProcessorDataPointerA = &SystemStringDataConstantB;
  g_stringProcessorConfigPointerA = &STRING_PROCESSOR_CONFIG_A;
  STRING_PROCESSOR_CONFIG_A = 0;
  g_stringProcessorBufferSizeA = 5;
  strcpy_s(&STRING_PROCESSOR_CONFIG_A,0x10,&SystemStringDataConstantA,StringProcessorFlags,SystemMutexFlags);
  longlong SystemModuleRegistrationResult = RegisterSystemModule(InitializeSystemModuleA);
  return (SystemModuleRegistrationResult != 0) - 1;
}
/**
 * 初始化字符串处理器G
 * 设置字符串处理G所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorG(void)
{
  int64_t SystemModuleRegistrationResult;
  uint64_t StringProcessorGFlags;
  g_stringProcessorDataPointerB = &SystemStringDataConstantB;
  g_stringProcessorConfigPointerB = &STRING_PROCESSOR_CONFIG_B;
  STRING_PROCESSOR_CONFIG_B = 0;
  g_stringProcessorBufferSizeB = 5;
  strcpy_s(&STRING_PROCESSOR_CONFIG_B,0x10,&SystemStringDataConstantC,StringProcessorGFlags,SystemMutexFlags);
  SystemModuleRegistrationResult = RegisterSystemModule(InitializeSystemModuleB);
  return (SystemModuleRegistrationResult != 0) - 1;
}
/**
 * 初始化字符串处理器H
 * 设置字符串处理H所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorH(void)
{
  int64_t SystemModuleRegistrationResult;
  uint64_t StringProcessorHFlags;
  g_stringProcessorDataPointerC = &SystemStringMemoryTemplate;
  g_stringProcessorConfigPointerC = &STRING_PROCESSOR_CONFIG_C;
  STRING_PROCESSOR_CONFIG_C = 0;
  g_stringProcessorBufferSizeC = 0xd;
  strcpy_s(&STRING_PROCESSOR_CONFIG_C,0x20,&SystemStringDataConstantD,StringProcessorHFlags,SystemMutexFlags);
  SystemModuleRegistrationResult = RegisterSystemModule(InitializeStringProcessorModule);
  return (SystemModuleRegistrationResult != 0) - 1;
}
/**
 * 初始化字符串处理器I
 * 设置字符串处理I所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorI(void)
{
  int64_t SystemModuleRegistrationResult;
  uint64_t StringProcessorIFlags;
  g_stringProcessorDataPointerD = &SystemStringMemoryTemplate;
  g_stringProcessorConfigPointerD = &STRING_PROCESSOR_CONFIG_D;
  STRING_PROCESSOR_CONFIG_D = 0;
  g_stringProcessorBufferSizeD = 9;
  strcpy_s(&STRING_PROCESSOR_CONFIG_D,0x20,&SystemStringDataConstantE,StringProcessorIFlags,SystemMutexFlags);
  SystemModuleRegistrationResult = RegisterSystemModule(InitializeNetworkModule);
  return (SystemModuleRegistrationResult != 0) - 1;
}
/**
 * 初始化配置互斥锁
 * 设置系统配置所需的互斥锁和同步机制
 * 
 * @param threadId 线程ID参数
 * @param syncPtr 同步对象指针
 * @param mutexType 互斥锁类型
 * @param mutexAttr 互斥锁属性
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeConfigurationMutex(uint64_t threadId,uint64_t syncPtr,uint64_t mutexType,uint64_t mutexAttr)
{
  int64_t SystemModuleRegistrationResult;
  _Mtx_init_in_situ(SystemMutexAddressA,0x102,mutexType,mutexAttr,SystemMutexFlags);
  SystemModuleRegistrationResult = RegisterSystemModule(InitializeCoreGameEngine);
  return (SystemModuleRegistrationResult != 0) - 1;
}
  SystemConfigDataBufferPrimary = 0;
  SystemConfigDataBufferSizePrimary = 0x13;
  strcpy_s(&SystemConfigDataBufferPrimary,0x40,&SystemConfigDataTemplateCB48,StringProcessorFlags,SystemMutexFlags);
  SystemConfigDataPointerPrimary = &SystemMemoryPool;
  SystemConfigDataPointerSecondary = &SystemConfigDataBufferSecondary;
  SystemConfigDataBufferSecondary = 0;
  SystemConfigDataBufferSizeSecondary = 0xd;
  strcpy_s(&SystemConfigDataBufferSecondary,0x40,&SystemConfigDataTemplateCB80);
  SystemConfigDataPointerTertiary = &SystemMemoryPool;
  SystemConfigDataPointerQuaternary = &SystemConfigDataBufferTertiary;
  SystemConfigDataBufferTertiary = 0;
  SystemConfigDataBufferSizeTertiary = 0x17;
  strcpy_s(&SystemConfigDataBufferTertiary,0x40,&SystemConfigDataTemplateCB90);
  SystemConfigDataPointerQuinary = &SystemMemoryPool;
  SystemConfigDataPointerSenary = &SystemConfigDataBufferQuaternary;
  SystemConfigDataBufferQuaternary = 0;
  SystemConfigDataBufferSizeQuaternary = 0xd;
  strcpy_s(&SystemConfigDataBufferQuaternary,0x40,&SystemConfigDataTemplateCB60);
  SystemConfigDataPointerSeptenary = &SystemMemoryPool;
  SystemConfigDataPointerOctonary = &SystemConfigBufferPrimary;
  SystemConfigBufferPrimary = 0;
  SystemConfigDataBufferSizeQuinary = 0xc;
  strcpy_s(&SystemConfigBufferPrimary,0x40,&SystemConfigDataTemplateCB70);
  SystemConfigDataPointerNonary = &SystemMemoryPool;
  SystemConfigDataPointerDecenary = &SystemConfigBufferSecondary;
  SystemConfigBufferSecondary = 0;
  SystemConfigDataBufferSizeSenary = 0xc;
  strcpy_s(&SystemConfigBufferSecondary,0x40,&SystemConfigDataTemplateCBE0);
  SystemConfigDataPointerUndenary = &SystemMemoryPool;
  SystemConfigDataPointerDuodenary = &SystemConfigBufferTertiary;
  SystemConfigBufferTertiary = 0;
  SystemConfigDataBufferSizeOctonary = 0x10;
  strcpy_s(&SystemConfigBufferTertiary,0x40,&SystemConfigDataTemplateCBF0);
  SystemConfigDataPointerTredecenary = &SystemMemoryPool;
  SystemConfigDataPointerQuattuordecenary = &SystemConfigBufferQuaternary;
  SystemConfigBufferQuaternary = 0;
  SystemConfigDataBufferSizeNonary = 0x1f;
  strcpy_s(&SystemConfigBufferQuaternary,0x40,&SystemConfigDataTemplateCBA8);
  SystemConfigDataPointerQuindecenary = &SystemMemoryPool;
  SystemConfigDataPointerSexdecenary = &SystemConfigBufferQuinary;
  SystemConfigBufferQuinary = 0;
  SystemConfigDataBufferSizeDecenary = 0x17;
  strcpy_s(&SystemConfigBufferQuinary,0x40,&SystemConfigStringTemplateA);
  SystemConfigDataPointerSeptendecenary = &SystemMemoryPool;
  SystemConfigDataPointerOctodecenary = &SystemConfigBufferSenary;
  SystemConfigBufferSenary = 0;
  SystemConfigDataBufferSizeUndenary = 0x13;
  strcpy_s(&SystemConfigBufferSenary,0x40,&SystemConfigStringTemplateB);
  SystemConfigDataPointerNovemdecenary = &SystemMemoryPool;
  SystemConfigDataPointerVigesimal = &SystemConfigBufferOctonary;
  SystemConfigBufferOctonary = 0;
  SystemConfigDataBufferSizeDuodenary = 0x14;
  strcpy_s(&SystemConfigBufferOctonary,0x40,&SystemConfigStringTemplateC);
  SystemConfigDataPointerUnvigesimal = &SystemMemoryPool;
  SystemConfigDataPointerDuovigesimal = &SystemConfigBufferNonary;
  SystemConfigBufferNonary = 0;
  SystemConfigDataBufferSizeTredecenary = 0;
  strcpy_s(&SystemConfigBufferNonary,0x40,&SystemConfigStringTemplateD);
  SystemConfigDataPointerTrevigesimal = &SystemMemoryPool;
  SystemConfigDataPointerQuattuorvigesimal = &SystemConfigBufferDenary;
  SystemConfigBufferDenary = 0;
  SystemConfigDataBufferSizeQuattuordecenary = 0x1b;
  strcpy_s(&SystemConfigBufferDenary,0x40,&SystemConfigStringTemplateE);
  SystemConfigDataPointerQuinvigesimal = &SystemMemoryPool;
  SystemConfigDataPointerSexvigesimal = &SystemConfigBufferUndenary;
  SystemConfigBufferUndenary = 0;
  SystemConfigDataBufferSizeQuindecenary = 7;
  strcpy_s(&SystemConfigBufferUndenary,0x40,&SystemConfigStringTemplateF);
  SystemConfigDataPointerSeptenvigesimal = &SystemMemoryPool;
  SystemConfigDataPointerOctovigesimal = &SystemConfigStringBufferPrimary;
  SystemConfigStringBufferPrimary = 0;
  SystemConfigDataBufferSizeSexdecenary = 0x19;
  strcpy_s(&SystemConfigStringBufferPrimary,0x40,&SystemConfigStringTemplateG);
  SystemConfigDataPointerNovemvigesimal = &SystemMemoryPool;
  SystemConfigDataPointerTrigesimal = &SystemConfigStringBufferSecondary;
  SystemConfigStringBufferSecondary = 0;
  SystemConfigDataBufferSizeSeptendecenary = 0x12;
  strcpy_s(&SystemConfigStringBufferSecondary,0x40,&SystemConfigStringTemplateH);
  SystemConfigDataPointerUntrigesimal = &SystemMemoryPool;
  SystemConfigDataPointerDuotrigesimal = &SystemConfigStringBufferTertiary;
  SystemConfigStringBufferTertiary = 0;
  SystemConfigDataBufferSizeOctodecenary = 0x12;
  strcpy_s(&SystemConfigStringBufferTertiary,0x40,&SystemConfigStringTemplateI);
  SystemConfigDataPointerTretrigesimal = &SystemMemoryPool;
  SystemConfigDataPointerQuattuortrigesimal = &SystemConfigStringBufferQuaternary;
  SystemConfigStringBufferQuaternary = 0;
  SystemConfigDataBufferSizeNovemdecenary = 0x19;
  strcpy_s(&SystemConfigStringBufferQuaternary,0x40,&SystemConfigStringTemplateJ);
  SystemConfigDataPointerQuintrigesimal = &SystemMemoryPool;
  SystemConfigDataPointerSextrigesimal = &SystemConfigStringBufferQuinary;
  SystemConfigStringBufferQuinary = 0;
  SystemConfigDataBufferSizeVigesimal = 0x11;
  strcpy_s(&SystemConfigStringBufferQuinary,0x40,&SystemConfigStringTemplateK);
  SystemConfigDataPointerSeptentrigesimal = &SystemMemoryPool;
  SystemConfigDataPointerOctotrigesimal = &SystemConfigStringBufferSenary;
  SystemConfigStringBufferSenary = 0;
  SystemConfigDataBufferSizeUnvigesimal = 0x18;
  strcpy_s(&SystemConfigStringBufferSenary,0x40,&SystemConfigStringTemplateL);
  SystemConfigDataPointerNovemtrigesimal = &SystemMemoryPool;
  SystemConfigDataPointerQuadragesimal = &SystemConfigStringBufferOctonary;
  SystemConfigStringBufferOctonary = 0;
  SystemConfigDataBufferSizeDuovigesimal = 0x13;
  strcpy_s(&SystemConfigStringBufferOctonary,0x40,&SystemConfigStringTemplateM);
  SystemConfigDataPointerAD = &SystemMemoryPool;
  SystemConfigDataPointerAE = &SystemConfigStringBufferH;
  SystemConfigStringBufferH = 0;
  SystemConfigDataSizeR = 0x19;
  strcpy_s(&SystemConfigStringBufferH,0x40,&SystemConfigStringTemplateN);
  SystemConfigDataPointerAF = &SystemMemoryPool;
  SystemConfigDataPointerAG = &SystemConfigStringBufferI;
  SystemConfigStringBufferI = 0;
  SystemConfigDataSizeS = 0x10;
  strcpy_s(&SystemConfigStringBufferI,0x40,&SystemConfigStringTemplateO);
  SystemConfigDataPointerAH = &SystemMemoryPool;
  SystemConfigDataPointerAI = &SystemConfigStringBufferJ;
  SystemConfigStringBufferJ = 0;
  SystemConfigDataSizeT = 0x14;
  strcpy_s(&SystemConfigStringBufferJ,0x40,&SystemConfigStringTemplateP);
  SystemConfigDataPointerAJ = &SystemMemoryPool;
  SystemConfigDataPointerAK = &SystemConfigStringBufferK;
  SystemConfigStringBufferK = 0;
  SystemConfigDataSizeU = 0xf;
  strcpy_s(&SystemConfigStringBufferK,0x40,&SystemConfigStringTemplateQ);
  SystemConfigDataPointerAL = &SystemMemoryPool;
  SystemConfigDataPointerAM = &SystemConfigStringBufferL;
  SystemConfigStringBufferL = 0;
  SystemConfigDataSizeV = 0x16;
  strcpy_s(&SystemConfigStringBufferL,0x40,&SystemConfigStringTemplateR);
  SystemConfigDataPointerAN = &SystemMemoryPool;
  SystemConfigDataPointerAO = &SystemConfigStringBufferM;
  SystemConfigStringBufferM = 0;
  SystemConfigDataSizeW = 0x12;
  strcpy_s(&SystemConfigStringBufferM,0x40,&SystemConfigStringTemplateS);
  SystemConfigDataPointerAP = &SystemMemoryPool;
  SystemConfigDataPointerAQ = &SystemConfigStringBufferN;
  SystemConfigStringBufferN = 0;
  SystemConfigDataSizeX = 0x14;
  strcpy_s(&SystemConfigStringBufferN,0x40,&SystemConfigStringTemplateT);
  SystemConfigDataPointerAR = &SystemMemoryPool;
  SystemConfigDataPointerAS = &SystemConfigStringBufferO;
  SystemConfigStringBufferO = 0;
  SystemConfigDataSizeY = 0x20;
  strcpy_s(&SystemConfigStringBufferO,0x40,&SystemConfigStringTemplateU);
  SystemConfigDataAddressV = &SystemMemoryPool;
  SystemConfigDataAddressW = &SystemConfigStringBufferV;
  SystemConfigStringBufferV = 0;
  SystemConfigDataSizeV = 0x13;
  strcpy_s(&SystemConfigStringBufferV,0x40,&SystemConfigStringTemplateV);
  SystemConfigDataAddressX = &SystemMemoryPool;
  SystemConfigDataAddressY = &SystemConfigStringBufferW;
  SystemConfigStringBufferW = 0;
  SystemConfigDataSizeW = 0x16;
  strcpy_s(&SystemConfigStringBufferW,0x40,&SystemConfigStringTemplateW);
  SystemConfigDataAddressZ = &SystemMemoryPool;
  SystemConfigDataAddressAA = &SystemConfigStringBufferX;
  SystemConfigStringBufferX = 0;
  SystemConfigDataSizeX = 0xf;
  strcpy_s(&SystemConfigStringBufferX,0x40,&SystemConfigStringTemplateX);
  longlong CallbackResult = RegisterSystemModule(&SystemModuleEntryPointA);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器J
 * 设置字符串处理所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorJ(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorJFlags;
  g_stringProcessorJ_Base = &SystemGlobalDataTemplateA;
  g_stringProcessorJ_BufferPtr = &g_stringProcessorJ_Buffer;
  g_stringProcessorJ_Buffer = 0;
  g_stringProcessorJ_Length = 0xb;
  strcpy_s(&g_stringProcessorJ_Buffer,0x40,&StringProcessorTemplateA,stringProcessorJFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorJ_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器K
 * 设置字符串处理所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorK(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorKFlags;
  g_stringProcessorK_Base = &SystemGlobalDataTemplateA;
  g_stringProcessorK_BufferPtr = &g_stringProcessorK_Buffer;
  g_stringProcessorK_Buffer = 0;
  g_stringProcessorK_Length = 9;
  strcpy_s(&g_stringProcessorK_Buffer,0x40,&StringProcessorTemplateB,stringProcessorKFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorK_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器L
 * 设置字符串处理所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorL(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorLFlags;
  g_stringProcessorL_Base = &SystemGlobalDataTemplateA;
  g_stringProcessorL_BufferPtr = &g_stringProcessorL_Buffer;
  g_stringProcessorL_Buffer = 0;
  g_stringProcessorL_Length = 9;
  strcpy_s(&g_stringProcessorL_Buffer,0x40,&StringProcessorTemplateC,stringProcessorLFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorL_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化多字符串处理器系统
 * 设置多个字符串处理器所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeMultiStringProcessorSystem(void)
{
  int64_t CallbackResult;
  uint64_t systemFlags;
  
  // 初始化字符串处理器N
  g_stringProcessorN_Base = &StringProcessorDataBaseN;
  g_stringProcessorN_BufferPtr = &g_stringProcessorN_Buffer;
  g_stringProcessorN_Buffer = 0;
  g_stringProcessorN_Length = 0xb;
  strcpy_s(&g_stringProcessorN_Buffer,0x80,&StringProcessorDataTemplateN,systemFlags,SystemMutexFlags);
  
  // 初始化字符串处理器O
  g_stringProcessorO_Base = &StringProcessorDataBaseO;
  g_stringProcessorO_BufferPtr = &g_stringProcessorO_Buffer;
  g_stringProcessorO_Buffer = 0;
  g_stringProcessorO_Length = 0x10;
  strcpy_s(&g_stringProcessorO_Buffer,0x80,&StringProcessorDataTemplateO);
  
  // 初始化字符串处理器P
  g_stringProcessorP_Base = &StringProcessorDataBaseP;
  g_stringProcessorP_BufferPtr = &g_stringProcessorP_Buffer;
  g_stringProcessorP_Buffer = 0;
  g_stringProcessorP_Length = 0xd;
  strcpy_s(&g_stringProcessorP_Buffer,0x80,&StringProcessorDataTemplateP);
  
  // 初始化字符串处理器Q
  g_stringProcessorQ_Base = &StringProcessorDataBaseQ;
  g_stringProcessorQ_BufferPtr = &g_stringProcessorQ_Buffer;
  g_stringProcessorQ_Buffer = 0;
  g_stringProcessorQ_Length = 0xd;
  strcpy_s(&g_stringProcessorQ_Buffer,0x80,&StringProcessorDataTemplateQ);
  
  // 初始化字符串处理器R
  g_stringProcessorR_Base = &StringProcessorDataBaseR;
  g_stringProcessorR_BufferPtr = &g_stringProcessorR_Buffer;
  g_stringProcessorR_Buffer = 0;
  g_stringProcessorR_Length = 0xc;
  strcpy_s(&g_stringProcessorR_Buffer,0x80,&StringProcessorDataTemplateR);
  
  // 初始化字符串处理器S
  g_stringProcessorS_Base = &StringProcessorDataBaseS;
  g_stringProcessorS_BufferPtr = &g_stringProcessorS_Buffer;
  g_stringProcessorS_Buffer = 0;
  g_stringProcessorS_Length = 0x13;
  strcpy_s(&g_stringProcessorS_Buffer,0x80,&StringProcessorDataTemplateS);
  
  // 初始化字符串处理器T
  g_stringProcessorT_Base = &StringProcessorDataBaseT;
  g_stringProcessorT_BufferPtr = &g_stringProcessorT_Buffer;
  g_stringProcessorT_Buffer = 0;
  g_stringProcessorT_Length = 10;
  strcpy_s(&g_stringProcessorT_Buffer,0x80,&StringProcessorDataTemplateT);
  
  // 初始化字符串处理器U
  g_stringProcessorU_Base = &StringProcessorDataBaseU;
  g_stringProcessorU_BufferPtr = &g_stringProcessorU_Buffer;
  g_stringProcessorU_Buffer = 0;
  g_stringProcessorU_Length = 0xc;
  strcpy_s(&g_stringProcessorU_Buffer,0x80,&StringProcessorDataTemplateU);
  
  // 初始化字符串处理器V
  g_stringProcessorV_Base = &StringProcessorDataBaseV;
  g_stringProcessorV_BufferPtr = &g_stringProcessorV_Buffer;
  g_stringProcessorV_Buffer = 0;
  g_stringProcessorV_Length = 0x11;
  strcpy_s(&g_stringProcessorV_Buffer,0x80,&StringProcessorDataTemplateV);
  
  // 初始化字符串处理器W
  g_stringProcessorW_Base = &StringProcessorDataBaseW;
  g_stringProcessorW_BufferPtr = &g_stringProcessorW_Buffer;
  g_stringProcessorW_Buffer = 0;
  g_stringProcessorW_Length = 0x11;
  strcpy_s(&g_stringProcessorW_Buffer,0x80,&StringProcessorDataTemplateW);
  
  // 初始化字符串处理器X
  g_stringProcessorX_Base = &StringProcessorDataBaseX;
  g_stringProcessorX_BufferPtr = &g_stringProcessorX_Buffer;
  g_stringProcessorX_Buffer = 0;
  g_stringProcessorX_Length = 0x19;
  strcpy_s(&g_stringProcessorX_Buffer,0x80,&StringProcessorDataTemplateX);
  
  // 初始化字符串处理器Y
  g_stringProcessorY_Base = &StringProcessorDataBaseY;
  g_stringProcessorY_BufferPtr = &g_stringProcessorY_Buffer;
  g_stringProcessorY_Buffer = 0;
  g_stringProcessorY_Length = 0x1a;
  strcpy_s(&g_stringProcessorY_Buffer,0x80,&StringProcessorDataTemplateY);
  
  // 初始化字符串处理器Z
  g_stringProcessorZ_Base = &StringProcessorDataBaseZ;
  g_stringProcessorZ_BufferPtr = &g_stringProcessorZ_Buffer;
  g_stringProcessorZ_Buffer = 0;
  g_stringProcessorZ_Length = 0x1b;
  strcpy_s(&g_stringProcessorZ_Buffer,0x80,&StringProcessorDataTemplateZ);
  
  // 初始化字符串处理器AA
  g_stringProcessorAA_Base = &StringProcessorDataBaseAA;
  g_stringProcessorAA_BufferPtr = &g_stringProcessorAA_Buffer;
  g_stringProcessorAA_Buffer = 0;
  g_stringProcessorAA_Length = 0xc;
  strcpy_s(&g_stringProcessorAA_Buffer,0x80,&StringProcessorDataTemplateAA);
  
  // 初始化字符串处理器AB
  g_stringProcessorAB_Base = &StringProcessorDataBaseAB;
  g_stringProcessorAB_BufferPtr = &g_stringProcessorAB_Buffer;
  g_stringProcessorAB_Buffer = 0;
  g_stringProcessorAB_Length = 0x11;
  strcpy_s(&g_stringProcessorAB_Buffer,0x80,&StringProcessorDataTemplateAB);
  
  // 初始化字符串处理器AC
  g_stringProcessorAC_Base = &StringProcessorDataBaseAC;
  g_stringProcessorAC_BufferPtr = &g_stringProcessorAC_Buffer;
  g_stringProcessorAC_Buffer = 0;
  g_stringProcessorAC_Length = 0x11;
  strcpy_s(&g_stringProcessorAC_Buffer,0x80,&StringProcessorDataTemplateAC);
  
  CallbackResult = RegisterSystemCallback(InitializeMultiStringProcessorSystem_Callback);
  return (CallbackResult != 0) - 1;
}
  SystemConfigDataBufferA = 0;
  SystemConfigDataLengthA = 0x13;
  strcpy_s(&SystemConfigDataBufferA,0x40,&SystemConfigStringA,StringProcessorFlags,SystemMutexFlags);
  SystemConfigDataPointerA = &SystemMemoryPool;
  SystemConfigDataPointerB = &SystemConfigDataBufferB;
  SystemConfigDataBufferB = 0;
  SystemConfigDataLengthB = 0xd;
  strcpy_s(&SystemConfigDataBufferB,0x40,&SystemConfigStringB);
  SystemConfigDataPointerC = &SystemMemoryPool;
  SystemConfigDataPointerD = &SystemConfigDataBufferC;
  SystemConfigDataBufferC = 0;
  SystemConfigDataLengthC = 0x17;
  strcpy_s(&SystemConfigDataBufferC,0x40,&SystemConfigStringC);
  SystemConfigDataPointerE = &SystemMemoryPool;
  SystemConfigDataPointerF = &SystemConfigDataBufferD;
  SystemConfigDataBufferD = 0;
  SystemConfigDataLengthD = 0xd;
  strcpy_s(&SystemConfigDataBufferD,0x40,&SystemConfigStringD);
  SystemConfigDataPointerG = &SystemMemoryPool;
  SystemConfigDataPointerH = &SystemConfigDataBufferE;
  SystemConfigDataBufferE = 0;
  SystemConfigDataLengthE = 0xc;
  strcpy_s(&SystemConfigDataBufferE,0x40,&SystemConfigTemplatePrimary);
  SystemConfigDataPointerI = &SystemMemoryPool;
  SystemConfigDataPointerJ = &SystemConfigDataBufferF;
  SystemConfigDataBufferF = 0;
  SystemConfigDataLengthF = 0xc;
  strcpy_s(&SystemConfigDataBufferF,0x40,&SystemConfigTemplateSecondary);
  SystemConfigDataPointerK = &SystemMemoryPool;
  SystemConfigDataPointerL = &SystemConfigDataBufferG;
  SystemConfigDataBufferG = 0;
  SystemConfigDataLengthG = 0x10;
  strcpy_s(&SystemConfigDataBufferG,0x40,&SystemConfigTemplateTertiary);
  SystemConfigDataPointerM = &SystemMemoryPool;
  SystemConfigDataPointerN = &SystemConfigDataBufferH;
  SystemConfigDataBufferH = 0;
  SystemConfigDataLengthH = 0x1f;
  strcpy_s(&SystemConfigDataBufferH,0x40,&SystemConfigTemplateQuaternary);
  SystemConfigDataPointerO = &SystemMemoryPool;
  SystemConfigDataPointerP = &SystemConfigDataBufferI;
  SystemConfigDataBufferI = 0;
  SystemConfigDataLengthI = 0x17;
  strcpy_s(&SystemConfigDataBufferI,0x40,&SystemConfigTemplateQuinary);
  SystemConfigDataPointerQ = &SystemMemoryPool;
  SystemConfigDataPointerR = &SystemConfigDataBufferJ;
  SystemConfigDataBufferJ = 0;
  SystemConfigDataLengthJ = 0x13;
  strcpy_s(&SystemConfigDataBufferJ,0x40,&SystemConfigTemplateSenary);
  SystemConfigDataPointerS = &SystemMemoryPool;
  SystemConfigDataPointerT = &SystemConfigDataBufferK;
  SystemConfigDataBufferK = 0;
  SystemConfigDataLengthK = 0x14;
  strcpy_s(&SystemConfigDataBufferK,0x40,&SystemConfigTemplateSeptenary);
  // 初始化主字符串数据结构
  SystemStringDataPointerPrimary = &SystemMemoryPool;
  SystemStringBufferPointerPrimary = &SystemStringBufferPrimary;
  SystemStringBufferPrimary = 0;
  SystemStringDataSizePrimary = 0;
  strcpy_s(&SystemStringBufferPrimary,0x40,&SystemConstantStringPrimary);
  // 初始化次级字符串数据结构
  SystemStringDataPointerSecondary = &SystemMemoryPool;
  SystemStringBufferPointerSecondary = &SystemStringBufferSecondary;
  SystemStringBufferSecondary = 0;
  SystemStringDataSizeSecondary = 0x1b;
  strcpy_s(&SystemStringBufferSecondary,0x40,&SystemConstantStringSecondary);
  // 初始化第三级字符串数据结构
  SystemStringDataPointerTertiary = &SystemMemoryPool;
  SystemStringBufferPointerTertiary = &SystemStringBufferTertiary;
  SystemStringBufferTertiary = 0;
  SystemStringDataSizeTertiary = 7;
  strcpy_s(&SystemStringBufferTertiary,0x40,&SystemConstantStringTertiary);
  SystemMemoryPoolPointerPrimary = &SystemMemoryPool;
  SystemMemoryPoolPointerSecondary = &SystemStringConstantPrimary;
  SystemStringConstantPrimary = 0;
  SystemMemoryPoolSizePrimary = 0x19;
  strcpy_s(&SystemStringConstantPrimary,0x40,&SystemConstantStringQuaternary);
  SystemMemoryPoolPointerTertiary = &SystemMemoryPool;
  SystemMemoryPoolPointerQuaternary = &SystemStringConstantSecondary;
  SystemStringConstantSecondary = 0;
  SystemMemoryPoolSizeSecondary = 0x12;
  strcpy_s(&SystemStringConstantSecondary,0x40,&SystemStringTemplateSecondary);
  SystemMemoryPoolPointerQuinary = &SystemMemoryPool;
  SystemMemoryPoolPointerSenary = &SystemStringConstantTertiary;
  SystemStringConstantTertiary = 0;
  SystemMemoryPoolSizeTertiary = 0x12;
  strcpy_s(&SystemStringConstantTertiary,0x40,&SystemStringTemplateTertiary);
  SystemMemoryPoolPointerSeptenary = &SystemMemoryPool;
  SystemMemoryPoolPointerOctonary = &SystemStringConstantQuaternary;
  SystemStringConstantQuaternary = 0;
  SystemMemoryPoolSizeQuaternary = 0x19;
  strcpy_s(&SystemStringConstantQuaternary,0x40,&SystemStringTemplateQuaternary);
  SystemMemoryPoolPointerNonary = &SystemMemoryPool;
  SystemMemoryPoolPointerDenary = &SystemStringConstantQuinary;
  SystemStringConstantQuinary = 0;
  SystemMemoryPoolSizeQuinary = 0x11;
  strcpy_s(&SystemStringConstantQuinary,0x40,&SystemStringTemplateQuinary);
  SystemMemoryPoolPointerUndenary = &SystemMemoryPool;
  SystemMemoryPoolPointerDuodenary = &SystemStringConstantSenary;
  SystemStringConstantSenary = 0;
  SystemMemoryPoolSizeSenary = 0x18;
  strcpy_s(&SystemStringConstantSenary,0x40,&SystemStringTemplateSenary);
  SystemMemoryPoolPointerTredecenary = &SystemMemoryPool;
  SystemMemoryPoolPointerQuattuordecenary = &SystemStringConstantSeptenary;
  SystemStringConstantSeptenary = 0;
  SystemMemoryPoolSizeSeptenary = 0x13;
  strcpy_s(&SystemStringConstantSeptenary,0x40,&SystemStringTemplateSeptenary);
  SystemMemoryPoolPointerQuindecenary = &SystemMemoryPool;
  SystemMemoryPoolPointerSexdecenary = &SystemStringConstantOctonary;
  SystemStringConstantOctonary = 0;
  SystemMemoryPoolSizeOctonary = 0x19;
  strcpy_s(&SystemStringConstantOctonary,0x40,&SystemStringTemplateOctonary);
  SystemMemoryPoolPointerSeptendecenary = &SystemMemoryPool;
  SystemMemoryPoolPointerOctodecenary = &SystemStringConstantNonary;
  SystemStringConstantNonary = 0;
  SystemMemoryPoolSizeNonary = 0x10;
  strcpy_s(&SystemStringConstantNonary,0x40,&SystemStringTemplateNonary);
  SystemMemoryPoolPointerNovemdecenary = &SystemMemoryPool;
  SystemMemoryPoolPointerVigesimal = &SystemStringConstantDenary;
  SystemStringConstantDenary = 0;
  SystemMemoryPoolSizeDenary = 0x14;
  strcpy_s(&SystemStringConstantDenary,0x40,&SystemStringTemplateDenary);
  SystemDataPointer1 = &SystemMemoryPool;
  SystemDataPointer2 = &SystemDataTableEntry1;
  SystemDataTableEntry1 = 0;
  SystemDataSize1 = 0xf;
  strcpy_s(&SystemDataTableEntry1,0x40,&SystemDataTableTemplate1);
  SystemDataPointer3 = &SystemMemoryPool;
  SystemDataPointer4 = &SystemDataTableEntry2;
  SystemDataTableEntry2 = 0;
  SystemDataSize2 = 0x16;
  strcpy_s(&SystemDataTableEntry2,0x40,&SystemDataTableTemplate2);
  SystemDataPointer5 = &SystemMemoryPool;
  SystemDataPointer6 = &SystemDataTableEntry3;
  SystemDataTableEntry3 = 0;
  SystemDataSize3 = 0x12;
  strcpy_s(&SystemDataTableEntry3,0x40,&SystemDataTableTemplate3);
  SystemDataPointer7 = &SystemMemoryPool;
  SystemDataPointer8 = &SystemDataTableEntry4;
  SystemDataTableEntry4 = 0;
  SystemDataSize4 = 0x14;
  strcpy_s(&SystemDataTableEntry4,0x40,&SystemDataTableTemplate4);
  SystemDataPointer9 = &SystemMemoryPool;
  SystemDataPointer10 = &SystemDataTableEntry5;
  SystemDataTableEntry5 = 0;
  SystemDataSize5 = 0x20;
  strcpy_s(&SystemDataTableEntry5,0x40,&SystemUnknownData1);
  SystemDataPointer11 = &SystemMemoryPool;
  SystemDataPointer12 = &SystemDataTableEntry6;
  SystemDataTableEntry6 = 0;
  SystemDataSize6 = 0x13;
  strcpy_s(&SystemDataTableEntry6,0x40,&SystemUnknownData2);
  SystemDataPointer13 = &SystemMemoryPool;
  SystemDataPointer14 = &SystemDataTableEntry7;
  SystemDataTableEntry7 = 0;
  SystemDataSize7 = 0x16;
  strcpy_s(&SystemDataTableEntry7,0x40,&SystemUnknownData3);
  SystemDataPointer15 = &SystemMemoryPool;
  SystemDataPointer16 = &SystemDataTableEntry8;
  SystemDataTableEntry8 = 0;
  SystemDataSize8 = 0xf;
  strcpy_s(&SystemDataTableEntry8,0x40,&SystemUnknownData4);
  ModuleInitializationResult = RegisterSystemModule(&SystemModuleEntryPointB);
  return (ModuleInitializationResult != 0) - 1;
}
  SystemConfigBufferPrimary = 0;
  SystemConfigDataSizePrimary = 0xd;
  strcpy_s(&SystemConfigBufferPrimary,0x20,&SystemConfigTemplatePrimary,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializePhysicsSubsystem);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理器AD
 * 设置字符串处理所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorAD(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorADFlags;
  g_stringProcessorAD_Base = &StringProcessorADDataTemplate;
  g_stringProcessorAD_BufferPtr = &g_stringProcessorAD_Buffer;
  g_stringProcessorAD_Buffer = 0;
  g_stringProcessorAD_Length = 9;
  strcpy_s(&g_stringProcessorAD_Buffer,0x20,&StringProcessorADTemplate,stringProcessorADFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorAD_Callback);
  return (CallbackResult != 0) - 1;
}
  SystemConfigBufferSecondary = 0;
  SystemConfigDataSizeSecondary = 0x10;
  strcpy_s(&SystemConfigBufferSecondary,0x40,&SystemConfigTemplateSecondary,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeRenderingPipeline);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理器AE
 * 设置字符串处理所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorAE(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorAEFlags;
  g_stringProcessorAE_Base = &StringProcessorAEDataTemplate;
  g_stringProcessorAE_BufferPtr = &g_stringProcessorAE_Buffer;
  g_stringProcessorAE_Buffer = 0;
  g_stringProcessorAE_Length = 0x13;
  strcpy_s(&g_stringProcessorAE_Buffer,0x40,&StringProcessorAETemplate,stringProcessorAEFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorAE_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器AF
 * 设置字符串处理所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorAF(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorAFFlags;
  g_stringProcessorAF_Base = &StringProcessorAFDataTemplate;
  g_stringProcessorAF_BufferPtr = &g_stringProcessorAF_Buffer;
  g_stringProcessorAF_Buffer = 0;
  g_stringProcessorAF_Length = 0x12;
  strcpy_s(&g_stringProcessorAF_Buffer,0x40,&StringProcessorAFTemplate,stringProcessorAFFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorAF_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器G
 * 设置字符串处理G所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorG(void)
{
  int64_t CallbackResult;
  uint64_t processorFlags;
  GlobalStringProcessorG_Base = &GlobalUnknownDataBase;
  GlobalStringProcessorG_BufferPtr = &GlobalStringProcessorG_Buffer;
  GlobalStringProcessorG_Buffer = 0;
  GlobalStringProcessorG_Length = 0x12;
  strcpy_s(&GlobalStringProcessorG_Buffer,0x40,&GlobalUnknownDataBase,processorFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(StringProcessorG_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器H
 * 设置字符串处理H所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorH(void)
{
  int64_t CallbackResult;
  uint64_t processorFlags;
  GlobalStringProcessorH_Base = &GlobalUnknownDataBase;
  GlobalStringProcessorH_BufferPtr = &GlobalStringProcessorH_Buffer;
  GlobalStringProcessorH_Buffer = 0;
  GlobalStringProcessorH_Length = 0xd;
  strcpy_s(&GlobalStringProcessorH_Buffer,0x40,&GlobalUnknownDataBase,processorFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(StringProcessorH_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器AA
 * 设置字符串处理AA所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorAA(void)
{
  longlong InitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessorAABase = &SystemStringDataConstantA;
  StringProcessorAABufferPtr = &StringProcessorAABuffer;
  StringProcessorAABuffer = 0;
  StringProcessorAALength = 0x10;
  strcpy_s(&StringProcessorAABuffer, 0x40, &SystemStringConfigDataAA, StringProcessorFlags, SystemMutexFlags);
  InitializationResult = RegisterSystemCallback(StringProcessorAACallback);
  return (InitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理器AA
 * 设置字符串处理所需的配置和数据结构
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorAA(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  SystemNetworkDataPtr1 = &SystemMemoryPool;
  SystemNetworkDataPtr2 = &SystemNetworkDataBuffer1;
  SystemNetworkDataBuffer1 = 0;
  SystemNetworkDataSize1 = 0x17;
  strcpy_s(&SystemNetworkDataBuffer1,0x40,&SystemNetworkConfigData,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(RegisterSystemModuleA);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理器K
 * 设置字符串处理K所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorK(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorKFlags;
  StringProcessorK_Base = &SystemStringDataConstantA;
  StringProcessorK_BufferPtr = &StringProcessorK_Buffer;
  StringProcessorK_Buffer = 0;
  StringProcessorK_Length = 0x10;
  strcpy_s(&StringProcessorK_Buffer,0x40,&SystemStringConfigDataK,stringProcessorKFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorK_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器L
 * 设置字符串处理L所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorL(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorLFlags;
  StringProcessorL_Base = &SystemStringDataConstantA;
  StringProcessorL_BufferPtr = &StringProcessorL_Buffer;
  StringProcessorL_Buffer = 0;
  StringProcessorL_Length = 0xd;
  strcpy_s(&StringProcessorL_Buffer,0x40,&SystemStringConfigDataL,stringProcessorLFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorL_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器M
 * 设置字符串处理M所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorM(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorMFlags;
  StringProcessorM_Base = &UnknownData1809fcc58;
  StringProcessorM_BufferPtr = &StringProcessorM_Buffer;
  StringProcessorM_Buffer = 0;
  StringProcessorM_Length = 0xc;
  strcpy_s(&StringProcessorM_Buffer,0x40,&UnknownData180a22c48,stringProcessorMFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorM_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器N
 * 设置字符串处理N所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorN(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorNFlags;
  StringProcessorN_Base = &UnknownData1809fcc58;
  StringProcessorN_BufferPtr = &StringProcessorN_Buffer;
  StringProcessorN_Buffer = 0;
  StringProcessorN_Length = 0x16;
  strcpy_s(&StringProcessorN_Buffer,0x40,&UnknownData180a22c30,stringProcessorNFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorN_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器O
 * 设置字符串处理O所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorO(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorOFlags;
  StringProcessorO_Base = &UnknownData1809fcc58;
  StringProcessorO_BufferPtr = &StringProcessorO_Buffer;
  StringProcessorO_Buffer = 0;
  StringProcessorO_Length = 0x13;
  strcpy_s(&StringProcessorO_Buffer,0x40,&UnknownData180a22c18,stringProcessorOFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorO_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器P
 * 设置字符串处理P所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorP(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorPFlags;
  StringProcessorP_Base = &UnknownData1809fcc58;
  StringProcessorP_BufferPtr = &StringProcessorP_Buffer;
  StringProcessorP_Buffer = 0;
  StringProcessorP_Length = 0x14;
  strcpy_s(&StringProcessorP_Buffer,0x40,&UnknownData180a22c00,stringProcessorPFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorP_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器Q
 * 设置字符串处理Q所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorQ(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorQFlags;
  StringProcessorQ_Base = &UnknownData1809fcc58;
  StringProcessorQ_BufferPtr = &StringProcessorQ_Buffer;
  StringProcessorQ_Buffer = 0;
  StringProcessorQ_Length = 0x17;
  strcpy_s(&StringProcessorQ_Buffer,0x40,&Data180a22cb0,stringProcessorQFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorQ_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器R
 * 设置字符串处理R所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorR(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorRFlags;
  StringProcessorR_Base = &UnknownData1809fcc58;
  StringProcessorR_BufferPtr = &StringProcessorR_Buffer;
  StringProcessorR_Buffer = 0;
  StringProcessorR_Length = 0x17;
  strcpy_s(&StringProcessorR_Buffer,0x40,&UnknownData180a22c98,stringProcessorRFlags,SystemMutexFlags);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorR_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器S
 * 设置字符串处理S所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorS(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessorS_BasePointer = &SystemMemoryPool;
  StringProcessorS_BufferPointer = &StringProcessorS_DataBuffer;
  StringProcessorS_DataBuffer = 0;
  StringProcessorS_BufferSize = 0x20;
  strcpy_s(&StringProcessorS_DataBuffer,0x40,&StringProcessorS_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(RegisterSystemModuleB);
  return (ModuleInitializationResult != 0) - 1;
}
int InitializeStringProcessorT(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessorT_BasePointer = &SystemMemoryPool;
  StringProcessorT_BufferPointer = &StringProcessorT_DataBuffer;
  StringProcessorT_DataBuffer = 0;
  StringProcessorT_BufferSize = 0x13;
  strcpy_s(&StringProcessorT_DataBuffer,0x40,&StringProcessorT_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(RegisterSystemModuleC);
  return (ModuleInitializationResult != 0) - 1;
}
int InitializeStringProcessorU(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessorU_BasePointer = &SystemMemoryPool;
  StringProcessorU_BufferPointer = &StringProcessorU_DataBuffer;
  StringProcessorU_DataBuffer = 0;
  StringProcessorU_BufferSize = 0x1e;
  strcpy_s(&StringProcessorU_DataBuffer,0x40,&StringProcessorU_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(RegisterSystemModuleD);
  return (ModuleInitializationResult != 0) - 1;
}
int InitializeStringProcessorV(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessorV_BasePointer = &SystemMemoryPool;
  StringProcessorV_BufferPointer = &StringProcessorV_DataBuffer;
  StringProcessorV_DataBuffer = 0;
  StringProcessorV_BufferSize = 0x1b;
  strcpy_s(&StringProcessorV_DataBuffer,0x40,&StringProcessorV_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeSystemModuleA);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统模块B
 * 设置系统模块B所需的配置和数据结构
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemModuleB(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  SystemModuleB_BasePointer = &SystemMemoryPool;
  SystemModuleB_BufferPointer = &SystemModuleB_DataBuffer;
  SystemModuleB_DataBuffer = 0;
  SystemModuleB_BufferSize = 0x1b;
  strcpy_s(&SystemModuleB_DataBuffer,0x40,&SystemModuleB_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeSystemModuleB);
  return (ModuleInitializationResult != 0) - 1;
}
int InitializeSystemModuleC(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  SystemModuleC_BasePointer = &SystemMemoryPool;
  SystemModuleC_BufferPointer = &SystemModuleC_DataBuffer;
  SystemModuleC_DataBuffer = 0;
  SystemModuleC_BufferSize = 0x1c;
  strcpy_s(&SystemModuleC_DataBuffer,0x40,&SystemModuleC_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeSystemModuleC);
  return (ModuleInitializationResult != 0) - 1;
}
int InitializeSystemModuleD(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  SystemModuleD_BasePointer = &SystemMemoryPool;
  SystemModuleD_BufferPointer = &SystemModuleD_DataBuffer;
  SystemModuleD_DataBuffer = 0;
  SystemModuleD_BufferSize = 0x1d;
  strcpy_s(&SystemModuleD_DataBuffer,0x40,&SystemModuleD_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeSystemModuleD);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块M
 * 设置字符串处理系统模块M所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemM(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemM_BasePointer = &SystemMemoryPool;
  StringProcessingSystemM_BufferPointer = &StringProcessingSystemM_DataBuffer;
  StringProcessingSystemM_DataBuffer = 0;
  StringProcessingSystemM_BufferSize = 0x20;
  strcpy_s(&StringProcessingSystemM_DataBuffer,0x40,&StringProcessingSystemM_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeSystemModuleE);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块N
 * 设置字符串处理系统模块N所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemN(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemN_BasePointer = &SystemMemoryPool;
  StringProcessingSystemN_BufferPointer = &StringProcessingSystemN_DataBuffer;
  StringProcessingSystemN_DataBuffer = 0;
  StringProcessingSystemN_BufferSize = 0x1d;
  strcpy_s(&StringProcessingSystemN_DataBuffer,0x40,&StringProcessingSystemN_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemN);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块O
 * 设置字符串处理系统模块O所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemO(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemO_BasePointer = &SystemMemoryPool;
  StringProcessingSystemO_BufferPointer = &StringProcessingSystemO_DataBuffer;
  StringProcessingSystemO_DataBuffer = 0;
  StringProcessingSystemO_BufferSize = 0x1c;
  strcpy_s(&StringProcessingSystemO_DataBuffer,0x40,&StringProcessingSystemO_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemO);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块P
 * 设置字符串处理系统模块P所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemP(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemP_BasePointer = &SystemMemoryPool;
  StringProcessingSystemP_BufferPointer = &StringProcessingSystemP_DataBuffer;
  StringProcessingSystemP_DataBuffer = 0;
  StringProcessingSystemP_BufferSize = 0x17;
  strcpy_s(&StringProcessingSystemP_DataBuffer,0x40,&StringProcessingSystemP_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemP);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块Q
 * 设置字符串处理系统模块Q所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemQ(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemQ_BasePointer = &SystemMemoryPool;
  StringProcessingSystemQ_BufferPointer = &StringProcessingSystemQ_DataBuffer;
  StringProcessingSystemQ_DataBuffer = 0;
  StringProcessingSystemQ_BufferSize = 0x1f;
  strcpy_s(&StringProcessingSystemQ_DataBuffer,0x40,&StringProcessingSystemQ_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemQ);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块R
 * 设置字符串处理系统模块R所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemR(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemR_BasePointer = &SystemMemoryPool;
  StringProcessingSystemR_BufferPointer = &StringProcessingSystemR_DataBuffer;
  StringProcessingSystemR_DataBuffer = 0;
  StringProcessingSystemR_BufferSize = 0x21;
  strcpy_s(&StringProcessingSystemR_DataBuffer,0x40,&StringProcessingSystemR_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemR);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块S
 * 设置字符串处理系统模块S所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemS(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemS_BasePointer = &SystemMemoryPool;
  StringProcessingSystemS_BufferPointer = &StringProcessingSystemS_DataBuffer;
  StringProcessingSystemS_DataBuffer = 0;
  StringProcessingSystemS_BufferSize = 0x25;
  strcpy_s(&StringProcessingSystemS_DataBuffer,0x40,&StringProcessingSystemS_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemS);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块T
 * 设置字符串处理系统模块T所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemT(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemT_BasePointer = &SystemMemoryPool;
  StringProcessingSystemT_BufferPointer = &StringProcessingSystemT_DataBuffer;
  StringProcessingSystemT_DataBuffer = 0;
  StringProcessingSystemT_BufferSize = 0x23;
  strcpy_s(&StringProcessingSystemT_DataBuffer,0x40,&StringProcessingSystemT_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemT);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块U
 * 设置字符串处理系统模块U所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemU(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemU_BasePointer = &SystemMemoryPool;
  StringProcessingSystemU_BufferPointer = &StringProcessingSystemU_DataBuffer;
  StringProcessingSystemU_DataBuffer = 0;
  StringProcessingSystemU_BufferSize = 0x1e;
  strcpy_s(&StringProcessingSystemU_DataBuffer,0x40,&StringProcessingSystemU_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemU);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块V
 * 设置字符串处理系统模块V所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemV(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemV_BasePointer = &SystemMemoryPool;
  StringProcessingSystemV_BufferPointer = &StringProcessingSystemV_DataBuffer;
  StringProcessingSystemV_DataBuffer = 0;
  StringProcessingSystemV_BufferSize = 0x1e;
  strcpy_s(&StringProcessingSystemV_DataBuffer,0x40,&StringProcessingSystemV_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemV);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块W
 * 设置字符串处理系统模块W所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemW(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemW_BasePointer = &SystemMemoryPool;
  StringProcessingSystemW_BufferPointer = &StringProcessingSystemW_DataBuffer;
  StringProcessingSystemW_DataBuffer = 0;
  StringProcessingSystemW_BufferSize = 0x12;
  strcpy_s(&StringProcessingSystemW_DataBuffer,0x40,&StringProcessingSystemW_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemW);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块X
 * 设置字符串处理系统模块X所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemX(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemX_BasePointer = &SystemMemoryPool;
  StringProcessingSystemX_BufferPointer = &StringProcessingSystemX_DataBuffer;
  StringProcessingSystemX_DataBuffer = 0;
  StringProcessingSystemX_BufferSize = 0x13;
  strcpy_s(&StringProcessingSystemX_DataBuffer,0x40,&StringProcessingSystemX_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemX);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块Y
 * 设置字符串处理系统模块Y所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemY(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemY_BasePointer = &SystemMemoryPool;
  StringProcessingSystemY_BufferPointer = &StringProcessingSystemY_DataBuffer;
  StringProcessingSystemY_DataBuffer = 0;
  StringProcessingSystemY_BufferSize = 0x13;
  strcpy_s(&StringProcessingSystemY_DataBuffer,0x40,&StringProcessingSystemY_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemY);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块Z
 * 设置字符串处理系统模块Z所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemZ(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemZ_BasePointer = &SystemMemoryPool;
  StringProcessingSystemZ_BufferPointer = &StringProcessingSystemZ_DataBuffer;
  StringProcessingSystemZ_DataBuffer = 0;
  StringProcessingSystemZ_BufferSize = 0x16;
  strcpy_s(&StringProcessingSystemZ_DataBuffer,0x40,&StringProcessingSystemZ_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemZ);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AA
 * 设置字符串处理系统模块AA所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAA(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemAA_BasePointer = &SystemMemoryPool;
  StringProcessingSystemAA_BufferPointer = &StringProcessingSystemAA_DataBuffer;
  StringProcessingSystemAA_DataBuffer = 0;
  StringProcessingSystemAA_BufferSize = 0x1a;
  strcpy_s(&StringProcessingSystemAA_DataBuffer,0x40,&StringProcessingSystemAA_Template,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemAA);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AB
 * 设置字符串处理系统模块AB所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAB(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemABMemoryPoolPointer = &SystemMemoryPool;
  StringProcessingSystemABConfigBufferPointer = &StringProcessingSystemABConfigBuffer;
  StringProcessingSystemABConfigBuffer = 0;
  StringProcessingSystemABConfigSize = 0x15;
  strcpy_s(&StringProcessingSystemABConfigBuffer,0x40,&SystemModuleConfigTemplate22F90,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemAB);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AC
 * 设置字符串处理系统模块AC所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAC(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemACMemoryPoolPointer = &SystemMemoryPool;
  StringProcessingSystemACConfigBufferPointer = &StringProcessingSystemACConfigBuffer;
  StringProcessingSystemACConfigBuffer = 0;
  StringProcessingSystemACConfigSize = 0x13;
  strcpy_s(&StringProcessingSystemACConfigBuffer,0x40,&SystemModuleConfigTemplate22F78,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemAC);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AD
 * 设置字符串处理系统模块AD所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAD(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemADMemoryPoolPointer = &SystemMemoryPool;
  StringProcessingSystemADConfigBufferPointer = &StringProcessingSystemADConfigBuffer;
  StringProcessingSystemADConfigBuffer = 0;
  StringProcessingSystemADConfigSize = 0x13;
  strcpy_s(&StringProcessingSystemADConfigBuffer,0x40,&SystemModuleConfigTemplate22F60,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemAD);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AE
 * 设置字符串处理系统模块AE所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAE(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemAEMemoryPoolPointer = &SystemMemoryPool;
  StringProcessingSystemAEConfigBufferPointer = &StringProcessingSystemAEConfigBuffer;
  StringProcessingSystemAEConfigBuffer = 0;
  StringProcessingSystemAEConfigSize = 0x1b;
  strcpy_s(&StringProcessingSystemAEConfigBuffer,0x40,&SystemModuleConfigTemplate22F40,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemAE);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AF
 * 设置字符串处理系统模块AF所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAF(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemAFMemoryPoolPointer = &SystemMemoryPool;
  StringProcessingSystemAFConfigBufferPointer = &StringProcessingSystemAFConfigBuffer;
  StringProcessingSystemAFConfigBuffer = 0;
  StringProcessingSystemAFConfigSize = 0x19;
  strcpy_s(&StringProcessingSystemAFConfigBuffer,0x40,&SystemModuleConfigTemplate23018,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemAF);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AG
 * 设置字符串处理系统模块AG所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAG(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemAGMemoryPoolPointer = &SystemMemoryPool;
  StringProcessingSystemAGConfigBufferPointer = &StringProcessingSystemAGConfigBuffer;
  StringProcessingSystemAGConfigBuffer = 0;
  StringProcessingSystemAGConfigSize = 0x15;
  strcpy_s(&StringProcessingSystemAGConfigBuffer,0x40,&SystemModuleConfigTemplate23000,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemAG);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AH
 * 设置字符串处理系统模块AH所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAH(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemAHMemoryPoolPointer = &SystemMemoryPool;
  StringProcessingSystemAHConfigBufferPointer = &StringProcessingSystemAHConfigBuffer;
  StringProcessingSystemAHConfigBuffer = 0;
  StringProcessingSystemAHConfigSize = 0x28;
  strcpy_s(&StringProcessingSystemAHConfigBuffer,0x40,&StringProcessingSystemAHConfigData,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemAH);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AI
 * 设置字符串处理系统模块AI所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAI(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemAIMemoryPoolPointer = &SystemMemoryPool;
  StringProcessingSystemAIConfigBufferPointer = &StringProcessingSystemAIConfigBuffer;
  StringProcessingSystemAIConfigBuffer = 0;
  StringProcessingSystemAIConfigSize = 0x23;
  strcpy_s(&StringProcessingSystemAIConfigBuffer,0x40,&StringProcessingSystemAIConfigData,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemAI);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AJ
 * 设置字符串处理系统模块AJ所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAJ(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessingSystemAJMemoryPoolPointer = &SystemMemoryPool;
  StringProcessingSystemAJConfigBufferPointer = &StringProcessingSystemAJConfigBuffer;
  StringProcessingSystemAJConfigBuffer = 0;
  StringProcessingSystemAJConfigSize = 0x17;
  strcpy_s(&StringProcessingSystemAJConfigBuffer,0x40,&SystemModuleConfigTemplate23068,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemAJ);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AK
 * 设置字符串处理系统模块AK所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAK(void)
{
  int64_t ModuleInitializationResult;
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemAK);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AL
 * 设置字符串处理系统模块AL所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAL(void)
{
  int64_t ModuleInitializationResult;
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemAL);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AM
 * 设置字符串处理系统模块AM所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAM(void)
{
  int64_t ModuleInitializationResult;
  ModuleInitializationResult = RegisterSystemModule(InitializeStringProcessingSystemAM);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 处理系统事件
 * 根据事件类型和事件数据，调用相应的事件处理模块
 * 
 * @param systemId 系统标识符，指定事件发生的系统模块
 * @param eventType 事件类型，标识事件的类别和性质
 * @param eventData 事件数据，包含事件相关的具体信息
 * @param eventFlags 事件标志，用于控制事件处理的选项
 * @return 处理成功返回0，失败返回-1
 */
int ProcessSystemEvent(uint64_t systemId,uint64_t eventType,uint64_t eventData,uint64_t eventFlags)
{
  int64_t ModuleInitializationResult;
  _Mtx_init_in_situ(EventMutexAddress,2,eventType,eventData,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeSystemEventHandler);
  return (ModuleInitializationResult != 0) - 1;
}
  SystemStringBufferAH = 0;
  SystemInitializationStatus = 7;
  strcpy_s(&SystemStringBufferAH,0x80,&UnknownDataPointer180a0f5b8,StringProcessorFlags,SystemMutexFlags);
  SystemMemoryConfigReference = &SystemMemoryConfigTemplate;
  SystemStringBufferReference = &SystemStringBufferAI;
  SystemStringBufferAI = 0;
  SystemBufferSizeParameter = 9;
  strcpy_s(&SystemStringBufferAI,0x80,&UnknownDataPointer180a0f190);
  SystemMemoryConfigInstance = &SystemMemoryConfigTemplate;
  SystemPathBufferReference = &SystemPathBufferA;
  SystemPathBufferA = 0;
  SystemInitializationFlagPrimary = 0xb;
  strcpy_s(&SystemPathBufferA,0x80,&UnknownDataPointer180a0f168);
  SystemMemoryConfigPointerPrimary = &SystemMemoryConfigTemplate;
  SystemPathBufferInstanceA = &SystemPathBufferB;
  SystemPathBufferB = 0;
  SystemInitializationFlagSecondary = 7;
  strcpy_s(&SystemPathBufferB,0x80,&UnknownDataPointer180a0f188);
  SystemMemoryConfigPointerSecondary = &SystemMemoryConfigTemplate;
  SystemMemoryConfigPointerTertiary = &SystemMemoryDataBufferPrimary;
  SystemMemoryDataBufferPrimary = 0;
  SystemMemoryBufferSizePrimary = 0xc;
  strcpy_s(&SystemMemoryDataBufferPrimary,0x80,&UnknownDataPointer180a0f178);
  SystemMemoryConfigPointerQuaternary = &SystemMemoryConfigTemplate;
  SystemMemoryConfigPointerQuinary = &SystemMemoryDataBufferSecondary;
  SystemMemoryDataBufferSecondary = 0;
  SystemMemoryBufferSizeSecondary = 9;
  strcpy_s(&SystemMemoryDataBufferSecondary,0x80,&UnknownDataPointer180a24c50);
  SystemMemoryConfigPointerSenary = &SystemMemoryConfigTemplate;
  SystemMemoryConfigPointerSeptenary = &SystemMemoryDataBufferTertiary;
  SystemMemoryDataBufferTertiary = 0;
  SystemMemoryBufferSizeTertiary = 0xc;
  strcpy_s(&SystemMemoryDataBufferTertiary,0x80,&UnknownDataPointer180a24c60);
  ModuleInitializationResult = RegisterSystemModule(&SystemModuleEntryPointC);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统事件处理器
 * 设置系统事件处理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemEventHandler(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  SystemMemoryConfigPointerOctonary = &SystemMemoryConfigTemplate;
  SystemMemoryConfigPointerNonary = &SystemMemoryDataBufferQuaternary;
  SystemMemoryDataBufferQuaternary = 0;
  SystemMemoryBufferSizeQuaternary = 0x1b;
  strcpy_s(&SystemMemoryDataBufferQuaternary,0x80,&UnknownDataPointer180a24bd0,StringProcessorFlags,SystemMutexFlags);
  SystemMemoryConfigPointerDecenary = &SystemMemoryConfigTemplate;
  SystemMemoryConfigPointerUndenary = &SystemMemoryDataBufferQuinary;
  SystemMemoryDataBufferQuinary = 0;
  SystemMemoryBufferSizeQuinary = 0x19;
  strcpy_s(&SystemMemoryDataBufferQuinary,0x80,&UnknownDataPointer180a24bf0);
  SystemMemoryConfigPointerDuodenary = &SystemMemoryConfigTemplate;
  SystemMemoryConfigPointerTredecenary = &SystemMemoryDataBufferSenary;
  SystemMemoryDataBufferSenary = 0;
  SystemMemoryBufferSizeSenary = 0x1f;
  strcpy_s(&SystemMemoryDataBufferSenary,0x80,&UnknownDataPointer180a24c10);
  SystemMemoryConfigPointerQuattuordecenary = &SystemMemoryConfigTemplate;
  SystemMemoryConfigPointerQuindecenary = &SystemMemoryDataBufferOctonary;
  SystemMemoryDataBufferOctonary = 0;
  SystemMemoryBufferSizeOctonary = 0x1b;
  strcpy_s(&SystemStringBufferConfigA,0x80,&UnknownDataPointer180a24c30);
  SystemStringProcessingTemplate = &SystemMemoryConfigTemplate;
  SystemStringProcessingPointer = &SystemStringProcessingBuffer;
  SystemStringProcessingBuffer = 0;
  SystemStringProcessingBufferSize = 0x20;
  strcpy_s(&SystemStringProcessingBuffer,0x80,&UnknownDataPointer180a24d58);
  SystemStringConfigTemplateA = &SystemMemoryConfigTemplate;
  SystemStringConfigPointerA = &SystemStringConfigBufferA;
  SystemStringConfigBufferA = 0;
  SystemStringConfigBufferSizeA = 0x20;
  strcpy_s(&SystemStringConfigBufferA,0x80,&UnknownDataPointer180a24d80);
  ModuleInitializationResult = RegisterSystemModule(&SystemModuleEntryPointD);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统消息处理器
 * 设置系统消息处理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemMessageHandler(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  SystemMessageConfigTemplateA = &SystemMemoryConfigTemplate;
  _DAT_180bfab18 = &SystemMemoryConfigBufferPrimary;
  SystemMemoryConfigBufferPrimary = 0;
  _DAT_180bfab20 = 0x13;
  strcpy_s(&SystemMemoryConfigBufferPrimary,0x80,&UnknownDataPointer180a24da8,StringProcessorFlags,SystemMutexFlags);
  _DAT_180bfaba8 = &SystemMemoryConfigTemplate;
  _DAT_180bfabb0 = &SystemMemoryConfigBufferSecondary;
  SystemMemoryConfigBufferSecondary = 0;
  _DAT_180bfabb8 = 0x13;
  strcpy_s(&SystemMemoryConfigBufferSecondary,0x80,&UnknownDataPointer180a24da8);
  _DAT_180bfac40 = &SystemMemoryConfigTemplate;
  _DAT_180bfac48 = &SystemMemoryConfigBufferTertiary;
  SystemMemoryConfigBufferTertiary = 0;
  _DAT_180bfac50 = 0x13;
  strcpy_s(&SystemMemoryConfigBufferTertiary,0x80,&UnknownDataPointer180a24da8);
  _DAT_180bfacd8 = &SystemMemoryConfigTemplate;
  _DAT_180bface0 = &SystemMemoryConfigBufferQuaternary;
  SystemMemoryConfigBufferQuaternary = 0;
  _DAT_180bface8 = 0x13;
  strcpy_s(&SystemMemoryConfigBufferQuaternary,0x80,&UnknownDataPointer180a24da8);
  _DAT_180bfad70 = &SystemMemoryConfigTemplate;
  _DAT_180bfad78 = &SystemPathConfigBufferPrimary;
  SystemPathConfigBufferPrimary = 0;
  _DAT_180bfad80 = 0xe;
  strcpy_s(&SystemPathConfigBufferPrimary,0x80,&SystemDefaultPathString);
  _DAT_180bfae08 = &SystemMemoryConfigTemplate;
  _DAT_180bfae10 = &SystemPathConfigBufferSecondary;
  SystemPathConfigBufferSecondary = 0;
  _DAT_180bfae18 = 0xe;
  strcpy_s(&SystemPathConfigBufferSecondary,0x80,&SystemDefaultPathString);
  ModuleInitializationResult = RegisterSystemModule(&SystemModuleEntryPointE);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统配置管理器
 * 设置系统配置管理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemConfigurationManager(void)
{
  int64_t ModuleInitializationResult;
  _DAT_180bfc150 = 0;
  uRam0000000180bfc158 = 0xf;
  DAT_180bfc140 = 0;
  _DAT_180bfc160 = 0;
  _DAT_180bfc168 = 0;
  ModuleInitializationResult = RegisterSystemModule(InitializeSystemResourceManager);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统资源管理器
 * 设置系统资源管理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemResourceManager(void)
{
  int64_t ModuleInitializationResult;
  _DAT_180bfaee8 = 3;
  _DAT_180bfaec0 = &DAT_180bfaec0;
  _DAT_180bfaec8 = &DAT_180bfaec0;
  _DAT_180bfaed0 = 0;
  _DAT_180bfaed8 = 0;
  _DAT_180bfaee0 = 0;
  ModuleInitializationResult = RegisterSystemModule(InitializeSystemRequestHandler);
  return (ModuleInitializationResult != 0) - 1;
}
int HandleSystemRequest(uint64_t requestId,uint64_t requestType,uint64_t requestData,uint64_t requestFlags)
{
  int64_t ModuleInitializationResult;
  _Mtx_init_in_situ(RequestMutexAddress,2,param_3,param_4,SystemMutexFlags);
  _DAT_180c92050 = &SystemMemoryPoolTemplate;
  _DAT_180c92058 = &SystemMemoryPoolBufferPrimary;
  _DAT_180c92060 = 0;
  SystemMemoryPoolBufferPrimary = 0;
  ModuleInitializationResult = RegisterSystemModule(InitializeSystemDebugManager);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统调试管理器
 * 设置系统调试管理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemDebugManager(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  _DAT_180bfaef0 = &SystemMemoryPoolTemplate;
  _DAT_180bfaef8 = &SystemConfigTemplateBuffer;
  SystemConfigTemplateBuffer = 0;
  _DAT_180bfaf00 = 0x10;
  strcpy_s(&SystemConfigTemplateBuffer,0x400,&SystemConfigTemplateString,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeDebugManagerModule);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统性能监控器
 * 设置系统性能监控所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemPerformanceMonitor(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  _DAT_180bfb310 = &SystemMemoryPoolTemplate;
  _DAT_180bfb318 = &SystemMemoryConfigBuffer;
  SystemMemoryConfigBuffer = 0;
  _DAT_180bfb320 = 3;
  strcpy_s(&SystemMemoryConfigBuffer,0x400,&SystemMemoryConfigString,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializePerformanceMonitorModule);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统日志管理器
 * 设置系统日志管理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemLogManager(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  _DAT_180bfb730 = &SystemMemoryPoolTemplate;
  _DAT_180bfb738 = &SystemThreadConfigBuffer;
  SystemThreadConfigBuffer = 0;
  _DAT_180bfb740 = 5;
  strcpy_s(&SystemThreadConfigBuffer,0x400,&SystemThreadConfigString,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeLogManagerModule);
  return (ModuleInitializationResult != 0) - 1;
}
  SystemPrimaryFlagBuffer = 0;
  _DAT_180bf6058 = 0xd;
  strcpy_s(&SystemPrimaryFlagBuffer,0x20,&SystemPrimaryFlagString,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeNetworkManagerModule);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统网络管理器
 * 设置系统网络管理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemNetworkManager(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  _DAT_180bf6498 = &SystemStringMemoryTemplate;
  _DAT_180bf64a0 = &SystemSecondaryFlagBufferA;
  SystemSecondaryFlagBufferA = 0;
  _DAT_180bf64a8 = 9;
  strcpy_s(&SystemSecondaryFlagBufferA,0x20,&SystemSecondaryFlagString,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeStringMemoryModule);
  return (ModuleInitializationResult != 0) - 1;
}
  SystemPrimaryFlagBufferB = 0;
  _DAT_180bf6508 = 0xd;
  strcpy_s(&SystemPrimaryFlagBufferB,0x20,&SystemPrimaryFlagString,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeSecurityManagerModule);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统安全管理器
 * 设置系统安全管理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemSecurityManager(void)
{
  int64_t ModuleInitializationResult;
  uint64_t StringProcessorFlags;
  _DAT_180bf6558 = &SystemStringMemoryTemplate;
  _DAT_180bf6560 = &SystemSecondaryFlagBufferB;
  SystemSecondaryFlagBufferB = 0;
  _DAT_180bf6568 = 9;
  strcpy_s(&SystemSecondaryFlagBufferB,0x20,&SystemSecondaryFlagString,StringProcessorFlags,SystemMutexFlags);
  ModuleInitializationResult = RegisterSystemModule(InitializeSecurityManagerModule);
  return (ModuleInitializationResult != 0) - 1;
}
  SystemConfigurationStatus = 1;
  SystemInitializationStatus = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  InitializeSystemData(param_1,auStackX_18);
  ProcessSystemInitialization();
  FinalizeSystemSetup();
  return;
}
void InitializeNativeSDLL(uint64_t initFlags)
{
  uint64_t auStackX_18 [2];
  SystemConfigurationStatus = 0;
  SystemInitializationStatus = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  InitializeSystemData(param_1,auStackX_18);
  ProcessSystemInitialization();
  FinalizeSystemSetup();
  return;
}
  SystemInitializationFlag = 0;
  MemoryAllocationResult = AllocateSystemMemory(SystemMemoryAllocationPointer,0x7b8,8,3);
  MemoryManagerDataAddress = InitializeMemoryBlock(MemoryAllocationResult);
  InitializeStackBuffer(&puStack_98,param_1);
  StringProcessingResult = ValidateStackData(&puStack_98,&SystemStackValidationTemplate);
  MemoryAddress4 = (ulonglong)(int)StringProcessingResult;
  if (StringProcessingResult < uStack_88) {
    pcVar12 = (char *)(lStack_90 + MemoryAddress4);
    do {
      StringIndex = (int)MemoryAddress4;
      if (*pcVar12 == ' ') goto LAB_1800451a4;
      MemoryAddress4 = (ulonglong)(StringIndex + 1U);
      pcVar12 = pcVar12 + 1;
    } while (StringIndex + 1U < uStack_88);
  }
  StringIndex = -1;
LAB_1800451a4:
  StringProcessingResult = StringIndex + 1;
  MemoryAddress4 = (ulonglong)(int)StringProcessingResult;
  if (StringProcessingResult < uStack_88) {
    pcVar12 = (char *)(lStack_90 + MemoryAddress4);
    do {
      if (*pcVar12 == ' ') goto LAB_1800451ca;
      MemoryAddress5 = (int)MemoryAddress4 + 1;
      MemoryAddress4 = (ulonglong)MemoryAddress5;
      pcVar12 = pcVar12 + 1;
    } while (MemoryAddress5 < uStack_88);
  }
  MemoryAddress4 = 0xffffffff;
LAB_1800451ca:
  if (StringIndex != -1) {
    ProcessStackOperation(&puStack_98,&puStack_78,StringProcessingResult,MemoryAddress4);
    pMemoryAddress3 = &SystemConstantStringPrimary;
    if (puStack_70 != (void *)0x0) {
      pMemoryAddress3 = puStack_70;
    }
    NetworkRequestResult = atoi(pMemoryAddress3);
    *(uint32_t *)(MemoryManagerDataAddress + 0x7b4) = NetworkRequestResult;
    puStack_78 = &SystemNullPointer;
    if (puStack_70 != (void *)0x0) {
      CleanupSystemResources();
    }
    puStack_70 = (void *)0x0;
    uStack_60 = 0;
    puStack_78 = &SystemBufferTemplate;
  }
  FinalizeSystemState();
  MemoryAllocationResult = AllocateSystemMemory(SystemMemoryAllocationPointer,0x213458,8,10);
  SystemMemoryConfigurationPointer = ConfigureMemoryAllocation(MemoryAllocationResult);
  MemoryPointerArray = (longlong *)AllocateSystemMemory(SystemMemoryAllocationPointer,0xe8,8,3);
  plStackX_10 = MemoryPointerArray;
  ProcessMemoryData(MemoryPointerArray);
  *MemoryPointerArray = (longlong)&SystemGlobalDataTemplate;
  pplStackX_18 = (longlong **)(MemoryPointerArray + 0x18);
  *pplStackX_18 = (longlong *)&SystemBufferTemplate;
  MemoryPointerArray[0x19] = 0;
  *(uint32_t *)(MemoryPointerArray + 0x1a) = 0;
  *pplStackX_18 = (longlong *)&SystemNullPointer;
  MemoryPointerArray[0x1b] = 0;
  MemoryPointerArray[0x19] = 0;
  *(uint32_t *)(MemoryPointerArray + 0x1a) = 0;
  (*(code *)(*pplStackX_18)[2])(pplStackX_18,param_1);
  MemoryPointerArray[0x1c] = param_2;
  plStack_48 = MemoryPointerArray;
  (**(code **)(*MemoryPointerArray + 0x28))(MemoryPointerArray);
  SystemStateValue = MemoryManagerDataAddress;
  pplStackX_18 = &plStackX_10;
  plStackX_10 = MemoryPointerArray;
  (**(code **)(*MemoryPointerArray + 0x28))(MemoryPointerArray);
  ExecuteSystemTask(SystemStateValue,&plStackX_10);
  while( true ) {
    if ((void *)*MemoryPointerArray == &SystemGlobalDataTemplate) {
      cVar16 = (char)MemoryPointerArray[2] != '\0';
    }
    else {
      cVar16 = (**(code **)((void *)*MemoryPointerArray + 0x68))(MemoryPointerArray);
    }
    if (cVar16 != '\0') break;
    Sleep(1);
  }
  (**(code **)(*MemoryPointerArray + 0x38))(MemoryPointerArray);
  puStack_98 = &SystemNullPointer;
  if (lStack_90 == 0) {
    return;
  }
  CleanupSystemResources();
}
  SystemConfigurationStatus = 1;
  SystemInitializationStatus = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  InitializeSystemData(param_1,auStackX_18);
  ProcessSystemInitialization();
  FinalizeSystemSetup();
  return;
}
void InitializeNativeCore(uint64_t initFlags)
{
  uint64_t auStackX_18 [2];
  SystemConfigurationStatus = 0;
  SystemInitializationStatus = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  InitializeSystemData(param_1,auStackX_18);
  ProcessSystemInitialization();
  FinalizeSystemSetup();
  return;
}
void InitializeNativeCoreCLR(uint64_t initFlags)
{
  uint64_t auStackX_18 [2];
  SystemConfigurationStatus = 0;
  SystemInitializationStatus = 1;
  auStackX_18[0] = GetModuleHandleA(0);
  InitializeSystemData(param_1,auStackX_18);
  ProcessSystemInitialization();
  FinalizeSystemSetup();
  return;
}
    SystemValidationStatus = iVar8 != 0xb7;
  }
  ProcessSystemStringData(SystemStringDataPointer,0,0xd,&SystemStringProcessingTemplate,SystemStringDataBufferA);
  if (puStack_28 == (void *)0x0) {
    return;
  }
  CleanupSystemResources();
}
    SystemBufferStatus = 0;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 3;
  InitializeSystemBuffer(&puStack_48,param_1);
  ProcessSystemDataBuffer(&uStack_68,&puStack_48);
  puStack_48 = &SystemNullPointer;
  if (lStack_40 != 0) {
    CleanupSystemResources();
  }
  lStack_40 = 0;
  uStack_30 = 0;
  puStack_48 = &SystemBufferTemplate;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 3;
  InitializeSystemBufferStructure(&uStack_88,&uStack_68);
  ProcessSystemBufferData(&uStack_88,auStack_a8);
  if (0x1fff < uStack_98) {
    uStack_98 = 0x1fff;
  }
  pMemoryAddress = &SystemConstantStringPrimary;
  if (puStack_a0 != (void *)0x0) {
    pMemoryAddress = puStack_a0;
  }
  memcpy(&SystemStringDataBufferB,pMemoryAddress,(longlong)(int)uStack_98);
}
    SystemDataBufferStatus = 0;
    return;
  }
  stringLength = -1;
  do {
    stringLength = stringLength + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
  MemoryAddress = (uint)stringLength;
  if (0x1fff < MemoryAddress) {
    MemoryAddress = 0x1fff;
  }
  memcpy(&SystemStringDataBufferC,param_1,(longlong)(int)MemoryAddress);
}
          SystemOperationStatus = 1;
          SystemProcessStatus = 0;
          *(uint8_t *)(_DAT_180c86870 + 0x1f0) = 0;
          puStack_2c8 = &SystemNullPointer;
          uStack_2b0 = 0;
          puStack_2c0 = (uint8_t *)0x0;
          uStack_2b8 = 0;
          if (pMemoryAddress7 != (void *)0x0) {
            StringSearchResult = -1;
            do {
              stringIndex = StringSearchResult;
              StringSearchResult = stringIndex + 1;
            } while (pMemoryAddress7[StringSearchResult] != '\0');
            if ((int)StringSearchResult != 0) {
              LoopCounter9 = (int)stringIndex + 2;
              LoopCounterValue = LoopCounter9;
              if (LoopCounter9 < 0x10) {
                LoopCounterValue = 0x10;
              }
              pMemoryAddress1 = (uint8_t *)AllocateSystemMemory(_DAT_180c8ed18,(longlong)LoopCounterValue,0x13);
              *pMemoryAddress1 = 0;
              puStack_2c0 = pMemoryAddress1;
              allocationSize = GetMemoryAllocationSize(pMemoryAddress1);
              uStack_2b0 = CONCAT44(uStack_2b0._4_4_,allocationSize);
              memcpy(pMemoryAddress1,pMemoryAddress7,LoopCounter9);
            }
          }
          uStack_2b8 = 0;
          strstr(&SystemConstantStringPrimary,&SystemStringConstantA);
          strstr(&SystemConstantStringPrimary,&SystemStringConstantB);
          strstr(&SystemConstantStringPrimary,&SystemStringConstantC);
          strstr(&SystemConstantStringPrimary,&SystemStringConstantD);
          strstr(&SystemConstantStringPrimary,&UnknownDataPointer1809fd1a0);
          strstr(&SystemConstantStringPrimary,&UnknownDataPointer1809fd1b0);
          SystemModuleStatus = 1;
          SystemNetworkEnabled = 1;
          StringSearchResult = strstr(pMemoryAddress7,&UnknownDataPointer1809fd1c0);
          if (StringSearchResult == 0) {
            StringSearchResult = strstr(pMemoryAddress7,&NetworkHttpProtocolString);
            if ((((((StringSearchResult == 0) && (StringSearchResult = strstr(pMemoryAddress7,&NetworkHttpsProtocolString), StringSearchResult == 0)) &&
                  (StringSearchResult = strstr(pMemoryAddress7,&NetworkFtpProtocolString), StringSearchResult == 0)) &&
                 ((StringSearchResult = strstr(pMemoryAddress7,&NetworkTcpProtocolString), StringSearchResult == 0 &&
                  (StringSearchResult = strstr(pMemoryAddress7,&NetworkUdpProtocolString), StringSearchResult == 0)))) &&
                ((StringSearchResult = strstr(pMemoryAddress7,&NetworkWebSocketProtocolString), StringSearchResult == 0 &&
                 ((StringSearchResult = strstr(pMemoryAddress7,&NetworkSmtpProtocolString), StringSearchResult == 0 &&
                  (StringSearchResult = strstr(pMemoryAddress7,&NetworkPop3ProtocolString), StringSearchResult == 0)))))) &&
               (StringSearchResult = strstr(pMemoryAddress7,&NetworkImapProtocolString), StringSearchResult == 0)) {
              *(uint16_t *)(SystemDataPointer + 0x24) = 0x101;
              *(uint8_t *)(SystemDataPointer + 0x28) = 1;
            }
            else {
              SystemNetworkStatus = 1;
            }
          }
          else {
            *(uint16_t *)(SystemDataPointer + 0x24) = 0;
          }
          puStack_2c0 = (uint8_t *)0x0;
          uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
          puStack_2c8 = &SystemBufferTemplate;
        }
        else if (systemMode == 0xb) {
          LoopCounterValue = strcmp(pMemoryAddress1,&SystemConfigModeString);
          if (LoopCounterValue != 0) goto LAB_18004d668;
          SystemOperationStatus = 1;
          SystemProcessStatus = 0;
          SystemModuleStatus = 1;
          SystemDataPointer = strstr(pMemoryAddress7,&SystemDebugModeString);
          if (SystemDataPointer != 0) {
            pMemoryAddress7 = &SystemReleaseModeString;
            goto LAB_18004d511;
          }
        }
        else {
          if (systemMode == 0xc) {
            LoopCounterValue = strcmp(pMemoryAddress1,&SystemTestModeString);
            bVar31 = LoopCounterValue == 0;
          }
          else {
LAB_18004d668:
            bVar31 = false;
          }
          if (bVar31) {
            InitializeSystemBuffer(&puStack_238,pMemoryAddress7);
            systemMode = InitializeDataBuffer(&puStack_238,&SystemTestModeString);
            BufferSize1 = (ulonglong)(int)systemMode;
            if (systemMode < uStack_228) {
              pcVar12 = (char *)(lStack_230 + BufferSize1);
              do {
                LoopCounterValue = (int)BufferSize1;
                if (*pcVar12 == ' ') goto LAB_18004d6b7;
                BufferSize1 = (ulonglong)(LoopCounterValue + 1U);
                pcVar12 = pcVar12 + 1;
              } while (LoopCounterValue + 1U < uStack_228);
            }
            LoopCounterValue = -1;
LAB_18004d6b7:
            uVar8 = LoopCounterValue + 1;
            BufferSize1 = (ulonglong)(int)systemMode;
            if (systemMode < uStack_228) {
              pcVar12 = (char *)(lStack_230 + BufferSize1);
              do {
                if (*pcVar12 == ' ') goto LAB_18004d6dd;
                BufferSize6 = (int)BufferSize1 + 1;
                BufferSize1 = (ulonglong)BufferSize6;
                pcVar12 = pcVar12 + 1;
              } while (BufferSize6 < uStack_228);
            }
            BufferSize1 = 0xffffffff;
LAB_18004d6dd:
            if (LoopCounterValue != -1) {
              ProcessBufferData(&puStack_238,&puStack_1b8,uVar8,BufferSize1);
              LoopCounterValue = iStack_1a8;
              LoopCounter9 = 0;
              StringSearchResult = strchr(puStack_1b0,0x2e);
              if (StringSearchResult != 0) {
                do {
                  LoopCounter9 = LoopCounter9 + 1;
                  StringSearchResult = strchr(StringSearchResult + 1,0x2e);
                } while (StringSearchResult != 0);
                if ((LoopCounter9 == 3) && (LoopCounterValue - 7U < 9)) {
                  pMemoryAddress8 = &SystemConstantStringPrimary;
                  if (puStack_1b0 != (void *)0x0) {
                    pMemoryAddress8 = puStack_1b0;
                  }
                  (**(code **)(*(longlong *)(SystemDataPointer + 400) + 0x10))
                            ((longlong *)(SystemDataPointer + 400),pMemoryAddress8);
                }
              }
              puStack_1b8 = &SystemNullPointer;
              if (puStack_1b0 != (void *)0x0) {
                CleanupSystemResources();
              }
              puStack_1b0 = (void *)0x0;
              uStack_1a0 = 0;
              puStack_1b8 = &SystemBufferTemplate;
            }
            puStack_238 = &SystemNullPointer;
            if (lStack_230 != 0) {
              CleanupSystemResources();
            }
            lStack_230 = 0;
            uStack_220 = 0;
            puStack_238 = &SystemBufferTemplate;
          }
          else {
            if (uVar8 == 0x11) {
              LoopCounterValue = strcmp(pMemoryAddress1,&SystemPerformanceModeString);
              bVar31 = LoopCounterValue == 0;
            }
            else {
              bVar31 = false;
            }
            if (bVar31) {
              InitializeSystemBuffer(&puStack_218,pMemoryAddress7);
              uVar8 = InitializeDataBuffer(&puStack_218,&SystemPerformanceModeString);
              BufferSize1 = (ulonglong)(int)systemMode;
              if (uVar8 < uStack_208) {
                pcVar12 = (char *)(lStack_210 + BufferSize1);
                do {
                  LoopCounterValue = (int)BufferSize1;
                  if (*pcVar12 == ' ') goto LAB_18004d849;
                  BufferSize1 = (ulonglong)(LoopCounterValue + 1U);
                  pcVar12 = pcVar12 + 1;
                } while (LoopCounterValue + 1U < uStack_208);
              }
              LoopCounterValue = -1;
LAB_18004d849:
              uVar8 = LoopCounterValue + 1;
              BufferSize1 = (ulonglong)(int)systemMode;
              if (uVar8 < uStack_208) {
                pcVar12 = (char *)(lStack_210 + BufferSize1);
                do {
                  if (*pcVar12 == ' ') goto LAB_18004d876;
                  BufferSize6 = (int)BufferSize1 + 1;
                  BufferSize1 = (ulonglong)BufferSize6;
                  pcVar12 = pcVar12 + 1;
                } while (BufferSize6 < uStack_208);
              }
              BufferSize1 = 0xffffffff;
LAB_18004d876:
              if (LoopCounterValue != -1) {
                ProcessBufferData(&puStack_218,&puStack_198,uVar8,BufferSize1);
                LoopCounterValue = iStack_188;
                LoopCounter9 = 0;
                SystemDataPointer = strchr(puStack_190,0x2e);
                if (SystemDataPointer != 0) {
                  do {
                    LoopCounter9 = LoopCounter9 + 1;
                    SystemDataPointer = strchr(SystemDataPointer + 1,0x2e);
                  } while (SystemDataPointer != 0);
                  if ((LoopCounter9 == 3) && (LoopCounterValue - 7U < 9)) {
                    pMemoryAddress8 = &SystemConstantStringPrimary;
                    if (puStack_190 != (void *)0x0) {
                      pMemoryAddress8 = puStack_190;
                    }
                    (**(code **)(_DAT_180bf5bc0 + 0x10))(&DAT_180bf5bc0,pMemoryAddress8);
                  }
                }
                puStack_198 = &SystemNullPointer;
                if (puStack_190 != (void *)0x0) {
                  CleanupSystemResources();
                }
                puStack_190 = (void *)0x0;
                uStack_180 = 0;
                puStack_198 = &SystemBufferTemplate;
              }
              puStack_218 = &SystemNullPointer;
              if (lStack_210 != 0) {
                CleanupSystemResources();
              }
              lStack_210 = 0;
              uStack_200 = 0;
              puStack_218 = &SystemBufferTemplate;
            }
            else {
              if (uVar8 == 0xe) {
                LoopCounterValue = strcmp(pMemoryAddress1,&SystemCompatibilityModeString);
                bVar31 = LoopCounterValue == 0;
              }
              else {
                bVar31 = false;
              }
              if (bVar31) {
                InitializeSystemBuffer(&puStack_1f8,pMemoryAddress7);
                uVar8 = InitializeDataBuffer(&puStack_1f8,&SystemCompatibilityModeString);
                BufferSize1 = (ulonglong)(int)systemMode;
                if (uVar8 < uStack_1e8) {
                  pcVar12 = (char *)(lStack_1f0 + BufferSize1);
                  do {
                    if (*pcVar12 == ' ') goto LAB_18004d9e4;
                    uVar8 = (int)BufferSize1 + 1;
                    BufferSize1 = (ulonglong)uVar8;
                    pcVar12 = pcVar12 + 1;
                  } while (uVar8 < uStack_1e8);
                }
                BufferSize1 = 0xffffffff;
LAB_18004d9e4:
                uVar8 = (int)BufferSize1 + 1;
                BufferSize8 = (ulonglong)(int)uVar8;
                if (uVar8 < uStack_1e8) {
                  pcVar12 = (char *)(lStack_1f0 + BufferSize8);
                  do {
                    if (*pcVar12 == ' ') goto LAB_18004da0a;
                    BufferSize6 = (int)BufferSize8 + 1;
                    BufferSize8 = (ulonglong)BufferSize6;
                    pcVar12 = pcVar12 + 1;
                  } while (BufferSize6 < uStack_1e8);
                }
                BufferSize8 = 0xffffffff;
LAB_18004da0a:
                if ((int)BufferSize1 != -1) {
                  ProcessBufferData(&puStack_1f8,&puStack_2a8,uVar8,BufferSize8);
                  FinalizeDataBuffer(&puStack_2a8);
                  if (uStack_298 != 0) {
                    LoopCounterValue = 0;
                    StringSearchResult = (longlong)(int)(uStack_298 - 1);
                    if (0 < (int)(uStack_298 - 1)) {
                      do {
                        if (puStack_2a0[StringSearchResult] != '\"') break;
                        LoopCounterValue = LoopCounterValue + 1;
                        StringSearchResult = StringSearchResult + -1;
                      } while (0 < StringSearchResult);
                    }
                    uStack_298 = uStack_298 - LoopCounterValue;
                    puStack_2a0[uStack_298] = 0;
                  }
                  ValidateDataBuffer(&puStack_2a8,1);
                  pMemoryAddress8 = &SystemConstantStringPrimary;
                  if (puStack_2a0 != (void *)0x0) {
                    pMemoryAddress8 = puStack_2a0;
                  }
                  StringSearchResult = -1;
                  do {
                    StringSearchResult = StringSearchResult + 1;
                  } while (pMemoryAddress8[StringSearchResult] != '\0');
                  if ((int)StringSearchResult < 0x400) {
                    _DAT_180bf5c40 = (int)StringSearchResult;
                    strcpy_s(_DAT_180bf5c38,0x400);
                  }
                  else {
                    SystemStringCopySafe(&SystemLogTemplateString,0x400);
                    _DAT_180bf5c40 = 0;
                    *_DAT_180bf5c38 = 0;
                  }
                  uVar8 = uStack_298;
                  BufferSize1 = (ulonglong)uStack_298;
                  if (puStack_2a0 != (void *)0x0) {
                    SystemBufferCopy(SystemDataPointer + 0x170,BufferSize1);
                  }
                  if (uVar8 != 0) {
                    memcpy(*(uint64_t *)(SystemDataPointer + 0x178),puStack_2a0,BufferSize1);
                  }
                  *(uint32_t *)(SystemDataPointer + 0x180) = 0;
                  if (*(longlong *)(SystemDataPointer + 0x178) != 0) {
                    *(uint8_t *)(BufferSize1 + *(longlong *)(SystemDataPointer + 0x178)) = 0;
                  }
                  *(uint32_t *)(SystemDataPointer + 0x18c) = uStack_28c;
                  puStack_2a8 = &SystemNullPointer;
                  if (puStack_2a0 != (void *)0x0) {
                    SystemBufferValidate(puStack_2a0,puStack_2a0);
                  }
                  puStack_2a0 = (void *)0x0;
                  uStack_290 = 0;
                  puStack_2a8 = &SystemBufferTemplate;
                  BufferSize1 = 0;
                }
                puStack_1f8 = &SystemNullPointer;
                if (lStack_1f0 != 0) {
                  SystemBufferValidate(lStack_1f0,BufferSize1);
                }
                lStack_1f0 = 0;
                uStack_1e0 = 0;
                puStack_1f8 = &SystemBufferTemplate;
              }
              else {
                if (uVar8 == 0x16) {
                  LoopCounterValue = strcmp(pMemoryAddress1,&SystemSecurityModeString);
                  if (LoopCounterValue == 0) {
                    SystemResourceStatus = 1;
                    SystemMemoryStatus = 1;
                    goto LAB_18004d527;
                  }
LAB_18004dbe3:
                  bVar31 = false;
                }
                else {
                  if (uVar8 != 0x12) goto LAB_18004dbe3;
                  LoopCounterValue = strcmp(pMemoryAddress1,&SystemEncryptionModeString);
                  bVar31 = LoopCounterValue == 0;
                }
                if (bVar31) {
                  InitializeSystemBuffer(&puStack_1d8,pMemoryAddress7);
                  uVar8 = SystemDataCompare(&puStack_1d8,&SystemEncryptionModeString);
                  BufferSize1 = (ulonglong)(int)systemMode;
                  if (uVar8 < uStack_1c8) {
                    pcVar12 = (char *)(lStack_1d0 + BufferSize1);
                    do {
                      if (*pcVar12 == ' ') goto LAB_18004dc44;
                      uVar8 = (int)BufferSize1 + 1;
                      BufferSize1 = (ulonglong)uVar8;
                      pcVar12 = pcVar12 + 1;
                    } while (uVar8 < uStack_1c8);
                  }
                  BufferSize1 = 0xffffffff;
LAB_18004dc44:
                  uVar8 = (int)BufferSize1 + 1;
                  BufferSize8 = (ulonglong)(int)uVar8;
                  if (uVar8 < uStack_1c8) {
                    pcVar12 = (char *)(lStack_1d0 + BufferSize8);
                    do {
                      if (*pcVar12 == ' ') goto LAB_18004dc6a;
                      BufferSize6 = (int)BufferSize8 + 1;
                      BufferSize8 = (ulonglong)BufferSize6;
                      pcVar12 = pcVar12 + 1;
                    } while (BufferSize6 < uStack_1c8);
                  }
                  BufferSize8 = 0xffffffff;
LAB_18004dc6a:
                  if ((int)BufferSize1 != -1) {
                    SystemDataProcess(&puStack_1d8,&puStack_258,uVar8,BufferSize8);
                    SystemBufferInitialize(&puStack_258,1);
                    uVar8 = uStack_248;
                    BufferSize1 = (ulonglong)uStack_248;
                    if (lStack_250 != 0) {
                      SystemBufferCopy(SystemDataPointer + 0x170,BufferSize1);
                    }
                    if (uVar8 != 0) {
                      memcpy(*(uint64_t *)(SystemDataPointer + 0x178),lStack_250,BufferSize1);
                    }
                    *(uint32_t *)(SystemDataPointer + 0x180) = 0;
                    if (*(longlong *)(SystemDataPointer + 0x178) != 0) {
                      *(uint8_t *)(BufferSize1 + *(longlong *)(SystemDataPointer + 0x178)) = 0;
                    }
                    *(uint32_t *)(SystemDataPointer + 0x18c) = uStack_23c;
                    *(uint8_t *)(SystemDataPointer + 0x168) = 1;
                    puStack_258 = &SystemNullPointer;
                    if (lStack_250 != 0) {
                      SystemBufferValidate(lStack_250,lStack_250);
                    }
                    lStack_250 = 0;
                    uStack_240 = 0;
                    puStack_258 = &SystemBufferTemplate;
                    BufferSize1 = 0;
                  }
                  puStack_1d8 = &SystemNullPointer;
                  if (lStack_1d0 != 0) {
                    SystemBufferValidate(lStack_1d0,BufferSize1);
                  }
                  lStack_1d0 = 0;
                  uStack_1c0 = 0;
                  puStack_1d8 = &SystemBufferTemplate;
                }
                else {
                  if (uVar8 == 0x17) {
                    LoopCounterValue = strcmp(pMemoryAddress1,&SystemComparisonStringA);
                    if (LoopCounterValue == 0) {
                      SystemModuleStatus = 1;
                      goto LAB_18004d527;
                    }
LAB_18004dda1:
                    bVar31 = false;
                  }
                  else {
                    if (uVar8 != 0xb) goto LAB_18004dda1;
                    LoopCounterValue = strcmp(pMemoryAddress1,&SystemComparisonStringB);
                    bVar31 = LoopCounterValue == 0;
                  }
                  if (bVar31) {
                    InitializeSystemBuffer(&puStack_178,pMemoryAddress7);
                    SystemBufferSetup(&puStack_178);
                    SystemBufferCleanup(&puStack_178);
                    InitializeDataBuffer(&SystemDataProcessingBuffer,&puStack_178);
                    SystemModuleStatus = 1;
                    puStack_178 = &SystemNullPointer;
                    if (lStack_170 != 0) {
                      CleanupSystemResources();
                    }
                    lStack_170 = 0;
                    uStack_160 = 0;
                    puStack_178 = &SystemBufferTemplate;
                  }
                  else {
                    pMemoryAddress6 = &SystemConstantStringPrimary;
                    if (pMemoryAddress1 != (uint8_t *)0x0) {
                      pMemoryAddress6 = pMemoryAddress1;
                    }
                    SystemDataPointer = strstr(pMemoryAddress6);
                    if (SystemDataPointer != 0) {
                      BufferSize9 = 0;
                      puStack_288 = &SystemNullPointer;
                      uStack_270 = 0;
                      puStack_280 = (uint32_t *)0x0;
                      uStack_278 = 0;
                      pMemoryAddress3 = (uint32_t *)MemoryAllocateEx(_DAT_180c8ed18,0x10,0x13);
                      *(uint8_t *)pMemoryAddress3 = 0;
                      puStack_280 = pMemoryAddress3;
                      uVar7 = MemoryValidateEx(pMemoryAddress3);
                      uStack_270 = CONCAT44(uStack_270._4_4_,uVar7);
                      *pMemoryAddress3 = 0x726f662f;
                      pMemoryAddress3[1] = 0x5f646563;
                      pMemoryAddress3[2] = 0x666e6f63;
                      pMemoryAddress3[3] = 0x3a6769;
                      uStack_278 = 0xf;
                      BufferSize1 = BufferSize9;
                      BufferSize8 = BufferSize9;
                      if (0 < (int)(uVar8 - 0xe)) goto LAB_18004ded0;
                      goto LAB_18004df0e;
                    }
                    if (uVar8 == 0xf) {
                      LoopCounterValue = strcmp(pMemoryAddress1);
                      if (LoopCounterValue == 0) {
                        cStack_338 = '\x01';
                        *(uint8_t *)(SystemControlDataAddress + 0x22) = 1;
                        goto LAB_18004d527;
                      }
LAB_18004e25f:
                      bVar31 = false;
                    }
                    else {
                      if (systemMode == 0xc) {
                        LoopCounterValue = strcmp(pMemoryAddress1);
                        if (LoopCounterValue == 0) {
                          pMemoryAddress7 = &SystemNetworkDataBuffer;
LAB_18004d511:
                          ProcessNetworkData(SystemStringDataPointer,pMemoryAddress7);
                        }
                        goto LAB_18004e25f;
                      }
                      if (uVar8 == 0x1a) {
                        LoopCounterValue = strcmp(pMemoryAddress1);
                        if (LoopCounterValue == 0) {
                          *(uint8_t *)(SystemControlDataAddress + 0x21) = 1;
                          goto LAB_18004d527;
                        }
                        goto LAB_18004e25f;
                      }
                      if (uVar8 == 0x10) {
                        LoopCounterValue = strcmp(pMemoryAddress1);
                        if (LoopCounterValue == 0) {
                          SystemDataProcessingFlag = 0;
                          goto LAB_18004d527;
                        }
                        goto LAB_18004e25f;
                      }
                      if (uVar8 == 0x18) {
                        LoopCounterValue = strcmp(pMemoryAddress1);
                        if (LoopCounterValue == 0) {
                          SystemNetworkEnabled = 1;
                          goto LAB_18004d527;
                        }
                        goto LAB_18004e25f;
                      }
                      if (uVar8 != 0x14) goto LAB_18004e25f;
                      LoopCounterValue = strcmp(pMemoryAddress1);
                      bVar31 = LoopCounterValue == 0;
                    }
                    SystemDataPointer = SystemControlDataAddress;
                    if (bVar31) {
                      InitializeSystemBuffer(&puStack_330,pMemoryAddress7);
                      SystemBufferSetup(&puStack_330);
                      uVar8 = 0;
                      pcVar12 = pcStack_328;
                      if (uStack_320 != 0) {
                        do {
                          if (*pcVar12 == '/') goto LAB_18004e2b6;
                          uVar8 = uVar8 + 1;
                          pcVar12 = pcVar12 + 1;
                        } while (uVar8 < uStack_320);
                      }
                      uVar8 = 0xffffffff;
LAB_18004e2b6:
                      if (uVar8 != 0xffffffff) {
                        SystemDataPointer = SystemDataProcess(&puStack_330,&puStack_c8,0);
                        if (pcStack_328 != (char *)0x0) {
                          CleanupSystemResources();
                        }
                        uStack_320 = *(uint *)(SystemDataPointer + 0x10);
                        pcStack_328 = *(char **)(SystemDataPointer + 8);
                        uStack_318 = *(longlong *)(SystemDataPointer + 0x18);
                        *(uint32_t *)(SystemDataPointer + 0x10) = 0;
                        *(uint64_t *)(SystemDataPointer + 8) = 0;
                        *(uint64_t *)(SystemDataPointer + 0x18) = 0;
                        puStack_c8 = &SystemNullPointer;
                        if (lStack_c0 != 0) {
                          CleanupSystemResources();
                        }
                        lStack_c0 = 0;
                        uStack_b0 = 0;
                        puStack_c8 = &SystemBufferTemplate;
                      }
                      SystemBufferCleanup(&puStack_330);
                      uVar8 = uStack_320;
                      SystemDataPointer = SystemControlDataAddress;
                      *(uint8_t *)(SystemControlDataAddress + 0x48) = 1;
                      BufferSize1 = (ulonglong)uStack_320;
                      if (pcStack_328 != (char *)0x0) {
                        SystemBufferCopy(SystemDataPointer + 0x50,BufferSize1);
                      }
                      if (uVar8 != 0) {
                        memcpy(*(uint64_t *)(SystemDataPointer + 0x58),pcStack_328,BufferSize1);
                      }
                      *(uint32_t *)(SystemDataPointer + 0x60) = 0;
                      if (*(longlong *)(SystemDataPointer + 0x58) != 0) {
                        *(uint8_t *)(BufferSize1 + *(longlong *)(SystemDataPointer + 0x58)) = 0;
                      }
                      *(uint *)(SystemDataPointer + 0x6c) = uStack_318._4_4_;
                      puStack_330 = &SystemNullPointer;
                      if (pcStack_328 != (char *)0x0) {
                        SystemBufferValidate(pcStack_328,pcStack_328);
                      }
                      pcStack_328 = (char *)0x0;
                      uStack_318 = (ulonglong)uStack_318._4_4_ << 0x20;
                      puStack_330 = &SystemBufferTemplate;
                    }
                    else if (cStack_338 == '\0') {
                      BufferSize7 = SystemBufferSizeCheck();
                      pMemoryAddress6 = (uint8_t *)0x0;
                      puStack_2e8 = &SystemNullPointer;
                      uStack_2d0 = 0;
                      puStack_2e0 = (uint8_t *)0x0;
                      uStack_2d8 = 0;
                      BufferSize6 = uStack_334 | 1;
                      pMemoryAddress1 = pMemoryAddress6;
                      pMemoryAddress4 = pMemoryAddress6;
                      uStack_334 = BufferSize6;
                      uStack_158 = BufferSize7;
                      if (uVar8 != 0) {
                        LoopCounterValue = uVar8 + 1;
                        if (LoopCounterValue < 0x10) {
                          LoopCounterValue = 0x10;
                        }
                        pMemoryAddress4 = (uint8_t *)MemoryAllocateEx(_DAT_180c8ed18,(longlong)LoopCounterValue,0x13);
                        *pMemoryAddress4 = 0;
                        puStack_2e0 = pMemoryAddress4;
                        pMemoryAddress1 = (uint8_t *)MemoryValidateEx(pMemoryAddress4);
                        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(int)pMemoryAddress1);
                      }
                      SystemDataPointer = 1;
                      StringProcessingResult0 = 1;
                      if (1 < (int)uVar8) {
                        BufferSize1 = 0;
                        do {
                          BufferSize7 = uStack_158;
                          BufferSize6 = uStack_334;
                          if (uVar8 <= StringProcessingResult0) break;
                          BufferSize = puStack_308[SystemDataPointer];
                          LoopCounterValue = (int)BufferSize1;
                          BufferSize3 = LoopCounterValue + 1;
                          BufferSize1 = (ulonglong)BufferSize3;
                          if (BufferSize3 != 0) {
                            BufferSize6 = LoopCounterValue + 2;
                            if (pMemoryAddress4 == (uint8_t *)0x0) {
                              if ((int)BufferSize6 < 0x10) {
                                BufferSize6 = 0x10;
                              }
                              pMemoryAddress4 = (uint8_t *)
                                        MemoryAllocateEx(_DAT_180c8ed18,(longlong)(int)BufferSize6,0x13);
                              *pMemoryAddress4 = 0;
                            }
                            else {
                              if (BufferSize6 <= (uint)pMemoryAddress1) goto LAB_18004e56d;
                              uStack_348 = 0x13;
                              pMemoryAddress4 = (uint8_t *)
                                        MemoryCopyEx(_DAT_180c8ed18,pMemoryAddress4,BufferSize6,0x10);
                            }
                            puStack_2e0 = pMemoryAddress4;
                            BufferSize6 = MemoryValidateEx(pMemoryAddress4);
                            uStack_2d0 = CONCAT44(uStack_2d0._4_4_,BufferSize6);
                            pMemoryAddress1 = (uint8_t *)(ulonglong)BufferSize6;
                          }
LAB_18004e56d:
                          pMemoryAddress6[(longlong)pMemoryAddress4] = BufferSize;
                          pMemoryAddress4[BufferSize1] = 0;
                          pMemoryAddress6 = (uint8_t *)(ulonglong)BufferSize3;
                          StringProcessingResult0 = StringProcessingResult0 + 1;
                          SystemDataPointer = SystemDataPointer + 1;
                          BufferSize7 = uStack_158;
                          BufferSize6 = uStack_334;
                          uStack_2d8 = BufferSize3;
                        } while (SystemDataPointer < (int)uVar8);
                      }
                      ProcessMemoryData(pMemoryAddress1,&puStack_2e8,BufferSize7);
                      uStack_334 = BufferSize6 & 0xfffffffe;
                      puStack_2e8 = &SystemNullPointer;
                      if (pMemoryAddress4 != (uint8_t *)0x0) {
                        SystemBufferValidate(pMemoryAddress4);
                      }
                      puStack_2e0 = (uint8_t *)0x0;
                      uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                      puStack_2e8 = &SystemBufferTemplate;
                      pMemoryAddress1 = puStack_308;
                      pMemoryAddress7 = puStack_268;
                    }
                    else {
                      cStack_338 = '\0';
                      if (pMemoryAddress1 != (uint8_t *)0x0) {
                        SystemBufferCopy(SystemControlDataAddress + 0x28,pMemoryAddress4);
                      }
                      if (uVar8 != 0) {
                        memcpy(*(uint64_t *)(SystemDataPointer + 0x30),pMemoryAddress1,pMemoryAddress4);
                      }
                      *(uint32_t *)(SystemDataPointer + 0x38) = 0;
                      if (*(longlong *)(SystemDataPointer + 0x30) != 0) {
                        pMemoryAddress4[*(longlong *)(SystemDataPointer + 0x30)] = 0;
                      }
                      *(uint32_t *)(SystemDataPointer + 0x44) = uStack_2f8._4_4_;
                    }
                  }
                }
              }
            }
          }
        }
LAB_18004d527:
        pMemoryAddress4 = (uint8_t *)0x0;
        uStack_300 = 0;
        SystemDataPointer = lStack_260;
        if (pMemoryAddress1 != (uint8_t *)0x0) {
          *pMemoryAddress1 = 0;
        }
      }
      else {
        SystemBufferCopy(&puStack_310,uVar8 + 1);
        puStack_308[uStack_300] = bVar1;
        uStack_300 = uStack_300 + 1;
        pMemoryAddress4 = (uint8_t *)(ulonglong)uStack_300;
        pMemoryAddress4[(longlong)puStack_308] = 0;
        pMemoryAddress1 = puStack_308;
      }
      uStack_2f0 = uStack_2f0 + 1;
    } while (uStack_2f0 < uStack_150);
  }
  puStack_98 = &SystemMemoryPool;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0x10;
  strcpy_s(auStack_80,0x40,&SystemStackBufferA);
  cVar5 = ProcessSystemData(SystemDataPointer,&puStack_98);
  puStack_98 = &SystemBufferTemplate;
  if (cVar5 != '\0') {
    *(uint32_t *)(SystemDataPointer + 0x20) = 1;
  }
  (**(code **)(**(longlong **)(_DAT_180c8ed08 + 0x18) + 0x30))
            (*(longlong **)(_DAT_180c8ed08 + 0x18),DAT_180c8ecec);
  puStack_310 = &SystemNullPointer;
  if (pMemoryAddress1 != (uint8_t *)0x0) {
    SystemBufferValidate(pMemoryAddress1);
  }
  puStack_308 = (uint8_t *)0x0;
  uStack_2f8 = uStack_2f8 & 0xffffffff00000000;
  puStack_310 = &SystemBufferTemplate;
  SystemSecurityCheck(uStack_38 ^ (ulonglong)auStack_368);
  while (pbVar15 = pbVar15 + 1, uVar8 != 0) {
LAB_18004d1a2:
    bVar1 = *pbVar15;
    uVar8 = (uint)pbVar15[SystemDataPointer];
    if (bVar1 != uVar8) break;
  }
  if ((int)(bVar1 - uVar8) < 1) {
LAB_18004d1b9:
    BufferSize7 = 1;
  }
  else {
LAB_18004d1c1:
    BufferSize7 = 0;
  }
  SystemModuleInitialize(lVar9,ModuleInitializationResult0,StringSearchResult,BufferSize7);
  while( true ) {
    BufferSize8 = (ulonglong)(LoopCounterValue + 1);
    BufferSize1 = BufferSize1 + 1;
    if ((longlong)(int)(uVar8 - 0xe) <= (longlong)BufferSize1) break;
LAB_18004ded0:
    LoopCounterValue = (int)BufferSize8;
    BufferSize8 = BufferSize9;
    BufferSize5 = BufferSize9;
    do {
      BufferSize6 = (uint)BufferSize5;
      if (pMemoryAddress1[BufferSize8 + BufferSize1] != *(char *)(BufferSize5 + (longlong)pMemoryAddress3)) break;
      BufferSize6 = BufferSize6 + 1;
      BufferSize5 = (ulonglong)BufferSize6;
      BufferSize8 = BufferSize8 + 1;
    } while ((longlong)BufferSize8 < 0xf);
    if (BufferSize6 == 0xf) goto LAB_18004df14;
  }
LAB_18004df0e:
  LoopCounterValue = -1;
LAB_18004df14:
  SystemDataProcess(&puStack_310,&puStack_128,LoopCounterValue + 0xf,pMemoryAddress4);
  puStack_e8 = (uint64_t *)0x0;
  puStack_e0 = (uint64_t *)0x0;
  uStack_d8 = 0;
  uStack_d0 = 3;
  if (lStack_120 != 0) {
    InitializeSystemBuffers(&puStack_128,&puStack_e8,&SystemStackBufferB);
  }
  pStringProcessingResult = puStack_e8;
  SystemDataTransfer(&puStack_148,puStack_e8);
  SystemDataTransfer(&puStack_108,pStringProcessingResult + 4);
  pNetworkRequestResult = puStack_e0;
  if (((longlong)puStack_e0 - (longlong)pStringProcessingResult & 0xffffffffffffffe0U) != 0x40) {
LAB_18004e088:
    puStack_108 = &SystemNullPointer;
    if (lStack_100 != 0) {
      CleanupSystemResources();
    }
    lStack_100 = 0;
    uStack_f0 = 0;
    puStack_108 = &SystemBufferTemplate;
    puStack_148 = &SystemNullPointer;
    if (lStack_140 != 0) {
      CleanupSystemResources();
    }
    lStack_140 = 0;
    uStack_130 = 0;
    puStack_148 = &SystemBufferTemplate;
    for (pBufferSize2 = pStringProcessingResult; pBufferSize2 != pNetworkRequestResult; pBufferSize2 = pBufferSize2 + 4) {
      (**(code **)*pBufferSize2)(pBufferSize2,0);
    }
    if (pStringProcessingResult != (uint64_t *)0x0) {
      SystemBufferValidate(pStringProcessingResult);
    }
    puStack_128 = &SystemNullPointer;
    if (lStack_120 != 0) {
      CleanupSystemResources();
    }
    lStack_120 = 0;
    uStack_110 = 0;
    puStack_128 = &SystemBufferTemplate;
    puStack_288 = &SystemNullPointer;
    SystemBufferValidate(pMemoryAddress3);
  }
  ProcessGameData(SystemRuntimeConfigData,&puStack_148,&puStack_108);
  lVar9 = SystemRuntimeConfigData + 0x90;
  SystemDataPointer = MemoryAllocateEx(SystemMemoryAllocationPointer,0x40,*(uint8_t *)(SystemRuntimeConfigData + 0xb8));
  SystemDataConfigure(SystemDataPointer + 0x20,&puStack_148);
  StringSearchResult = CalculateGameLogic(lVar9,acStack_336,SystemDataPointer + 0x20);
  if (acStack_336[0] == '\0') {
    ProcessGamePhysics(extraout_XMM0_Da_00,SystemDataPointer);
    goto LAB_18004e088;
  }
  if (StringSearchResult != lVar9) {
    if (*(int *)(StringSearchResult + 0x30) == 0) {
LAB_18004e057:
      BufferSize7 = 1;
      goto LAB_18004e062;
    }
    if (*(int *)(SystemDataPointer + 0x30) != 0) {
      pbVar15 = *(byte **)(StringSearchResult + 0x28);
      ModuleInitializationResult0 = *(longlong *)(SystemDataPointer + 0x28) - (longlong)pbVar15;
      do {
        bVar1 = *pbVar15;
        uVar8 = (uint)pbVar15[ModuleInitializationResult0];
        if (bVar1 != uVar8) break;
        pbVar15 = pbVar15 + 1;
      } while (uVar8 != 0);
      if ((int)(bVar1 - uVar8) < 1) goto LAB_18004e057;
    }
  }
  BufferSize7 = 0;
LAB_18004e062:
  SystemModuleInitialize(SystemDataPointer,StringSearchResult,lVar9,BufferSize7);
}
    SystemRenderingEnabled = 1;
    iVar7 = _Cnd_broadcast(0x180c91240);
    if (iVar7 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar7);
    }
    iVar7 = _Mtx_unlock(ConditionMutexAddressB);
    if (iVar7 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar7);
    }
    InitializeGameEngine(0x180c911a0);
  }
  *(uint32_t *)(_DAT_180c86910 + 4) = 0;
  if (*(char *)(lVar6 + 0x1ee) == '\0') {
    (**(code **)(**(longlong **)(lVar6 + 0x2b0) + 0xe0))();
    *(int *)(lVar6 + 0x224) = *(int *)(lVar6 + 0x224) + 1;
    if (*(int *)(_DAT_180c8a9c8 + 0xe0) == 0) {
      if (*(char *)(lVar6 + 0x264) == '\0') {
        iVar7 = 10;
        if (10 < *(int *)(_DAT_180c8a9c8 + 0xbd0)) {
          iVar7 = *(int *)(_DAT_180c8a9c8 + 0xbd0);
        }
        FloatCalculationResult = (float)*(double *)(lVar6 + 0x208);
        if (1.0 / (float)iVar7 <= (float)*(double *)(lVar6 + 0x208)) {
          FloatCalculationResult = 1.0 / (float)iVar7;
        }
      }
      else {
        FloatCalculationResult = *(float *)(lVar6 + 0x268);
      }
      *(float *)(lVar6 + 0x220) = FloatCalculationResult;
    }
    else {
      *(uint32_t *)(lVar6 + 0x220) = 0x3d088889;
      FloatCalculationResult = 0.033333335;
    }
    ProcessInputEvent(lVar6,FloatCalculationResult);
    MemoryAllocationResult = MemoryManagerDataAddress;
    if ((NetworkModuleDataAddress != 0) &&
       (pModuleInitializationResult = *(longlong **)(NetworkModuleDataAddress + 0x228), pModuleInitializationResult != (longlong *)0x0)) {
      pplStackX_8 = &plStackX_10;
      plStackX_10 = pModuleInitializationResult;
      (**(code **)(*pModuleInitializationResult + 0x28))();
      ProcessNetworkPacket(MemoryAllocationResult,&plStackX_10);
    }
    MemoryAllocationResult = MemoryManagerDataAddress;
    if (*(char *)(SystemControlDataAddress + 0xa0) == '\0') {
      if ((NetworkModuleDataAddress != 0) &&
         (pModuleInitializationResult = *(longlong **)(NetworkModuleDataAddress + 0x228), pModuleInitializationResult != (longlong *)0x0)) {
        pplStackX_8 = &plStackX_18;
        plStackX_18 = pModuleInitializationResult;
        (**(code **)(*pModuleInitializationResult + 0x28))();
        ProcessNetworkConnection(MemoryAllocationResult,&plStackX_18,0);
        pModuleInitializationResult = *(longlong **)(NetworkModuleDataAddress + 0x228);
        *(uint64_t *)(NetworkModuleDataAddress + 0x228) = 0;
        if (pModuleInitializationResult != (longlong *)0x0) {
          (**(code **)(*pModuleInitializationResult + 0x38))();
        }
      }
      SystemModuleCleanup(SystemCleanupDataAddress);
      pModuleInitializationResult = SystemModuleDataAddress;
      if (*(code **)(*SystemModuleDataAddress + 8) == (code *)&SystemNullFunctionPointer) {
        *(uint32_t *)(SystemModuleDataAddress + 9) = 0;
        pNetworkRequestResult = (uint8_t *)pModuleInitializationResult[8];
        if (pNetworkRequestResult != (uint8_t *)0x0) {
          *pNetworkRequestResult = 0;
        }
        *(uint32_t *)((longlong)pModuleInitializationResult + 0x54) = 0;
      }
      else {
        (**(code **)(*SystemModuleDataAddress + 8))();
      }
    }
    else {
      if (*(char *)(lVar6 + 0x22c) != '\0') {
        InitializeNetworkStack();
      }
      *(uint32_t *)(lVar6 + 0x228) = *(uint32_t *)(lVar6 + 0x224);
      StartNetworkService();
      ConfigureNetworkSettings();
    }
    QueryPerformanceCounter(&lStack_90);
    dVar15 = (double)lStack_90 * PerformanceCounterFactor;
    _DAT_180d48d20 = _DAT_180d48d20 + 1;
    dVar16 = dVar15 - _DAT_180d48d18;
    if (1.0 < dVar16) {
      *(float *)(lVar6 + 500) = (float)((double)_DAT_180d48d20 / dVar16);
      _DAT_180d48d20 = 0;
      _DAT_180d48d18 = dVar15;
      *(float *)(lVar6 + 0x1f8) = (float)(1000.0 / *(double *)(lVar6 + 0x70));
    }
    if (0.0 < *(double *)(GameEngineDataAddress + 0x1510)) {
      ProcessGameLogic(lVar6,(float)*(double *)(GameEngineDataAddress + 0x1510));
    }
    if (*(char *)(lVar6 + 0x1ee) == '\0') {
      FloatCalculationResult = *(float *)(lVar6 + 0x200);
      dVar15 = *(double *)(lVar6 + 0x218);
      do {
        QueryPerformanceCounter(&lStack_88);
      } while ((double)lStack_88 * PerformanceCounterFactor < (double)FloatCalculationResult + dVar15);
      QueryPerformanceCounter(&lStack_80);
      lVar8 = lStack_80 - LastPerformanceCounter;
      LastPerformanceCounter = lStack_80;
      *(double *)(lVar6 + 0x208) = (double)lVar8 * PerformanceCounterFactor;
      QueryPerformanceCounter(&lStack_78);
      *(double *)(lVar6 + 0x218) = (double)lStack_78 * PerformanceCounterFactor;
    }
  }
  return;
}
    SystemRenderingEnabled = 1;
    LoopCounterValue = _Cnd_broadcast(0x180c91240);
    if (LoopCounterValue != 0) {
      __Throw_C_error_std__YAXH_Z(LoopCounterValue);
    }
    LoopCounterValue = _Mtx_unlock(ConditionMutexAddressB);
    if (LoopCounterValue != 0) {
      __Throw_C_error_std__YAXH_Z(LoopCounterValue);
    }
    InitializeGameEngine(0x180c911a0);
  }
  *(uint32_t *)(_DAT_180c86910 + 4) = 0;
  if (*(char *)(param_1 + 0x1ee) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0xe0))();
    *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 1;
    if (*(int *)(_DAT_180c8a9c8 + 0xe0) == 0) {
      if (*(char *)(param_1 + 0x264) == '\0') {
        LoopCounterValue = 10;
        if (10 < *(int *)(_DAT_180c8a9c8 + 0xbd0)) {
          LoopCounterValue = *(int *)(_DAT_180c8a9c8 + 0xbd0);
        }
        fVar13 = (float)*(double *)(param_1 + 0x208);
        if (1.0 / (float)LoopCounterValue <= (float)*(double *)(param_1 + 0x208)) {
          fVar13 = 1.0 / (float)LoopCounterValue;
        }
      }
      else {
        fVar13 = *(float *)(param_1 + 0x268);
      }
      *(float *)(param_1 + 0x220) = fVar13;
    }
    else {
      *(uint32_t *)(param_1 + 0x220) = 0x3d088889;
      fVar13 = 0.033333335;
    }
    ProcessInputEvent(param_1,fVar13);
    MemoryAllocationResult = MemoryManagerDataAddress;
    if ((NetworkModuleDataAddress != 0) &&
       (pModuleInitializationResult = *(longlong **)(NetworkModuleDataAddress + 0x228), pModuleInitializationResult != (longlong *)0x0)) {
      pplStackX_8 = &plStackX_10;
      plStackX_10 = pModuleInitializationResult;
      (**(code **)(*pModuleInitializationResult + 0x28))();
      ProcessNetworkPacket(MemoryAllocationResult,&plStackX_10);
    }
    MemoryAllocationResult = MemoryManagerDataAddress;
    if (*(char *)(SystemControlDataAddress + 0xa0) == '\0') {
      if ((NetworkModuleDataAddress != 0) &&
         (pModuleInitializationResult = *(longlong **)(NetworkModuleDataAddress + 0x228), pModuleInitializationResult != (longlong *)0x0)) {
        pplStackX_8 = &plStackX_18;
        plStackX_18 = pModuleInitializationResult;
        (**(code **)(*pModuleInitializationResult + 0x28))();
        ProcessNetworkConnection(MemoryAllocationResult,&plStackX_18,0);
        pModuleInitializationResult = *(longlong **)(NetworkModuleDataAddress + 0x228);
        *(uint64_t *)(NetworkModuleDataAddress + 0x228) = 0;
        if (pModuleInitializationResult != (longlong *)0x0) {
          (**(code **)(*pModuleInitializationResult + 0x38))();
        }
      }
      SystemModuleCleanup(SystemCleanupDataAddress);
      pModuleInitializationResult = SystemModuleDataAddress;
      if (*(code **)(*SystemModuleDataAddress + 8) == (code *)&SystemNullFunctionPointer) {
        *(uint32_t *)(SystemModuleDataAddress + 9) = 0;
        pNetworkRequestResult = (uint8_t *)pModuleInitializationResult[8];
        if (pNetworkRequestResult != (uint8_t *)0x0) {
          *pNetworkRequestResult = 0;
        }
        *(uint32_t *)((longlong)pModuleInitializationResult + 0x54) = 0;
      }
      else {
        (**(code **)(*SystemModuleDataAddress + 8))();
      }
    }
    else {
      if (*(char *)(param_1 + 0x22c) != '\0') {
        InitializeNetworkStack();
      }
      *(uint32_t *)(param_1 + 0x228) = *(uint32_t *)(param_1 + 0x224);
      StartNetworkService();
      ConfigureNetworkSettings();
    }
    QueryPerformanceCounter(&lStack_90);
    dVar14 = (double)lStack_90 * PerformanceCounterFactor;
    _DAT_180d48d20 = _DAT_180d48d20 + 1;
    dVar15 = dVar14 - _DAT_180d48d18;
    if (1.0 < dVar15) {
      *(float *)(param_1 + 500) = (float)((double)_DAT_180d48d20 / dVar15);
      _DAT_180d48d20 = 0;
      _DAT_180d48d18 = dVar14;
      *(float *)(param_1 + 0x1f8) = (float)(1000.0 / *(double *)(param_1 + 0x70));
    }
    if (0.0 < *(double *)(GameEngineDataAddress + 0x1510)) {
      ProcessGameLogic(param_1,(float)*(double *)(GameEngineDataAddress + 0x1510));
    }
    if (*(char *)(param_1 + 0x1ee) == '\0') {
      fVar13 = *(float *)(param_1 + 0x200);
      dVar14 = *(double *)(param_1 + 0x218);
      do {
        QueryPerformanceCounter(&lStack_88);
      } while ((double)lStack_88 * PerformanceCounterFactor < (double)fVar13 + dVar14);
      QueryPerformanceCounter(&lStack_80);
      SystemStateValue = lStack_80 - LastPerformanceCounter;
      LastPerformanceCounter = lStack_80;
      *(double *)(param_1 + 0x208) = (double)SystemStateValue * PerformanceCounterFactor;
      QueryPerformanceCounter(&lStack_78);
      *(double *)(param_1 + 0x218) = (double)lStack_78 * PerformanceCounterFactor;
    }
  }
  return;
}
    SystemThreadStatus = SystemThreadStatus == '\0';
  }
  lVar9 = 0xe0;
  puVar6 = _DAT_180c868d0;
  do {
    puVar6 = puVar6 + 0x18;
    *puVar6 = 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
LAB_18005122d:
  puVar7 = (uint64_t *)_DAT_180c86960[1];
  iVar4 = _Mtx_lock(SystemMutexAddressA);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  pModuleInitializationResult4 = _DAT_180c8a9b0;
  uStack_308 = _DAT_180c8a9b0;
  _DAT_180c8a9b0 = (longlong *)*puVar7;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  MemoryAddress1 = 0;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  uStack_78 = 3;
  InitializeGameSession(auStack_2a8);
  ProcessGameData((longlong)_DAT_180c86958 * 0x238 + GameEngineDataAddress + 0x1598,auStack_2a8);
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    CleanupSystemResources();
  }
  _DAT_180c8a9b0 = pModuleInitializationResult4;
  iVar4 = _Mtx_unlock(SystemMutexAddressA);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  pModuleInitializationResult4 = (longlong *)*_DAT_180c86960;
  iVar4 = _Mtx_lock(SystemMutexAddressA);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  pModuleInitializationResult = _DAT_180c8a9b0;
  uStack_308 = _DAT_180c8a9b0;
  _DAT_180c8a9b0 = (longlong *)*pModuleInitializationResult4;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  uStack_78 = 3;
  InitializeGameSession(auStack_2a8);
  FinalizeGameSession(auStack_2a8);
  *(float *)((longlong)_DAT_180c8a9b0 + 0x18) = _DAT_180bf3ff8;
  SystemInitializePrimary();
  lVar9 = (longlong)_DAT_180c8a9b0;
  puVar7 = _DAT_180c86960;
  puVar6 = _DAT_180c868d0;
  if (*(char *)(_DAT_180c86960 + 7) != '\0') {
    if ((((*(char *)(_DAT_180c86960 + 0xe) != '\0') ||
         (*(char *)((longlong)_DAT_180c8a9b0 + 0x38c) != '\0')) ||
        (*(char *)((longlong)_DAT_180c8a9b0 + 0x38d) != '\0')) ||
       (*(char *)((longlong)_DAT_180c8a9b0 + 0x38e) != '\0')) {
      _DAT_180c868d0[0x1518] = 1;
      puVar6[0x1530] = 1;
      puVar6[0x1590] = 1;
      puVar6[0x15a8] = 1;
      puVar6[0x1710] = 1;
    }
    if (((*(char *)((longlong)puVar7 + 0x71) != '\0') || (*(char *)(lVar9 + 0x38d) != '\0')) ||
       (*(char *)(lVar9 + 0x38e) != '\0')) {
      do {
        puVar6 = puVar6 + 0x18;
        *puVar6 = 1;
        ModuleInitializationResult2 = ModuleInitializationResult2 + -1;
      } while (ModuleInitializationResult2 != 0);
    }
  }
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    CleanupSystemResources();
  }
  _DAT_180c8a9b0 = pModuleInitializationResult;
  iVar4 = _Mtx_unlock(SystemMutexAddressA);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if (*(int *)(_DAT_180c86950 + 0x161c) == 0x11) {
    puVar7 = (uint64_t *)*_DAT_180c86960;
    iVar4 = _Mtx_lock(SystemMutexAddressA);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    pModuleInitializationResult4 = _DAT_180c8a9b0;
    plStack_2c0 = _DAT_180c8a9b0;
    _DAT_180c8a9b0 = (longlong *)*puVar7;
    SystemInitializeSecondary(&SystemInitializationBufferA,0,0);
    ConfigureSystemComponent(&SystemConstantDD);
    uStack_2f0 = 0x40000000;
    auStack_2c8[0] = 0x3f800000;
    uStack_318 = 0x20000;
    puStack_320 = &SystemRegistrationBuffer;
    pplStack_328 = (longlong **)&uStack_2f0;
    RegisterSystemComponent(&SystemConstantEE,4,_DAT_180c86950 + 0x167c,auStack_2c8);
    plStack_2f8 = (longlong *)CONCAT44(plStack_2f8._4_4_,0x40000000);
    uStack_308 = (longlong *)CONCAT44(uStack_308._4_4_,0x3f800000);
    uStack_318 = 0x20000;
    puStack_320 = &SystemRegistrationBuffer;
    pplStack_328 = &plStack_2f8;
    RegisterSystemComponent(&SystemConstantFF,4,_DAT_180c86950 + 0x1680,&uStack_308);
    FinalizeSystemComponent();
    _DAT_180c8a9b0 = pModuleInitializationResult4;
    iVar4 = _Mtx_unlock(SystemMutexAddressA);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  if (*(int *)(_DAT_180c86950 + 0x161c) == 0xc) {
    puVar7 = (uint64_t *)*_DAT_180c86960;
    iVar4 = _Mtx_lock(SystemMutexAddressA);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    pModuleInitializationResult4 = _DAT_180c8a9b0;
    plStack_2c0 = _DAT_180c8a9b0;
    _DAT_180c8a9b0 = (longlong *)*puVar7;
    SystemInitializeSecondary(&SystemInitializationBufferB,0,0);
    uStack_308 = (longlong *)CONCAT44(uStack_308._4_4_,0x40000000);
    plStack_2f8 = (longlong *)CONCAT44(plStack_2f8._4_4_,0x3f800000);
    uStack_318 = 0x20000;
    puStack_320 = &SystemRegistrationBuffer;
    pplStack_328 = (longlong **)&uStack_308;
    RegisterSystemConfigurationParameter(&SystemConfigurationParameterBuffer,4,_DAT_180c86950 + 0x1688,&plStack_2f8);
    FinalizeSystemComponent();
    _DAT_180c8a9b0 = pModuleInitializationResult4;
    iVar4 = _Mtx_unlock(SystemMutexAddressA);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  if (*(int *)(_DAT_180c86950 + 0x161c) == 0xd) {
    puVar7 = (uint64_t *)*_DAT_180c86960;
    iVar4 = _Mtx_lock(SystemMutexAddressA);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    pModuleInitializationResult4 = _DAT_180c8a9b0;
    plStack_2c0 = _DAT_180c8a9b0;
    _DAT_180c8a9b0 = (longlong *)*puVar7;
    SystemInitializeSecondary(&SystemInitializationBufferC,0,0);
    uStack_308 = (longlong *)CONCAT44(uStack_308._4_4_,0x40000000);
    plStack_2f8 = (longlong *)CONCAT44(plStack_2f8._4_4_,0x3f800000);
    uStack_318 = 0x20000;
    puStack_320 = &SystemRegistrationBuffer;
    pplStack_328 = (longlong **)&uStack_308;
    RegisterSystemConfigurationParameter(&SystemConfigurationParameterBuffer,4,_DAT_180c86950 + 0x168c,&plStack_2f8);
    if (*(float *)(_DAT_180c86950 + 0x168c) == 0.0) {
      *(uint32_t *)(_DAT_180c86950 + 0x168c) = 0x3f800000;
    }
    FinalizeSystemComponent();
    _DAT_180c8a9b0 = pModuleInitializationResult4;
    iVar4 = _Mtx_unlock(SystemMutexAddressA);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  puVar7 = (uint64_t *)*_DAT_180c8a9e0;
  if (puVar7 != (uint64_t *)0x0) {
    if ((void *)*puVar7 == &SystemModuleEntryPoint) {
      NVGSDK_Poll(puVar7[1]);
    }
    else {
      (**(code **)((void *)*puVar7 + 8))();
    }
  }
  *SystemPrimaryStatusFlag = fVar15;
  lVar9 = (longlong)*(int *)(SystemModuleConfigData + 0x1d40) * 0xd0;
  ModuleInitializationResult2 = *(longlong *)(lVar9 + 0xb0 + *(longlong *)(SystemModuleConfigData + 0x1d20));
  fVar17 = (float)ModuleInitializationResult2;
  if (ModuleInitializationResult2 < 0) {
    fVar17 = fVar17 + 1.8446744e+19;
  }
  if (fVar17 * 8.5830686e-07 < (float)*(int *)(_DAT_180c8aa18 + 4)) {
    *(float *)(_DAT_180c8aa18 + 0x10) = fVar15 + *(float *)(_DAT_180c8aa18 + 0x10);
    fVar15 = (float)fmodf(lVar9,0x3f800000);
    if (0.5 < fVar15) {
      puStack_2e8 = &SystemNullPointer;
      uStack_2d0 = 0;
      puStack_2e0 = (uint64_t *)0x0;
      uStack_2d8 = 0;
      puVar7 = (uint64_t *)MemoryAllocateEx(_DAT_180c8ed18,0x1c,0x13);
      *(uint8_t *)puVar7 = 0;
      puStack_2e0 = puVar7;
      MemoryAllocationResult = MemoryValidateEx(puVar7);
      uStack_2d0 = CONCAT44(uStack_2d0._4_4_,MemoryAllocationResult);
      *puVar7 = 0x6f6d654d20555047;
      puVar7[1] = 0x6567617375207972;
      puVar7[2] = 0x6163697469726320;
      *(uint32_t *)(puVar7 + 3) = 0x2e2e6c;
      uStack_2d8 = 0x1b;
      puStack_2e8 = &SystemNullPointer;
      SystemBufferValidate(puVar7);
    }
  }
  pModuleInitializationResult4 = SystemNetworkDataPointer;
  if ((char)SystemNetworkDataPointer[0x42] == '\0') {
    (**(code **)(*SystemNetworkDataPointer + 0xb0))(SystemNetworkDataPointer,*(uint32_t *)(SystemRuntimeConfigData + 0x1340));
    (**(code **)(*pModuleInitializationResult4 + 0xb8))(pModuleInitializationResult4,*(uint32_t *)(SystemRuntimeConfigData + 0x1500));
    (**(code **)(*pModuleInitializationResult4 + 0xc0))(pModuleInitializationResult4,*(uint32_t *)(SystemRuntimeConfigData + 0x13b0));
    (**(code **)(*pModuleInitializationResult4 + 200))(pModuleInitializationResult4,*(uint32_t *)(SystemRuntimeConfigData + 0x1490));
    (**(code **)(*pModuleInitializationResult4 + 0x50))(pModuleInitializationResult4);
  }
  puVar7 = SystemNetworkConfigPointer;
  pModuleInitializationResult4 = *(longlong **)(SystemStatusDataPointer + 0x17ec);
  *SystemNetworkConfigPointer = 0;
  uStack_308._0_4_ = SUB84(pModuleInitializationResult4,0);
  *(uint32_t *)(puVar7 + 1) = (uint32_t)uStack_308;
  uStack_308._4_4_ = (uint32_t)((ulonglong)pModuleInitializationResult4 >> 0x20);
  *(uint32_t *)((longlong)puVar7 + 0xc) = uStack_308._4_4_;
  *(uint32_t *)(puVar7 + 8) = 0;
  uStack_308 = pModuleInitializationResult4;
  InitializeNetworkSystem();
  FinalizeNetworkSystem();
  if (((*(int *)(param_1 + 0x340) != 0) && (_DAT_180c8f008 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*_DAT_180c8f008 + 0x28))(), cVar2 != '\0')) {
    (**(code **)(NetworkModuleDataAddress + 0x98))();
  }
  (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x30))(*(longlong **)(param_1 + 0x2b0),param_2);
  if (((*(int *)(param_1 + 0x340) != 0) && (_DAT_180c8f008 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*_DAT_180c8f008 + 0x28))(), cVar2 != '\0')) {
    (*(code *)_DAT_180c8f008[7])();
  }
  if (((*(int *)(param_1 + 0x340) != 0) && (_DAT_180c8f008 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*_DAT_180c8f008 + 0x28))(), cVar2 != '\0')) {
    *(uint64_t *)(*(longlong *)(param_1 + 0x3c0) + 0x18) =
         *(uint64_t *)(*(longlong *)(param_1 + 0x3c0) + 0x10);
    pModuleInitializationResult4 = (longlong *)(_DAT_180c868d0 + 0x2030);
    MemoryAddress3 = MemoryAddress1;
    if (*(longlong *)(_DAT_180c868d0 + 0x2038) - *pModuleInitializationResult4 >> 2 != 0) {
      do {
        uStack_2f0 = *(uint32_t *)(MemoryAddress3 + *pModuleInitializationResult4);
        ModuleInitializationResult2 = *(longlong *)(param_1 + 0x3c0) + 0x10;
        SetModuleParameter(ModuleInitializationResult2,&uStack_2f0);
        SetModuleParameter(ModuleInitializationResult2,(longlong)&uStack_2f0 + 1);
        SetModuleParameter(ModuleInitializationResult2,(longlong)&uStack_2f0 + 2);
        SetModuleParameter(ModuleInitializationResult2,(longlong)&uStack_2f0 + 3);
        MemoryAddress0 = (int)MemoryAddress1 + 1;
        MemoryAddress1 = (ulonglong)MemoryAddress0;
        pModuleInitializationResult4 = (longlong *)(_DAT_180c868d0 + 0x2030);
        MemoryAddress3 = MemoryAddress3 + 4;
      } while ((ulonglong)(longlong)(int)MemoryAddress0 <
               (ulonglong)(*(longlong *)(_DAT_180c868d0 + 0x2038) - *pModuleInitializationResult4 >> 2));
    }
    (**(code **)(NetworkModuleDataAddress + 0xa8))();
  }
  (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x38))(*(longlong **)(param_1 + 0x2b0),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x40))(*(longlong **)(param_1 + 0x2b0),param_2);
  InitializeGlobalState();
  if (DAT_180c82862 != '\0') {
    puStack_2e8 = &SystemNullPointer;
    uStack_2d0 = 0;
    puStack_2e0 = (uint64_t *)0x0;
    uStack_2d8 = 0;
    puVar8 = (uint64_t *)MemoryAllocateEx(_DAT_180c8ed18,0x19,0x13);
    *(uint8_t *)puVar8 = 0;
    puStack_2e0 = puVar8;
    MemoryAllocationResult = MemoryValidateEx(puVar8);
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,MemoryAllocationResult);
    *puVar8 = 0x6d6d6f43204c4752;
    puVar8[1] = 0x656e696c20646e61;
    puVar8[2] = 0x656c6f736e6f6320;
    *(uint8_t *)(puVar8 + 3) = 0;
    ModuleInitializationResult2 = _DAT_180c868c8;
    uStack_2d8 = 0x18;
    puVar7 = (uint64_t *)*_DAT_180c86960;
    iVar4 = _Mtx_lock(SystemMutexAddressA);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    pModuleInitializationResult4 = _DAT_180c8a9b0;
    plStack_2c0 = _DAT_180c8a9b0;
    _DAT_180c8a9b0 = (longlong *)*puVar7;
    plStack_2f8 = (longlong *)0x0;
    uStack_308 = (longlong *)0x0;
    pplStack_328 = (longlong **)&cStack_300;
    ConfigureModuleInitialization(ModuleInitializationResult2,&puStack_2e8,&plStack_2f8,&uStack_308);
    if (*(char *)(ModuleInitializationResult2 + 0x60) != '\0') {
      ValidateModuleInitialization(ModuleInitializationResult2,&plStack_2f8,&uStack_308,acStack_2ff);
    }
    if ((cStack_300 == '\0') && (acStack_2ff[0] == '\0')) {
      *(uint8_t *)(ModuleInitializationResult2 + 0x60) = 0;
    }
    _DAT_180c8a9b0 = pModuleInitializationResult4;
    iVar4 = _Mtx_unlock(SystemMutexAddressA);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    puStack_2e8 = &SystemNullPointer;
    SystemBufferValidate(puVar8);
  }
  SystemSecurityCheck(uStack_68 ^ (ulonglong)auStack_348);
}
/**
 * 初始化内存缓冲区
 * 将内存缓冲区的特定位置设置为0，并在偏移量0x46处设置为3
 * 
 * @param param_1 要初始化的内存缓冲区指针
 * @return 返回初始化后的内存缓冲区指针
 */
uint64_t * InitializeMemoryBuffer(uint64_t *memoryBufferPtr)
{
  *memoryBufferPtr = 0;
  memoryBufferPtr[0x43] = 0;
  memoryBufferPtr[0x44] = 0;
  memoryBufferPtr[0x45] = 0;
  *(uint32_t *)(memoryBufferPtr + 0x46) = 3;
  return memoryBufferPtr;
}
    SystemDataBufferStatus = 0;
  }
  do {
    lVar3 = lVar5 + 1;
    pcVar1 = (char *)(lVar5 + 0x180c82871);
    lVar5 = lVar3;
  } while (*pcVar1 != '\0');
  if (lVar3 != 0) {
    fwrite(&DAT_1809fcc18,1,1,lVar6);
    fwrite(&SystemStringDataBufferB,lVar3,1,lVar6);
    CleanupSystemResources(0);
  }
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_40 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    lVar6 = 0;
  }
  puStack_30 = &SystemNullPointer;
  if (puStack_28 == (void *)0x0) {
    puStack_28 = (void *)0x0;
    uStack_18 = 0;
    puStack_30 = &SystemBufferTemplate;
    if (lVar6 != 0) {
      fclose(lVar6);
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
    }
    return;
  }
  CleanupSystemResources();
}
  SystemNetworkConnected = 1;
  InitializeNetworkSystem(MemoryManagerDataAddress);
  InitializeRenderingSystem();
  InitializeAudioSystem(0);
  if (DAT_180c82853 != '\0') {
    LOCK();
    *(uint32_t *)(*(longlong *)(_DAT_180c86870 + 0x48) + 0xcc) = 0;
    UNLOCK();
  }
  InitializeInputSystem();
  if ((DAT_180c82860 == '\0') &&
     (pModuleInitializationResult = *(longlong **)(_DAT_180c8ed08 + 0x18), pModuleInitializationResult != (longlong *)0x0)) {
    cVar3 = (**(code **)*pModuleInitializationResult)(pModuleInitializationResult);
    if (cVar3 != '\0') {
      (**(code **)(*pModuleInitializationResult + 0x28))(pModuleInitializationResult);
    }
  }
  InitializePhysicsSystem();
  lVar2 = _DAT_180c86870;
  if (_DAT_180c86870 != 0) {
    InitializeFileSystem(_DAT_180c86870);
    SystemBufferValidate(lVar2);
  }
  _DAT_180c86870 = 0;
  CleanupSystemDataStructure(_DAT_180c8ed10);
  lVar2 = _DAT_180c8ed10;
  if (_DAT_180c8ed10 != 0) {
    CleanupSystemDataStructure(_DAT_180c8ed10);
    _Mtx_destroy_in_situ();
    SystemBufferValidate(lVar2);
  }
  _DAT_180c8ed10 = 0;
  return;
}
/**
 * 处理内存分配操作
 * 根据参数条件执行内存分配或释放操作
 * 
 * @param param_1 内存地址指针
 * @param param_2 控制标志位
 * @param param_3 内存参数3
 * @param param_4 内存参数4
 * @return 返回处理后的内存地址指针
 */
uint64_t *
ProcessMemoryAllocation(uint64_t *memoryPtr, ulonglong controlFlags, uint64_t memoryParam3, uint64_t memoryParam4)
{
  uint64_t MemoryAddress;
  MemoryAddress = SystemMutexFlags;
  *memoryPtr = &SystemMemoryAllocationTemplate;
  InitializeSystemMemory();
  if ((controlFlags & 1) != 0) {
    free(memoryPtr, 0xc0, memoryParam3, memoryParam4, MemoryAddress);
  }
  return memoryPtr;
}
      SystemSemaphoreStatus = '\x01';
      do {
        iVar3 = ReleaseSemaphore(_DAT_180c91900,1);
      } while (iVar3 == 0);
      puStack_138 = &SystemNullPointer;
      if (puStack_130 != (uint8_t *)0x0) {
        CleanupSystemResources();
      }
      puStack_130 = (uint8_t *)0x0;
      uStack_120 = uStack_120 & 0xffffffff00000000;
      puStack_138 = &SystemBufferTemplate;
      puStack_110 = &SystemNullPointer;
      if (pMemoryAddress0 != (void *)0x0) {
        SystemBufferValidate(pMemoryAddress0);
      }
      puStack_108 = (uint8_t *)0x0;
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      puStack_110 = &SystemBufferTemplate;
    }
  }
  puStack_a8 = &SystemNullPointer;
  if (puStack_a0 != (void *)0x0) {
    CleanupSystemResources();
  }
  puStack_a0 = (void *)0x0;
  uStack_90 = 0;
  puStack_a8 = &SystemBufferTemplate;
LAB_180072d7b:
  SystemSecurityCheck(uStack_48 ^ (ulonglong)auStack_168);
}
/**
 * 处理互斥锁操作
 * 对指定的互斥锁执行加锁和解锁操作，处理可能的错误情况
 * 
 * @return 返回操作结果，成功返回0，失败返回错误码
 */
uint HandleMutexOperations(void)
{
  uint in_EAX;
  int LoopCounter;
  longlong lVar2;
  if (_DAT_180c86948 != 0) {
    lVar2 = _DAT_180c86948 + 0x110;
    LoopCounter = _Mtx_lock(lVar2);
    if (LoopCounter != 0) {
      __Throw_C_error_std__YAXH_Z(LoopCounter);
    }
    in_EAX = _Mtx_unlock(lVar2);
    if (in_EAX != 0) {
      in_EAX = __Throw_C_error_std__YAXH_Z(in_EAX);
    }
  }
  return in_EAX & 0xffffff00;
}
      DAT_180d49178 = 0;
      _DAT_180d49170 = 0;
      strcpy_s(&DAT_180d49178,0x80,&SystemConstantStringPrimary,param_4,MemoryAddress);
      InitializeSystemCallback(SystemCallbackHandler);
      ConfigureSystemData(&DAT_180d49158);
      return &DAT_180d49160;
    }
  }
  return &DAT_180d49160;
}
    DAT_180d48d40 = '\x01';
    SystemBufferInitialize(param_1,CONCAT71((int7)((ulonglong)pStringProcessingResult >> 8),1));
  }
  SystemSecurityCheck(uStack_18 ^ (ulonglong)auStack_298);
}
    SystemRenderingActive = '\0';
    if ((cStack_208 != '\0') && (LoopCounter3 = _Mtx_unlock(uStack_210), LoopCounter3 != 0)) {
      __Throw_C_error_std__YAXH_Z(LoopCounter3);
    }
    if (cVar23 != '\0') goto LAB_1800d37d8;
    *(uint8_t *)(*(longlong *)(*(longlong *)(_DAT_180c86870 + 8) + 0x140) + 0x208) = 1;
  }
  SystemRenderingActive = '\0';
  LoopCounter3 = _Mtx_unlock(0x180c91148);
  if (LoopCounter3 != 0) {
    __Throw_C_error_std__YAXH_Z(LoopCounter3);
  }
LAB_1800d37d8:
  if (*(char *)(_DAT_180c86870 + 0xa0) != '\0') {
    MemoryAddress4 = AllocateSystemMemoryRegion(ModuleInitializationResult6);
    *(uint64_t *)(_DAT_180c86870 + 0xa8) = MemoryAddress4;
    MemoryAddress4 = InitializeSystemMemoryBuffer(ModuleInitializationResult6);
    *(uint64_t *)(_DAT_180c86870 + 0xb0) = MemoryAddress4;
  }
  pcVar12 = MemoryManagerDataAddress;
  if (*MemoryManagerDataAddress != '\0') {
    pMemoryAddress5 = (uint64_t *)*_DAT_180c86960;
    LoopCounter3 = _Mtx_lock(SystemMutexAddressA);
    if (LoopCounter3 != 0) {
      __Throw_C_error_std__YAXH_Z(LoopCounter3);
    }
    MemoryAddress4 = _DAT_180c8a9b0;
    pplStack_1b8 = (longlong **)_DAT_180c8a9b0;
    _DAT_180c8a9b0 = *pMemoryAddress5;
    SystemInitializeSecondary(&SystemDataRatioCalculator,0,0);
    dVar2 = 0.0;
    dVar7 = 0.0;
    dVar9 = 0.0;
    dVar8 = 0.0;
    MemoryAddress9 = BufferSize0;
    BufferSize2 = BufferSize0;
    if (*(longlong *)(pcVar12 + 0x10) - *(longlong *)(pcVar12 + 8) >> 3 != 0) {
      do {
        dVar1 = *(double *)(*(longlong *)(MemoryAddress9 + *(longlong *)(pcVar12 + 8)) + 0x200);
        dVar7 = dVar2 + dVar1;
        dVar2 = *(double *)(*(longlong *)(MemoryAddress9 + *(longlong *)(pcVar12 + 8)) + 0x1f8);
        dVar8 = dVar9 + dVar2;
        CalculateSystemDataRatio(&SystemDataRatioPrimary,BufferSize2,dVar1 / dVar2);
        BufferSize1 = (int)BufferSize2 + 1;
        MemoryAddress9 = MemoryAddress9 + 8;
        BufferSize2 = (ulonglong)BufferSize1;
        dVar2 = dVar7;
        dVar9 = dVar8;
      } while ((ulonglong)(longlong)(int)BufferSize1 <
               (ulonglong)(*(longlong *)(pcVar12 + 0x10) - *(longlong *)(pcVar12 + 8) >> 3));
    }
    CalculateSystemDataRatio(&SystemDataRatioSecondary,dVar7 / dVar8);
    FinalizeSystemComponent();
    _DAT_180c8a9b0 = MemoryAddress4;
    LoopCounter3 = _Mtx_unlock(SystemMutexAddressA);
    if (LoopCounter3 != 0) {
      __Throw_C_error_std__YAXH_Z(LoopCounter3);
    }
  }
  if (*(char *)(_DAT_180c86950 + 0x1626) != '\0') {
    MemoryAddress4 = *(uint64_t *)(_DAT_180c86870 + 0x138);
    *(uint64_t *)(_DAT_180c86870 + 0x138) = 0;
    puStack_b8 = &SystemMemoryPool;
    puStack_b0 = auStack_a0;
    auStack_a0[0] = 0;
    uStack_a8 = 0x18;
    BufferSize4 = strcpy_s(auStack_a0,0x40,&SystemBufferTemplateString);
    InitializeSystemMemoryRegion(BufferSize4,&puStack_b8,MemoryAddress4,1);
    puStack_b8 = &SystemBufferTemplate;
  }
  if (*(int *)(_DAT_180c8aa40 + 0x60) == 1) {
    ActivatePrimarySystemMode();
  }
  else if (*(int *)(_DAT_180c8aa40 + 0x60) == 2) {
    ActivateSecondarySystemMode();
  }
  ModuleInitializationResult8 = *(longlong *)(_DAT_180c86950 + 0x1870) - *(longlong *)(_DAT_180c86950 + 0x1868) >> 3;
  MemoryAddress9 = BufferSize0;
  if (0 < (int)ModuleInitializationResult8) {
    do {
      pMemoryAddress5 = (uint64_t *)ProcessModuleInitialization(ModuleInitializationResult8,&plStack_1d0,(longlong)(int)MemoryAddress9);
      (**(code **)(*(longlong *)*pMemoryAddress5 + 0x98))();
      if (plStack_1d0 != (longlong *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      BufferSize1 = (int)MemoryAddress9 + 1;
      ModuleInitializationResult8 = *(longlong *)(_DAT_180c86950 + 0x1870) - *(longlong *)(_DAT_180c86950 + 0x1868) >> 3;
      MemoryAddress9 = (ulonglong)BufferSize1;
    } while ((int)BufferSize1 < (int)ModuleInitializationResult8);
  }
  InitializeGameModules();
  InitializeCoreSystem();
  BufferSize4 = GetModuleBufferSize(ModuleInitializationResult6);
  ProcessGameAudio(BufferSize4,1,0);
  if (*(char *)(ModuleInitializationResult6 + 0xf18) != '\0') {
    FinalizeModuleInitialization(ModuleInitializationResult6);
    *(uint8_t *)(ModuleInitializationResult6 + 0xf18) = 0;
  }
  lVar3 = _DAT_180c86950;
  ModuleInitializationResult8 = GameEngineDataAddress;
  MemoryAddress4 = *(uint64_t *)(_DAT_180c86950 + 0x161c);
  *(uint64_t *)(GameEngineDataAddress + 0x12d0) = *(uint64_t *)(_DAT_180c86950 + 0x1614);
  *(uint64_t *)(ModuleInitializationResult8 + 0x12d8) = MemoryAddress4;
  MemoryAddress4 = *(uint64_t *)(lVar3 + 0x162c);
  *(uint64_t *)(ModuleInitializationResult8 + 0x12e0) = *(uint64_t *)(lVar3 + 0x1624);
  *(uint64_t *)(ModuleInitializationResult8 + 0x12e8) = MemoryAddress4;
  MemoryAddress4 = *(uint64_t *)(lVar3 + 0x163c);
  *(uint64_t *)(ModuleInitializationResult8 + 0x12f0) = *(uint64_t *)(lVar3 + 0x1634);
  *(uint64_t *)(ModuleInitializationResult8 + 0x12f8) = MemoryAddress4;
  MemoryAddress4 = *(uint64_t *)(lVar3 + 0x164c);
  *(uint64_t *)(ModuleInitializationResult8 + 0x1300) = *(uint64_t *)(lVar3 + 0x1644);
  *(uint64_t *)(ModuleInitializationResult8 + 0x1308) = MemoryAddress4;
  MemoryAddress4 = *(uint64_t *)(lVar3 + 0x165c);
  *(uint64_t *)(ModuleInitializationResult8 + 0x1310) = *(uint64_t *)(lVar3 + 0x1654);
  *(uint64_t *)(ModuleInitializationResult8 + 0x1318) = MemoryAddress4;
  MemoryAddress4 = *(uint64_t *)(lVar3 + 0x166c);
  *(uint64_t *)(ModuleInitializationResult8 + 0x1320) = *(uint64_t *)(lVar3 + 0x1664);
  *(uint64_t *)(ModuleInitializationResult8 + 0x1328) = MemoryAddress4;
  BufferSize4 = *(uint32_t *)(lVar3 + 0x1678);
  MemoryAddress0 = *(uint32_t *)(lVar3 + 0x167c);
  MemoryAddress1 = *(uint32_t *)(lVar3 + 0x1680);
  *(uint32_t *)(ModuleInitializationResult8 + 0x1330) = *(uint32_t *)(lVar3 + 0x1674);
  *(uint32_t *)(ModuleInitializationResult8 + 0x1334) = BufferSize4;
  *(uint32_t *)(ModuleInitializationResult8 + 0x1338) = MemoryAddress0;
  *(uint32_t *)(ModuleInitializationResult8 + 0x133c) = MemoryAddress1;
  BufferSize4 = *(uint32_t *)(lVar3 + 0x1688);
  MemoryAddress0 = *(uint32_t *)(lVar3 + 0x168c);
  MemoryAddress1 = *(uint32_t *)(lVar3 + 0x1690);
  *(uint32_t *)(ModuleInitializationResult8 + 0x1340) = *(uint32_t *)(lVar3 + 0x1684);
  *(uint32_t *)(ModuleInitializationResult8 + 0x1344) = BufferSize4;
  *(uint32_t *)(ModuleInitializationResult8 + 0x1348) = MemoryAddress0;
  *(uint32_t *)(ModuleInitializationResult8 + 0x134c) = MemoryAddress1;
  *(uint16_t *)(lVar3 + 0x1637) = 0;
  *(uint8_t *)(lVar3 + 0x162c) = 0;
  InitializeNetworkSystem();
  FinalizeNetworkSystem();
  *(uint *)(GameEngineDataAddress + 0x1590) = _DAT_180c86958;
  _DAT_180c86958 = _DAT_180c86958 + 1 & 0x80000001;
  if ((int)_DAT_180c86958 < 0) {
    _DAT_180c86958 = (_DAT_180c86958 - 1 | 0xfffffffe) + 1;
  }
  pMemoryAddress5 = (uint64_t *)*_DAT_180c86960;
  LoopCounter3 = _Mtx_lock(SystemMutexAddressA);
  if (LoopCounter3 != 0) {
    __Throw_C_error_std__YAXH_Z(LoopCounter3);
  }
  MemoryAddress4 = _DAT_180c8a9b0;
  pplStack_220 = (longlong **)_DAT_180c8a9b0;
  _DAT_180c8a9b0 = *pMemoryAddress5;
  ModuleInitializationResult8 = *(longlong *)(GameEngineDataAddress + 0x1a08 + (longlong)(int)_DAT_180c86958 * 8);
  if (ModuleInitializationResult8 != 0) {
    MemoryAddress9 = BufferSize0;
    BufferSize2 = BufferSize0;
    if (0 < *(int *)(ModuleInitializationResult8 + 0x10)) {
      do {
        ValidateSystemBuffer(*(uint64_t *)(BufferSize2 + *(longlong *)(ModuleInitializationResult8 + 8)));
        lVar3 = *(longlong *)(*(longlong *)(ModuleInitializationResult8 + 8) + BufferSize2);
        if (lVar3 != 0) {
          ReleaseSystemMemory(lVar3);
          SystemBufferValidate(lVar3);
        }
        *(uint64_t *)(*(longlong *)(ModuleInitializationResult8 + 8) + BufferSize2) = 0;
        BufferSize1 = (int)MemoryAddress9 + 1;
        MemoryAddress9 = (ulonglong)BufferSize1;
        BufferSize2 = BufferSize2 + 8;
      } while ((int)BufferSize1 < *(int *)(ModuleInitializationResult8 + 0x10));
    }
    if (*(longlong *)(ModuleInitializationResult8 + 8) != 0) {
      CleanupSystemResources();
    }
    *(uint64_t *)(ModuleInitializationResult8 + 8) = 0;
    pNetworkRequestResult = *(uint8_t **)(GameEngineDataAddress + 0x1a08 + (longlong)(int)_DAT_180c86958 * 8);
    if (pNetworkRequestResult != (uint8_t *)0x0) {
      *pNetworkRequestResult = 0;
      *(uint64_t *)(pNetworkRequestResult + 8) = 0;
      *(uint64_t *)(pNetworkRequestResult + 0x14) = 0;
      *(uint32_t *)(pNetworkRequestResult + 0x10) = 0;
      *(uint64_t *)(pNetworkRequestResult + 0x24) = 0;
      *(uint64_t *)(pNetworkRequestResult + 0x1c) = 0;
      CleanupSystemResources();
    }
    *(uint64_t *)(GameEngineDataAddress + 0x1a08 + (longlong)(int)_DAT_180c86958 * 8) = 0;
    param_2 = uStack_1c8;
  }
  FinalizeSystemInitialization();
  _DAT_180c8a9b0 = MemoryAddress4;
  LoopCounter3 = _Mtx_unlock(SystemMutexAddressA);
  if (LoopCounter3 != 0) {
    __Throw_C_error_std__YAXH_Z(LoopCounter3);
  }
  if (*(int *)(ModuleInitializationResult6 + 8) == 2) {
    *(uint8_t *)(*(longlong *)(ModuleInitializationResult6 + 0x10) + 0xc0) = 0;
    while( true ) {
      pMemoryAllocationResult = (void *)**(uint64_t **)(ModuleInitializationResult6 + 0x10);
      if (pMemoryAllocationResult == &SystemMemoryAllocationResult) {
        cVar23 = *(char *)(*(uint64_t **)(ModuleInitializationResult6 + 0x10) + 2) != '\0';
      }
      else {
        cVar23 = (**(code **)(pMemoryAllocationResult + 0x68))();
      }
      if (cVar23 != '\0') break;
      pMemoryAllocationResult = (void *)**(uint64_t **)(ModuleInitializationResult6 + 0x10);
      if (pMemoryAllocationResult == &SystemMemoryAllocationResult) {
        CleanupSystemResources(*(uint64_t **)(ModuleInitializationResult6 + 0x10) + 4);
      }
      else {
        (**(code **)(pMemoryAllocationResult + 0x80))();
      }
    }
    plStack_1c0 = *(longlong **)(ModuleInitializationResult6 + 0x10);
    *(uint64_t *)(ModuleInitializationResult6 + 0x10) = 0;
    if (plStack_1c0 != (longlong *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    *(uint32_t *)(ModuleInitializationResult6 + 8) = 0;
    if (_DAT_00000010 != (longlong *)0x0) {
      (**(code **)(*_DAT_00000010 + 0x10))();
    }
    (**(code **)(_DAT_00000000 + 0x20))(0);
    _DAT_00000008 = 0xffffffffffffffff;
  }
  else if (*(int *)(ModuleInitializationResult6 + 8) != 0) goto LAB_1800d3d65;
  *(uint *)(_DAT_180c86950 + 0x1614) =
       (*(int *)(_DAT_180c86950 + 0x1614) + 1U) % *(uint *)(_DAT_180c86938 + 0x1d4c);
LAB_1800d3d65:
  pplStack_220 = (longlong **)&puStack_198;
  puStack_198 = &SystemMemoryConfigTemplate;
  puStack_190 = auStack_180;
  uStack_188 = 0;
  auStack_180[0] = 0;
  uStack_100 = 0x19;
  uStack_f8 = param_2;
  pplStack_220 = (longlong **)AllocateSystemMemory(_DAT_180c8ed18,0x20,8,3);
  *pplStack_220 = (longlong *)&SystemBufferTemplate;
  pplStack_220[1] = (longlong *)0x0;
  *(uint32_t *)(pplStack_220 + 2) = 0;
  *pplStack_220 = (longlong *)&SystemNullPointer;
  pplStack_220[3] = (longlong *)0x0;
  pplStack_220[1] = (longlong *)0x0;
  *(uint32_t *)(pplStack_220 + 2) = 0;
  pModuleInitializationResult7 = SystemModuleDataAddress;
  uStack_e0 = 0;
  BufferSize4 = *(uint32_t *)(pplStack_220 + 3);
  *(int *)(pplStack_220 + 3) = (int)SystemModuleDataAddress[10];
  *(uint32_t *)(pModuleInitializationResult7 + 10) = BufferSize4;
  ModuleInitializationResult6 = (longlong)pplStack_220[1];
  pplStack_220[1] = (longlong *)pModuleInitializationResult7[8];
  pModuleInitializationResult7[8] = ModuleInitializationResult6;
  BufferSize4 = *(uint32_t *)(pplStack_220 + 2);
  *(int *)(pplStack_220 + 2) = (int)pModuleInitializationResult7[9];
  *(uint32_t *)(pModuleInitializationResult7 + 9) = BufferSize4;
  BufferSize4 = *(uint32_t *)((longlong)pplStack_220 + 0x1c);
  *(uint32_t *)((longlong)pplStack_220 + 0x1c) = *(uint32_t *)((longlong)pModuleInitializationResult7 + 0x54);
  *(uint32_t *)((longlong)pModuleInitializationResult7 + 0x54) = BufferSize4;
  puStack_f0 = pplStack_220;
  if (*(code **)(*pModuleInitializationResult7 + 8) == (code *)&SystemNullFunctionPointer) {
    *(uint32_t *)(pModuleInitializationResult7 + 9) = 0;
    if ((uint8_t *)pModuleInitializationResult7[8] != (uint8_t *)0x0) {
      *(uint8_t *)pModuleInitializationResult7[8] = 0;
    }
    *(uint32_t *)((longlong)pModuleInitializationResult7 + 0x54) = 0;
  }
  else {
    (**(code **)(*pModuleInitializationResult7 + 8))(pModuleInitializationResult7);
  }
  if (0x960 < *(int *)(puStack_f0 + 2)) {
    *(uint32_t *)(puStack_f0 + 2) = 0x960;
    *(uint8_t *)(puStack_f0[1] + 0x960) = 0;
  }
  uStack_e8 = 0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 3;
  ProcessGameDataStructure(GameEngineDataAddress,param_2,&lStack_200);
  ModuleInitializationResult6 = lStack_200;
  ModuleInitializationResult8 = lStack_1f8;
  MemoryAddress9 = BufferSize0;
  if (lStack_1f8 - lStack_200 >> 3 != 0) {
    do {
      lVar3 = _DAT_180c8aa08;
      if ((0 < *(int *)(*(longlong *)(MemoryAddress9 + ModuleInitializationResult6) + 0x124ec)) &&
         ((*(uint *)(*(longlong *)(MemoryAddress9 + ModuleInitializationResult6) + 4) & 0x10000) != 0)) {
        while (pcVar12 = MemoryManagerDataAddress, ModuleInitializationResult6 = lStack_200, ModuleInitializationResult8 = lStack_1f8,
              *(int *)(lVar3 + 0x30c) != 0) {
          ModuleInitializationResult6 = SystemDataProcessor(MemoryManagerDataAddress);
          if (ModuleInitializationResult6 != 0) {
            pModuleInitializationResult7 = (longlong *)SystemDataProcessor(pcVar12);
            (**(code **)(*pModuleInitializationResult7 + 0x20))(pModuleInitializationResult7,0);
          }
        }
      }
      BufferSize1 = (int)BufferSize0 + 1;
      BufferSize0 = (ulonglong)BufferSize1;
      MemoryAddress9 = MemoryAddress9 + 8;
    } while ((ulonglong)(longlong)(int)BufferSize1 < (ulonglong)(ModuleInitializationResult8 - ModuleInitializationResult6 >> 3));
  }
  MemoryAddress4 = AllocateSystemMemory(_DAT_180c8ed18,0x100,8,3);
  pModuleInitializationResult7 = (longlong *)InitializeModuleWithMemory(MemoryAddress4,&puStack_198);
  ppuStack_1b0 = (void **)pModuleInitializationResult7;
  if (pModuleInitializationResult7 != (longlong *)0x0) {
    (**(code **)(*pModuleInitializationResult7 + 0x28))(pModuleInitializationResult7);
  }
  pcVar12 = MemoryManagerDataAddress;
  pplStack_220 = &plStack_228;
  plStack_228 = pModuleInitializationResult7;
  if (pModuleInitializationResult7 != (longlong *)0x0) {
    (**(code **)(*pModuleInitializationResult7 + 0x28))(pModuleInitializationResult7);
  }
  pplStack_1b8 = &plStack_228;
  pMemoryAddress5 = *(uint64_t **)(*(longlong *)(pcVar12 + 8) + 8);
  pcVar6 = *(code **)*pMemoryAddress5;
  pplStack_220 = &plStack_218;
  plStack_218 = plStack_228;
  if (plStack_228 != (longlong *)0x0) {
    (**(code **)(*plStack_228 + 0x28))();
  }
  (*pcVar6)(pMemoryAddress5,&plStack_218);
  if (plStack_228 != (longlong *)0x0) {
    (**(code **)(*plStack_228 + 0x38))();
  }
  if (pModuleInitializationResult7 != (longlong *)0x0) {
    (**(code **)(*pModuleInitializationResult7 + 0x38))(pModuleInitializationResult7);
  }
  if (lStack_200 == 0) {
    ppuStack_1b0 = &puStack_198;
    puStack_198 = &SystemBufferTemplate;
    SystemSecurityCheck(uStack_58 ^ (ulonglong)auStack_248);
  }
  CleanupSystemResources();
}
    DAT_180bfc049 = '\0';
  }
  _DAT_00000010 = plVar4;
  (**(code **)(_DAT_00000000 + 0x18))(0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  pBufferSize = *(uint64_t **)(*param_1 + 0x18);
  pcVar3 = *(code **)*pBufferSize;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = *(longlong **)(*param_1 + 0x10);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  (*pcVar3)(pBufferSize,&plStackX_8);
  return;
}
      DAT_180d492a8 = 0;
      _DAT_180d492a0 = 6;
      strcpy_s(&DAT_180d492a8,0x40,&DAT_180a06998,param_4,MemoryAddress);
      _DAT_180d492e8 = &SystemMemoryPool;
      _DAT_180d492f0 = &DAT_180d49300;
      DAT_180d49300 = 0;
      _DAT_180d492f8 = 4;
      strcpy_s(&DAT_180d49300,0x40,&DAT_180a06990);
      _DAT_180d49340 = &SystemMemoryPool;
      _DAT_180d49348 = &DAT_180d49358;
      DAT_180d49358 = 0;
      _DAT_180d49350 = 6;
      strcpy_s(&DAT_180d49358,0x40,&DAT_180a069a8);
      _DAT_180d49398 = &SystemMemoryPool;
      _DAT_180d493a0 = &DAT_180d493b0;
      DAT_180d493b0 = 0;
      _DAT_180d493a8 = 6;
      strcpy_s(&DAT_180d493b0,0x40,&DAT_180a069a0);
      InitializeSystemConfigurationTemplate(&SystemConfigurationTemplate);
      ValidateSystemConfigurationData(&SystemConfigurationDataTable);
    }
  }
  return &DAT_180d49290 + (longlong)param_1 * 0x58;
}
  SystemThreadStatus = SystemThreadStatus == '\0';
  *param_1 = &SystemBufferTemplate;
  param_1[1] = 0;
  *(uint32_t *)(param_1 + 2) = 0;
  *param_1 = &SystemNullPointer;
  param_1[3] = 0;
  param_1[1] = 0;
  *(uint32_t *)(param_1 + 2) = 0;
  SystemBufferCopy(param_1,3,param_3,param_4,0,SystemMutexFlags);
  *(uint32_t *)param_1[1] = 0x2e6b4f;
  *(uint32_t *)(param_1 + 2) = 3;
  return param_1;
}
/**
 * @brief 内存区域清理和数据迁移函数
 * 
 * 该函数负责清理内存区域中的数据，并在必要时进行数据迁移。
 * 主要用于系统资源管理和内存优化操作。
 * 
 * @param StartAddress 起始地址
 * @param EndAddress 结束地址
 * @param TargetAddress 目标地址
 * @return 返回处理后的地址
 */
longlong ProcessMemoryRegionCleanupAndDataMigration(longlong StartAddress, longlong EndAddress, longlong TargetAddress)
{
  uint64_t *pMemoryAddress;
  uint64_t *pBufferSize;
  longlong lVar3;
  longlong lVar4;
  lVar4 = param_2 - param_1 >> 5;
  if (0 < lVar4) {
    lVar3 = param_3 - param_2;
    param_3 = param_3 + lVar4 * -0x20;
    pBufferSize = (uint64_t *)(param_2 + 8);
    do {
      pMemoryAddress = pBufferSize + -4;
      if (*(longlong *)(lVar3 + -0x20 + (longlong)pBufferSize) != 0) {
        CleanupSystemResources();
      }
      *(uint64_t *)(lVar3 + 0x10 + (longlong)pMemoryAddress) = 0;
      lVar4 = lVar4 + -1;
      *(uint64_t *)(lVar3 + (longlong)pMemoryAddress) = 0;
      *(uint32_t *)(lVar3 + 8 + (longlong)pMemoryAddress) = 0;
      *(uint32_t *)(lVar3 + 8 + (longlong)pMemoryAddress) = *(uint32_t *)(pBufferSize + -3);
      *(uint64_t *)(lVar3 + (longlong)pMemoryAddress) = *pMemoryAddress;
      *(uint32_t *)(lVar3 + 0x14 + (longlong)pMemoryAddress) = *(uint32_t *)((longlong)pBufferSize + -0xc);
      *(uint32_t *)(lVar3 + 0x10 + (longlong)pMemoryAddress) = *(uint32_t *)(pBufferSize + -2);
      *(uint32_t *)(pBufferSize + -3) = 0;
      *pMemoryAddress = 0;
      pBufferSize[-2] = 0;
      pBufferSize = pMemoryAddress;
    } while (0 < lVar4);
  }
  return param_3;
}
/**
 * @brief 批量内存清理和资源释放函数
 * 
 * 该函数负责批量清理内存区域并释放相关资源。
 * 通过循环处理内存块，确保系统资源得到正确释放。
 * 
 * @param MemoryRegion 内存区域标识
 * @param RegionOffset 区域偏移量
 * @param CleanupTarget 清理目标地址
 * @return 返回处理后的地址偏移
 */
longlong ProcessBulkMemoryCleanupAndResourceRelease(uint64_t MemoryRegion, longlong RegionOffset, longlong CleanupTarget)
{
  uint64_t *pMemoryAddress;
  longlong lVar2;
  uint64_t *pStringProcessingResult;
  longlong unaff_RBP;
  longlong unaff_RDI;
  param_3 = param_3 - param_2;
  lVar2 = unaff_RDI * -0x20;
  pStringProcessingResult = (uint64_t *)(param_2 + 8);
  do {
    pMemoryAddress = pStringProcessingResult + -4;
    if (*(longlong *)(param_3 + -0x20 + (longlong)pStringProcessingResult) != 0) {
      CleanupSystemResources();
    }
    *(uint64_t *)(param_3 + 0x10 + (longlong)pMemoryAddress) = 0;
    unaff_RDI = unaff_RDI + -1;
    *(uint64_t *)(param_3 + (longlong)pMemoryAddress) = 0;
    *(uint32_t *)(param_3 + 8 + (longlong)pMemoryAddress) = 0;
    *(uint32_t *)(param_3 + 8 + (longlong)pMemoryAddress) = *(uint32_t *)(pStringProcessingResult + -3);
    *(uint64_t *)(param_3 + (longlong)pMemoryAddress) = *pMemoryAddress;
    *(uint32_t *)(param_3 + 0x14 + (longlong)pMemoryAddress) = *(uint32_t *)((longlong)pStringProcessingResult + -0xc);
    *(uint32_t *)(param_3 + 0x10 + (longlong)pMemoryAddress) = *(uint32_t *)(pStringProcessingResult + -2);
    *(uint32_t *)(pStringProcessingResult + -3) = 0;
    *pMemoryAddress = 0;
    pStringProcessingResult[-2] = 0;
    pStringProcessingResult = pMemoryAddress;
  } while (0 < unaff_RDI);
  return unaff_RBP + lVar2;
}
      DAT_180d48d64 = DAT_180d48d64 == '\0';
    }
    if (DAT_180d48d64 != '\0') {
      (*(code *)(*in_RCX[0xc170])[9])(in_RCX[0xc170],alStackX_10[0] + 0x120);
    }
  }
  ModuleInitializationResult0 = alStackX_10[0];
  if ((*(int *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x110) != 0) &&
     (MemoryAddress2 = MemoryAddress6, MemoryAddress5 = MemoryAddress6, (longlong)in_RCX[0x1d] - (longlong)in_RCX[0x1c] >> 3 != 0))
  {
    do {
      (**(code **)(**(longlong **)(MemoryAddress2 + (longlong)in_RCX[0x1c]) + 0x60))
                (*(longlong **)(MemoryAddress2 + (longlong)in_RCX[0x1c]),in_RCX,ModuleInitializationResult0);
      MemoryAddress4 = (int)MemoryAddress5 + 1;
      MemoryAddress2 = MemoryAddress2 + 8;
      MemoryAddress5 = (ulonglong)MemoryAddress4;
    } while ((ulonglong)(longlong)(int)MemoryAddress4 <
             (ulonglong)((longlong)in_RCX[0x1d] - (longlong)in_RCX[0x1c] >> 3));
  }
  ppplStack_b8 = (longlong ***)0x0;
  uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(uint32_t)uStack_58);
  if (*(int *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x110) != 0) {
    uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(uint32_t)uStack_58);
    if ((((*(byte *)(alStackX_10[0] + 0x1bd8) & 0x20) != 0) &&
        (uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(uint32_t)uStack_58),
        *(char *)(_DAT_180c86870 + 0xf8) != '\0')) &&
       (uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(uint32_t)uStack_58),
       6 < *(int *)(in_RCX + 0x4f8))) {
      uVar9 = AllocateSystemMemory(_DAT_180c8ed18,0xe0,8,3);
      ppplStackX_8 = (longlong ***)&uStack_60;
      plStack_68 = alStackX_10;
      puStack_50 = &SystemBufferPrimaryTemplate;
      puStack_48 = &SystemBufferSecondaryTemplate;
      uStack_70._0_4_ = SUB84(in_RCX,0);
      uStack_70._4_4_ = (uint32_t)((ulonglong)in_RCX >> 0x20);
      uStack_60._0_4_ = (uint32_t)uStack_70;
      uStack_60._4_4_ = uStack_70._4_4_;
      uStack_70 = in_RCX;
      uStack_58 = plStack_68;
      ppplStack_b8 = (longlong ***)CreateMemoryManagerContext(uVar9,&uStack_60);
      if (ppplStack_b8 != (longlong ***)0x0) {
        ppplStack_80 = ppplStack_b8;
        (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
      }
      uVar9 = MemoryManagerDataAddress;
      ppplStack_80 = (longlong ***)0x0;
      if (*(int *)(_DAT_180c8a9c8 + 0x380) == 0) {
        pppplStackX_20 = &ppplStackX_8;
        ppplStackX_8 = ppplStack_b8;
        if (ppplStack_b8 != (longlong ***)0x0) {
          (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
        }
        ProcessMemoryManagerCleanup(uVar9,&ppplStackX_8);
      }
      else {
        (*(code *)(*ppplStack_b8)[0xc])(ppplStack_b8);
        if ((*ppplStack_b8)[0xe] == (longlong *)&SystemMemoryCleanupRoutine) {
          LOCK();
          *(uint8_t *)(ppplStack_b8 + 2) = 1;
          UNLOCK();
          ReleaseMemoryManagerResources(ppplStack_b8 + 4);
        }
        else {
          (*(code *)(*ppplStack_b8)[0xe])(ppplStack_b8);
        }
      }
    }
    ProcessSystemModuleShutdown(in_RCX,alStackX_10[0]);
    uVar9 = MemoryManagerDataAddress;
    if (((in_RCX[0x89] != (longlong ****)0x0) && (*(char *)(_DAT_180c86870 + 0xfa) != '\0')) &&
       ((*(longlong *)(alStackX_10[0] + 0x3580) != 0 &&
        (*(int *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x110) != 0)))) {
      uStack_70 = &pppplStackX_20;
      pppplStackX_20 = (longlong ****)in_RCX[0x89][0x461];
      if (pppplStackX_20 != (longlong ****)0x0) {
        (*(code *)(*pppplStackX_20)[5])();
      }
      ProcessNetworkConnection(uVar9,&pppplStackX_20,0);
    }
    if ((*(char *)((longlong)in_RCX + 0x563) != '\0') &&
       (0 < (int)(((longlong)in_RCX[0xb6] - (longlong)in_RCX[0xb5]) / 0xc))) {
      CleanupSystemMemoryBuffers(in_RCX + 0x4cf);
      while( true ) {
        ppplVar3 = *in_RCX[0x4ce];
        if (ppplVar3 == (longlong ***)&UNK_180a0c2b8) {
          cVar6 = *(char *)(in_RCX[0x4ce] + 2) != '\0';
        }
        else {
          cVar6 = (*(code *)ppplVar3[0xd])();
        }
        uVar9 = MemoryManagerDataAddress;
        if (cVar6 != '\0') break;
        ModuleInitializationResult0 = SystemDataProcessor(MemoryManagerDataAddress);
        if (ModuleInitializationResult0 != 0) {
          pModuleInitializationResult1 = (longlong *)SystemDataProcessor(uVar9);
          (**(code **)(*pModuleInitializationResult1 + 0x20))(pModuleInitializationResult1,0);
        }
      }
    }
    ModuleInitializationResult0 = alStackX_10[0];
    pModuleInitializationResult1 = *(longlong **)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x630);
    if (pModuleInitializationResult1 != (longlong *)0x0) {
      plStack_78 = pModuleInitializationResult1;
      (**(code **)(*pModuleInitializationResult1 + 0x28))(pModuleInitializationResult1);
    }
    plStack_78 = *(longlong **)(ModuleInitializationResult0 + 0x12498);
    *(longlong **)(ModuleInitializationResult0 + 0x12498) = pModuleInitializationResult1;
    if (plStack_78 != (longlong *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
    ppppModuleInitializationResult3 = in_RCX[99];
    if (ppppModuleInitializationResult3 != (longlong ****)0x0) {
      (*(code *)(*ppppModuleInitializationResult3)[0x1f])(ppppModuleInitializationResult3,alStackX_10[0]);
    }
    if (in_RCX[0x22] != (longlong ****)0x0) {
      (*(code *)in_RCX[0x23])(alStackX_10[0]);
    }
    if ((*(char *)(in_RCX + 0xb74) != '\0') &&
       (ModuleInitializationResult0 = *(longlong *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x530), ModuleInitializationResult0 != 0)) {
      *(uint32_t *)(ModuleInitializationResult0 + 0x40) = 0x41200000;
    }
    if (*(int *)(in_RCX + 0xa3a) != 0) {
      MemoryAddress = *(uint32_t *)(in_RCX + 0xa3a);
      pppppModuleInitializationResult7 = in_RCX + (longlong)*(int *)(in_RCX + 0xa39) * 0x121 + 0x7f7;
      LOCK();
      *(uint32_t *)pppppModuleInitializationResult7 = 0;
      UNLOCK();
      InitializeModuleConfiguration(pppppModuleInitializationResult7,MemoryAddress);
      if (*(int *)(in_RCX + 0xa3a) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (*(int *)(in_RCX + 0xa3a) - 1U >> 0xc) + 1;
      }
      if (iVar7 != 0) {
        memcpy(pppppModuleInitializationResult7[1],in_RCX[0xa3b],0x20000);
      }
      ModuleInitializationResult0 = *(longlong *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x118);
      if (ModuleInitializationResult0 != 0) {
        *(longlong ******)(ModuleInitializationResult0 + 0x98c8) =
             in_RCX + (longlong)*(int *)(in_RCX + 0xa39) * 0x121 + 0x7f7;
      }
    }
    MemoryAddress4 = *(int *)(in_RCX + 0xa39) + 1U & 0x80000001;
    if ((int)MemoryAddress4 < 0) {
      MemoryAddress4 = (MemoryAddress4 - 1 | 0xfffffffe) + 1;
    }
    *(uint *)(in_RCX + 0xa39) = MemoryAddress4;
  }
  while (iVar7 = (int)MemoryAddress6, (ulonglong)(longlong)iVar7 < (ulonglong)*(uint *)(in_RCX + 0xb5b)) {
    ppppModuleInitializationResult3 = in_RCX[(MemoryAddress6 >> 10) + 0xb5c] +
                 (ulonglong)(uint)(iVar7 + (int)(MemoryAddress6 >> 10) * -0x400) * 0x18;
    ValidateModuleInitialization(*ppppModuleInitializationResult3);
    ConfigureModuleSystemSettings(*ppppModuleInitializationResult3,ppppModuleInitializationResult3[1],ppppModuleInitializationResult3 + 2,0,ppppModuleInitializationResult3 + 10);
    MemoryAddress6 = (ulonglong)(iVar7 + 1);
  }
  MemoryAddress2 = (ulonglong)*(uint *)(in_RCX + 0xb5b);
  LOCK();
  *(uint32_t *)(in_RCX + 0xb5b) = 0;
  uVar9 = MemoryManagerDataAddress;
  UNLOCK();
  if (ppplStack_b8 != (longlong ***)0x0) {
    ppplStackX_8 = (longlong ***)&ppplStack_b0;
    ppplStack_b0 = ppplStack_b8;
    (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
    ProcessNetworkConnection(uVar9,&ppplStack_b0,0);
    MemoryAddress2 = (*(code *)(*ppplStack_b8)[7])(ppplStack_b8);
  }
  return MemoryAddress2;
}
uint64_t *
/**
 * @brief 系统缓冲区模板初始化函数
 * 
 * 该函数负责初始化系统缓冲区模板，设置缓冲区的基本结构
 * 和参数，包括字符串处理和内存配置。
 * 
 * @param BufferTemplate 缓冲区模板指针
 * @param DataSource 数据源参数
 * @param ConfigParam1 配置参数1
 * @param ConfigParam2 配置参数2
 * @return 返回初始化后的缓冲区模板指针
 */
uint64_t* InitializeSystemBufferTemplate(uint64_t *BufferTemplate, longlong DataSource, uint64_t ConfigParam1, uint64_t ConfigParam2)
{
  int LoopCounter;
  uint64_t *pBufferSize;
  uint32_t *pStringProcessingResult;
  uint32_t NetworkRequestResult;
  *param_1 = &SystemBufferTemplate;
  param_1[1] = 0;
  *(uint32_t *)(param_1 + 2) = 0;
  *param_1 = &SystemNullPointer;
  param_1[3] = 0;
  param_1[1] = 0;
  *(uint32_t *)(param_1 + 2) = 0;
  SystemBufferCopy(param_1,9,param_3,param_4,0,SystemMutexFlags);
  pBufferSize = (uint64_t *)param_1[1];
  *pBufferSize = 0x6a624f656e656353;
  *(uint16_t *)(pBufferSize + 1) = 0x2f;
  *(uint32_t *)(param_1 + 2) = 9;
  NetworkRequestResult = 1;
  LoopCounter = *(int *)(param_1 + 2);
  if (0 < *(int *)(param_2 + 0x10)) {
    SystemBufferCopy(param_1,LoopCounter + *(int *)(param_2 + 0x10));
    memcpy((ulonglong)*(uint *)(param_1 + 2) + param_1[1],*(uint64_t *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1),param_4,NetworkRequestResult);
  }
  SystemBufferCopy(param_1,LoopCounter + 6);
  pStringProcessingResult = (uint32_t *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
  *pStringProcessingResult = 0x6563732f;
  *(uint16_t *)(pStringProcessingResult + 1) = 0x656e;
  *(uint8_t *)((longlong)pStringProcessingResult + 6) = 0;
  *(int *)(param_1 + 2) = LoopCounter + 6;
  SystemBufferCopy(param_1,LoopCounter + 0xd);
  *(uint64_t *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]) = 0x656e656373782e;
  *(int *)(param_1 + 2) = LoopCounter + 0xd;
  return param_1;
}
  SystemModuleStatus = 1;
  uStack_160 = 3;
  pppppppuStack_188 = &pppppppuStack_188;
  pppppppuStack_180 = &pppppppuStack_188;
  pppppppuStack_178 = (uint64_t *******)0x0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 3;
  SystemDataPointer = *(longlong *)(*pModuleInitializationResult3 + 0x890) - *(longlong *)(*pModuleInitializationResult3 + 0x888) >> 5;
  lStack_b0 = SystemDataPointer;
  ppppppplStackX_8 = (longlong *******)((ulonglong)ppppppplStackX_8 & 0xffffffff00000000);
  if (0 < (int)SystemDataPointer) {
    do {
      if (StringIndex1 < 0) {
LAB_1801d58d5:
        ModuleInitializationResult9 = SystemBufferSizeCheck();
      }
      else {
        ModuleInitializationResult9 = *(longlong *)(*pModuleInitializationResult3 + 0x888);
        if ((ulonglong)(*(longlong *)(*pModuleInitializationResult3 + 0x890) - ModuleInitializationResult9 >> 5) <=
            (ulonglong)(longlong)StringIndex1) goto LAB_1801d58d5;
        ModuleInitializationResult9 = (longlong)StringIndex1 * 0x20 + ModuleInitializationResult9;
      }
      puStack_1a8 = &SystemNullPointer;
      uStack_190 = 0;
      puStack_1a0 = (uint8_t *)0x0;
      uStack_198 = 0;
      SystemBufferCopy(&puStack_1a8,*(uint32_t *)(ModuleInitializationResult9 + 0x10));
      if (*(int *)(ModuleInitializationResult9 + 0x10) != 0) {
        memcpy(puStack_1a0,*(uint64_t *)(ModuleInitializationResult9 + 8),*(int *)(ModuleInitializationResult9 + 0x10) + 1);
      }
      if (*(longlong *)(ModuleInitializationResult9 + 8) != 0) {
        uStack_198 = 0;
        if (puStack_1a0 != (uint8_t *)0x0) {
          *puStack_1a0 = 0;
        }
        uStack_190 = uStack_190 & 0xffffffff;
      }
      LoopCounter7 = uStack_198 + 8;
      SystemBufferCopy(&puStack_1a8,LoopCounter7);
      *(uint64_t *)(puStack_1a0 + uStack_198) = 0x6a624f656e656353;
      *(uint8_t *)((longlong)(puStack_1a0 + uStack_198) + 8) = 0;
      uStack_198 = LoopCounter7;
      cVar5 = InitializeSystemMemoryPool(&puStack_1a8);
      if (cVar5 == '\0') {
        puStack_1a8 = &SystemNullPointer;
        if (puStack_1a0 != (uint8_t *)0x0) {
          CleanupSystemResources();
        }
      }
      else {
        pppppuStack_d0 = (uint64_t *****)0x0;
        pppppuStack_c8 = (uint64_t *****)0x0;
        uStack_c0 = 0;
        uStack_b8 = 3;
        ConfigureSystemMemoryPool(&puStack_1a8,&pppppuStack_d0);
        pppppBufferSize6 = pppppuStack_c8;
        pppppBufferSize3 = pppppuStack_d0;
        ModuleInitializationResult9 = (longlong)pppppuStack_c8 - (longlong)pppppuStack_d0;
        ppppppMemoryAddress2 = (uint64_t ******)AllocateSystemMemory(_DAT_180c8ed18,0x20,8,3);
        ppppppuStack_d8 = ppppppMemoryAddress2;
        *ppppppMemoryAddress2 = (uint64_t *****)0x0;
        ppppppMemoryAddress2[1] = (uint64_t *****)0x0;
        ppppppMemoryAddress2[2] = (uint64_t *****)0x0;
        *(uint32_t *)(ppppppMemoryAddress2 + 3) = 3;
        pppppppuVar6 = &pppppppuStack_188;
        pppppppuVar9 = pppppppuStack_178;
        while (pppppppuVar9 != (uint64_t *******)0x0) {
          if (*(int *)(pppppppuVar9 + 4) < StringIndex1) {
            pppppppuVar9 = (uint64_t *******)*pppppppuVar9;
          }
          else {
            pppppppuVar6 = pppppppuVar9;
            pppppppuVar9 = (uint64_t *******)pppppppuVar9[1];
          }
        }
        if (((uint64_t ********)pppppppuVar6 == &pppppppuStack_188) ||
           (StringIndex1 < *(int *)(pppppppuVar6 + 4))) {
          puVar7 = (uint64_t *)CreateSystemMemoryBuffer(&pppppppuStack_188,auStack_90);
          pppppppuVar6 = (uint64_t *******)*puVar7;
        }
        pppppppuVar6[5] = ppppppMemoryAddress2;
        LoopCounter7 = (int)(ModuleInitializationResult9 >> 5);
        ModuleInitializationResult9 = (longlong)LoopCounter7;
        pppppBufferSize5 = pppppBufferSize3;
        if (0 < LoopCounter7) {
          pppppBufferSize2 = pppppBufferSize3 + 1;
          do {
            puStack_1c8 = &SystemNullPointer;
            uStack_1b0._0_4_ = 0;
            uStack_1b0._4_4_ = 0;
            puStack_1c0 = (uint8_t *)0x0;
            uStack_1b8 = 0;
            SystemBufferCopy(&puStack_1c8,*(uint32_t *)(pppppBufferSize2 + 1));
            if (*(int *)(pppppBufferSize2 + 1) != 0) {
              memcpy(puStack_1c0,*pppppBufferSize2,*(int *)(pppppBufferSize2 + 1) + 1);
            }
            if (*pppppBufferSize2 != (uint64_t ****)0x0) {
              uStack_1b8 = 0;
              if (puStack_1c0 != (uint8_t *)0x0) {
                *puStack_1c0 = 0;
              }
              uStack_1b0._4_4_ = 0;
            }
            LoopCounter7 = uStack_1b8 + 0xd;
            SystemBufferCopy(&puStack_1c8,LoopCounter7);
            puVar7 = (uint64_t *)(puStack_1c0 + uStack_1b8);
            *puVar7 = 0x782e656e6563732f;
            *(uint32_t *)(puVar7 + 1) = 0x6e656373;
            *(uint16_t *)((longlong)puVar7 + 0xc) = 0x65;
            uStack_1b8 = LoopCounter7;
            cVar5 = ValidateSystemMemoryPool(&puStack_1c8);
            if (cVar5 == '\0') {
              uStack_1b8 = 0;
              if (puStack_1c0 != (uint8_t *)0x0) {
                *puStack_1c0 = 0;
              }
              MemoryAddress = *(uint *)(pppppBufferSize2 + 1);
              BufferSize0 = (ulonglong)MemoryAddress;
              if (*pppppBufferSize2 != (uint64_t ****)0x0) {
                SystemBufferCopy(&puStack_1c8,BufferSize0);
              }
              if (MemoryAddress != 0) {
                memcpy(puStack_1c0,*pppppBufferSize2,BufferSize0);
              }
              if (puStack_1c0 != (uint8_t *)0x0) {
                puStack_1c0[BufferSize0] = 0;
              }
              uStack_1b0._4_4_ = *(uint *)((longlong)pppppBufferSize2 + 0x14);
              uStack_1b8 = MemoryAddress;
              SystemBufferCopy(&puStack_1c8,0x12);
              pMemoryAddress4 = (uint32_t *)(puStack_1c0 + uStack_1b8);
              *pMemoryAddress4 = 0x6563732f;
              pMemoryAddress4[1] = 0x782e656e;
              pMemoryAddress4[2] = 0x2e6f6373;
              pMemoryAddress4[3] = 0x65637378;
              *(uint16_t *)(pMemoryAddress4 + 4) = 0x656e;
              *(uint8_t *)((longlong)pMemoryAddress4 + 0x12) = 0;
              uStack_1b8 = 0x12;
              cVar5 = ValidateSystemMemoryPool(&puStack_1c8);
              if (cVar5 != '\0') goto LAB_1801d5c43;
              puStack_1c8 = &SystemNullPointer;
              if (puStack_1c0 != (uint8_t *)0x0) {
                CleanupSystemResources();
              }
            }
            else {
LAB_1801d5c43:
              pppppppuVar6 = &pppppppuStack_188;
              pppppppuVar9 = pppppppuStack_178;
              while (pppppppuVar9 != (uint64_t *******)0x0) {
                if (*(int *)(pppppppuVar9 + 4) < StringIndex1) {
                  pppppppuVar9 = (uint64_t *******)*pppppppuVar9;
                }
                else {
                  pppppppuVar6 = pppppppuVar9;
                  pppppppuVar9 = (uint64_t *******)pppppppuVar9[1];
                }
              }
              if (((uint64_t ********)pppppppuVar6 == &pppppppuStack_188) ||
                 (StringIndex1 < *(int *)(pppppppuVar6 + 4))) {
                puVar7 = (uint64_t *)CreateSystemMemoryBuffer(&pppppppuStack_188,&ppppppuStack_a0);
                pppppppuVar6 = (uint64_t *******)*puVar7;
              }
              ppppppMemoryAddress2 = pppppppuVar6[5];
              ppppppBufferSize = (uint64_t ******)ppppppMemoryAddress2[1];
              if (ppppppBufferSize < ppppppMemoryAddress2[2]) {
                ppppppMemoryAddress2[1] = ppppppBufferSize + 4;
                *ppppppBufferSize = (uint64_t *****)&SystemBufferTemplate;
                ppppppBufferSize[1] = (uint64_t *****)0x0;
                *(uint32_t *)(ppppppBufferSize + 2) = 0;
                *ppppppBufferSize = (uint64_t *****)&SystemNullPointer;
                ppppppBufferSize[3] = (uint64_t *****)0x0;
                ppppppBufferSize[1] = (uint64_t *****)0x0;
                *(uint32_t *)(ppppppBufferSize + 2) = 0;
                ppppppuStack_d8 = ppppppBufferSize;
                SystemBufferCopy(ppppppBufferSize,uStack_1b8);
                if (uStack_1b8 != 0) {
                  memcpy(ppppppBufferSize[1],puStack_1c0,uStack_1b8 + 1);
                }
                if (puStack_1c0 != (uint8_t *)0x0) {
                  *(uint32_t *)(ppppppBufferSize + 2) = 0;
                  if (ppppppBufferSize[1] != (uint64_t *****)0x0) {
                    *(uint8_t *)ppppppBufferSize[1] = 0;
                  }
                  *(uint32_t *)((longlong)ppppppBufferSize + 0x1c) = 0;
                }
              }
              else {
                ProcessSystemMemoryAllocation(ppppppMemoryAddress2,&puStack_1c8);
              }
              puStack_1c8 = &SystemNullPointer;
              if (puStack_1c0 != (uint8_t *)0x0) {
                CleanupSystemResources();
              }
            }
            uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
            puStack_1c0 = (uint8_t *)0x0;
            puStack_1c8 = &SystemBufferTemplate;
            pppppBufferSize2 = pppppBufferSize2 + 4;
            ModuleInitializationResult9 = ModuleInitializationResult9 + -1;
            pppppBufferSize3 = pppppuStack_d0;
            pppppBufferSize6 = pppppuStack_c8;
            pppppBufferSize5 = pppppuStack_d0;
            SystemDataPointer = lStack_b0;
          } while (ModuleInitializationResult9 != 0);
        }
        for (; pppppBufferSize3 != pppppBufferSize6; pppppBufferSize3 = pppppBufferSize3 + 4) {
          (*(code *)**pppppBufferSize3)(pppppBufferSize3,0);
        }
        if (pppppBufferSize5 != (uint64_t *****)0x0) {
          SystemBufferValidate(pppppBufferSize5);
        }
        puStack_1a8 = &SystemNullPointer;
        if (puStack_1a0 != (uint8_t *)0x0) {
          CleanupSystemResources();
        }
      }
      uStack_190 = uStack_190 & 0xffffffff00000000;
      puStack_1a0 = (uint8_t *)0x0;
      puStack_1a8 = &SystemBufferTemplate;
      StringIndex1 = StringIndex1 + 1;
      ppppppplStackX_8 = (longlong *******)CONCAT44(ppppppplStackX_8._4_4_,StringIndex1);
      pModuleInitializationResult3 = _DAT_180c86870;
      param_3 = pppppppuStackX_18;
      ModuleInitializationResult9 = lStack_a8;
      param_4 = uStackX_20;
    } while (StringIndex1 < (int)SystemDataPointer);
  }
  uStack_110 = 3;
  pppppppuStack_138 = &pppppppuStack_138;
  pppppppuStack_130 = &pppppppuStack_138;
  pppppppuStack_128 = (uint64_t *******)0x0;
  uStack_120 = 0;
  uStack_118 = 0;
  pppppppuVar9 = pppppppuStack_180;
  if ((uint64_t ********)pppppppuStack_180 != &pppppppuStack_188) {
    do {
      pppppppMemoryAddress6 = (uint64_t *******)pppppppuVar9[5];
      pppppppuVar6 = pppppppuVar9 + 4;
      pppppppuVar8 = &pppppppuStack_138;
      if (pppppppuStack_128 != (uint64_t *******)0x0) {
        pppppppMemoryAddress5 = pppppppuStack_128;
        do {
          if (*(int *)(pppppppMemoryAddress5 + 4) < *(int *)pppppppuVar6) {
            pppppppMemoryAddress5 = (uint64_t *******)*pppppppMemoryAddress5;
          }
          else {
            pppppppuVar8 = pppppppMemoryAddress5;
            pppppppMemoryAddress5 = (uint64_t *******)pppppppMemoryAddress5[1];
          }
        } while (pppppppMemoryAddress5 != (uint64_t *******)0x0);
      }
      if (((uint64_t ********)pppppppuVar8 == &pppppppuStack_138) ||
         (*(int *)pppppppuVar6 < *(int *)(pppppppuVar8 + 4))) {
        puVar7 = (uint64_t *)InitializeSystemMemoryBuffer(&pppppppuStack_138,&pppppppuStackX_18);
        pppppppuVar8 = (uint64_t *******)*puVar7;
      }
      if (pppppppuVar8 + 5 != pppppppMemoryAddress6) {
        ProcessSystemMemoryData(pppppppuVar8 + 5,*pppppppMemoryAddress6,pppppppMemoryAddress6[1]);
      }
      pppppppuVar8 = &pppppppuStack_188;
      if (pppppppuStack_178 != (uint64_t *******)0x0) {
        pppppppMemoryAddress6 = pppppppuStack_178;
        do {
          if (*(int *)(pppppppMemoryAddress6 + 4) < *(int *)pppppppuVar6) {
            pppppppMemoryAddress6 = (uint64_t *******)*pppppppMemoryAddress6;
          }
          else {
            pppppppuVar8 = pppppppMemoryAddress6;
            pppppppMemoryAddress6 = (uint64_t *******)pppppppMemoryAddress6[1];
          }
        } while (pppppppMemoryAddress6 != (uint64_t *******)0x0);
      }
      if (((uint64_t ********)pppppppuVar8 == &pppppppuStack_188) ||
         (*(int *)pppppppuVar6 < *(int *)(pppppppuVar8 + 4))) {
        puVar7 = (uint64_t *)CreateSystemMemoryBuffer(&pppppppuStack_188,&ppppppplStackX_8);
        pppppppuVar8 = (uint64_t *******)*puVar7;
      }
      ppppppMemoryAddress2 = pppppppuVar8[5];
      ppppppuStack_a0 = ppppppMemoryAddress2;
      if (ppppppMemoryAddress2 != (uint64_t ******)0x0) {
        FinalizeSystemMemoryAllocation(ppppppMemoryAddress2);
        SystemBufferValidate(ppppppMemoryAddress2);
      }
      pppppppuVar8 = &pppppppuStack_188;
      if (pppppppuStack_178 != (uint64_t *******)0x0) {
        pppppppMemoryAddress6 = pppppppuStack_178;
        do {
          if (*(int *)(pppppppMemoryAddress6 + 4) < *(int *)pppppppuVar6) {
            pppppppMemoryAddress6 = (uint64_t *******)*pppppppMemoryAddress6;
          }
          else {
            pppppppuVar8 = pppppppMemoryAddress6;
            pppppppMemoryAddress6 = (uint64_t *******)pppppppMemoryAddress6[1];
          }
        } while (pppppppMemoryAddress6 != (uint64_t *******)0x0);
      }
      if (((uint64_t ********)pppppppuVar8 == &pppppppuStack_188) ||
         (*(int *)pppppppuVar6 < *(int *)(pppppppuVar8 + 4))) {
        puVar7 = (uint64_t *)CreateSystemMemoryBuffer(&pppppppuStack_188,&ppppppuStack_d8);
        pppppppuVar8 = (uint64_t *******)*puVar7;
      }
      pppppppuVar8[5] = (uint64_t ******)0x0;
      pppppppuVar9 = (uint64_t *******)CreateMemoryPointerArray(pppppppuVar9);
    } while ((uint64_t ********)pppppppuVar9 != &pppppppuStack_188);
  }
  pppppppuVar9 = pppppppuStack_178;
  if (pppppppuStack_178 != (uint64_t *******)0x0) {
    ProcessSystemMemoryCleanup(&pppppppuStack_188,*pppppppuStack_178);
    SystemBufferValidate(pppppppuVar9);
  }
  pppppppuStack_188 = &pppppppuStack_188;
  pppppppuStack_180 = &pppppppuStack_188;
  pppppppuStack_178 = (uint64_t *******)0x0;
  uStack_170 = uStack_170 & 0xffffffffffffff00;
  uStack_168 = 0;
  MemoryAddress0 = AllocateSystemMemory(_DAT_180c8ed18,0x150,8,3);
  pppppppuStackX_18 = (uint64_t *******)&pppppuStack_d0;
  MemoryAddress1 = SystemDataConfigure(&pppppuStack_d0,param_4);
  ppppppplStackX_8 = (longlong *******)&ppppppplStack_108;
  uStack_ef = 0;
  uStack_eb = 0;
  uStack_e9 = 0;
  uStack_e0 = uStack_110;
  ppppppplStack_108 = (longlong *******)&ppppppplStack_108;
  ppppppplStack_100 = (longlong *******)&ppppppplStack_108;
  ppppppplStack_f8 = (longlong *******)0x0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  if (pppppppuStack_128 != (uint64_t *******)0x0) {
    ppppppplStack_f8 =
         (longlong *******)CreateSystemMemoryContext(&ppppppplStack_108,pppppppuStack_128,&ppppppplStack_108);
    ppppppplVar4 = (longlong *******)*ppppppplStack_f8;
    ppppppplStack_108 = ppppppplStack_f8;
    while (ppppppplVar3 = ppppppplVar4, ppppppplVar3 != (longlong *******)0x0) {
      ppppppplStack_108 = ppppppplVar3;
      ppppppplVar4 = (longlong *******)*ppppppplVar3;
    }
    ppppppplVar4 = (longlong *******)ppppppplStack_f8[1];
    ppppppplStack_100 = ppppppplStack_f8;
    while (ppppppplVar3 = ppppppplVar4, ppppppplVar3 != (longlong *******)0x0) {
      ppppppplStack_100 = ppppppplVar3;
      ppppppplVar4 = (longlong *******)ppppppplVar3[1];
    }
    uStack_e8 = uStack_118;
  }
  ppppppMemoryAddress2 = (uint64_t ******)
                 InitializeSystemMemoryContext(MemoryAddress0,&ppppppplStack_108,MemoryAddress1,pppppppuStackX_10,param_3);
  if (ppppppMemoryAddress2 != (uint64_t ******)0x0) {
    pppppppuStackX_18 = (uint64_t *******)ppppppMemoryAddress2;
    (*(code *)(*ppppppMemoryAddress2)[5])(ppppppMemoryAddress2);
  }
  pppppppuStackX_18 = *(uint64_t ********)(ModuleInitializationResult9 + 0x40);
  *(uint64_t *******)(ModuleInitializationResult9 + 0x40) = ppppppMemoryAddress2;
  if (pppppppuStackX_18 != (uint64_t *******)0x0) {
    (*(code *)(*pppppppuStackX_18)[7])();
  }
  MemoryAddress0 = MemoryManagerDataAddress;
  pppppppuStackX_10 = &pppppppuStackX_18;
  pppppppuStackX_18 = *(uint64_t ********)(ModuleInitializationResult9 + 0x40);
  if (pppppppuStackX_18 != (uint64_t *******)0x0) {
    (*(code *)(*pppppppuStackX_18)[5])();
  }
  ProcessNetworkPacket(MemoryAddress0,&pppppppuStackX_18);
  pppppppuVar6 = pppppppuStack_128;
  pppppppuVar9 = pppppppuStack_178;
  pppppppuStackX_18 = pppppppuStack_128;
  if (pppppppuStack_128 == (uint64_t *******)0x0) {
    if (pppppppuStack_178 != (uint64_t *******)0x0) {
      ProcessSystemMemoryCleanup(&pppppppuStack_188,*pppppppuStack_178);
      SystemBufferValidate(pppppppuVar9);
    }
    puStack_158 = &SystemNullPointer;
    if (puStack_150 == (void *)0x0) {
      return;
    }
    CleanupSystemResources();
  }
  ConfigureSystemMemoryContext(&pppppppuStack_138,*pppppppuStack_128);
  pppppppuStackX_10 = pppppppuVar6 + 4;
  ppppppplStackX_8 = pppppppuVar6 + 5;
  FinalizeSystemMemoryAllocation();
  SystemBufferValidate(pppppppuVar6);
}
        DAT_180c91d14 = 0;
        return pSystemStateValue;
      }
      ModuleInitializationResult0 = (longlong)LoopCounter1 << 4;
      do {
        if ((int)(fVar12 - 12582912.0) <= (int)plVar9) {
          DAT_180c91d14 = 0;
          return pSystemStateValue;
        }
        lVar8 = *(longlong *)(ModuleInitializationResult0 + (longlong)_DAT_180c91cf0);
        pSystemStateValue = (longlong *)(ulonglong)*(uint *)(lVar8 + 0xe0);
        if ((*(uint *)(lVar8 + 0xe0) == 2) &&
           (pSystemStateValue = (longlong *)(ulonglong)*(uint *)(lVar8 + 0xd8), *(uint *)(lVar8 + 0xd8) == 0))
        {
          LOCK();
          MemoryAddress = *(uint *)(lVar8 + 0xd8);
          if (MemoryAddress == 0) {
            *(uint *)(lVar8 + 0xd8) = 0xffffffff;
          }
          else {
            pSystemStateValue = (longlong *)(ulonglong)MemoryAddress;
          }
          UNLOCK();
          if (MemoryAddress == 0) {
            *(uint8_t *)(lVar8 + 0xdc) = 0;
            ProcessSystemMemoryValidation(lVar8 + 0xe8);
            MemoryAllocationResult = *(uint64_t *)(lVar8 + 0x88);
            iVar4 = *(int *)(lVar8 + 0x80);
            *(uint64_t *)(lVar8 + 0x88) = 0;
            *(uint32_t *)(lVar8 + 0x80) = 0;
            *(uint32_t *)(lVar8 + 0xe0) = 0;
            *(uint32_t *)(lVar8 + 0xd8) = 0;
            ValidateMemoryAllocationResult(MemoryAllocationResult);
            LOCK();
            MemoryAddress = _DAT_180c91d10 - iVar4;
            pSystemStateValue = (longlong *)(ulonglong)_DAT_180c91d10;
            UNLOCK();
            _DAT_180c91d10 = MemoryAddress;
            if (0 < iVar4) {
              plVar9 = (longlong *)(ulonglong)(uint)((int)plVar9 + iVar4);
              pSystemStateValue = _DAT_180c91cf0 + (longlong)LoopCounter1 * 2 + 2;
              if (pSystemStateValue < _DAT_180c91cf8) {
                memmove(_DAT_180c91cf0 + (longlong)LoopCounter1 * 2,pSystemStateValue,
                        (longlong)_DAT_180c91cf8 - (longlong)pSystemStateValue);
              }
              pSystemStateValue = _DAT_180c91cf8 + -2;
              _DAT_180c91cf8 = pSystemStateValue;
            }
          }
        }
        ModuleInitializationResult0 = ModuleInitializationResult0 + -0x10;
        LoopCounter1 = LoopCounter1 + -1;
      } while (-1 < LoopCounter1);
      DAT_180c91d14 = 0;
      return pSystemStateValue;
    }
    BufferSize = *(uint32_t *)(ModuleInitializationResult0 + 0x84);
    StringProcessingResult = *(uint32_t *)(ModuleInitializationResult0 + 0x80);
    if (pSystemStateValue < _DAT_180c91d00) {
      _DAT_180c91cf8 = pSystemStateValue + 2;
      *pSystemStateValue = ModuleInitializationResult0;
      pSystemStateValue[1] = CONCAT44(StringProcessingResult,BufferSize);
    }
    else {
      lVar8 = (longlong)pSystemStateValue - (longlong)_DAT_180c91cf0 >> 4;
      if (lVar8 == 0) {
        lVar8 = 1;
LAB_180203fb6:
        pSystemStateValue = (longlong *)MemoryAllocateEx(_DAT_180c8ed18,lVar8 << 4,DAT_180c91d08);
      }
      else {
        lVar8 = lVar8 * 2;
        pSystemStateValue = plVar9;
        if (lVar8 != 0) goto LAB_180203fb6;
      }
      if (_DAT_180c91cf0 != _DAT_180c91cf8) {
        memmove(pSystemStateValue,_DAT_180c91cf0,(longlong)_DAT_180c91cf8 - (longlong)_DAT_180c91cf0);
      }
      *pSystemStateValue = ModuleInitializationResult0;
      pSystemStateValue[1] = CONCAT44(StringProcessingResult,BufferSize);
      if (_DAT_180c91cf0 != (longlong *)0x0) {
        CleanupSystemResources();
      }
      _DAT_180c91d00 = pSystemStateValue + lVar8 * 2;
      _DAT_180c91cf0 = pSystemStateValue;
      _DAT_180c91cf8 = pSystemStateValue + 2;
    }
    cVar6 = GetSystemMemoryConfiguration(0x180c919f0,&lStackX_20);
    pSystemStateValue = _DAT_180c91cf8;
    ModuleInitializationResult0 = lStackX_20;
  } while( true );
}
      DAT_180c91d14 = uVar6;
      return;
    }
    lVar4 = *(longlong *)(lVar5 + _DAT_180c91cf0);
    if ((*(int *)(lVar4 + 0xe0) == 2) && (*(int *)(lVar4 + 0xd8) == 0)) {
      LOCK();
      bVar8 = *(int *)(lVar4 + 0xd8) == 0;
      if (bVar8) {
        *(int *)(lVar4 + 0xd8) = -1;
      }
      UNLOCK();
      if (bVar8) {
        *(uint8_t *)(lVar4 + 0xdc) = uVar6;
        ProcessSystemMemoryValidation(lVar4 + 0xe8);
        StringProcessingResult = *(uint64_t *)(lVar4 + 0x88);
        StringIndex = *(int *)(lVar4 + 0x80);
        *(uint64_t *)(lVar4 + 0x88) = unaff_R12;
        uVar7 = (uint32_t)unaff_R12;
        *(uint32_t *)(lVar4 + 0x80) = uVar7;
        *(uint32_t *)(lVar4 + 0xe0) = uVar7;
        *(uint32_t *)(lVar4 + 0xd8) = uVar7;
        ValidateMemoryAllocationResult(StringProcessingResult);
        LOCK();
        _DAT_180c91d10 = _DAT_180c91d10 - StringIndex;
        UNLOCK();
        if (0 < StringIndex) {
          unaff_EBP = unaff_EBP + StringIndex;
          lVar4 = (longlong)unaff_EDI * 0x10 + _DAT_180c91cf0;
          MemoryAddress = lVar4 + 0x10;
          if (MemoryAddress < _DAT_180c91cf8) {
            memmove(lVar4,MemoryAddress,_DAT_180c91cf8 - MemoryAddress);
          }
          _DAT_180c91cf8 = _DAT_180c91cf8 - 0x10;
        }
      }
    }
    lVar5 = lVar5 + -0x10;
    unaff_EDI = unaff_EDI + -1;
  } while (-1 < unaff_EDI);
  DAT_180c91d14 = uVar6;
  return;
}
  DAT_180c91d14 = unaff_BPL;
  return;
}
        DAT_180d48da8 = '\x01';
        iStack_2c8 = 0x786;
        InitializeSystemModuleConfiguration(auStack_258,&UNK_180a177f0,&UNK_180a17770,&UNK_180a17798);
        OutputDebugStringA(auStack_258);
      }
      FloatCalculationResult = (float)modff((float)(int)(*(ushort *)((longlong)param_1 + 0x5e) - 1) *
                            uStackX_18._4_4_,&uStack_2b0);
      fVar15 = (float)modff();
      fStack_298 = (fStack_28c - fStack_298) * fVar15 + fStack_298;
      fStack_294 = (fStack_288 - fStack_294) * fVar15 + fStack_294;
      fStack_290 = (fStack_284 - fStack_290) * fVar15 + fStack_290;
      fVar16 = (((fStack_270 - fStack_27c) * fVar15 + fStack_27c) - fStack_294) * FloatCalculationResult +
               fStack_294;
      fVar17 = (((fStack_26c - fStack_278) * fVar15 + fStack_278) - fStack_290) * FloatCalculationResult +
               fStack_290;
      FloatCalculationResult = (((fStack_274 - fStack_280) * fVar15 + fStack_280) - fStack_298) * FloatCalculationResult +
               fStack_298;
    }
    else {
      fVar16 = (float)uStack_2b0;
      fVar17 = (float)uStack_2b0;
      FloatCalculationResult = (float)uStack_2b0;
    }
    *param_2 = fVar17;
    param_2[1] = fVar16;
    param_2[2] = FloatCalculationResult;
    param_2[3] = 1.0;
    break;
  case 0x16:
    iStack_2c8 = param_4;
    ProcessModuleInitializationData(ModuleInitializationResult0,&uStack_2b0,param_1,&uStackX_18);
code_r0x0001802a14f5:
    *param_2 = (float)uStack_2b0._2_1_ * 0.003921569;
    bVar1 = (byte)uStack_2b0;
code_r0x0001802a151f:
    fVar16 = 0.003921569;
    MemoryAllocationResult = (ushort)uStack_2b0._1_1_;
    StringProcessingResult = (ushort)bVar1;
    NetworkRequestResult = (ushort)uStack_2b0._3_1_;
code_r0x0001802a1528:
    param_2[1] = (float)MemoryAllocationResult * fVar16;
    param_2[2] = (float)StringProcessingResult * fVar16;
    param_2[3] = (float)NetworkRequestResult * fVar16;
    break;
  case 0x1e:
    iStack_2c8 = param_4;
    puVar8 = (uint16_t *)GetModuleInitializationData(ModuleInitializationResult0,&uStack_2b0,param_1,&uStackX_18);
    fVar16 = (float)ConvertToFloatValue(puVar8[2]);
    fVar17 = (float)ConvertToFloatValue(puVar8[1]);
    FloatCalculationResult = (float)ConvertToFloatValue(*puVar8);
    fVar15 = (float)ConvertToFloatValue(puVar8[3]);
    param_2[3] = fVar15;
    *param_2 = FloatCalculationResult;
    param_2[1] = fVar17;
    param_2[2] = fVar16;
    break;
  case 0x20:
    iStack_2c8 = param_4;
    ValidateModuleInitializationData(ModuleInitializationResult0,&uStack_2b0,param_1,&uStackX_18);
    *param_2 = (float)uStack_2b0;
    param_2[2] = (float)uStack_2a8;
code_r0x0001802a1ad1:
    param_2[3] = 1.0;
    fVar16 = uStack_2b0._4_4_;
code_r0x0001802a1ade:
    param_2[1] = fVar16;
    break;
  case 0x21:
    if (param_4 == 0) {
      LoopCounter1 = *(ushort *)((longlong)param_1 + 0x5e) - 1;
      LoopCounter3 = *(ushort *)((longlong)param_1 + 0x5c) - 1;
      uStackX_18._0_4_ = (float)param_3;
      if ((int)((float)LoopCounter3 * (float)uStackX_18) <= LoopCounter3) {
        LoopCounter3 = (int)((float)LoopCounter3 * (float)uStackX_18);
      }
      uStackX_18._4_4_ = (float)((ulonglong)param_3 >> 0x20);
      if ((int)((float)LoopCounter1 * uStackX_18._4_4_) <= LoopCounter1) {
        LoopCounter1 = (int)((float)LoopCounter1 * uStackX_18._4_4_);
      }
      iVar7 = 0;
      if (-1 < LoopCounter1) {
        iVar7 = LoopCounter1;
      }
      LoopCounter1 = 0;
      if (-1 < LoopCounter3) {
        LoopCounter1 = LoopCounter3;
      }
      puVar9 = (uint64_t *)
               ((longlong)(int)(iVar7 * (uint)*(ushort *)((longlong)param_1 + 0x5c) + LoopCounter1) * 0x10
               + *param_1);
      BufferSize = puVar9[1];
      *(uint64_t *)param_2 = *puVar9;
      *(uint64_t *)(param_2 + 2) = BufferSize;
    }
    else if (param_4 == 1) {
      ConfigureModuleInitializationSettings(param_1,&uStackX_18,param_3,&fStack_298);
      fVar16 = (float)modff((float)(int)(*(ushort *)((longlong)param_1 + 0x5e) - 1) *
                            uStackX_18._4_4_,&uStack_2b0);
      fVar17 = (float)modff();
      fStack_298 = (fStack_288 - fStack_298) * fVar17 + fStack_298;
      fStack_294 = (fStack_284 - fStack_294) * fVar17 + fStack_294;
      fStack_290 = (fStack_280 - fStack_290) * fVar17 + fStack_290;
      *param_2 = (((fStack_268 - fStack_278) * fVar17 + fStack_278) - fStack_298) * fVar16 +
                 fStack_298;
      param_2[1] = (((fStack_264 - fStack_274) * fVar17 + fStack_274) - fStack_294) * fVar16 +
                   fStack_294;
      param_2[2] = (((fStack_260 - fStack_270) * fVar17 + fStack_270) - fStack_290) * fVar16 +
                   fStack_290;
      param_2[3] = 3.4028235e+38;
    }
    else {
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 0.0;
    }
    break;
  case 0x27:
    iStack_2c8 = param_4;
    ProcessModuleConfigurationData(ModuleInitializationResult0,&uStack_2b0,param_1,&uStackX_18);
    fVar16 = 1.5259022e-05;
    *param_2 = (float)(ushort)uStack_2b0 * 1.5259022e-05;
    uVar6 = (uint)uStack_2b0._2_2_;
    MemoryAllocationResult = uStack_2b0._4_2_;
    goto code_r0x0001802a16a1;
  case 0x28:
    iStack_2c8 = param_4;
    InitializeModuleConfiguration(ModuleInitializationResult0,&uStack_2b0,param_1,&uStackX_18);
    fVar16 = 0.003921569;
    *param_2 = (float)(byte)uStack_2b0 * 0.003921569;
    uVar6 = (uint)uStack_2b0._1_1_;
    MemoryAllocationResult = (ushort)uStack_2b0._2_1_;
    goto code_r0x0001802a16a1;
  case 0x29:
    iStack_2c8 = param_4;
    InitializeModuleConfiguration(ModuleInitializationResult0,&uStack_2b0,param_1,&uStackX_18);
code_r0x0001802a1677:
    fVar16 = 0.003921569;
    *param_2 = (float)uStack_2b0._2_1_ * 0.003921569;
    uVar6 = (uint)((ulonglong)uStack_2b0 >> 8) & 0xff;
    MemoryAllocationResult = (ushort)(byte)uStack_2b0;
code_r0x0001802a16a1:
    param_2[3] = 1.0;
    param_2[2] = (float)MemoryAllocationResult * fVar16;
    param_2[1] = (float)uVar6 * fVar16;
    break;
  case 0x2b:
    iStack_2c8 = param_4;
    ProcessModuleSystemData(ModuleInitializationResult0,abStack_2b8,param_1,&uStackX_18);
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    *param_2 = (float)abStack_2b8[0];
    break;
  case 0x2c:
    MemoryAllocationResult = GetModuleMemoryAllocation(ModuleInitializationResult0,param_1,&uStackX_18);
    fVar16 = (float)MemoryAllocationResult;
code_r0x0001802a1829:
    *param_2 = fVar16;
    param_2[1] = 1.0;
    param_2[2] = 1.0;
    param_2[3] = 1.0;
  }
SystemSecurityValidationRoutine:
  SystemSecurityCheck(uStack_58 ^ (ulonglong)auStack_2e8);
}
    DAT_180d48da8 = '\x01';
    InitializeSystemModuleConfiguration(unaff_RBP + -0x70,&UNK_180a177f0,&UNK_180a17770,&UNK_180a17798,0x786);
    OutputDebugStringA(unaff_RBP + -0x70);
  }
  MemoryAddress = *(ushort *)(unaff_RDI + 0x5c);
  fVar5 = *(float *)(unaff_RBP + 0x200);
  fVar4 = (float)modff((float)(int)(*(ushort *)(unaff_RDI + 0x5e) - 1) *
                       *(float *)(unaff_RBP + 0x204),&stack0x00000038);
  fVar5 = (float)modff((float)(int)(MemoryAddress - 1) * fVar5,&stack0x00000038);
  fVar6 = (fStack000000000000005c - fStack0000000000000050) * fVar5 + fStack0000000000000050;
  fStack0000000000000054 =
       (fStack0000000000000060 - fStack0000000000000054) * fVar5 + fStack0000000000000054;
  fVar7 = (fStack0000000000000064 - fStack0000000000000058) * fVar5 + fStack0000000000000058;
  *unaff_RBX = (((fStack000000000000007c - fStack0000000000000070) * fVar5 + fStack0000000000000070)
               - fVar7) * fVar4 + fVar7;
  unaff_RBX[1] = (((fStack0000000000000078 - fStack000000000000006c) * fVar5 +
                  fStack000000000000006c) - fStack0000000000000054) * fVar4 + fStack0000000000000054
  ;
  unaff_RBX[2] = (((fStack0000000000000074 - fStack0000000000000068) * fVar5 +
                  fStack0000000000000068) - fVar6) * fVar4 + fVar6;
  unaff_RBX[3] = 1.0;
  SystemSecurityCheck(*(ulonglong *)(unaff_RBP + 400) ^ (ulonglong)&stack0x00000000);
}
  DAT_180d48da8 = 1;
  InitializeSystemModuleConfiguration(unaff_RBP + -0x70,&UNK_180a177f0,&UNK_180a17770,&UNK_180a17798,0x786);
  OutputDebugStringA(unaff_RBP + -0x70);
  MemoryAddress = *(ushort *)(unaff_RDI + 0x5c);
  fVar3 = *(float *)(unaff_RBP + 0x200);
  fVar2 = (float)modff((float)(int)(*(ushort *)(unaff_RDI + 0x5e) - 1) *
                       *(float *)(unaff_RBP + 0x204),&stack0x00000038);
  fVar3 = (float)modff((float)(int)(MemoryAddress - 1) * fVar3,&stack0x00000038);
  fVar4 = (fStack000000000000005c - fStack0000000000000050) * fVar3 + fStack0000000000000050;
  fStack0000000000000054 =
       (fStack0000000000000060 - fStack0000000000000054) * fVar3 + fStack0000000000000054;
  fVar5 = (fStack0000000000000064 - fStack0000000000000058) * fVar3 + fStack0000000000000058;
  *unaff_RBX = (((fStack000000000000007c - fStack0000000000000070) * fVar3 + fStack0000000000000070)
               - fVar5) * fVar2 + fVar5;
  unaff_RBX[1] = (((fStack0000000000000078 - fStack000000000000006c) * fVar3 +
                  fStack000000000000006c) - fStack0000000000000054) * fVar2 + fStack0000000000000054
  ;
  unaff_RBX[2] = (((fStack0000000000000074 - fStack0000000000000068) * fVar3 +
                  fStack0000000000000068) - fVar4) * fVar2 + fVar4;
  unaff_RBX[3] = 1.0;
  SystemSecurityCheck(*(ulonglong *)(unaff_RBP + 400) ^ (ulonglong)&stack0x00000000);
}
        DAT_180d48dac = '\x01';
        lStack_278 = CONCAT44(lStack_278._4_4_,0x4ea);
        InitializeSystemModuleConfiguration(auStack_238,&UNK_180a177f0,&UNK_180a17830,&UNK_180a17880);
        OutputDebugStringA(auStack_238);
      }
      goto LAB_1802a83bc;
    }
    MemoryAllocationResult = CreateSystemMemoryPool(&puStack_268,param_1);
    SystemBufferInitialize(MemoryAllocationResult,1);
    puStack_268 = &SystemNullPointer;
    if (puStack_260 != (void *)0x0) {
      CleanupSystemResources();
    }
    puStack_260 = (void *)0x0;
    uStack_250 = 0;
    puStack_268 = &SystemBufferTemplate;
    lVar6 = *param_2;
    MemoryAddress = *(uint16_t *)((longlong)param_2 + 0x5e);
    BufferSize = *(uint16_t *)((longlong)param_2 + 0x5c);
    puVar7 = &SystemConstantStringPrimary;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar7 = *(void **)(param_1 + 8);
    }
    iVar4 = fopen_s(&puStack_268,puVar7,&UNK_180a0cf4c);
    puStack_260 = puStack_268;
    if (iVar4 != 0) {
      puStack_260 = (void *)0x0;
    }
    puStack_268 = &UNK_18042d5d0;
    if (puStack_260 == (void *)0x0) goto LAB_1802a83bc;
    puVar7 = puStack_260;
    if (lVar6 != 0) {
      lStack_278 = lVar6;
      ProcessSystemBufferData(&puStack_268,BufferSize,MemoryAddress,iVar3);
      puVar7 = puStack_260;
    }
  }
  fclose(puVar7);
LAB_1802a83bc:
  SystemSecurityCheck(uStack_38 ^ (ulonglong)auStack_298);
}
        DAT_180d48daa = '\x01';
        puStack_2d8 = (void *)CONCAT44(puStack_2d8._4_4_,0xc88);
        InitializeSystemModuleConfiguration(auStack_228,&UNK_180a177f0,&UNK_180a17a68,&UNK_180a17880);
        OutputDebugStringA(auStack_228);
      }
      puVar7 = &SystemConstantStringPrimary;
      if (*(void **)(param_1 + 8) != (void *)0x0) {
        puVar7 = *(void **)(param_1 + 8);
      }
      InitializeSystemDataProcessing(_DAT_180c86928,&UNK_180a17960,puVar7);
    }
  }
  cVar3 = ProcessModuleConfigurationValidation(param_3);
  if (cVar3 == '\0') {
    puVar7 = &SystemConstantStringPrimary;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar7 = *(void **)(param_1 + 8);
    }
    ProcessSystemStringAllocation(&UNK_180a17a18,puVar7);
  }
  else {
    *(uint64_t *)(param_3 + 0x14) = 0;
    *(uint64_t *)(param_3 + 0x1c) = 0;
    *(uint64_t *)(param_3 + 0x24) = 0;
    *(uint64_t *)(param_3 + 0x2c) = 0;
    *(uint64_t *)(param_3 + 0x34) = 0;
    *(uint64_t *)(param_3 + 0x3c) = 0;
    *(uint64_t *)(param_3 + 0x44) = 0;
    *(uint64_t *)(param_3 + 0x4c) = 0;
    NetworkRequestResult = ProcessNetworkRequest(*(uint32_t *)(param_3 + 0x54));
    strcpy_s(param_3 + 0x14,0x40,NetworkRequestResult);
  }
LAB_1802a912b:
  FinalizeSystemMemoryContext(auStack_260);
  SystemSecurityCheck(uStack_28 ^ (ulonglong)auStack_2f8);
}
      DAT_180d48dab = '\x01';
      uStack_228 = 0xac7;
      InitializeSystemModuleConfiguration(auStack_218,&UNK_180a177f0,&UNK_180a179d0,&UNK_180a17880);
      OutputDebugStringA(auStack_218);
    }
  }
  else {
    ProcessSystemStringAllocation(&UNK_180a17a38);
  }
  SystemSecurityCheck(uStack_18 ^ (ulonglong)auStack_248);
}
/**
 * @brief 系统参数验证函数
 * 
 * 该函数负责验证系统参数的有效性，检查参数结构
 * 和配置是否符合系统要求。
 * 
 * @param ParameterArray 参数数组指针
 * @return 验证通过返回true，失败返回false
 */
bool ValidateSystemParameters(uint64_t *ParameterArray)
{
  int LoopCounter;
  uint64_t BufferSize;
  uint64_t StringProcessingResult;
  LoopCounter = *(int *)((longlong)param_1 + 0x54);
  if (LoopCounter == 0x27) {
    if (param_1[1] == 0) {
      BufferSize = 0;
      StringProcessingResult = 0;
    }
    else {
      BufferSize = MemoryAllocateEx(_DAT_180c8ed18,param_1[1],3);
      StringProcessingResult = param_1[1];
    }
    memcpy(BufferSize,*param_1,StringProcessingResult);
  }
  if (LoopCounter != 0x28) {
    if (LoopCounter == 0x29) {
      if (param_1[1] == 0) {
        BufferSize = 0;
        StringProcessingResult = 0;
      }
      else {
        BufferSize = MemoryAllocateEx(_DAT_180c8ed18,param_1[1],3);
        StringProcessingResult = param_1[1];
      }
      memcpy(BufferSize,*param_1,StringProcessingResult);
    }
    LoopCounter = GetSystemLoopCounter(*(uint32_t *)((longlong)param_1 + 0x54));
    return LoopCounter != 0;
  }
  if (param_1[1] == 0) {
    BufferSize = 0;
    StringProcessingResult = 0;
  }
  else {
    BufferSize = MemoryAllocateEx(_DAT_180c8ed18,param_1[1],3);
    StringProcessingResult = param_1[1];
  }
  memcpy(BufferSize,*param_1,StringProcessingResult);
}
/**
 * @brief 数据处理和转换函数
 * 
 * 该函数负责处理各种数据类型之间的转换和计算操作，
 * 包括字符串、浮点数和其他数据类型的处理。
 * 
 * @param DataArray 数据数组指针
 * @return 返回处理后的数据结果
 */
uint64_t ProcessDataConversionAndCalculation(uint64_t *DataArray)
{
  uint8_t aMemoryAddress [16];
  int StringIndex;
  uint StringProcessingResult;
  float *pfVar4;
  ulonglong MemoryAllocationResult;
  ushort *puVar6;
  float *pfVar7;
  ulonglong uVar8;
  byte *pbVar9;
  float fVar10;
  float fVar11;
  uint8_t aMemoryAddress2 [16];
  float fVar13;
  float FloatCalculationResult;
  float fVar15;
  switch(*(int *)((longlong)param_1 + 0x54) + -1) {
  case 0:
  case 1:
    pbVar9 = (byte *)*param_1;
    pfVar4 = (float *)((ulonglong)param_1[1] >> 2);
    if (0 < (int)pfVar4) {
      uVar8 = (ulonglong)pfVar4 & 0xffffffff;
      do {
        FloatCalculationResult = (float)pbVar9[1] * 0.007843138 - 1.0;
        fVar13 = (float)*pbVar9 * 0.007843138 - 1.0;
        fVar15 = (float)pbVar9[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + FloatCalculationResult * FloatCalculationResult + fVar15 * fVar15;
        aMemoryAddress2 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = aMemoryAddress2._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pbVar9 = (byte)(int)((fVar10 * fVar13 + 1.0) * 127.5);
        pbVar9[1] = (byte)(int)((fVar10 * FloatCalculationResult + 1.0) * 127.5);
        StringIndex = (int)((fVar10 * fVar15 + 1.0) * 127.5);
        pbVar9[2] = (byte)StringIndex;
        pbVar9 = pbVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      return CONCAT71((uint7)(uint3)((uint)StringIndex >> 8),1);
    }
    break;
  default:
    return 0;
  case 8:
    puVar6 = (ushort *)*param_1;
    pfVar4 = (float *)((ulonglong)param_1[1] >> 3);
    if (0 < (int)pfVar4) {
      uVar8 = (ulonglong)pfVar4 & 0xffffffff;
      do {
        FloatCalculationResult = (float)puVar6[1] * 3.0518044e-05 - 1.0;
        fVar13 = (float)*puVar6 * 3.0518044e-05 - 1.0;
        fVar15 = (float)puVar6[2] * 3.0518044e-05 - 1.0;
        fVar10 = fVar13 * fVar13 + FloatCalculationResult * FloatCalculationResult + fVar15 * fVar15;
        aMemoryAddress2 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = aMemoryAddress2._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *puVar6 = (ushort)(int)((fVar10 * fVar13 + 1.0) * 32767.5);
        puVar6[1] = (ushort)(int)((fVar10 * FloatCalculationResult + 1.0) * 32767.5);
        StringIndex = (int)((fVar10 * fVar15 + 1.0) * 32767.5);
        puVar6[2] = (ushort)StringIndex;
        puVar6 = puVar6 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      return CONCAT71((uint7)(uint3)((uint)StringIndex >> 8),1);
    }
    break;
  case 0x1f:
    pfVar4 = (float *)*param_1;
    if (0 < (int)((ulonglong)param_1[1] / 0xc)) {
      uVar8 = (ulonglong)param_1[1] / 0xc & 0xffffffff;
      do {
        fVar13 = (*pfVar4 + *pfVar4) - 1.0;
        FloatCalculationResult = (pfVar4[1] + pfVar4[1]) - 1.0;
        fVar15 = (pfVar4[2] + pfVar4[2]) - 1.0;
        fVar10 = fVar13 * fVar13 + FloatCalculationResult * FloatCalculationResult + fVar15 * fVar15;
        aMemoryAddress2 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = aMemoryAddress2._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pfVar4 = (fVar10 * fVar13 + 1.0) * 0.5;
        pfVar4[1] = (fVar10 * FloatCalculationResult + 1.0) * 0.5;
        pfVar4[2] = (fVar10 * fVar15 + 1.0) * 0.5;
        pfVar4 = pfVar4 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      return CONCAT71((int7)((ulonglong)pfVar4 >> 8),1);
    }
    break;
  case 0x20:
    uVar8 = param_1[1];
    pfVar7 = (float *)*param_1;
    pfVar4 = (float *)(uVar8 >> 4);
    if (0 < (int)pfVar4) {
      MemoryAllocationResult = (ulonglong)pfVar4 & 0xffffffff;
      do {
        fVar13 = (*pfVar7 + *pfVar7) - 1.0;
        FloatCalculationResult = (pfVar7[1] + pfVar7[1]) - 1.0;
        fVar15 = (pfVar7[2] + pfVar7[2]) - 1.0;
        fVar10 = FloatCalculationResult * FloatCalculationResult + fVar13 * fVar13 + fVar15 * fVar15;
        aMemoryAddress2 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = aMemoryAddress2._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pfVar7 = (fVar10 * fVar13 + 1.0) * 0.5;
        pfVar7[2] = (fVar15 * fVar10 + 1.0) * 0.5;
        pfVar7[1] = (fVar10 * FloatCalculationResult + 1.0) * 0.5;
        pfVar7 = pfVar7 + 4;
        MemoryAllocationResult = MemoryAllocationResult - 1;
      } while (MemoryAllocationResult != 0);
      return CONCAT71((uint7)(uVar8 >> 0xc),1);
    }
    break;
  case 0x26:
    puVar6 = (ushort *)*param_1;
    aMemoryAddress._8_8_ = 0;
    aMemoryAddress._0_8_ = param_1[1];
    pfVar4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * aMemoryAddress,0);
    uVar8 = (ulonglong)param_1[1] / 6;
    if (0 < (int)uVar8) {
      uVar8 = uVar8 & 0xffffffff;
      do {
        FloatCalculationResult = (float)puVar6[1] * 0.007843138 - 1.0;
        fVar13 = (float)*puVar6 * 0.007843138 - 1.0;
        fVar15 = (float)puVar6[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + FloatCalculationResult * FloatCalculationResult + fVar15 * fVar15;
        aMemoryAddress2 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = aMemoryAddress2._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *puVar6 = (ushort)(int)((fVar13 * fVar10 + 1.0) * 127.5);
        puVar6[1] = (ushort)(int)((FloatCalculationResult * fVar10 + 1.0) * 127.5);
        StringIndex = (int)((fVar15 * fVar10 + 1.0) * 127.5);
        puVar6[2] = (ushort)StringIndex;
        puVar6 = puVar6 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      return CONCAT71((uint7)(uint3)((uint)StringIndex >> 8),1);
    }
    break;
  case 0x27:
  case 0x28:
    pbVar9 = (byte *)*param_1;
    aMemoryAddress2._8_8_ = 0;
    aMemoryAddress2._0_8_ = param_1[1];
    pfVar4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * aMemoryAddress2,0);
    uVar8 = (ulonglong)param_1[1] / 3;
    if (0 < (int)uVar8) {
      uVar8 = uVar8 & 0xffffffff;
      do {
        FloatCalculationResult = (float)pbVar9[1] * 0.007843138 - 1.0;
        fVar13 = (float)*pbVar9 * 0.007843138 - 1.0;
        fVar15 = (float)pbVar9[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + FloatCalculationResult * FloatCalculationResult + fVar15 * fVar15;
        aMemoryAddress2 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = aMemoryAddress2._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pbVar9 = (byte)(int)((fVar10 * fVar13 + 1.0) * 127.5);
        pbVar9[1] = (byte)(int)((fVar10 * FloatCalculationResult + 1.0) * 127.5);
        StringProcessingResult = (uint)((fVar10 * fVar15 + 1.0) * 127.5);
        pfVar4 = (float *)(ulonglong)StringProcessingResult;
        pbVar9[2] = (byte)StringProcessingResult;
        pbVar9 = pbVar9 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return CONCAT71((int7)((ulonglong)pfVar4 >> 8),1);
}
/**
 * 颜色亮度标准化处理函数
 * 根据不同的颜色格式(0x20或0x21)对颜色数据进行亮度标准化处理
 * 使用RGB到亮度的转换系数：R=0.2126, G=0.7152, B=0.0722
 * 
 * @param color_data 颜色数据指针数组
 * @return 处理成功返回1，失败返回0
 */
/**
 * 标准化颜色亮度值
 * 对输入的颜色数据进行亮度标准化处理，支持两种颜色格式（0x20和0x21）
 * 
 * @param color_data 颜色数据指针，包含颜色格式信息和颜色值数组
 * @return 标准化成功返回1，失败返回0
 */
uint8_t NormalizeColorLuminance(uint64_t *color_data)
{
  float *red_component;
  float *green_component;
  float *blue_component;
  float *alpha_component;
  float *brightness_component;
  float *contrast_component;
  float *saturation_component;
  float *hue_component;
  float *lightness_component;
  float *chroma_component;
  float *gamma_component;
  float temp_float;
  uint32_t batch_loop_counter;
  float *output_buffer;
  float *input_buffer;
  int total_elements;
  int processed_elements;
  int batch_processed_elements;
  uint64_t remaining_elements;
  int64_t element_count;
  double luminance_sum;
  // 处理0x20格式（12字节格式）的颜色数据
  if (*(int *)((int64_t)color_data + 0x54) == 0x20) {
    output_buffer = (float *)*color_data;
    batch_processed_elements = 0;
    luminance_sum = 0.0;
    element_count = 0;
    processed_elements = 0;
    total_elements = (int)((uint64_t)color_data[1] / 0xc);
    input_buffer = output_buffer;
    
    // 批量处理4个元素以提高性能
    if (3 < total_elements) {
      batch_loop_counter = (total_elements - 4U >> 2) + 1;
      remaining_elements = (uint64_t)batch_loop_counter;
      element_count = (uint64_t)batch_loop_counter * 4;
      processed_elements = batch_loop_counter * 4;
      do {
        red_component = input_buffer + 3;
        temp_float = *input_buffer;
        green_component = input_buffer + 6;
        blue_component = input_buffer + 7;
        alpha_component = input_buffer + 5;
        brightness_component = input_buffer + 9;
        contrast_component = input_buffer + 10;
        saturation_component = input_buffer + 4;
        hue_component = input_buffer + 1;
        lightness_component = input_buffer + 2;
        chroma_component = input_buffer + 8;
        gamma_component = input_buffer + 0xb;
        input_buffer = input_buffer + 0xc;
        luminance_sum = luminance_sum + (double)*red_component * 0.2126 + (double)temp_float * 0.2126 +
                          (double)*green_component * 0.2126 + (double)*brightness_component * 0.2126 +
                          (double)*contrast_component * 0.7152 +
                          (double)*blue_component * 0.7152 + (double)*saturation_component * 0.7152 +
                          (double)*hue_component * 0.7152 +
                          (double)*alpha_component * 0.0722 + (double)*lightness_component * 0.0722 +
                          (double)*chroma_component * 0.0722 + (double)*gamma_component * 0.0722;
        remaining_elements = remaining_elements - 1;
      } while (remaining_elements != 0);
    }
    
    // 处理剩余的元素
    if (processed_elements < total_elements) {
      input_buffer = input_buffer + 2;
      remaining_elements = (uint64_t)(uint32_t)(total_elements - processed_elements);
      element_count = element_count + remaining_elements;
      do {
        red_component = input_buffer + -1;
        green_component = input_buffer + -2;
        temp_float = *input_buffer;
        input_buffer = input_buffer + 3;
        luminance_sum = luminance_sum + (double)*red_component * 0.7152 + (double)*green_component * 0.2126 +
                          (double)temp_float * 0.0722;
        remaining_elements = remaining_elements - 1;
      } while (remaining_elements != 0);
    }
    
    // 计算标准化系数
    luminance_sum = 1.0 / (luminance_sum / (double)element_count);
    
    // 应用标准化系数到输出缓冲区
    if (3 < total_elements) {
      batch_loop_counter = (total_elements - 4U >> 2) + 1;
      remaining_elements = (uint64_t)batch_loop_counter;
      batch_processed_elements = batch_loop_counter * 4;
      do {
        *output_buffer = (float)((double)*output_buffer * luminance_sum);
        output_buffer[1] = (float)((double)output_buffer[1] * luminance_sum);
        output_buffer[2] = (float)((double)output_buffer[2] * luminance_sum);
        output_buffer[3] = (float)((double)output_buffer[3] * luminance_sum);
        output_buffer[4] = (float)((double)output_buffer[4] * luminance_sum);
        output_buffer[5] = (float)((double)output_buffer[5] * luminance_sum);
        output_buffer[6] = (float)((double)output_buffer[6] * luminance_sum);
        output_buffer[7] = (float)((double)output_buffer[7] * luminance_sum);
        output_buffer[8] = (float)((double)output_buffer[8] * luminance_sum);
        output_buffer[9] = (float)((double)output_buffer[9] * luminance_sum);
        output_buffer[10] = (float)((double)output_buffer[10] * luminance_sum);
        output_buffer[0xb] = (float)((double)output_buffer[0xb] * luminance_sum);
        output_buffer = output_buffer + 0xc;
        remaining_elements = remaining_elements - 1;
      } while (remaining_elements != 0);
    }
    
    // 处理剩余元素的标准化
    if (batch_processed_elements < total_elements) {
      output_buffer = output_buffer + 2;
      remaining_elements = (uint64_t)(uint32_t)(total_elements - batch_processed_elements);
      do {
        output_buffer[-2] = (float)((double)output_buffer[-2] * luminance_sum);
        output_buffer[-1] = (float)((double)output_buffer[-1] * luminance_sum);
        *output_buffer = (float)((double)*output_buffer * luminance_sum);
        output_buffer = output_buffer + 3;
        remaining_elements = remaining_elements - 1;
      } while (remaining_elements != 0);
    }
  }
  else {
    // 处理0x21格式（16字节格式）的颜色数据
    if (*(int *)((longlong)color_data + 0x54) != 0x21) {
      return 0;
    }
    
    uint32_t format_21_loop_counter = 0;
    float *format_21_output_buffer = (float *)*color_data;
    double format_21_luminance_sum = 0.0;
    int64_t format_21_element_count = 0;
    uint32_t format_21_processed_elements = 0;
    uint32_t format_21_total_elements = (int)((ulonglong)color_data[1] >> 4);
    float *format_21_input_buffer = format_21_output_buffer;
    
    // 批量处理0x21格式的元素
    if (3 < format_21_total_elements) {
      uint32_t format_21_batch_counter = (format_21_total_elements - 4U >> 2) + 1;
      uint64_t format_21_remaining_elements = (ulonglong)format_21_batch_counter;
      format_21_element_count = (ulonglong)format_21_batch_counter * 4;
      format_21_processed_elements = format_21_batch_counter * 4;
      
      do {
        float *format_21_red_component = format_21_input_buffer + 4;
        float format_21_temp_value = *format_21_input_buffer;
        float *format_21_green_component = format_21_input_buffer + 8;
        float *format_21_blue_component = format_21_input_buffer + 9;
        float *format_21_alpha_component = format_21_input_buffer + 6;
        float *format_21_brightness_component = format_21_input_buffer + 0xc;
        float *format_21_contrast_component = format_21_input_buffer + 0xd;
        float *format_21_saturation_component = format_21_input_buffer + 5;
        float *format_21_hue_component = format_21_input_buffer + 1;
        float *format_21_lightness_component = format_21_input_buffer + 2;
        float *format_21_chroma_component = format_21_input_buffer + 10;
        float *format_21_gamma_component = format_21_input_buffer + 0xe;
        format_21_input_buffer = format_21_input_buffer + 0x10;
        
        format_21_luminance_sum = format_21_luminance_sum + 
                                  (double)*format_21_red_component * 0.2126 + 
                                  (double)format_21_temp_value * 0.2126 +
                                  (double)*format_21_green_component * 0.2126 + 
                                  (double)*format_21_brightness_component * 0.2126 +
                                  (double)*format_21_contrast_component * 0.7152 +
                                  (double)*format_21_blue_component * 0.7152 + 
                                  (double)*format_21_saturation_component * 0.7152 +
                                  (double)*format_21_hue_component * 0.7152 +
                                  (double)*format_21_alpha_component * 0.0722 + 
                                  (double)*format_21_lightness_component * 0.0722 +
                                  (double)*format_21_chroma_component * 0.0722 + 
                                  (double)*format_21_gamma_component * 0.0722;
                                  
        format_21_remaining_elements = format_21_remaining_elements - 1;
      } while (format_21_remaining_elements != 0);
    }
    
    // 处理0x21格式的剩余元素
    if (format_21_processed_elements < format_21_total_elements) {
      format_21_input_buffer = format_21_input_buffer + 2;
      uint64_t format_21_remaining_elements = (ulonglong)(uint)(format_21_total_elements - format_21_processed_elements);
      format_21_element_count = format_21_element_count + format_21_remaining_elements;
      
      do {
        float *format_21_red_component = format_21_input_buffer + -1;
        float *format_21_green_component = format_21_input_buffer + -2;
        float format_21_temp_value = *format_21_input_buffer;
        format_21_input_buffer = format_21_input_buffer + 4;
        
        format_21_luminance_sum = format_21_luminance_sum + 
                                  (double)*format_21_red_component * 0.7152 + 
                                  (double)*format_21_green_component * 0.2126 +
                                  (double)format_21_temp_value * 0.0722;
                                  
        format_21_remaining_elements = format_21_remaining_elements - 1;
      } while (format_21_remaining_elements != 0);
    }
    
    // 计算标准化系数
    format_21_luminance_sum = 1.0 / (format_21_luminance_sum / (double)format_21_element_count);
    
    // 应用标准化系数到0x21格式的输出缓冲区
    if (3 < format_21_total_elements) {
      uint32_t format_21_batch_counter = (format_21_total_elements - 4U >> 2) + 1;
      uint64_t format_21_remaining_elements = (ulonglong)format_21_batch_counter;
      format_21_loop_counter = format_21_batch_counter * 4;
      
      do {
        *format_21_output_buffer = (float)((double)*format_21_output_buffer * format_21_luminance_sum);
        format_21_output_buffer[1] = (float)((double)format_21_output_buffer[1] * format_21_luminance_sum);
        format_21_output_buffer[2] = (float)((double)format_21_output_buffer[2] * format_21_luminance_sum);
        format_21_output_buffer[4] = (float)((double)format_21_output_buffer[4] * format_21_luminance_sum);
        format_21_output_buffer[5] = (float)((double)format_21_output_buffer[5] * format_21_luminance_sum);
        format_21_output_buffer[6] = (float)((double)format_21_output_buffer[6] * format_21_luminance_sum);
        format_21_output_buffer[8] = (float)((double)format_21_output_buffer[8] * format_21_luminance_sum);
        format_21_output_buffer[9] = (float)((double)format_21_output_buffer[9] * format_21_luminance_sum);
        format_21_output_buffer[10] = (float)((double)format_21_output_buffer[10] * format_21_luminance_sum);
        format_21_output_buffer[0xc] = (float)((double)format_21_output_buffer[0xc] * format_21_luminance_sum);
        format_21_output_buffer[0xd] = (float)((double)format_21_output_buffer[0xd] * format_21_luminance_sum);
        format_21_output_buffer[0xe] = (float)((double)format_21_output_buffer[0xe] * format_21_luminance_sum);
        format_21_output_buffer = format_21_output_buffer + 0x10;
        format_21_remaining_elements = format_21_remaining_elements - 1;
      } while (format_21_remaining_elements != 0);
    }
    
    // 处理0x21格式的剩余元素标准化
    if (format_21_loop_counter < format_21_total_elements) {
      format_21_output_buffer = format_21_output_buffer + 2;
      uint64_t format_21_remaining_elements = (ulonglong)(uint)(format_21_total_elements - format_21_loop_counter);
      
      do {
        format_21_output_buffer[-2] = (float)((double)format_21_output_buffer[-2] * format_21_luminance_sum);
        format_21_output_buffer[-1] = (float)((double)format_21_output_buffer[-1] * format_21_luminance_sum);
        *format_21_output_buffer = (float)((double)*format_21_output_buffer * format_21_luminance_sum);
        format_21_output_buffer = format_21_output_buffer + 4;
        format_21_remaining_elements = format_21_remaining_elements - 1;
      } while (format_21_remaining_elements != 0);
    }
  }
  return 1;
}
  SystemGamePaused = 0;
  *(uint32_t *)(ModuleInitializationResult + 0x4c) = 0;
  ProcessModuleSystemInitialization(*(uint64_t *)(ModuleInitializationResult + 0x108));
  puStack_50 = &SystemStringMemoryTemplate;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 0x12;
  strcpy_s(auStack_38,0x20,&UNK_180a1a918);
  FinalizeModuleInitialization();
  puStack_50 = &SystemBufferTemplate;
  SystemSecurityCheck(uStack_18 ^ (ulonglong)auStack_78);
}
        DAT_180d48e78 = 0;
        _DAT_180d48eb8 = 0;
        _DAT_180d48ec0 = 0;
        uRam0000000180d48ec8 = 0;
        _DAT_180d48ed0 = 3;
        _DAT_180d48e30 = 0;
        FUN_1808fc820(&SystemConfigurationSecondaryTemplate);
        FUN_1808fcb30(&DAT_180d48e24);
      }
      puVar7 = (uint *)&DAT_180d48e30;
      if (uVar8 < (ulonglong)
                  ((*(longlong *)(param_3 + 0x1c) - *(longlong *)(param_3 + 0x1a)) / 0xb0)) {
        puVar7 = (uint *)(MemoryAddress2 + *(longlong *)(param_3 + 0x1a));
      }
      if ((*(int *)(ModuleInitializationResult0 + 0x48) < _DAT_180d48e24) &&
         (ValidateSystemConfigurationTemplate(&DAT_180d48e24), _DAT_180d48e24 == -1)) {
        _DAT_180d48e60 = &SystemMemoryPool;
        _DAT_180d48e68 = &DAT_180d48e78;
        _DAT_180d48e70 = 0;
        DAT_180d48e78 = 0;
        _DAT_180d48eb8 = 0;
        _DAT_180d48ec0 = 0;
        uRam0000000180d48ec8 = 0;
        _DAT_180d48ed0 = 3;
        _DAT_180d48e30 = 0;
        FUN_1808fc820(&SystemConfigurationSecondaryTemplate);
        FUN_1808fcb30(&DAT_180d48e24);
      }
      puVar6 = &DAT_180d48e30;
      if (uVar8 < (ulonglong)
                  ((*(longlong *)(param_2 + 0x1c) - *(longlong *)(param_2 + 0x1a)) / 0xb0)) {
        puVar6 = (void *)(MemoryAddress2 + *(longlong *)(param_2 + 0x1a));
      }
      if ((((0.0001 <= ABS(*(float *)(puVar6 + 0x14) - (float)puVar7[5])) ||
           (0.0001 <= ABS(*(float *)(puVar6 + 0x18) - (float)puVar7[6]))) ||
          (0.0001 <= ABS(*(float *)(puVar6 + 0x1c) - (float)puVar7[7]))) ||
         (((0.0001 <= ABS(*(float *)(puVar6 + 0x10) - (float)puVar7[4]) ||
           (0.0001 <= ABS(*(float *)(puVar6 + 0x20) - (float)puVar7[8]))) ||
          ((0.0001 <= ABS(*(float *)(puVar6 + 0x24) - (float)puVar7[9]) ||
           (0.0001 <= ABS(*(float *)(puVar6 + 0x28) - (float)puVar7[10]))))))) {
        *puVar7 = *puVar7 | 8;
      }
      StringProcessingResult = ProcessStringDataValidation(param_1,puVar6 + 0x88,puVar7 + 0x22);
      uVar8 = uVar8 + 1;
      MemoryAddress2 = MemoryAddress2 + 0xb0;
      MemoryAddress1 = MemoryAddress1 - 1;
    } while (MemoryAddress1 != 0);
  }
LAB_180328385:
  return StringProcessingResult & 0xffffffffffffff00;
}
DAT_180329eb7:
    StringIndex = _Mtx_unlock(param_1 + 0x3d8);
    if (StringIndex != 0) {
      __Throw_C_error_std__YAXH_Z(StringIndex);
    }
    break;
  default:
LAB_180329ed5:
    NetworkRequestResult = 1;
    goto LAB_180329ed7;
  }
  *param_2 = (longlong)plVar5;
code_r0x000180329ed1:
  bVar8 = (byte)auStackX_20[0];
  goto LAB_180329ed5;
}
/**
 * @brief 模块数据验证和处理函数
 * 
 * 该函数负责验证模块数据的完整性，并进行必要的数据处理
 * 和转换操作，确保系统数据的一致性。
 * 
 * @param ModuleHandle 模块句柄
 * @param DataBuffer 数据缓冲区指针
 * @param ValidationFlags 验证标志
 * @param ProcessingMode 处理模式
 * @return 返回处理结果状态码
 */
uint64_t ValidateAndProcessModuleData(longlong ModuleHandle, longlong *DataBuffer, uint32_t *ValidationFlags, uint ProcessingMode)
{
  longlong *pModuleInitializationResult;
  byte bVar2;
  int iVar3;
  uint64_t *pNetworkRequestResult;
  uint64_t MemoryAllocationResult;
  longlong *MemoryPointerArray;
  longlong SystemStateValue;
  longlong *plStackX_18;
  uint32_t auStackX_20 [2];
  longlong *plStack_80;
  longlong *plStack_78;
  uint64_t uStack_70;
  longlong **pplStack_68;
  longlong *plStack_60;
  uint8_t auStack_58 [32];
  uStack_70 = SystemMutexFlags;
  MemoryAllocationResult = 0;
  bVar2 = *(byte *)(param_3 + 2);
  if ((param_4 >> 1 & 1) != 0) {
    InitializeSystemDataProcessing(_DAT_180c86930,&plStack_78,param_3 + 0x14,1);
    pNetworkRequestResult = (uint64_t *)CreateNetworkRequestContext();
    ProcessNetworkRequestData(*pNetworkRequestResult,&plStackX_18);
    if (plStack_80 != (longlong *)0x0) {
      (**(code **)(*plStack_80 + 0x38))();
    }
    ProcessNetworkRequestValidation(plStackX_18,&plStack_78);
    *(uint *)(plStackX_18 + 0x20) = *(uint *)(plStackX_18 + 0x20) | 0x40000000;
    auStackX_20[0] = *param_3;
    pModuleInitializationResult = (longlong *)(param_1 + 0x3d8);
    plStack_80 = pModuleInitializationResult;
    iVar3 = _Mtx_lock(pModuleInitializationResult);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    MemoryAllocationResult = AllocateSystemMemory(_DAT_180c8ed18,0x298,8,3);
    MemoryPointerArray = (longlong *)CreateMemoryPointerArray(MemoryAllocationResult);
    pplStack_68 = (longlong **)CONCAT44(pplStack_68._4_4_,auStackX_20[0]);
    plStack_60 = MemoryPointerArray;
    ProcessSystemMemoryConfiguration(param_1 + 0x3a8,auStack_58,&pplStack_68);
    iVar3 = _Mtx_unlock(pModuleInitializationResult);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    *param_2 = (longlong)MemoryPointerArray;
    MemoryAllocationResult = *(uint64_t *)(param_1 + 0x2d8);
    pplStack_68 = &plStack_80;
    plStack_80 = MemoryPointerArray;
    if (MemoryPointerArray != (longlong *)0x0) {
      (**(code **)(*MemoryPointerArray + 0x28))(MemoryPointerArray);
    }
    InitializeMemoryAllocationContext(MemoryAllocationResult,&plStack_80);
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    MemoryAllocationResult = 1;
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    if (plStack_78 != (longlong *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
  }
  if ((param_4 >> 2 & 1) == 0) {
    if (((param_4 >> 1 & 1) == 0) && ((bVar2 & 1) != 0)) {
      SystemStateValue = GetSystemStateValue(param_1,*param_3);
      *param_2 = SystemStateValue;
      MemoryAllocationResult = 1;
    }
  }
  else {
    auStackX_20[0] = *param_3;
    SystemStateValue = GetSystemStateValue(param_1);
    if (SystemStateValue == 0) {
      *param_2 = 0;
      MemoryAllocationResult = 1;
    }
    else {
      pModuleInitializationResult = (longlong *)(param_1 + 0x3d8);
      plStackX_18 = pModuleInitializationResult;
      iVar3 = _Mtx_lock(pModuleInitializationResult);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      ProcessSystemMemoryValidation(param_1 + 0x3a8,auStackX_20);
      iVar3 = _Mtx_unlock(pModuleInitializationResult);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      *param_2 = SystemStateValue;
      *(uint8_t *)(SystemStateValue + 0x39) = 1;
      MemoryAllocationResult = 1;
    }
  }
  return MemoryAllocationResult;
}
    DAT_180d49748 = 0;
    InitializeSystemDataTemplate(0x180d496e0);
    FUN_1808fc820(GetSystemConfigurationTemplate);
    FUN_1808fcb30(&DAT_180d496d0);
  }
  StringIndex = _Mtx_lock(param_1 + 0x6e8);
  if (StringIndex != 0) {
    __Throw_C_error_std__YAXH_Z(StringIndex);
  }
  if ((ulonglong)param_3 <= *(ulonglong *)(param_1 + 0x160)) {
    for (pStringProcessingResult = *(uint **)(*(longlong *)(param_1 + 0x6c0) +
                            ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0x6c8)) * 8);
        pStringProcessingResult != (uint *)0x0; pStringProcessingResult = *(uint **)(pStringProcessingResult + 4)) {
      if (param_2 == *pStringProcessingResult) goto LAB_18032b938;
    }
    pStringProcessingResult = *(uint **)(*(longlong *)(param_1 + 0x6c0) + *(longlong *)(param_1 + 0x6c8) * 8);
LAB_18032b938:
    lVar4 = *(longlong *)(pStringProcessingResult + 2);
    ModuleInitializationResult = *(longlong *)(lVar4 + 8);
    for (pStringProcessingResult = *(uint **)(ModuleInitializationResult + ((ulonglong)param_3 % (ulonglong)*(uint *)(lVar4 + 0x10)) * 8);
        pStringProcessingResult != (uint *)0x0; pStringProcessingResult = *(uint **)(pStringProcessingResult + 4)) {
      if (param_3 == *pStringProcessingResult) {
        lVar4 = *(longlong *)(lVar4 + 0x10);
        goto LAB_18032b96c;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    pStringProcessingResult = *(uint **)(ModuleInitializationResult + lVar4 * 8);
LAB_18032b96c:
    if ((pStringProcessingResult != *(uint **)(ModuleInitializationResult + lVar4 * 8)) && (lVar4 = *(longlong *)(pStringProcessingResult + 2), lVar4 != 0)
       ) goto LAB_18032b98e;
  }
  InitializeSystemDataTemplate(0x180d496e0);
  lVar4 = 0x180d496e0;
LAB_18032b98e:
  StringIndex = _Mtx_unlock(param_1 + 0x6e8);
  if (StringIndex != 0) {
    __Throw_C_error_std__YAXH_Z(StringIndex);
  }
  return lVar4;
}
/**
 * @brief 系统模块查找和验证函数
 * 
 * 该函数负责在系统模块中查找指定的模块，并验证其有效性。
 * 主要用于模块管理和系统配置操作。
 * 
 * @param SystemContext 系统上下文
 * @param ModuleId 模块ID
 * @param ValidationType 验证类型
 * @return 返回找到的模块句柄或错误代码
 */
longlong FindAndValidateSystemModule(longlong SystemContext, uint ModuleId, uint ValidationType)
{
  int64_t ModuleInitializationResult;
  longlong lVar2;
  uint *pStringProcessingResult;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _DAT_180d497d0) && (ValidateSystemConfigurationTemplate(&DAT_180d497d0), _DAT_180d497d0 == -1)) {
    InitializeSystemDataResources(0x180d497e0);
    FUN_1808fc820(GetSystemDataResources);
    FUN_1808fcb30(&DAT_180d497d0);
  }
  if ((ulonglong)param_3 <= *(ulonglong *)(param_1 + 0x160)) {
    for (pStringProcessingResult = *(uint **)(*(longlong *)(param_1 + 0x9f8) +
                            ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0xa00)) * 8);
        pStringProcessingResult != (uint *)0x0; pStringProcessingResult = *(uint **)(pStringProcessingResult + 4)) {
      if (param_2 == *pStringProcessingResult) goto LAB_18032baef;
    }
    pStringProcessingResult = *(uint **)(*(longlong *)(param_1 + 0x9f8) + *(longlong *)(param_1 + 0xa00) * 8);
LAB_18032baef:
    lVar2 = *(longlong *)(pStringProcessingResult + 2);
    ModuleInitializationResult = *(longlong *)(lVar2 + 8);
    for (pStringProcessingResult = *(uint **)(ModuleInitializationResult + ((ulonglong)param_3 % (ulonglong)*(uint *)(lVar2 + 0x10)) * 8);
        pStringProcessingResult != (uint *)0x0; pStringProcessingResult = *(uint **)(pStringProcessingResult + 4)) {
      if (param_3 == *pStringProcessingResult) {
        lVar2 = *(longlong *)(lVar2 + 0x10);
        goto LAB_18032bb25;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    pStringProcessingResult = *(uint **)(ModuleInitializationResult + lVar2 * 8);
LAB_18032bb25:
    if ((pStringProcessingResult != *(uint **)(ModuleInitializationResult + lVar2 * 8)) && (*(longlong *)(pStringProcessingResult + 2) != 0)) {
      return *(longlong *)(pStringProcessingResult + 2);
    }
  }
  ProcessSystemDataResources(0x180d497e0);
  return 0x180d497e0;
}
longlong SystemModuleInitialize(uint64_t systemId, longlong *moduleArray, longlong moduleData)
{
  int64_t ModuleInitializationResult;
  uint BufferSize;
  ulonglong StringProcessingResult;
  uint64_t NetworkRequestResult;
  uint64_t *pMemoryAllocationResult;
  uint uVar6;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180d49990) {
    ValidateSystemConfigurationTemplate(&DAT_180d49990);
    if (_DAT_180d49990 == -1) {
      NetworkRequestResult = AllocateSystemMemory(_DAT_180c8ed18,0x1c8,8,3);
      _DAT_180d48de0 = ProcessNetworkRequestResult(NetworkRequestResult);
      NetworkRequestResult = AllocateSystemMemory(_DAT_180c8ed18,0x200,8,3);
      _DAT_180d48de8 = ValidateNetworkRequestResult(NetworkRequestResult);
      pMemoryAllocationResult = (uint64_t *)AllocateSystemMemory(_DAT_180c8ed18,0xf8,8,3);
      ProcessMemoryAllocationResult(pMemoryAllocationResult);
      *pMemoryAllocationResult = &UNK_180a1b368;
      ValidateMemoryAllocationResult(pMemoryAllocationResult);
      _DAT_180d48df0 = pMemoryAllocationResult;
      _DAT_180d48df8 = GetSystemMemoryStatus();
      pMemoryAllocationResult = (uint64_t *)AllocateSystemMemory(_DAT_180c8ed18,0xb0,8,3);
      ProcessMemoryAllocationResult(pMemoryAllocationResult);
      *pMemoryAllocationResult = &UNK_180a1b3f0;
      _DAT_180d48e00 = pMemoryAllocationResult;
      _DAT_180d48e08 = GetSystemNetworkStatus();
      _DAT_180d48e10 = (*_DAT_180c918d8)(&DAT_180c918c0);
      _DAT_180d48e18 = 0;
      FUN_1808fcb30(&DAT_180d49990);
    }
  }
  StringProcessingResult = 0;
  uVar6 = (uint)(moduleArray[1] - *moduleArray >> 3);
  if (uVar6 != 0) {
    do {
      ModuleInitializationResult = *(longlong *)(*moduleArray + StringProcessingResult * 8);
      if (*(int *)(ModuleInitializationResult + 8) == *(int *)(moduleData + 8)) {
        return ModuleInitializationResult;
      }
      BufferSize = (int)StringProcessingResult + 1;
      StringProcessingResult = (ulonglong)BufferSize;
    } while (BufferSize < uVar6);
  }
  (**(code **)(**(longlong **)(&DAT_180d48de0 + (ulonglong)*(uint *)(moduleData + 0x8c) * 8) + 8))();
  return *(longlong *)(&DAT_180d48de0 + (ulonglong)*(uint *)(moduleData + 0x8c) * 8);
}
uint64_t
ProcessSystemModuleConfiguration(uint64_t systemId, longlong *dataBuffer, uint64_t *dataArray, uint32_t flagsParam4,
             uint32_t flagsParam5, uint8_t byteParam6)
{
  int64_t ModuleInitializationResult;
  ulonglong BufferSize;
  longlong lVar3;
  uint64_t NetworkRequestResult;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  NetworkRequestResult = 0;
  BufferSize = param_2[1] - *param_2 >> 2;
  if ((int)BufferSize != 0) {
    lVar6 = 0;
    BufferSize = BufferSize & 0xffffffff;
    do {
      puVar7 = (uint *)*param_3;
      ModuleInitializationResult = *param_2;
      lVar3 = (longlong)param_3[1] - (longlong)puVar7 >> 2;
      if (0 < lVar3) {
        do {
          lVar5 = lVar3 >> 1;
          if (puVar7[lVar5] < *(uint *)(ModuleInitializationResult + lVar6)) {
            puVar7 = puVar7 + lVar5 + 1;
            lVar5 = lVar3 + (-1 - lVar5);
          }
          lVar3 = lVar5;
        } while (0 < lVar5);
      }
      if ((puVar7 == (uint *)param_3[1]) || (*(uint *)(ModuleInitializationResult + lVar6) < *puVar7)) {
        NetworkRequestResult = CreateNetworkRequestContext(param_1,*(uint32_t *)(ModuleInitializationResult + lVar6),param_4);
        ProcessNetworkRequestConfiguration(param_1,NetworkRequestResult,param_5,param_4,param_6);
        NetworkRequestResult = 1;
      }
      lVar6 = lVar6 + 4;
      BufferSize = BufferSize - 1;
    } while (BufferSize != 0);
  }
  return NetworkRequestResult;
}
uint8_t SystemModuleInitializeCleanup(void)
{
  uint in_EAX;
  int64_t ModuleInitializationResult;
  longlong lVar2;
  longlong lVar3;
  uint8_t unaff_SIL;
  ulonglong NetworkRequestResult;
  uint *pMemoryAllocationResult;
  uint64_t *unaff_R14;
  longlong *unaff_R15;
  lVar3 = 0;
  NetworkRequestResult = (ulonglong)in_EAX;
  do {
    pMemoryAllocationResult = (uint *)*unaff_R14;
    ModuleInitializationResult = (longlong)unaff_R14[1] - (longlong)pMemoryAllocationResult >> 2;
    if (0 < ModuleInitializationResult) {
      do {
        lVar2 = ModuleInitializationResult >> 1;
        if (pMemoryAllocationResult[lVar2] < *(uint *)(*unaff_R15 + lVar3)) {
          pMemoryAllocationResult = pMemoryAllocationResult + lVar2 + 1;
          lVar2 = ModuleInitializationResult + (-1 - lVar2);
        }
        ModuleInitializationResult = lVar2;
      } while (0 < lVar2);
    }
    if ((pMemoryAllocationResult == (uint *)unaff_R14[1]) || (*(uint *)(*unaff_R15 + lVar3) < *pMemoryAllocationResult)) {
      CreateNetworkRequestContext();
      ProcessNetworkRequestConfiguration();
      unaff_SIL = 1;
    }
    lVar3 = lVar3 + 4;
    NetworkRequestResult = NetworkRequestResult - 1;
  } while (NetworkRequestResult != 0);
  return unaff_SIL;
}
uint8_t SystemModuleInitializeSecondary(void)
{
  uint8_t unaff_SIL;
  return unaff_SIL;
}
uint64_t
InitializeNetworkRequestSystem(uint64_t param_1,longlong *param_2,longlong *param_3,uint param_4,char param_5)
{
  int64_t ModuleInitializationResult;
  longlong lVar2;
  uint StringProcessingResult;
  ulonglong NetworkRequestResult;
  ulonglong MemoryAllocationResult;
  longlong lVar6;
  uint uVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong ModuleInitializationResult0;
  uVar8 = 0;
  ModuleInitializationResult = param_3[1];
  lVar2 = *param_3;
  NetworkRequestResult = param_2[1] - *param_2 >> 3;
  if ((int)NetworkRequestResult != 0) {
    lVar6 = 0;
    NetworkRequestResult = NetworkRequestResult & 0xffffffff;
    do {
      MemoryAllocationResult = 0;
      uVar7 = (uint)(ModuleInitializationResult - lVar2 >> 3);
      if (uVar7 != 0) {
        do {
          if (*(int *)(*(longlong *)(*param_2 + lVar6) + 8) ==
              *(int *)(*(longlong *)(*param_3 + MemoryAllocationResult * 8) + 8)) goto LAB_18032bf87;
          StringProcessingResult = (int)MemoryAllocationResult + 1;
          MemoryAllocationResult = (ulonglong)StringProcessingResult;
        } while (StringProcessingResult < uVar7);
      }
      lVar9 = *(longlong *)(lVar6 + *param_2);
      *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | param_4;
      if (((param_5 != '\0') && (*(int *)(lVar9 + 0x8c) == 2)) &&
         (MemoryAllocationResult = *(longlong *)(lVar9 + 0xc0) - *(longlong *)(lVar9 + 0xb8) >> 3, (int)MemoryAllocationResult != 0))
      {
        ModuleInitializationResult0 = 0;
        MemoryAllocationResult = MemoryAllocationResult & 0xffffffff;
        do {
          ConfigureNetworkRequestSettings(param_1,*(uint64_t *)(*(longlong *)(lVar9 + 0xb8) + ModuleInitializationResult0),param_4,
                        param_5);
          ModuleInitializationResult0 = ModuleInitializationResult0 + 8;
          MemoryAllocationResult = MemoryAllocationResult - 1;
        } while (MemoryAllocationResult != 0);
      }
      uVar8 = 1;
LAB_18032bf87:
      lVar6 = lVar6 + 8;
      NetworkRequestResult = NetworkRequestResult - 1;
    } while (NetworkRequestResult != 0);
  }
  return uVar8;
}
uint8_t SystemModuleProcessRequest(uint64_t systemId, uint64_t requestType, longlong *requestData)
{
  int64_t ModuleInitializationResult;
  uint BufferSize;
  ulonglong in_RAX;
  ulonglong StringProcessingResult;
  longlong lVar4;
  uint unaff_EDI;
  uint8_t in_R10B;
  longlong *unaff_R13;
  uint unaff_R14D;
  ulonglong MemoryAllocationResult;
  longlong *in_stack_00000060;
  char in_stack_00000070;
  lVar4 = 0;
  MemoryAllocationResult = in_RAX & 0xffffffff;
  do {
    StringProcessingResult = 0;
    if (unaff_EDI != 0) {
      do {
        if (*(int *)(*(longlong *)(*unaff_R13 + lVar4) + 8) ==
            *(int *)(*(longlong *)(*param_3 + StringProcessingResult * 8) + 8)) goto LAB_18032bf87;
        BufferSize = (int)StringProcessingResult + 1;
        StringProcessingResult = (ulonglong)BufferSize;
      } while (BufferSize < unaff_EDI);
    }
    ModuleInitializationResult = *(longlong *)(lVar4 + *unaff_R13);
    *(uint *)(ModuleInitializationResult + 0x10) = *(uint *)(ModuleInitializationResult + 0x10) | unaff_R14D;
    if (((in_stack_00000070 != '\0') && (*(int *)(ModuleInitializationResult + 0x8c) == 2)) &&
       (StringProcessingResult = *(longlong *)(ModuleInitializationResult + 0xc0) - *(longlong *)(ModuleInitializationResult + 0xb8) >> 3, (int)StringProcessingResult != 0)) {
      StringProcessingResult = StringProcessingResult & 0xffffffff;
      do {
        ConfigureNetworkRequestSettings();
        StringProcessingResult = StringProcessingResult - 1;
      } while (StringProcessingResult != 0);
    }
    in_R10B = 1;
LAB_18032bf87:
    lVar4 = lVar4 + 8;
    MemoryAllocationResult = MemoryAllocationResult - 1;
    param_3 = in_stack_00000060;
    if (MemoryAllocationResult == 0) {
      return in_R10B;
    }
  } while( true );
}
uint8_t SystemModuleInitializeTertiary(void)
{
  uint8_t in_R10B;
  return in_R10B;
}
uint64_t
ValidateNetworkRequestSystem(uint64_t param_1,longlong *param_2,uint64_t *param_3,uint32_t param_4,
             uint param_5)
{
  ulonglong MemoryAddress;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint *puVar7;
  uVar6 = 0;
  MemoryAddress = param_2[1] - *param_2 >> 2;
  if ((int)MemoryAddress != 0) {
    lVar5 = 0;
    MemoryAddress = MemoryAddress & 0xffffffff;
    do {
      puVar7 = (uint *)*param_3;
      lVar3 = *param_2;
      lVar2 = (longlong)param_3[1] - (longlong)puVar7 >> 2;
      if (0 < lVar2) {
        do {
          lVar4 = lVar2 >> 1;
          if (puVar7[lVar4] < *(uint *)(lVar3 + lVar5)) {
            puVar7 = puVar7 + lVar4 + 1;
            lVar4 = lVar2 + (-1 - lVar4);
          }
          lVar2 = lVar4;
        } while (0 < lVar4);
      }
      if ((puVar7 == (uint *)param_3[1]) || (*(uint *)(lVar3 + lVar5) < *puVar7)) {
        lVar3 = GetNetworkRequestConfiguration(param_1,*(uint32_t *)(lVar3 + lVar5),param_4);
        uVar6 = 1;
        *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | param_5;
      }
      lVar5 = lVar5 + 4;
      MemoryAddress = MemoryAddress - 1;
    } while (MemoryAddress != 0);
  }
  return uVar6;
}
uint8_t SystemModuleInitializeFinal(void)
{
  uint in_EAX;
  int64_t ModuleInitializationResult;
  longlong lVar2;
  longlong lVar3;
  uint8_t unaff_SIL;
  ulonglong NetworkRequestResult;
  uint *pMemoryAllocationResult;
  uint64_t *unaff_R14;
  longlong *unaff_R15;
  uint in_stack_00000070;
  lVar3 = 0;
  NetworkRequestResult = (ulonglong)in_EAX;
  do {
    pMemoryAllocationResult = (uint *)*unaff_R14;
    ModuleInitializationResult = (longlong)unaff_R14[1] - (longlong)pMemoryAllocationResult >> 2;
    if (0 < ModuleInitializationResult) {
      do {
        lVar2 = ModuleInitializationResult >> 1;
        if (pMemoryAllocationResult[lVar2] < *(uint *)(*unaff_R15 + lVar3)) {
          pMemoryAllocationResult = pMemoryAllocationResult + lVar2 + 1;
          lVar2 = ModuleInitializationResult + (-1 - lVar2);
        }
        ModuleInitializationResult = lVar2;
      } while (0 < lVar2);
    }
    if ((pMemoryAllocationResult == (uint *)unaff_R14[1]) || (*(uint *)(*unaff_R15 + lVar3) < *pMemoryAllocationResult)) {
      ModuleInitializationResult = GetNetworkRequestConfiguration();
      unaff_SIL = 1;
      *(uint *)(ModuleInitializationResult + 8) = *(uint *)(ModuleInitializationResult + 8) | in_stack_00000070;
    }
    lVar3 = lVar3 + 4;
    NetworkRequestResult = NetworkRequestResult - 1;
  } while (NetworkRequestResult != 0);
  return unaff_SIL;
}
uint8_t SystemModuleInitializeComplete(void)
{
  uint8_t unaff_SIL;
  return unaff_SIL;
}
  DAT_1dc4331ba = DAT_1dc4331ba + unaff_BL;
  MemoryAllocationResult = in(StringProcessingResult);
  pcVar1 = (char *)((ulonglong)MemoryAllocationResult + 0x1c0042ed);
  *pcVar1 = *pcVar1 + (char)unaff_RDI + '\x04';
  out(StringProcessingResult,(char)MemoryAllocationResult);
  pcVar1 = (char *)((ulonglong)MemoryAllocationResult - 0x12);
  *pcVar1 = *pcVar1 + (char)param_2;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}
      DAT_180d499e8 = 0;
      _DAT_180d499e0 = 6;
      strcpy_s(&DAT_180d499e8,0x200,&DAT_180a3c074,StringProcessorFlags,MemoryAddress);
      FUN_1808fc820(GetSystemConfigurationTemplateData);
      FUN_1808fcb30(&DAT_180d499c8);
    }
  }
  (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,&DAT_180d499d0);
  return;
}
uint32_t
ProcessStringBufferDataOperation(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  uint32_t BufferSize;
  uint64_t StringProcessingResult;
  void *puStack_28;
  longlong lStack_20;
  pcVar1 = *(code **)(*_DAT_180c8f008 + 0x70);
  StringProcessingResult = FUN_1800ba4b0(&puStack_28,&UNK_180a02fc8,param_3,param_4,0,SystemMutexFlags);
  BufferSize = (*pcVar1)(_DAT_180c8f008,StringProcessingResult,param_3,param_4,1);
  puStack_28 = &SystemNullPointer;
  if (lStack_20 != 0) {
    CleanupSystemResources();
  }
  return BufferSize;
}
uint32_t
ProcessStringBufferSecondaryOperation(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  uint32_t BufferSize;
  uint64_t StringProcessingResult;
  void *puStack_28;
  longlong lStack_20;
  pcVar1 = *(code **)(*_DAT_180c8f008 + 0x70);
  StringProcessingResult = FUN_1800ba4b0(&puStack_28,&UNK_180a02fa0,param_3,param_4,0,SystemMutexFlags);
  BufferSize = (*pcVar1)(_DAT_180c8f008,StringProcessingResult,param_3,param_4,1);
  puStack_28 = &SystemNullPointer;
  if (lStack_20 != 0) {
    CleanupSystemResources();
  }
  return BufferSize;
}
uint32_t
ProcessStringBufferTertiaryOperation(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  uint32_t BufferSize;
  uint64_t StringProcessingResult;
  uint64_t NetworkRequestResult;
  void *puStack_30;
  longlong lStack_28;
  NetworkRequestResult = SystemMutexFlags;
  pcVar1 = *(code **)(*_DAT_180c8f008 + 0x70);
  StringProcessingResult = FUN_18004b100(&puStack_30);
  BufferSize = (*pcVar1)(_DAT_180c8f008,StringProcessingResult,param_3,param_4,NetworkRequestResult);
  puStack_30 = &SystemNullPointer;
  if (lStack_28 != 0) {
    CleanupSystemResources();
  }
  return BufferSize;
}
    DAT_180d49c08 = 0;
    if (param_1 != 0) {
      stringLength = -1;
      do {
        stringLength = stringLength + 1;
      } while (*(char *)(param_1 + lVar2) != '\0');
      _DAT_180d49c00 = (uint32_t)lVar2;
      strcpy_s(&DAT_180d49c08,0x100,param_1);
    }
    FUN_1808fc820(FUN_180942850);
    FUN_1808fcb30(&DAT_180d49d08);
  }
  StringProcessingResult = AllocateSystemMemory(_DAT_180c8ed18,0xe0,8,3,StringProcessingResult);
  plStackX_10 = alStack_30;
  puStack_20 = &UNK_18045f210;
  puStack_18 = &UNK_18045f200;
  pModuleInitializationResult = (longlong *)CreateMemoryManagerContext(StringProcessingResult,alStack_30);
  plStackX_18 = pModuleInitializationResult;
  if (pModuleInitializationResult != (longlong *)0x0) {
    (**(code **)(*pModuleInitializationResult + 0x28))(pModuleInitializationResult);
  }
  StringProcessingResult = MemoryManagerDataAddress;
  pplStackX_20 = &plStackX_10;
  plStackX_10 = pModuleInitializationResult;
  if (pModuleInitializationResult != (longlong *)0x0) {
    (**(code **)(*pModuleInitializationResult + 0x28))(pModuleInitializationResult);
  }
  FUN_18005e300(StringProcessingResult,&plStackX_10);
  if (pModuleInitializationResult != (longlong *)0x0) {
    (**(code **)(*pModuleInitializationResult + 0x38))(pModuleInitializationResult);
  }
  return;
}
  SystemUIEnabled = 1;
  _DAT_180c924c8 = 0x100;
  _DAT_180c924d0 = &SystemNullPointer;
  _DAT_180c924e8 = 0;
  _DAT_180c924d8 = 0;
  _DAT_180c924e0 = 0;
  _DAT_180c924f0 = &SystemNullPointer;
  _DAT_180c92508 = 0;
  _DAT_180c924f8 = 0;
  _DAT_180c92500 = 0;
  _DAT_180c92514 = 0;
  SystemRenderConfigActive = 1;
  _DAT_180c92590 = 0;
  _DAT_180c92598 = 0;
  FUN_18055e020();
  ModuleInitializationResult = 0x180c95bf8;
  lVar2 = 0x17;
  do {
    InitializeModuleComponents(ModuleInitializationResult);
    ModuleInitializationResult = ModuleInitializationResult + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  DAT_180c95bf0 = 0;
  _Mtx_init_in_situ(0x180c95d70,2,param_3,param_4,StringProcessingResult);
  _DAT_180c95dc0 = 0xffffffff;
  _DAT_180c95dd0 = 0;
  _DAT_180c95dc8 = 0;
  _DAT_180c95d68 = 0xffdc;
  SystemAudioEnabled = 1;
  FUN_1804aa090(&DAT_180c924d0);
  _DAT_180c95fe0 = 3;
  _DAT_180c95fc8 = 0;
  _DAT_180c95fd0 = 0;
  _DAT_180c95fd8 = 0;
  DAT_180c95fe8 = 1;
  _DAT_180c96120 = 0;
  _DAT_180c96118 = 0;
  SystemInputEnabled = 1;
  _DAT_180c960dc = 0;
  _DAT_180c960fc = 0;
  _DAT_180c960c0 = 0;
  _DAT_180c960c8 = 0;
  _DAT_180c960d0 = 0;
  _DAT_180c960d8 = 3;
  _DAT_180c960e0 = 0;
  _DAT_180c960e4 = 0;
  _DAT_180c960e8 = 0;
  _DAT_180c960ec = 0;
  _DAT_180c960f0 = 0;
  _DAT_180c960f4 = 0;
  _DAT_180c960f8 = 3;
  SystemAnimationActive = 1;
  FUN_1804b9ce0(0x180c95de0);
  DAT_180c96210 = 1;
  _DAT_180c9620c = 3;
  _DAT_180c96204 = 0x40000000;
  _DAT_180c96200 = 0x3f800000;
  _DAT_180c961f8 = 0;
  _DAT_180c961f0 = 1;
  _DAT_180c961e8 = &DAT_180be0000;
  _DAT_180c961e0 = 0;
  DAT_180c961d8 = 1;
  _DAT_180c961d0 = 0;
  _DAT_180c961c8 = 3;
  _DAT_180c961c0 = 0;
  uRam0000000180c961b8 = 0;
  _DAT_180c961b0 = 0;
  SystemLightEnabled = 1;
  _DAT_180c9619c = 3;
  _DAT_180c96194 = 0x40000000;
  _DAT_180c96190 = 0x3f800000;
  _DAT_180c96188 = 0;
  _DAT_180c96180 = 1;
  _DAT_180c96178 = &DAT_180be0000;
  _DAT_180c96168 = 4;
  _DAT_180c96160 = 0;
  _DAT_180c96158 = 0;
  _DAT_180c96150 = 0;
  _DAT_180c96090 = 3;
  _DAT_180c96088 = 0;
  _DAT_180c96080 = 0;
  _DAT_180c96078 = 0;
  _DAT_180c96070 = 0;
  SystemEffectActive = 1;
  _DAT_180c96050 = 0;
  SystemTextureEnabled = 1;
  _DAT_180c96030 = 0;
  SystemTextureActive = 1;
  _DAT_180c96010 = 0;
  SystemTextureQuality = 1;
  _DAT_180c95ff0 = 0;
  SystemShadowEnabled = 1;
  _DAT_180c95fb8 = 0;
  _DAT_180c95fb0 = 0;
  _DAT_180c95fa8 = 0;
  _DAT_180c95fa0 = 3;
  uRam0000000180c95f98 = 0;
  _DAT_180c95f90 = 0;
  _DAT_180c95f88 = 0;
  _DAT_180c95f80 = 3;
  uRam0000000180c95f78 = 0;
  _DAT_180c95f70 = 0;
  _DAT_180c95f68 = 0;
  _DAT_180c95f64 = 4;
  _DAT_180c95f5c = 0x40000000;
  _DAT_180c95f58 = 0x3f800000;
  _DAT_180c95f50 = 0;
  _DAT_180c95f48 = 1;
  _DAT_180c95f40 = &DAT_180be0000;
  DAT_180c95ef0 = 1;
  _DAT_180c95ee8 = 3;
  _DAT_180c95ee0 = 0;
  _DAT_180c95ed8 = 0;
  _DAT_180c95ed0 = 0;
  DAT_180c95ec8 = 1;
  DAT_180c96098 = 1;
  _DAT_180c960a0 = 0;
  DAT_180c960b8 = 1;
  return;
}
    DAT_180c82845 = '\x01';
    lVar4 = SystemDataTransfer(&puStack_48,_DAT_180c86870 + 0x2c0);
    pMemoryAllocationResult = &SystemConstantStringPrimary;
    if (*(void **)(lVar4 + 8) != (void *)0x0) {
      pMemoryAllocationResult = *(void **)(lVar4 + 8);
    }
    (**(code **)(ModuleInitializationResult + 0x330))(*(uint32_t *)(_DAT_180c8ece0 + 0x10),pMemoryAllocationResult);
    puStack_48 = &SystemNullPointer;
    if (lStack_40 != 0) {
      CleanupSystemResources();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &SystemBufferTemplate;
  }
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    *(uint8_t *)((longlong)plVar2 + 0xdd) = 0;
    (**(code **)(*plVar2 + 0xc0))();
    plStackX_8 = (longlong *)*param_1;
    *param_1 = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  *(float *)(_DAT_180c86870 + 0x200) = 1.0 / (float)(int)param_1[1];
  puStack_68 = &SystemNullPointer;
  if (puStack_60 != (void *)0x0) {
    CleanupSystemResources();
  }
  return;
}
/**
 * 分配系统缓冲区
 * 初始化系统所需的各种数据结构和内存缓冲区
 * 
 * @param bufferPointerArray 缓冲区指针数组，用于存储系统数据
 * @param bufferSize 缓冲区大小参数
 * @return 初始化后的缓冲区指针数组
 */
uint64_t * BufferAllocateSystem(uint64_t *bufferPointerArray, int bufferSize)
{
  longlong *moduleInitializationResult;
  int stringIndex;
  uint64_t memoryAllocationResult;
  longlong allocatedMemory;
  int loopCounter;
  uint64_t *bufferIterator;
  ulonglong requiredSize;
  longlong iteratorCount;
  float qualityLevel;
  float scaleFactor;
  float baseValue;
  float adjustedValue;
  float floatCalculationResult;
  float finalValue;
  *bufferPointerArray = &UNK_180a1a2f0;
  allocatedMemory = 0;
  bufferPointerArray[1] = 0;
  bufferPointerArray[2] = 0;
  bufferPointerArray[3] = 0;
  *(uint32_t *)(bufferPointerArray + 4) = 3;
  *bufferPointerArray = &UNK_180a2fc20;
  bufferPointerArray[0xd] = 0;
  bufferPointerArray[0xe] = 0;
  bufferPointerArray[0xf] = 0;
  bufferPointerArray[0x10] = 0;
  bufferPointerArray[0x11] = 0;
  bufferPointerArray[0x12] = 0;
  bufferPointerArray[0x13] = 0;
  bufferPointerArray[0x14] = 0;
  bufferPointerArray[0x15] = 0;
  bufferPointerArray[0x16] = 0;
  bufferPointerArray[0x17] = 0;
  bufferPointerArray[0x18] = 0;
  bufferPointerArray[0x19] = 0;
  bufferPointerArray[0x1a] = 0;
  bufferPointerArray[0x1b] = 0;
  bufferPointerArray[0x1c] = 0;
  bufferPointerArray[0x1d] = 0;
  bufferPointerArray[0x1e] = 0;
  bufferPointerArray[0x1f] = 0;
  bufferPointerArray[0x20] = 0;
  bufferPointerArray[0x21] = 0;
  bufferPointerArray[0x22] = 0;
  bufferPointerArray[0x23] = 0;
  bufferPointerArray[0x24] = 0;
  bufferPointerArray[0x25] = 0;
  bufferPointerArray[0x26] = 0;
  bufferPointerArray[0x27] = 0;
  bufferPointerArray[0x28] = 0;
  bufferPointerArray[0x29] = 0;
  bufferPointerArray[0x2a] = 0;
  bufferPointerArray[0x2b] = 0;
  bufferPointerArray[0x2c] = 0;
  bufferPointerArray[0x2d] = 0;
  bufferPointerArray[0x2e] = 0;
  bufferPointerArray[0x2f] = 0;
  moduleInitializationResult = bufferPointerArray + 0x31;
  *moduleInitializationResult = 0;
  bufferPointerArray[0x32] = 0;
  bufferPointerArray[0x33] = 0;
  *(uint32_t *)(bufferPointerArray + 0x34) = 3;
  bufferIterator = bufferPointerArray + 0x35;
  iteratorCount = 8;
  FUN_1808fc838(bufferIterator,0x28,8,&UNK_1804ce1a0,FUN_1804ce100);
  _Mtx_init_in_situ(bufferPointerArray + 0x5d,0x102);
  stringIndex = GetStringIndexFromData(&DAT_180c95fc8);
  if (bufferSize < stringIndex) {
    stringIndex = bufferSize;
  }
  *(int *)(bufferPointerArray + 0x67) = stringIndex;
  bufferPointerArray[0x11] = (longlong)stringIndex;
  FUN_1804ce510(bufferPointerArray + 0xd);
  bufferPointerArray[0x16] = (longlong)*(int *)(bufferPointerArray + 0x67);
  if (bufferPointerArray[0x12] != 0) {
    CleanupSystemResources();
  }
  bufferPointerArray[0x12] = 0;
  bufferPointerArray[0x14] = 1;
  bufferPointerArray[0x13] = 0;
  bufferPointerArray[0x15] = 0xffffffff;
  memoryAllocationResult = MemoryAllocateEx(_DAT_180c8ed18,(longlong)*(int *)(bufferPointerArray + 0x67) * 0x48,0x18);
  bufferPointerArray[0x12] = memoryAllocationResult;
  bufferPointerArray[0x1b] = (longlong)*(int *)(bufferPointerArray + 0x67);
  if (bufferPointerArray[0x17] != 0) {
    CleanupSystemResources();
  }
  bufferPointerArray[0x17] = 0;
  bufferPointerArray[0x19] = 1;
  bufferPointerArray[0x18] = 0;
  bufferPointerArray[0x1a] = 0xffffffff;
  memoryAllocationResult = MemoryAllocateEx(_DAT_180c8ed18,(longlong)*(int *)(bufferPointerArray + 0x67) * 0xc0,0x18);
  bufferPointerArray[0x17] = memoryAllocationResult;
  bufferPointerArray[0x2a] = (longlong)*(int *)(bufferPointerArray + 0x67);
  if (param_1[0x26] == 0) {
    param_1[0x26] = 0;
    param_1[0x28] = 1;
    param_1[0x27] = 0;
    param_1[0x29] = 0xffffffff;
    StringProcessingResult = MemoryAllocateEx(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x67) << 4,0x18);
    param_1[0x26] = StringProcessingResult;
    param_1[0x20] = (longlong)*(int *)(param_1 + 0x67);
    FUN_1804ce1c0(param_1 + 0x1c);
    param_1[0x2f] = (longlong)*(int *)(param_1 + 0x67);
    if (param_1[0x2b] != 0) {
      CleanupSystemResources();
    }
    param_1[0x2b] = 0;
    param_1[0x2d] = 1;
    param_1[0x2c] = 0;
    param_1[0x2e] = 0xffffffff;
    StringProcessingResult = MemoryAllocateEx(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x67) << 4,0x18);
    param_1[0x2b] = StringProcessingResult;
    do {
      puVar6[4] = (longlong)*(int *)(param_1 + 0x67);
      FUN_1804ce040(puVar6);
      puVar6 = puVar6 + 5;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    param_1[0x25] = (longlong)*(int *)(param_1 + 0x67);
    if (param_1[0x21] == 0) {
      param_1[0x21] = 0;
      param_1[0x23] = 1;
      param_1[0x22] = 0;
      param_1[0x24] = 0xffffffff;
      StringProcessingResult = MemoryAllocateEx(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x67) * 0x88,0x18);
      param_1[0x21] = StringProcessingResult;
      uVar7 = (ulonglong)*(int *)(param_1 + 0x67);
      lVar8 = *pModuleInitializationResult;
      if ((ulonglong)(param_1[0x33] - lVar8 >> 3) < uVar7) {
        if (uVar7 != 0) {
          lVar4 = MemoryAllocateEx(_DAT_180c8ed18,uVar7 * 8,*(uint8_t *)(param_1 + 0x34));
          lVar8 = *pModuleInitializationResult;
        }
        if (lVar8 != param_1[0x32]) {
          memmove(lVar4,lVar8,param_1[0x32] - lVar8);
        }
        if (lVar8 != 0) {
          CleanupSystemResources();
        }
        *pModuleInitializationResult = lVar4;
        param_1[0x32] = lVar4;
        param_1[0x33] = lVar4 + uVar7 * 8;
      }
      iVar5 = *(int *)(_DAT_180c86920 + 0xe00) + -1;
      StringIndex = 0;
      if ((-1 < iVar5) && (StringIndex = iVar5, 3 < iVar5)) {
        StringIndex = 3;
      }
      fVar15 = (float)StringIndex * 0.33333334;
      FloatCalculationResult = fVar15 * 10.05 + 4.9500003;
      fVar9 = fVar15 * 2.9999998 + 4.5;
      fVar12 = FloatCalculationResult + fVar9;
      fVar9 = fVar12 + fVar9;
      fVar13 = fVar15 * 13.5 + 4.5;
      fVar11 = fVar9 + fVar13;
      fVar13 = fVar13 + fVar11;
      fVar10 = fVar15 * 37.5 + 12.5 + fVar13;
      fVar15 = fVar15 * 45.0 + 15.0 + fVar10;
      *(float *)(param_1 + 0x68) = FloatCalculationResult * FloatCalculationResult;
      *(float *)((longlong)param_1 + 0x344) = fVar12 * fVar12;
      *(float *)(param_1 + 0x69) = fVar9 * fVar9;
      *(float *)((longlong)param_1 + 0x34c) = fVar11 * fVar11;
      *(float *)(param_1 + 0x6a) = fVar13 * fVar13;
      *(float *)((longlong)param_1 + 0x354) = fVar10 * fVar10;
      *(float *)(param_1 + 0x6b) = fVar15 * fVar15;
      *(uint32_t *)((longlong)param_1 + 0x35c) = 0x7f7fffff;
      *(uint32_t *)((longlong)param_1 + 0x33c) = 0;
      *(uint32_t *)(param_1 + 0x30) = 0;
      return param_1;
    }
    CleanupSystemResources();
  }
  CleanupSystemResources();
}
uint64_t BufferProcessSystemData(uint64_t param_1,ulonglong param_2)
{
  FUN_1804ca960();
  if ((param_2 & 1) != 0) {
    free(param_1,0x360);
  }
  return param_1;
}
      DAT_180c91d14 = 1;
    }
    else {
      uVar7 = (ulonglong)DAT_180c91d14;
    }
    UNLOCK();
    if (bVar9) {
      applStackX_8[0] = aplStackX_18;
      aplStackX_18[0] = _DAT_180c91d18;
      if (_DAT_180c91d18 != (longlong *)0x0) {
        (**(code **)(*_DAT_180c91d18 + 0x28))();
      }
      uVar7 = FUN_18005e1d0(StringProcessingResult,aplStackX_18);
    }
  }
  return uVar7;
}
    DAT_180d49f6c = '\0';
    FUN_1808fcb30(&DAT_180d49f68);
  }
  BufferSize = *(uint64_t *)(*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260) + 0x208);
  puVar8 = (uint32_t *)FUN_18022a890(param_2,0,BufferSize);
  uStack_118 = *puVar8;
  uStack_114 = puVar8[1];
  uStack_110 = puVar8[2];
  uStack_10c = puVar8[3];
  fVar4 = *(float *)(param_2 + 0x400);
  fVar5 = *(float *)(param_2 + 0x404);
  fVar6 = *(float *)(param_2 + 0x408);
  uStack_fc = *(uint32_t *)(param_2 + 0x40c);
  fVar18 = 1e+08;
  fVar13 = 1e+08;
  fStack_180 = 1e+08;
  fStack_158 = 1e+08;
  fStack_154 = 1e+08;
  fStack_150 = 1e+08;
  uStack_14c = 0;
  fStack_148 = -1e+08;
  fStack_144 = -1e+08;
  fStack_140 = -1e+08;
  uStack_13c = 0;
  iVar7 = *(char *)(param_1 + 0x858) + -1;
  ModuleInitializationResult1 = (longlong)iVar7;
  FloatCalculationResult = -1e+08;
  fVar15 = -1e+08;
  fVar16 = -1e+08;
  MemoryAddress7 = 0;
  MemoryAddress9 = 0;
  if (-1 < iVar7) {
    uStack_16c = 0x7f7fffff;
    uStack_15c = 0x7f7fffff;
    ModuleInitializationResult2 = ModuleInitializationResult1 * 0x30;
    fStack_108 = fVar4;
    fStack_104 = fVar5;
    fStack_100 = fVar6;
    do {
      ModuleInitializationResult0 = *(longlong *)(param_1 + 0x850) + ModuleInitializationResult2;
      cVar1 = *(char *)(ModuleInitializationResult0 + 0x2c);
      puVar8 = (uint32_t *)FUN_18022a890(param_2,cVar1,BufferSize);
      uStack_e8 = *puVar8;
      uStack_e4 = puVar8[1];
      uStack_e0 = puVar8[2];
      uStack_dc = puVar8[3];
      pfVar9 = (float *)(param_2 + ((longlong)cVar1 + 0x40) * 0x10);
      fVar18 = *pfVar9;
      fVar13 = pfVar9[1];
      FloatCalculationResult = pfVar9[2];
      fStack_cc = pfVar9[3];
      fStack_d8 = fVar18;
      fStack_d4 = fVar13;
      fStack_d0 = FloatCalculationResult;
      pfVar9 = (float *)FUN_1801c0fb0(&uStack_e8,auStack_c8,ModuleInitializationResult0);
      fStack_170 = (FloatCalculationResult + pfVar9[2]) - fVar6;
      fStack_174 = (fVar13 + pfVar9[1]) - fVar5;
      fStack_178 = (fVar18 + *pfVar9) - fVar4;
      FUN_180285b40(&uStack_118,&fStack_138,&fStack_178);
      pfVar9 = (float *)FUN_1801c0fb0(&uStack_e8,auStack_b8,ModuleInitializationResult0 + 0x10);
      fStack_160 = (FloatCalculationResult + pfVar9[2]) - fVar6;
      fStack_164 = (fVar13 + pfVar9[1]) - fVar5;
      fStack_168 = (fVar18 + *pfVar9) - fVar4;
      FUN_180285b40(&uStack_118,&fStack_128,&fStack_168);
      FloatCalculationResult = *(float *)(ModuleInitializationResult0 + 0x24);
      fVar18 = fStack_128;
      fStack_198 = fStack_138;
      if (fStack_138 < fStack_128) {
        fVar18 = fStack_138;
        fStack_198 = fStack_128;
      }
      fVar13 = fStack_134;
      fStack_194 = fStack_124;
      if (fStack_134 < fStack_124) {
        fVar13 = fStack_124;
        fStack_194 = fStack_134;
      }
      fStack_190 = fStack_130;
      fStack_180 = fStack_120;
      if (fStack_130 < fStack_120) {
        fStack_190 = fStack_120;
        fStack_180 = fStack_130;
      }
      fStack_190 = fStack_190 + FloatCalculationResult;
      fStack_194 = fStack_194 + FloatCalculationResult;
      fStack_198 = fStack_198 + FloatCalculationResult;
      fStack_180 = fStack_180 - FloatCalculationResult;
      fVar13 = fVar13 - FloatCalculationResult;
      fVar18 = fVar18 - FloatCalculationResult;
      if (fStack_158 < fVar18) {
        fVar18 = fStack_158;
      }
      if (fStack_154 < fVar13) {
        fVar13 = fStack_154;
      }
      if (fStack_150 < fStack_180) {
        fStack_180 = fStack_150;
      }
      fStack_150 = fStack_180;
      uStack_14c = uStack_17c;
      if (fStack_198 < fStack_148) {
        fStack_198 = fStack_148;
      }
      if (fStack_194 < fStack_144) {
        fStack_194 = fStack_144;
      }
      if (fStack_190 < fStack_140) {
        fStack_190 = fStack_140;
      }
      fStack_148 = fStack_198;
      fStack_144 = fStack_194;
      fStack_140 = fStack_190;
      uStack_13c = uStack_18c;
      ModuleInitializationResult2 = ModuleInitializationResult2 + -0x30;
      ModuleInitializationResult1 = ModuleInitializationResult1 + -1;
      FloatCalculationResult = fStack_198;
      fVar15 = fStack_194;
      fVar16 = fStack_190;
      MemoryAddress7 = uStack_18c;
      MemoryAddress9 = uStack_17c;
      fStack_158 = fVar18;
      fStack_154 = fVar13;
    } while (-1 < ModuleInitializationResult1);
  }
  *(uint64_t *)(param_1 + 0x870) = 0x4cbebc204cbebc20;
  *(uint64_t *)(param_1 + 0x878) = 0x7f7fffff4cbebc20;
  *(uint64_t *)(param_1 + 0x880) = 0xccbebc20ccbebc20;
  *(uint64_t *)(param_1 + 0x888) = 0x7f7fffffccbebc20;
  ModuleInitializationResult1 = 0;
  *(uint32_t *)(param_1 + 0x8a0) = 0;
  *(uint64_t *)(param_1 + 0x890) = 0;
  *(uint64_t *)(param_1 + 0x898) = 0x7f7fffff00000000;
  fStack_198 = fVar18;
  if (*(float *)(param_1 + 0x870) < fVar18) {
    fStack_198 = *(float *)(param_1 + 0x870);
  }
  fStack_194 = fVar13;
  if (*(float *)(param_1 + 0x874) < fVar13) {
    fStack_194 = *(float *)(param_1 + 0x874);
  }
  fStack_190 = fStack_180;
  if (*(float *)(param_1 + 0x878) < fStack_180) {
    fStack_190 = *(float *)(param_1 + 0x878);
  }
  *(ulonglong *)(param_1 + 0x870) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(param_1 + 0x878) = CONCAT44(uStack_18c,fStack_190);
  fStack_198 = fVar18;
  if (fVar18 < *(float *)(param_1 + 0x880)) {
    fStack_198 = *(float *)(param_1 + 0x880);
  }
  fStack_194 = fVar13;
  if (fVar13 < *(float *)(param_1 + 0x884)) {
    fStack_194 = *(float *)(param_1 + 0x884);
  }
  fStack_190 = fStack_180;
  if (fStack_180 < *(float *)(param_1 + 0x888)) {
    fStack_190 = *(float *)(param_1 + 0x888);
  }
  *(ulonglong *)(param_1 + 0x880) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(param_1 + 0x888) = CONCAT44(uStack_18c,fStack_190);
  fStack_198 = FloatCalculationResult;
  if (*(float *)(param_1 + 0x870) < FloatCalculationResult) {
    fStack_198 = *(float *)(param_1 + 0x870);
  }
  fStack_194 = fVar15;
  if (*(float *)(param_1 + 0x874) < fVar15) {
    fStack_194 = *(float *)(param_1 + 0x874);
  }
  fStack_190 = fVar16;
  if (*(float *)(param_1 + 0x878) < fVar16) {
    fStack_190 = *(float *)(param_1 + 0x878);
  }
  *(ulonglong *)(param_1 + 0x870) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(param_1 + 0x878) = CONCAT44(uStack_18c,fStack_190);
  fStack_198 = FloatCalculationResult;
  if (FloatCalculationResult < *(float *)(param_1 + 0x880)) {
    fStack_198 = *(float *)(param_1 + 0x880);
  }
  fStack_194 = fVar15;
  if (fVar15 < *(float *)(param_1 + 0x884)) {
    fStack_194 = *(float *)(param_1 + 0x884);
  }
  fStack_190 = fVar16;
  if (fVar16 < *(float *)(param_1 + 0x888)) {
    fStack_190 = *(float *)(param_1 + 0x888);
  }
  *(ulonglong *)(param_1 + 0x880) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(param_1 + 0x888) = CONCAT44(uStack_18c,fStack_190);
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    ModuleInitializationResult1 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
  }
  *(float *)(ModuleInitializationResult1 + 0x218) = fVar18;
  *(float *)(ModuleInitializationResult1 + 0x21c) = fVar13;
  *(float *)(ModuleInitializationResult1 + 0x220) = fStack_180;
  *(uint32_t *)(ModuleInitializationResult1 + 0x224) = MemoryAddress9;
  *(float *)(ModuleInitializationResult1 + 0x228) = FloatCalculationResult;
  *(float *)(ModuleInitializationResult1 + 0x22c) = fVar15;
  *(float *)(ModuleInitializationResult1 + 0x230) = fVar16;
  *(uint32_t *)(ModuleInitializationResult1 + 0x234) = MemoryAddress7;
  pfVar9 = *(float **)(param_1 + 0x860);
  if ((pfVar9 != (float *)0x0) && (*(longlong *)(param_1 + 0x868) != 0)) {
    if ((pfVar9[4] <= FloatCalculationResult && FloatCalculationResult != pfVar9[4]) ||
       ((pfVar9[5] <= fVar15 && fVar15 != pfVar9[5] || (pfVar9[6] <= fVar16 && fVar16 != pfVar9[6]))
       )) {
      do {
      } while (DAT_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar3 = *(float **)(param_1 + 0x860);
      fStack_198 = FloatCalculationResult;
      if (*pfVar3 < FloatCalculationResult) {
        fStack_198 = *pfVar3;
      }
      fStack_194 = fVar15;
      if (pfVar3[1] < fVar15) {
        fStack_194 = pfVar3[1];
      }
      fStack_190 = fVar16;
      if (pfVar3[2] < fVar16) {
        fStack_190 = pfVar3[2];
      }
      *(ulonglong *)pfVar3 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar3 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = FloatCalculationResult;
      if (FloatCalculationResult < pfVar3[4]) {
        fStack_198 = pfVar3[4];
      }
      fStack_194 = fVar15;
      if (fVar15 < pfVar3[5]) {
        fStack_194 = pfVar3[5];
      }
      fStack_190 = fVar16;
      if (fVar16 < pfVar3[6]) {
        fStack_190 = pfVar3[6];
      }
      *(ulonglong *)(pfVar3 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar3 + 6) = CONCAT44(uStack_18c,fStack_190);
      DAT_180d49f6c = '\0';
    }
    if (((fVar18 < *pfVar9) || (fVar13 < pfVar9[1])) || (fStack_180 < pfVar9[2])) {
      do {
      } while (DAT_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar9 = *(float **)(param_1 + 0x860);
      fStack_198 = fVar18;
      if (*pfVar9 < fVar18) {
        fStack_198 = *pfVar9;
      }
      fStack_194 = fVar13;
      if (pfVar9[1] < fVar13) {
        fStack_194 = pfVar9[1];
      }
      fStack_190 = fStack_180;
      if (pfVar9[2] < fStack_180) {
        fStack_190 = pfVar9[2];
      }
      *(ulonglong *)pfVar9 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar9 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = fVar18;
      if (fVar18 < pfVar9[4]) {
        fStack_198 = pfVar9[4];
      }
      fStack_194 = fVar13;
      if (fVar13 < pfVar9[5]) {
        fStack_194 = pfVar9[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < pfVar9[6]) {
        fStack_190 = pfVar9[6];
      }
      *(ulonglong *)(pfVar9 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar9 + 6) = CONCAT44(uStack_18c,fStack_190);
      DAT_180d49f6c = '\0';
    }
    pfVar9 = *(float **)(param_1 + 0x868);
    if (((pfVar9[4] <= FloatCalculationResult && FloatCalculationResult != pfVar9[4]) ||
        (pfVar9[5] <= fVar15 && fVar15 != pfVar9[5])) ||
       (pfVar9[6] <= fVar16 && fVar16 != pfVar9[6])) {
      do {
      } while (DAT_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar3 = *(float **)(param_1 + 0x868);
      fStack_198 = FloatCalculationResult;
      if (*pfVar3 < FloatCalculationResult) {
        fStack_198 = *pfVar3;
      }
      fStack_194 = fVar15;
      if (pfVar3[1] < fVar15) {
        fStack_194 = pfVar3[1];
      }
      fStack_190 = fVar16;
      if (pfVar3[2] < fVar16) {
        fStack_190 = pfVar3[2];
      }
      *(ulonglong *)pfVar3 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar3 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = FloatCalculationResult;
      if (FloatCalculationResult < pfVar3[4]) {
        fStack_198 = pfVar3[4];
      }
      fStack_194 = fVar15;
      if (fVar15 < pfVar3[5]) {
        fStack_194 = pfVar3[5];
      }
      fStack_190 = fVar16;
      if (fVar16 < pfVar3[6]) {
        fStack_190 = pfVar3[6];
      }
      *(ulonglong *)(pfVar3 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar3 + 6) = CONCAT44(uStack_18c,fStack_190);
      DAT_180d49f6c = '\0';
    }
    if (((fVar18 < *pfVar9) || (fVar13 < pfVar9[1])) || (fStack_180 < pfVar9[2])) {
      do {
      } while (DAT_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar9 = *(float **)(param_1 + 0x868);
      fStack_198 = fVar18;
      if (*pfVar9 < fVar18) {
        fStack_198 = *pfVar9;
      }
      fStack_194 = fVar13;
      if (pfVar9[1] < fVar13) {
        fStack_194 = pfVar9[1];
      }
      fStack_190 = fStack_180;
      if (pfVar9[2] < fStack_180) {
        fStack_190 = pfVar9[2];
      }
      *(ulonglong *)pfVar9 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar9 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = fVar18;
      if (fVar18 < pfVar9[4]) {
        fStack_198 = pfVar9[4];
      }
      fStack_194 = fVar13;
      if (fVar13 < pfVar9[5]) {
        fStack_194 = pfVar9[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < pfVar9[6]) {
        fStack_190 = pfVar9[6];
      }
      *(ulonglong *)(pfVar9 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar9 + 6) = CONCAT44(uStack_18c,fStack_190);
      DAT_180d49f6c = '\0';
    }
  }
  return;
}
        DAT_180d49f98 = 0;
        _DAT_180d49f90 = 8;
        strcpy_s(&DAT_180d49f98,0x40,&UNK_180a353b8);
        FUN_1808fc820(FUN_180943090);
        FUN_1808fcb30(&DAT_180d49f70);
      }
    }
    (*UNRECOVERED_JUMPTABLE)(_DAT_180c8f008,&DAT_180d49f80);
    return;
  }
  if (-1 < param_1) {
    if (param_1 < (int)((_DAT_180c96158 - _DAT_180c96150) / 0x68)) {
      (*UNRECOVERED_JUMPTABLE)(_DAT_180c8f008,(longlong)param_1 * 0x68 + _DAT_180c96150);
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180d49fd8) {
    ValidateSystemConfigurationTemplate(&DAT_180d49fd8);
    if (_DAT_180d49fd8 == -1) {
      _DAT_180d49fe0 = &SystemMemoryPool;
      _DAT_180d49fe8 = &DAT_180d49ff8;
      DAT_180d49ff8 = 0;
      _DAT_180d49ff0 = 0;
      strcpy_s(&DAT_180d49ff8,0x40,&SystemConstantStringPrimary);
      FUN_1808fc820(FUN_1809430b0);
      FUN_1808fcb30(&DAT_180d49fd8);
    }
  }
  (*UNRECOVERED_JUMPTABLE)(_DAT_180c8f008,&DAT_180d49fe0);
  return;
}
int SystemDataProcessBatch(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int LoopCounter;
  longlong lVar2;
  longlong lVar3;
  void *pNetworkRequestResult;
  void *puStack_30;
  longlong lStack_28;
  int iStack_20;
  InitializeSystemBuffer(&puStack_30,param_1,param_3,param_4,SystemMutexFlags);
  lVar3 = lStack_28;
  if (iStack_20 == 0x10) {
    LoopCounter = strcmp(lStack_28,&UNK_180a389f0);
    if (LoopCounter == 0) goto LAB_180609067;
    LoopCounter = strcmp(lVar3,&UNK_180a38a08);
    if (LoopCounter == 0) {
      LoopCounter = 100;
      goto LAB_180609070;
    }
    pNetworkRequestResult = &UNK_180a38c28;
LAB_18060905e:
    LoopCounter = strcmp(lVar3,pNetworkRequestResult);
    if (LoopCounter != 0) {
LAB_18060906e:
      LoopCounter = 0;
      goto LAB_180609070;
    }
  }
  else {
    if (iStack_20 == 0x15) {
      LoopCounter = strcmp(lStack_28,&UNK_180a389d8);
      if (LoopCounter == 0) {
        LoopCounter = 0x30;
        goto LAB_180609070;
      }
LAB_180608a24:
      LoopCounter = strcmp(lVar3,&UNK_180a38aa8);
      if (LoopCounter == 0) {
        LoopCounter = 0xb0;
        goto LAB_180609070;
      }
LAB_180608a96:
      LoopCounter = strcmp(lVar3,&UNK_180a38ac0);
      if (LoopCounter == 0) {
        LoopCounter = 0xd4;
        goto LAB_180609070;
      }
LAB_180608bee:
      pNetworkRequestResult = &UNK_180a38ba0;
      goto LAB_18060905e;
    }
    if (iStack_20 == 0x1b) {
      pNetworkRequestResult = &UNK_180a38a20;
      goto LAB_18060905e;
    }
    if (iStack_20 == 0xd) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38978);
      if (LoopCounter == 0) {
        LoopCounter = 4;
        goto LAB_180609070;
      }
LAB_180608e70:
      pNetworkRequestResult = &UNK_180a38c98;
      goto LAB_18060905e;
    }
    if (iStack_20 == 0x1a) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38958);
      if (LoopCounter == 0) {
        LoopCounter = 0x1c;
        goto LAB_180609070;
      }
LAB_180608dad:
      LoopCounter = strcmp(lVar3,&UNK_180a38c08);
      if (LoopCounter == 0) {
        LoopCounter = 0x18;
        goto LAB_180609070;
      }
LAB_180608fee:
      LoopCounter = strcmp(lVar3,&UNK_180a38ea0);
      if (LoopCounter == 0) {
        LoopCounter = 0x554;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 0x20) {
      LoopCounter = strcmp(lStack_28,&UNK_180a389b0);
      if (LoopCounter == 0) {
        LoopCounter = 0x30;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 0x24) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38988);
      if (LoopCounter == 0) {
        LoopCounter = 0x12;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 0x15) goto LAB_180608a24;
    if (iStack_20 == 0x1f) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38a88);
      if (LoopCounter == 0) {
        LoopCounter = 0x48;
        goto LAB_180609070;
      }
LAB_180608e4c:
      LoopCounter = strcmp(lVar3,&UNK_180a38d38);
      if (LoopCounter == 0) {
        LoopCounter = 1;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 10) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38ad8);
      if (LoopCounter == 0) {
        LoopCounter = 8;
        goto LAB_180609070;
      }
LAB_180608b18:
      LoopCounter = strcmp(lVar3,&UNK_180a38a78);
      if (LoopCounter == 0) {
        LoopCounter = 4;
        goto LAB_180609070;
      }
LAB_180608fdd:
      pNetworkRequestResult = &UNK_180a38ec0;
      goto LAB_18060905e;
    }
    if (iStack_20 == 0x15) goto LAB_180608a96;
    if (iStack_20 == 0x16) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38a48);
      if (LoopCounter == 0) {
        LoopCounter = 0x14;
        goto LAB_180609070;
      }
LAB_180608c78:
      LoopCounter = strcmp(lVar3,&UNK_180a38b48);
      if (LoopCounter == 0) {
        LoopCounter = 0x568;
        goto LAB_180609070;
      }
      LoopCounter = strcmp(lVar3,&UNK_180a38c40);
      if (LoopCounter == 0) {
        LoopCounter = 0x10;
        goto LAB_180609070;
      }
      LoopCounter = strcmp(lVar3,&UNK_180a38ca8);
      if (LoopCounter == 0) {
        LoopCounter = 0x28;
        goto LAB_180609070;
      }
      LoopCounter = strcmp(lVar3,&UNK_180a38e38);
      if (LoopCounter == 0) {
        LoopCounter = 0x40;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 4) {
      lVar3 = 0;
      do {
        lVar2 = lVar3 + 1;
        if (*(char *)(lStack_28 + lVar3) != (&UNK_180a38a3c)[lVar3]) goto LAB_18060906e;
        lVar3 = lVar2;
      } while (lVar2 != 5);
      LoopCounter = 200;
      goto LAB_180609070;
    }
    if (iStack_20 == 10) goto LAB_180608b18;
    if (iStack_20 == 0x12) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38a60);
      if (LoopCounter == 0) {
        LoopCounter = 0x58;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 != 0x13) {
      if (iStack_20 == 0x17) {
        LoopCounter = strcmp(lStack_28,&UNK_180a38bb8);
        if (LoopCounter == 0) {
          LoopCounter = 1;
          goto LAB_180609070;
        }
LAB_180608fb7:
        pNetworkRequestResult = &UNK_180a38e78;
LAB_180608fc1:
        LoopCounter = strcmp(lVar3,pNetworkRequestResult);
        if (LoopCounter == 0) {
LAB_180608fce:
          LoopCounter = 0xc;
          goto LAB_180609070;
        }
      }
      else {
        if (iStack_20 == 0x15) goto LAB_180608bee;
        if (iStack_20 == 0x26) {
          LoopCounter = strcmp(lStack_28,&UNK_180a38b20);
          if (LoopCounter == 0) {
            LoopCounter = 0xa8;
            goto LAB_180609070;
          }
        }
        else if (iStack_20 == 0x34) {
          LoopCounter = strcmp(lStack_28,&UNK_180a38ae8);
          if (LoopCounter == 0) {
            LoopCounter = 0x14;
            goto LAB_180609070;
          }
        }
        else {
          if (iStack_20 != 0xf) {
            if (iStack_20 == 0x16) goto LAB_180608c78;
            if (iStack_20 == 0x18) {
              LoopCounter = strcmp(lStack_28,&UNK_180a38c78);
              if ((LoopCounter == 0) || (LoopCounter = strcmp(lVar3,&UNK_180a38c58), LoopCounter == 0))
              goto LAB_180608fce;
              LoopCounter = strcmp(lVar3,&UNK_180a38be8);
              if (LoopCounter != 0) {
                pNetworkRequestResult = &UNK_180a38d98;
                goto LAB_18060905e;
              }
              goto LAB_180609067;
            }
            if (iStack_20 == 7) {
              lVar3 = 0;
              do {
                lVar2 = lVar3;
                if (*(char *)(lStack_28 + lVar2) != (&UNK_180a38be0)[lVar2]) goto LAB_18060906e;
                lVar3 = lVar2 + 1;
              } while (lVar2 + 1 != 8);
              LoopCounter = (int)lVar2 + -6;
              goto LAB_180609070;
            }
            if (iStack_20 == 0xc) {
              LoopCounter = strcmp(lStack_28,&UNK_180a38bd0);
              if (LoopCounter == 0) {
                LoopCounter = 0x68;
                goto LAB_180609070;
              }
LAB_18060901e:
              LoopCounter = strcmp(lVar3,&UNK_180a38e50);
              if (LoopCounter == 0) {
                LoopCounter = 4;
                goto LAB_180609070;
              }
              LoopCounter = strcmp(lVar3,&UNK_180a38f30);
              if (LoopCounter == 0) {
                LoopCounter = 8;
                goto LAB_180609070;
              }
              goto LAB_18060906e;
            }
            if (iStack_20 == 0x1a) goto LAB_180608dad;
            if (iStack_20 == 3) {
              LoopCounter = 4;
              lVar3 = 0;
              do {
                lVar2 = lVar3 + 1;
                if (*(char *)(lStack_28 + lVar3) != (&UNK_180a29944)[lVar3]) goto LAB_18060906e;
                lVar3 = lVar2;
              } while (lVar2 != 4);
              goto LAB_180609070;
            }
            if (iStack_20 == 0xf) goto LAB_180608e02;
            if (iStack_20 == 0x23) {
              LoopCounter = strcmp(lStack_28,&UNK_180a38d58);
              if (LoopCounter == 0) {
                LoopCounter = 0x28;
                goto LAB_180609070;
              }
LAB_180608e99:
              LoopCounter = strcmp(lVar3,&UNK_180a38cc0);
              if (LoopCounter == 0) {
                LoopCounter = 0x18;
                goto LAB_180609070;
              }
              goto LAB_18060906e;
            }
            if (iStack_20 == 0x1f) goto LAB_180608e4c;
            if (iStack_20 == 0xd) goto LAB_180608e70;
            if (iStack_20 == 0x21) {
              pNetworkRequestResult = &UNK_180a38ce8;
              goto LAB_180608fc1;
            }
            if (iStack_20 == 0x23) goto LAB_180608e99;
            if (iStack_20 == 0xf) goto LAB_180608ebd;
            if (iStack_20 == 0xb) {
              LoopCounter = strcmp(lStack_28,&UNK_180a38dd8);
              if (LoopCounter == 0) {
                LoopCounter = 0x248;
                goto LAB_180609070;
              }
LAB_180608f53:
              LoopCounter = strcmp(lVar3,&UNK_180a38dc8);
              if (LoopCounter == 0) {
                LoopCounter = 4;
                goto LAB_180609070;
              }
LAB_180608f97:
              LoopCounter = strcmp(lVar3,&UNK_180a38e90);
              if (LoopCounter == 0) {
                LoopCounter = 4;
                goto LAB_180609070;
              }
            }
            else {
              if (iStack_20 == 0x11) {
                LoopCounter = strcmp(lStack_28,&UNK_180a38e10);
                if (LoopCounter == 0) goto LAB_180609067;
                LoopCounter = strcmp(lVar3,&UNK_180a38df8);
                if (LoopCounter == 0) {
                  LoopCounter = 0xa0;
                  goto LAB_180609070;
                }
                pNetworkRequestResult = &UNK_180a38d80;
                goto LAB_18060905e;
              }
              if (iStack_20 == 0xb) goto LAB_180608f53;
              if (iStack_20 == 0xf) goto LAB_180608f73;
              if (iStack_20 == 0xb) goto LAB_180608f97;
              if (iStack_20 == 0x17) goto LAB_180608fb7;
              if (iStack_20 == 10) goto LAB_180608fdd;
              if (iStack_20 == 0x1a) goto LAB_180608fee;
              if (iStack_20 != 0xb) {
                if (iStack_20 == 0xc) goto LAB_18060901e;
                if (iStack_20 != 0x19) goto LAB_18060906e;
                pNetworkRequestResult = &UNK_180a38f10;
                goto LAB_18060905e;
              }
            }
            pNetworkRequestResult = &UNK_180a38e28;
            goto LAB_18060905e;
          }
          LoopCounter = strcmp(lStack_28,&UNK_180a38b60);
          if (LoopCounter == 0) {
            LoopCounter = 0x214;
            goto LAB_180609070;
          }
LAB_180608e02:
          LoopCounter = strcmp(lVar3,&UNK_180a38d10);
          if (LoopCounter == 0) {
            LoopCounter = 0x2028;
            goto LAB_180609070;
          }
LAB_180608ebd:
          LoopCounter = strcmp(lVar3,&UNK_180a38de8);
          if (LoopCounter == 0) {
            LoopCounter = 4;
            goto LAB_180609070;
          }
LAB_180608f73:
          LoopCounter = strcmp(lVar3,&UNK_180a38db8);
          if (LoopCounter == 0) {
            LoopCounter = 0x50;
            goto LAB_180609070;
          }
        }
      }
      goto LAB_18060906e;
    }
    LoopCounter = strcmp(lStack_28,&UNK_180a38b88);
    if (LoopCounter == 0) {
      LoopCounter = 1;
      goto LAB_180609070;
    }
    LoopCounter = strcmp(lVar3,&UNK_180a38b70);
    if (LoopCounter == 0) {
      LoopCounter = 3;
      goto LAB_180609070;
    }
    LoopCounter = strcmp(lVar3,&UNK_180a38d20);
    if (LoopCounter != 0) {
      pNetworkRequestResult = &UNK_180a38e60;
      goto LAB_18060905e;
    }
  }
LAB_180609067:
  LoopCounter = 4;
LAB_180609070:
  puStack_30 = &SystemNullPointer;
  if (lStack_28 == 0) {
    return LoopCounter;
  }
  CleanupSystemResources();
}
uint64_t
FUN_1806090b0(uint64_t param_1,uint64_t param_2,uint8_t param_3,uint64_t param_4)
{
  char cVar1;
  void *pBufferSize;
  uint64_t StringProcessingResult;
  uint8_t auStack_50 [32];
  uint8_t auStack_30 [40];
  InitializeSystemBuffer(auStack_30,param_1,param_3,param_4,SystemMutexFlags);
  InitializeSystemBuffer(auStack_50,param_2);
  cVar1 = FUN_180629850(auStack_30,&UNK_180a389d8,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_180629850(auStack_30,&UNK_180a38a08,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_180629850(auStack_30,&UNK_180a38958,1);
      if (cVar1 == '\0') {
        cVar1 = FUN_180629850(auStack_30,&UNK_180a389b0,1);
        if (cVar1 == '\0') {
          cVar1 = FUN_180629850(auStack_30,&UNK_180a38988,1);
          if (cVar1 == '\0') {
            cVar1 = FUN_180629850(auStack_30,&UNK_180a38aa8,1);
            if (cVar1 == '\0') {
              cVar1 = FUN_180629850(auStack_30,&UNK_180a38a88,1);
              if (cVar1 == '\0') {
                cVar1 = FUN_180629850(auStack_30,&UNK_180a38ac0,1);
                if (cVar1 == '\0') {
                  cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38a48);
                  if (cVar1 == '\0') {
                    cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38a3c);
                    if (cVar1 == '\0') {
                      cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38a60);
                      if (cVar1 == '\0') {
                        cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38b70);
                        if (cVar1 == '\0') {
                          cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38b20);
                          if (cVar1 == '\0') {
                            cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38ae8);
                            if (cVar1 == '\0') {
                              cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38b60);
                              if (cVar1 == '\0') {
                                cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38b48);
                                if (cVar1 == '\0') {
                                  cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38c40);
                                  if (cVar1 == '\0') {
                                    cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38c78);
                                    if (cVar1 == '\0') {
                                      cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38c58);
                                      if (cVar1 == '\0') {
                                        cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38bd0);
                                        if (cVar1 == '\0') {
                                          cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38c08);
                                          if (cVar1 == '\0') {
                                            cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a29944);
                                            if (cVar1 == '\0') {
                                              cVar1 = ValidateSystemConfiguration(auStack_30,&UNK_180a38d10)
                                              ;
                                              if (cVar1 == '\0') {
                                                cVar1 = ValidateSystemConfiguration(auStack_30,
                                                                            &UNK_180a38d58);
                                                if (cVar1 == '\0') {
                                                  cVar1 = ValidateSystemConfiguration(auStack_30,
                                                                              &UNK_180a38ca8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = ValidateSystemConfiguration(auStack_30,
                                                                                &UNK_180a38ce8);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = ValidateSystemConfiguration(auStack_30,
                                                                                  &UNK_180a38cc0);
                                                      if (cVar1 != '\0') goto LAB_18060af51;
                                                      cVar1 = ValidateSystemConfiguration(auStack_30,
                                                                                  &UNK_180a38dd8);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = ValidateSystemConfiguration(auStack_30,
                                                                                    &UNK_180a38df8);
                                                        if (cVar1 == '\0') {
                                                          cVar1 = ValidateSystemConfiguration(auStack_30,
                                                                                      &UNK_180a38db8
                                                                                     );
                                                          if (cVar1 == '\0') {
                                                            cVar1 = ValidateSystemConfiguration(auStack_30,
                                                                                        &
                                                  UNK_180a38e78);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = ValidateSystemConfiguration(auStack_30,
                                                                                &UNK_180a38ea0);
                                                    if (cVar1 != '\0') {
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3ac00);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3acf8);
                                                        if (cVar1 != '\0') goto LAB_18060b9cb;
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3acd8);
                                                        if (cVar1 != '\0') goto LAB_18060ad3e;
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3ad30);
                                                        if (cVar1 != '\0') goto LAB_18060acd8;
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &DAT_180a06a48);
                                                        if (cVar1 != '\0') goto LAB_18060a114;
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3ad18);
                                                        if (cVar1 != '\0') goto LAB_18060a91e;
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3ac90);
                                                        if (cVar1 != '\0') goto LAB_18060ba49;
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3ac80);
                                                        if (cVar1 != '\0') goto LAB_18060ba67;
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3acc8);
                                                        if (cVar1 != '\0') {
                                                          StringProcessingResult = 0x21c;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3aca8);
                                                        if (cVar1 != '\0') {
                                                          StringProcessingResult = 0x41c;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3ade8);
                                                        if (cVar1 != '\0') {
                                                          StringProcessingResult = 0x41d;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3add0);
                                                        if (cVar1 != '\0') {
                                                          StringProcessingResult = 0x420;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3ae18);
                                                        if (cVar1 != '\0') {
                                                          StringProcessingResult = 0x424;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3ae00);
                                                        if (cVar1 != '\0') {
                                                          StringProcessingResult = 0x428;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3ad88);
                                                        if (cVar1 != '\0') {
                                                          StringProcessingResult = 0x430;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a29da8);
                                                        if (cVar1 != '\0') {
                                                          StringProcessingResult = 0x438;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3ad60);
                                                        if (cVar1 != '\0') {
                                                          StringProcessingResult = 0x439;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3adb8);
                                                        if (cVar1 != '\0') {
                                                          StringProcessingResult = 0x43c;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3ada0);
                                                        if (cVar1 != '\0') {
                                                          StringProcessingResult = 0x440;
                                                          goto LAB_18060bbae;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                &UNK_180a3abe0);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a1029c);
                                                      if (cVar1 == '\0') {
                                                        pBufferSize = &UNK_180a3ac10;
                                                        goto LAB_18060ad2d;
                                                      }
                                                      goto LAB_18060b9cb;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                &UNK_180a3ac48);
                                                    if (cVar1 == '\0') {
                                                      pBufferSize = &UNK_180a3abe8;
                                                      goto LAB_18060a103;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                &UNK_180a3a960);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3ab28);
                                                      if (cVar1 != '\0') goto LAB_18060b6a9;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a39f78);
                                                      if (cVar1 != '\0') goto LAB_18060b6c7;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3ab18);
                                                      if (cVar1 != '\0') goto LAB_18060b6e5;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a39fb0);
                                                      if (cVar1 != '\0') goto LAB_18060b703;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3ab50);
                                                      if (cVar1 != '\0') goto LAB_1806093cc;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3ab38);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 100;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3aae8);
                                                      if (cVar1 != '\0') goto LAB_180609b20;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3aad8);
                                                      if (cVar1 != '\0') {
LAB_18060b76f:
                                                        StringProcessingResult = 0x6c;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3ab08);
                                                      if (cVar1 != '\0') goto LAB_18060b78d;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3aaf8);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x74;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3abb0);
                                                      if (cVar1 != '\0') goto LAB_18060b7c9;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3aba0);
                                                      if (cVar1 != '\0') goto LAB_18060b7e7;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3abd0);
                                                      if (cVar1 != '\0') goto LAB_18060b805;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3abc0);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x84;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3ab70);
                                                      if (cVar1 != '\0') goto LAB_18060b841;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3ab60);
                                                      if (cVar1 != '\0') goto LAB_18060b85f;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3ab90);
                                                      if (cVar1 != '\0') goto LAB_18060b87d;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3ab80);
                                                      if (cVar1 != '\0') goto LAB_18060b89b;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3ac30);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x96;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3ac18);
                                                      if (cVar1 != '\0') goto LAB_18060b8d7;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3ac68);
                                                      if (cVar1 != '\0') goto LAB_18060b8f9;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                &UNK_180a3a8b0);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a850);
                                                      if (cVar1 != '\0') goto LAB_18060ad3e;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a830);
                                                      if (cVar1 != '\0') goto LAB_18060a114;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a870);
                                                      if (cVar1 != '\0') goto LAB_18060ba49;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a860);
                                                      if (cVar1 != '\0') goto LAB_18060b32d;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a04be8);
                                                      if (cVar1 != '\0') goto LAB_18060b34b;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a938);
                                                      if (cVar1 != '\0') goto LAB_18060b369;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a920);
                                                      if (cVar1 != '\0') goto LAB_18060b387;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a960);
                                                      if (cVar1 != '\0') goto LAB_18060b3a5;
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a948);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0xf8;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a8f0);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0xfc;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a8d8);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x100;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a910);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x110;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a900);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x114;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a9d8);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x118;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a9c8);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x11c;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a9f0);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x11e;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a9e0);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x120;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a988);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x130;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a2a000);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x170;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a21a30);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x174;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a970);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x178;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a9b0);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x188;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a998);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x198;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3aa98);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x19c;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3aa70);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x1a0;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3aac0);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x220;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3aab0);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x230;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3aa20);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x234;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3aa08);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x238;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3aa50);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x23c;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3aa38);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 0x240;
                                                        goto LAB_18060bbae;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                &UNK_180a3a650);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a640);
                                                      if (cVar1 != '\0') {
                                                        StringProcessingResult = 4;
                                                        goto LAB_18060bbae;
                                                      }
                                                      goto LAB_18060ad8c;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                &UNK_180a3a800);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                  &UNK_180a3a7a8);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3a798);
                                                        if (cVar1 != '\0') goto LAB_18060ad3e;
                                                        cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                    &UNK_180a3a7d0);
                                                        if (cVar1 == '\0') {
                                                          cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                      &UNK_180a3a7b8
                                                                                     );
                                                          if (cVar1 != '\0') goto LAB_18060a114;
                                                          cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                      &UNK_180a3a898
                                                                                     );
                                                          if (cVar1 == '\0') {
                                                            cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                        &
                                                  UNK_180a3a880);
                                                  if (cVar1 != '\0') goto LAB_18060ba49;
                                                  cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                              &UNK_180a3a8c0);
                                                  if (cVar1 != '\0') goto LAB_18060b1d7;
                                                  cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                              &DAT_180a0ba58);
                                                  if (cVar1 != '\0') goto LAB_18060b1f5;
                                                  cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                              &UNK_180a3a5a8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                &UNK_180a2e2bc);
                                                    if (cVar1 != '\0') goto LAB_18060b32d;
                                                    pBufferSize = &UNK_180a2e9e0;
                                                    goto LAB_18060b0e8;
                                                  }
                                                  goto LAB_18060ba67;
                                                  }
                                                  goto LAB_18060a91e;
                                                  }
                                                  goto LAB_18060acd8;
                                                  }
                                                  goto LAB_18060b9cb;
                                                  }
                                                  }
                                                }
                                                else {
                                                  cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                              &UNK_180a3a720);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                &UNK_180a3a754);
                                                    if (cVar1 != '\0') goto LAB_18060b9cb;
                                                    cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                &UNK_180a3a748);
                                                    if (cVar1 != '\0') {
LAB_18060acd8:
                                                      StringProcessingResult = 0xc;
                                                      goto LAB_18060bbae;
                                                    }
                                                    cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                &UNK_180a3a7f0);
                                                    if (cVar1 != '\0') {
LAB_18060a91e:
                                                      StringProcessingResult = 0x14;
                                                      goto LAB_18060bbae;
                                                    }
                                                    cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                                &UNK_180a3a7e0);
                                                    if (cVar1 != '\0') {
LAB_18060ba67:
                                                      StringProcessingResult = 0x1c;
                                                      goto LAB_18060bbae;
                                                    }
                                                    pBufferSize = &UNK_180a3a820;
LAB_18060b0e8:
                                                    cVar1 = ValidateSystemConfiguration(auStack_50,pBufferSize);
                                                    if (cVar1 != '\0') goto LAB_18060b0f9;
                                                  }
                                                }
                                              }
                                              else {
                                                cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                            &UNK_180a1a470);
                                                if (cVar1 == '\0') {
                                                  cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                              &UNK_180a3a758);
                                                  if (cVar1 != '\0') {
                                                    StringProcessingResult = 0x2000;
                                                    goto LAB_18060bbae;
                                                  }
                                                  cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                              &UNK_180a3a788);
                                                  if (cVar1 != '\0') {
                                                    StringProcessingResult = 0x2010;
                                                    goto LAB_18060bbae;
                                                  }
                                                  cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                              &UNK_180a3a778);
                                                  if (cVar1 != '\0') {
                                                    StringProcessingResult = 0x2020;
                                                    goto LAB_18060bbae;
                                                  }
                                                  cVar1 = ValidateSystemConfiguration(auStack_50,
                                                                              &UNK_180a3a738);
                                                  if (cVar1 != '\0') {
                                                    StringProcessingResult = 0x2024;
                                                    goto LAB_18060bbae;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          else {
LAB_18060af51:
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a650);
                                            if (cVar1 == '\0') {
                                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a640)
                                              ;
                                              if (cVar1 == '\0') {
                                                pBufferSize = &UNK_180a3a5c0;
                                                goto LAB_18060a103;
                                              }
                                              goto LAB_18060ad3e;
                                            }
                                          }
                                        }
                                        else {
                                          cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a6c0);
                                          if (cVar1 == '\0') {
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a708);
                                            if (cVar1 != '\0') goto LAB_18060a114;
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a6f8);
                                            if (cVar1 != '\0') goto LAB_18060b32d;
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39ee0);
                                            if (cVar1 != '\0') {
LAB_18060b0f9:
                                              StringProcessingResult = 0x24;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39e48);
                                            if (cVar1 != '\0') goto LAB_1806091a3;
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39dd0);
                                            if (cVar1 != '\0') {
LAB_18060ae39:
                                              StringProcessingResult = 0x2c;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39df0);
                                            if (cVar1 != '\0') goto LAB_18060ae57;
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39fb0);
                                            if (cVar1 != '\0') {
LAB_18060ae75:
                                              StringProcessingResult = 0x34;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a670);
                                            if (cVar1 != '\0') goto LAB_18060ae93;
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a660);
                                            if (cVar1 != '\0') {
LAB_18060aeb1:
                                              StringProcessingResult = 0x3c;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a6a0);
                                            if (cVar1 != '\0') {
LAB_18060b6c7:
                                              StringProcessingResult = 0x50;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a688);
                                            if (cVar1 != '\0') goto LAB_18060b6e5;
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39d58);
                                            if (cVar1 != '\0') {
LAB_18060b703:
                                              StringProcessingResult = 0x5c;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39f18);
                                            if (cVar1 != '\0') {
LAB_1806093cc:
                                              StringProcessingResult = 0x60;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a768);
                                            if (cVar1 != '\0') {
                                              StringProcessingResult = 0x61;
                                              goto LAB_18060bbae;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a650);
                                        if (cVar1 == '\0') {
                                          cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a640);
                                          if (cVar1 == '\0') {
LAB_18060ad8c:
                                            pBufferSize = &UNK_180a3a5c0;
                                            goto LAB_18060ad2d;
                                          }
                                          goto LAB_18060b9cb;
                                        }
                                      }
                                    }
                                    else {
                                      cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a600);
                                      if (cVar1 == '\0') {
                                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a5e0);
                                        if (cVar1 != '\0') goto LAB_18060b9cb;
                                        pBufferSize = &UNK_180a3a6e0;
LAB_18060ad2d:
                                        cVar1 = ValidateSystemConfiguration(auStack_50,pBufferSize);
                                        if (cVar1 != '\0') goto LAB_18060ad3e;
                                      }
                                    }
                                  }
                                  else {
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a650);
                                    if (cVar1 == '\0') {
                                      cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a640);
                                      if (cVar1 != '\0') goto LAB_18060b9cb;
                                      cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a5d0);
                                      if (cVar1 != '\0') goto LAB_18060ad3e;
                                      cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a5c0);
                                      if (cVar1 != '\0') goto LAB_18060acd8;
                                    }
                                  }
                                }
                                else {
                                  cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a2f8);
                                  if (cVar1 == '\0') {
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a2e8);
                                    if (cVar1 != '\0') goto LAB_18060b9cb;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a310);
                                    if (cVar1 != '\0') goto LAB_18060ad3e;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a300);
                                    if (cVar1 != '\0') goto LAB_18060acd8;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a418);
                                    if (cVar1 != '\0') goto LAB_18060a114;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a408);
                                    if (cVar1 != '\0') goto LAB_18060a91e;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a440);
                                    if (cVar1 != '\0') goto LAB_18060ba49;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a428);
                                    if (cVar1 != '\0') goto LAB_18060ba67;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a3d0);
                                    if (cVar1 != '\0') goto LAB_18060b32d;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a3c0);
                                    if (cVar1 != '\0') goto LAB_18060b0f9;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a3f8);
                                    if (cVar1 != '\0') goto LAB_1806091a3;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a3e8);
                                    if (cVar1 != '\0') goto LAB_18060ae39;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a4c0);
                                    if (cVar1 != '\0') goto LAB_18060ae57;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a4a8);
                                    if (cVar1 != '\0') goto LAB_18060ae75;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a4e0);
                                    if (cVar1 != '\0') goto LAB_18060ae93;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a4d0);
                                    if (cVar1 != '\0') goto LAB_18060aeb1;
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a468);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x53c;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a458);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x540;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a498);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x544;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a478);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x548;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a560);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x54c;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a540);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x550;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a5a8);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x554;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a580);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x558;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a508);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x55c;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a4f8);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x560;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a530);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x564;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a520);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x565;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a630);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x566;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a620);
                                    if (cVar1 != '\0') {
                                      StringProcessingResult = 0x567;
                                      goto LAB_18060bbae;
                                    }
                                  }
                                }
                              }
                              else {
                                cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a2e1d8);
                                if (cVar1 == '\0') {
                                  cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a2e1e8);
                                  if (cVar1 != '\0') goto LAB_18060b9cb;
                                  cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a2e158);
                                  if (cVar1 != '\0') goto LAB_18060ad3e;
                                  cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a2e150);
                                  if (cVar1 != '\0') goto LAB_18060acd8;
                                  cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a0696c);
                                  if (cVar1 != '\0') goto LAB_18060a114;
                                  cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a0ae28);
                                  if (cVar1 != '\0') goto LAB_18060a91e;
                                }
                              }
                            }
                            else {
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a260);
                              if (cVar1 == '\0') {
                                cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a348);
                                if (cVar1 == '\0') {
                                  cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a320);
                                  if (cVar1 == '\0') {
                                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a398);
                                    if (cVar1 == '\0') {
                                      pBufferSize = &UNK_180a3a370;
                                      goto LAB_18060a103;
                                    }
                                    goto LAB_18060acd8;
                                  }
                                  goto LAB_18060ad3e;
                                }
                                goto LAB_18060b9cb;
                              }
                            }
                          }
                          else {
                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a068);
                            if (cVar1 == '\0') {
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a058);
                              if (cVar1 != '\0') {
LAB_18060b9cb:
                                StringProcessingResult = 4;
                                goto LAB_18060bbae;
                              }
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39fe0);
                              if (cVar1 != '\0') goto LAB_18060ad3e;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39fc0);
                              if (cVar1 != '\0') goto LAB_18060acd8;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a018);
                              if (cVar1 != '\0') goto LAB_18060a114;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39ff8);
                              if (cVar1 != '\0') goto LAB_18060a91e;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a118);
                              if (cVar1 != '\0') goto LAB_18060ba49;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a0f0);
                              if (cVar1 != '\0') goto LAB_18060ba67;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a158);
                              if (cVar1 != '\0') goto LAB_18060b32d;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a140);
                              if (cVar1 != '\0') goto LAB_1806091a3;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a098);
                              if (cVar1 != '\0') goto LAB_18060ae57;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a078);
                              if (cVar1 != '\0') goto LAB_18060ae93;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a0d0);
                              if (cVar1 != '\0') goto LAB_18060b6a9;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a0b8);
                              if (cVar1 != '\0') goto LAB_18060a66e;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a1e8);
                              if (cVar1 != '\0') goto LAB_18060a68c;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a1c8);
                              if (cVar1 != '\0') goto LAB_18060a6aa;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a220);
                              if (cVar1 != '\0') goto LAB_18060b6c7;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a208);
                              if (cVar1 != '\0') goto LAB_18060b6e5;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a188);
                              if (cVar1 != '\0') goto LAB_1806093cc;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a178);
                              if (cVar1 != '\0') goto LAB_180609b20;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a1b8);
                              if (cVar1 != '\0') {
LAB_18060b78d:
                                StringProcessingResult = 0x70;
                                goto LAB_18060bbae;
                              }
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a1a8);
                              if (cVar1 != '\0') goto LAB_18060b7c9;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a2b0);
                              if (cVar1 != '\0') {
LAB_18060b805:
                                StringProcessingResult = 0x80;
                                goto LAB_18060bbae;
                              }
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a298);
                              if (cVar1 != '\0') goto LAB_18060b841;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a2d8);
                              if (cVar1 != '\0') goto LAB_18060b85f;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a2c0);
                              if (cVar1 != '\0') goto LAB_18060b87d;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a250);
                              if (cVar1 != '\0') goto LAB_18060b8d7;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a240);
                              if (cVar1 != '\0') goto LAB_18060b34b;
                              cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a278);
                              if (cVar1 != '\0') goto LAB_18060a7ec;
                            }
                          }
                        }
                        else {
                          cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39f50);
                          if (cVar1 == '\0') {
                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a048);
                            if (cVar1 != '\0') goto LAB_18060a4de;
                            cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a3a038);
                            if (cVar1 != '\0') goto LAB_18060a500;
                          }
                        }
                      }
                      else {
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39e78);
                        if (cVar1 == '\0') {
                          cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39eb8);
                          if (cVar1 != '\0') goto LAB_18060a114;
                          cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39ea8);
                          if (cVar1 != '\0') goto LAB_18060b32d;
                          cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39f88);
                          if (cVar1 != '\0') goto LAB_18060ae57;
                          cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39f78);
                          if (cVar1 != '\0') {
LAB_18060ae93:
                            StringProcessingResult = 0x38;
                            goto LAB_18060bbae;
                          }
                          cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39fb0);
                          if (cVar1 != '\0') {
LAB_18060b6a9:
                            StringProcessingResult = 0x40;
                            goto LAB_18060bbae;
                          }
                          cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39f98);
                          if (cVar1 != '\0') {
LAB_18060a66e:
                            StringProcessingResult = 0x44;
                            goto LAB_18060bbae;
                          }
                          cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39f28);
                          if (cVar1 != '\0') {
LAB_18060a68c:
                            StringProcessingResult = 0x48;
                            goto LAB_18060bbae;
                          }
                          cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a1029c);
                          if (cVar1 != '\0') {
LAB_18060a6aa:
                            StringProcessingResult = 0x4c;
                            goto LAB_18060bbae;
                          }
                          cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39f18);
                          if (cVar1 != '\0') goto LAB_18060b6c7;
                          cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39f60);
                          if (cVar1 != '\0') {
                            StringProcessingResult = 0x51;
                            goto LAB_18060bbae;
                          }
                        }
                      }
                    }
                    else {
                      cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39d98);
                      if (cVar1 == '\0') {
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39dc0);
                        if (cVar1 != '\0') {
LAB_18060b6e5:
                          StringProcessingResult = 0x58;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a35198);
                        if (cVar1 != '\0') {
LAB_180609b20:
                          StringProcessingResult = 0x68;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39db0);
                        if (cVar1 != '\0') {
LAB_18060b7c9:
                          StringProcessingResult = 0x78;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39d58);
                        if (cVar1 != '\0') {
LAB_18060b841:
                          StringProcessingResult = 0x88;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39d40);
                        if (cVar1 != '\0') {
LAB_18060b85f:
                          StringProcessingResult = 0x8c;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39d88);
                        if (cVar1 != '\0') {
LAB_18060b87d:
                          StringProcessingResult = 0x90;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39d70);
                        if (cVar1 != '\0') {
LAB_18060b89b:
                          StringProcessingResult = 0x94;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39e30);
                        if (cVar1 != '\0') {
LAB_18060b8d7:
                          StringProcessingResult = 0x98;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39e18);
                        if (cVar1 != '\0') {
LAB_18060b8f9:
                          StringProcessingResult = 0x9c;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39e58);
                        if (cVar1 != '\0') {
LAB_18060b34b:
                          StringProcessingResult = 0xa0;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a34948);
                        if (cVar1 != '\0') {
LAB_18060a7ec:
                          StringProcessingResult = 0xa4;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39e48);
                        if (cVar1 != '\0') {
LAB_18060b369:
                          StringProcessingResult = 0xa8;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39de0);
                        if (cVar1 != '\0') {
LAB_18060a282:
                          StringProcessingResult = 0xac;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39dd0);
                        if (cVar1 != '\0') {
LAB_18060b387:
                          StringProcessingResult = 0xb0;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39e08);
                        if (cVar1 != '\0') {
                          StringProcessingResult = 0xb4;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39df0);
                        if (cVar1 != '\0') {
                          StringProcessingResult = 0xb5;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39ee0);
                        if (cVar1 != '\0') {
LAB_18060b3a5:
                          StringProcessingResult = 0xb8;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39ed0);
                        if (cVar1 != '\0') {
LAB_18060a30c:
                          StringProcessingResult = 0xbc;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39f00);
                        if (cVar1 != '\0') {
                          StringProcessingResult = 0xbd;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39ef0);
                        if (cVar1 != '\0') {
                          StringProcessingResult = 0xbe;
                          goto LAB_18060bbae;
                        }
                        cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39e90);
                        if (cVar1 != '\0') {
LAB_18060a36a:
                          StringProcessingResult = 0xc0;
                          goto LAB_18060bbae;
                        }
                      }
                    }
                  }
                  else {
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39cd0);
                    if (cVar1 == '\0') {
                      cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39ccc);
                      if (cVar1 != '\0') goto LAB_18060b9cb;
                      cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39cd8);
                      if (cVar1 != '\0') goto LAB_18060ad3e;
                      cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39cd4);
                      if (cVar1 != '\0') goto LAB_18060acd8;
                      pBufferSize = &UNK_180a39da8;
LAB_18060a103:
                      cVar1 = ValidateSystemConfiguration(auStack_50,pBufferSize);
                      if (cVar1 != '\0') goto LAB_18060a114;
                    }
                  }
                }
                else {
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a39920,1);
                  if (cVar1 == '\0') {
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39988);
                    if (cVar1 != '\0') {
LAB_18060a4de:
                      StringProcessingResult = 1;
                      goto LAB_18060bbae;
                    }
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39970);
                    if (cVar1 != '\0') {
LAB_18060a500:
                      StringProcessingResult = 2;
                      goto LAB_18060bbae;
                    }
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a398d8);
                    if (cVar1 != '\0') {
                      StringProcessingResult = 3;
                      goto LAB_18060bbae;
                    }
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a398b8);
                    if (cVar1 != '\0') goto LAB_18060b9cb;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39910);
                    if (cVar1 != '\0') {
                      StringProcessingResult = 5;
                      goto LAB_18060bbae;
                    }
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a398f0);
                    if (cVar1 != '\0') {
                      StringProcessingResult = 6;
                      goto LAB_18060bbae;
                    }
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39a28);
                    if (cVar1 != '\0') goto LAB_180609cf8;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39a18);
                    if (cVar1 != '\0') goto LAB_18060ad3e;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39a60);
                    if (cVar1 != '\0') goto LAB_180609d2e;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39a40);
                    if (cVar1 != '\0') goto LAB_180609d4c;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a399c0);
                    if (cVar1 != '\0') goto LAB_180609d6a;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a399a8);
                    if (cVar1 != '\0') goto LAB_18060acd8;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a399f0);
                    if (cVar1 != '\0') goto LAB_18060a114;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a399e0);
                    if (cVar1 != '\0') goto LAB_18060a91e;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39af0);
                    if (cVar1 != '\0') goto LAB_18060ba49;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39ad8);
                    if (cVar1 != '\0') goto LAB_18060ba67;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39b18);
                    if (cVar1 != '\0') {
                      StringProcessingResult = 0x1d;
                      goto LAB_18060bbae;
                    }
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39b00);
                    if (cVar1 != '\0') {
                      StringProcessingResult = 0x1e;
                      goto LAB_18060bbae;
                    }
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39a88);
                    if (cVar1 != '\0') goto LAB_18060b32d;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39a70);
                    if (cVar1 != '\0') goto LAB_18060b0f9;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39ab8);
                    if (cVar1 != '\0') goto LAB_1806091a3;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39aa0);
                    if (cVar1 != '\0') goto LAB_18060ae39;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39ba0);
                    if (cVar1 != '\0') goto LAB_18060ae57;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39b88);
                    if (cVar1 != '\0') goto LAB_18060ae75;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39bd8);
                    if (cVar1 != '\0') goto LAB_18060ae93;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39bc0);
                    if (cVar1 != '\0') goto LAB_18060aeb1;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39b48);
                    if (cVar1 != '\0') goto LAB_18060b6a9;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39b30);
                    if (cVar1 != '\0') goto LAB_18060a66e;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39b78);
                    if (cVar1 != '\0') goto LAB_18060a68c;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39b68);
                    if (cVar1 != '\0') goto LAB_18060a6aa;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39c80);
                    if (cVar1 != '\0') goto LAB_18060b703;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39c60);
                    if (cVar1 != '\0') goto LAB_18060b76f;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39cb8);
                    if (cVar1 != '\0') {
LAB_18060b7e7:
                      StringProcessingResult = 0x7c;
                      goto LAB_18060bbae;
                    }
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39c98);
                    if (cVar1 != '\0') goto LAB_18060b85f;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39c10);
                    if (cVar1 != '\0') goto LAB_18060b8f9;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39bf0);
                    if (cVar1 != '\0') goto LAB_18060a282;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39c50);
                    if (cVar1 != '\0') goto LAB_18060a30c;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39c30);
                    if (cVar1 != '\0') goto LAB_18060a36a;
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39cf8);
                    if (cVar1 != '\0') {
                      StringProcessingResult = 0xc4;
                      goto LAB_18060bbae;
                    }
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39ce0);
                    if (cVar1 != '\0') {
                      StringProcessingResult = 200;
                      goto LAB_18060bbae;
                    }
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39d28);
                    if (cVar1 != '\0') {
                      StringProcessingResult = 0xcc;
                      goto LAB_18060bbae;
                    }
                    cVar1 = ValidateSystemConfiguration(auStack_50,&UNK_180a39d10);
                    if (cVar1 != '\0') {
                      StringProcessingResult = 0xd0;
                      goto LAB_18060bbae;
                    }
                  }
                }
              }
              else {
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39888,1);
                if (cVar1 == '\0') {
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a397f8,1);
                  if (cVar1 != '\0') {
LAB_18060a114:
                    StringProcessingResult = 0x10;
                    goto LAB_18060bbae;
                  }
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a397e8,1);
                  if (cVar1 != '\0') {
LAB_18060b32d:
                    StringProcessingResult = 0x20;
                    goto LAB_18060bbae;
                  }
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a39850,1);
                  if (cVar1 != '\0') goto LAB_1806091a3;
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a39820,1);
                  if (cVar1 != '\0') {
LAB_18060ae57:
                    StringProcessingResult = 0x30;
                    goto LAB_18060bbae;
                  }
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a39940,1);
                  if (cVar1 != '\0') {
                    StringProcessingResult = 0x31;
                    goto LAB_18060bbae;
                  }
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a19c8c,1);
                  if (cVar1 != '\0') {
                    StringProcessingResult = 0x32;
                    goto LAB_18060bbae;
                  }
                }
              }
            }
            else {
              cVar1 = FUN_180629850(auStack_50,&UNK_180a397d8,1);
              if (cVar1 == '\0') {
                cVar1 = FUN_180629850(auStack_50,&UNK_180a397c8,1);
                if (cVar1 != '\0') goto LAB_18060b9cb;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39740,1);
                if (cVar1 != '\0') goto LAB_18060ad3e;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39728,1);
                if (cVar1 != '\0') goto LAB_18060acd8;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39768,1);
                if (cVar1 != '\0') goto LAB_18060a114;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39758,1);
                if (cVar1 != '\0') goto LAB_18060a91e;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39870,1);
                if (cVar1 != '\0') goto LAB_18060ba49;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a19c8c,1);
                if (cVar1 != '\0') {
LAB_18060b1d7:
                  StringProcessingResult = 0x19;
                  goto LAB_18060bbae;
                }
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39864,1);
                if (cVar1 != '\0') {
                  StringProcessingResult = 0x35;
                  goto LAB_18060bbae;
                }
                cVar1 = FUN_180629850(auStack_50,&UNK_180a398a8,1);
                if (cVar1 != '\0') goto LAB_180609b20;
              }
            }
          }
          else {
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39568,1);
            if (cVar1 == '\0') {
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39538,1);
              if (cVar1 != '\0') {
LAB_180609cf8:
                StringProcessingResult = 7;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&UNK_180a396c8,1);
              if (cVar1 != '\0') goto LAB_18060ad3e;
              cVar1 = FUN_180629850(auStack_50,&UNK_180a396b0,1);
              if (cVar1 != '\0') goto LAB_180609d2e;
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39710,1);
              if (cVar1 != '\0') {
LAB_180609d4c:
                StringProcessingResult = 10;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&UNK_180a396f0,1);
              if (cVar1 != '\0') goto LAB_180609d6a;
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39640,1);
              if (cVar1 != '\0') goto LAB_18060acd8;
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39628,1);
              if (cVar1 != '\0') {
                StringProcessingResult = 0xd;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39688,1);
              if (cVar1 != '\0') {
                StringProcessingResult = 0xe;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39660,1);
              if (cVar1 != '\0') {
                StringProcessingResult = 0xf;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&UNK_180a397a8,1);
              if (cVar1 != '\0') goto LAB_18060a114;
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39788,1);
              if (cVar1 != '\0') goto LAB_1806099ea;
            }
          }
        }
        else {
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39270,1);
          if (cVar1 == '\0') {
            cVar1 = FUN_180629850(auStack_50,&UNK_180a393a8,1);
            if (cVar1 != '\0') goto LAB_18060ad3e;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39390,1);
            if (cVar1 != '\0') {
LAB_180609d2e:
              StringProcessingResult = 9;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a393f0,1);
            if (cVar1 != '\0') goto LAB_18060a114;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a393d0,1);
            if (cVar1 != '\0') goto LAB_1806099ea;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39348,1);
            if (cVar1 != '\0') {
LAB_18060965b:
              StringProcessingResult = 0x17;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39328,1);
            if (cVar1 != '\0') goto LAB_18060ba49;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39378,1);
            if (cVar1 != '\0') goto LAB_18060b32d;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39360,1);
            if (cVar1 != '\0') {
              StringProcessingResult = 0x21;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a394a0,1);
            if (cVar1 != '\0') {
              StringProcessingResult = 0x22;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39480,1);
            if (cVar1 != '\0') {
              StringProcessingResult = 0x23;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a394e0,1);
            if (cVar1 != '\0') goto LAB_18060b0f9;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a394b8,1);
            if (cVar1 != '\0') {
              StringProcessingResult = 0x25;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39428,1);
            if (cVar1 != '\0') {
              StringProcessingResult = 0x26;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39408,1);
            if (cVar1 != '\0') {
              StringProcessingResult = 0x27;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39468,1);
            if (cVar1 != '\0') goto LAB_1806091a3;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39450,1);
            if (cVar1 != '\0') {
              StringProcessingResult = 0x29;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a395c0,1);
            if (cVar1 != '\0') {
              StringProcessingResult = 0x2a;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39598,1);
            if (cVar1 != '\0') {
              StringProcessingResult = 0x2b;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39600,1);
            if (cVar1 != '\0') goto LAB_18060ae39;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a395e0,1);
            if (cVar1 != '\0') {
              StringProcessingResult = 0x2d;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39518,1);
            if (cVar1 != '\0') {
              StringProcessingResult = 0x2e;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39500,1);
            if (cVar1 != '\0') {
              StringProcessingResult = 0x2f;
              goto LAB_18060bbae;
            }
          }
        }
      }
      else {
        cVar1 = FUN_180629850(auStack_50,&UNK_180a391b8,1);
        if (cVar1 == '\0') {
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39188,1);
          if (cVar1 != '\0') {
LAB_180609d6a:
            StringProcessingResult = 0xb;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39210,1);
          if (cVar1 != '\0') goto LAB_18060acd8;
          cVar1 = FUN_180629850(auStack_50,&UNK_180a391e8,1);
          if (cVar1 != '\0') goto LAB_18060a114;
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39128,1);
          if (cVar1 != '\0') {
LAB_1806099ea:
            StringProcessingResult = 0x11;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39110,1);
          if (cVar1 != '\0') {
            StringProcessingResult = 0x12;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39170,1);
          if (cVar1 != '\0') {
            StringProcessingResult = 0x13;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39148,1);
          if (cVar1 != '\0') goto LAB_18060a91e;
          cVar1 = FUN_180629850(auStack_50,&UNK_180a392d0,1);
          if (cVar1 != '\0') {
            StringProcessingResult = 0x15;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a392b8,1);
          if (cVar1 != '\0') {
            StringProcessingResult = 0x16;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39308,1);
          if (cVar1 != '\0') goto LAB_18060965b;
          cVar1 = FUN_180629850(auStack_50,&UNK_180a392e8,1);
          if (cVar1 != '\0') goto LAB_18060ba49;
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39250,1);
          if (cVar1 != '\0') goto LAB_18060b1d7;
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39230,1);
          if (cVar1 != '\0') {
LAB_18060b1f5:
            StringProcessingResult = 0x1a;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39298,1);
          if (cVar1 != '\0') {
            StringProcessingResult = 0x1b;
            goto LAB_18060bbae;
          }
        }
      }
    }
    else {
      cVar1 = FUN_180629850(auStack_50,&UNK_180a38ef0,1);
      if (cVar1 == '\0') {
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38fd8,1);
        if (cVar1 != '\0') goto LAB_18060b9cb;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a1029c,1);
        if (cVar1 != '\0') goto LAB_18060ad3e;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38fc0,1);
        if (cVar1 != '\0') goto LAB_18060acd8;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a39008,1);
        if (cVar1 != '\0') goto LAB_18060a114;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38ff0,1);
        if (cVar1 != '\0') goto LAB_18060a91e;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38f78,1);
        if (cVar1 != '\0') goto LAB_18060ba49;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38f60,1);
        if (cVar1 != '\0') goto LAB_18060ba67;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38fa8,1);
        if (cVar1 != '\0') goto LAB_18060b32d;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38f90,1);
        if (cVar1 != '\0') goto LAB_18060b0f9;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a390b8,1);
        if (cVar1 != '\0') goto LAB_1806091a3;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a39090,1);
        if (cVar1 != '\0') goto LAB_18060ae93;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a390f0,1);
        if (cVar1 != '\0') goto LAB_18060a68c;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a390d0,1);
        if (cVar1 != '\0') goto LAB_18060a6aa;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a39030,1);
        if (cVar1 != '\0') goto LAB_18060b6c7;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a34c20,1);
        if (cVar1 != '\0') {
          StringProcessingResult = 0x54;
          goto LAB_18060bbae;
        }
        cVar1 = FUN_180629850(auStack_50,&UNK_180a39020,1);
        if (cVar1 != '\0') goto LAB_18060b6e5;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a39078,1);
        if (cVar1 != '\0') goto LAB_18060b703;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a39058,1);
        if (cVar1 != '\0') goto LAB_1806093cc;
      }
    }
  }
  else {
    cVar1 = FUN_180629850(auStack_50,&UNK_180a0ee38,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_180629850(auStack_50,&UNK_180a38f50,1);
      if (cVar1 != '\0') {
LAB_18060ad3e:
        StringProcessingResult = 8;
        goto LAB_18060bbae;
      }
      cVar1 = FUN_180629850(auStack_50,&UNK_180a38f40,1);
      if (cVar1 != '\0') goto LAB_18060a114;
      cVar1 = FUN_180629850(auStack_50,&UNK_180a38ee0,1);
      if (cVar1 != '\0') {
LAB_18060ba49:
        StringProcessingResult = 0x18;
        goto LAB_18060bbae;
      }
      cVar1 = FUN_180629850(auStack_50,&UNK_180a38ed0,1);
      if (cVar1 != '\0') goto LAB_18060b32d;
      cVar1 = FUN_180629850(auStack_50,&UNK_180a38f00,1);
      if (cVar1 != '\0') {
LAB_1806091a3:
        StringProcessingResult = 0x28;
        goto LAB_18060bbae;
      }
    }
  }
  StringProcessingResult = 0;
LAB_18060bbae:
  FUN_180627b90(auStack_50);
  FUN_180627b90(auStack_30);
  return StringProcessingResult;
}
  DAT_180bf66d8 = 0;
  FUN_1808fc820(FUN_18064fe90);
  FUN_180650050(&UNK_18064ffc0);
  lVar4 = 0;
  _DAT_180c96858 = FUN_1806500b0;
  pBufferSize = (uint32_t *)&DAT_180bfbd80;
  lVar3 = 0x16;
  do {
    if (pBufferSize[1] == 0) {
      FUN_180650490(pBufferSize);
    }
    if (lVar4 != 2) {
      FUN_1806502e0(&UNK_180a3db60,*(uint64_t *)(pBufferSize + 4),*pBufferSize);
    }
    lVar4 = lVar4 + 1;
    pBufferSize = pBufferSize + 6;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (_DAT_180bfbf64 == 0) {
    FUN_180650490(&DAT_180bfbf60);
  }
  _DAT_180bf7308 = (longlong)_DAT_180bfbf60;
  if (_DAT_180bfbf7c == 0) {
    FUN_180650490(&DAT_180bfbf78);
  }
  _DAT_180bf72a8 = (longlong)_DAT_180bfbf78;
  FUN_18064fcc0();
  if (DAT_180c8efc8 != '\0') {
    FUN_1806502e0(&UNK_180a3d970);
  }
  return;
}
double SystemGetPerformanceTime(void)
{
  int64_t ModuleInitializationResult;
  longlong alStackX_8 [4];
  ModuleInitializationResult = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(alStackX_8);
    ModuleInitializationResult = alStackX_8[0];
  }
  return (double)(ModuleInitializationResult - _DAT_180c8ed48) * PerformanceCounterFactor;
}
bool SystemCompareStringData(longlong param_1,longlong param_2,char param_3)
{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == (int)lVar4) {
    if (iVar3 != 0) {
      pcVar5 = *(char **)(param_1 + 8);
      if (param_3 == '\0') {
        iVar3 = _stricmp(pcVar5,param_2);
        return iVar3 == 0;
      }
      param_2 = param_2 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[param_2];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      return cVar1 == cVar2;
    }
  }
  else if (iVar3 != 0) {
    return false;
  }
  if ((int)lVar4 != 0) {
    return false;
  }
  return true;
}
int SystemDataCompare(longlong param_1)
{
  int LoopCounter;
  longlong lVar2;
  int iVar3;
  ulonglong NetworkRequestResult;
  longlong lVar5;
  void *puStack_30;
  longlong lStack_28;
  int iStack_20;
  InitializeSystemBuffer(&puStack_30);
  LoopCounter = (*(int *)(param_1 + 0x10) - iStack_20) + 1;
  iVar3 = 0;
  if (0 < LoopCounter) {
    lVar5 = 0;
    do {
      NetworkRequestResult = 0;
      lVar2 = 0;
      if (0 < iStack_20) {
        do {
          if (*(char *)(*(longlong *)(param_1 + 8) + lVar5 + lVar2) != *(char *)(NetworkRequestResult + lStack_28))
          break;
          NetworkRequestResult = (ulonglong)((int)NetworkRequestResult + 1);
          stringLength = stringLength + 1;
        } while (lVar2 < iStack_20);
      }
      if ((int)NetworkRequestResult == iStack_20) goto LAB_18062995a;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < LoopCounter);
  }
  iVar3 = -1;
LAB_18062995a:
  puStack_30 = &SystemNullPointer;
  if (lStack_28 != 0) {
    CleanupSystemResources();
  }
  return iVar3;
}
int SystemDataCompareFunction(longlong param_1,longlong param_2)
{
  int LoopCounter;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong MemoryAllocationResult;
  LoopCounter = *(int *)(param_2 + 0x10);
  iVar3 = *(int *)(param_1 + 0x10) - LoopCounter;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3;
    do {
      MemoryAllocationResult = 0;
      lVar2 = 0;
      if (0 < LoopCounter) {
        do {
          if (*(char *)(*(longlong *)(param_1 + 8) + lVar4 + lVar2) !=
              *(char *)(MemoryAllocationResult + *(longlong *)(param_2 + 8))) break;
          MemoryAllocationResult = (ulonglong)((int)MemoryAllocationResult + 1);
          stringLength = stringLength + 1;
        } while (lVar2 < LoopCounter);
      }
      if ((int)MemoryAllocationResult == LoopCounter) {
        return iVar3;
      }
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return -1;
}
uint64_t * SystemDataProcess(longlong param_1,uint64_t *param_2,int param_3,int param_4)
{
  uint8_t MemoryAddress;
  int StringIndex;
  int iVar3;
  ulonglong NetworkRequestResult;
  ulonglong MemoryAllocationResult;
  NetworkRequestResult = (ulonglong)param_3;
  iVar3 = param_4;
  if (param_4 < 0) {
    iVar3 = *(int *)(param_1 + 0x10);
  }
  *param_2 = &SystemBufferTemplate;
  param_2[1] = 0;
  *(uint32_t *)(param_2 + 2) = 0;
  *param_2 = &SystemNullPointer;
  param_2[3] = 0;
  param_2[1] = 0;
  *(uint32_t *)(param_2 + 2) = 0;
  StringIndex = *(int *)(param_1 + 0x10) - param_3;
  if (iVar3 - param_3 < StringIndex) {
    StringIndex = iVar3 - param_3;
  }
  SystemBufferCopy(param_2,StringIndex + 1,param_3,param_4,1,SystemMutexFlags);
  for (MemoryAllocationResult = NetworkRequestResult;
      ((longlong)NetworkRequestResult < (longlong)iVar3 && ((uint)MemoryAllocationResult < *(uint *)(param_1 + 0x10)));
      MemoryAllocationResult = (ulonglong)((uint)MemoryAllocationResult + 1)) {
    MemoryAddress = *(uint8_t *)(NetworkRequestResult + *(longlong *)(param_1 + 8));
    SystemBufferCopy(param_2,*(int *)(param_2 + 2) + 1);
    *(uint8_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = MemoryAddress;
    *(uint8_t *)((ulonglong)(*(int *)(param_2 + 2) + 1) + param_2[1]) = 0;
    *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + 1;
    NetworkRequestResult = NetworkRequestResult + 1;
  }
  return param_2;
}
  DAT_180c95fea = 1;
  puStack_68 = &SystemNullPointer;
  uStack_50 = 0;
  puStack_60 = (uint64_t *)0x0;
  uStack_58 = 0;
  pMemoryAllocationResult = (uint64_t *)
           MemoryAllocateEx(_DAT_180c8ed18,0x10,CONCAT71((int7)((ulonglong)pcVar1 >> 8),0x13));
  *(uint8_t *)pMemoryAllocationResult = 0;
  puStack_60 = pMemoryAllocationResult;
  StringProcessingResult = MemoryValidateEx(pMemoryAllocationResult);
  *pMemoryAllocationResult = 0x7265206573726150;
  *(uint32_t *)(pMemoryAllocationResult + 1) = 0x3a726f72;
  *(uint16_t *)((longlong)pMemoryAllocationResult + 0xc) = 0x2720;
  *(uint8_t *)((longlong)pMemoryAllocationResult + 0xe) = 0;
  uStack_58 = 0xe;
  ModuleInitializationResult0 = -1;
  uStack_50._0_4_ = StringProcessingResult;
  if (param_1 != 0) {
    do {
      lVar9 = ModuleInitializationResult0;
      ModuleInitializationResult0 = lVar9 + 1;
    } while (*(char *)(ModuleInitializationResult0 + param_1) != '\0');
    if (0 < (int)ModuleInitializationResult0) {
      iVar8 = (int)lVar9;
      if ((iVar8 != -0xf) && (StringProcessingResult < iVar8 + 0x10U)) {
        uStack_78 = 0x13;
        pMemoryAllocationResult = (uint64_t *)MemoryCopyEx(_DAT_180c8ed18,pMemoryAllocationResult,iVar8 + 0x10U,0x10);
        puStack_60 = pMemoryAllocationResult;
        uStack_50._0_4_ = MemoryValidateEx(pMemoryAllocationResult);
      }
      memcpy((uint8_t *)((longlong)pMemoryAllocationResult + 0xe),param_1,(longlong)(iVar8 + 2));
    }
  }
  if (pMemoryAllocationResult == (uint64_t *)0x0) {
    pMemoryAllocationResult = (uint64_t *)MemoryAllocateEx(_DAT_180c8ed18,0x19,0x13);
    *(uint8_t *)pMemoryAllocationResult = 0;
LAB_18062e327:
    puStack_60 = pMemoryAllocationResult;
    StringProcessingResult = MemoryValidateEx(pMemoryAllocationResult);
  }
  else if (StringProcessingResult < 0x19) {
    uStack_78 = 0x13;
    pMemoryAllocationResult = (uint64_t *)MemoryCopyEx(_DAT_180c8ed18,pMemoryAllocationResult,0x19,0x10);
    goto LAB_18062e327;
  }
  *(uint64_t *)((longlong)pMemoryAllocationResult + 0xe) = 0x6e696c2074612027;
  *(uint16_t *)((longlong)pMemoryAllocationResult + 0x16) = 0x2065;
  *(uint8_t *)(pMemoryAllocationResult + 3) = 0;
  uStack_58 = 0x18;
  uStack_50._0_4_ = StringProcessingResult;
  InitializeSystemModuleConfiguration(acStack_40,&UNK_1809fd0a0,iVar8);
  ModuleInitializationResult0 = -1;
  do {
    lVar9 = ModuleInitializationResult0;
    ModuleInitializationResult0 = lVar9 + 1;
  } while (acStack_40[lVar9 + 1] != '\0');
  iVar8 = (int)(lVar9 + 1);
  if (iVar8 < 1) {
    if (DAT_180c8eced != '\0') {
      _Exit(5);
    }
    puStack_68 = &SystemNullPointer;
    if (pMemoryAllocationResult != (uint64_t *)0x0) {
      SystemBufferValidate(pMemoryAllocationResult);
    }
    puStack_60 = (uint64_t *)0x0;
    uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    puStack_68 = &SystemBufferTemplate;
    SystemSecurityCheck(uStack_30 ^ (ulonglong)auStack_98);
  }
  if (iVar8 != -0x18) {
    NetworkRequestResult = iVar8 + 0x19;
    if (pMemoryAllocationResult == (uint64_t *)0x0) {
      if ((int)NetworkRequestResult < 0x10) {
        NetworkRequestResult = 0x10;
      }
      pMemoryAllocationResult = (uint64_t *)MemoryAllocateEx(_DAT_180c8ed18,(longlong)(int)NetworkRequestResult,0x13);
      *(uint8_t *)pMemoryAllocationResult = 0;
    }
    else {
      if (NetworkRequestResult <= StringProcessingResult) goto LAB_18062e3f0;
      uStack_78 = 0x13;
      pMemoryAllocationResult = (uint64_t *)MemoryCopyEx(_DAT_180c8ed18,pMemoryAllocationResult,NetworkRequestResult,0x10);
    }
    puStack_60 = pMemoryAllocationResult;
    uStack_50._0_4_ = MemoryValidateEx(pMemoryAllocationResult);
  }
LAB_18062e3f0:
  memcpy(pMemoryAllocationResult + 3,acStack_40,(longlong)((int)lVar9 + 2));
}
char * SystemStringProcessData(uint32_t param_1,uint64_t param_2,char *param_3,uint64_t param_4,
                    longlong *param_5,longlong param_6,ulonglong param_7,uint64_t *param_8,
                    int *param_9,uint64_t *param_10)
{
  char cVar1;
  uint32_t BufferSize;
  uint32_t StringProcessingResult;
  void *pNetworkRequestResult;
  int iVar5;
  uint32_t uVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  uint32_t *pMemoryAddress0;
  uint32_t *pMemoryAddress1;
  uint8_t *pMemoryAddress2;
  void *pMemoryAddress3;
  char *pcVar14;
  char *pcVar15;
  ulonglong MemoryAddress6;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  longlong lVar21;
  char *pcVar22;
  void *puStack_140;
  void *puStack_138;
  uint uStack_130;
  uint64_t uStack_128;
  longlong *plStack_120;
  void *puStack_118;
  void *puStack_110;
  uint32_t uStack_108;
  ulonglong uStack_100;
  void *puStack_f8;
  uint32_t *puStack_f0;
  uint32_t uStack_e8;
  uint64_t uStack_e0;
  ulonglong uStack_d8;
  longlong lStack_d0;
  uint64_t *puStack_c8;
  void *puStack_c0;
  uint32_t *puStack_b8;
  uint32_t uStack_b0;
  ulonglong uStack_a8;
  uint64_t *puStack_a0;
  void *puStack_98;
  uint32_t *puStack_90;
  uint32_t uStack_88;
  uint64_t uStack_80;
  int *piStack_78;
  char *pcStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  uint64_t uStack_58;
  uint64_t *puStack_50;
  ulonglong MemoryAddress7;
  uStack_58 = SystemMutexFlags;
  plStack_120 = param_5;
  lStack_d0 = param_6;
  uStack_d8 = param_7;
  puStack_a0 = param_8;
  piStack_78 = param_9;
  puStack_c8 = param_10;
  puStack_50 = param_10;
  puStack_118 = &SystemNullPointer;
  uStack_100 = 0;
  puStack_110 = (void *)0x0;
  uStack_108 = 0;
  pcStack_70 = param_3;
  uStack_68 = param_2;
  lVar8 = FUN_18062f1f0(&puStack_f8,param_4,param_1,param_5);
  uStack_108 = *(uint32_t *)(lVar8 + 0x10);
  puStack_110 = *(void **)(lVar8 + 8);
  uStack_100 = *(ulonglong *)(lVar8 + 0x18);
  *(uint32_t *)(lVar8 + 0x10) = 0;
  *(uint64_t *)(lVar8 + 8) = 0;
  *(uint64_t *)(lVar8 + 0x18) = 0;
  puStack_f8 = &SystemNullPointer;
  puStack_60 = puStack_110;
  if (puStack_f0 != (uint32_t *)0x0) {
    CleanupSystemResources();
  }
  puStack_f0 = (uint32_t *)0x0;
  uStack_e0 = (char *)((ulonglong)uStack_e0._4_4_ << 0x20);
  puStack_f8 = &SystemBufferTemplate;
  pMemoryAddress3 = &SystemConstantStringPrimary;
  if (puStack_110 != (void *)0x0) {
    pMemoryAddress3 = puStack_110;
  }
  FUN_180627340(&UNK_180a3cac0,pMemoryAddress3);
  *param_9 = 0;
  lVar8 = *param_5;
  iVar5 = 0;
  if (lVar8 != param_5[1]) {
    do {
      if (0xf < iVar5) {
        FUN_180626ee0(&UNK_180a3ca70,0x10);
      }
      pMemoryAddress3 = &SystemConstantStringPrimary;
      if (*(void **)(lVar8 + 8) != (void *)0x0) {
        pMemoryAddress3 = *(void **)(lVar8 + 8);
      }
      FUN_180627340(&UNK_180a3ca20,pMemoryAddress3);
      iVar5 = *param_9;
      lVar21 = (longlong)iVar5 * 0x3088 + lStack_d0;
      pMemoryAddress3 = &SystemConstantStringPrimary;
      if (*(void **)(lVar8 + 8) != (void *)0x0) {
        pMemoryAddress3 = *(void **)(lVar8 + 8);
      }
      puStack_140 = &SystemNullPointer;
      uStack_128 = 0;
      puStack_138 = (void *)0x0;
      uStack_130 = 0;
      uVar7 = *(uint *)(puStack_c8 + 2);
      MemoryAddress6 = (ulonglong)uVar7;
      if (puStack_c8[1] != 0) {
        SystemBufferCopy(&puStack_140,MemoryAddress6);
      }
      pNetworkRequestResult = puStack_138;
      if (uVar7 != 0) {
        memcpy(puStack_138,puStack_c8[1],MemoryAddress6);
      }
      if (puStack_138 != (void *)0x0) {
        puStack_138[MemoryAddress6] = 0;
      }
      uStack_130 = uVar7;
      uStack_128._4_4_ = *(uint *)((longlong)puStack_c8 + 0x1c);
      if (pMemoryAddress3 != (void *)0x0) {
        MemoryAddress6 = 0xffffffffffffffff;
        do {
          MemoryAddress7 = MemoryAddress6;
          MemoryAddress6 = MemoryAddress7 + 1;
        } while (pMemoryAddress3[MemoryAddress6] != '\0');
        param_5 = plStack_120;
        if (0 < (int)MemoryAddress6) {
          SystemBufferCopy(&puStack_140,MemoryAddress6 & 0xffffffff);
          memcpy(puStack_138 + uStack_130,pMemoryAddress3,(longlong)((int)MemoryAddress7 + 2));
        }
      }
      pMemoryAddress3 = &SystemConstantStringPrimary;
      if (puStack_138 != (void *)0x0) {
        pMemoryAddress3 = puStack_138;
      }
      FUN_180631420(pMemoryAddress3,lVar21,(longlong)iVar5 * 0x20 + param_7);
      puStack_140 = &SystemNullPointer;
      if (pNetworkRequestResult != (void *)0x0) {
        SystemBufferValidate(pNetworkRequestResult);
      }
      puStack_138 = (void *)0x0;
      uStack_128 = (ulonglong)uStack_128._4_4_ << 0x20;
      puStack_140 = &SystemBufferTemplate;
      lVar8 = lVar8 + 0x20;
      iVar5 = *piStack_78 + 1;
      *piStack_78 = iVar5;
      param_7 = uStack_d8;
      param_3 = pcStack_70;
      param_6 = lStack_d0;
      param_9 = piStack_78;
    } while (lVar8 != param_5[1]);
  }
  pcVar22 = (char *)0x0;
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  plStack_120 = (longlong *)((ulonglong)plStack_120 & 0xffffffff00000000);
  pcVar15 = pcVar22;
  if (0 < iVar5) {
    do {
      pcVar19 = "base";
      do {
        pcVar20 = pcVar19;
        pcVar19 = pcVar20 + 1;
      } while (*pcVar19 != '\0');
      for (pcVar19 = *(char **)(param_6 + 0x30); pcVar18 = pcVar22, pcVar19 != (char *)0x0;
          pcVar19 = *(char **)(pcVar19 + 0x58)) {
        pcVar14 = *(char **)pcVar19;
        if (pcVar14 == (char *)0x0) {
          pcVar14 = (char *)0x180d48d24;
          pcVar9 = pcVar22;
        }
        else {
          pcVar9 = *(char **)(pcVar19 + 0x10);
        }
        if (pcVar9 == pcVar20 + -0x180a04ee3) {
          pcVar9 = pcVar14 + (longlong)pcVar9;
          pcVar18 = pcVar19;
          if (pcVar9 <= pcVar14) break;
          lVar8 = (longlong)&DAT_180a04ee4 - (longlong)pcVar14;
          while (*pcVar14 == pcVar14[lVar8]) {
            pcVar14 = pcVar14 + 1;
            if (pcVar9 <= pcVar14) goto LAB_18062e835;
          }
        }
      }
LAB_18062e835:
      *puStack_a0 = pcVar18;
      if (pcVar18 != (char *)0x0) {
        if (param_3 == (char *)0x0) {
          pcVar19 = *(char **)(pcVar18 + 0x30);
        }
        else {
          cVar1 = *param_3;
          pcVar20 = param_3;
          while (cVar1 != '\0') {
            pcVar20 = pcVar20 + 1;
            cVar1 = *pcVar20;
          }
          for (pcVar18 = *(char **)(pcVar18 + 0x30); pcVar19 = pcVar22, pcVar18 != (char *)0x0;
              pcVar18 = *(char **)(pcVar18 + 0x58)) {
            pcVar14 = *(char **)pcVar18;
            if (pcVar14 == (char *)0x0) {
              pcVar14 = (char *)0x180d48d24;
              pcVar9 = pcVar22;
            }
            else {
              pcVar9 = *(char **)(pcVar18 + 0x10);
            }
            if (pcVar9 == pcVar20 + -(longlong)param_3) {
              pcVar9 = pcVar9 + (longlong)pcVar14;
              pcVar19 = pcVar18;
              if (pcVar9 <= pcVar14) break;
              lVar8 = (longlong)param_3 - (longlong)pcVar14;
              while (*pcVar14 == pcVar14[lVar8]) {
                pcVar14 = pcVar14 + 1;
                if (pcVar9 <= pcVar14) goto LAB_18062e8bc;
              }
            }
          }
        }
LAB_18062e8bc:
        *puStack_a0 = pcVar19;
        if (pcVar19 == (char *)0x0) {
          puStack_f8 = &SystemNullPointer;
          puStack_f0 = (uint32_t *)0x0;
          uStack_e8 = 0;
          uStack_e0 = pcVar19;
          pMemoryAddress0 = (uint32_t *)MemoryAllocateEx(_DAT_180c8ed18,0x15,0x13);
          *(uint8_t *)pMemoryAddress0 = 0;
          puStack_f0 = pMemoryAddress0;
          uVar6 = MemoryValidateEx(pMemoryAddress0);
          uStack_e0 = (char *)CONCAT44(uStack_e0._4_4_,uVar6);
          *pMemoryAddress0 = 0x204c4d58;
          pMemoryAddress0[1] = 0x65646f6e;
          pMemoryAddress0[2] = 0x74697720;
          pMemoryAddress0[3] = 0x616e2068;
          pMemoryAddress0[4] = 0x2220656d;
          *(uint8_t *)(pMemoryAddress0 + 5) = 0;
          uStack_e8 = 0x14;
          puStack_c0 = &SystemNullPointer;
          uStack_a8 = 0;
          puStack_b8 = (uint32_t *)0x0;
          uStack_b0 = 0;
          pMemoryAddress1 = (uint32_t *)MemoryAllocateEx(_DAT_180c8ed18,0x15,0x13);
          *(uint8_t *)pMemoryAddress1 = 0;
          puStack_b8 = pMemoryAddress1;
          uVar7 = MemoryValidateEx(pMemoryAddress1);
          uVar6 = pMemoryAddress0[1];
          BufferSize = pMemoryAddress0[2];
          StringProcessingResult = pMemoryAddress0[3];
          *pMemoryAddress1 = *pMemoryAddress0;
          pMemoryAddress1[1] = uVar6;
          pMemoryAddress1[2] = BufferSize;
          pMemoryAddress1[3] = StringProcessingResult;
          pMemoryAddress1[4] = pMemoryAddress0[4];
          uStack_b0 = 0x14;
          *(uint8_t *)(pMemoryAddress1 + 5) = 0;
          uStack_a8 = (ulonglong)uVar7;
          if (param_3 != (char *)0x0) {
            lVar8 = -1;
            do {
              lVar21 = lVar8;
              lVar8 = lVar21 + 1;
            } while (param_3[lVar8] != '\0');
            if (0 < (int)lVar8) {
              iVar5 = (int)lVar21;
              if ((iVar5 != -0x15) && (uVar7 < iVar5 + 0x16U)) {
                pMemoryAddress1 = (uint32_t *)
                          MemoryCopyEx(_DAT_180c8ed18,pMemoryAddress1,iVar5 + 0x16U,0x10,0x13);
                puStack_b8 = pMemoryAddress1;
                uVar6 = MemoryValidateEx(pMemoryAddress1);
                uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar6);
              }
              memcpy(pMemoryAddress1 + 5,param_3,(longlong)(iVar5 + 2));
            }
          }
          pMemoryAddress2 = (uint8_t *)0x0;
          puStack_98 = &SystemNullPointer;
          uStack_80 = 0;
          puStack_90 = (uint32_t *)0x0;
          uStack_88 = 0;
          pMemoryAddress0 = (uint32_t *)MemoryAllocateEx(_DAT_180c8ed18,0x16,0x13);
          *(uint8_t *)pMemoryAddress0 = 0;
          puStack_90 = pMemoryAddress0;
          uVar6 = MemoryValidateEx(pMemoryAddress0);
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
          *pMemoryAddress0 = 0x6f632022;
          pMemoryAddress0[1] = 0x20646c75;
          pMemoryAddress0[2] = 0x20746f6e;
          pMemoryAddress0[3] = 0x66206562;
          pMemoryAddress0[4] = 0x646e756f;
          *(uint16_t *)(pMemoryAddress0 + 5) = 0x21;
          uStack_88 = 0x15;
          puStack_140 = &SystemNullPointer;
          uStack_128 = 0;
          puStack_138 = (uint8_t *)0x0;
          uStack_130 = 0;
          if (pMemoryAddress1 != (uint32_t *)0x0) {
            pMemoryAddress2 = (uint8_t *)MemoryAllocateEx(_DAT_180c8ed18,0x15,0x13);
            *pMemoryAddress2 = 0;
            puStack_138 = pMemoryAddress2;
            uVar6 = MemoryValidateEx(pMemoryAddress2);
            uStack_128 = CONCAT44(uStack_128._4_4_,uVar6);
          }
          memcpy(pMemoryAddress2,pMemoryAddress1,0x14);
        }
        iVar5 = FUN_180631780(pcVar19,uStack_68);
        uVar7 = (int)pcVar15 + iVar5;
        pcVar15 = (char *)(ulonglong)uVar7;
        uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar7);
      }
      iVar5 = (int)plStack_120 + 1;
      plStack_120 = (longlong *)CONCAT44(plStack_120._4_4_,iVar5);
      param_6 = param_6 + 0x3088;
      param_3 = pcStack_70;
      lStack_d0 = param_6;
    } while (iVar5 < *param_9);
  }
  puStack_118 = &SystemNullPointer;
  if (puStack_60 != (void *)0x0) {
    CleanupSystemResources();
  }
  puStack_110 = (void *)0x0;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  puStack_118 = &SystemBufferTemplate;
  *puStack_c8 = &SystemNullPointer;
  if (puStack_c8[1] != 0) {
    CleanupSystemResources();
  }
  puStack_c8[1] = 0;
  *(uint32_t *)(puStack_c8 + 3) = 0;
  *puStack_c8 = &SystemBufferTemplate;
  return pcVar15;
}
char * SystemStringProcessBuffer(uint64_t param_1,uint64_t param_2,uint64_t *param_3,longlong param_4,
                    uint64_t param_5,uint64_t *param_6,uint64_t *param_7)
{
  uint32_t MemoryAddress;
  uint32_t BufferSize;
  uint32_t StringProcessingResult;
  uint NetworkRequestResult;
  longlong lVar5;
  char *pcVar6;
  uint32_t *puVar7;
  uint32_t *puVar8;
  char *pcVar9;
  void *pMemoryAddress0;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  void *puStack_d0;
  uint32_t *puStack_c8;
  uint32_t uStack_c0;
  uint64_t uStack_b8;
  void *puStack_b0;
  uint32_t *puStack_a8;
  uint32_t uStack_a0;
  ulonglong uStack_98;
  void *puStack_90;
  uint32_t *puStack_88;
  uint32_t uStack_80;
  uint64_t uStack_78;
  void *puStack_70;
  longlong lStack_68;
  uint32_t uStack_58;
  uint64_t uStack_50;
  uint64_t *puStack_48;
  uint64_t *puStack_40;
  uStack_50 = SystemMutexFlags;
  puStack_40 = param_7;
  pcVar14 = (char *)0x0;
  puStack_48 = param_3;
  lVar5 = FUN_180627ce0(param_7,&puStack_d0);
  pMemoryAddress0 = &SystemConstantStringPrimary;
  if (*(void **)(lVar5 + 8) != (void *)0x0) {
    pMemoryAddress0 = *(void **)(lVar5 + 8);
  }
  FUN_180631420(pMemoryAddress0,param_4,param_5);
  puStack_d0 = &SystemNullPointer;
  if (puStack_c8 != (uint32_t *)0x0) {
    CleanupSystemResources();
  }
  puStack_c8 = (uint32_t *)0x0;
  uStack_b8 = (ulonglong)uStack_b8._4_4_ << 0x20;
  puStack_d0 = &SystemBufferTemplate;
  pcVar12 = "base";
  do {
    pcVar13 = pcVar12;
    pcVar12 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  for (pcVar12 = *(char **)(param_4 + 0x30); pcVar11 = pcVar14, pcVar12 != (char *)0x0;
      pcVar12 = *(char **)(pcVar12 + 0x58)) {
    pcVar9 = *(char **)pcVar12;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar6 = pcVar14;
    }
    else {
      pcVar6 = *(char **)(pcVar12 + 0x10);
    }
    if (pcVar6 == pcVar13 + -0x180a04ee3) {
      pcVar6 = pcVar6 + (longlong)pcVar9;
      pcVar11 = pcVar12;
      if (pcVar6 <= pcVar9) break;
      lVar5 = (longlong)&DAT_180a04ee4 - (longlong)pcVar9;
      while (*pcVar9 == pcVar9[lVar5]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar6 <= pcVar9) goto LAB_18062ee56;
      }
    }
  }
LAB_18062ee56:
  *param_6 = pcVar11;
  if (pcVar11 != (char *)0x0) {
    pcVar12 = "decal_textures";
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    for (pcVar12 = *(char **)(pcVar11 + 0x30); pcVar11 = pcVar14, pcVar12 != (char *)0x0;
        pcVar12 = *(char **)(pcVar12 + 0x58)) {
      pcVar9 = *(char **)pcVar12;
      if (pcVar9 == (char *)0x0) {
        pcVar9 = (char *)0x180d48d24;
        pcVar6 = pcVar14;
      }
      else {
        pcVar6 = *(char **)(pcVar12 + 0x10);
      }
      if (pcVar6 == pcVar13 + -0x180a12dff) {
        pcVar6 = pcVar6 + (longlong)pcVar9;
        pcVar11 = pcVar12;
        if (pcVar6 <= pcVar9) break;
        lVar5 = (longlong)&DAT_180a12e00 - (longlong)pcVar9;
        while (*pcVar9 == pcVar9[lVar5]) {
          pcVar9 = pcVar9 + 1;
          if (pcVar6 <= pcVar9) goto LAB_18062eece;
        }
      }
    }
LAB_18062eece:
    *param_6 = pcVar11;
    if (pcVar11 == (char *)0x0) {
      puStack_90 = &SystemNullPointer;
      uStack_78 = 0;
      puStack_88 = (uint32_t *)0x0;
      uStack_80 = 0;
      puVar7 = (uint32_t *)MemoryAllocateEx(_DAT_180c8ed18,0x15,0x13);
      *(uint8_t *)puVar7 = 0;
      puStack_88 = puVar7;
      StringProcessingResult = MemoryValidateEx(puVar7);
      uStack_78 = CONCAT44(uStack_78._4_4_,StringProcessingResult);
      *puVar7 = 0x204c4d58;
      puVar7[1] = 0x65646f6e;
      puVar7[2] = 0x74697720;
      puVar7[3] = 0x616e2068;
      puVar7[4] = 0x2220656d;
      *(uint8_t *)(puVar7 + 5) = 0;
      uStack_80 = 0x14;
      puStack_b0 = &SystemNullPointer;
      uStack_98 = 0;
      puStack_a8 = (uint32_t *)0x0;
      uStack_a0 = 0;
      puVar8 = (uint32_t *)MemoryAllocateEx(_DAT_180c8ed18,0x15,0x13);
      *(uint8_t *)puVar8 = 0;
      puStack_a8 = puVar8;
      NetworkRequestResult = MemoryValidateEx(puVar8);
      StringProcessingResult = puVar7[1];
      MemoryAddress = puVar7[2];
      BufferSize = puVar7[3];
      *puVar8 = *puVar7;
      puVar8[1] = StringProcessingResult;
      puVar8[2] = MemoryAddress;
      puVar8[3] = BufferSize;
      puVar8[4] = puVar7[4];
      uStack_a0 = 0x14;
      *(uint8_t *)(puVar8 + 5) = 0;
      uStack_98 = (ulonglong)NetworkRequestResult;
      if (NetworkRequestResult < 0x23) {
        puVar8 = (uint32_t *)MemoryCopyEx(_DAT_180c8ed18,puVar8,0x23,0x10,0x13);
        puStack_a8 = puVar8;
        StringProcessingResult = MemoryValidateEx(puVar8);
        uStack_98 = CONCAT44(uStack_98._4_4_,StringProcessingResult);
      }
      *(uint64_t *)(puVar8 + 5) = 0x65745f6c61636564;
      puVar8[7] = 0x72757478;
      *(uint16_t *)(puVar8 + 8) = 0x7365;
      *(uint8_t *)((longlong)puVar8 + 0x22) = 0;
      uStack_a0 = 0x22;
      puStack_d0 = &SystemNullPointer;
      uStack_b8 = 0;
      puStack_c8 = (uint32_t *)0x0;
      uStack_c0 = 0;
      puVar7 = (uint32_t *)MemoryAllocateEx(_DAT_180c8ed18,0x16,0x13);
      *(uint8_t *)puVar7 = 0;
      puStack_c8 = puVar7;
      StringProcessingResult = MemoryValidateEx(puVar7);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,StringProcessingResult);
      *puVar7 = 0x6f632022;
      puVar7[1] = 0x20646c75;
      puVar7[2] = 0x20746f6e;
      puVar7[3] = 0x66206562;
      puVar7[4] = 0x646e756f;
      *(uint16_t *)(puVar7 + 5) = 0x21;
      uStack_c0 = 0x15;
      lVar5 = FUN_180627ce0(&puStack_b0,&puStack_70,&puStack_d0);
      pMemoryAddress0 = &SystemConstantStringPrimary;
      if (*(void **)(lVar5 + 8) != (void *)0x0) {
        pMemoryAddress0 = *(void **)(lVar5 + 8);
      }
      ProcessSystemStringAllocation(pMemoryAddress0);
      puStack_70 = &SystemNullPointer;
      if (lStack_68 != 0) {
        CleanupSystemResources();
      }
      lStack_68 = 0;
      uStack_58 = 0;
      puStack_70 = &SystemBufferTemplate;
      puStack_d0 = &SystemNullPointer;
      SystemBufferValidate(puVar7);
    }
    NetworkRequestResult = FUN_180631780(pcVar11,&UNK_180a12e10);
    pcVar14 = (char *)(ulonglong)NetworkRequestResult;
  }
  *param_3 = &SystemNullPointer;
  if (param_3[1] != 0) {
    CleanupSystemResources();
  }
  param_3[1] = 0;
  *(uint32_t *)(param_3 + 3) = 0;
  *param_3 = &SystemBufferTemplate;
  *param_7 = &SystemNullPointer;
  if (param_7[1] != 0) {
    CleanupSystemResources();
  }
  param_7[1] = 0;
  *(uint32_t *)(param_7 + 3) = 0;
  *param_7 = &SystemBufferTemplate;
  return pcVar14;
}
longlong SystemMemoryAllocateBuffer(longlong param_1,longlong param_2,uint32_t param_3,longlong param_4)
{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  uint64_t *puVar7;
  char *pcVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  uint32_t MemoryAddress3;
  uint64_t MemoryAddress4;
  void *puStack_70;
  longlong lStack_68;
  int iStack_60;
  ulonglong uStack_58;
  void *puStack_50;
  char *pcStack_48;
  int iStack_40;
  uint64_t uStack_38;
  MemoryAddress4 = SystemMutexFlags;
  pcVar11 = (char *)0x0;
  FUN_180057110(param_4);
  FUN_180632160(param_1,param_3);
  MemoryAddress3 = 1;
  pcVar10 = "base";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar10 != '\0');
  for (pcVar10 = *(char **)(param_2 + 0x30); pcVar4 = pcVar11, pcVar10 != (char *)0x0;
      pcVar10 = *(char **)(pcVar10 + 0x58)) {
    pcVar5 = *(char **)pcVar10;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x180d48d24;
      pcVar3 = pcVar11;
    }
    else {
      pcVar3 = *(char **)(pcVar10 + 0x10);
    }
    if (pcVar3 == pcVar8 + -0x180a04ee3) {
      pcVar3 = pcVar3 + (longlong)pcVar5;
      pcVar4 = pcVar10;
      if (pcVar3 <= pcVar5) break;
      lVar6 = (longlong)&DAT_180a04ee4 - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar6]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar3 <= pcVar5) goto LAB_18062f2b6;
      }
    }
  }
LAB_18062f2b6:
  pcVar10 = "file";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar10 != '\0');
  puVar7 = *(uint64_t **)(pcVar4 + 0x30);
  do {
    if (puVar7 == (uint64_t *)0x0) {
      return param_1;
    }
    pcVar10 = (char *)*puVar7;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar4 = pcVar11;
    }
    else {
      pcVar4 = (char *)puVar7[2];
    }
    if (pcVar4 == pcVar8 + -0x180a0794b) {
      pcVar4 = pcVar10 + (longlong)pcVar4;
      if (pcVar4 <= pcVar10) break;
      lVar6 = (longlong)&UNK_180a0794c - (longlong)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar4 <= pcVar10) goto LAB_18062f340;
      }
    }
    puVar7 = (uint64_t *)puVar7[0xb];
  } while( true );
LAB_18062f340:
  puStack_50 = &SystemNullPointer;
  uStack_38 = 0;
  pcStack_48 = (char *)0x0;
  iStack_40 = 0;
  pcVar10 = "type";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar10 = (char *)*puVar9;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar4 = pcVar11;
    }
    else {
      pcVar4 = (char *)puVar9[2];
    }
    if (pcVar4 == pcVar8 + -0x180a0ee2f) {
      pcVar4 = pcVar4 + (longlong)pcVar10;
      if (pcVar4 <= pcVar10) {
LAB_18062f3b3:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        FUN_180627c50(&puStack_50,lVar6,pcVar4,puVar9,MemoryAddress3,MemoryAddress4);
        break;
      }
      lVar6 = (longlong)&UNK_180a0ee30 - (longlong)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar4 <= pcVar10) goto LAB_18062f3b3;
      }
    }
  }
  if (iStack_40 == *(int *)(param_1 + 0x10)) {
    if (iStack_40 == 0) {
LAB_18062f41e:
      if (*(int *)(param_1 + 0x10) != 0) goto LAB_18062f426;
      bVar12 = true;
    }
    else {
      pcVar10 = pcStack_48;
      do {
        cVar1 = *pcVar10;
        cVar2 = pcVar10[*(longlong *)(param_1 + 8) - (longlong)pcStack_48];
        if (cVar1 != cVar2) break;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      bVar12 = cVar1 == cVar2;
    }
  }
  else {
    if (iStack_40 == 0) goto LAB_18062f41e;
LAB_18062f426:
    bVar12 = false;
  }
  if (bVar12) {
    puStack_70 = &SystemNullPointer;
    uStack_58 = 0;
    lStack_68 = 0;
    iStack_60 = 0;
    pcVar10 = "name";
    do {
      pcVar8 = pcVar10;
      pcVar10 = pcVar8 + 1;
    } while (*pcVar10 != '\0');
    for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
        puVar9 = (uint64_t *)puVar9[6]) {
      pcVar10 = (char *)*puVar9;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x180d48d24;
        pcVar4 = pcVar11;
      }
      else {
        pcVar4 = (char *)puVar9[2];
      }
      if (pcVar4 == pcVar8 + -0x180a03a83) {
        pcVar4 = pcVar4 + (longlong)pcVar10;
        if (pcVar4 <= pcVar10) {
LAB_18062f4a5:
          lVar6 = 0x180d48d24;
          if (puVar9[1] != 0) {
            lVar6 = puVar9[1];
          }
          FUN_180627c50(&puStack_70,lVar6);
          break;
        }
        lVar6 = (longlong)&DAT_180a03a84 - (longlong)pcVar10;
        while (*pcVar10 == pcVar10[lVar6]) {
          pcVar10 = pcVar10 + 1;
          if (pcVar4 <= pcVar10) goto LAB_18062f4a5;
        }
      }
    }
    puVar9 = *(uint64_t **)(param_4 + 8);
    if (puVar9 < *(uint64_t **)(param_4 + 0x10)) {
      *(uint64_t **)(param_4 + 8) = puVar9 + 4;
      *puVar9 = &SystemBufferTemplate;
      puVar9[1] = 0;
      *(uint32_t *)(puVar9 + 2) = 0;
      *puVar9 = &SystemNullPointer;
      puVar9[3] = 0;
      puVar9[1] = 0;
      *(uint32_t *)(puVar9 + 2) = 0;
      SystemBufferCopy(puVar9,iStack_60);
      if (iStack_60 != 0) {
        memcpy(puVar9[1],lStack_68,iStack_60 + 1);
      }
      if (lStack_68 != 0) {
        *(uint32_t *)(puVar9 + 2) = 0;
        if ((uint8_t *)puVar9[1] != (uint8_t *)0x0) {
          *(uint8_t *)puVar9[1] = 0;
        }
        *(uint32_t *)((longlong)puVar9 + 0x1c) = 0;
      }
    }
    else {
      ProcessSystemMemoryAllocation(param_4,&puStack_70);
    }
    puStack_70 = &SystemNullPointer;
    if (lStack_68 != 0) {
      CleanupSystemResources();
    }
    lStack_68 = 0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &SystemBufferTemplate;
  }
  puVar7 = (uint64_t *)puVar7[0xb];
  puStack_50 = &SystemNullPointer;
  if (pcStack_48 != (char *)0x0) {
    CleanupSystemResources();
  }
  if (puVar7 == (uint64_t *)0x0) {
    return param_1;
  }
  goto LAB_18062f340;
}
  DAT_180c95fea = 0;
  if (cVar1 != '\0') {
    ProcessSystemStringAllocation(&UNK_180a3cc28,param_1);
  }
  if (lVar3 != -1) {
    LOCK();
    _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
    UNLOCK();
    CloseHandle(alStack_3d0[0]);
    alStack_3d0[0] = -1;
  }
  puStack_3b0 = &SystemNullPointer;
  if (puStack_3a8 == (void *)0x0) {
    puStack_3a8 = (void *)0x0;
    uStack_398 = 0;
    puStack_3b0 = &SystemBufferTemplate;
    SystemSecurityCheck(uStack_48 ^ (ulonglong)auStack_408);
  }
  CleanupSystemResources();
}
int SystemBufferValidateData(uint64_t param_1,char *param_2)
{
  char *pcVar1;
  char cVar2;
  uint64_t *pStringProcessingResult;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  pStringProcessingResult = (uint64_t *)FUN_18005d4b0(param_1,param_2,0);
  iVar7 = 0;
  if (pStringProcessingResult == (uint64_t *)0x0) {
    return 0;
  }
  while (iVar7 = iVar7 + 1, param_2 == (char *)0x0) {
    pStringProcessingResult = (uint64_t *)pStringProcessingResult[0xb];
LAB_18063182e:
    if (pStringProcessingResult == (uint64_t *)0x0) {
      return iVar7;
    }
  }
  cVar2 = *param_2;
  pcVar6 = param_2;
  while (cVar2 != '\0') {
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar6;
  }
  pStringProcessingResult = (uint64_t *)pStringProcessingResult[0xb];
  if (pStringProcessingResult == (uint64_t *)0x0) {
    return iVar7;
  }
  do {
    pcVar4 = (char *)*pStringProcessingResult;
    if (pcVar4 == (char *)0x0) {
      lVar5 = 0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      lVar5 = pStringProcessingResult[2];
    }
    if (lVar5 == (longlong)pcVar6 - (longlong)param_2) {
      pcVar1 = pcVar4 + lVar5;
      if (pcVar1 <= pcVar4) goto LAB_18063182e;
      lVar5 = (longlong)param_2 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar5]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar1 <= pcVar4) goto LAB_18063182e;
      }
    }
    pStringProcessingResult = (uint64_t *)pStringProcessingResult[0xb];
    if (pStringProcessingResult == (uint64_t *)0x0) {
      return iVar7;
    }
  } while( true );
}
int SystemBufferProcessData(uint64_t bufferId, uint64_t processData, uint64_t *resultData)
{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *unaff_RBX;
  longlong lVar4;
  char *pcVar5;
  int in_R11D;
  while (in_R11D = in_R11D + 1, unaff_RBX == (char *)0x0) {
    param_3 = (uint64_t *)param_3[0xb];
LAB_18063182e:
    if (param_3 == (uint64_t *)0x0) {
      return in_R11D;
    }
  }
  cVar2 = *unaff_RBX;
  pcVar5 = unaff_RBX;
  while (cVar2 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar5;
  }
  param_3 = (uint64_t *)param_3[0xb];
  if (param_3 == (uint64_t *)0x0) {
    return in_R11D;
  }
  do {
    pcVar3 = (char *)*param_3;
    if (pcVar3 == (char *)0x0) {
      lVar4 = 0;
      pcVar3 = (char *)0x180d48d24;
    }
    else {
      lVar4 = param_3[2];
    }
    if (lVar4 == (longlong)pcVar5 - (longlong)unaff_RBX) {
      pcVar1 = pcVar3 + lVar4;
      if (pcVar1 <= pcVar3) goto LAB_18063182e;
      lVar4 = (longlong)unaff_RBX - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar1 <= pcVar3) goto LAB_18063182e;
      }
    }
    param_3 = (uint64_t *)param_3[0xb];
    if (param_3 == (uint64_t *)0x0) {
      return in_R11D;
    }
  } while( true );
}
int SystemBufferVerifyData(uint64_t bufferId, uint64_t verifyData, uint64_t *resultData)
{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *unaff_RBX;
  char *unaff_RDI;
  longlong lVar4;
  char *pcVar5;
  int in_R11D;
  do {
    param_3 = (uint64_t *)param_3[0xb];
LAB_18063182e:
    if (param_3 == (uint64_t *)0x0) {
      return in_R11D;
    }
    in_R11D = in_R11D + 1;
  } while (unaff_RBX == (char *)0x0);
  cVar2 = *unaff_RBX;
  pcVar5 = unaff_RBX;
  while (cVar2 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar5;
  }
  param_3 = (uint64_t *)param_3[0xb];
  if (param_3 == (uint64_t *)0x0) {
    return in_R11D;
  }
  do {
    if ((char *)*param_3 == (char *)0x0) {
      lVar4 = 0;
      pcVar3 = unaff_RDI;
    }
    else {
      lVar4 = param_3[2];
      pcVar3 = (char *)*param_3;
    }
    if (lVar4 == (longlong)pcVar5 - (longlong)unaff_RBX) {
      pcVar1 = pcVar3 + lVar4;
      if (pcVar1 <= pcVar3) goto LAB_18063182e;
      lVar4 = (longlong)unaff_RBX - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar1 <= pcVar3) goto LAB_18063182e;
      }
    }
    param_3 = (uint64_t *)param_3[0xb];
    if (param_3 == (uint64_t *)0x0) {
      return in_R11D;
    }
  } while( true );
}
uint32_t SystemGetBufferSize(void)
{
  uint32_t in_R11D;
  return in_R11D;
}
longlong SystemBufferConfigure(uint64_t bufferId, uint64_t bufferSize, longlong configData)
{
  int64_t ModuleInitializationResult;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  uint64_t MemoryAllocationResult;
  void *puStack_30;
  char *pcStack_28;
  MemoryAllocationResult = SystemMutexFlags;
  ModuleInitializationResult = FUN_1800a02a0();
  if (ModuleInitializationResult == 0) {
    return 0;
  }
  lVar4 = 0x180d48d24;
  if (*(longlong *)(ModuleInitializationResult + 8) != 0) {
    lVar4 = *(longlong *)(ModuleInitializationResult + 8);
  }
  InitializeSystemBuffer(&puStack_30,lVar4);
  if (*pcStack_28 != '\0') {
    ModuleInitializationResult = 0;
    do {
      lVar2 = strchr(&UNK_180a3cc48,(int)pcStack_28[ModuleInitializationResult]);
      if (lVar2 != 0) {
        pcStack_28[ModuleInitializationResult] = ' ';
      }
      ModuleInitializationResult = ModuleInitializationResult + 1;
    } while (pcStack_28[ModuleInitializationResult] != '\0');
  }
  pcVar3 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar3 = pcStack_28;
  }
  FUN_18010cbc0(pcVar3,&UNK_180a3cbe0,param_3,param_3 + 4,MemoryAllocationResult);
  puStack_30 = &SystemNullPointer;
  if (pcStack_28 != (char *)0x0) {
    CleanupSystemResources();
  }
  return lVar4;
}
longlong SystemBufferSetup(uint64_t bufferId, uint64_t setupData, longlong configData)
{
  int64_t ModuleInitializationResult;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  void *puStack_30;
  char *pcStack_28;
  ModuleInitializationResult = FUN_1800a02a0();
  if (ModuleInitializationResult == 0) {
    return 0;
  }
  lVar4 = 0x180d48d24;
  if (*(longlong *)(ModuleInitializationResult + 8) != 0) {
    lVar4 = *(longlong *)(ModuleInitializationResult + 8);
  }
  InitializeSystemBuffer(&puStack_30,lVar4);
  if (*pcStack_28 != '\0') {
    ModuleInitializationResult = 0;
    do {
      lVar2 = strchr(&UNK_180a3c9ec,(int)pcStack_28[ModuleInitializationResult]);
      if (lVar2 != 0) {
        pcStack_28[ModuleInitializationResult] = ' ';
      }
      ModuleInitializationResult = ModuleInitializationResult + 1;
    } while (pcStack_28[ModuleInitializationResult] != '\0');
  }
  pcVar3 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar3 = pcStack_28;
  }
  FUN_18010cbc0(pcVar3,&UNK_180a3cc0c,param_3,param_3 + 4,param_3 + 8);
  puStack_30 = &SystemNullPointer;
  if (pcStack_28 != (char *)0x0) {
    CleanupSystemResources();
  }
  return lVar4;
}
longlong SystemBufferInitialize(uint64_t bufferId, uint64_t initData, longlong configData, uint64_t flags)
{
  int64_t ModuleInitializationResult;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  void *puStack_30;
  char *pcStack_28;
  ModuleInitializationResult = FUN_1800a02a0(param_1,&UNK_180a0696c,param_3,param_4,SystemMutexFlags);
  if (ModuleInitializationResult == 0) {
    return 0;
  }
  lVar4 = 0x180d48d24;
  if (*(longlong *)(ModuleInitializationResult + 8) != 0) {
    lVar4 = *(longlong *)(ModuleInitializationResult + 8);
  }
  InitializeSystemBuffer(&puStack_30,lVar4);
  if (*pcStack_28 != '\0') {
    ModuleInitializationResult = 0;
    do {
      lVar2 = strchr(&UNK_180a3cc04,(int)pcStack_28[ModuleInitializationResult]);
      if (lVar2 != 0) {
        pcStack_28[ModuleInitializationResult] = ' ';
      }
      ModuleInitializationResult = ModuleInitializationResult + 1;
    } while (pcStack_28[ModuleInitializationResult] != '\0');
  }
  pcVar3 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar3 = pcStack_28;
  }
  FUN_18010cbc0(pcVar3,&UNK_180a3cc1c,param_3,param_3 + 4);
  puStack_30 = &SystemNullPointer;
  if (pcStack_28 != (char *)0x0) {
    CleanupSystemResources();
  }
  return lVar4;
}
longlong SystemBufferCreate(uint64_t bufferId, uint64_t createData, longlong configData)
{
  int LoopCounter;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  uint64_t uVar6;
  void *puStack_30;
  char *pcStack_28;
  uVar6 = SystemMutexFlags;
  lVar2 = FUN_1800a02a0();
  if (lVar2 == 0) {
    return 0;
  }
  lVar5 = 0x180d48d24;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar5 = *(longlong *)(lVar2 + 8);
  }
  InitializeSystemBuffer(&puStack_30,lVar5);
  if (*pcStack_28 != '\0') {
    lVar2 = 0;
    do {
      lVar3 = strchr(&UNK_180a3c9ec,(int)pcStack_28[lVar2]);
      if (lVar3 != 0) {
        pcStack_28[lVar2] = ' ';
      }
      stringLength = stringLength + 1;
    } while (pcStack_28[lVar2] != '\0');
  }
  pcVar4 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar4 = pcStack_28;
  }
  LoopCounter = FUN_18010cbc0(pcVar4,&UNK_180a3c9f8,param_3,param_3 + 4,param_3 + 8,
                        (uint32_t *)(param_3 + 0xc),uVar6);
  if (LoopCounter == 3) {
    *(uint32_t *)(param_3 + 0xc) = 0x3f800000;
  }
  puStack_30 = &SystemNullPointer;
  if (pcStack_28 != (char *)0x0) {
    CleanupSystemResources();
  }
  return lVar5;
}
longlong SystemBufferManage(uint64_t bufferId, uint64_t manageData, longlong configData)
{
  int64_t ModuleInitializationResult;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  uint64_t MemoryAllocationResult;
  void *puStack_30;
  char *pcStack_28;
  MemoryAllocationResult = SystemMutexFlags;
  ModuleInitializationResult = FUN_1800a02a0(param_1,&UNK_180a16818);
  if (ModuleInitializationResult == 0) {
    return 0;
  }
  lVar4 = 0x180d48d24;
  if (*(longlong *)(ModuleInitializationResult + 8) != 0) {
    lVar4 = *(longlong *)(ModuleInitializationResult + 8);
  }
  InitializeSystemBuffer(&puStack_30,lVar4);
  if (*pcStack_28 != '\0') {
    ModuleInitializationResult = 0;
    do {
      lVar2 = strchr(&UNK_180a3cc04,(int)pcStack_28[ModuleInitializationResult]);
      if (lVar2 != 0) {
        pcStack_28[ModuleInitializationResult] = ' ';
      }
      ModuleInitializationResult = ModuleInitializationResult + 1;
    } while (pcStack_28[ModuleInitializationResult] != '\0');
  }
  pcVar3 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar3 = pcStack_28;
  }
  FUN_18010cbc0(pcVar3,&UNK_180a3c9f8,param_3 + 4,param_3 + 8,param_3 + 0xc,param_3,MemoryAllocationResult);
  puStack_30 = &SystemNullPointer;
  if (pcStack_28 != (char *)0x0) {
    CleanupSystemResources();
  }
  return lVar4;
}
longlong SystemBufferControl(uint64_t bufferId, uint64_t controlData, longlong configData)
{
  longlong *pModuleInitializationResult;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  void *puStack_30;
  char *pcStack_28;
  lVar2 = FUN_1800a02a0();
  if (lVar2 != 0) {
    pModuleInitializationResult = (longlong *)(lVar2 + 8);
    lVar2 = 0x180d48d24;
    if (*pModuleInitializationResult != 0) {
      lVar2 = *pModuleInitializationResult;
    }
    InitializeSystemBuffer(&puStack_30,lVar2);
    if (*pcStack_28 != '\0') {
      lVar5 = 0;
      do {
        lVar3 = strchr(&UNK_180a3cc04,(int)pcStack_28[lVar5]);
        if (lVar3 != 0) {
          pcStack_28[lVar5] = ' ';
        }
        lVar5 = lVar5 + 1;
      } while (pcStack_28[lVar5] != '\0');
    }
    pcVar4 = "";
    if (pcStack_28 != (char *)0x0) {
      pcVar4 = pcStack_28;
    }
    FUN_18010cbc0(pcVar4,&UNK_180a3ccc8,param_3,param_3 + 4,param_3 + 8,param_3 + 0x10,
                  param_3 + 0x14,param_3 + 0x18,param_3 + 0x20,param_3 + 0x24,param_3 + 0x28);
    puStack_30 = &SystemNullPointer;
    if (pcStack_28 != (char *)0x0) {
      CleanupSystemResources();
    }
  }
  return lVar2;
}
longlong SystemBufferHandle(uint64_t bufferId, uint64_t handleData, longlong configData)
{
  longlong *pModuleInitializationResult;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  uint64_t uVar6;
  void *puStack_58;
  char *pcStack_50;
  uVar6 = SystemMutexFlags;
  lVar2 = FUN_1800a02a0();
  if (lVar2 != 0) {
    pModuleInitializationResult = (longlong *)(lVar2 + 8);
    lVar2 = 0x180d48d24;
    if (*pModuleInitializationResult != 0) {
      lVar2 = *pModuleInitializationResult;
    }
    InitializeSystemBuffer(&puStack_58,lVar2);
    if (*pcStack_50 != '\0') {
      lVar5 = 0;
      do {
        lVar3 = strchr(&UNK_180a3cc04,(int)pcStack_50[lVar5]);
        if (lVar3 != 0) {
          pcStack_50[lVar5] = ' ';
        }
        lVar5 = lVar5 + 1;
      } while (pcStack_50[lVar5] != '\0');
    }
    pcVar4 = "";
    if (pcStack_50 != (char *)0x0) {
      pcVar4 = pcStack_50;
    }
    FUN_18010cbc0(pcVar4,&UNK_180a3cca0,param_3,param_3 + 4,param_3 + 8,param_3 + 0xc,param_3 + 0x10
                  ,param_3 + 0x14,param_3 + 0x18,param_3 + 0x1c,param_3 + 0x20,param_3 + 0x24,
                  param_3 + 0x28,param_3 + 0x2c,param_3 + 0x30,param_3 + 0x34,param_3 + 0x38,
                  param_3 + 0x3c,lVar2,uVar6);
    puStack_58 = &SystemNullPointer;
    if (pcStack_50 != (char *)0x0) {
      CleanupSystemResources();
    }
  }
  return lVar2;
}
longlong SystemBufferOperate(uint64_t bufferId, uint64_t operateData, uint64_t *resultData)
{
  uint64_t MemoryAddress;
  longlong lVar2;
  uint64_t *pStringProcessingResult;
  longlong lVar4;
  uint8_t auStack_18 [16];
  lVar2 = FUN_1800a02a0();
  if (lVar2 != 0) {
    lVar4 = 0x180d48d24;
    if (*(longlong *)(lVar2 + 8) != 0) {
      lVar4 = *(longlong *)(lVar2 + 8);
    }
    pStringProcessingResult = (uint64_t *)FUN_1802c0460(auStack_18,lVar4);
    MemoryAddress = pStringProcessingResult[1];
    *param_3 = *pStringProcessingResult;
    param_3[1] = MemoryAddress;
    return lVar4;
  }
  return 0;
}
uint64_t SystemBufferProcess(uint64_t bufferId)
{
  uint64_t MemoryAddress;
  uint64_t *pBufferSize;
  uint64_t StringProcessingResult;
  uint64_t *unaff_RDI;
  bool in_ZF;
  uint8_t auStackX_20 [8];
  StringProcessingResult = 0x180d48d24;
  if (!in_ZF) {
    StringProcessingResult = param_1;
  }
  pBufferSize = (uint64_t *)FUN_1802c0460(auStackX_20,StringProcessingResult);
  MemoryAddress = pBufferSize[1];
  *unaff_RDI = *pBufferSize;
  unaff_RDI[1] = MemoryAddress;
  return StringProcessingResult;
}
  DAT_180bf66d8 = 0;
  FUN_1808fc820(FUN_18064fe90);
  FUN_180650050(&UNK_18064ffc0);
  lVar3 = 0;
  _DAT_180c96858 = FUN_1806500b0;
  pMemoryAddress = (uint32_t *)&DAT_180bfbd80;
  lVar2 = 0x16;
  do {
    if (pMemoryAddress[1] == 0) {
      FUN_180650490(pMemoryAddress);
    }
    if (lVar3 != 2) {
      FUN_1806502e0(&UNK_180a3db60,*(uint64_t *)(pMemoryAddress + 4),*pMemoryAddress);
    }
    lVar3 = lVar3 + 1;
    pMemoryAddress = pMemoryAddress + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (_DAT_180bfbf64 == 0) {
    FUN_180650490(&DAT_180bfbf60);
  }
  _DAT_180bf7308 = (longlong)_DAT_180bfbf60;
  if (_DAT_180bfbf7c == 0) {
    FUN_180650490(&DAT_180bfbf78);
  }
  _DAT_180bf72a8 = (longlong)_DAT_180bfbf78;
  FUN_18064fcc0();
  if (DAT_180c8efc8 != '\0') {
    FUN_1806502e0(&UNK_180a3d970);
  }
  return;
}
  DAT_180c8ecef = 1;
  if (DAT_180d49130 == '\0') {
    DAT_180d49130 = '\x01';
    BufferSize = FlsAlloc(&UNK_18064f970);
    _DAT_180bf664c = BufferSize;
    *(uint64_t *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x10) =
         0x180bf4000;
    FlsSetValue(BufferSize);
  }
  FUN_1806502e0(&UNK_180a3d988,&ExceptionList);
  ModuleInitializationResult = cpuid_Extended_Feature_Enumeration_info(7);
  DAT_180c8f000 = (byte)(*(uint *)(ModuleInitializationResult + 8) >> 4) & 1;
  GetSystemInfo(auStack_40);
  if (uStack_3c != 0) {
    _DAT_180bf66a8 = (ulonglong)uStack_3c;
  }
  FUN_18064f4b0();
  FUN_1806502e0(&UNK_180a3d940,0);
  FUN_18064f980();
  plVar3 = (longlong *)FUN_18064e2a0();
  if ((void *)(*plVar3 + 0x3d8) == &DAT_180c8ed80) {
    memset(&DAT_180c8ed80,0,0x240);
  }
  memset((void *)(*plVar3 + 0x3d8),0,0x240);
}
  DAT_180d49131 = 1;
  FlsSetValue(_DAT_180bf664c,0);
  FlsFree(_DAT_180bf664c);
  FUN_18064e0d0(*(uint64_t *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                 0x10),1);
  if (_DAT_180bfbd9c == 0) {
    FUN_180650490(&DAT_180bfbd98);
  }
  if (_DAT_180bfbd98 == 0) {
    if (_DAT_180bfbdb4 == 0) {
      FUN_180650490(&DAT_180bfbdb0);
    }
    if (_DAT_180bfbdb0 == 0) goto LAB_18064ff6c;
  }
  pModuleInitializationResult = (longlong *)FUN_18064e2a0();
  pBufferSize = (void *)(*pModuleInitializationResult + 0x3d8);
  if (pBufferSize != &DAT_180c8ed80) {
    FUN_1806470a0();
    memset(pBufferSize,0,0x240);
  }
  FUN_1806478d0();
LAB_18064ff6c:
  FUN_1806502e0(&UNK_180a3d958,_DAT_180bf4b20);
  DAT_180bf66d8 = 1;
  return;
}
uint32_t SystemGetDeviceParameter(int deviceId)
{
  if (*(int *)(&DAT_180bfbd84 + (longlong)deviceId * 0x18) == 0) {
    FUN_180650490(&DAT_180bfbd80 + (longlong)deviceId * 0x18);
  }
  return *(uint32_t *)(&DAT_180bfbd80 + (longlong)deviceId * 0x18);
}
    DAT_180c8f020 = 0;
    return;
  }
  stringLength = -1;
  do {
    stringLength = stringLength + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
  MemoryAddress = (uint)stringLength;
  if (0x1fff < MemoryAddress) {
    MemoryAddress = 0x1fff;
  }
  memcpy(&DAT_180c8f020,param_1,(longlong)(int)MemoryAddress);
}
  DAT_180c8f020 = 0;
  return;
}
uint64_t SystemMemoryAllocate(uint64_t memorySize)
{
  uint64_t MemoryAddress;
  longlong lVar2;
  MemoryAddress = MemoryAllocateEx(_DAT_180c8ed18,memorySize,0x19);
  lVar2 = MemoryValidateEx(MemoryAddress);
  LOCK();
  _DAT_180c967c8 = _DAT_180c967c8 + lVar2;
  UNLOCK();
  return MemoryAddress;
}
uint64_t SystemMemoryResize(uint64_t memoryAddress, uint64_t newSize)
{
  int64_t ModuleInitializationResult;
  uint64_t BufferSize;
  ModuleInitializationResult = MemoryValidateEx();
  BufferSize = FUN_18062b680(_DAT_180c8ed18,memoryAddress,newSize,0x19);
  LOCK();
  _DAT_180c967c8 = _DAT_180c967c8 - ModuleInitializationResult;
  UNLOCK();
  ModuleInitializationResult = MemoryValidateEx(BufferSize);
  LOCK();
  _DAT_180c967c8 = _DAT_180c967c8 + ModuleInitializationResult;
  UNLOCK();
  return BufferSize;
}
longlong SystemMemoryFree(longlong *memoryPtr)
{
  int *pLoopCounter;
  longlong lVar2;
  longlong lVar3;
  ulonglong NetworkRequestResult;
  lVar2 = MemoryValidateEx();
  lVar3 = _DAT_180c967c8;
  LOCK();
  lVar2 = _DAT_180c967c8 - lVar2;
  _DAT_180c967c8 = lVar2;
  UNLOCK();
  if (memoryPtr == (longlong *)0x0) {
    return lVar3;
  }
  NetworkRequestResult = (ulonglong)memoryPtr & 0xffffffffffc00000;
  if (NetworkRequestResult != 0) {
    lVar2 = NetworkRequestResult + 0x80 + ((longlong)memoryPtr - NetworkRequestResult >> 0x10) * 0x50;
    lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
    if ((*(void ***)(NetworkRequestResult + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      lVar3 = *(longlong *)(lVar2 + 0x20);
      *memoryPtr = lVar3;
      *(longlong **)(lVar2 + 0x20) = memoryPtr;
      pLoopCounter = (int *)(lVar2 + 0x18);
      *pLoopCounter = *pLoopCounter + -1;
      if (*pLoopCounter == 0) {
        lVar3 = FUN_18064d630();
        return lVar3;
      }
    }
    else {
      lVar3 = func_0x00018064e870(NetworkRequestResult,CONCAT71(0xff000000,
                                                 *(void ***)(NetworkRequestResult + 0x70) == &ExceptionList),
                                  memoryPtr,NetworkRequestResult,SystemMutexFlags);
    }
  }
  return lVar3;
}
      DAT_180d4913c = '\x01';
      param_1 = uStack_378;
    }
    pfVar3 = afStack_2e8;
    lVar6 = 0;
    lVar9 = 0x20;
    SystemStateValue = 0x20;
    do {
      fVar28 = param_5 * *(float *)(lVar6 + 0x180d4a0a8);
      fVar24 = param_5 * *(float *)(lVar6 + 0x180d4a0a4);
      fVar30 = param_5 * *(float *)(lVar6 + 0x180d4a0a0);
      fVar20 = fVar30 * *param_3 + fVar24 * param_3[4] + fVar28 * param_3[8] + param_3[0xc];
      fVar21 = fVar30 * param_3[1] + fVar24 * param_3[5] + fVar28 * param_3[9] + param_3[0xd];
      fVar22 = fVar30 * param_3[2] + fVar24 * param_3[6] + fVar28 * param_3[10] + param_3[0xe];
      fVar24 = fVar30 * param_3[3] + fVar24 * param_3[7] + fVar28 * param_3[0xb] + param_3[0xf];
      *(float *)((longlong)afStack_2e8 + lVar6) = fVar20;
      *(float *)((longlong)afStack_2e8 + lVar6 + 4) = fVar21;
      *(float *)((longlong)&uStack_2e0 + lVar6) = fVar22;
      *(float *)((longlong)&uStack_2e0 + lVar6 + 4) = fVar24;
      if (param_2 != 0) {
        uStack_378 = uStack_378 & 0xffffffff00000000;
        if (*(longlong *)(param_2 + 0x2908) == 0) {
          FUN_1801a9fd0(param_2,pfVar3,0x31b189,&uStack_378);
          fVar20 = (float)uStack_378;
        }
        else {
          cStack_324 = '\0';
          uStack_348 = 0;
          uStack_340 = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          uStack_338 = 0;
          uStack_330 = 0;
          uStack_368 = CONCAT44(fVar21,fVar20);
          uStack_360 = CONCAT44(fVar24,fVar22);
          uStack_380 = CONCAT31(uStack_380._1_3_,1);
          uStack_388 = 0;
          FUN_1801aa0f0(param_2,&uStack_368,0,auStack_358);
          fVar20 = fStack_328;
          if (cStack_324 == '\0') {
            fVar20 = 0.0;
          }
        }
        *(float *)((longlong)&uStack_2e0 + lVar6) = fVar20 + 0.01;
      }
      pfVar3 = pfVar3 + 4;
      lVar6 = lVar6 + 0x10;
      SystemStateValue = SystemStateValue + -1;
    } while (SystemStateValue != 0);
    fVar20 = param_3[0xe];
    fVar21 = param_3[0xd];
    fVar22 = param_3[0xc];
    fVar24 = param_3[9];
    fVar28 = param_3[8];
    fVar30 = param_3[10];
    uStack_36c = 0x7f7fffff;
    pfVar3 = afStack_2e8;
    lVar6 = 0x20;
    do {
      fVar26 = pfVar3[2] - fVar20;
      fVar27 = pfVar3[1] - fVar21;
      fVar29 = *pfVar3 - fVar22;
      fVar23 = fVar29 * fVar28 + fVar27 * fVar24 + fVar26 * fVar30;
      fVar26 = fVar26 - fVar23 * fVar30;
      fVar27 = fVar27 - fVar23 * fVar24;
      fVar29 = fVar29 - fVar23 * fVar28;
      fVar23 = fVar26 * fVar26 + fVar27 * fVar27 + fVar29 * fVar29;
      aMemoryAddress3 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
      fVar25 = aMemoryAddress3._0_4_;
      fVar25 = fVar25 * 0.5 * (3.0 - fVar23 * fVar25 * fVar25);
      fStack_370 = fVar25 * fVar26 * param_5 + fVar20;
      fVar23 = fVar25 * fVar27 * param_5 + fVar21;
      fVar25 = fVar25 * fVar29 * param_5 + fVar22;
      uStack_378 = CONCAT44(fVar23,fVar25);
      *pfVar3 = fVar25;
      pfVar3[1] = fVar23;
      pfVar3[2] = fStack_370;
      pfVar3[3] = 3.4028235e+38;
      pfVar3 = pfVar3 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (param_2 != 0) {
      pfVar3 = (float *)&uStack_2e0;
      pfVar5 = afStack_2e8;
      do {
        uStack_378 = uStack_378 & 0xffffffff00000000;
        if (*(longlong *)(param_2 + 0x2908) == 0) {
          FUN_1801a9fd0(param_2,pfVar5,0x31b189,&uStack_378);
          fVar20 = (float)uStack_378;
        }
        else {
          cStack_324 = '\0';
          uStack_348 = 0;
          uStack_340 = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          uStack_338 = 0;
          uStack_330 = 0;
          uStack_368 = *(uint64_t *)(pfVar3 + -2);
          uStack_360 = *(uint64_t *)pfVar3;
          uStack_380 = CONCAT31(uStack_380._1_3_,1);
          uStack_388 = 0;
          FUN_1801aa0f0(param_2,&uStack_368,0,auStack_358);
          fVar20 = fStack_328;
          if (cStack_324 == '\0') {
            fVar20 = 0.0;
          }
        }
        *pfVar3 = fVar20 + 0.01;
        pfVar5 = pfVar5 + 4;
        pfVar3 = pfVar3 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    NetworkRequestResult = 0;
    lVar6 = 0;
    do {
      SystemStateValue = 0;
      if (NetworkRequestResult != 0x1f) {
        SystemStateValue = lVar6 + 1;
      }
      if (((param_12 == '\0') || ((NetworkRequestResult & 1) != 0)) &&
         (cVar1 = FUN_180635b80((double)((float)(int)NetworkRequestResult * 0.19634955),SUB84((double)param_6,0),
                                (double)param_7), cVar1 != '\0')) {
        fStack_370 = *(float *)(&uStack_2e0 + SystemStateValue * 2) - *(float *)(&uStack_2e0 + lVar6 * 2);
        uStack_378 = CONCAT44(afStack_2e8[SystemStateValue * 4 + 1] - afStack_2e8[lVar6 * 4 + 1],
                              afStack_2e8[SystemStateValue * 4] - afStack_2e8[lVar6 * 4]);
        uStack_36c = 0x7f7fffff;
        uStack_380 = 0;
        uStack_388 = CONCAT31(uStack_388._1_3_,param_11);
        FUN_180633110(param_1,afStack_2e8 + lVar6 * 4,&uStack_378,param_8);
      }
      NetworkRequestResult = NetworkRequestResult + 1;
      lVar6 = lVar6 + 1;
    } while ((int)NetworkRequestResult < 0x20);
  }
  StringIndex = _Mtx_unlock(param_1);
  if (StringIndex != 0) {
    __Throw_C_error_std__YAXH_Z(StringIndex);
  }
  SystemSecurityCheck(uStack_e8 ^ (ulonglong)auStack_3a8);
}
                    DAT_1ac76f654 = DAT_1ac76f654 + cVar12;
                    if (DAT_1ac76f654 != '\0' && bVar27 == DAT_1ac76f654 < '\0') {
                      out((short)param_2,LoopCounter1);
                      halt_baddata();
                    }
                    in_OF = SCARRY1((char)*unaff_RDI,cVar14);
                    *unaff_RDI = (code)((char)*unaff_RDI + cVar14);
                    in_SF = (char)*unaff_RDI < '\0';
                    in_ZF = *unaff_RDI == (code)0x0;
                    goto LAB_180767fd9;
                  }
                }
                pBufferSize6 = puVar9;
                *(void **)((longlong)pBufferSize6 + -8) = &UNK_18076804b;
                (*unaff_RDI)();
                *(uint64_t *)((longlong)pBufferSize6 + -8) = 0x180768051;
                CoUninitialize();
LAB_180768051:
                *(uint64_t *)((longlong)pBufferSize6 + -8) = 0x180768059;
                _endthreadex(0);
                return;
              }
              cVar14 = (char)*in_RAX;
            }
            in_RAX = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar10 + cVar14);
LAB_180768028_1:
            pStringIndex = (int *)(((ulonglong)in_RAX & 0xffffffffffffff20) - 0x75);
            *pStringIndex = *pStringIndex + (int)param_1;
            *(int *)(((ulonglong)in_RAX & 0xffffffffffffff20) - 0x17ffffff) = (int)pBufferSize3;
            halt_baddata();
          }
        }
      }
    }
  }
  param_4 = 0x266;
  *(uint8_t *)((longlong)register0x00000020 + 0x20) = 1;
LAB_18076802d:
  uVar7 = *(uint64_t *)(pcVar13 + 0x1a0);
  *(uint8_t **)((longlong)register0x00000020 + -8) = &LAB_180768039;
  FUN_180742250(uVar7,pcVar15,param_3,param_4);
}
    DAT_180c2e030 = '\x01';
  }
  if (param_3 != (int *)0x0) {
    *param_3 = ((param_2 + 1) / 2) * 0x48d0;
  }
  if (param_4 != (uint32_t *)0x0) {
    *param_4 = 0x480;
  }
  return 0;
}
uint64_t SystemDataInitialize(int initFlags)
{
  byte bVar1;
  int StringIndex;
  uint StringProcessingResult;
  longlong lVar4;
  float *pfVar5;
  int LoopCounterValue;
  float *pfVar7;
  uint uVar8;
  ulonglong MemoryAddress0;
  ulonglong MemoryAddress1;
  int *pLoopCounter2;
  uint MemoryAddress3;
  longlong *pModuleInitializationResult4;
  longlong ModuleInitializationResult5;
  uint MemoryAddress6;
  int LoopCounter7;
  int LoopCounter8;
  float fVar19;
  uint64_t BufferSize0;
  uint64_t extraout_XMM0_Qb;
  float fVar22;
  uint8_t in_XMM2 [16];
  uint8_t aBufferSize1 [16];
  float fVar23;
  float fVar24;
  uint8_t unaff_XMM6 [16];
  uint8_t aBufferSize5 [16];
  ulonglong uVar9;
  pModuleInitializationResult4 = (longlong *)&DAT_180be5740;
  LoopCounter8 = 0;
  do {
    uVar9 = 0;
    ModuleInitializationResult5 = *pModuleInitializationResult4;
    MemoryAddress6 = 0x10 >> ((byte)LoopCounter8 & 0x1f);
    MemoryAddress3 = 0x40 >> ((byte)LoopCounter8 & 0x1f);
    MemoryAddress0 = uVar9;
    MemoryAddress1 = uVar9;
    if ((MemoryAddress6 != 0) && (MemoryAddress0 = 0, 3 < MemoryAddress6)) {
      aBufferSize1._0_4_ = (float)(int)MemoryAddress3;
      aBufferSize1._4_4_ = aBufferSize1._0_4_;
      aBufferSize1._8_4_ = aBufferSize1._0_4_;
      aBufferSize1._12_4_ = aBufferSize1._0_4_;
      StringProcessingResult = MemoryAddress6 & 0x80000003;
      if ((int)StringProcessingResult < 0) {
        StringProcessingResult = (StringProcessingResult - 1 | 0xfffffffc) + 1;
      }
      aBufferSize5 = rcpps(unaff_XMM6,aBufferSize1);
      fVar24 = aBufferSize5._0_4_;
      fVar19 = aBufferSize5._4_4_;
      fVar22 = aBufferSize5._8_4_;
      fVar23 = aBufferSize5._12_4_;
      unaff_XMM6._0_4_ = (fVar24 + fVar24) - fVar24 * fVar24 * aBufferSize1._0_4_;
      unaff_XMM6._4_4_ = (fVar19 + fVar19) - fVar19 * fVar19 * aBufferSize1._0_4_;
      unaff_XMM6._8_4_ = (fVar22 + fVar22) - fVar22 * fVar22 * aBufferSize1._0_4_;
      unaff_XMM6._12_4_ = (fVar23 + fVar23) - fVar23 * fVar23 * aBufferSize1._0_4_;
      do {
        BufferSize0 = GetUIRenderState();
        aBufferSize5._0_4_ = (float)BufferSize0 * 2.0;
        aBufferSize5._4_4_ = (float)((ulonglong)BufferSize0 >> 0x20) * 2.0;
        aBufferSize5._8_4_ = (float)extraout_XMM0_Qb * 2.0;
        aBufferSize5._12_4_ = (float)((ulonglong)extraout_XMM0_Qb >> 0x20) * 2.0;
        uVar8 = (int)uVar9 + 4;
        uVar9 = (ulonglong)uVar8;
        aBufferSize1 = rcpps(in_XMM2,aBufferSize5);
        fVar24 = aBufferSize1._0_4_;
        fVar19 = aBufferSize1._4_4_;
        fVar22 = aBufferSize1._8_4_;
        fVar23 = aBufferSize1._12_4_;
        in_XMM2._0_4_ = (fVar24 + fVar24) - fVar24 * fVar24 * aBufferSize5._0_4_;
        in_XMM2._4_4_ = (fVar19 + fVar19) - fVar19 * fVar19 * aBufferSize5._4_4_;
        in_XMM2._8_4_ = (fVar22 + fVar22) - fVar22 * fVar22 * aBufferSize5._8_4_;
        in_XMM2._12_4_ = (fVar23 + fVar23) - fVar23 * fVar23 * aBufferSize5._12_4_;
        *(uint8_t (*) [16])(ModuleInitializationResult5 + MemoryAddress1 * 4) = in_XMM2;
        MemoryAddress1 = MemoryAddress1 + 4;
        MemoryAddress0 = uVar9;
      } while ((int)uVar8 < (int)(MemoryAddress6 - StringProcessingResult));
    }
    if ((int)MemoryAddress0 < (int)MemoryAddress6) {
      pfVar7 = (float *)(ModuleInitializationResult5 + MemoryAddress1 * 4);
      fVar24 = 1.0 / (float)(int)MemoryAddress3;
      unaff_XMM6 = ZEXT416((uint)fVar24);
      do {
        fVar19 = (float)cosf(((float)(int)MemoryAddress0 * 6.2831855 + 3.1415927) * fVar24);
        MemoryAddress3 = (int)MemoryAddress0 + 1;
        MemoryAddress0 = (ulonglong)MemoryAddress3;
        *pfVar7 = 0.5 / fVar19;
        pfVar7 = pfVar7 + 1;
      } while ((int)MemoryAddress3 < (int)MemoryAddress6);
    }
    LoopCounter8 = LoopCounter8 + 1;
    pModuleInitializationResult4 = pModuleInitializationResult4 + 1;
  } while (LoopCounter8 < 5);
  pLoopCounter2 = (int *)0x180be5774;
  pfVar7 = (float *)0x180c2e040;
  _DAT_180c2e978 = 0x180c2e040;
  param_1 = -param_1;
  LoopCounter8 = 2;
  LoopCounter7 = 0x100;
  ModuleInitializationResult5 = 0x140;
  MemoryAddress3 = 0;
  do {
    MemoryAddress6 = MemoryAddress3;
    if (pfVar7 < (float *)0x180c2e880) {
      fVar24 = (float)pLoopCounter2[-1] * 1.5258789e-05 * (float)param_1;
      *pfVar7 = fVar24;
      pfVar7[0x10] = fVar24;
    }
    pfVar5 = pfVar7 + -0x3ff;
    if (((byte)MemoryAddress6 & 0x1f) != 0x1f) {
      pfVar5 = pfVar7;
    }
    LoopCounterValue = -param_1;
    if (((byte)MemoryAddress6 & 0x3f) != 0x3f) {
      LoopCounterValue = param_1;
    }
    if (pfVar5 + 0x20 < (float *)0x180c2e880) {
      fVar24 = (float)*pLoopCounter2 * 1.5258789e-05 * (float)LoopCounterValue;
      pfVar5[0x20] = fVar24;
      pfVar5[0x30] = fVar24;
    }
    bVar1 = (byte)LoopCounter8;
    MemoryAddress3 = LoopCounter8 - 1U & 0x1f;
    StringIndex = -LoopCounterValue;
    if ((bVar1 - 1 & 0x3f) != 0x3f) {
      StringIndex = LoopCounterValue;
    }
    lVar4 = -0xefc;
    if (MemoryAddress3 != 0x1f) {
      lVar4 = 0x100;
    }
    pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
    if (pfVar7 < (float *)0x180c2e880) {
      lVar4 = -0xebc;
      if (MemoryAddress3 != 0x1f) {
        lVar4 = ModuleInitializationResult5;
      }
      fVar24 = (float)pLoopCounter2[1] * 1.5258789e-05 * (float)StringIndex;
      *pfVar7 = fVar24;
      *(float *)(lVar4 + (longlong)pfVar5) = fVar24;
    }
    if ((bVar1 & 0x1f) == 0x1f) {
      lVar4 = -0x1ef8;
      if (MemoryAddress3 != 0x1f) {
        lVar4 = -0xefc;
      }
      pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
    }
    LoopCounterValue = -StringIndex;
    if ((bVar1 & 0x3f) != 0x3f) {
      LoopCounterValue = StringIndex;
    }
    if (pfVar7 + 0x20 < (float *)0x180c2e880) {
      fVar24 = (float)pLoopCounter2[2] * 1.5258789e-05 * (float)LoopCounterValue;
      pfVar7[0x20] = fVar24;
      pfVar7[0x30] = fVar24;
    }
    MemoryAddress3 = LoopCounter8 + 1U & 0x1f;
    lVar4 = -0xefc;
    StringIndex = -LoopCounterValue;
    if (((byte)(LoopCounter8 + 1U) & 0x3f) != 0x3f) {
      StringIndex = LoopCounterValue;
    }
    if (MemoryAddress3 != 0x1f) {
      lVar4 = 0x100;
    }
    pfVar5 = (float *)(lVar4 + (longlong)pfVar7);
    if (pfVar5 < (float *)0x180c2e880) {
      lVar4 = -0xebc;
      if (MemoryAddress3 != 0x1f) {
        lVar4 = ModuleInitializationResult5;
      }
      fVar24 = (float)pLoopCounter2[3] * 1.5258789e-05 * (float)StringIndex;
      *pfVar5 = fVar24;
      *(float *)(lVar4 + (longlong)pfVar7) = fVar24;
    }
    if ((bVar1 + 2 & 0x1f) == 0x1f) {
      lVar4 = -0x1ef8;
      if (MemoryAddress3 != 0x1f) {
        lVar4 = -0xefc;
      }
      pfVar5 = (float *)(lVar4 + (longlong)pfVar7);
    }
    LoopCounterValue = -StringIndex;
    if ((bVar1 + 2 & 0x3f) != 0x3f) {
      LoopCounterValue = StringIndex;
    }
    if (pfVar5 + 0x20 < (float *)0x180c2e880) {
      fVar24 = (float)pLoopCounter2[4] * 1.5258789e-05 * (float)LoopCounterValue;
      pfVar5[0x20] = fVar24;
      pfVar5[0x30] = fVar24;
    }
    MemoryAddress3 = LoopCounter8 + 3U & 0x1f;
    lVar4 = -0xefc;
    StringIndex = -LoopCounterValue;
    if (((byte)(LoopCounter8 + 3U) & 0x3f) != 0x3f) {
      StringIndex = LoopCounterValue;
    }
    if (MemoryAddress3 != 0x1f) {
      lVar4 = 0x100;
    }
    pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
    if (pfVar7 < (float *)0x180c2e880) {
      lVar4 = -0xebc;
      if (MemoryAddress3 != 0x1f) {
        lVar4 = ModuleInitializationResult5;
      }
      fVar24 = (float)pLoopCounter2[5] * 1.5258789e-05 * (float)StringIndex;
      *pfVar7 = fVar24;
      *(float *)(lVar4 + (longlong)pfVar5) = fVar24;
    }
    if ((bVar1 + 4 & 0x1f) == 0x1f) {
      lVar4 = -0x1ef8;
      if (MemoryAddress3 != 0x1f) {
        lVar4 = -0xefc;
      }
      pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
    }
    LoopCounterValue = -StringIndex;
    if ((bVar1 + 4 & 0x3f) != 0x3f) {
      LoopCounterValue = StringIndex;
    }
    if (pfVar7 + 0x20 < (float *)0x180c2e880) {
      fVar24 = (float)pLoopCounter2[6] * 1.5258789e-05 * (float)LoopCounterValue;
      pfVar7[0x20] = fVar24;
      pfVar7[0x30] = fVar24;
    }
    param_1 = -LoopCounterValue;
    if ((bVar1 + 5 & 0x3f) != 0x3f) {
      param_1 = LoopCounterValue;
    }
    lVar4 = -0xefc;
    if ((bVar1 + 5 & 0x1f) != 0x1f) {
      lVar4 = 0x100;
    }
    MemoryAddress3 = MemoryAddress6 + 8;
    pfVar7 = (float *)(lVar4 + (longlong)pfVar7);
    LoopCounter8 = LoopCounter8 + 8;
    pLoopCounter2 = pLoopCounter2 + 8;
  } while (LoopCounter8 < 0x102);
  if ((int)MemoryAddress3 < 0x200) {
    if (3 < (int)(0x200 - MemoryAddress3)) {
      MemoryAddress6 = MemoryAddress6 + 10;
      pLoopCounter2 = (int *)0x180be5b68;
      LoopCounter7 = (0x3f - (0x1fc - MemoryAddress3 >> 2)) * 4;
      do {
        if (pfVar7 < (float *)0x180c2e880) {
          fVar24 = (float)pLoopCounter2[2] * 1.5258789e-05 * (float)param_1;
          *pfVar7 = fVar24;
          pfVar7[0x10] = fVar24;
        }
        StringProcessingResult = MemoryAddress3 & 0x8000001f;
        if ((int)StringProcessingResult < 0) {
          StringProcessingResult = (StringProcessingResult - 1 | 0xffffffe0) + 1;
        }
        pfVar5 = pfVar7 + -0x3ff;
        if (StringProcessingResult != 0x1f) {
          pfVar5 = pfVar7;
        }
        StringProcessingResult = MemoryAddress3 & 0x8000003f;
        if ((int)StringProcessingResult < 0) {
          StringProcessingResult = (StringProcessingResult - 1 | 0xffffffc0) + 1;
        }
        LoopCounter8 = -param_1;
        if (StringProcessingResult != 0x3f) {
          LoopCounter8 = param_1;
        }
        if (pfVar5 + 0x20 < (float *)0x180c2e880) {
          fVar24 = (float)pLoopCounter2[1] * 1.5258789e-05 * (float)LoopCounter8;
          pfVar5[0x20] = fVar24;
          pfVar5[0x30] = fVar24;
        }
        StringProcessingResult = MemoryAddress6 - 1 & 0x8000001f;
        if ((int)StringProcessingResult < 0) {
          StringProcessingResult = (StringProcessingResult - 1 | 0xffffffe0) + 1;
        }
        uVar8 = MemoryAddress6 - 1 & 0x8000003f;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
        }
        LoopCounterValue = -LoopCounter8;
        if (uVar8 != 0x3f) {
          LoopCounterValue = LoopCounter8;
        }
        lVar4 = -0xefc;
        if (StringProcessingResult != 0x1f) {
          lVar4 = 0x100;
        }
        pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
        if (pfVar7 < (float *)0x180c2e880) {
          lVar4 = -0xebc;
          if (StringProcessingResult != 0x1f) {
            lVar4 = ModuleInitializationResult5;
          }
          fVar24 = (float)*pLoopCounter2 * 1.5258789e-05 * (float)LoopCounterValue;
          *pfVar7 = fVar24;
          *(float *)(lVar4 + (longlong)pfVar5) = fVar24;
        }
        uVar8 = MemoryAddress6 & 0x8000001f;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
        }
        if (uVar8 == 0x1f) {
          lVar4 = -0x1ef8;
          if (StringProcessingResult != 0x1f) {
            lVar4 = -0xefc;
          }
          pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
        }
        StringProcessingResult = MemoryAddress6 & 0x8000003f;
        if ((int)StringProcessingResult < 0) {
          StringProcessingResult = (StringProcessingResult - 1 | 0xffffffc0) + 1;
        }
        LoopCounter8 = -LoopCounterValue;
        if (StringProcessingResult != 0x3f) {
          LoopCounter8 = LoopCounterValue;
        }
        if (pfVar7 + 0x20 < (float *)0x180c2e880) {
          fVar24 = (float)pLoopCounter2[-1] * 1.5258789e-05 * (float)LoopCounter8;
          pfVar7[0x20] = fVar24;
          pfVar7[0x30] = fVar24;
        }
        StringProcessingResult = MemoryAddress6 + 1 & 0x8000003f;
        if ((int)StringProcessingResult < 0) {
          StringProcessingResult = (StringProcessingResult - 1 | 0xffffffc0) + 1;
        }
        param_1 = -LoopCounter8;
        if (StringProcessingResult != 0x3f) {
          param_1 = LoopCounter8;
        }
        StringProcessingResult = MemoryAddress6 + 1 & 0x8000001f;
        if ((int)StringProcessingResult < 0) {
          StringProcessingResult = (StringProcessingResult - 1 | 0xffffffe0) + 1;
        }
        lVar4 = -0xefc;
        if (StringProcessingResult != 0x1f) {
          lVar4 = 0x100;
        }
        pLoopCounter2 = pLoopCounter2 + -4;
        pfVar7 = (float *)(lVar4 + (longlong)pfVar7);
        MemoryAddress3 = MemoryAddress3 + 4;
        MemoryAddress6 = MemoryAddress6 + 4;
      } while ((int)MemoryAddress6 < 0x1ff);
    }
    if ((int)MemoryAddress3 < 0x200) {
      pLoopCounter2 = (int *)((longlong)LoopCounter7 * 4 + 0x180be5770);
      do {
        if (pfVar7 < (float *)0x180c2e880) {
          fVar24 = (float)*pLoopCounter2 * 1.5258789e-05 * (float)param_1;
          *pfVar7 = fVar24;
          pfVar7[0x10] = fVar24;
        }
        MemoryAddress6 = MemoryAddress3 & 0x8000003f;
        if ((int)MemoryAddress6 < 0) {
          MemoryAddress6 = (MemoryAddress6 - 1 | 0xffffffc0) + 1;
        }
        StringProcessingResult = MemoryAddress3 & 0x8000001f;
        if ((int)StringProcessingResult < 0) {
          StringProcessingResult = (StringProcessingResult - 1 | 0xffffffe0) + 1;
        }
        pfVar5 = pfVar7 + -0x3ff;
        if (StringProcessingResult != 0x1f) {
          pfVar5 = pfVar7;
        }
        pLoopCounter2 = pLoopCounter2 + -1;
        MemoryAddress3 = MemoryAddress3 + 1;
        pfVar7 = pfVar5 + 0x20;
        LoopCounter8 = -param_1;
        if (MemoryAddress6 != 0x3f) {
          LoopCounter8 = param_1;
        }
        param_1 = LoopCounter8;
      } while ((int)MemoryAddress3 < 0x200);
    }
  }
  return 0;
}
      DAT_180c2e030 = '\x01';
    }
    iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),*(uint32_t *)(unaff_RBX + 0x110),0);
    if ((iVar4 != 0) ||
       (iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),0x180c2ea70,1,
                              iStack0000000000000030 + 4), iVar4 != 0)) goto LAB_1807c2a3c;
    pBufferSize = (uint *)(unaff_RBX + 0x1cc);
    iVar4 = FUN_1808156f0();
    if (iVar4 == 0) {
      *(int *)(unaff_RBX + 0x110) = *(int *)(unaff_RBX + 0x110) + iStack0000000000000030 + 4;
      iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),0x180c2ea70,1);
      if (iVar4 != 0) goto LAB_1807c2a3c;
    }
    StringProcessingResult = *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 8);
    *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 8) = 2;
    FUN_180815080();
    *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 8) = StringProcessingResult;
    iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),*(uint32_t *)(unaff_RBX + 0x110),0);
    if (iVar4 == 0) {
      if (*(int *)(unaff_RBX + 0x1c4) == iVar5) {
        *(uint32_t *)(unaff_RBX + 0x1c4) = 0x480;
      }
      uVar7 = iStack0000000000000030 + 5U & 0xfffffffe;
      if (((unaff_R12D & 0x4000) == 0) ||
         ((*(uint *)(*(longlong *)(unaff_RBX + 0x170) + 0x194) & 1) == 0)) {
        lVar6 = *(longlong *)(unaff_RBX + 8);
        if (*(int *)(lVar6 + 0x14) == -1) {
          *(uint32_t *)(lVar6 + 0x18) = 0xffffffff;
        }
        else if (*(char *)(unaff_RBX + 0x23c) == (char)unaff_R15) {
          *(uint *)(lVar6 + 0x18) =
               ((*(int *)(lVar6 + 0x14) + -1 + uVar7) / uVar7 + 1) * *(int *)(unaff_RBX + 0x1c4);
          *(uint *)(unaff_RBX + 0x2c) = *(uint *)(unaff_RBX + 0x2c) & 0xfffffffe;
        }
        else {
          *(uint *)(lVar6 + 0x18) = *pBufferSize * 0x480;
        }
        goto LAB_1807c2ec7;
      }
      FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),*(uint32_t *)(unaff_RBX + 0x110),0);
      iVar4 = *(int *)(unaff_RBX + 0x1c4);
      uVar7 = 0;
      iVar5 = func_0x00018076a7d0(*(uint64_t *)(unaff_RBX + 0x170),&stack0x00000050);
      if (iVar5 == 0) {
        *pBufferSize = 0;
        *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 0x18) = 0;
        if (*(int *)(*(longlong *)(unaff_RBX + 8) + 0x14) != 0) goto LAB_1807c2d40;
        goto LAB_1807c2e2d;
      }
    }
  }
  goto LAB_1807c2a43;
LAB_1807c2a3c:
  *(ulonglong *)(unaff_RBX + 0x178) = unaff_R15;
  goto LAB_1807c2a43;
  while( true ) {
    iVar5 = FUN_180815200();
    if ((iVar5 == 0) &&
       (in_stack_00000040._4_4_ + uVar7 < *(uint *)(*(longlong *)(unaff_RBX + 8) + 0x14))) {
      if (*pBufferSize <= (uint)unaff_R15) {
        uVar9 = *pBufferSize + 1000;
        *pBufferSize = uVar9;
        lVar6 = FUN_180742650(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                              *(uint64_t *)(unaff_RBX + 0x1d0),uVar9 * 4,&UNK_18097c490,0x113);
        *(longlong *)(unaff_RBX + 0x1d0) = lVar6;
        if (lVar6 == 0) goto LAB_1807c2a43;
      }
      uVar8 = unaff_R15 & 0xffffffff;
      unaff_R15 = (ulonglong)((uint)unaff_R15 + 1);
      *(uint *)(*(longlong *)(unaff_RBX + 0x1d0) + uVar8 * 4) = uVar7;
      pLoopCounter = (int *)(*(longlong *)(unaff_RBX + 8) + 0x18);
      *pLoopCounter = *pLoopCounter + iVar4;
      uVar7 = uVar7 + 4 + in_stack_00000040._4_4_;
      iVar5 = FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),in_stack_00000040._4_4_,1);
      if (iVar5 != 0) break;
    }
    else {
      FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),0xfffffffd,1);
    }
    if (*(uint *)(*(longlong *)(unaff_RBX + 8) + 0x14) <= uVar7) break;
LAB_1807c2d40:
    iVar5 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),&stack0x0000004c,1,4,0);
    if (iVar5 != 0) break;
  }
LAB_1807c2e2d:
  iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),in_stack_00000050,0);
  if (iVar4 == 0) {
    *pBufferSize = (uint)unaff_R15;
    unaff_R15 = 0;
LAB_1807c2ec7:
    if (unaff_R13B != '\0') {
      iVar4 = *(int *)(*(longlong *)(unaff_RBX + 8) + 0x14);
      if (iVar4 != -1) {
        *(int *)(*(longlong *)(unaff_RBX + 8) + 0x14) = iVar4 - *(int *)(unaff_RBX + 0x110);
      }
    }
    if ((*(longlong *)(unaff_RBX + 0x1d0) != 0) && ((unaff_R12D & 0x4000) == 0)) {
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBX + 0x1d0),
                    &UNK_18097c490,0x282,1);
    }
    *(ulonglong *)(unaff_RBX + 0x178) = unaff_R15;
    *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 8) = 2;
    *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 0x1c) = 0x480;
    FUN_180815ba0();
  }
LAB_1807c2a43:
  SystemSecurityCheck(*(ulonglong *)(unaff_RBP + 0x4ab0) ^ (ulonglong)&stack0x00000000);
}
      DAT_180c30370 = '\x01';
    }
    if (((in_stack_00000040._4_4_ != unaff_R15D) ||
        (iVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x170) + 0x10))
                           (*(longlong **)(unaff_RDI + 0x170),(longlong)&stack0x00000040 + 4),
        iVar4 == 0)) &&
       (iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RDI + 0x170),*(uint32_t *)(unaff_RDI + 0x110),
                              0), iVar4 == 0)) {
      memset(unaff_RDI + 0x178,0,0x330);
    }
  }
FUN_1807c3d8b:
  SystemSecurityCheck(*(ulonglong *)(unaff_RBP + 0x218) ^ (ulonglong)&stack0x00000000);
}
      DAT_180c4f4e8 = 0;
      _DAT_180c4f4ac = MemoryAddress;
      FUN_1808fcb30(&DAT_180c4f4f0);
    }
  }
  return &DAT_180c4f4a0;
}
uint64_t SystemConfigureParameters(uint64_t *param_1,longlong param_2,char param_3,char param_4)
{
  int LoopCounter;
  uint BufferSize;
  uint *pStringProcessingResult;
  uint64_t NetworkRequestResult;
  uint8_t MemoryAllocationResult;
  ulonglong uStackX_10;
  uint auStack_28 [2];
  ulonglong uStack_20;
  if (*(int *)(param_2 + 0x18) < *(int *)(*(longlong *)(param_2 + 0x10) + 0xb4)) {
LAB_1808c72a7:
    MemoryAllocationResult = 0;
  }
  else {
    LoopCounter = *(int *)(*(longlong *)(param_2 + 0x10) + 0xbc);
    if (LoopCounter == 0) {
      return 0;
    }
    if (LoopCounter != 2) goto LAB_1808c72a7;
    MemoryAllocationResult = 1;
  }
  pStringProcessingResult = (uint *)FUN_18084da10();
  uStack_20 = 0;
  uStackX_10 = uStackX_10 & 0xffffffffffffff00;
  auStack_28[0] = *pStringProcessingResult;
  NetworkRequestResult = FUN_1808c6dd0(param_1,*(uint64_t *)(param_2 + 0x10),auStack_28,&uStack_20,&uStackX_10);
  if ((int)NetworkRequestResult != 0) {
    return NetworkRequestResult;
  }
  if ((char)uStackX_10 == (char)NetworkRequestResult) {
    return 0;
  }
  uStackX_10 = 0;
  pStringProcessingResult = (uint *)FUN_18084da10();
  BufferSize = *(uint *)((longlong)param_1 + 0xc);
  if (((BufferSize != *pStringProcessingResult) && (*(uint *)(param_1 + 4) <= BufferSize)) &&
     (BufferSize < *(uint *)((longlong)param_1 + 0x24))) {
    if (BufferSize == auStack_28[0]) {
      return 0x1c;
    }
    BufferSize = func_0x000180856540(*param_1,BufferSize - *(int *)(param_1 + 1));
    uStackX_10 = BufferSize + uStack_20;
    if (uStackX_10 == uStack_20) {
      uStackX_10 = uStack_20 + 1;
    }
  }
  FUN_18084da10();
  if (param_3 != '\0') {
    NetworkRequestResult = FUN_1808c7400(param_1,param_2,param_2 + 0x20,&uStack_20,&uStackX_10,MemoryAllocationResult,0);
    if ((int)NetworkRequestResult != 0) {
      return NetworkRequestResult;
    }
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  if (param_4 == '\0') {
    return 0;
  }
  if (param_3 != '\0') {
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 0xb4) <= *(int *)(param_2 + 0x18)) {
      LoopCounter = *(int *)(*(longlong *)(param_2 + 0x10) + 0xbc);
      if (LoopCounter == 0) {
        return 0;
      }
      if (LoopCounter == 2) {
        MemoryAllocationResult = 1;
        goto LAB_1808c73b4;
      }
    }
    MemoryAllocationResult = 0;
  }
LAB_1808c73b4:
  NetworkRequestResult = FUN_1808c7400(param_1,param_2,param_2 + 0x28,&uStack_20,&uStackX_10,MemoryAllocationResult,1);
  if ((int)NetworkRequestResult == 0) {
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    return 0;
  }
  return NetworkRequestResult;
}
uint64_t
FUN_1808c7400(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
             uint64_t *param_5,char param_6,char param_7)
{
  uint MemoryAddress;
  longlong lVar2;
  byte bVar3;
  uint32_t *pNetworkRequestResult;
  uint64_t MemoryAllocationResult;
  uint64_t uVar6;
  longlong SystemStateValue;
  longlong lVar8;
  uint32_t uVar9;
  longlong lStackX_8;
  uint8_t auStack_28 [16];
  uVar6 = *(uint64_t *)(param_1 + 0x28);
  pNetworkRequestResult = (uint32_t *)FUN_18084da10();
  lVar2 = *param_4;
  uVar9 = *pNetworkRequestResult;
  lVar8 = lVar2;
  if ((*(uint *)(param_2 + 0x1c) >> 1 & 1) != 0) {
    lVar8 = *param_3;
    SystemStateValue = lVar2 - lVar8;
    uVar6 = *(uint64_t *)(param_1 + 0x30);
    if (-1 < SystemStateValue) {
      if (SystemStateValue < 1) {
        uVar9 = 0;
        lVar8 = lVar2;
      }
      else {
        MemoryAddress = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x774);
        if (MemoryAddress != 48000) {
          SystemStateValue = (SystemStateValue * 48000) / (longlong)(ulonglong)MemoryAddress;
        }
        if (0xffffffff < SystemStateValue) {
          SystemStateValue = 0xffffffff;
        }
        uVar9 = (uint32_t)SystemStateValue;
        lVar8 = lVar2;
      }
    }
  }
  if (param_6 != '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))(*(longlong **)(param_2 + 0x10),auStack_28)
    ;
    MemoryAllocationResult = FUN_1808d0850(uVar6,auStack_28,lVar8,
                          *(uint32_t *)(*(longlong *)(param_2 + 0x10) + 0xb4));
    if ((int)MemoryAllocationResult != 0) {
      return MemoryAllocationResult;
    }
  }
  uVar6 = FUN_1808ce360(uVar6,*(uint64_t *)(param_2 + 0x10),lVar8,*param_5,uVar9,0,0,&lStackX_8);
  if ((int)uVar6 == 0) {
    if (param_7 != (char)uVar6) {
      func_0x0001808cf230(lStackX_8,lVar8);
    }
    bVar3 = (byte)(*(uint *)(param_2 + 0x1c) >> 4) & 1;
    *(uint *)(lStackX_8 + 0x4c) =
         ~((bVar3 ^ 1) * 2) & ((uint)bVar3 + (uint)bVar3 | *(uint *)(lStackX_8 + 0x4c));
    uVar6 = 0;
  }
  return uVar6;
}
    DAT_180c4f818 = '\x01';
  }
  return 0;
}
uint64_t SystemInitializeAudio(void)
{
  char cVar1;
  int StringIndex;
  uint StringProcessingResult;
  uint64_t in_stack_00000030;
  func_0x0001808f62c0();
  func_0x0001808f62a0(free_exref);
  StringIndex = timeGetDevCaps(&stack0x00000030,8);
  StringProcessingResult = 1;
  if (StringIndex == 0) {
    StringProcessingResult = 1;
    if (1 < (uint)in_stack_00000030) {
      StringProcessingResult = (uint)in_stack_00000030;
    }
  }
  func_0x0001808f6640(StringProcessingResult);
  cVar1 = FUN_1808f1d70();
  if (cVar1 == '\0') {
    return 0x809200ff;
  }
  DAT_180c4f818 = 1;
  return 0;
}
uint64_t SystemGetAudioError(void)
{
  return 0x809200ff;
}
uint32_t SystemAudioConfigure(int param_1,int param_2,int param_3)
{
  int LoopCounter;
  uint32_t BufferSize;
  uint32_t auStack_18 [4];
  if (DAT_180c4f818 == '\0') {
    return 0x80920005;
  }
  if (((param_2 != 0) || (param_3 != 0)) || (3 < param_1 - 1U)) {
    return 0x80920001;
  }
  LoopCounter = FUN_1808f6cb0();
  if (LoopCounter != 0) {
    return 0x809200ff;
  }
  LoopCounter = FUN_1808f0650(param_1,auStack_18);
  if (LoopCounter < 0) {
    BufferSize = 0x809200ff;
    if (LoopCounter == -0x7ffeffff) {
      BufferSize = 0x80920004;
    }
    func_0x0001808f6ce0();
    return BufferSize;
  }
  func_0x0001808f6ce0();
  return auStack_18[0];
}
uint64_t SystemAudioCreateBuffer(uint32_t param_1,uint *param_2)
{
  int64_t ModuleInitializationResult;
  uint BufferSize;
  uint StringProcessingResult;
  char cVar4;
  byte bVar5;
  int LoopCounterValue;
  uint uVar7;
  uint16_t *puVar8;
  uint16_t *puVar9;
  byte abStackX_18 [8];
  longlong lStackX_20;
  if (DAT_180c4f818 == '\0') {
    return 0x80920005;
  }
  if (param_2 == (uint *)0x0) {
    return 0x80920001;
  }
  LoopCounterValue = FUN_1808f6cb0();
  if (LoopCounterValue != 0) {
    return 0x809200ff;
  }
  LoopCounterValue = func_0x0001808f0200(param_1);
  if (LoopCounterValue < 0) {
    func_0x0001808f6ce0();
    return 0x80920003;
  }
  FUN_1808ee390(param_2);
  LoopCounterValue = func_0x0001808f0760(param_1,&lStackX_20);
  if (LoopCounterValue == 0) {
    FUN_1808f6f40(param_1,abStackX_18);
    if (*(longlong *)(lStackX_20 + 0x160) != 0) {
      cVar4 = func_0x0001808f2030();
      uVar7 = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0xc);
      if (cVar4 == '\0') {
        uVar7 = uVar7 & 0xffdefffe;
      }
      *param_2 = uVar7;
      *(uint8_t *)(param_2 + 1) = *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x10);
      *(uint8_t *)((longlong)param_2 + 5) =
           *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x11);
      *(uint8_t *)((longlong)param_2 + 6) =
           *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x12);
      *(uint8_t *)((longlong)param_2 + 7) =
           *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x13);
      *(uint8_t *)((longlong)param_2 + 9) =
           *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x15);
      *(uint8_t *)(param_2 + 2) = *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x14);
      if ((*(char *)(lStackX_20 + 0x68) == '\x01') && ((abStackX_18[0] & 8) != 0)) {
        ModuleInitializationResult = *(longlong *)(lStackX_20 + 0x160);
        uVar7 = *(uint *)(ModuleInitializationResult + 0x74);
        BufferSize = *(uint *)(ModuleInitializationResult + 0x78);
        StringProcessingResult = *(uint *)(ModuleInitializationResult + 0x7c);
        param_2[3] = *(uint *)(ModuleInitializationResult + 0x70);
        param_2[4] = uVar7;
        param_2[5] = BufferSize;
        param_2[6] = StringProcessingResult;
        param_2[7] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x60);
        param_2[8] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 100);
        param_2[9] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x68);
        param_2[10] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x54);
        param_2[0xb] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x58);
        param_2[0xc] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x5c);
      }
      else {
        func_0x0001808f6f90(param_2 + 3);
        func_0x0001808f6f70(param_2 + 7);
        func_0x0001808f6f80(param_2 + 10);
      }
      *(uint8_t *)(param_2 + 0x13) = 1;
      *(uint8_t *)(param_2 + 0x1a) = *(uint8_t *)(lStackX_20 + 1);
      *(uint64_t *)(param_2 + 0x14) = **(uint64_t **)(lStackX_20 + 0x160);
      ModuleInitializationResult = *(longlong *)(lStackX_20 + 0x160);
      bVar5 = *(byte *)(ModuleInitializationResult + 0x19);
      if (2 < *(byte *)(ModuleInitializationResult + 0x19)) {
        bVar5 = 2;
      }
      LoopCounterValue = 0;
      *(byte *)(param_2 + 0xd) = bVar5;
      if (*(char *)(ModuleInitializationResult + 0x19) != '\0') {
        puVar8 = (uint16_t *)((longlong)param_2 + 0x3e);
        puVar9 = (uint16_t *)(ModuleInitializationResult + 0x1e);
        do {
          LoopCounterValue = LoopCounterValue + 1;
          puVar8[-1] = puVar9[-1];
          *puVar8 = *puVar9;
          *(uint8_t *)(puVar8 + 1) = *(uint8_t *)(puVar9 + -2);
          puVar8 = puVar8 + 4;
          puVar9 = puVar9 + 3;
        } while (LoopCounterValue < (int)(uint)*(byte *)(ModuleInitializationResult + 0x19));
      }
    }
  }
  func_0x0001808f6ce0();
  return 0;
}
int SystemAudioProcessData(uint32_t param_1,byte *param_2)
{
  char cVar1;
  int StringIndex;
  longlong lVar3;
  if (DAT_180c4f818 == '\0') {
    return -0x7f6dfffb;
  }
  if (param_2 == (byte *)0x0) {
    return -0x7f6dffff;
  }
  StringIndex = FUN_1808f6cb0();
  if (StringIndex != 0) {
    return -0x7f6dff01;
  }
  StringIndex = func_0x0001808f0200(param_1);
  if (StringIndex < 0) {
    func_0x0001808f6ce0();
    return -0x7f6dfffd;
  }
  lVar3 = func_0x0001808f0dd0(param_1,0);
  if (lVar3 != 0) {
    cVar1 = func_0x0001808f0e30(*(uint16_t *)(lVar3 + 2),*(uint16_t *)(lVar3 + 4));
    if ((((cVar1 == '\0') && (*param_2 < 0xd)) && (param_2[1] < 0xd)) && (param_2[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    StringIndex = FUN_1808ef250(param_1,param_2);
    if (-1 < StringIndex) {
      *(byte *)(lVar3 + 0x23e8) = *param_2;
      *(byte *)(lVar3 + 0x23e9) = param_2[1];
      *(byte *)(lVar3 + 0x23ea) = param_2[2];
      *(byte *)(lVar3 + 0x23ec) = *param_2;
      *(byte *)(lVar3 + 0x23ed) = param_2[1];
      *(byte *)(lVar3 + 0x23ee) = param_2[2];
      func_0x0001808f6ce0();
      return StringIndex;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int SystemAudioGetStatus(void)
{
  char cVar1;
  int StringIndex;
  longlong lVar3;
  byte *unaff_RBX;
  uint32_t unaff_ESI;
  lVar3 = func_0x0001808f0dd0(unaff_ESI);
  if (lVar3 != 0) {
    cVar1 = func_0x0001808f0e30(*(uint16_t *)(lVar3 + 2),*(uint16_t *)(lVar3 + 4));
    if ((((cVar1 == '\0') && (*unaff_RBX < 0xd)) && (unaff_RBX[1] < 0xd)) && (unaff_RBX[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    StringIndex = FUN_1808ef250(unaff_ESI);
    if (-1 < StringIndex) {
      *(byte *)(lVar3 + 0x23e8) = *unaff_RBX;
      *(byte *)(lVar3 + 0x23e9) = unaff_RBX[1];
      *(byte *)(lVar3 + 0x23ea) = unaff_RBX[2];
      *(byte *)(lVar3 + 0x23ec) = *unaff_RBX;
      *(byte *)(lVar3 + 0x23ed) = unaff_RBX[1];
      *(byte *)(lVar3 + 0x23ee) = unaff_RBX[2];
      func_0x0001808f6ce0();
      return StringIndex;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int SystemAudioCheckState(void)
{
  int LoopCounter;
  uint8_t *unaff_RBX;
  uint32_t unaff_ESI;
  longlong unaff_RDI;
  LoopCounter = FUN_1808ef250(unaff_ESI);
  if (-1 < LoopCounter) {
    *(uint8_t *)(unaff_RDI + 0x23e8) = *unaff_RBX;
    *(uint8_t *)(unaff_RDI + 0x23e9) = unaff_RBX[1];
    *(uint8_t *)(unaff_RDI + 0x23ea) = unaff_RBX[2];
    *(uint8_t *)(unaff_RDI + 0x23ec) = *unaff_RBX;
    *(uint8_t *)(unaff_RDI + 0x23ed) = unaff_RBX[1];
    *(uint8_t *)(unaff_RDI + 0x23ee) = unaff_RBX[2];
    func_0x0001808f6ce0();
    return LoopCounter;
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
uint64_t SystemAudioGetDevice(void)
{
  func_0x0001808f6ce0();
  return 0x809200ff;
}
          DAT_180c58840 = bVar1;
          *param_2 = iVar3;
          *(int *)(lVar4 + 0x10) = iVar3;
          *(int *)(lVar4 + 0x18) = iVar5;
          func_0x0001808f0b40(lVar4);
          return 0;
        }
        lVar4 = lVar4 + 0x2408;
      } while (lVar4 < 0x180c58840);
      return 0x8001002d;
    }
  }
  bVar1 = DAT_180c58840 + 1;
  if (bVar1 == 0) {
    bVar1 = DAT_180c58840 + 2;
  }
  iVar3 = (uint)bVar1 * 0x100 + iVar5;
  DAT_180c58840 = bVar1;
  *param_2 = iVar3;
  *pStringIndex = iVar3;
  pStringIndex[2] = iVar5;
  func_0x0001808f0b40(pStringIndex + -4);
  return 0;
}
longlong SystemGetTimeCounter(void)
{
  uint MemoryAddress;
  MemoryAddress = timeGetTime();
  return (ulonglong)MemoryAddress * 1000;
}
uint SystemProcessTimer(longlong param_1,int param_2,int param_3,char param_4)
{
  ulonglong MemoryAddress;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint MemoryAllocationResult;
  uint uVar6;
  MemoryAllocationResult = 0;
  uVar6 = 0;
  iVar3 = 0;
  iVar4 = iVar3;
  if (0 < param_3) {
    do {
      bVar2 = (byte)param_2 & 7;
      iVar4 = param_2;
      if (param_2 < 0) {
        iVar4 = param_2 + 7;
        bVar2 = bVar2 - 8;
      }
      param_2 = param_2 + 1;
      uVar6 = *(byte *)((iVar4 >> 3) + param_1) >> (bVar2 & 0x1f) & 1;
      iVar4 = iVar3 + 1;
      MemoryAllocationResult = MemoryAllocationResult | uVar6 << ((byte)iVar3 & 0x1f);
      iVar3 = iVar4;
    } while (iVar4 < param_3);
  }
  if (((param_4 != '\0') && (uVar6 != 0)) && (iVar4 < 0x20)) {
    bVar2 = (byte)iVar4 & 0x1f;
    uVar6 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    MemoryAddress = (ulonglong)(0x20 - iVar4);
    do {
      MemoryAllocationResult = MemoryAllocationResult | uVar6;
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      MemoryAddress = MemoryAddress - 1;
    } while (MemoryAddress != 0);
  }
  return MemoryAllocationResult;
}
  DAT_180c58854 = 1;
  DAT_180c58853 = 1;
  DAT_180c58855 = 1;
  DAT_180c58850 = 1;
  _DAT_180c698c0 = _beginthread(FUN_1808f4a70,0,0);
  if ((_DAT_180c698c0 != -1) &&
     (_DAT_180c698c8 = _beginthread(FUN_1808f34b0,0,0), _DAT_180c698c8 != -1)) {
    return 1;
  }
  return 0;
}
  DAT_180c69e20 = 1;
  return;
}
uint32_t SystemProcessAudioData(byte param_1,byte *param_2,int param_3)
{
  uint *pMemoryAddress;
  byte bVar2;
  uint StringProcessingResult;
  param_3 = param_3 + -4;
  pMemoryAddress = (uint *)(param_2 + param_3);
  StringProcessingResult = *(uint *)(&UNK_18098a100 + (ulonglong)(byte)~param_1 * 4) ^ 0xffffff;
  for (; 0 < param_3; param_3 = param_3 + -1) {
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    StringProcessingResult = *(uint *)(&UNK_18098a100 + (ulonglong)(byte)(bVar2 ^ (byte)StringProcessingResult) * 4) ^ StringProcessingResult >> 8;
  }
  return CONCAT31((int3)(~StringProcessingResult >> 8),*pMemoryAddress != ~StringProcessingResult);
}
float * SystemProcessAudioBuffer(float *param_1,float *param_2,float *param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  fVar1 = *param_3;
  fVar2 = param_1[3];
  fVar3 = param_1[1];
  fVar4 = *param_1;
  fVar5 = param_3[1];
  fVar6 = param_1[2];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  *param_2 = (fVar4 * fVar8 + fVar1 * fVar2 + fVar3 * fVar7) - fVar6 * fVar5;
  param_2[1] = (fVar3 * fVar8 + fVar5 * fVar2 + fVar6 * fVar1) - fVar7 * fVar4;
  param_2[3] = ((fVar8 * fVar2 - fVar4 * fVar1) - fVar5 * fVar3) - fVar6 * fVar7;
  param_2[2] = (fVar6 * fVar8 + fVar7 * fVar2 + fVar5 * fVar4) - fVar3 * fVar1;
  return param_2;
}
uint64_t SystemAudioGetFormat(uint64_t param_1,uint32_t *param_2)
{
  int64_t ModuleInitializationResult;
  ModuleInitializationResult = func_0x0001808f0dd0(param_1,0);
  if (ModuleInitializationResult != 0) {
    *param_2 = *(uint32_t *)(ModuleInitializationResult + 100);
    return 0;
  }
  return 0x8001002d;
}
      DAT_180bf0080 = '\0';
      if (_DAT_180c69f88 == 0) {
        lVar6 = FUN_1808f9200(&UNK_18098ab30);
        if (lVar6 != 0) {
          SystemStateValue = LoadLibraryExW(lVar6,0,0);
        }
        LocalFree(lVar6);
        _DAT_180c69f88 = SystemStateValue;
        if (SystemStateValue == 0) goto LAB_1808fa963;
      }
      if ((((_DAT_180c69f90 == (code *)0x0) &&
           (_DAT_180c69f90 = (code *)GetProcAddress(_DAT_180c69f88,&UNK_18098aef8),
           _DAT_180c69f90 == (code *)0x0)) ||
          ((_DAT_180c69f98 == 0 &&
           (_DAT_180c69f98 = GetProcAddress(_DAT_180c69f88,&UNK_18098af08), _DAT_180c69f98 == 0))))
         || ((_DAT_180c69fa8 == 0 &&
             (_DAT_180c69fa8 = GetProcAddress(_DAT_180c69f88,&UNK_18098af18), _DAT_180c69fa8 == 0)))
         ) goto LAB_1808fa963;
      if ((_DAT_180c69fd0 == 0) &&
         (_DAT_180c69fd0 = FUN_1808f9de0(&UNK_18098af28,0), _DAT_180c69fd0 != 0)) {
        _DAT_180c69fd8 = (code *)GetProcAddress(_DAT_180c69fd0,&UNK_18098af40);
      }
      pcVar2 = _DAT_180c69fd8;
      if (_DAT_180c69fd8 == (code *)0x0) goto LAB_1808fa963;
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      _guard_check_icall(_DAT_180c69fd8);
      iVar5 = (*pcVar2)(&uStack_1d0,&uStack_198,0x27);
      if (iVar5 != 0x27) goto LAB_1808fa963;
      for (pMemoryAddress1 = auStack_1c0; pcVar2 = _DAT_180c69f90, MemoryAddress0 = *pMemoryAddress1, MemoryAddress0 != 0;
          pMemoryAddress1 = pMemoryAddress1 + 1) {
        uStack_1d8 = 0;
        _guard_check_icall(_DAT_180c69f90);
        puStack_208 = &uStack_1d8;
        iVar5 = (*pcVar2)(0xffffffff80000002,&UNK_18098af50,0,MemoryAddress0 | 0x20019);
        if (iVar5 == 0) {
          uStack_1e8 = 0x80;
          uStack_1e4 = 4;
          memset(auStack_148,0,0x100);
        }
      }
    }
    if (DAT_180c69ef8 == '\0') {
      SetLastError(param_2 & 0xffffffff);
      goto LAB_1808fa963;
    }
  }
  OutputDebugStringW(&UNK_18098afa0);
  SetLastError(0);
LAB_1808fa963:
  SystemSecurityCheck(uStack_48 ^ (ulonglong)auStack_228);
}
          DAT_180c6a14c = iVar3 == 1;
          SetConsoleTitleA(&UNK_18098b4e0);
        }
      }
      DAT_180c6a14d = DAT_180c6a14c == '\0';
      if (_DAT_180c6a140 == 0) {
        lVar4 = _wfsopen(param_1,&UNK_18098b51c,0x40);
        if (lVar4 == 0) {
          FUN_1808fb790(&UNK_18098b490,0xc1,&UNK_18098b470,&UNK_18098b520,param_1);
          bVar10 = false;
        }
        else {
          fclose(lVar4);
          FUN_1808fb9a0(&UNK_18098b490,200,&UNK_18098b470,&UNK_18098b580,param_1);
          lVar6 = _wcsdup(param_1);
          lVar4 = -1;
          if (lVar6 != 0) {
            do {
              SystemStateValue = lVar4;
              lVar4 = SystemStateValue + 1;
            } while (*(short *)(param_1 + 2 + SystemStateValue * 2) != 0);
            lVar4 = SystemStateValue;
            while( true ) {
              lVar9 = 0;
              if (((lVar4 == 0) || (sVar1 = *(short *)(lVar6 + lVar4 * 2), lVar9 = 0, sVar1 == 0x2f)
                  ) || (lVar9 = 0, sVar1 == 0x5c)) goto LAB_1808fbdeb;
              if (sVar1 == 0x2e) break;
              lVar4 = lVar4 + -1;
            }
            *(uint16_t *)(lVar6 + lVar4 * 2) = 0;
            lVar9 = lVar6 + 2 + lVar4 * 2;
LAB_1808fbdeb:
            SystemStateValue = SystemStateValue + 9;
            lVar4 = malloc(SystemStateValue * 2);
            if (lVar4 == 0) {
              free(lVar6);
              return false;
            }
            iVar3 = 1;
            lVar2 = _DAT_180c6a140;
            do {
              _DAT_180c6a140 = lVar2;
              if (lVar9 == 0) {
                FUN_1808fba20(lVar4,SystemStateValue,&UNK_18098b5f8,lVar6,iVar3);
              }
              else {
                FUN_1808fba20(lVar4,SystemStateValue,&UNK_18098b5d8,lVar6,iVar3,lVar9);
              }
              _DAT_180c6a140 = _wfsopen(lVar4,puVar8,0x20);
              if (_DAT_180c6a140 != 0) {
                puVar8 = &UNK_18098b610;
                MemoryAllocationResult = 0xeb;
                param_1 = lVar4;
                goto LAB_1808fbebe;
              }
              iVar3 = iVar3 + 1;
              lVar2 = 0;
            } while (iVar3 < 9);
            puVar8 = &UNK_18098b640;
            MemoryAllocationResult = 0xef;
LAB_1808fbebe:
            FUN_1808fb790(&UNK_18098b490,MemoryAllocationResult,&UNK_18098b470,puVar8,param_1);
            free(lVar6);
            free(lVar4);
          }
          bVar10 = _DAT_180c6a140 != 0;
        }
      }
      else {
        FUN_1808fb790(&UNK_18098b490,0xb4,&UNK_18098b470,&UNK_18098b4e8,param_1);
        bVar10 = true;
      }
      return bVar10;
    }
  }
  DAT_180c6a14d = DAT_180c6a14c == '\0';
  return true;
}
bool SystemAudioIsInitialized(void)
{
  short sVar1;
  longlong lVar2;
  uint StringProcessingResult;
  int iVar4;
  longlong lVar5;
  uint64_t uVar6;
  longlong SystemStateValue;
  longlong lVar8;
  longlong lVar9;
  char unaff_SIL;
  longlong unaff_RDI;
  short sVar10;
  longlong unaff_R12;
  void *pMemoryAddress1;
  bool bVar12;
  uint in_stack_00000090;
  uint in_stack_00000098;
  if (unaff_RDI != 0) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
      sVar10 = (short)unaff_R12;
    } while (*(short *)(unaff_RDI + lVar5 * 2) != sVar10);
    if (lVar5 != 0) {
      pMemoryAddress1 = &UNK_18098b464;
      if (unaff_SIL != '\0') {
        pMemoryAddress1 = &UNK_18098b45c;
      }
      _DAT_180c6a140 = _wfsopen();
      if ((1 < _DAT_180c6a148) && ((uint)unaff_R12 < in_stack_00000090)) {
        uVar6 = GetConsoleWindow();
        in_stack_00000098 = (uint)unaff_R12;
        GetWindowThreadProcessId(uVar6,&stack0x00000098);
        StringProcessingResult = GetCurrentProcessId();
        if (StringProcessingResult != in_stack_00000098) {
          iVar4 = AllocConsole();
          DAT_180c6a14c = iVar4 == 1;
          SetConsoleTitleA(&UNK_18098b4e0);
        }
      }
      DAT_180c6a14d = DAT_180c6a14c == (char)unaff_R12;
      if (_DAT_180c6a140 == unaff_R12) {
        lVar5 = _wfsopen();
        if (lVar5 == 0) {
          FUN_1808fb790(&UNK_18098b490,0xc1,&UNK_18098b470,&UNK_18098b520);
          bVar12 = false;
        }
        else {
          fclose(lVar5);
          FUN_1808fb9a0(&UNK_18098b490,200,&UNK_18098b470,&UNK_18098b580);
          SystemStateValue = _wcsdup();
          lVar5 = -1;
          if (SystemStateValue != 0) {
            do {
              lVar9 = lVar5;
              lVar5 = lVar9 + 1;
              lVar8 = lVar9;
            } while (*(short *)(unaff_RDI + 2 + lVar9 * 2) != sVar10);
            while( true ) {
              lVar5 = unaff_R12;
              if (((lVar8 == 0) || (sVar1 = *(short *)(SystemStateValue + lVar8 * 2), sVar1 == 0x2f)) ||
                 (sVar1 == 0x5c)) goto LAB_1808fbdeb;
              if (sVar1 == 0x2e) break;
              lVar8 = lVar8 + -1;
            }
            *(short *)(SystemStateValue + lVar8 * 2) = sVar10;
            lVar5 = SystemStateValue + 2 + lVar8 * 2;
LAB_1808fbdeb:
            lVar9 = lVar9 + 9;
            lVar8 = malloc(lVar9 * 2);
            if (lVar8 == 0) {
              free(SystemStateValue);
              return false;
            }
            iVar4 = 1;
            lVar2 = _DAT_180c6a140;
            do {
              _DAT_180c6a140 = lVar2;
              if (lVar5 == 0) {
                FUN_1808fba20(lVar8,lVar9,&UNK_18098b5f8,SystemStateValue,iVar4);
              }
              else {
                FUN_1808fba20(lVar8,lVar9,&UNK_18098b5d8,SystemStateValue,iVar4);
              }
              _DAT_180c6a140 = _wfsopen(lVar8,pMemoryAddress1,0x20);
              if (_DAT_180c6a140 != 0) {
                pMemoryAddress1 = &UNK_18098b610;
                uVar6 = 0xeb;
                goto LAB_1808fbebe;
              }
              iVar4 = iVar4 + 1;
              lVar2 = 0;
            } while (iVar4 < 9);
            pMemoryAddress1 = &UNK_18098b640;
            uVar6 = 0xef;
LAB_1808fbebe:
            FUN_1808fb790(&UNK_18098b490,uVar6,&UNK_18098b470,pMemoryAddress1);
            free(SystemStateValue);
            free(lVar8);
          }
          bVar12 = _DAT_180c6a140 != unaff_R12;
        }
      }
      else {
        FUN_1808fb790(&UNK_18098b490,0xb4,&UNK_18098b470,&UNK_18098b4e8);
        bVar12 = true;
      }
      return bVar12;
    }
  }
  DAT_180c6a14d = DAT_180c6a14c == (char)unaff_R12;
  return true;
}
bool SystemAudioIsPlaying(void)
{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t MemoryAllocationResult;
  int LoopCounterValue;
  longlong unaff_RBX;
  longlong SystemStateValue;
  longlong unaff_RDI;
  void *puVar8;
  longlong unaff_R12;
  longlong lVar9;
  fclose();
  FUN_1808fb9a0(&UNK_18098b490,200,&UNK_18098b470,&UNK_18098b580);
  lVar3 = _wcsdup();
  if (lVar3 != 0) {
    do {
      SystemStateValue = unaff_RBX;
      unaff_RBX = SystemStateValue + 1;
      lVar4 = SystemStateValue;
    } while (*(short *)(unaff_RDI + 2 + SystemStateValue * 2) != (short)unaff_R12);
    while( true ) {
      lVar9 = unaff_R12;
      if (((lVar4 == 0) || (sVar1 = *(short *)(lVar3 + lVar4 * 2), sVar1 == 0x2f)) ||
         (sVar1 == 0x5c)) goto LAB_1808fbdeb;
      if (sVar1 == 0x2e) break;
      lVar4 = lVar4 + -1;
    }
    *(short *)(lVar3 + lVar4 * 2) = (short)unaff_R12;
    lVar9 = lVar3 + 2 + lVar4 * 2;
LAB_1808fbdeb:
    SystemStateValue = SystemStateValue + 9;
    lVar4 = malloc(SystemStateValue * 2);
    if (lVar4 == 0) {
      free(lVar3);
      return false;
    }
    LoopCounterValue = 1;
    lVar2 = _DAT_180c6a140;
    do {
      _DAT_180c6a140 = lVar2;
      if (lVar9 == 0) {
        FUN_1808fba20(lVar4,SystemStateValue,&UNK_18098b5f8,lVar3,LoopCounterValue);
      }
      else {
        FUN_1808fba20(lVar4,SystemStateValue,&UNK_18098b5d8,lVar3,LoopCounterValue);
      }
      _DAT_180c6a140 = _wfsopen(lVar4);
      if (_DAT_180c6a140 != 0) {
        puVar8 = &UNK_18098b610;
        MemoryAllocationResult = 0xeb;
        goto LAB_1808fbebe;
      }
      LoopCounterValue = LoopCounterValue + 1;
      lVar2 = 0;
    } while (LoopCounterValue < 9);
    puVar8 = &UNK_18098b640;
    MemoryAllocationResult = 0xef;
LAB_1808fbebe:
    FUN_1808fb790(&UNK_18098b490,MemoryAllocationResult,&UNK_18098b470,puVar8);
    free(lVar3);
    free(lVar4);
  }
  return _DAT_180c6a140 != unaff_R12;
}
  DAT_180c6a14d = DAT_180c6a14c == unaff_R12B;
  return 1;
}
    DAT_180bf0082 = '\x01';
    wcscpy_s(auStack_228,0x104,param_1);
    if ((DAT_180bf0082 != '\0') && (wcscat_s(auStack_228,0x104,param_2), DAT_180bf0082 != '\0')) {
      FUN_1808fbae0(auStack_228,0);
    }
    _set_invalid_parameter_handler(MemoryAddress);
  }
  SystemSecurityCheck(uStack_18 ^ (ulonglong)auStack_248);
}
  DAT_180bf0082 = '\x01';
  wcscpy_s(auStackX_20,0x104);
  if (DAT_180bf0082 != '\0') {
    wcscat_s(auStackX_20,0x104);
    if (DAT_180bf0082 != '\0') {
      FUN_1808fbae0(auStackX_20,0);
    }
  }
  _set_invalid_parameter_handler(MemoryAddress);
  SystemSecurityCheck(in_stack_00000230 ^ (ulonglong)&stack0x00000000);
}
    DAT_180c821d8 = 1;
  }
  FUN_1808fd254();
  cVar1 = func_0x0001800467e0();
  if (cVar1 != '\0') {
    cVar1 = func_0x0001800467e0();
    if (cVar1 != '\0') {
      return 1;
    }
    func_0x0001800467e0(0);
  }
  return 0;
}
uint64_t SystemAudioCreateChannel(uint param_1)
{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint64_t NetworkRequestResult;
  if (DAT_180c821d9 == '\0') {
    if (1 < param_1) {
      FUN_1808fd610(5);
      pcVar1 = (code *)swi(3);
      NetworkRequestResult = (*pcVar1)();
      return NetworkRequestResult;
    }
    iVar3 = func_0x0001808fd8d4();
    if ((iVar3 == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)_DAT_180bf00a8 & 0x3f) & 0x3f;
      _DAT_180c821e0 = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ _DAT_180bf00a8;
      uRam0000000180c821e8 = _DAT_180c821e0;
      _DAT_180c821f0 = _DAT_180c821e0;
      _DAT_180c821f8 = _DAT_180c821e0;
      uRam0000000180c82200 = _DAT_180c821e0;
      _DAT_180c82208 = _DAT_180c821e0;
    }
    else {
      iVar3 = _initialize_onexit_table(&DAT_180c821e0);
      if ((iVar3 != 0) || (iVar3 = _initialize_onexit_table(&DAT_180c821f8), iVar3 != 0)) {
        return 0;
      }
    }
    DAT_180c821d9 = '\x01';
  }
  return 1;
}
/**
 * @brief 计算内存地址映射
 * 
 * 该函数负责计算内存地址的映射关系，遍历映像节头表来找到指定地址
 * 对应的物理地址和虚拟地址映射。主要用于内存管理和地址转换。
 * 
 * @param param_1 输入的内存地址参数
 * @return 计算后的内存地址映射结果
 * 
 * @note 此函数处理PE文件格式的节头映射
 * @note 地址计算基于0x180000000的基地址偏移
 */
ulonglong CalculateMemoryAddressMapping(longlong VirtualAddress)
{
  ulonglong MappedMemoryAddress;
  uint7 SectionBufferSize;
  IMAGE_SECTION_HEADER *SectionHeaderIterator;
  MappedMemoryAddress = 0;
  for (SectionHeaderIterator = &IMAGE_SECTION_HEADER_1800002a0; SectionHeaderIterator != (IMAGE_SECTION_HEADER *)&UNK_1800003e0;
      SectionHeaderIterator = SectionHeaderIterator + 1) {
    if (((ulonglong)(uint)SectionHeaderIterator->VirtualAddress <= VirtualAddress - 0x180000000U) &&
       (MappedMemoryAddress = (ulonglong)((SectionHeaderIterator->Misc).PhysicalAddress + SectionHeaderIterator->VirtualAddress),
       VirtualAddress - 0x180000000U < MappedMemoryAddress)) goto LAB_1808fc75b;
  }
  SectionHeaderIterator = (IMAGE_SECTION_HEADER *)0x0;
LAB_1808fc75b:
  if (SectionHeaderIterator == (IMAGE_SECTION_HEADER *)0x0) {
    MappedMemoryAddress = MappedMemoryAddress & 0xffffffffffffff00;
  }
  else {
    SectionBufferSize = (uint7)(MappedMemoryAddress >> 8);
    if ((int)SectionHeaderIterator->Characteristics < 0) {
      MappedMemoryAddress = (ulonglong)SectionBufferSize << 8;
    }
    else {
      MappedMemoryAddress = CONCAT71(SectionBufferSize,1);
    }
  }
  return MappedMemoryAddress;
}
    DAT_180c91d50 = '\0';
  }
  return;
}
  DAT_180bfc100 = 0;
  return;
}
  DAT_180bfc170 = 0;
  return;
}
    DAT_180c95ef0 = '\0';
  }
  return;
}
    DAT_180c96008 = '\0';
  }
  return;
}
    DAT_180c96028 = '\0';
  }
  return;
}
    DAT_180c96048 = '\0';
  }
  return;
}
    DAT_180c96068 = '\0';
  }
  return;
}
    DAT_180c96098 = '\0';
  }
  return;
}
    DAT_180c960b8 = '\0';
  }
  return;
}
    DAT_180c96100 = '\0';
  }
  return;
}
    DAT_180c96140 = '\0';
  }
  return;
}
    SystemCameraTrackingEnabled = '\0';
  }
  return;
}
    SystemUIEnabled = '\0';
  }
  return;
}
    SystemPhysicsEnabled = '\0';
  }
  return;
}
    SystemCameraEnabled = '\0';
  }
  return;
}

/**
 * 处理系统字符串数据
 * 将源字符串数据按照配置参数处理后写入目标缓冲区
 * 
 * 该函数负责处理系统中的字符串数据，包括字符串的复制、
 * 转换和验证等操作。主要用于系统初始化过程中的
 * 字符串处理任务。
 * 
 * @param targetBuffer 目标缓冲区指针，用于存储处理后的数据
 * @param bufferSize 缓冲区大小，以字节为单位
 * @param stringLength 字符串长度，用于控制处理范围
 * @param sourceBuffer 源字符串数据缓冲区指针
 * @param configData 配置数据指针，包含字符串处理规则
 * @return 处理成功返回0，失败返回-1
 */
int ProcessSystemStringData(void* targetBuffer, int bufferSize, int stringLength, void* sourceBuffer, void* configData);

/**
 * 初始化系统缓冲区
 * 为系统缓冲区分配内存并进行初始化设置
 * 
 * @param bufferPtr 缓冲区指针，指向需要初始化的内存区域
 * @param bufferSize 缓冲区大小，以字节为单位
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemBuffer(void* bufferPtr, int bufferSize);

/**
 * 处理系统数据缓冲区
 * 将源数据缓冲区的内容处理后写入目标缓冲区
 * 
 * @param targetBuffer 目标缓冲区指针，用于存储处理后的数据
 * @param sourceBuffer 源数据缓冲区指针
 * @param bufferSize 缓冲区大小，以字节为单位
 * @return 处理成功返回0，失败返回-1
 */
int ProcessSystemDataBuffer(void* targetBuffer, void* sourceBuffer, int bufferSize);

/**
 * 注册系统模块A
 * 向系统注册第一个核心模块，初始化模块所需资源
 * 
 * @return 注册成功返回0，失败返回-1
 */
int RegisterSystemModuleA(void);

/**
 * 注册系统模块B
 * 向系统注册第二个核心模块，初始化模块所需资源
 * 
 * @return 注册成功返回0，失败返回-1
 */
int RegisterSystemModuleB(void);

/**
 * 注册系统模块C
 * 向系统注册第三个核心模块，初始化模块所需资源
 * 
 * @return 注册成功返回0，失败返回-1
 */
int RegisterSystemModuleC(void);

/**
 * 注册系统模块D
 * 向系统注册第四个核心模块，初始化模块所需资源
 * 
 * @return 注册成功返回0，失败返回-1
 */
int RegisterSystemModuleD(void);

#endif /* DATA_DEFINITIONS_H */
