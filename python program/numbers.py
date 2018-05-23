##import time

for value in range(1,6):
	print(value)#print 1 2 3 4 5
numbers = list(range(1,6))
print(numbers)#print [1,2,3,4,5]
even_numbers = list(range(2,11,2))
print(even_numbers)
odd_numbers  = list(range(1,11,3))
print(odd_numbers)

squares = []
for val_1 in range(1,11):
	square = val_1**2
	squares.append(square)# squares.append(val_2**2)
	print (squares)
print(squares)     #test

digits = [1,2,3,4,5,6,7,8,9,0]
min(digits)
max(digits)
sum(digits)

squares_1 = [val_2**2 for val_2 in range(1,11)]
print(squares_1)
x2 = list_1 = [val_3 for val_3 in range (1,21)]
print()

for x in range(1000000):
	print(x)
list_2 = [val_4 for val_4 in range(1000000)]
print(min(list_2))
print(max(list_2))
sum_1 = sum(list_2)
print(sum_1)
for odd_1 in range(1,21,3):
	print(odd_1)
list_3 = []
for num_1 in range(3,31):
	if num_1 % 3 == 0:
		list_3.append(num_1)
for i in list_3:
	print(i)
list_4 = [num_2**3 for num_2 in range(1,11)]
[x1 for x1 in range(1,11)]
	





