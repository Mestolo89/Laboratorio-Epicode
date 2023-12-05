listaA = ["Andrea", "Rosario", "Matteo","Sempronio"]

listaB = []


def contaCaratteri(lista):

    for element in lista:
        listaB.append(len(element))

    return listaB


print(contaCaratteri(listaA))

