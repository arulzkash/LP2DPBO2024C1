from Clothing import Clothing

class Shirt(Clothing):

    color = ""
    sleeve_type = ""
    
    def __init__(self, color="", sleeve_type="", size="", material="", gender="", idProduct="", name="", brand="", price=""):
        super().__init__(size, material, gender)
        self.color = color
        self.sleeve_type = sleeve_type
        self.setIdProduct(idProduct)
        self.setName(name)
        self.setBrand(brand)
        self.setPrice(price)

    def getColor(self):
        return self.color

    def setColor(self, color):
        self.color = color

    def getSleeve_Type(self):
        return self.sleeve_type
    
    def setSleeve_Type(self, sleeve_type):
        self.sleeve_type = sleeve_type
