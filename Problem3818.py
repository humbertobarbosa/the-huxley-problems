veiculos = {
    "cruzeta":  [2012, 2016],
    "sonic":    [2012, 2014],
    "classico": [2012, 2016],
    "celtico":  [2013, 2016],
    "batedor":  [2013, 2018]
}

vcl = input().lower()
ano = int(input())

if vcl in veiculos:
    if not 2012 <= ano <= 2018:
        print("So existe recall para veiculos fabricados entre 2012 e 2018")
    elif veiculos[vcl][0] <= ano <= veiculos[vcl][1]:
        print("Dirija-se a Concessionaria CWT mais próxima de voce")
        if vcl == "celtico" or vcl == "classico":
            print("Voce podera ganhar 500 reais em combustivel")
    else:
        print("Nao tem recall para o ano do seu veiculo")
else:
    print("Seu veiculo nao estah na lista do recall")