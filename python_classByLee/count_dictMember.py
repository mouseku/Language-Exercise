dictionary2 = {'red': [1,2], 'green': 1, 'blue': 2}

def count_value(dictionary):
    num=set()
    for i in dictionary:
        a=dictionary.values()
        num.add(a)
    count=len(num)
    return count

print(count_value(dictionary))
print(count_value(dictionary2))