#!/bin/bash

# 批量美化99_unmatched_functions.c文件中的变量名和函数名
# 这个脚本会替换十六进制后缀的变量名为语义化名称

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份原文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 美化XML解析器变量名
sed -i 's/XmlParserMinInclusiveNormalizer0c490/XmlParserMinInclusiveNormalizer/g' "$FILE_PATH"
sed -i 's/XmlParserMinExclusiveNormalizer0c4b0/XmlParserMinExclusiveNormalizer/g' "$FILE_PATH"
sed -i 's/XmlParserPrecisionNormalizer0c4d0/XmlParserPrecisionNormalizer/g' "$FILE_PATH"
sed -i 's/XmlParserScaleNormalizer0c4f0/XmlParserScaleNormalizer/g' "$FILE_PATH"
sed -i 's/XmlParserEncodingNormalizer0c510/XmlParserEncodingNormalizer/g' "$FILE_PATH"
sed -i 's/XmlParserLanguageNormalizer0c530/XmlParserLanguageNormalizer/g' "$FILE_PATH"
sed -i 's/XmlParserLengthNormalizer0c550/XmlParserLengthNormalizer/g' "$FILE_PATH"
sed -i 's/XmlParserMinLengthNormalizer0c570/XmlParserMinLengthNormalizer/g' "$FILE_PATH"
sed -i 's/XmlParserMaxLengthNormalizer0c590/XmlParserMaxLengthNormalizer/g' "$FILE_PATH"
sed -i 's/XmlParserEnumerationNormalizer0c5b0/XmlParserEnumerationNormalizer/g' "$FILE_PATH"

# 美化XML解析器安全相关变量
sed -i 's/XmlParserInputValidator05d38/XmlParserInputValidator/g' "$FILE_PATH"
sed -i 's/XmlParserSchemaValidator05d50/XmlParserSchemaValidator/g' "$FILE_PATH"
sed -i 's/XmlParserSecurityScanner05d60/XmlParserSecurityScanner/g' "$FILE_PATH"
sed -i 's/XmlParserContentFilter05d78/XmlParserContentFilter/g' "$FILE_PATH"
sed -i 's/XmlParserXssDetector05d90/XmlParserXssDetector/g' "$FILE_PATH"
sed -i 's/XmlParserSqlInjectionDetector05da0/XmlParserSqlInjectionDetector/g' "$FILE_PATH"
sed -i 's/XmlParserCommandInjectionDetector05db8/XmlParserCommandInjectionDetector/g' "$FILE_PATH"
sed -i 's/XmlParserPathTraversalDetector05dd8/XmlParserPathTraversalDetector/g' "$FILE_PATH"
sed -i 's/XmlParserSecurityPolicyEnforcer05df0/XmlParserSecurityPolicyEnforcer/g' "$FILE_PATH"
sed -i 's/XmlParserAccessController05e08/XmlParserAccessController/g' "$FILE_PATH"
sed -i 's/XmlParserAuthenticationManager05e28/XmlParserAuthenticationManager/g' "$FILE_PATH"
sed -i 's/XmlParserSecurityEventLogger05e80/XmlParserSecurityEventLogger/g' "$FILE_PATH"
sed -i 's/XmlParserThreatIntelligenceAnalyzer05e98/XmlParserThreatIntelligenceAnalyzer/g' "$FILE_PATH"
sed -i 's/XmlParserBehavioralAnalyzer05eb0/XmlParserBehavioralAnalyzer/g' "$FILE_PATH"
sed -i 's/XmlParserAnomalyDetector05ec8/XmlParserAnomalyDetector/g' "$FILE_PATH"
sed -i 's/XmlParserSignatureScanner05ee8/XmlParserSignatureScanner/g' "$FILE_PATH"
sed -i 's/XmlParserHeuristicAnalyzer05f00/XmlParserHeuristicAnalyzer/g' "$FILE_PATH"
sed -i 's/XmlParserMachineLearningEngine05f10/XmlParserMachineLearningEngine/g' "$FILE_PATH"

# 美化更多XML解析器变量
sed -i 's/XmlParserPatternRecognizer0c310/XmlParserPatternRecognizer/g' "$FILE_PATH"
sed -i 's/XmlParserDataExtractor0c330/XmlParserDataExtractor/g' "$FILE_PATH"
sed -i 's/XmlParserContentAnalyzer0c350/XmlParserContentAnalyzer/g' "$FILE_PATH"
sed -i 's/XmlParserSyntaxChecker0c370/XmlParserSyntaxChecker/g' "$FILE_PATH"
sed -i 's/XmlParserSemanticAnalyzer0c390/XmlParserSemanticAnalyzer/g' "$FILE_PATH"
sed -i 's/XmlParserStructureValidator0c3b0/XmlParserStructureValidator/g' "$FILE_PATH"
sed -i 's/XmlParserTypeChecker0c3d0/XmlParserTypeChecker/g' "$FILE_PATH"
sed -i 's/XmlParserValueValidator0c3f0/XmlParserValueValidator/g' "$FILE_PATH"
sed -i 's/XmlParserConstraintChecker0c410/XmlParserConstraintChecker/g' "$FILE_PATH"
sed -i 's/XmlParserIntegrityValidator0c430/XmlParserIntegrityValidator/g' "$FILE_PATH"
sed -i 's/XmlParserConsistencyChecker0c450/XmlParserConsistencyChecker/g' "$FILE_PATH"
sed -i 's/XmlParserCompletenessValidator0c470/XmlParserCompletenessValidator/g' "$FILE_PATH"

echo "变量名美化完成"