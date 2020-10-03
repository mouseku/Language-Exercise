def getResult(status):
    if ("_" in status):
        return "You lose"
    else:
        return "You win"

def updateStatus(word, x, status):
    word.count(x)                                   #단어 수 세기
    status_list = list(status)                      #문자열 > 리스트
    if (word.count(x)==0):                          #단어 안에 x가 없을 때
        status_str = ''.join(status_list)           #리스트 > 문자열
        new_status = status_str                     #문자열 그대로
    elif (word.count(x)==1):                        #단어에 x가 1개 있을 때 -> x자리를 찾아서 빈칸을 x로 바꿔줌
        indexNum = int(word.find(x))                #x가 사용된 인덱스 찾기
        status_list[indexNum]=x                     #x가 사용된 인덱스에 빈칸을 x로 대체
        status_str = ''.join(status_list)       
        new_status = status_str                     #반환값 갱신
    else:                   #if word.count(x)>=2    #단어에 x가 2개 이상 포함될 때
        indexNum = 0                                #루프를 위해 인덱스넘버 초기화
        while True:
            indexNum = int(word.find(x,indexNum+1)) #x가 속한 첫 번째 인덱스 찾기 + 한 바퀴 돌고 x가 속한 두 번째 인덱스 찾기... 
            if (indexNum == -1):                    #인덱스 찾다가 없으면 -1 일 때
                break                               #루프탈출
            else:                                   #계속 인덱스 찾으면
                status_list[indexNum]=x             #빈칸부분 x로 대체
        status_str = ''.join(status_list)
        new_status = status_str                     #반환값 갱신
    return new_status                               #반환

def startGame(word):
    count = len(word)                              #사용자에게 주어진 기회 설정
    status = '_'*len(word)                         #현재 상태 초기화
    while True:
        if count==0:                               #기회가 없으면
            break                                  #루프 탈출
        else:
            print(count)                               #남은 기회
            print(status)                              #현재 상태
            UserSelect = str(input())                      #사용자가 입력
            status = updateStatus(word, UserSelect, status)#사용자가 입력한 값이 단어에 있는지 확인
            count = count - 1                              #기회 1번 날라감
    print(status)
    return getResult(status)


                
word = 'HIPPOPOTAMUS'
result = startGame(word)
print(result)