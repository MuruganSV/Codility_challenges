'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
'''
Question: BaseBall Game
Input: ops = ["5","2","C","D","+"]
Output: 30
Explanation: "5" - add 5 to the record
"2" - add 2 to the record, now [5, 2]
"C" - Invalidate and removwe the previous record, now [5] (Note: there will be previous value always for sure)
"D" - 2 * Previous value, ie: 2 * 5 = 10, now [5, 10] (Note: there will be previous value always for sure)
"+" - add last two values  5 + 10 = 15, now [5,10,15] (Note: there will be two previous value always for sure)
return the sum 5 + 10 + 15 = 30
'''
def callout(ops) -> Int:
    arr = []
    result = 0
    for value in ops:
        if (value != 'C') and (value != 'D') and (value != '+'):
            arr.append(int(value))
        elif value == 'C':
            arr.pop(len(arr)-1)
        elif value == 'D':
            arr.append(2 * arr[len(arr)-1])
        elif value == '+':
            arr.append(arr[len(arr)-1] + arr[len(arr)-2])
            
    for val in arr:
        if val != '':
            result = result + val
            
    return result


line = input()
ops = line.strip().split()

print(callout(ops))


