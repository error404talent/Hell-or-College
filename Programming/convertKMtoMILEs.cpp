// Задача 6 — Перевод километров в мил

#include<iostream>
using namespace std;


int main(){

    double kilometres, miles;

    cout << "Please in distance(KM):  ";
    cin >> kilometres;

    miles = kilometres * 0.621371;

    cout << kilometres << "Kilometres = "  << miles << "miles"  << endl;

    return 0;

}