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
		global stack
		print(self.data)
		if(self.left is not None):
			stack.append(self.left)
		if(self.right is not None):
			stack.append(self.right)
		if(stack):
			temp=stack[0]
			del(stack[0])
			temp.display()

print("enter root value")
obj=node(int(input()))
stack=[]
ch=0
while(ch<4):
	print("1.insert 2.display")
	ch=int(input())
	if(ch==1):
		print("Enter value to insert")
		element=int(input())
		obj.insert(element)
	elif(ch==2):
		print("Breadth First Traversal")
		obj.display()
	else:
		break