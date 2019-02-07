def isPrime(n):
    return not any(n % i == 0 for i in range(2, n//2 + 1))


def factors_of(n):
    factor_range = range(2, int(n**0.5) + 1)
    return [i for i in factor_range if n % i == 0]


# get factors, then find the largest one that's a prime
factors = factors_of(600851475143)
print(factors)
for val in factors[::-1]:
    if isPrime(val):
        print(val)
        break
