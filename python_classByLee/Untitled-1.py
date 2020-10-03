dictionary2 = {'red': [1,2], 'green': 1, 'blue': 2}
dictionary = {'red': 1, 'green': 1, 'blue': 2}

def count_value(dictionary):
    num=set()
    a=[dictionary.values()]
    for i in a:
        num.add(i)
    count=len(num)
    return count

print(count_value(dictionary))
print(count_value(dictionary2))