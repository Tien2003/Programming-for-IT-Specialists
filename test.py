import itertools

def brute_force_set(li, n):
    # INSERT YOUR CODE BELOW
    # use itertools.combinations
    # ~ 8 lines
    # YOUR CODE HERE
    a = [i for i in range(1, n+1)]
    for r in range(1, len(li)+1):
        for array in itertools.combinations(li, r):
            visited =[]
            for sub_array in array:
                for element in sub_array:
                    if (element in a) and (element not in visited):
                        visited.append(element)
            if len(visited) == n:
                return array
                    

# =======================
# EXAMPLE TESTING CASES
set_list1 = [ # first test input
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9, 10],
    [1, 3, 7],
    [12],
    [2, 4, 6, 8],
    [11],
]

set_list2 = [ # second test input
    [4, 2, 5],
    [1, 7],
    [2, 4, 8, 9, 10],
    [5, 10],
    [3, 5, 6],
    [2, 6],
    [1, 8, 9, 10]
]
            
ss = brute_force_set(set_list1, 12)
print(ss) # ([1, 2, 3], [4, 5, 6], [7, 8, 9, 10], [12], [11])
print('---')
ss = brute_force_set(set_list2, 10)
print(ss) # ([1, 7], [2, 4, 8, 9, 10], [3, 5, 6])