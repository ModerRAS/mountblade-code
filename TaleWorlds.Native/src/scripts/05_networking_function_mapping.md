# 05_networking.c 函数映射表

## 概述
本文档记录了 05_networking.c 文件中函数的原始名称和重命名后的对应关系。

## 已重命名的函数

### 网络数据搜索函数系列
| 原始函数名 | 重命名后 | 功能描述 |
|------------|----------|----------|
| FUN_18087b750 | ProcessNetworkDataSearchFirstInstance | 处理网络数据搜索的第一个实例 |
| FUN_18087b76a | ProcessNetworkDataSearchSecondInstance | 处理网络数据搜索的第二个实例 |
| FUN_18087b883 | ProcessNetworkDataSearchThirdInstance | 处理网络数据搜索的第三个实例 |
| FUN_18087b970 | ProcessNetworkDataSearchFourthInstance | 处理网络数据搜索的第四个实例 |
| FUN_18087b993 | ProcessNetworkDataSearchFifthInstance | 处理网络数据搜索的第五个实例 |
| FUN_18087ba80 | ProcessNetworkDataSearchSixthInstance | 处理网络数据搜索的第六个实例 |
| FUN_18087ba9a | ProcessNetworkDataSearchSeventhInstance | 处理网络数据搜索的第七个实例 |
| FUN_18087bbb0 | ProcessNetworkDataSearchEighthInstance | 处理网络数据搜索的第八个实例 |
| FUN_18087bbd3 | ProcessNetworkDataSearchNinthInstance | 处理网络数据搜索的第九个实例 |
| FUN_18087bca0 | ProcessNetworkDataSearchTenthInstance | 处理网络数据搜索的第十个实例 |
| FUN_18087bcc3 | ProcessNetworkDataSearchEleventhInstance | 处理网络数据搜索的第十一个实例 |
| FUN_18087bdd0 | ProcessNetworkDataSearchTwelfthInstance | 处理网络数据搜索的第十二个实例 |
| FUN_18087bdea | ProcessNetworkDataSearchThirteenthInstance | 处理网络数据搜索的第十三个实例 |
| FUN_18087bee0 | ProcessNetworkDataSearchFourteenthInstance | 处理网络数据搜索的第十四个实例 |
| FUN_18087bf03 | ProcessNetworkDataSearchFifteenthInstance | 处理网络数据搜索的第十五个实例 |
| FUN_18087c163 | ProcessNetworkDataSearchSixteenthInstance | 处理网络数据搜索的第十六个实例 |

### 获取网络句柄函数系列
| 原始函数名 | 重命名后 | 功能描述 |
|------------|----------|----------|
| FUN_18087b93b | GetNetworkHandleFirstInstance | 获取网络句柄的第一个实例 |
| FUN_18087ba4b | GetNetworkHandleSecondInstance | 获取网络句柄的第二个实例 |
| FUN_18087bb5f | GetNetworkHandleThirdInstance | 获取网络句柄的第三个实例 |
| FUN_18087bc8b | GetNetworkHandleFourthInstance | 获取网络句柄的第四个实例 |
| FUN_18087bd7b | GetNetworkHandleFifthInstance | 获取网络句柄的第五个实例 |
| FUN_18087beaf | GetNetworkHandleSixthInstance | 获取网络句柄的第六个实例 |

## 变量名映射

### 通用变量
| 原始变量名 | 重命名后 | 说明 |
|------------|----------|------|
| BoolFlag | ResourceCleanupFlag | 资源清理标志 |
| uStackX_24 | StackParameterHigh | 高位堆栈参数 |
| lStack0000000000000028 | StackParameterLow | 低位堆栈参数 |
| in_XMM0_Qb | Xmm0Parameter | XMM0 寄存器参数 |

## 标签名映射

### 跳转标签
| 原始标签名 | 重命名后 | 说明 |
|------------|----------|------|
| LAB_18087b80f | LAB_CleanupResourceExit | 资源清理退出标签 |
| LAB_18087ba26 | LAB_SearchCompleteExit | 搜索完成退出标签 |
| LAB_18087b916 | LAB_ResourceCleanupExit | 资源清理退出标签 |

## 重命名原则

1. **函数名**：使用 PascalCase，具有明确的语义
2. **变量名**：使用 PascalCase，描述变量的用途
3. **标签名**：使用描述性的名称，表明其用途

## 注意事项

1. 所有重命名都保持了代码的原有逻辑
2. 重命名后的名称具有更好的可读性和语义
3. 重命名遵循了项目的命名规范
4. 重命名后的函数和变量都添加了适当的文档注释

## 美化效果

通过这次美化，代码具有以下改进：
1. **更好的可读性**：函数名和变量名更加语义化
2. **更清晰的逻辑**：通过命名可以看出函数的作用
3. **更易于维护**：语义化的命名使代码更容易理解和修改
4. **更完善的文档**：添加了详细的函数注释

## 使用方法

运行以下命令执行美化：

```bash
python3 /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/beautify_05_networking_remaining.py
```

脚本会自动备份原始文件，然后执行美化操作。