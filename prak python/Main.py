from Product import Product
from Clothing import Clothing
from Shirt import Shirt

print("Hailow Selamat Datang")
print("Berapa objek yang ingin dibuat ?")

n = int(input())

shirtList = []

for i in range(n):
    print(
        "Masukkan Color, Sleeve Type, Size, Material, Gender, IDProduct, Name, Brand, Price! :)"
    )
    color = input()
    sleeve_type = input()
    size = input()
    material = input()
    gender = input()
    idProduct = input()
    name = input()
    brand = input()
    price = input()
    temp = Shirt(
        color, sleeve_type, size, material, gender, idProduct, name, brand, price
    )
    shirtList.append(temp)

colorWidth = 0
sleeve_typeWidth = 0
sizeWidth = 0
materialWidth = 0
genderWidth = 0
idProductWidth = 0
nameWidth = 0
brandWidth = 0
priceWidth = 0

for shirt in shirtList:
    colorWidth = max(colorWidth, len(shirt.getColor()))
    sleeve_typeWidth = max(sleeve_typeWidth, len(shirt.getSleeve_Type()))
    sizeWidth = max(sizeWidth, len(shirt.getSize()))
    materialWidth = max(materialWidth, len(shirt.getMaterial()))
    genderWidth = max(genderWidth, len(shirt.getGender()))
    idProductWidth = max(idProductWidth, len(shirt.getIdProduct()))
    nameWidth = max(nameWidth, len(shirt.getName()))
    brandWidth = max(brandWidth, len(shirt.getBrand()))
    priceWidth = max(priceWidth, len(shirt.getPrice()))

if colorWidth < 6:
    print("-" * (5 + 2 + 2), end="")
else:
    print("-" * (5 + 2), end="")
    print("-" * (colorWidth - 5 + 2), end="")

if sleeve_typeWidth < 12:
    print("-" * (11 + 2 + 2), end="")
else:
    print("-" * (11 + 2), end="")
    print("-" * (sleeve_typeWidth - 11 + 2), end="")

if sizeWidth < 5:
    print("-" * (4 + 2 + 2), end="")
else:
    print("-" * (4 + 2), end="")
    print("-" * (sizeWidth - 4 + 2), end="")

if materialWidth < 9:
    print("-" * (8 + 2 + 2), end="")
else:
    print("-" * (8 + 2), end="")
    print("-" * (materialWidth - 8 + 2), end="")

if genderWidth < 7:
    print("-" * (6 + 2 + 2), end="")
else:
    print("-" * (6 + 2), end="")
    print("-" * (genderWidth - 6 + 2), end="")

if idProductWidth < 10:
    print("-" * (9 + 2 + 2), end="")
else:
    print("-" * (9 + 2), end="")
    print("-" * (idProductWidth - 9 + 2), end="")

if nameWidth < 5:
    print("-" * (4 + 2 + 2), end="")
else:
    print("-" * (4 + 2), end="")
    print("-" * (nameWidth - 4 + 2), end="")

if brandWidth < 6:
    print("-" * (5 + 2 + 2), end="")
else:
    print("-" * (5 + 2), end="")
    print("-" * (brandWidth - 5 + 2), end="")

if priceWidth < 6:
    print("-" * (5 + 2 + 2), end="")
else:
    print("-" * (5 + 2), end="")
    print("-" * (priceWidth - 5 + 2), end="")

print("-")


if colorWidth < 6:
    print("| Color  ", end="")
else:
    print("| Color", end="")
    for i in range(colorWidth - 5 + 2):
        print(" ", end="")

if sleeve_typeWidth < 12:
    print("| Sleeve Type  ", end="")
else:
    print("| Sleeve Type", end="")
    for i in range(sleeve_typeWidth - 11 + 2):
        print(" ", end="")

if sizeWidth < 5:
    print("| Size  ", end="")
else:
    print("| Size", end="")
    for i in range(sizeWidth - 4 + 2):
        print(" ", end="")

if materialWidth < 9:
    print("| Material  ", end="")
else:
    print("| Material", end="")
    for i in range(materialWidth - 8 + 2):
        print(" ", end="")

if genderWidth < 7:
    print("| Gender  ", end="")
else:
    print("| Gender", end="")
    for i in range(genderWidth - 6 + 2):
        print(" ", end="")

if idProductWidth < 10:
    print("| idProduct  ", end="")
else:
    print("| idProduct", end="")
    for i in range(idProductWidth - 9 + 2):
        print(" ", end="")

if nameWidth < 5:
    print("| Name  ", end="")
else:
    print("| Name", end="")
    for i in range(nameWidth - 4 + 2):
        print(" ", end="")

if brandWidth < 6:
    print("| Brand  ", end="")
else:
    print("| Brand", end="")
    for i in range(brandWidth - 5 + 2):
        print(" ", end="")

if priceWidth < 6:
    print("| Price  ", end="")
else:
    print("| Price", end="")
    for i in range(priceWidth - 5 + 2):
        print(" ", end="")

print("|")

if colorWidth < 6:
    print("-" * (5 + 2 + 2), end="")
else:
    print("-" * (5 + 2), end="")
    print("-" * (colorWidth - 5 + 2), end="")

if sleeve_typeWidth < 12:
    print("-" * (11 + 2 + 2), end="")
else:
    print("-" * (11 + 2), end="")
    print("-" * (sleeve_typeWidth - 11 + 2), end="")

if sizeWidth < 5:
    print("-" * (4 + 2 + 2), end="")
else:
    print("-" * (4 + 2), end="")
    print("-" * (sizeWidth - 4 + 2), end="")

