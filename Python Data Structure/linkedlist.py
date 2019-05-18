class node:
	def __init__(self,dataval=None):
		self.dataval=dataval;
		self.nextval=None
class singlylinkedlist:
	def __init__(self):
		self.headval=None
	def listprint(self):
		printval=self.headval
		while printval is not None:
			print(printval.dataval)
			printval=printval.nextval
	#adding newnode in sorted way in the list
	def insert(self,newdata):
		newnode=node(newdata)
		if(self.headval==None):
			self.headval=newnode
		elif(self.headval.dataval>=newdata):
			newnode.nextval=self.headval
			self.headval=newnode
		else:
			nodepos=self.headval
			while(nodepos.nextval and nodepos.nextval.dataval<newdata):
				nodepos=nodepos.nextval
			if(nodepos.nextval==None):
				if(nodepos.dataval<newdata):
					nodepos.nextval=newnode
				else:
					newnode.nextval=self.headval
					self.headval=newnode
			else:
				newnode.nextval=nodepos.nextval
				nodepos.nextval=newnode

	#search
	def search(self,newdata):
		nodepos=self.headval
		while(nodepos):
			if(nodepos.dataval==newdata):
				print("element present")
			nodepos=nodepos.nextval

	#deleting the node
	def deletenode(self,newdata):
		nodepos=self.headval
		if(nodepos.dataval==newdata):
			if(nodepos.nextval is None):
				print("this is the only element present")
			else:
				self.headval=nodepos.nextval
				return
		while(nodepos.nextval and nodepos.nextval.dataval is not newdata):
			nodepos=nodepos.nextval
		if(nodepos.nextval is not None):
			temp=nodepos.nextval
			nodepos.nextval=temp.nextval


list1=singlylinkedlist()
ch=0
while(ch<5):
	print("1. insert 2. delete 3.print 4.search")
	ch=int(input())
	if(ch==1):
		print("insert value to be inserted")
		element=int(input())
		list1.insert(element)
		continue
	elif(ch==2):
		print("enter value to be deleted")
		element=int(input())
		list1.deletenode(element)
		continue
	elif(ch==3):
		print("values are: ")
		list1.listprint()
		continue
	elif(ch==4):
		print("Enter search element")
		element=int(input())
		list1.search(element)
		continue

'''

1. insert 2. delete 3.print 4.search
1
insert value to be inserted
10
1. insert 2. delete 3.print 4.search
1
insert value to be inserted
20
1. insert 2. delete 3.print 4.search
1
insert value to be inserted
30
1. insert 2. delete 3.print 4.search
3
values are: 
10
20
30
1. insert 2. delete 3.print 4.search
2
enter value to be deleted
20
1. insert 2. delete 3.print 4.search
3
values are: 
10
30
1. insert 2. delete 3.print 4.search
4
Enter search element
10
element present
1. insert 2. delete 3.print 4.search
5

'''