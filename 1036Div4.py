#1036Div4.py

Ncasos = int(input())

lista = [];
for i in range(Ncasos):
	number = int(input())
	lista.append(number)

for num in lista:
	if num%4 == 0:
		print("YES")
	else:
		print("NO")
