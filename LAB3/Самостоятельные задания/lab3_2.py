number = int(input("Введите целое неотрицательное число: "))

if number < 0:
    print("Ошибка! Нужно неотрицательное число.")
else:
    print("Двоичная:         ", bin(number)[2:])
    print("Восьмеричная:     ", oct(number)[2:])
    print("Шестнадцатеричная:", hex(number)[2:].upper())