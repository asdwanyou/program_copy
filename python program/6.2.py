user_0 = {
	'username': 'efermi',
	'first': 'enrico',
	'last': 'fermi',
	}
for key, value in user_0.items():
	print("\nkey:" + key)
	print("value:" + value)
#for k, v in user_0.items()##########
favourite_languages = {
	'jen': 'python',
	'sarah': 'c',
	'edward': 'ruby',
	'phil': 'python',
	} 
for name, language in favourite_languages.items():
	print(name.title() + "'s favorite language is " + language.title() + ".") 	
for name in favourite_languages.keys():#xian shi 
	print(name.title())
for name in favourite_languages:
	print(name.title())
#same output
##############################################
friends = ['phil','sarah']
for name in friends:
	if name in friends:
		print("  Hi " + name.title() + 
			", I see your favorite language is " + 
			favourite_languages[name].title() + "!")



