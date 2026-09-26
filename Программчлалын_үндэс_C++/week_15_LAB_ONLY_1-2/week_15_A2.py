from datetime import datetime, timedelta

# Өнөөдрийн огноо
today = datetime.now().date()
print(f"Өнөөдрийн огноо: {today}")

# 7 хоногийн дараах огноо
after_7_days = today + timedelta(days=7)
print(f"7 хоногийн дараах огноо: {after_7_days}")

# Одоогийн цаг "HH:MM:SS" форматаар
current_time = datetime.now().strftime("%H:%M:%S")
print(f"Одоогийн цаг: {current_time}")