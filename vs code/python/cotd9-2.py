#code to find all the possible flags and print them

def get_possible_flags(chars_by_position):
    def build_flags(current, pos):
        if pos >= len(chars_by_position):
            if current.startswith("cotd{") and current.endswith("}"):
                flags.append(current)
            return
        
        for char in chars_by_position[pos]:
            build_flags(current + char, pos + 1)

    flags = []
    build_flags("", 0)
    return flags

# Create dictionary of possible chars at each position from the output
chars_by_position = {
    0: ['c'],
    1: ['o'],
    2: ['t'],
    3: ['d'],
    4: ['{'],
    5: ['s', 'n'],
    6: ['o'],
    7: ['m', 'k'],
    8: ['e'],
    9: ['}', '_'],
    # ... continue for all positions
}

# Build and print all possible flags
possible_flags = get_possible_flags(chars_by_position)
for flag in possible_flags:
    print(flag)