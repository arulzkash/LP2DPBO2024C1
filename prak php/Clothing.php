<?php
require('Product.php');

class Clothing extends Product {
    private $size, $material, $gender;

    // public function __construct() {
    //     parent::__construct(); // Memanggil konstruktor kelas induk
    //     $this->size = "";
    //     $this->material = "";
    //     $this->gender = "";
    // }

    public function __construct($size="", $material="", $gender="") {
        parent::__construct(); // Memanggil konstruktor kelas induk
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    public function getSize() {
        return $this->size;
    }

    public function setSize($size) {
        $this->size = $size;
    }

    public function getMaterial() {
        return $this->material;
    }

    public function setMaterial($material) {
        $this->material = $material;
    }

    public function getGender() {
        return $this->gender;
    }

    public function setGender($gender) {
        $this->gender = $gender;
    }
}

?>