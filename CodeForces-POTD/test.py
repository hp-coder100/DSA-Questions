def ReArrangeArray(arr, len):
    pos = []
    neg = []
    for i in arr:
        if(i<0): neg.append(i)
        else: pos.append(i)
    return neg + pos



def NumberOfBalls(arr):
    i = 1
    curr = 1
    ans = 0
    for j in arr:
        if j < curr:
            ans = ans + (curr-j)
        i = i+2
        curr = curr + i
    return ans



    