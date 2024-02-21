#include "Clothing.cpp"
#include <string>

class Shirt : public Clothing {
private:
    std::string color;
    std::string sleeve_type;

public:
    Shirt() : Clothing() {
        this->color = "";
        this->sleeve_type = "";
    }

    Shirt(std::string color, std::string sleeve_type, std::string size, std::string material, std::string gender, std::string idProduct, std::string name, std::string brand, std::string price)
        : Clothing(size, material, gender) {
        this->color = color;
        this->sleeve_type = sleeve_type;
        setIdProduct(idProduct);
        setName(name);
        setBrand(brand);
        setPrice(price);
    }

    std::string getColor() {
        return this->color;
    }

    void setColor(std::string color) {
        this->color = color;
    }

    std::string getSleeveType() {
        return this->sleeve_type;
    }

    void setSleeveType(std::string sleeveType) {
        this->sleeve_type = sleeveType;
    }
};