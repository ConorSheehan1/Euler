def product(arr):
    accum = 1
    for val in arr:
        accum *= val
    print(arr)
    return accum


def horizontal_max(window, arr):
    curmax = product(arr[0][:window])
    for i in range(len(arr)):
        for j in range(len(arr[i])+1-window):
            newmax = product(arr[i][j:j+window])
            if newmax > curmax:
                curmax = newmax
    return curmax


def vertical_max(window, arr):
    curmax = product([arr[i][0] for i in range(window)])
    for i in range(len(arr)+1-window):
        for j in range(len(arr[i])):
            newmax = product([arr[x][j] for x in range(i, i+window)])
            if newmax>curmax:
                curmax=newmax
    return curmax


def diagonal_max(window, arr):
    rows = list(range(window))
    cols = list(range(window))

    curmax = product([arr[i][i] for i in rows])

    while cols[-1] < len(arr):
        # move diagonal window to right before moving down
        # reset rows every time you change column
        currows = rows
        while currows[-1] < len(arr[0]):
            # get the nth value of both cols and rows and add to list, then get product
            newmax = product([arr[cols[i]][currows[i]] for i in range(window)])
            if newmax > curmax:
                curmax = newmax
            currows = list(map(lambda n: n+1, currows))
        cols = list(map(lambda n: n+1, cols))

    return curmax


user = input("grid of nums\n")
next ="x"
while next != "":
    next = input()
    user += "\n"+next

#split text into sublists and cast to int
arr = list(map(lambda n: list(map(int, n.split(" "))), user[:-1].split("\n")))

print("grid parsed as", arr)

w=2
print("horizontal", horizontal_max(w, arr))
print("vertical", vertical_max(w, arr))
print("diagonal", diagonal_max(w, arr))