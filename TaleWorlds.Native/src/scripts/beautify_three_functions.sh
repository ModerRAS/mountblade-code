#!/bin/bash

# 美化99_unmatched_functions.c文件中的三个特定函数
# 1. FUN_1808fcb90 - 临界区锁初始化函数
# 2. FUN_1808fcbf8 - 系统事件同步处理函数  
# 3. FUN_1808fcc48 - 系统事件等待函数

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

echo "开始美化三个特定函数..."

# 创建备份
cp "$FILE_PATH" "${FILE_PATH}.backup_$(date +%Y%m%d_%H%M%S)"

# 1. 修改FUN_1808fcb90函数定义和注释
sed -i '/\/\/ 函数: void FUN_1808fcb90(int \*OutputBuffer)/,/void FUN_1808fcb90(int \*OutputBuffer)/ {
    s|\/\/ 函数: void FUN_1808fcb90(int \*OutputBuffer)|/**\
 * 初始化临界区锁并设置输出缓冲区状态\
 * \
 * 该函数用于初始化临界区锁，并根据输出缓冲区的当前状态进行相应的处理：\
 * - 如果输出缓冲区为0，将其设置为-1表示初始化完成\
 * - 如果输出缓冲区不为-1，更新线程本地存储的值\
 * - 如果输出缓冲区为-1，调用系统事件等待函数\
 * \
 * @param OutputBuffer 指向输出缓冲区的指针，用于存储初始化状态\
 * @return void\
 */|g
    s|void FUN_1808fcb90(int \*OutputBuffer)|void InitializeCriticalSectionLock(int *OutputBuffer)|g
}' "$FILE_PATH"

# 2. 修改FUN_1808fcbf8函数定义和注释
sed -i '/\/\/ 函数: void FUN_1808fcbf8(void)/,/void FUN_1808fcbf8(void)/ {
    s|\/\/ 函数: void FUN_1808fcbf8(void)|/**\
 * 处理系统事件同步操作\
 * \
 * 该函数用于处理系统事件的同步操作，包括：\
 * - 检查系统事件句柄是否存在\
 * - 如果存在，设置事件并重置事件状态\
 * - 如果不存在，执行堆栈保护相关的处理\
 * \
 * 该函数主要用于系统级的事件同步机制，确保多线程环境下的正确同步。\
 * \
 * @return void\
 */|g
    s|void FUN_1808fcbf8(void)|void HandleSystemEventSynchronization(void)|g
}' "$FILE_PATH"

# 3. 修改FUN_1808fcc48函数定义和注释
sed -i '/\/\/ 函数: void FUN_1808fcc48(undefined4 OutputBuffer)/,/void FUN_1808fcc48(undefined4 OutputBuffer)/ {
    s|\/\/ 函数: void FUN_1808fcc48(undefined4 OutputBuffer)|/**\
 * 等待系统事件完成\
 * \
 * 该函数用于等待系统事件的完成，主要功能包括：\
 * - 检查系统事件句柄是否存在\
 * - 如果存在，离开临界区，等待指定时间后重新进入临界区\
 * - 如果不存在，执行堆栈保护相关的处理\
 * \
 * 该函数常用于需要等待特定事件完成的同步场景。\
 * \
 * @param OutputBuffer 等待超时时间（毫秒）\
 * @return void\
 */|g
    s|void FUN_1808fcc48(undefined4 OutputBuffer)|void WaitForSystemEventCompletion(undefined4 OutputBuffer)|g
}' "$FILE_PATH"

# 4. 更新函数调用处的名称
sed -i 's/FUN_1808fcc48(100)/WaitForSystemEventCompletion(100)/g' "$FILE_PATH"

echo "函数美化完成！"
echo "修改内容："
echo "1. FUN_1808fcb90 -> InitializeCriticalSectionLock (临界区锁初始化函数)"
echo "2. FUN_1808fcbf8 -> HandleSystemEventSynchronization (系统事件同步处理函数)"  
echo "3. FUN_1808fcc48 -> WaitForSystemEventCompletion (系统事件等待函数)"
echo "4. 更新了函数调用处的名称"
echo ""
echo "备份文件已创建: ${FILE_PATH}.backup_$(date +%Y%m%d_%H%M%S)"