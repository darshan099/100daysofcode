def shellsort(elements):
    increment=int(len(elements)/2)
    while(increment>0):
    	i=increment
    	while(i<len(elements)):
	    	if(elements[i] < elements[i-increment]):
	    		temp=elements[i]
	    		elements[i]=elements[i-increment]
	    		elements[i-increment]=temp
	    	i=i+1
    	increment=int(increment/2)
    	if(increment==1):
    		break
    for i in range(1,len(elements)):
        tmp=elements[i]
        j=i
        while(j>=0 and tmp<elements[j-1]):
            elements[j]=elements[j-1]
            j=j-1
        elements[j]=tmp
    print("sorted values")
    print(elements)

elements=[1,7,3,2,5,8,4,9]
shellsort(elements)
