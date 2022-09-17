from unicodedata import name


def dog_info (age,name):
    print(f'Hi my {name} and i am {age} years old')
    
dog_info(4,"tipu sultan")

def uppercase(text):
    return text.upper()

print(uppercase ("nick"))

name=['nick','jane','sara']

for name in name:
    print(uppercase(name))