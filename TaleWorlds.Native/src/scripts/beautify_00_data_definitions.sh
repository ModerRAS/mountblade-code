#!/bin/bash

# 美化00_data_definitions.h文件中的FUN_180629850函数和相关变量
# 使用PascalCase命名规范

# 替换函数名
sed -i 's/FUN_180629850/ValidateSystemConfigurationData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h

# 替换相关的UNK_变量名为有意义的名称
sed -i 's/UNK_180a39920/SystemConfigurationDataBuffer1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39888/SystemConfigurationDataBuffer2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a397f8/SystemConfigurationDataBuffer3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a397e8/SystemConfigurationDataBuffer4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39850/SystemConfigurationDataBuffer5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39820/SystemConfigurationDataBuffer6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39940/SystemConfigurationDataBuffer7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a19c8c/SystemConfigurationDataBuffer8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a397d8/SystemConfigurationDataBuffer9/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a397c8/SystemConfigurationDataBuffer10/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39740/SystemConfigurationDataBuffer11/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39728/SystemConfigurationDataBuffer12/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39768/SystemConfigurationDataBuffer13/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39758/SystemConfigurationDataBuffer14/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39870/SystemConfigurationDataBuffer15/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39864/SystemConfigurationDataBuffer16/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a398a8/SystemConfigurationDataBuffer17/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39568/SystemConfigurationDataBuffer18/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39538/SystemConfigurationDataBuffer19/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a396c8/SystemConfigurationDataBuffer20/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a396b0/SystemConfigurationDataBuffer21/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39710/SystemConfigurationDataBuffer22/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a396f0/SystemConfigurationDataBuffer23/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39640/SystemConfigurationDataBuffer24/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39628/SystemConfigurationDataBuffer25/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39688/SystemConfigurationDataBuffer26/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39660/SystemConfigurationDataBuffer27/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a397a8/SystemConfigurationDataBuffer28/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39788/SystemConfigurationDataBuffer29/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39270/SystemConfigurationDataBuffer30/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a393a8/SystemConfigurationDataBuffer31/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39390/SystemConfigurationDataBuffer32/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a393f0/SystemConfigurationDataBuffer33/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a393d0/SystemConfigurationDataBuffer34/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39348/SystemConfigurationDataBuffer35/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39328/SystemConfigurationDataBuffer36/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39378/SystemConfigurationDataBuffer37/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39360/SystemConfigurationDataBuffer38/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a394a0/SystemConfigurationDataBuffer39/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39480/SystemConfigurationDataBuffer40/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a394e0/SystemConfigurationDataBuffer41/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a394b8/SystemConfigurationDataBuffer42/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39428/SystemConfigurationDataBuffer43/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39408/SystemConfigurationDataBuffer44/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39468/SystemConfigurationDataBuffer45/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39450/SystemConfigurationDataBuffer46/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a395c0/SystemConfigurationDataBuffer47/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39598/SystemConfigurationDataBuffer48/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39600/SystemConfigurationDataBuffer49/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a395e0/SystemConfigurationDataBuffer50/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39518/SystemConfigurationDataBuffer51/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39500/SystemConfigurationDataBuffer52/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a391b8/SystemConfigurationDataBuffer53/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39188/SystemConfigurationDataBuffer54/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39210/SystemConfigurationDataBuffer55/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a391e8/SystemConfigurationDataBuffer56/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39128/SystemConfigurationDataBuffer57/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39110/SystemConfigurationDataBuffer58/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39170/SystemConfigurationDataBuffer59/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39148/SystemConfigurationDataBuffer60/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a392d0/SystemConfigurationDataBuffer61/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a392b8/SystemConfigurationDataBuffer62/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39308/SystemConfigurationDataBuffer63/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a392e8/SystemConfigurationDataBuffer64/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39250/SystemConfigurationDataBuffer65/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39230/SystemConfigurationDataBuffer66/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39298/SystemConfigurationDataBuffer67/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a38ef0/SystemConfigurationDataBuffer68/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a38fd8/SystemConfigurationDataBuffer69/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a1029c/SystemConfigurationDataBuffer70/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a38fc0/SystemConfigurationDataBuffer71/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39008/SystemConfigurationDataBuffer72/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a38ff0/SystemConfigurationDataBuffer73/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a38f78/SystemConfigurationDataBuffer74/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a38f60/SystemConfigurationDataBuffer75/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a38fa8/SystemConfigurationDataBuffer76/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a38f90/SystemConfigurationDataBuffer77/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a390b8/SystemConfigurationDataBuffer78/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39090/SystemConfigurationDataBuffer79/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a390f0/SystemConfigurationDataBuffer80/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a390d0/SystemConfigurationDataBuffer81/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39030/SystemConfigurationDataBuffer82/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a34c20/SystemConfigurationDataBuffer83/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39020/SystemConfigurationDataBuffer84/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39078/SystemConfigurationDataBuffer85/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39058/SystemConfigurationDataBuffer86/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a0ee38/SystemConfigurationDataBuffer87/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a38f50/SystemConfigurationDataBuffer88/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a38f40/SystemConfigurationDataBuffer89/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a38ee0/SystemConfigurationDataBuffer90/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a38ed0/SystemConfigurationDataBuffer91/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a38f00/SystemConfigurationDataBuffer92/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h

# 替换其他UNK_变量
sed -i 's/UNK_180a39988/SystemConfigurationValidationBuffer1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/UNK_180a39970/SystemConfigurationValidationBuffer2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h

echo "00_data_definitions.h 文件美化完成"