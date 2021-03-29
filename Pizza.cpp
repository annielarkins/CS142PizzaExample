//
// Created by Annie Larkins on 3/29/21.
//

#include "Pizza.h"

Pizza::Pizza() {
    crust = "none";
    sauce = "none";
    radiusSqInches = -1;
}

Pizza::Pizza(const string &crust, const string &sauce, const vector<string> &toppings, double radiusSqInches) : crust(
        crust), sauce(sauce), toppings(toppings), radiusSqInches(radiusSqInches) {}

const string &Pizza::GetCrust() const {
    return crust;
}

void Pizza::SetCrust(const string &crust) {
    Pizza::crust = crust;
}

const string &Pizza::GetSauce() const {
    return sauce;
}

void Pizza::SetSauce(const string &sauce) {
    Pizza::sauce = sauce;
}

const vector<string> &Pizza::GetToppings() const {
    return toppings;
}

void Pizza::SetToppings(const vector<string> &toppings) {
    Pizza::toppings = toppings;
}

double Pizza::GetRadiusSqInches() const {
    return radiusSqInches;
}

void Pizza::SetRadiusSqInches(double radiusSqInches) {
    Pizza::radiusSqInches = radiusSqInches;
}

void Pizza::AddTopping(string newTopping) {
    toppings.push_back(newTopping);
}

double Pizza::CalculatePrice() {
    double price = (2 * radiusSqInches) + (1.50 * toppings.size());
    return price;
}


