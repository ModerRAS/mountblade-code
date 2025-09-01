#!/bin/bash

# 批量替换06_utilities.c中的UNK_变量和DAT_变量
# 根据上下文推断变量名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换DAT_变量为语义化名称
sed -i 's/DAT_180bf98d8/SystemMemoryValidationFlag/g' 06_utilities.c
sed -i 's/DAT_180bf98e0/SystemSecurityContextFlag/g' 06_utilities.c
sed -i 's/DAT_180bf98e8/SystemMemoryProtectionFlag/g' 06_utilities.c
sed -i 's/DAT_180bf9930/SystemMemoryEncryptionFlag/g' 06_utilities.c
sed -i 's/DAT_180bf9938/SystemMemoryIntegrityFlag/g' 06_utilities.c
sed -i 's/DAT_180bf9940/SystemIsolationFlag/g' 06_utilities.c
sed -i 's/DAT_180bf9948/SystemIsolationContext/g' 06_utilities.c
sed -i 's/DAT_180bf9990/SystemIsolationHandle/g' 06_utilities.c
sed -i 's/DAT_180bf9998/SystemIsolationConfig/g' 06_utilities.c
sed -i 's/DAT_180bf99a0/SystemIsolationStatus/g' 06_utilities.c
sed -i 's/DAT_180bf99a8/SystemMappingFlag/g' 06_utilities.c
sed -i 's/DAT_180bf99f0/SystemMappingHandle/g' 06_utilities.c
sed -i 's/DAT_180bf99f8/SystemMappingConfig/g' 06_utilities.c
sed -i 's/DAT_180bf9a00/SystemMappingStatus/g' 06_utilities.c
sed -i 's/DAT_180bf9a08/SystemMappingData/g' 06_utilities.c
sed -i 's/DAT_180bfa230/SystemSegmentationFlag/g' 06_utilities.c
sed -i 's/DAT_180bfa238/SystemSegmentationContext/g' 06_utilities.c
sed -i 's/DAT_180bfa240/SystemSegmentationConfig/g' 06_utilities.c
sed -i 's/DAT_180bfa248/SystemSegmentationData/g' 06_utilities.c
sed -i 's/DAT_180bfa290/SystemFragmentationFlag/g' 06_utilities.c
sed -i 's/DAT_180bfa298/SystemFragmentationContext/g' 06_utilities.c
sed -i 's/DAT_180bfa2a0/SystemFragmentationConfig/g' 06_utilities.c

# 替换UNK_变量为语义化名称
sed -i 's/UNK_1801561e0/SystemUnknownData001/g' 06_utilities.c
sed -i 's/UNK_180156200/SystemUnknownData002/g' 06_utilities.c
sed -i 's/UNK_180156220/SystemUnknownData003/g' 06_utilities.c
sed -i 's/UNK_180156240/SystemUnknownData004/g' 06_utilities.c
sed -i 's/UNK_180156260/SystemUnknownData005/g' 06_utilities.c
sed -i 's/UNK_180156280/SystemUnknownData006/g' 06_utilities.c
sed -i 's/UNK_1801562c0/SystemUnknownData007/g' 06_utilities.c
sed -i 's/UNK_1801562e0/SystemUnknownData008/g' 06_utilities.c
sed -i 's/UNK_180a073f0/SystemUnknownData009/g' 06_utilities.c
sed -i 's/UNK_180a07400/SystemUnknownData010/g' 06_utilities.c

# 美化系统配置数据
sed -i 's/SystemConfigDataA/SystemConfigurationPrimary/g' 06_utilities.c
sed -i 's/SystemConfigDataB/SystemConfigurationSecondary/g' 06_utilities.c
sed -i 's/SystemConfigDataC/SystemConfigurationTertiary/g' 06_utilities.c
sed -i 's/SystemConfigDataD/SystemConfigurationQuaternary/g' 06_utilities.c
sed -i 's/SystemConfigDataE/SystemConfigurationQuinary/g' 06_utilities.c
sed -i 's/SystemConfigDataF/SystemConfigurationSenary/g' 06_utilities.c
sed -i 's/SystemConfigDataG/SystemConfigurationSeptenary/g' 06_utilities.c
sed -i 's/SystemConfigDataH/SystemConfigurationOctonary/g' 06_utilities.c
sed -i 's/SystemConfigDataJ/SystemConfigurationNonary/g' 06_utilities.c
sed -i 's/SystemConfigDataK/SystemConfigurationDenary/g' 06_utilities.c
sed -i 's/SystemConfigDataM/SystemConfigurationUndenary/g' 06_utilities.c
sed -i 's/SystemConfigDataN/SystemConfigurationDuodenary/g' 06_utilities.c
sed -i 's/SystemConfigDataO/SystemConfigurationTerdenary/g' 06_utilities.c
sed -i 's/SystemConfigDataP/SystemConfigurationQuattuordenary/g' 06_utilities.c

# 美化内存配置模板
sed -i 's/SystemMemoryConfigDataTemplateA/SystemMemoryConfigTemplateAlpha/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateB/SystemMemoryConfigTemplateBeta/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateC/SystemMemoryConfigTemplateGamma/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateD/SystemMemoryConfigTemplateDelta/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateE/SystemMemoryConfigTemplateEpsilon/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateF/SystemMemoryConfigTemplateZeta/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateG/SystemMemoryConfigTemplateEta/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateH/SystemMemoryConfigTemplateTheta/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateI/SystemMemoryConfigTemplateIota/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateJ/SystemMemoryConfigTemplateKappa/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateK/SystemMemoryConfigTemplateLambda/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateL/SystemMemoryConfigTemplateMu/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateM/SystemMemoryConfigTemplateNu/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateN/SystemMemoryConfigTemplateXi/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateO/SystemMemoryConfigTemplateOmicron/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateP/SystemMemoryConfigTemplatePi/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateQ/SystemMemoryConfigTemplateRho/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateR/SystemMemoryConfigTemplateSigma/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateS/SystemMemoryConfigTemplateTau/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateT/SystemMemoryConfigTemplateUpsilon/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateU/SystemMemoryConfigTemplatePhi/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateV/SystemMemoryConfigTemplateChi/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateW/SystemMemoryConfigTemplatePsi/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateX/SystemMemoryConfigTemplateOmega/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateY/SystemMemoryConfigTemplateAlpha2/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateZ/SystemMemoryConfigTemplateBeta2/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateAA/SystemMemoryConfigTemplateGamma2/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateBB/SystemMemoryConfigTemplateDelta2/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateCC/SystemMemoryConfigTemplateEpsilon2/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateFF/SystemMemoryConfigTemplateZeta2/g' 06_utilities.c
sed -i 's/SystemMemoryConfigDataTemplateGG/SystemMemoryConfigTemplateEta2/g' 06_utilities.c

echo "06_utilities.c变量美化完成！"