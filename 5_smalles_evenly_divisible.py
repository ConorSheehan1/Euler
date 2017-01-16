def min_divisible(top):
    start = top
    while True:
        if any(start % i == 0 for i in range(2, top)):
            print(start)
            break
        start += 1

min_divisible(10)