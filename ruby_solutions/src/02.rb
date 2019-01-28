# frozen_string_literal: true

require "byebug"

def even_fib
  fib = [0, 1]
  loop do
    next_fib = fib.last(2).sum
    break if next_fib > 4_000_000

    fib << next_fib
  end
  fib.select(&:even?)
end

def solution_02
  even_fib.sum
end
