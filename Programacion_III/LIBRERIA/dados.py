# Confeccionar un programa que simule tirar dos datos y luego muestre los valores que salieron. 
# Imprimir un mensaje que ganó si la suma de los mismos es igual a 7. 
# Para resolver este problema requerimos un algoritmo para que se genere un valor aleatorio entre 1 y 6. 
# Como la generación de valores aleatorios es un tema muy frecuente la biblioteca estándar de 
# Python incluye un módulo que nos resuelve la generación de valores aleatorios. 

import random

# Tirar dos dados
dado1 = random.randint(1, 6)
dado2 = random.randint(1, 6)

# Mostrar los valores
print("Primer dado:", dado1)
print("Segundo dado:", dado2)

# Calcular la suma
suma = dado1 + dado2

# Verificar si ganó
if suma == 7:
    print("Ganó")
else:
    print("Perdió")
