#include <iostream>

#include "CustomerOrder.h"

using namespace std;

int main() {
    string userName;

    cout << "Enter your name: ";
    getline(cin, userName);

    CustomerOrder myOrder = CustomerOrder();

    myOrder.setCustomerName(userName);

    cout << "Welcome " << myOrder.getCustomerName() << "! Enter pizza info or \"quit\" to quit: ";
    string inputCrust;
    string inputSauce;
    double inputSize;
    do {
        cout << "What type of crust do you want?";
        cin >> inputCrust;
        if (inputCrust != "quit") {
            cout << "What type of sauce do you want?";
            cin >> inputSauce;
            cout << "What size pizza do you want?";
            cin >> inputSize;
            cout << "Enter toppings and type done to finish:";
            string inputTopping;
            vector<string> myToppings;
            do {
                cin >> inputTopping;
                if (inputTopping != "done") {
                    myToppings.push_back(inputTopping);
                }

            } while (inputTopping != "done");
            Pizza currentPizza = Pizza(inputCrust, inputSauce, myToppings, inputSize);
            myOrder.AddPizza(currentPizza);
        }
    } while (inputCrust != "quit");

    cout << "The cost of your order is : $" << myOrder.CalculateOrderCost() << endl;


    return 0;
}