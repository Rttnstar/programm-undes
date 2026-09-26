import random

# 1-100 хооронд санамсаргүй 1 тоо үүсгэх
rand_single = random.randint(1, 100)
print(f"Санамсаргүй тоо: {rand_single}")

# 5 ширхэг санамсаргүй тоо бүхий жагсаалт үүсгэх
rand_list = [random.randint(1, 100) for _ in range(5)]
print(f"5 санамсаргүй тооны жагсаалт: {rand_list}")