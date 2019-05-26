class ComplexNumber:
	'''A simple class in Python'''

	# constructor
	def __init__(self, r = 0, i = 0):
		self.real = r
		self.imag = i

	def getData(self):
		print("{}+{}j".format(self.real, self.imag))

# print the docstring of the class
print(ComplexNumber.__doc__)

# create your first number
num1 = ComplexNumber()
num1.real = 2
num1.imag = 5
num1.getData()

# Create a new ComplexNumber object
c2 = ComplexNumber(2,3)

# Call getData() function
c2.getData()

# Create a new class without parameters
c3 = ComplexNumber()
c3.getData()

# Create another ComplexNumber object
# and create a new attribute 'attr'
c4 = ComplexNumber(5)
c4.getData()
c4.attr = 10

# Output: (5, 0, 10)
print((c4.real, c4.imag, c4.attr))
