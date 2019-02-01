# frozen_string_literal: true

def sum_digits_pow(number)
  digits = (2**number).to_s
  digits.scan(/\d/).map(&:to_i).sum
end

def solution_16
  sum_digits_pow(1000)
end
