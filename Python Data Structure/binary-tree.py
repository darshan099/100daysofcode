class node:
	def __init__(self,data):
		self.data=data
		self.left=None
		self.right=None
	def insert(self,data):
		if(self.data < data):
			if(self.right==None):
				self.right=node(data)
			else:
				self.right.insert(data)
		else:
			if(self.left==None):
				self.left=node(data)
			else:
				self.left.insert(data)
	def display(self):
		if(self.left is not None):
			self.left.display()
		print(self.data)
		if(self.right is not None):
			self.right.display()
	def search(self,data):
		global elementfound
		if(self.data==data):
			elementfound=True
			pass
		else:
			if(self.data < data):
				if(self.right is not None):
					self.right.search(data)
			else:
				if(self.left is not None):
					self.left.search(data)

elementfound=False
print("enter root value")
obj=node(int(input()))
ch=0
while(ch<4):
	print("1.insert 2.display 3.search")
	ch=int(input())
	if(ch==1):
		print("Enter value to insert")
		element=int(input())
		obj.insert(element)
	elif(ch==2):
		print("Depth Traversal")
		obj.display()
	elif(ch==3):
		elementfound=False
		print("Enter element to search")
		element=int(input())
		obj.search(element)
		if(elementfound):
			print("element found")
		else:
			print("element not found")
	else:
		break

