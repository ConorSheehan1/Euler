# frozen_string_literal: true

require_relative "../src/03.rb"

describe "solution_03" do
  describe "primes" do
    it "should return primes up to n" do
      expect(primes(20)).to eq([2,3,5,7,11,13,17,19])
    end
  end
  describe "prime_factors" do
    it "should return prime factors of n" do
      expect(prime_factors(13195)).to eq([5,7,13,29])
    end
  end
  it "should do something" do
    expect(solution_03).to eq(6857)
  end
end
