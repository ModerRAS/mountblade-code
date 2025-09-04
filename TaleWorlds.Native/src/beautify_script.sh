#!/bin/bash

# 脚本：美化00_data_definitions.h文件中的变量名
# 这个脚本将批量替换fStack开头的变量名为更有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时脚本文件
cat > beautify_variables.sh << 'EOF'
#!/bin/bash

# 替换fStack变量为更有意义的名称
# 注意：这些变量看起来是浮点数栈上的临时变量

# 第一组：290系列的变量（可能用于插值计算）
sed -i 's/fStack_298/FloatInterpolationResult298/g' 00_data_definitions.h
sed -i 's/fStack_294/FloatInterpolationResult294/g' 00_data_definitions.h
sed -i 's/fStack_290/FloatInterpolationResult290/g' 00_data_definitions.h
sed -i 's/fStack_28c/FloatSourceValue28c/g' 00_data_definitions.h
sed -i 's/fStack_288/FloatSourceValue288/g' 00_data_definitions.h
sed -i 's/fStack_284/FloatSourceValue284/g' 00_data_definitions.h
sed -i 's/fStack_27c/FloatTargetValue27c/g' 00_data_definitions.h
sed -i 's/fStack_278/FloatTargetValue278/g' 00_data_definitions.h
sed -i 's/fStack_274/FloatTargetValue274/g' 00_data_definitions.h
sed -i 's/fStack_270/FloatTargetValue270/g' 00_data_definitions.h
sed -i 's/fStack_26c/FloatBaseValue26c/g' 00_data_definitions.h
sed -i 's/fStack_264/FloatBaseValue264/g' 00_data_definitions.h
sed -i 's/fStack_260/FloatBaseValue260/g' 00_data_definitions.h

# 第二组：矩阵变换相关的变量
sed -i 's/fStack_138/MatrixTransformResult138/g' 00_data_definitions.h
sed -i 's/fStack_128/MatrixTransformResult128/g' 00_data_definitions.h
sed -i 's/fStack_168/MatrixTransformResult168/g' 00_data_definitions.h
sed -i 's/fStack_178/MatrixTransformResult178/g' 00_data_definitions.h

# 第三组：比较结果相关的变量
sed -i 's/fStack_134/FloatComparisonValue134/g' 00_data_definitions.h
sed -i 's/fStack_124/FloatComparisonValue124/g' 00_data_definitions.h
sed -i 's/fStack_130/FloatComparisonValue130/g' 00_data_definitions.h
sed -i 's/fStack_120/FloatComparisonValue120/g' 00_data_definitions.h

# 第四组：存储结果相关的变量
sed -i 's/fStack_190/FloatStoredResult190/g' 00_data_definitions.h
sed -i 's/fStack_194/FloatStoredResult194/g' 00_data_definitions.h
sed -i 's/fStack_198/FloatStoredResult198/g' 00_data_definitions.h
sed -i 's/fStack_150/FloatStoredResult150/g' 00_data_definitions.h
sed -i 's/fStack_148/FloatStoredResult148/g' 00_data_definitions.h
sed -i 's/fStack_144/FloatStoredResult144/g' 00_data_definitions.h
sed -i 's/fStack_140/FloatStoredResult140/g' 00_data_definitions.h
sed -i 's/fStack_164/FloatStoredResult164/g' 00_data_definitions.h
sed -i 's/fStack_160/FloatStoredResult160/g' 00_data_definitions.h

# 第五组：其他临时变量
sed -i 's/fStack_328/FloatTempValue328/g' 00_data_definitions.h
sed -i 's/fStack_370/FloatCalculatedValue370/g' 00_data_definitions.h

# 第六组：afStack变量（数组形式的栈变量）
sed -i 's/afStack_2e8/FloatArrayStack2e8/g' 00_data_definitions.h

echo "变量名美化完成"
EOF

# 给脚本执行权限
chmod +x beautify_variables.sh

# 执行脚本
./beautify_variables.sh

# 清理临时脚本
rm beautify_variables.sh

echo "所有变量名美化工作已完成"