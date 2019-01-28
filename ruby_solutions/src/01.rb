# frozen_string_literal: true

# @param [Integer] n
def day_01(n)
  to_sum = (1..(n-1)).select do |number|
    number % 3 == 0 || number % 5 == 0 
  end
  to_sum.sum
end

def solution
  day_01(1000)
end
