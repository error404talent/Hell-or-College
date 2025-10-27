// Задача 7 — Перевод расстояния из километров и метров в мили и футы

#include<iostream>
using namespace std;


int main(){

    double km, m;
    int choice;

    cout << "Please choose an option: " << endl;
    cout << "1. from Km" << endl;
    cout << "2. rom M " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1 :
        
        cout << "Please enter distance in KM: " << endl;
        cin >> km; 

        cout << "Convert to : " << endl;
        cout << "1. Miles " << endl;
        cout << "Foot " << endl;
        
        cin >> choice;

        switch (choice)
        {
        case 1:
            /* code */
            break;

         case 2:
            /* code */
            break;
        
        default:
            break;
        }

        
        
      
        break;

    case 2 :
     
        break;    
    
    
    
    
        default:
        break;
    }

    return 0;


}

