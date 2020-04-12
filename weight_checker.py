Weight = int(input("Weight: "))
converter = input("L(bs) or (K)g: ")

if converter.upper () == "L":
    poundscon = Weight*0.45
    print(f"You are {poundscon}  pounds")
else:
    kilicon = Weight /0.45
    print(f"You are  {kilicon} kilos")