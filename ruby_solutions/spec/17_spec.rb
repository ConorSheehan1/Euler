# frozen_string_literal: true

require_relative "../src/17.rb"

describe "int_to_word" do
  it "should return integers as words" do
    expect(int_to_word(25)).to eq("twenty five")
  end
  it "should use british style numbers" do
    expect(int_to_word(125)).to eq("one hundred and twenty five")
    expect(int_to_word(342)).to eq("three hundred and forty two")
  end
end

describe "word_length" do
  it "should ignore spaces and hyphens" do
    expect(word_length("three hundred and forty-two")).to eq(23)
    expect(word_length("one hundred and fifteen")).to eq(20)
  end
end

describe "int_to_word_letter_count" do
  it "should count the number of letters in the word version of each number up to limit" do
    expect(int_to_word_letter_count(5)).to eq(19)
  end
end

describe "solution_17" do
  it "should do something" do
    expect(solution_17).to eq(21_124)
  end
end
