def is_pal(n):
    s = str(n)
    return s == s[::-1]

a = 100
b = 100

while True:
    product = a*b
    if is_pal(product):
        print(product)


