import random

print("Intente adivinar el número que pensé entre 1 y 100")
aleatorio = random.randint(1, 100)
intentos = 0
elegido = -1

while elegido != aleatorio:
    elegido = int(input("¿Cuál número elige?: "))
    intentos += 1
    if aleatorio > elegido:
        print("Pensé en un número mayor")
    elif aleatorio < elegido:
        print("Pensé en un número menor")

print("¡Ganaste en", intentos, "intentos!")
