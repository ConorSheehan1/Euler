grid = []
with open("input.txt") as f:
    for line in f.readlines():
        temp = list(map(int, line.replace("\n", "").split(" ")))
        grid.append(temp)

m = 0


def horizontal_max(grid):
    # m = 0
    global m
    for row in grid:
        for i in range(len(row)-4):
            product = 1
            for j in range(i, i+4):
                product *= row[j]
                if product > m:
                    m = product
    # return m


def vertical_max(grid):
    # m = 0
    global m
    for col in zip(*grid):
        for i in range(len(col)-4):
            product = 1
            for j in range(i, i+4):
                product *= col[j]
                if product > m:
                    m = product
    # return m


def diagonal_right_max(grid):
    global m
    slant = [0, 1, 2, 3]
    for i in range(len(grid)-3):
        for j in range(len(grid)-3):
            product = 1
            for val in slant:
                product *= grid[val+i][val+j]
                # print(grid[val+i][val+j], " ", end="")
                if product > m:
                    m = product

            # print("*= ", product, end="")
            # print("\n")


def diagonal_left_max(grid):
    global m
    slant = [0, 1, 2, 3]
    for i in range(3, len(grid)):
        for j in range(len(grid)-3):
            product = 1
            for val in slant:
                # print(i-val, val+j)
                # print(grid[i-val][val+j], " ", end="")
                product *= grid[i-val][val+j]
                if product > m:
                    m = product
            # print("*= ", product, end="")
            # print("\n")


# print("left")
diagonal_left_max(grid)

# print("right")
diagonal_right_max(grid)
horizontal_max(grid)
vertical_max(grid)
print(m)

# 51267216 wrong
# 70600674
