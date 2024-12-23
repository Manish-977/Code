#write a program to create, append ,and remove lists in python.
def create_list():
    """Create a new empty list."""
    return []

def append_to_list(my_list, item):
    """Append an item to the list."""
    my_list.append(item)
    print(f"'{item}' has been added to the list.")

def remove_from_list(my_list, item):
    """Remove an item from the list if it exists."""
    try:
        my_list.remove(item)
        print(f"'{item}' has been removed from the list.")
    except ValueError:
        print(f"'{item}' is not in the list.")

def display_list(my_list):
    """Display the current items in the list."""
    print("Current list:", my_list)

def main():
    my_list = create_list()
    
    while True:
        print("\nOptions:")
        print("1. Append to list")
        print("2. Remove from list")
        print("3. Display list")
        print("4. Exit")
        
        choice = input("Choose an option (1-4): ")
        
        if choice == '1':
            item = input("Enter an item to append: ")
            append_to_list(my_list, item)
        elif choice == '2':
            item = input("Enter an item to remove: ")
            remove_from_list(my_list, item)
        elif choice == '3':
            display_list(my_list)
        elif choice == '4':
            print("Exiting the program.")
            break
        else:
            print("Invalid choice. Please choose a valid option.")

if __name__ == "__main__":
    main()