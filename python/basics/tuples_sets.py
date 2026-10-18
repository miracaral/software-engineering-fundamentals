# A tuple is a collection is ordered and unchangeable. Allows duplicate members

# To create tuple
fruits = ('Apples','Oranges','Grapes')
#fruits2 = tuple(('Apples','Oranges','Grapes'))

# Single value needs trailing comma
fruits2 = ('Apples',)

# Get value
print(fruits[1])

# CAN NOT change value
#fruits[0] = 'Pears'

# Delete tuple when it deleted before print modal it will delete so terminal will say not defined!!!
del fruits2

# Get length
print(len(fruits))

#print(fruits2, type(fruits2))

#print(fruits,fruits2)

# Create Set
fruits_set = {'Apples','Oranges','Mango'}

# Check if in set
print('Apples' in fruits_set)

# Add to set
fruits_set.add('Grape')

# Remove from set
fruits_set.remove('Grape')

# Add duplicate
fruits_set.add('Apples')

# Clear set
#fruits_set.clear()

# Delete set
#del fruits_set

print(fruits_set)
