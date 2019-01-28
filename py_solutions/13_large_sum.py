with open("input/13.txt") as f:
    numbers = list(map(lambda x: x.replace("\n", ""), f.readlines()))
    large_sum = sum(map(int, numbers))
    print(str(large_sum)[:10])
