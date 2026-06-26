from datetime import datetime

now = datetime.utcnow()
print(now.year)
print(f"{now.month:02d}")
print(f"{now.day:02d}")