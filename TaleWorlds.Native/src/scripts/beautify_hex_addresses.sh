#!/bin/bash

# 美化06_utilities.c文件中的十六进制地址
# 将剩余的十六进制地址替换为语义化常量

# 创建常量定义
cat > /tmp/hex_constants.h << 'EOF'
// 新增的语义化常量定义
#define ExceptionHandlerContextOffset70 0x70
#define ExceptionHandlerContextOffset78 0x78
#define ExceptionHandlerContextOffset80 0x80
#define ExceptionHandlerContextOffset90 0x90
#define ExceptionHandlerContextOffset98 0x98
#define ExceptionHandlerContextOffsetA8 0xa8
#define ExceptionHandlerContextOffsetB0 0xb0
#define ExceptionHandlerContextOffsetC8 0xc8
#define ExceptionHandlerContextOffsetD8 0xd8
#define ExceptionHandlerContextOffsetE8 0xe8
#define ExceptionHandlerContextOffsetF8 0xf8
#define ExceptionHandlerContextOffset108 0x108
#define ExceptionHandlerContextOffset118 0x118
#define ExceptionHandlerContextOffset128 0x128
#define ExceptionHandlerContextOffset138 0x138
#define ExceptionHandlerContextOffset148 0x148
#define ExceptionHandlerContextOffset158 0x158
#define ExceptionHandlerContextOffset168 0x168
#define ExceptionHandlerContextOffset178 0x178
#define ExceptionHandlerContextOffset188 0x188
#define ExceptionHandlerContextOffset198 0x198
#define ExceptionHandlerContextOffset1A8 0x1a8
#define ExceptionHandlerContextOffset1B8 0x1b8
#define ExceptionHandlerContextOffset1C8 0x1c8
#define ExceptionHandlerContextOffset1D8 0x1d8
#define ExceptionHandlerContextOffset1E8 0x1e8
#define ExceptionHandlerContextOffset1F8 0x1f8

#define SystemContextOffset200 0x200
#define SystemContextOffset210 0x210
#define SystemContextOffset220 0x220
#define SystemContextOffset230 0x230
#define SystemContextOffset240 0x240
#define SystemContextOffset250 0x250
#define SystemContextOffset260 0x260
#define SystemContextOffset270 0x270
#define SystemContextOffset280 0x280
#define SystemContextOffset290 0x290
#define SystemContextOffset2A0 0x2a0
#define SystemContextOffset2B0 0x2b0
#define SystemContextOffset2C0 0x2c0
#define SystemContextOffset2D0 0x2d0
#define SystemContextOffset2E0 0x2e0
#define SystemContextOffset2F0 0x2f0

#define ResourceContextOffset300 0x300
#define ResourceContextOffset310 0x310
#define ResourceContextOffset320 0x320
#define ResourceContextOffset330 0x330
#define ResourceContextOffset340 0x340
#define ResourceContextOffset350 0x350
#define ResourceContextOffset360 0x360
#define ResourceContextOffset370 0x370
#define ResourceContextOffset380 0x380
#define ResourceContextOffset390 0x390
#define ResourceContextOffset3A0 0x3a0
#define ResourceContextOffset3B0 0x3b0
#define ResourceContextOffset3C0 0x3c0
#define ResourceContextOffset3D0 0x3d0
#define ResourceContextOffset3E0 0x3e0
#define ResourceContextOffset3F0 0x3f0

#define DataBufferOffset10 0x10
#define DataBufferOffset18 0x18
#define DataBufferOffset20 0x20
#define DataBufferOffset28 0x28
#define DataBufferOffset30 0x30
#define DataBufferOffset38 0x38
#define DataBufferOffset40 0x40
#define DataBufferOffset48 0x48
#define DataBufferOffset50 0x50
#define DataBufferOffset58 0x58
#define DataBufferOffset60 0x60
#define DataBufferOffset68 0x68
#define DataBufferOffset70 0x70
#define DataBufferOffset78 0x78
#define DataBufferOffset80 0x80
#define DataBufferOffset88 0x88
#define DataBufferOffset90 0x90
#define DataBufferOffset98 0x98
#define DataBufferOffsetA0 0xa0
#define DataBufferOffsetA8 0xa8
#define DataBufferOffsetB0 0xb0
#define DataBufferOffsetB8 0xb8
#define DataBufferOffsetC0 0xc0
#define DataBufferOffsetC8 0xc8
#define DataBufferOffsetD0 0xd0
#define DataBufferOffsetD8 0xd8
#define DataBufferOffsetE0 0xe0
#define DataBufferOffsetE8 0xe8
#define DataBufferOffsetF0 0xf0
#define DataBufferOffsetF8 0xf8

#define MemoryRegionOffset1000 0x1000
#define MemoryRegionOffset2000 0x2000
#define MemoryRegionOffset3000 0x3000
#define MemoryRegionOffset4000 0x4000
#define MemoryRegionOffset5000 0x5000

#define ValidationOffset100 0x100
#define ValidationOffset200 0x200
#define ValidationOffset300 0x300
#define ValidationOffset400 0x400
#define ValidationOffset500 0x500

#define StackFrameOffset10 0x10
#define StackFrameOffset20 0x20
#define StackFrameOffset30 0x30
#define StackFrameOffset40 0x40
#define StackFrameOffset50 0x50

#define ArrayElementOffset10 0x10
#define ArrayElementOffset20 0x20
#define ArrayElementOffset30 0x30
#define ArrayElementOffset40 0x40
EOF

# 备份原文件
cp TaleWorlds.Native/src/06_utilities.c TaleWorlds.Native/src/06_utilities.c.backup

# 应用常量替换
sed -i 's/0x70/ExceptionHandlerContextOffset70/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0x78/ExceptionHandlerContextOffset78/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0x80/ExceptionHandlerContextOffset80/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0x90/ExceptionHandlerContextOffset90/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0x98/ExceptionHandlerContextOffset98/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0xa8/ExceptionHandlerContextOffsetA8/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0xb0/ExceptionHandlerContextOffsetB0/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0xc8/ExceptionHandlerContextOffsetC8/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0xd8/ExceptionHandlerContextOffsetD8/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0xe8/ExceptionHandlerContextOffsetE8/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/0xf8/ExceptionHandlerContextOffsetF8/g' TaleWorlds.Native/src/06_utilities.c

echo "十六进制地址美化完成"