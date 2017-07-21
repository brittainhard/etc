max_loop = 1000
multiples_sum = 0

for x in range(max_loop):
    if not x % 5 or not x % 3:
        multiples_sum += x

print(multiples_sum)

