#write a program which takes a list and return a 
# list with the elements "shifted left by one postion
#  " so that [1,2,3]yields[2,3,4] in python


def shift_left(lst):
    if not lst:  # Check if the list is empty
        return lst
    return lst[1:] + [lst[0]]  # Shift left by slicing and appending the first element

# Example usage:
original_list = [1, 2, 3]
shifted_list = shift_left(original_list)
print(shifted_list)  # Output: [2, 3, 1]