import pandas as pd


L = list(range(10000001))

for_f = time_it(linear_search_for, L, 10)
for_m = time_it(linear_search_for, L, 5000000)
for_l = time_it(linear_search_for, L, 10000000)

while_f = time_it(linear_search_while, L, 10)
while_m = time_it(linear_search_while, L, 5000000)
while_l = time_it(linear_search_while, L, 10000000)


sentinel_f = time_it(linear_search, L, 10)
sentinel_m = time_it(linear_search, L, 5000000)
sentinel_l = time_it(linear_search, L, 10000000)

binary_f = time_it(binary_search, L, 10)
binary_m = time_it(binary_search, L, 5000000)
binary_l = time_it(binary_search, L, 10000000)

chart = [{'Case' : [10, 5000000, 10000000], 
          'While' : [while_f,while_m,while_l],
          'for' : [for_f,for_m,for_l],
          'sentinel' : [sentinel_f, sentinel_m, sentinel_l],
          'Binary search' : [binary_f, binary_m, binary_l]}]


chartframe = pd.DataFrame(chart)


print(chartframe)