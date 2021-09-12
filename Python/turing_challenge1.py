'''
Question:
Input:
s = 'abcd'
t = 'ceadb'
Output:
e
----------
Input:
s = ''
t = 'y'
Output:
y

'''

def findDifference(s, t):
    result = ''

    ts = [i for i in s]
    tt = [i for i in t]

    res = set(ts) & set(tt)

    for val in res:
        del tt[tt.index(val)]

    return tt[0]


s = input().strip()
t = input().strip()

print(findDifference(s, t))