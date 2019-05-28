class Node:
    head=None
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None
        self.height=1
        self.head=self

    def insert(self,data):
        if(self.data < data):
            if(self.right is None):
                self.right=Node(data)
            else:
                self.right.insert(data)
        else:
            if(self.left is None):
                self.left=Node(data)
            else:
                self.left.insert(data)
        self.height=1+max(self.getHeight(self.left),self.getHeight(self.right))
        balance=self.getBalance(self)
        # right right rotation
        if(balance<-1 and data>self.right.data):
            y=self.right
            t2=y.left
            y.left=self
            self.right=t2
            self.height=1+max(self.getHeight(self.left),self.getHeight(self.right))
            y.height=1+max(self.getHeight(y.left),self.getHeight(y.right))
            self.head=y
        #left left rotation
        if(balance>1 and data<self.left.data):
            y=self.left
            t3=y.right
            y.right=self
            self.left=t3
            self.height=1+max(self.getHeight(self.left),self.getHeight(self.right))
            y.height=1+max(self.getHeight(y.left),self.getHeight(y.right))
            self.head=y
        #left right rotation
        if(balance>1 and data>self.left.data):
            temp=self.left
            y=temp.right
            z=y.left
            temp.right=z
            y.left=temp
            self.left=y
            temp.height=1+max(self.getHeight(temp.left),self.getHeight(temp.right))
            y.height=1+max(self.getHeight(y.left),self.getHeight(y.right))
            y1=self.left
            t4=y1.right
            y1.right=self
            self.left=t4
            self.height=1+max(self.getHeight(self.left),self.getHeight(self.right))
            y.height=1+max(self.getHeight(y.left),self.getHeight(y.right))
            self.head=y
        # right left rotation
        if(balance<-1 and data<self.right.data):
            temp=self.right
            y=temp.left
            z=y.right
            temp.left=z
            y.right=temp
            self.right=y
            temp.height=1+max(self.getHeight(temp.left),self.getHeight(temp.right))
            y.height=1+max(self.getHeight(y.left),self.getHeight(y.right))
            y2=self.right
            t5=y2.left
            y2.left=self
            self.right=t5
            self.height=1+max(self.getHeight(self.left),self.getHeight(self.right))
            y.height=1+max(self.getHeight(y.left),self.getHeight(y.right))
            self.head=y
        

    def display(self,node):
        if(node.left is not None):
            self.display(node.left)
        print(node.__dict__,"\n")
        if(node.right is not None):
            self.display(node.right)

    def getHeight(self,node):
        if(node is None):
            return 0
        return node.height
    def getBalance(self,node):
        if not node:
            return 0
        return self.getHeight(node.left) - self.getHeight(node.right)

obj=Node(20)
obj.insert(30)
obj.insert(10)
obj.insert(8)
obj.insert(15)
obj.insert(16)
print("DFS search\n")
obj.display(obj.head)
print("\nthe root value is: ",obj.head.data)
