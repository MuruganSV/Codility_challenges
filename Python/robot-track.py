'''
Program for tracking robot movement
'''

def findPositions(array):
    i = 0
    x = 0
    y = 0
    xactive = False
    yactive = True
    negative = False
    for val in array:
        if negative:
            if val > 0:
                if xactive:
                    x = x - val
                elif yactive:
                    y = y - val
            elif val < 0:
                if xactive:
                    x = x + - val
                elif yactive:
                    y = y + - val
        else:
                if xactive:
                    x = x + val
                elif yactive:
                    y = y + val
            
            
        yactive = not yactive
        xactive = not xactive
        
        i += 1
        if i%2 == 0:
            negative = not negative
            
    return [x,y]
                

inputStr = input()
strarr = inputStr.split()
intarr = [int(i) for i in strarr]

print(findPositions(intarr))


    

