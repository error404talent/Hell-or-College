// Задача 7 — Перевод расстояния из километров и метров в мили и футы

#include<iostream>
using namespace std;


int main(){

    double km, m, miles, feet;
    int choice;

    cout << "Please choose an option: " << endl;
    cout << "1. from Km" << endl;
    cout << "2. from M " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1 :
        
        cout << "Please enter distance in KM: " << endl;
        cin >> km; 

        cout << "Convert to : " << endl;
        cout << "1. To Miles " << endl;
        cout << "2. To Feet " << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            /* code */
         miles = km * 0.621371;

            
            break;

         case 2:
            /* code */

            feet = km * 3280.84;

            break;
        
        default:
        cout << "Invalid input, Please try again." << endl;
            break;
        }

        
        
      
        break;

    case 2 :
            
        cout << "Please enter distance in M: " << endl;
        cin >> m; 

        cout << "Convert to : " << endl;
        cout << "1. To Miles " << endl;
        cout << "2. To Feet " << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            /* code */
         miles = m * 0.000621371;

            
            break;

         case 2:
            /* code */

            feet = m * 3.280841;

            break;
        
        default:
        cout << "Invalid input, Please try again." << endl;
            break;
        }

        
        
      
        break;

     
        break;    
    
    
    
    
        default:
        cout << "Invalid input, Please try again." << endl;
       return 0;
    }

    return 0;


}

