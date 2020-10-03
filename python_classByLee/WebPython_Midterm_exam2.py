caseTypes = ["scissor", "rock", "paper"]

# Start of Answer
def GenerateRandomCaseForComputer():
    import random
    computerChoice=random.choice(caseTypes)
    return computerChoice
print(GenerateRandomCaseForComputer())

def MakeDecision(valueUser, valueComputer):
    if (valueUser not in caseTypes) or (valueComputer not in caseTypes):
        return -1
    else:
        if (valueComputer==valueUser):
            return "Tie"
        elif (valueUser=="scissor"):
            if (valueComputer=="rock"):
                return "Computer"
            else:
                return "User"
        elif (valueUser == "rock"):
            if (valueComputer=="scissor"):
                return "User"
            else:
                return "Computer"
        else:
            if (valueComputer=="rock"):
                return "User"
            else:
                return "Computer"
    

# End of Answer

# Below is Execution Example, and can be removed.

userInput = 0
while True:
    userInput = int(input("\nMenu: \n[0] scissor, \n[1] rock, \n[2] paper, \n[3] quit \n\nSelect: "))
    if(userInput != 3):
        valueUser = caseTypes[userInput]
        valueComputer = GenerateRandomCaseForComputer()
        valueDecision = MakeDecision(valueUser, valueComputer)
        print("\nResult: User [{0}] vs Computer [{1}] -> Winner is {2}".format(valueUser, valueComputer, valueDecision))
    else:
        break
