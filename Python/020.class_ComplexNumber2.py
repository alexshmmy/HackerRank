# second example with classes

class Point:
	'''This is a class defining a point in R^2'''

	def __init__(self, x, y):
		self.x = x
		self.y = y

	def __str__(self):
		return '({}, {})'.format(self.x, self.y)

	def __add__(self, other):
		t1 = self.x+other.x
		t2 = self.y+other.y
		return Point(t1, t2)

	def __lt__(self, other):
		mag_x = (self.x**2)+(self.y**2)
		mag_y = (other.x**2)+(other.y**2)
		return mag_x < mag_y

# main program

# print the docstring
print(Point.__doc__)

# print the points p1 and p2
p1 = Point(2, 3)
p2 = Point(-1, 3)
print(p1)
print(p2)

# perform the object addition
print(p1+p2)

# perform the object comparison
if p1 < p2 :
	print('Magnitute of {} is smaller than {}'.format(p1, p2))
else :
	print('Magnitute of {} is bigger than {}'.format(p1, p2))
