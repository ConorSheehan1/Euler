# frozen_string_literal: true

def numbers_to_name
  {
    1_000_000 => "million",
    1000 => "thousand",
    100 => "hundred",
    90 => "ninety",
    80 => "eighty",
    70 => "seventy",
    60 => "sixty",
    50 => "fifty",
    40 => "forty",
    30 => "thirty",
    20 => "twenty",
    19 => "nineteen",
    18 => "eighteen",
    17 => "seventeen",
    16 => "sixteen",
    15 => "fifteen",
    14 => "fourteen",
    13 => "thirteen",
    12 => "twelve",
    11 => "eleven",
    10 => "ten",
    9 => "nine",
    8 => "eight",
    7 => "seven",
    6 => "six",
    5 => "five",
    4 => "four",
    3 => "three",
    2 => "two",
    1 => "one"
  }
end

# @param [Integer] int
def int_to_word(int)
  str = ""
  numbers_to_name.each do |num, name|
    return str if int == 0
      
    return str + name.to_s if int.to_s.length == 1 && int / num > 0
      
    if int < 100 && int / num > 0
      return str + name.to_s if int % num == 0

      return str + "#{name} " + int_to_word(int % num)
    elsif int / num > 0
      # patch for british style "one hundred and nth"
      name += " and" if (name == "hundred") && (int % num > 0)
      return str + int_to_word(int / num) + " #{name} " + int_to_word(int % num)
    end
  end
end

def word_length(word)
  word.scan(/\w/).length
end

def int_to_word_letter_count(limit)
  (1..limit).map do |number|
    word_length(int_to_word(number))
  end.sum
end

def solution_17
  # 18451 incorrect
  # 21151 incorrect
  int_to_word_letter_count(1000)
end
