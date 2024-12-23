# Design an interface to implement simple calculator. It include addition, subtraction,Multiplication and division of any two numbers. in python


class SimpleCalculator:
    def add(self, a, b):
        """Return the sum of a and b."""
        return a + b

    def subtract(self, a, b):
        """Return the difference of a and b."""
        return a - b

    def multiply(self, a, b):
        """Return the product of a and b."""
        return a * b

    def divide(self, a, b):
        """Return the quotient of a and b. Raises an error if b is zero."""
        if b == 0:
            raise ValueError("Cannot divide by zero.")
        return a / b

def main():
    calculator = SimpleCalculator()
    
    print("Simple Calculator")
    print("Select operation:")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")

    while True:
        choice = input("Enter choice (1/2/3/4) or 'q' to quit: ")

        if choice == 'q':
            print("Exiting the calculator. Goodbye!")
            break

        if choice in ['1', '2', '3', '4']:
            try:
                num1 = float(input("Enter first number: "))
                num2 = float(input("Enter second number: "))

                if choice == '1':
                    result = calculator.add(num1, num2)
                    print(f"{num1} + {num2} = {result}")
                elif choice == '2':
                    result = calculator.subtract(num1, num2)
                    print(f"{num1} - {num2} = {result}")
                elif choice == '3':
                    result = calculator.multiply(num1, num2)
                    print(f"{num1} * {num2} = {result}")
                elif choice == '4':
                    result = calculator.divide(num1, num2)
                    print(f"{num1} / {num2} = {result}")

            except ValueError as e:
                print(f"Error: {e}")
        else:
            print("Invalid input. Please enter a valid choice.")

if __name__ == "__main__":
    main()