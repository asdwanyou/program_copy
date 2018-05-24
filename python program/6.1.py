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
if alien_0['speed'] == 'slow':
	