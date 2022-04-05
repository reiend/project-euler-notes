# frozen_string_literal: true

require_relative '../../helper'

# problem/situation
# If we list all the natural numbers below 10 that are multiples of 3 or 5,
# we get 3, 5, 6 and 9. The sum of these multiples is 23.
# Find the sum of all the multiples of 3 or 5 below 1000.

def multiples
  multiples_list = []

  by_three = Divisible.by(3)
  by_five = Divisible.by(5)

  (0..1000).each { |x| multiples_list.push(x) if by_three.call(x) || by_five.call(x) }

  multiples_list.sum
end

puts multiples
