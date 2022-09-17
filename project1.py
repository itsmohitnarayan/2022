#picking random number

import random
answer=random.randint(1,3)
lucky_number=random.randint(1,100)
fortune_number=random.randint(1,3)
fortune_text=''
print(random.randint(1,100))
print(random.random())

if answer ==1:
    print("yes")
if answer ==2:
    print("no")
if answer ==3:
    print("maybe")
    
print(f"luckynumber is {lucky_number}")

if fortune_number==1:
    fortune_text='you will have a great day!'
if fortune_number==2:
    fortune_text='Today will be tough!'
if fortune_number==3:
    fortune_text='you will get married this week'

print(f"{fortune_text} your lucky number is : {fortune_number}")