#input : 5 ABCDE
#output: A
#        BC
#        DEA
#        BCDE
#        ABCDE

n = input().split()
length = len(n[1])
k=0
for i in range((int(n[0]))+1):
    for j in range(i):
        print(n[1][k],end="")
        k+=1
        if k==length:
            k=0
    print()