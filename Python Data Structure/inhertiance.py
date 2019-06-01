class polygon:
	def __init__(self,sides):
		self.sides=sides
		self.sideLength=[0 for i in range(self.sides)]
	def getSides(self):
		print("Enter {} sides".format(self.sides))
		for i in range(self.sides):
			self.sideLength[i]=int(input())

class triangle(polygon):
	def __init__(self):
		polygon.__init__(self,3)
	def areaOfTriangle(self):
		triangleLength=self.sideLength
		S=(triangleLength[0]+triangleLength[1]+triangleLength[2])/2
		area=(S*(S-triangleLength[0])*(S-triangleLength[1])*(S-triangleLength[2])) ** 0.5
		print("Area of triangle is: " ,area)

class rectangle(polygon):
	def __init__(self):
		polygon.__init__(self,2)
	def areaOfRectangle(self):
		rectangleLength=self.sideLength
		area=rectangleLength[0]*rectangleLength[1]
		print("area of rectangle is: ", area)

p=polygon(2)


r=rectangle()
r.getSides()
r.areaOfRectangle()

t=triangle()
t.getSides()
t.areaOfTriangle()


print(p.__dict__)
print(t.__dict__)
print(r.__dict__)
