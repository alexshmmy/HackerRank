
class Employee:
	'Common base class for all employees'
	
	empCount = 0
	
	# class constructor
	def __init__(self, name, salary):
		self.name = name
		self.salary = salary
		Employee.empCount += 1

	def displayCount(self):
		print('Total Employee %d' % Employee.empCount)

	def displayEmployee(self):
		print('Name : ', self.name, ', Salary : ', self.salary) 

# main program

# print class header
print(Employee.__doc__)

# create an eployee
emp1 = Employee('Zara', 2000)

# create a second employee
emp2 = Employee('Manni', 5000)

# display the employees
emp1.displayEmployee()
emp2.displayEmployee()

# print total employees
print("Total Employee %d" % Employee.empCount)

# print total employees
emp1.displayCount()
emp2.displayCount()

# add attributes
emp1.age = 7
emp1.displayEmployee()

# search attributes
print(hasattr(emp1, 'age'))
