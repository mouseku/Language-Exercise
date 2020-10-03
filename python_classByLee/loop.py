import random #랜덤 모듈 import
userNum=int(input("Enter your number between 0 to 100: ")) #ai가 맞출 숫자 고르기
startNum=0 #시작 범위
endNum=101 #끝 범위
while True:
    ai_Num=random.randrange(startNum,endNum) #ai가 0~100중 하나 선택
    print(ai_Num) #ai값 보여주기
    userAnswer=int(input("Is it right?")) #유저가 큰지 작은지 같은지 정하기
    if userAnswer == 2: #userAnswer < ai_Num ex) 50 : 70
        endNum = ai_Num
    elif userAnswer == 0: #userAnswer > ai_Num ex 70 : 50
        startNum = ai_Num+1
    elif userAnswer == 1: #userAnswer = ai_Num
        print("AI figure out the numbers")
        break
