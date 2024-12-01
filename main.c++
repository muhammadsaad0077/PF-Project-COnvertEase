#include <iostream>
#include <cmath>
using namespace std;

void profitLossCalculator();
void temperatureConversion();
void numberToRomanConversion();
void unitConversion();

int main() {
    int choice;

    do {
        // Main menu
        cout << "\n\t\t\t\t==== ConvertEase  ====";
        cout<<"\n\t\tA program developed to ease your conversions!\n\n";
        
        cout << "1. Calculator\n";
        cout << "2. Profit and Loss Calculator\n";
        cout << "3. Currency Conversion\n";
        cout << "4. Temperature Conversion\n";
        cout << "5. Numbers to Roman Conversion\n";
        cout << "6. Unit Conversion\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            

            case 2: profitLossCalculator();
            break;

            case 4: temperatureConversion();
            break;

            case 5: numberToRomanConversion();
            break;

            case 6: unitConversion();
            break;

            case 7: cout << "Exiting program. Goodbye!\n";
            break;

            default: cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}


//  Profit and Loss Calculator
void profitLossCalculator() {
    double costPrice, sellingPrice;
    cout << "\n\t\t\t\t=== Profit and Loss Calculator ===\n\n";
    cout << "Enter cost price: ";
    cin >> costPrice;
    cout << "Enter selling price: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice)
        cout << "Profit: " << sellingPrice - costPrice << endl;
    else if (sellingPrice < costPrice)
        cout << "Loss: " << costPrice - sellingPrice << endl;
    else
        cout << "No profit, no loss.\n";
}


//  Temperature Conversion
void temperatureConversion() {
    double temp;
    int choice;
    cout << "\n\t\t\t\t=== Temperature Conversion ===\n\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Celsius to Kelvin\n";
    cout << "4. Kelvin to Celsius\n";
    cout << "5. Fahrenheit to Kelvin\n";
    cout << "6. Kelvin to Fahrenheit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter temperature: ";
    cin >> temp;

    switch (choice) {
        case 1:
            cout << "Temperature in Fahrenheit: " << (temp * 9/5) + 32 << "°F\n";
            break;
        case 2:
            cout << "Temperature in Celsius: " << (temp - 32) * 5/9 << "°C\n";
            break;
        case 3:
            cout << "Temperature in Kelvin: " << temp + 273.15 << " K\n";
            break;
        case 4:
            cout << "Temperature in Celsius: " << temp - 273.15 << "°C\n";
            break;
        case 5:
            cout << "Temperature in Kelvin: " << ((temp - 32) * 5/9) + 273.15 << " K\n";
            break;
        case 6:
            cout << "Temperature in Fahrenheit: " << ((temp - 273.15) * 9/5) + 32 << "°F\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }
}



//  Numbers to Roman Conversion
void numberToRomanConversion() {
    int num;
    cout << "\n\t\t\t\t=== Numbers to Roman Conversion ===\n\n";
    cout << "Enter a number (1-3999): ";
    cin >> num;

    if (num < 1 || num > 3999) {
        cout << "Invalid number! Enter a number between 1 and 3999.\n";
        return;
    }

    string roman = "";
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            roman += symbols[i];
            num -= values[i];
        }
    }
    cout << "Roman Numeral: " << roman << endl;
}

//  Unit Conversion
void unitConversion() {
    double value;
    int choice;
    cout << "\n\t\t\t\t=== Unit Conversion ===\n\n";
    cout << "1. Kilometers to Miles\n";
    cout << "2. Miles to Kilometers\n";
    cout << "3. Kilograms to Pounds\n";
    cout << "4. Pounds to Kilograms\n";
    cout << "5. Meters to Inches\n";
    cout << "6. Feet to Inches\n";
    cout << "7. Kilometers to Meters\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter value: ";
    cin >> value;

    switch (choice) {
        case 1:
            cout << "Value in Miles: " << value * 0.621371 << " miles\n";
            break;
        case 2:
            cout << "Value in Kilometers: " << value / 0.621371 << " km\n";
            break;
        case 3:
            cout << "Value in Pounds: " << value * 2.20462 << " lbs\n";
            break;
        case 4:
            cout << "Value in Kilograms: " << value / 2.20462 << " kg\n";
            break;
        case 5:
            cout << "Value in Inches: " << value * 39.3701 << " inches\n";  // 1 meter = 39.3701 inches
            break;
        case 6:
            cout << "Value in Inches: " << value * 12.0 << " inches\n";  // 1 foot = 12 inches
            break;
        case 7:
            cout << "Value in Meters: " << value * 1000.0 << " meters\n";  // 1 km = 1000 meters
            break;
        default:
            cout << "Invalid choice.\n";
    }
}
