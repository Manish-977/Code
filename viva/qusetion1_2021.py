#Define a Recursive Fibonnaci Function. Write a python program which accepts a valuse for N (where N>0) as input and pass this value to the function. Display suitable error message if the conditin for input value is not followed. in python
def fibonacci(n):
    """Recursive function to return the nth Fibonacci number."""
    if n <= 0:
        raise ValueError("Input must be a positive integer.")
    elif n == 1:
        return 0  # The first Fibonacci number
    elif n == 2:
        return 1  # The second Fibonacci number
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

def main():
    try:
        # Accept input from the user
        n = int(input("Enter a positive integer (N > 0): "))
        
        # Check if the input is greater than 0
        if n <= 0:
            print("Error: Please enter a value greater than 0.")
            return
        
        # Calculate the Fibonacci number
        result = fibonacci(n)
        print(f"The {n}th Fibonacci number is: {result}")
    
    except ValueError as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    main()