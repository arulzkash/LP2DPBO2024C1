import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Shirt shirt1 = new Shirt();

        System.out.println("Hailow Selamat Datang");
        System.out.println("Berapa objek yang ingin dibuat ?");

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        ArrayList<Shirt> list = new ArrayList<>();

        String color, sleeve_type, size, material, gender, idProduct, name, brand, price;
        for (int i = 0; i < n; i++) {
            System.out.println("Masukkan Color, Sleeve Type, Size, Material, Gender, IDProduct, Name, Brand, Price! :)");
            color = sc.next();
            sleeve_type = sc.next();
            size = sc.next();
            material = sc.next();
            gender = sc.next();
            idProduct = sc.next();
            name = sc.next();
            brand = sc.next();
            price = sc.next();
            Shirt temp = new Shirt(color, sleeve_type, size, material, gender, idProduct, name, brand, price);
            list.add(temp);
        }

        int colorWidth = 0, sleeve_typeWidth = 0, sizeWidth = 0, materialWidth = 0, genderWidth = 0, idProductWidth = 0,
                nameWidth = 0, brandWidth = 0, priceWidth = 0;
        for (Shirt shirt : list) {
            colorWidth = Math.max(colorWidth, shirt.getColor().length());
            sleeve_typeWidth = Math.max(sleeve_typeWidth, shirt.getSleeve_Type().length());
            sizeWidth = Math.max(sizeWidth, shirt.getSize().length());
            materialWidth = Math.max(materialWidth, shirt.getMaterial().length());
            genderWidth = Math.max(genderWidth, shirt.getGender().length());
            idProductWidth = Math.max(idProductWidth, shirt.getIdProduct().length());
            nameWidth = Math.max(nameWidth, shirt.getName().length());
            brandWidth = Math.max(brandWidth, shirt.getBrand().length());
            priceWidth = Math.max(priceWidth, shirt.getPrice().length());
        }

        if (colorWidth < 6) {
            for (int i = 0; i < 5 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 5 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < colorWidth - 5 + 2; i++) {
                System.out.print("-");
            }
        }

        if (sleeve_typeWidth < 12) {
            for (int i = 0; i < 11 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 11 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < sleeve_typeWidth - 11 + 2; i++) {
                System.out.print("-");
            }
        }

        if (sizeWidth < 5) {
            for (int i = 0; i < 4 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 4 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < sizeWidth - 4 + 2; i++) {
                System.out.print("-");
            }
        }

        if (materialWidth < 9) {
            for (int i = 0; i < 8 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 8 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < materialWidth - 8 + 2; i++) {
                System.out.print("-");
            }
        }

        if (genderWidth < 7) {
            for (int i = 0; i < 6 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 6 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < genderWidth - 6 + 2; i++) {
                System.out.print("-");
            }
        }

        if (idProductWidth < 10) {
            for (int i = 0; i < 9 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 9 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < idProductWidth - 9 + 2; i++) {
                System.out.print("-");
            }
        }

        if (nameWidth < 5) {
            for (int i = 0; i < 4 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 4 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < nameWidth - 4 + 2; i++) {
                System.out.print("-");
            }
        }

        if (brandWidth < 6) {
            for (int i = 0; i < 5 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 5 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < brandWidth - 5 + 2; i++) {
                System.out.print("-");
            }
        }

        if (priceWidth < 6) {
            for (int i = 0; i < 5 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 5 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < priceWidth - 5 + 2; i++) {
                System.out.print("-");
            }
        }

        System.out.println("-");

        // -----------------------------------------HEADER----------------------------------------------------------------
        if (colorWidth < 6) {
            System.out.print("| Color  ");
        } else {
            System.out.print("| Color");
            for (int i = 0; i < colorWidth - 5 + 2; i++) {
                System.out.print(" ");
            }
        }

        if (sleeve_typeWidth < 12) {
            System.out.print("| Sleeve Type  ");
        } else {
            System.out.print("| Sleeve Type");
            for (int i = 0; i < sleeve_typeWidth - 11 + 2; i++) {
                System.out.print(" ");
            }
        }

        if (sizeWidth < 5) {
            System.out.print("| Size  ");
        } else {
            System.out.print("| Size");
            for (int i = 0; i < sizeWidth - 4 + 2; i++) {
                System.out.print(" ");
            }
        }

        if (materialWidth < 9) {
            System.out.print("| Material  ");
        } else {
            System.out.print("| Material");
            for (int i = 0; i < materialWidth - 8 + 2; i++) {
                System.out.print(" ");
            }
        }

        if (genderWidth < 7) {
            System.out.print("| Gender  ");
        } else {
            System.out.print("| Gender");
            for (int i = 0; i < genderWidth - 6 + 2; i++) {
                System.out.print(" ");
            }
        }

        if (idProductWidth < 10) {
            System.out.print("| idProduct  ");
        } else {
            System.out.print("| idProduct");
            for (int i = 0; i < idProductWidth - 9 + 2; i++) {
                System.out.print(" ");
            }
        }

        if (nameWidth < 5) {
            System.out.print("| Name  ");
        } else {
            System.out.print("| Name");
            for (int i = 0; i < nameWidth - 4 + 2; i++) {
                System.out.print(" ");
            }
        }

        if (brandWidth < 6) {
            System.out.print("| Brand  ");
        } else {
            System.out.print("| Brand");
            for (int i = 0; i < brandWidth - 5 + 2; i++) {
                System.out.print(" ");
            }
        }

        if (priceWidth < 6) {
            System.out.print("| Price  ");
        } else {
            System.out.print("| Price");
            for (int i = 0; i < priceWidth - 5 + 2; i++) {
                System.out.print(" ");
            }
        }

        System.out.println("|");

        if (colorWidth < 6) {
            for (int i = 0; i < 5 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 5 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < colorWidth - 5 + 2; i++) {
                System.out.print("-");
            }
        }

        if (sleeve_typeWidth < 12) {
            for (int i = 0; i < 11 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 11 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < sleeve_typeWidth - 11 + 2; i++) {
                System.out.print("-");
            }
        }

        if (sizeWidth < 5) {
            for (int i = 0; i < 4 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 4 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < sizeWidth - 4 + 2; i++) {
                System.out.print("-");
            }
        }

        if (materialWidth < 9) {
            for (int i = 0; i < 8 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 8 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < materialWidth - 8 + 2; i++) {
                System.out.print("-");
            }
        }

        if (genderWidth < 7) {
            for (int i = 0; i < 6 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 6 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < genderWidth - 6 + 2; i++) {
                System.out.print("-");
            }
        }

        if (idProductWidth < 10) {
            for (int i = 0; i < 9 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 9 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < idProductWidth - 9 + 2; i++) {
                System.out.print("-");
            }
        }

        if (nameWidth < 5) {
            for (int i = 0; i < 4 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 4 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < nameWidth - 4 + 2; i++) {
                System.out.print("-");
            }
        }

        if (brandWidth < 6) {
            for (int i = 0; i < 5 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 5 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < brandWidth - 5 + 2; i++) {
                System.out.print("-");
            }
        }

        if (priceWidth < 6) {
            for (int i = 0; i < 5 + 2 + 2; i++) {
                System.out.print("-");
            }
        } else {
            for (int i = 0; i < 5 + 2; i++) {
                System.out.print("-");
            }
            for (int i = 0; i < priceWidth - 5 + 2; i++) {
                System.out.print("-");
            }
        }

        System.out.println("-");

        // -----------------------------------------------------------------ISI--------------------------------------------------------------------
        for (int count = 0; count < list.size(); count++) {

            Shirt shirt = list.get(count);
            System.out.print("| " + shirt.getColor());
            if (colorWidth < 6) {
                for (int i = 0; i < 5 - shirt.getColor().length() + 2; i++) {
                    System.out.print(" ");
                }
            } else {
                for (int i = 0; i < colorWidth - shirt.getColor().length() + 2; i++) {
                    System.out.print(" ");
                }
            }

            System.out.print("| " + shirt.getSleeve_Type());
            if (sleeve_typeWidth < 12) {
                for (int i = 0; i < 11 - shirt.getSleeve_Type().length() + 2; i++) {
                    System.out.print(" ");
                }
            } else {
                for (int i = 0; i < sleeve_typeWidth - shirt.getSleeve_Type().length() + 2; i++) {
                    System.out.print(" ");
                }
            }

            System.out.print("| " + shirt.getSize());
            if (sizeWidth < 5) {
                for (int i = 0; i < 4 - shirt.getSize().length() + 2; i++) {
                    System.out.print(" ");
                }
            } else {
                for (int i = 0; i < sizeWidth - shirt.getSize().length() + 2; i++) {
                    System.out.print(" ");
                }
            }

            System.out.print("| " + shirt.getMaterial());
            if (materialWidth < 9) {
                for (int i = 0; i < 8 - shirt.getMaterial().length() + 2; i++) {
                    System.out.print(" ");
                }
            } else {
                for (int i = 0; i < materialWidth - shirt.getMaterial().length() + 2; i++) {
                    System.out.print(" ");
                }
            }

            System.out.print("| " + shirt.getGender());
            if (genderWidth < 7) {
                for (int i = 0; i < 6 - shirt.getGender().length() + 2; i++) {
                    System.out.print(" ");
                }
            } else {
                for (int i = 0; i < genderWidth - shirt.getGender().length() + 2; i++) {
                    System.out.print(" ");
                }
            }

            System.out.print("| " + shirt.getIdProduct());
            if (idProductWidth < 10) {
                for (int i = 0; i < 9 - shirt.getIdProduct().length() + 2; i++) {
                    System.out.print(" ");
                }
            } else {
                for (int i = 0; i < idProductWidth - shirt.getIdProduct().length() + 2; i++) {
                    System.out.print(" ");
                }
            }

            System.out.print("| " + shirt.getName());
            if (nameWidth < 5) {
                for (int i = 0; i < 4 - shirt.getName().length() + 2; i++) {
                    System.out.print(" ");
                }
            } else {
                for (int i = 0; i < nameWidth - shirt.getName().length() + 2; i++) {
                    System.out.print(" ");
                }
            }

            System.out.print("| " + shirt.getBrand());
            if (brandWidth < 6) {
                for (int i = 0; i < 5 - shirt.getBrand().length() + 2; i++) {
                    System.out.print(" ");
                }
            } else {
                for (int i = 0; i < brandWidth - shirt.getBrand().length() + 2; i++) {
                    System.out.print(" ");
                }
            }

            System.out.print("| " + shirt.getPrice());
            if (priceWidth < 6) {
                for (int i = 0; i < 5 - shirt.getPrice().length() + 2; i++) {
                    System.out.print(" ");
                }
            } else {
                for (int i = 0; i < priceWidth - shirt.getPrice().length() + 2; i++) {
                    System.out.print(" ");
                }
            }

            System.out.println("|");

            if (colorWidth < 6) {
                for (int i = 0; i < 5 + 2 + 2; i++) {
                    System.out.print("-");
                }
            } else {
                for (int i = 0; i < 5 + 2; i++) {
                    System.out.print("-");
                }
                for (int i = 0; i < colorWidth - 5 + 2; i++) {
                    System.out.print("-");
                }
            }

            if (sleeve_typeWidth < 12) {
                for (int i = 0; i < 11 + 2 + 2; i++) {
                    System.out.print("-");
                }
            } else {
                for (int i = 0; i < 11 + 2; i++) {
                    System.out.print("-");
                }
                for (int i = 0; i < sleeve_typeWidth - 11 + 2; i++) {
                    System.out.print("-");
                }
            }

            if (sizeWidth < 5) {
                for (int i = 0; i < 4 + 2 + 2; i++) {
                    System.out.print("-");
                }
            } else {
                for (int i = 0; i < 4 + 2; i++) {
                    System.out.print("-");
                }
                for (int i = 0; i < sizeWidth - 4 + 2; i++) {
                    System.out.print("-");
                }
            }

            if (materialWidth < 9) {
                for (int i = 0; i < 8 + 2 + 2; i++) {
                    System.out.print("-");
                }
            } else {
                for (int i = 0; i < 8 + 2; i++) {
                    System.out.print("-");
                }
                for (int i = 0; i < materialWidth - 8 + 2; i++) {
                    System.out.print("-");
                }
            }

            if (genderWidth < 7) {
                for (int i = 0; i < 6 + 2 + 2; i++) {
                    System.out.print("-");
                }
            } else {
                for (int i = 0; i < 6 + 2; i++) {
                    System.out.print("-");
                }
                for (int i = 0; i < genderWidth - 6 + 2; i++) {
                    System.out.print("-");
                }
            }

            if (idProductWidth < 10) {
                for (int i = 0; i < 9 + 2 + 2; i++) {
                    System.out.print("-");
                }
            } else {
                for (int i = 0; i < 9 + 2; i++) {
                    System.out.print("-");
                }
                for (int i = 0; i < idProductWidth - 9 + 2; i++) {
                    System.out.print("-");
                }
            }

            if (nameWidth < 5) {
                for (int i = 0; i < 4 + 2 + 2; i++) {
                    System.out.print("-");
                }
            } else {
                for (int i = 0; i < 4 + 2; i++) {
                    System.out.print("-");
                }
                for (int i = 0; i < nameWidth - 4 + 2; i++) {
                    System.out.print("-");
                }
            }

            if (brandWidth < 6) {
                for (int i = 0; i < 5 + 2 + 2; i++) {
                    System.out.print("-");
                }
            } else {
                for (int i = 0; i < 5 + 2; i++) {
                    System.out.print("-");
                }
                for (int i = 0; i < brandWidth - 5 + 2; i++) {
                    System.out.print("-");
                }
            }

            if (priceWidth < 6) {
                for (int i = 0; i < 5 + 2 + 2; i++) {
                    System.out.print("-");
                }
            } else {
                for (int i = 0; i < 5 + 2; i++) {
                    System.out.print("-");
                }
                for (int i = 0; i < priceWidth - 5 + 2; i++) {
                    System.out.print("-");
                }
            }

            System.out.println("-");
        }

    }
}
