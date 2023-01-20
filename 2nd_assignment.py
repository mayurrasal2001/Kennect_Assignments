inp  = input().split(" ")

punchlist = [',' ,'.','!' ,'?',"'" ]
inprev = inp[::-1]

res = ""

for i in range (len(inp)):

    if inp[i][-1] in punchlist:
        temp = inprev[i] + inp[i][-1]
        res+=temp
        temp=""
    else:
        if(inprev[i][-1] in punchlist):
            res+=inprev[i][:-1]
        else:
            res+=inprev[i]
    if(i!=(len(inprev)-1)):
        res+=" "
print(res)