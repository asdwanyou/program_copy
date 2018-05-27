alien_0 = {'color':'green','points':5}
print(alien_0['color'])
print(alien_0['points'])
alien_0['x_position'] = 0
alien_0['y_position'] = 25
print(alien_0)
#######################################
alien_1 = {}
alien_1['color'] = 'green'
alien_1['points'] = 5 
#######################################
alien_2 = {'x_position': 0, 'y_position': 25, 'speed':'medium'}
print("Original x_position:" + str(alien_2['x_position']))
if alien_2['speed'] == 'slow':
	x_increment = 1
elif alien_2['speed'] == 'medium':
	x_increment = 2
else:
	x_increment = 3
alien_2['x_position'] = alien_2['x_position'] + x_increment
print("New x_position:" + str(alien_2['x_position']))

del alien_1['points']
print(alien_1)