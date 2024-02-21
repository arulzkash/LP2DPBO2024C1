<?php
require('Shirt.php');

echo "Hailow Selamat Datang\n";
// echo "Berapa objek yang ingin dibuat ?";

// Membuat objek-objek Shirt
$shirt1 = new Shirt("Putih", "Pendek", "M", "Katun", "Unisex", "1001", "Kaos Polos Putih", "CottonCraze", "$15.99");
$shirt2 = new Shirt("Hitam", "Panjang", "L", "Sifon", "Wanita", "1002", "Dress Floral Hitam", "Fashionista", "$29.99");

$shirts = array($shirt1, $shirt2);

// Membuat tabel

echo "<h2>List Baju</h2>";
echo "<table border='1'>";
echo "<tr>
        <th>Color</th>
        <th>Sleeve Type</th>
        <th>Size</th>
        <th>Material</th>
        <th>Gender</th>
        <th>ID Product</th>
        <th>Name</th>
        <th>Brand</th>
        <th>Prize</th>
      </tr>";

// Loop melalui array shirts untuk menampilkan isi tabel
foreach ($shirts as $shirt) {
    echo "<tr>";
    echo "<td>" . $shirt->getColor() . "</td>";
    echo "<td>" . $shirt->getSleeveType() . "</td>";
    echo "<td>" . $shirt->getSize() . "</td>";
    echo "<td>" . $shirt->getMaterial() . "</td>";
    echo "<td>" . $shirt->getGender() . "</td>";
    echo "<td>" . $shirt->getIdProduct() . "</td>";
    echo "<td>" . $shirt->getName() . "</td>";
    echo "<td>" . $shirt->getBrand() . "</td>";
    echo "<td>" . $shirt->getPrice() . "</td>";
    echo "</tr>";
}

echo "</table>";
