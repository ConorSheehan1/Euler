def fib():
    a = 1
    b = 2
    l = []
    while a < 4000000:
        if a %2==0:
            l.append(a)
        a, b = b, a+b
    return l

print(sum(fib()))