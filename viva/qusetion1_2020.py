#write a progran in python to find the armastrogn numbers

def is_armstrong_number(num):
    # Convert the number to string to easily iterate over digits
    str_num = str(num)
    # Get the number of digits
    num_digits = len(str_num)
    
    # Calculate the sum of the digits raised to the power of num_digits
    sum_of_powers = sum(int(digit) ** num_digits for digit in str_num)
    
    # Check if the sum of powers is equal to the original number
    return sum_of_powers == num

# Input from the user
number = int(input("Enter a number: "))

# Check if the number is an Armstrong number
if is_armstrong_number(number):
    print(f"{number} is an Armstrong number.")
else:
    print(f"{number} is not an Armstrong number.")