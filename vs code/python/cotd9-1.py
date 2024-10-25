def circular_left_shift(value, shift):
    shift = shift % 8
    return ((value << shift) | (value >> (8 - shift))) & 0xFF

# The encoded flag
hex_string = "1bb73a8c7bb9b7d6ac7dbd335f3a3465bed88616720b63e856c99bd7c6bd636c8583cd9564d7"
hex_pairs = [hex_string[i:i+2] for i in range(0, len(hex_string), 2)]

print("Checking each position and shift:")
for position in range(len(hex_pairs)):
    decimal = int(hex_pairs[position], 16)
    print(f"\nPosition {position} (hex: {hex_pairs[position]}):")
    for shift in range(8):
        shifted = circular_left_shift(decimal, shift)
        if 97 <= shifted <= 122 or shifted in [95, 123, 125]:  # a-z, _, {, }
            print(f"Shift {shift}: {chr(shifted)}")