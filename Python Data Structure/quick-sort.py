def quicksort(elements,left,right):
	pivot=right-1
	i=left
	j=right-1
	if(left<right):
		while(True):
			while(elements[i]<elements[pivot]):
				i=i+1
			while(elements[j]>elements[pivot]):
				j=j-1
			if(i<j):
				temp=elements[i]
				elements[i]=elements[j]
				elements[j]=temp
			else:
				break
		temp=elements[i]
		elements[i]=elements[pivot]
		elements[pivot]=temp
		print(elements,'mid:',i)
		quicksort(elements, left, i)
		quicksort(elements, i+1, right)

elements=[1,4,6,3,2,7,9,30,23,21,44]
quicksort(elements, 0, len(elements))
