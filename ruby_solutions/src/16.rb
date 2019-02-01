# frozen_string_literal: true

def sum_digits_pow(n)
  digits = "#{2 ** n}"
  digits.scan(/\d/).map(&:to_i).sum
end

def solution_16
  sum_digits_pow(1000)
end
