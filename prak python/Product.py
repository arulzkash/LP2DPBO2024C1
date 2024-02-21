class Product:

    idProduct = ""
    name = ""
    brand = ""
    price = ""
    
    def __init__(self, idProduct="", name="", brand="", price=""):
        self.idProduct = idProduct
        self.name = name
        self.brand = brand
        self.price = price

    def getIdProduct(self):
        return self.idProduct

    def setIdProduct(self, idProduct):
        self.idProduct = idProduct

    def getName(self):
        return self.name

    def setName(self, name):
        self.name = name

    def getBrand(self):
        return self.brand

    def setBrand(self, brand):
        self.brand = brand

    def getPrice(self):
        return self.price

    def setPrice(self, price):
        self.price = price
        