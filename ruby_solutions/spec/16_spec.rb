# frozen_string_literal: true

require_relative "../src/16.rb"

describe "sum_digits_pow" do
  it "should return 26 when the input is 15" do
    expect(sum_digits_pow(15)).to eq(26)
  end
end

describe "solution_16" do
  it "should do something" do
    expect(solution_16).to eq(1366)
  end
end
