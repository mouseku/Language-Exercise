s, e = input().split()
s = int(s)
e = int(e)

while True:
    if (1<s<10 and 1<e<10):
        if (s < e):
            for i in range(1,10):
                for j in range(s,e+1):
                    result1 = j * i
                    print("{} * {} = {:>2}".format(j,i,result1), end="   ")
                print("",end="\n")
        else:
            for i in range(1,10):
                for j in range(s,e-1,-1):
                    result1 = j * i
                    print("{} * {} = {:>2}".format(j,i,result1), end="   ")
                print("",end="\n")
        break
    else:
        print("INPUT ERROR!")
        s, e = input().split()
        s = int(s)
        e = int(e)
        