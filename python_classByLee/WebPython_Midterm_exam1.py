def CalcFactorial(n):
    if (type(n) == float):
        return -1
    elif (type(n)==int) and n<=0:
        return -2
    else:
        x = n
        for i in range (1,n):
            leg=x*i
            x = leg
    return x

print(CalcFactorial(3))
print(CalcFactorial(4.5))
print(CalcFactorial(-5))
