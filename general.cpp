// Conversion of Fahrenheit to Celsius (32°F - 32) x 5/9 = 0°C
#include <iostream>

using namespace std;

Convert(int F)
{
	cout << "Temperature in Celsius = " << (F - 32) * 5/9;
}

int main()
{
	int F;
	cout << "Please enter temperature in Fahrenheit: ";
	cin >> F;
	Convert(F);
}
