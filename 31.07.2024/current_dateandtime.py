from datetime import datetime

date=datetime.now()

TotOfDay=datetime(date.year,12,31)

print(f"The Current date and time : {date} ")

print(f"The day of the week : {date.strftime('%A')}")

remain=(TotOfDay-date).days

print(f"The number of days until the end of the year : {remain}")


