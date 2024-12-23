def shift_left(lst):
    if not lst:  # Check if the list is empty
        return lst
    return lst[1:] + [lst[0]]  # Shift left by slicing and appending the first element

# Example usage:
original_list = [1, 2, 3]
shifted_list = shift_left(original_list)
print(shifted_list)  # Output: [2, 3, 1]