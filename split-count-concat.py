'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
string = input() # to get the Input String
splitCount = int(input()) # to get the Input for split-count
arr = string.split() # splitting the sting into array of elements
arrlength = len(arr) # lenght of the array elements splitted from input string
resultarr = [''] * arrlength # result array initiliasing with empty string
temparr = [''] * 1 #used to check condition
jump = 0 # to jump the number of index that are concatinated
k = 0 # initiliasing k=0 for resultarr
i = 0 #initiliasing i=0 for loop iteration upto arrlength

while i < arrlength :
    
    if len(arr[i]) < splitCount:
        for j in range(i+1,arrlength):
            temparr[0] = arr[i]
            if len(arr[j]) < splitCount and (len(arr[i])+len(arr[j]) <= splitCount):
                arr[i] = arr[i] + arr[j]
                resultarr[k] = arr[i]
                jump += 1
            
            if len(arr[i]) >= splitCount or len(arr[j]) >= splitCount or (len(temparr[0])+len(arr[j]) >= splitCount):
                resultarr[k] = arr[i]
                break
    else:
        resultarr[k] = arr[i]
    
    k += 1
    
    if jump>0:
        i += jump
    
    i += 1
    jump = 0

while '' in resultarr: # removing unused index of resultarr
    resultarr.remove('')

print(resultarr) # printing the final result array