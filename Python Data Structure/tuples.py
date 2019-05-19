#same like list. But are immutable i.e. cannot be changed. it uses parentheses

tup1=("a","apple",2)
tup2=("b",) #add , even if only one is present

#print operation
print("2nd position of tup1 is: ",tup1[1])
print("1st position of tup2 is: ",tup2[0])

#no updation can be performed


#concatinate
tup3=tup1+tup2
print("After concat: ",tup3)


#delete full tuple
del tup1
