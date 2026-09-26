n = int(input())
a = list(map(int, input().split()))

found = False

for i in range(n):
    target = a[i]
    others = a[:i] + a[i+1:]
    m = len(others)
    
    match_subset = None
    
    for mask in range(1, 1 << m):
        subset = [others[j] for j in range(m) if (mask & (1 << j))]
        if sum(subset) == target:
            match_subset = subset
            break
            
    if match_subset is not None:
        print("Yes")
        subset_str = " + ".join(map(str, match_subset))
        print(f"{target} = {subset_str}")
        found = True
        break

if not found:
    print("No")
    max_val = max(a)
    max_idx = a.index(max_val)
    others = a[:max_idx] + a[max_idx+1:]
    res = max_val - sum(others)
    print(res)