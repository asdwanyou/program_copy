age = 23
message ="happy" + str(age) + "birthday!"
print(message)
bitcycles = ["trek","cannondale","redline","special"]
for num in xrange(0,4):
	print(bitcycles[num].tittle())
motocycles = []
motocycles.append('honda')
motocycles.append('yamaha')
motocycles.append('suzuki')
print(motocycles)
motocycles.insert(0,'ducati')#['ducati', 'honda', 'yamaha', 'suzuki']

del motocycles[0] #['honda', 'yamaha', 'suzuki']删除后不使用
motocycles.pop(0)

