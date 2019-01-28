def is_pal(n):
    s = str(n)
    return s == s[::-1]

pals = []
for a in range(999, 100, -1):
    for b in range(999, 100, -1):
        # print(a, b)
        product = a*b
        if is_pal(product):
            pals.append(product)
print(max(pals))
