#List items need not be of the same type
list1=['a','apple',10,10.2]

#printing list
print("value at position 2 is: ",list1[1])
print("value from 1 to 3 is: ",list1[1:3])

#updating
print("old value of 2 is: ",list1[2])
print("enter new value")
element=input()
list1[2]=element
print("new value of 2 is: ",list1[2])

#deleting
print("delete 4th position in list")
del list1[3]

print("length of list is: ",len(list1))

#concatination 
list1=list1+list1

print(list1)