# frozen_string_literal: true

require_relative "../src/01.rb"

describe "day_01" do
  it "returns the sum of numbers under n divisible by 3 or 5" do
    expect(day_01(10)).to eq(23)
  end
end

describe "solution_01" do
  # pretty useless spec, just here to make sure that
  # if I change things later to run faster, the result is the same
  it "retuns 233168" do
    expect(solution_01).to eq(233_168)
  end
end
