cars = ['car', 'audi','toyota','subaru']
cars.sort()
print(cars)            #sort 永久排序
cars.sort(reverse=True)#与字母顺序相反的顺序
print(cars)
cars.sorted(reverse=True)#sorted  临时排序
print(cars.reverse())#反转列表顺序
print(lens(cars))
print(cars[-1])#用来检查索引错误


