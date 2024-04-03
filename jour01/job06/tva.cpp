#include <iostream>

using namespace std;

int main()
{
    float pre_tax_unit_price;
    double quantity;
    float vat;
    double total_price;

    cout << "Entrez le prix du produit par unité, hors taxe : " << endl;
    cin >> pre_tax_unit_price;

    cout << "Entrez la quantité : " << endl;
    cin >> quantity;

    cout << "Entrez la tva en pourcentage : " << endl;
    cin >> vat;

    total_price = (pre_tax_unit_price * quantity) * (1 + vat / 100);

    cout << "Prix total : " << total_price << endl;

    return 0;
}