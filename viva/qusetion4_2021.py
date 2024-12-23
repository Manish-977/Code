#write a python program by creating a class called Employee to store the detalis of 
# Name, Employee_ID , Department and salary and implement a method to updata salary 
# of employees belonging to a given department. in python
class Employee:
    def __init__(self, name, employee_id, department, salary):
        self.name = name
        self.employee_id = employee_id
        self.department = department
        self.salary = salary

    def update_salary(self, department, new_salary):
        """Update the salary of employees in the specified department."""
        if self.department == department:
            self.salary = new_salary
            print(f"Salary of {self.name} (ID: {self.employee_id}) updated to {self.salary}.")
        else:
            print(f"{self.name} (ID: {self.employee_id}) does not belong to the {department} department.")

    def __str__(self):
        return f"Employee(Name: {self.name}, ID: {self.employee_id}, Department: {self.department}, Salary: {self.salary})"


# Example usage
if __name__ == "__main__":
    # Creating employee instances
    emp1 = Employee("Alice", 101, "HR", 50000)
    emp2 = Employee("Bob", 102, "IT", 60000)
    emp3 = Employee("Charlie", 103, "HR", 55000)

    # Displaying initial employee details
    print(emp1)
    print(emp2)
    print(emp3)

    # Updating salary for HR department
    emp1.update_salary("HR", 60000)
    emp3.update_salary("HR", 65000)

    # Trying to update salary for a different department
    emp2.update_salary("HR", 65000)

    # Displaying updated employee details
    print(emp1)
    print(emp2)
    print(emp3)