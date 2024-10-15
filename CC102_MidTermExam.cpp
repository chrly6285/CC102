#include <iostream>
using namespace std;

int main() {
	double sugarPriceUSD = 0.0, ricePricePound = 0.0, sardinesPricePound = 0.0, coffeePriceUSD = 0.0, milkPriceUSD = 0.0;
	double sugarQty = 0.0, riceQty = 0.0, sardinesQty = 0.0, coffeeQty = 0.0, milkQty = 0.0;
	double usdToPhp = 0.0, poundToPhp = 0.0;
	
	
	cout << "Enter the price of rice (USD):\t";
	cin >> sugarPriceUSD;
	cout << "Enter the price of rice (Pound):\t";
	cin >> ricePricePound;
	cout << "Enter the price of sardines (Pound):\t";
	cin >> sardinesPricePound;
	cout << "Enter the price of coffee (USD):\t";
	cin >> coffeePriceUSD;
	cout << "Enter the price of milk (USD):\t";
	cin >> milkPriceUSD;
	
	cout << "Enter the quantity of sugar:\t";
	cin >> sugarQty;
	cout << "Enter the quantity of rice:\t";
	cin >> riceQty;
	cout << "Enter the quantity of sardines:\t";
	cin >> sardinesQty;
	cout << "Enter the quantity of coffee:\t";
	cin >> coffeeQty;
	cout << "Enter the quantity of milk:\t";
	cin >> milkQty;
	
	
	
	return 0;
}