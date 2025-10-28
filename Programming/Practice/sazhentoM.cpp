/// Задача 8 — Перевод саженей в метры

#include<iostream>
#include<limits>

using namespace std;


int main(){

    double sazhen, metres;

    cout << "Please neter distance in metres: " << endl;
   

    while (!( cin >> sazhen) || 0 >  sazhen  )
    {
       cout << "Invalid Input. ONly digits greater than zero reuired " << endl;
       cin.clear();
       cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    

    metres = sazhen * 2,16;

    cout << sazhen << " Sazhen eqautes to  " << metres << " Metres " << endl;

    return 0;

}