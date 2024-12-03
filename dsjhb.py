def read_segments():
  return [input() for_in range(3)]

def get_digit_mapping():
  digit_mapping = {}
  for digit in range(10):
    digit_representation = [
      SEGMENTS[i][digit*3+3] for i in range(3)
    ]
    digit_mapping[digit] = digit_representation
  return digit_mapping
def find_possible_number(led_input, digit_mapping):
  num_digits = len(led_input[0]) //3
  total_sum = 0
  all_valid = True
  
  for digit_index in range(num_digits):
    digit_segments = [
      led_input[i][digit_index*3:digit_index*3+3] for i in range(3)
    ]

    possible_digit = []
    for digit, original_segment in digit_mapping.items():
      mimatch_count = sum(
        1 for i in range(3) for j in range(3)
        ifdigit_segment[i][j]!= original_segment[i][j]
           
      )
      if mismatch_count <=1:
        possible_digit.append(digit)

        if not possible_digit:
          return "Invalid"
        
        total_sum +=sum(
          num*(10**(num_digits-digit_index-1))
          for num in possible_digit
        )


        return total_sum
      
      SEGMENTS = read_segments()
      DIGIT_MAPPING = get_digit_mapping()
      LED_INPUT = read_segments()

      result = find_possible_number(LED_INPUT, DIGIT_MAPPING)
      print(result)
  
  