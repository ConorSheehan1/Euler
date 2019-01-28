def min_divisible(top):
    start = top
    while True:
        if any(start % i != 0 for i in range(2, top)):
            start += 1
            continue
        print(start)
        break


min_divisible(20)