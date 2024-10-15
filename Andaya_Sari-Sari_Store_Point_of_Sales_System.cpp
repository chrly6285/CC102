#include <iostream>

using namespace std;

int main() {
    double sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
    int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
    double usdToPhp, poundToPhp;
    cout << "Enter the price of sugar (in USD):\t\t";    
    cin >> sugarPriceUSD;
    cout << "Enter the price of rice (in Pound):\t\t";
    cin >> ricePricePound;
    cout << "Enter the price of sardines (in Pound):\t\t";
    cin >> sardinesPricePound;
    cout << "Enter the price of coffee (in USD):\t\t";
    cin >> coffeePriceUSD;
    cout << "Enter the price of milk (in USD):\t\t";
    cin >> milkPriceUSD;
    cout << "******************************************************" << endl;
    cout << "Enter the quantity of sugar purchased:\t\t";
    cin >> sugarQty;
    cout << "Enter the quantity of rice purchased:\t\t";
    cin >> riceQty;
    cout << "Enter the quantity of sardines purchased:\t";
    cin >> sardinesQty;
    cout << "Enter the quantity of coffee purchased:\t\t";
    cin >> coffeeQty;
    cout << "Enter the quantity of milk purchased:\t\t";
    cin >> milkQty;
    cout << "******************************************************" << endl;
    cout << "Enter the USD to PHP conversion rate:\t";
    cin >> usdToPhp;
    cout << "Enter the Pound to PHP conversion rate:\t";
    cin >> poundToPhp;
    cout << "******************************************************" << endl;
    double sugarCostPHP = sugarPriceUSD * usdToPhp * sugarQty;
    double riceCostPHP = ricePricePound * poundToPhp * riceQty;
    double sardinesCostPHP = sardinesPricePound * poundToPhp * sardinesQty;
    double coffeeCostPHP = coffeePriceUSD * usdToPhp * coffeeQty;
    double milkCostPHP = milkPriceUSD * usdToPhp * milkQty;
    
    double totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;
    
    cout << "Purchase Details:\n";
    
    cout << "Item: Sugar\n";
    cout << "Quantity: " << sugarQty << "\n";
    cout << "Price per item in PHP: " << sugarPriceUSD * usdToPhp << "\n";
    cout << "Total cost in PHP: " << sugarCostPHP << "\n\n";
    
    cout << "Item: Rice\n";
    cout << "Quantity: " << riceQty << "\n";
    cout << "Price per item in PHP: " << ricePricePound * poundToPhp << "\n";
    cout << "Total cost in PHP: " << riceCostPHP << "\n\n";
    
    cout << "Item: Sardines\n";
    cout << "Quantity: " << sardinesQty << "\n";
    cout << "Price per item in PHP: " << sardinesPricePound * poundToPhp << "\n";
    cout << "Total cost in PHP: " << sardinesCostPHP << "\n\n";
    
    cout << "Item: Coffee\n";
    cout << "Quantity: " << coffeeQty << "\n";
    cout << "Price per item in PHP: " << coffeePriceUSD * usdToPhp << "\n";
    cout << "Total cost in PHP: " << coffeeCostPHP << "\n\n";
    
    cout << "Item: Milk\n";
    cout << "Quantity: " << milkQty << "\n";
    cout << "Price per item in PHP: " << milkPriceUSD * usdToPhp << "\n";
    cout << "Total cost in PHP: " << milkCostPHP << "\n\n";
    cout << "******************************************************" << endl;
    cout << "Total amount to be paid in PHP: " << totalCostPHP << "\n";
    
    return 0;
}
