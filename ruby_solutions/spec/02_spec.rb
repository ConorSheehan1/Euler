# frozen_string_literal: true

require_relative "../src/02.rb"

describe "even_fib" do
  it "should return even fibonacci numbers under 4 million" do
    even_fib_arr = [
      0, 2, 8, 34, 144, 610, 2584, 10_946,
      46_368, 196_418, 832_040, 3_524_578
    ]
    expect(even_fib).to eq(even_fib_arr)
  end
end
describe "solution_02" do
  it "should return 4613732" do
    expect(solution_02).to eq(4_613_732)
  end
end
