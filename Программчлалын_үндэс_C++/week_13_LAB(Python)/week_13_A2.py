count = 0

for i in range(1, 1001):
    if i % 10 == 7:
        print(i, end=" ")
        count += 1

print(f"\nНийт 7-оор төгссөн тоо: {count}")