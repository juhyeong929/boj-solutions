x, y = map(int, input().split())

# 2007년 각 월의 날짜 수 (2월은 28일)
month_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

# 요일 리스트 (1월 1일이 월요일이므로 MON부터 시작)
day_of_week = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"]

# 1월 1일부터 x월 y일까지의 총 일 수 계산
total_days = 0
for i in range(1, x):
    total_days += month_days[i]
total_days += y

# 총 일수를 7로 나눈 나머지를 이용하여 요일 계산
# 1월 1일은 MON이므로 total_days가 1일 때 인덱스 0이 되도록 조정
day_index = (total_days - 1) % 7

print(day_of_week[day_index])