<?php
require('Clothing.php');

class Shirt extends Clothing {
    private $color, $sleeve_type;

    // public function __construct() {
    //     parent::__construct(); // Memanggil konstruktor kelas induk
    //     $this->color = "";
    //     $this->sleeve_type = "";
    // }

    public function __construct($color="", $sleeve_type="", $size="", $material="", $gender="", $idProduct="", $name="", $brand="", $price="") {
        // parent::__construct($size, $material, $gender); // Memanggil konstruktor kelas Clothing
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
        $this->setSize(($size));
        $this->setMaterial($material);
        $this->setGender($gender);
        $this->setIdProduct($idProduct);
        $this->setName($name);
        $this->setBrand($brand);
        $this->setPrice($price);
    }

    public function getColor() {
        return $this->color;
    }

    public function setColor($color) {
        $this->color = $color;
    }

    public function getSleeveType() {
        return $this->sleeve_type;
    }

    public function setSleeveType($sleeveType) {
        $this->sleeve_type = $sleeveType;
    }
}

?>
