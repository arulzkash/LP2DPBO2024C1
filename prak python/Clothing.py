from Product import Product

class Clothing(Product):

    size = ""
    material = ""
    gender = ""

    def __init__(self, size="", material="", gender=""):
        self.size = size
        self.material = material
        self.gender = gender

    def getSize(self):
        return self.size

    def setSize(self, size):
        self.size = size

    def getMaterial(self):
        return self.material

    def setMaterial(self, material):
        self.material = material

    def getGender(self):
        return self.gender

    def setGender(self, gender):
        self.gender = gender
