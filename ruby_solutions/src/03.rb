# frozen_string_literal: true

# @param [Integer] num
# @return [Array]
def prime_factors(num)
  factors_of(num).select do |factor|
    prime?(factor)
  end
end


# @param [Integer] num
# @return [Array]
def factors_of(num)
  (2..num**0.5).select do |factor|
    num % factor == 0
  end
end


# @param [Integer] num
# @return [Boolean]
def prime?(max)
  # primes(num).include?(num)
  primes = []
  (2..max).each do |num|
    primes.each do |prime|
      return false if max % prime == 0
    end
    primes << num
  end
  return true
end


# @param [Integer] max
# @return [Array]
def primes(max)
  primes = []
  (2..max).each do |num|
    not_prime = primes.any? do |prime|
      num % prime == 0
    end
    primes << num unless not_prime
  end
  primes
end


def solution_03
  # factors are symmetric so no need to go above sqrt
  prime_factors(600851475143).max
end
