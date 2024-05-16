while(1):
    a = int(input()) #split 안써도 됨 자동으로 해줌
    if(a==0):
        break
    if(a%42==0):
        print("PREMIADO")
    else:
        print("TENTE NOVAMENTE")