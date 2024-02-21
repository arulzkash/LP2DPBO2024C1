#include <iostream>
#include <vector>
#include <string>
// #include "Product.cpp"
// #include "Clothing.cpp"
#include "Shirt.cpp"

int main()
{
    using namespace std;

    cout << "Hailow Selamat Datang" << endl;
    cout << "Berapa objek yang ingin dibuat ?" << endl;

    int n;
    cin >> n;

    vector<Shirt> list;

    string color, sleeve_type, size, material, gender, idProduct, name, brand, price;
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan Color, Sleeve Type, Size, Material, Gender, IDProduct, Name, Brand, Price! :)" << endl;
        cin >> color >> sleeve_type >> size >> material >> gender >> idProduct >> name >> brand >> price;
        Shirt temp(color, sleeve_type, size, material, gender, idProduct, name, brand, price);
        list.push_back(temp);
    }

    int colorWidth = 0, sleeve_typeWidth = 0, sizeWidth = 0, materialWidth = 0, genderWidth = 0, idProductWidth = 0,
        nameWidth = 0, brandWidth = 0, priceWidth = 0;

    for (Shirt shirt : list)
    {
        colorWidth = max(colorWidth, static_cast<int>(shirt.getColor().length()));
        sleeve_typeWidth = max(sleeve_typeWidth, static_cast<int>(shirt.getSleeveType().length()));
        sizeWidth = max(sizeWidth, static_cast<int>(shirt.getSize().length()));
        materialWidth = max(materialWidth, static_cast<int>(shirt.getMaterial().length()));
        genderWidth = max(genderWidth, static_cast<int>(shirt.getGender().length()));
        idProductWidth = max(idProductWidth, static_cast<int>(shirt.getIdProduct().length()));
        nameWidth = max(nameWidth, static_cast<int>(shirt.getName().length()));
        brandWidth = max(brandWidth, static_cast<int>(shirt.getBrand().length()));
        priceWidth = max(priceWidth, static_cast<int>(shirt.getPrice().length()));
    }

    if (colorWidth < 6)
    {
        for (int i = 0; i < 5 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 5 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < colorWidth - 5 + 2; i++)
        {
            cout << "-";
        }
    }

    if (sleeve_typeWidth < 12)
    {
        for (int i = 0; i < 11 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 11 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < sleeve_typeWidth - 11 + 2; i++)
        {
            cout << "-";
        }
    }

    if (sizeWidth < 5)
    {
        for (int i = 0; i < 4 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 4 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < sizeWidth - 4 + 2; i++)
        {
            cout << "-";
        }
    }

    if (materialWidth < 9)
    {
        for (int i = 0; i < 8 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 8 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < materialWidth - 8 + 2; i++)
        {
            cout << "-";
        }
    }

    if (genderWidth < 7)
    {
        for (int i = 0; i < 6 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 6 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < genderWidth - 6 + 2; i++)
        {
            cout << "-";
        }
    }

    if (idProductWidth < 10)
    {
        for (int i = 0; i < 9 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 9 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < idProductWidth - 9 + 2; i++)
        {
            cout << "-";
        }
    }

    if (nameWidth < 5)
    {
        for (int i = 0; i < 4 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 4 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < nameWidth - 4 + 2; i++)
        {
            cout << "-";
        }
    }

    if (brandWidth < 6)
    {
        for (int i = 0; i < 5 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 5 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < brandWidth - 5 + 2; i++)
        {
            cout << "-";
        }
    }

    if (priceWidth < 6)
    {
        for (int i = 0; i < 5 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 5 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < priceWidth - 5 + 2; i++)
        {
            cout << "-";
        }
    }

    cout << "-\n";

    if (colorWidth < 6)
    {
        cout << "| Color  ";
    }
    else
    {
        cout << "| Color";
        for (int i = 0; i < colorWidth - 5 + 2; i++)
        {
            cout << " ";
        }
    }

    if (sleeve_typeWidth < 12)
    {
        cout << "| Sleeve Type  ";
    }
    else
    {
        cout << "| Sleeve Type";
        for (int i = 0; i < sleeve_typeWidth - 11 + 2; i++)
        {
            cout << " ";
        }
    }

    if (sizeWidth < 5)
    {
        cout << "| Size  ";
    }
    else
    {
        cout << "| Size";
        for (int i = 0; i < sizeWidth - 4 + 2; i++)
        {
            cout << " ";
        }
    }

    if (materialWidth < 9)
    {
        cout << "| Material  ";
    }
    else
    {
        cout << "| Material";
        for (int i = 0; i < materialWidth - 8 + 2; i++)
        {
            cout << " ";
        }
    }

    if (genderWidth < 7)
    {
        cout << "| Gender  ";
    }
    else
    {
        cout << "| Gender";
        for (int i = 0; i < genderWidth - 6 + 2; i++)
        {
            cout << " ";
        }
    }

    if (idProductWidth < 10)
    {
        cout << "| idProduct  ";
    }
    else
    {
        cout << "| idProduct";
        for (int i = 0; i < idProductWidth - 9 + 2; i++)
        {
            cout << " ";
        }
    }

    if (nameWidth < 5)
    {
        cout << "| Name  ";
    }
    else
    {
        cout << "| Name";
        for (int i = 0; i < nameWidth - 4 + 2; i++)
        {
            cout << " ";
        }
    }

    if (brandWidth < 6)
    {
        cout << "| Brand  ";
    }
    else
    {
        cout << "| Brand";
        for (int i = 0; i < brandWidth - 5 + 2; i++)
        {
            cout << " ";
        }
    }

    if (priceWidth < 6)
    {
        cout << "| Price  ";
    }
    else
    {
        cout << "| Price";
        for (int i = 0; i < priceWidth - 5 + 2; i++)
        {
            cout << " ";
        }
    }

    cout << "|" << endl;

    if (colorWidth < 6)
    {
        for (int i = 0; i < 5 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 5 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < colorWidth - 5 + 2; i++)
        {
            cout << "-";
        }
    }

    if (sleeve_typeWidth < 12)
    {
        for (int i = 0; i < 11 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 11 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < sleeve_typeWidth - 11 + 2; i++)
        {
            cout << "-";
        }
    }

    if (sizeWidth < 5)
    {
        for (int i = 0; i < 4 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 4 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < sizeWidth - 4 + 2; i++)
        {
            cout << "-";
        }
    }

    if (materialWidth < 9)
    {
        for (int i = 0; i < 8 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 8 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < materialWidth - 8 + 2; i++)
        {
            cout << "-";
        }
    }

    if (genderWidth < 7)
    {
        for (int i = 0; i < 6 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 6 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < genderWidth - 6 + 2; i++)
        {
            cout << "-";
        }
    }

    if (idProductWidth < 10)
    {
        for (int i = 0; i < 9 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 9 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < idProductWidth - 9 + 2; i++)
        {
            cout << "-";
        }
    }

    if (nameWidth < 5)
    {
        for (int i = 0; i < 4 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 4 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < nameWidth - 4 + 2; i++)
        {
            cout << "-";
        }
    }

    if (brandWidth < 6)
    {
        for (int i = 0; i < 5 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 5 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < brandWidth - 5 + 2; i++)
        {
            cout << "-";
        }
    }

    if (priceWidth < 6)
    {
        for (int i = 0; i < 5 + 2 + 2; i++)
        {
            cout << "-";
        }
    }
    else
    {
        for (int i = 0; i < 5 + 2; i++)
        {
            cout << "-";
        }
        for (int i = 0; i < priceWidth - 5 + 2; i++)
        {
            cout << "-";
        }
    }

    cout << "-\n";

    for (int count = 0; count < list.size(); count++)
    {
        Shirt shirt = list[count];

        cout << "| " << shirt.getColor();
        if (colorWidth < 6)
        {
            for (int i = 0; i < 5 - shirt.getColor().length() + 2; i++)
            {
                cout << " ";
            }
        }
        else
        {
            for (int i = 0; i < colorWidth - shirt.getColor().length() + 2; i++)
            {
                cout << " ";
            }
        }

        cout << "| " << shirt.getSleeveType();
        if (sleeve_typeWidth < 12)
        {
            for (int i = 0; i < 11 - shirt.getSleeveType().length() + 2; i++)
            {
                cout << " ";
            }
        }
        else
        {
            for (int i = 0; i < sleeve_typeWidth - shirt.getSleeveType().length() + 2; i++)
            {
                cout << " ";
            }
        }

        cout << "| " << shirt.getSize();
        if (sizeWidth < 5)
        {
            for (int i = 0; i < 4 - shirt.getSize().length() + 2; i++)
            {
                cout << " ";
            }
        }
        else
        {
            for (int i = 0; i < sizeWidth - shirt.getSize().length() + 2; i++)
            {
                cout << " ";
            }
        }

        cout << "| " << shirt.getMaterial();
        if (materialWidth < 9)
        {
            for (int i = 0; i < 8 - shirt.getMaterial().length() + 2; i++)
            {
                cout << " ";
            }
        }
        else
        {
            for (int i = 0; i < materialWidth - shirt.getMaterial().length() + 2; i++)
            {
                cout << " ";
            }
        }

        cout << "| " << shirt.getGender();
        if (genderWidth < 7)
        {
            for (int i = 0; i < 6 - shirt.getGender().length() + 2; i++)
            {
                cout << " ";
            }
        }
        else
        {
            for (int i = 0; i < genderWidth - shirt.getGender().length() + 2; i++)
            {
                cout << " ";
            }
        }

        cout << "| " << shirt.getIdProduct();
        if (idProductWidth < 10)
        {
            for (int i = 0; i < 9 - shirt.getIdProduct().length() + 2; i++)
            {
                cout << " ";
            }
        }
        else
        {
            for (int i = 0; i < idProductWidth - shirt.getIdProduct().length() + 2; i++)
            {
                cout << " ";
            }
        }

        cout << "| " << shirt.getName();
        if (nameWidth < 5)
        {
            for (int i = 0; i < 4 - shirt.getName().length() + 2; i++)
            {
                cout << " ";
            }
        }
        else
        {
            for (int i = 0; i < nameWidth - shirt.getName().length() + 2; i++)
            {
                cout << " ";
            }
        }

        cout << "| " << shirt.getBrand();
        if (brandWidth < 6)
        {
            for (int i = 0; i < 5 - shirt.getBrand().length() + 2; i++)
            {
                cout << " ";
            }
        }
        else
        {
            for (int i = 0; i < brandWidth - shirt.getBrand().length() + 2; i++)
            {
                cout << " ";
            }
        }

        cout << "| " << shirt.getPrice();
        if (priceWidth < 6)
        {
            for (int i = 0; i < 5 - shirt.getPrice().length() + 2; i++)
            {
                cout << " ";
            }
        }
        else
        {
            for (int i = 0; i < priceWidth - shirt.getPrice().length() + 2; i++)
            {
                cout << " ";
            }
        }

        cout << "|" << endl;

        if (colorWidth < 6)
        {
            for (int i = 0; i < 5 + 2 + 2; i++)
            {
                cout << "-";
            }
        }
        else
        {
            for (int i = 0; i < 5 + 2; i++)
            {
                cout << "-";
            }
            for (int i = 0; i < colorWidth - 5 + 2; i++)
            {
                cout << "-";
            }
        }

        if (sleeve_typeWidth < 12)
        {
            for (int i = 0; i < 11 + 2 + 2; i++)
            {
                cout << "-";
            }
        }
        else
        {
            for (int i = 0; i < 11 + 2; i++)
            {
                cout << "-";
            }
            for (int i = 0; i < sleeve_typeWidth - 11 + 2; i++)
            {
                cout << "-";
            }
        }

        if (sizeWidth < 5)
        {
            for (int i = 0; i < 4 + 2 + 2; i++)
            {
                cout << "-";
            }
        }
        else
        {
            for (int i = 0; i < 4 + 2; i++)
            {
                cout << "-";
            }
            for (int i = 0; i < sizeWidth - 4 + 2; i++)
            {
                cout << "-";
            }
        }

        if (materialWidth < 9)
        {
            for (int i = 0; i < 8 + 2 + 2; i++)
            {
                cout << "-";
            }
        }
        else
        {
            for (int i = 0; i < 8 + 2; i++)
            {
                cout << "-";
            }
            for (int i = 0; i < materialWidth - 8 + 2; i++)
            {
                cout << "-";
            }
        }

        if (genderWidth < 7)
        {
            for (int i = 0; i < 6 + 2 + 2; i++)
            {
                cout << "-";
            }
        }
        else
        {
            for (int i = 0; i < 6 + 2; i++)
            {
                cout << "-";
            }
            for (int i = 0; i < genderWidth - 6 + 2; i++)
            {
                cout << "-";
            }
        }

        if (idProductWidth < 10)
        {
            for (int i = 0; i < 9 + 2 + 2; i++)
            {
                cout << "-";
            }
        }
        else
        {
            for (int i = 0; i < 9 + 2; i++)
            {
                cout << "-";
            }
            for (int i = 0; i < idProductWidth - 9 + 2; i++)
            {
                cout << "-";
            }
        }

        if (nameWidth < 5)
        {
            for (int i = 0; i < 4 + 2 + 2; i++)
            {
                cout << "-";
            }
        }
        else
        {
            for (int i = 0; i < 4 + 2; i++)
            {
                cout << "-";
            }
            for (int i = 0; i < nameWidth - 4 + 2; i++)
            {
                cout << "-";
            }
        }

        if (brandWidth < 6)
        {
            for (int i = 0; i < 5 + 2 + 2; i++)
            {
                cout << "-";
            }
        }
        else
        {
            for (int i = 0; i < 5 + 2; i++)
            {
                cout << "-";
            }
            for (int i = 0; i < brandWidth - 5 + 2; i++)
            {
                cout << "-";
            }
        }

        if (priceWidth < 6)
        {
            for (int i = 0; i < 5 + 2 + 2; i++)
            {
                cout << "-";
            }
        }
        else
        {
            for (int i = 0; i < 5 + 2; i++)
            {
                cout << "-";
            }
            for (int i = 0; i < priceWidth - 5 + 2; i++)
            {
                cout << "-";
            }
        }

        cout << "-\n";
    }

    return 0;
}