public class Shirt extends Clothing {
    private String color, sleeve_type;

    public Shirt()
    {
        this.color = "";
        this.sleeve_type = "";
    }

    public Shirt(String color, String sleeve_type, String size, String material, String gender, String idProduct, String name, String brand, String price) {
        this.color = color;
        this.sleeve_type = sleeve_type;
        setSize(size);
        setMaterial(material);
        setGender(gender);
        setIdProduct(idProduct);
        setName(name);
        setBrand(brand);
        setPrice(price);
    }

    public String getColor() {
        return this.color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public String getSleeve_Type(){
        return this.sleeve_type;
    }

}
