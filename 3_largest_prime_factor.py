# def isPrime(n):
#     return not any(n % i == 0 for i in range(2, n//2 + 1))


# def isPrime(n):
#     for i in range(2, n//2 + 1):
#         if n % i == 0:
#             return False
#     return True

# for i in range(2, 600851475143//2 + 1):
#     current = 0
#     if 600851475143 % i == 0 and isPrime(i):
#         print(i)
#         current = i
# print(current)

prime_list = [2]
for i in range(2, 600851475143//2 + 1):
    current = 0
    if 600851475143 % i == 0:
        if all(i % val != 0 for val in prime_list):
            prime_list.append(i)
            print(i)
            current = i
print(current)


# def isPrime(n):
#     if all(n % i != 0 for i in prime_list):
#         prime_list.append(i)







