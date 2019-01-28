# frozen_string_literal: true

require_relative "../src/01.rb"

describe "day_01" do
  it "return the sum of numbers under n divisible by 3 or 5" do
    expect(day_01(10)).to eq(23)
  end
end
