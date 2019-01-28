def isPrime(n):
    return not any(n % i == 0 for i in range(2, n//2 + 1))


# get factors, then find the largest one that's a prime
factors = [i for i in range(
    2, int(600851475143**0.5) + 1) if 600851475143 % i == 0]
print(factors)
for val in factors[::-1]:
    if isPrime(val):
        print(val)
        break
