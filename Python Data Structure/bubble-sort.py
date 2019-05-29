def bubblesort(elements,number):
    for i in range(number):
        for j in range(1,(number-i)):
            if(elements[j-1]>elements[j]):
                #swap numbers
                temp=elements[j-1]
                elements[j-1]=elements[j]
                elements[j]=temp
    print("Display")
    print(elements)

elements=[1,4,2,7,5,2,5]
number=len(elements)
bubblesort(elements,number)
