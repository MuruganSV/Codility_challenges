# string: t h isi s a z igz a g
# k : 4

# t     a     g
#  h   s z   a
#   i i   i z
#    s     g

input_value = input("Enter the String")
k = int(input("Enter the value of K"))
length = len(input_value)
mid_value = length//2
counter = k
start = 0
finish = length

while counter != 0:
    
    mid_value = (finish-start)//2
    
    for i in range(start,mid_value+1):
        temp = start
        while temp != 0:
        	if i <= start:
        		print("",end=" ")
        	temp = temp -1
        if i == start or i == mid_value:
            print(input_value[i], end=" ")
        else:
            print("",end=" ")

    difference = start
    space_print = difference

    while space_print > 1:
    	print("",end=" ")
    	space_print = space_print-1
            
    for j in range(mid_value+difference,finish):
    	if counter == k and j == finish-1:
    		print(input_value[j],end=" ")
    	elif counter != k and j == mid_value+start+difference or j == finish-1:
    		print(input_value[j],end=" ")
    	else:
    		print("",end=" ")
    	
    
    print("\n")
    counter = counter -1
    start = start +1
    finish = finish -1   
    -------------------------------------------------

    input_str = input()
value = int(input())
length = len(input_str)
counter = value
start = 0
finish = length

while counter != 0:
    temp = start
    while temp>0:
        print("",end=" ")
        temp = temp-1
    for i in range(start,finish):
        if i == start or i == (value-start)*2 and (value-start)*2 <= finish-1:
            print(input_str[i],end=" ")
        else:
            print("",end=" ")
            
    start = start+1
    finish = finish -1

    
