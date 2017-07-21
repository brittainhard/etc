max_sequence = 4000000
sequence_sum = 0
next_number = 0
current = 1
previous = 0

while current <= max_sequence:
    next_number = previous + current
    if not next_number % 2:
        sequence_sum += next_number
    previous = current
    current = next_number

print(sequence_sum)
