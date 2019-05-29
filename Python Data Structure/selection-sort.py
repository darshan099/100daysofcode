def selectionsort(elements):
    for i in range(len(elements)):
        min=999
        min_pos=0
        for j in range(i,len(elements)):
            if(min>elements[j]):
                min=elements[j]
                min_pos=j
        tmp=elements[i]
        elements[i]=elements[min_pos]
        elements[min_pos]=tmp
    print("sorted elements")
    print(elements)

elements=[1,5,7,3,8,9]
selectionsort(elements)
