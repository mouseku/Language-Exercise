def isPrime(num, L):
    for i in range (1,num+1):
        if (num % i == 0):
            L.append(i)
    if (len(L)==2):
        return True
    else:
        print(L)
        return False
        

print(isPrime(5,[]))
print(isPrime(15,[]))
print(isPrime(51,[]))
print(isPrime(73,[]))