# frozen_string_literal: true

require "json"

def numbers_to_name
  json_path = File.join(__dir__, "..", "..", "input", "numbers_to_words.json")
  json_hash = JSON.parse(File.read(File.absolute_path(json_path)))
  # convert json keys to integers
  Hash[json_hash.keys.map(&:to_i).zip(json_hash.values)]
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
