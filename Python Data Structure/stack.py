class Node:
    def __init__(self):
        self.data=None
        self.next=None
        self.head=None
    def push(self,data):
        if(self.head==None):
            newnode=Node()
            newnode.data=data
            self.head=newnode
        else:
            node=self.head
            while(node.next is not None):
                node=node.next
            newnode=Node()
            newnode.data=data
            node.next=newnode
    def display(self):
        node=self.head
        while(node is not None):
            print(node.data)
            node=node.next
    def pop(self):
        node=self.head
        while(node.next.next is not None):
            node=node.next
        del(node.next)
        node.next=None


obj=Node()
ch=0
while(ch<4):
    print("1.push 2.pop 3.display")
    ch=int(input())
    if(ch==1):
        print("enter element")
        element=int(input())
        obj.push(element)
    elif(ch==2):
        print("element popped")
        obj.pop()
    elif(ch==3):
        print("Display stack")
        obj.display()
