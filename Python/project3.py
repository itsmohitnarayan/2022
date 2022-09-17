import random 
import time

print("hi! welcometo the guessing game. Iam going to pick a number between 1 to 100.")
time.sleep(3)
print("picking a number...")
time.sleep(2)
guess =int(input("what is you guess: "))
correct=random.randint(1,100)
guess_count= 1

while guess != correct:
    time.sleep(1)
    guess_count +=1
    if guess < correct:
       guess =int(input("wrong. you need to guess higher. what is your guess?: "))
    else:
        guess=int(input("wrong. you need to guess lower. what is your guess?: "))
    

print(f"congrats:) the right answer was {correct}. took you {guess_count} guesses5")