if materialWidth < 9:
    print("-" * (8 + 2 + 2), end="")
else:
    print("-" * (8 + 2), end="")
    print("-" * (materialWidth - 8 + 2), end="")

if genderWidth < 7:
    print("-" * (6 + 2 + 2), end="")
else:
    print("-" * (6 + 2), end="")
    print("-" * (genderWidth - 6 + 2), end="")

if idProductWidth < 10:
    print("-" * (9 + 2 + 2), end="")
else:
    print("-" * (9 + 2), end="")
    print("-" * (idProductWidth - 9 + 2), end="")

if nameWidth < 5:
    print("-" * (4 + 2 + 2), end="")
else:
    print("-" * (4 + 2), end="")
    print("-" * (nameWidth - 4 + 2), end="")

if brandWidth < 6:
    print("-" * (5 + 2 + 2), end="")
else:
    print("-" * (5 + 2), end="")
    print("-" * (brandWidth - 5 + 2), end="")

if priceWidth < 6:
    print("-" * (5 + 2 + 2), end="")
else:
    print("-" * (5 + 2), end="")
    print("-" * (priceWidth - 5 + 2), end="")

print("-")

for count in range(len(shirtList)):
    shirt = shirtList[count]
    print("| " + shirt.getColor(), end="")
    if colorWidth < 6:
        for i in range(5 - len(shirt.getColor()) + 2):
            print(" ", end="")
    else:
        for i in range(colorWidth - len(shirt.getColor()) + 2):
            print(" ", end="")

    print("| " + shirt.getSleeve_Type(), end="")
    if sleeve_typeWidth < 12:
        for i in range(11 - len(shirt.getSleeve_Type()) + 2):
            print(" ", end="")
    else:
        for i in range(sleeve_typeWidth - len(shirt.getSleeve_Type()) + 2):
            print(" ", end="")

    print("| " + shirt.getSize(), end="")
    if sizeWidth < 5:
        for i in range(4 - len(shirt.getSize()) + 2):
            print(" ", end="")
    else:
        for i in range(sizeWidth - len(shirt.getSize()) + 2):
            print(" ", end="")

    print("| " + shirt.getMaterial(), end="")
    if materialWidth < 9:
        for i in range(8 - len(shirt.getMaterial()) + 2):
            print(" ", end="")
    else:
        for i in range(materialWidth - len(shirt.getMaterial()) + 2):
            print(" ", end="")

    print("| " + shirt.getGender(), end="")
    if genderWidth < 7:
        for i in range(6 - len(shirt.getGender()) + 2):
            print(" ", end="")
    else:
        for i in range(genderWidth - len(shirt.getGender()) + 2):
            print(" ", end="")

    print("| " + shirt.getIdProduct(), end="")
    if idProductWidth < 10:
        for i in range(9 - len(shirt.getIdProduct()) + 2):
            print(" ", end="")
    else:
        for i in range(idProductWidth - len(shirt.getIdProduct()) + 2):
            print(" ", end="")

    print("| " + shirt.getName(), end="")
    if nameWidth < 5:
        for i in range(4 - len(shirt.getName()) + 2):
            print(" ", end="")
    else:
        for i in range(nameWidth - len(shirt.getName()) + 2):
            print(" ", end="")

    print("| " + shirt.getBrand(), end="")
    if brandWidth < 6:
        for i in range(5 - len(shirt.getBrand()) + 2):
            print(" ", end="")
    else:
        for i in range(brandWidth - len(shirt.getBrand()) + 2):
            print(" ", end="")

    print("| " + shirt.getPrice(), end="")
    if priceWidth < 6:
        for i in range(5 - len(shirt.getPrice()) + 2):
            print(" ", end="")
    else:
        for i in range(priceWidth - len(shirt.getPrice()) + 2):
            print(" ", end="")
    print("|")

    if colorWidth < 6:
        print("-" * (5 + 2 + 2), end="")
    else:
        print("-" * (5 + 2), end="")
        print("-" * (colorWidth - 5 + 2), end="")

    if sleeve_typeWidth < 12:
        print("-" * (11 + 2 + 2), end="")
    else:
        print("-" * (11 + 2), end="")
        print("-" * (sleeve_typeWidth - 11 + 2), end="")

    if sizeWidth < 5:
        print("-" * (4 + 2 + 2), end="")
    else:
        print("-" * (4 + 2), end="")
        print("-" * (sizeWidth - 4 + 2), end="")

    if materialWidth < 9:
        print("-" * (8 + 2 + 2), end="")
    else:
        print("-" * (8 + 2), end="")
        print("-" * (materialWidth - 8 + 2), end="")

    if genderWidth < 7:
        print("-" * (6 + 2 + 2), end="")
    else:
        print("-" * (6 + 2), end="")
        print("-" * (genderWidth - 6 + 2), end="")

    if idProductWidth < 10:
        print("-" * (9 + 2 + 2), end="")
    else:
        print("-" * (9 + 2), end="")
        print("-" * (idProductWidth - 9 + 2), end="")

    if nameWidth < 5:
        print("-" * (4 + 2 + 2), end="")
    else:
        print("-" * (4 + 2), end="")
        print("-" * (nameWidth - 4 + 2), end="")

    if brandWidth < 6:
        print("-" * (5 + 2 + 2), end="")
    else:
        print("-" * (5 + 2), end="")
        print("-" * (brandWidth - 5 + 2), end="")

    if priceWidth < 6:
        print("-" * (5 + 2 + 2), end="")
    else:
        print("-" * (5 + 2), end="")
        print("-" * (priceWidth - 5 + 2), end="")

    print("-")
