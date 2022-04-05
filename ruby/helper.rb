# frozen_string_literal: true

# divisible method factory
module Divisible
  module_function

  def by(divisible_number)
    lambda do |input_number|
      (input_number % divisible_number).zero?
    end
  end
end

# custom loggings
module Logging
  module_function

  def user_log_int(message)
    print message
    gets.to_i
  end

  def user_log_string(message)
    print message
    gets.to_s
  end
end
