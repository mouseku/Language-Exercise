s, e = input().split()
s = int(s)
e = int(e)

while True:
    if (1<s<10 and 1<e<10):
        if (s < e):
            for i in range(s,e+1):
                for j in range(1,10,3):
                    for k in range(0,3):
                        l = j + k
                        result1 = i * l
                        print("{} * {} = {:>2}".format(i,l,result1), end="   ")
                    print("",end="\n")
                print("",end="\n")
        else:
            for i in range(s,e-1,-1):
                for j in range(1,10,3):
                    for k in range(0,3):
                        l = j + k
                        result1 = i * l
                        print("{} * {} = {:>2}".format(i,l,result1), end="   ")
                    print("",end="\n")
                print("",end="\n")
        break
    else:
        print("INPUT ERROR!")
        s, e = input().split()
        s = int(s)
        e = int(e)
        