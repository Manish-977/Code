#write a program to define a class Employee with the following 
#attributes: Empld, EmpName, Designation and BasiSalary. 
#Derive a class Salary to prepare gross salary and net salary, 
#Assume neccssary attributes ans their values with methods to implement.
class Employee:
    def __init__(self, empl_id, emp_name, designation, basic_salary):
        self.empl_id = empl_id
        self.emp_name = emp_name
        self.designation = designation
        self.basic_salary = basic_salary

    def display_info(self):
        print(f"Employee ID: {self.empl_id}")
        print(f"Employee Name: {self.emp_name}")
        print(f"Designation: {self.designation}")
        print(f"Basic Salary: {self.basic_salary}")


class Salary(Employee):
    def __init__(self, empl_id, emp_name, designation, basic_salary, hra_percentage, da_percentage, tax_percentage):
        super().__init__(empl_id, emp_name, designation, basic_salary)
        self.hra_percentage = hra_percentage
        self.da_percentage = da_percentage
        self.tax_percentage = tax_percentage

    def calculate_gross_salary(self):
        hra = (self.hra_percentage / 100) * self.basic_salary
        da = (self.da_percentage / 100) * self.basic_salary
        gross_salary = self.basic_salary + hra + da
        return gross_salary

    def calculate_net_salary(self):
        gross_salary = self.calculate_gross_salary()
        tax = (self.tax_percentage / 100) * gross_salary
        net_salary = gross_salary - tax
        return net_salary

    def display_salary_info(self):
        self.display_info()
        gross_salary = self.calculate_gross_salary()
        net_salary = self.calculate_net_salary()
        print(f"Gross Salary: {gross_salary}")
        print(f"Net Salary: {net_salary}")


# Example usage
if __name__ == "__main__":
    # Create an instance of Salary
    emp = Salary(101, "John Doe", "Software Engineer", 50000, 20, 10, 5)
    
    # Display employee and salary information
    emp.display_salary_info()