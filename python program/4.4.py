players = ['charles','martina','florence','eli']
print("Here are the first three players on my team:")
for player in players[:3]:
	print(player.title())
############################################
my_foods = ['pizza','falafel','carrot']
friend_foods = my_foods[:]

my_foods.append('cannoli')
friend_foods.append('ice cream')

print("My favourite foods are:")
print(my_foods)
print("\nMy friend's favourite foods are:")
print(friend_foods)


#friend_foods = my_foods不能用来复制list
#############################################

