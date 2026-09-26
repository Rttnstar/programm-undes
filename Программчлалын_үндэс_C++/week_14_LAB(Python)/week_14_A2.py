def sum_list(lst):
    total = 0
    for item in lst:
        total += item
    return total

numbers = list(map(int, input().split()))
print(sum_list(numbers))