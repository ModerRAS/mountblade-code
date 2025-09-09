#!/bin/bash

# Ž 99_unmatched_functions.c -„ØÏ
# ˆù+ØÏŒ@èØÏ„ýp

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# ŽØÏ
sed -i 's/puStack_2d8/DataPointer2D8/g' "$INPUT_FILE"
sed -i 's/uStack_240/BufferValue240/g' "$INPUT_FILE"
sed -i 's/auStack_d0/EncodingBufferD0/g' "$INPUT_FILE"
sed -i 's/puStack_110/Pointer110/g' "$INPUT_FILE"
sed -i 's/lStack_138/LongValue138/g' "$INPUT_FILE"
sed -i 's/pStackUnsignedValue130/UnsignedValue130/g' "$INPUT_FILE"
sed -i 's/puStack_128/Pointer128/g' "$INPUT_FILE"
sed -i 's/puStack_120/Pointer120/g' "$INPUT_FILE"
sed -i 's/lStack_118/LongValue118/g' "$INPUT_FILE"
sed -i 's/lStack_108/LongValue108/g' "$INPUT_FILE"
sed -i 's/puStack_100/Pointer100/g' "$INPUT_FILE"
sed -i 's/pULongStackPointer8/ULongPointer8/g' "$INPUT_FILE"
sed -i 's/puStack_f0/PointerF0/g' "$INPUT_FILE"
sed -i 's/lStack_e8/LongValueE8/g' "$INPUT_FILE"
sed -i 's/puStack_e0/PointerE0/g' "$INPUT_FILE"
sed -i 's/cVar6/CharVar6/g' "$INPUT_FILE"
sed -i 's/lStack_250/LongValue250/g' "$INPUT_FILE"
sed -i 's/uStack_1b0/BufferValue1B0/g' "$INPUT_FILE"
sed -i 's/lStack_1b8/LongValue1B8/g' "$INPUT_FILE"
sed -i 's/puStack_270/Pointer270/g' "$INPUT_FILE"
sed -i 's/lStack_200/LongValue200/g' "$INPUT_FILE"
sed -i 's/uStack_228/BufferValue228/g' "$INPUT_FILE"
sed -i 's/uStack_230/BufferValue230/g' "$INPUT_FILE"
sed -i 's/uStack_238/BufferValue238/g' "$INPUT_FILE"
sed -i 's/uStack_240/BufferValue240/g' "$INPUT_FILE"
sed -i 's/auStack_c8/EncodingBufferC8/g' "$INPUT_FILE"
sed -i 's/lStack_218/LongValue218/g' "$INPUT_FILE"

echo "ØÏŽŒ"