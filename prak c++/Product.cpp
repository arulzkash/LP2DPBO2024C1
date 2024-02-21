#include <string>

class Product {
private:
    std::string idProduct;
    std::string name;
    std::string brand;
    std::string price;

public:
    Product() {
        this->idProduct = "";
        this->name = "";
        this->brand = "";
        this->price = "";
    }

    Product(std::string idProduct, std::string name, std::string brand, std::string price) {
        this->idProduct = idProduct;
        this->name = name;
        this->brand = brand;
        this->price = price;
    }

    std::string getIdProduct() {
        return this->idProduct;
    }

    void setIdProduct(std::string idProduct) {
        this->idProduct = idProduct;
    }

    std::string getName() {
        return this->name;
    }

    void setName(std::string name) {
        this->name = name;
    }

    std::string getBrand() {
        return this->brand;
    }

    void setBrand(std::string brand) {
        this->brand = brand;
    }

    std::string getPrice() {
        return this->price;
    }

    void setPrice(std::string price) {
        this->price = price;
    }
};