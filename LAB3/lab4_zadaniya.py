# Задание 2

# a = float(input("Введите первое число: "))
# b = float(input("Введите второе число: "))
# c = float(input("Введите третье число: "))
# max1 = 0

# if a>b and a>c:
#     max1 = a
# elif b>a and b>c:
#     max1 = b
# else:
#     max1 = c

# print(f"Максимальное число {max1}")

#Задание 3

# a = int(input("Введите возраст\n"))

# if a < 0:
#     print("Неккоректный возраст")
# elif a <= 12:
#     print("Ребенок")
# elif a <= 17:
#     print("Подросток")
# elif a <= 64:
#     print("Взрослый")
# else:
#     print("Пожилой")

#Задание 4

# import math

# a = float(input("Введите первое число\n"))
# b = float(input("Введите первое число\n"))
# c = float(input("Введите первое число\n"))
# D = 0

# if a == 0:
#     print("Уравнение не квадратное")
# else:
#     D = b**2 - 4*a*c

# if D > 0:
#     x1 = (-b + math.sqrt(D)) / (2*a)
#     x2 = (-b - math.sqrt(D)) / (2*a)
#     print(f"Два корня x1 = {x1:.2f}, x2 = {x2:.2f}")
# elif D == 0:
#     x1 = -b / (2*a)
#     print(f"Один корень x1 = {x1:.2f}")
# else:
#     print("Нет корней")

#Задание 5

# a = float(input("Введите первое число\n"))
# b = float(input("Введите второе число\n"))
# c = input("Введите действие (+, -, /, *)\n")

# match c:
#     case "+":
#         print(f"Ответ: {a+b}")
#     case "-":
#         print(f"Ответ: {a-b}")
#     case "*":
#         print(f"Ответ: {a*b}")
#     case "/":
#         if b == 0:
#             print("Ошибка! Деление на ноль")
#         else:
#             print(f"Ответ: {a/b}")
#     case _:
#         print("Неккоректное дейсвтие")

#Задание 1

# a = float(input("Введите число\n"))

# if a % 2 == 0:
#     print("Четное")
# else:
#     print("Нечетное")