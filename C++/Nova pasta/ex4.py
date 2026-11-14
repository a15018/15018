nota = int(input("qual foi a sua nota(0 a 10)? "))

if nota >= 9:
    print("excelente")
elif nota >= 7:
    print("bom")
elif nota >= 5:
    print("suficiente")
elif nota < 5:
    print("reprovado")