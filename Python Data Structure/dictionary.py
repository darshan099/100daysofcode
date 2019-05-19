dict={'name':'bob','age':10,'language':'python'}

#printing
print("the name is: ",dict['name'])

#updating
dict['name']='john'	#updating existing item
dict['school']='abc' #adding new item
dict['marks']=[10,20,30] #adding list
print("name is: ",dict['name'])
print("school is: ",dict['school'])
print("marks is: ",dict['marks'])
#deleting
del dict['school'] #deleting an item
dict.clear() #clear all elements
del dict #remove from memory