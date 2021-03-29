//
// Created by Annie Larkins on 3/29/21.
//

#ifndef PIZZA_PIZZA_H
#define PIZZA_PIZZA_H

#include <string>
#include <vector>

using namespace std;

class Pizza {
private:
    string crust;
    string sauce;
    vector<string> toppings;
    double radiusSqInches;

public:
    Pizza();
    Pizza(const string &crust, const string &sauce, const vector<string> &toppings, double radiusSqInches);

    const string &GetCrust() const;

    void SetCrust(const string &crust);

    const string &GetSauce() const;

    void SetSauce(const string &sauce);

    const vector<string> &GetToppings() const;

    void SetToppings(const vector<string> &toppings);

    double GetRadiusSqInches() const;

    void SetRadiusSqInches(double radiusSqInches);

    void AddTopping(string newTopping);

    double CalculatePrice();
};


#endif //PIZZA_PIZZA_H
