#include "Product.cpp"
#include <string>

class Clothing : public Product {
private:
    std::string size;
    std::string material;
    std::string gender;

public:
    Clothing() : Product() {
        this->size = "";
        this->material = "";
        this->gender = "";
    }

    Clothing(std::string size, std::string material, std::string gender) : Product() {
        this->size = size;
        this->material = material;
        this->gender = gender;
    }

    std::string getSize() {
        return this->size;
    }

    void setSize(std::string size) {
        this->size = size;
    }

    std::string getMaterial() {
        return this->material;
    }

    void setMaterial(std::string material) {
        this->material = material;
    }

    std::string getGender() {
        return this->gender;
    }

    void setGender(std::string gender) {
        this->gender = gender;
    }
};