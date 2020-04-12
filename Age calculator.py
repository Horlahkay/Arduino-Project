#Age Calculator
""" This is a line of code that helps to calculate your age by inputing your year of birth 
and prompt the user of some questions, like name and colour etc.... """
name = input("What is your Name ? ")
Favourite_colour = input("What is your Favourite colour ? ")
birth_year = input("Please input your year of birth ? ")
Yourage = 2020 - int(birth_year)
State = input( "You are a native of ? ")
food = input ("Whats your favourite food ?")
height = input ("You are how many inches tall ? ")
height1 = float(height)
print(f"Your name is {name}, your favourite colour is {Favourite_colour}, you are currently {Yourage} years old, you are a native of {State} your favourite food is {food} and you are {height1} inches tall. Have a nice day. ") 