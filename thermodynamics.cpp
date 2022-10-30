//made by qutiabah wahbeh
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
double choicether, q, m, cther, t, calc11,calc22,calc33,calc44,calc55,calc66, missing, find1;
//Q = mc∆T
//Q = mL(F,V)
void loop(){
        cout << "What would you like to find question\n1)Mass\n2)SHC\n3)Change in temp\n4)Q/energy\nAnswer: ";
        cin >> find1;
        if (find1 == 1){
            cout << "\nFind mass calculation: Formula --> m = q/c∆t\nEnter Q/Energy Joules: ";
            cin >> q;
            cout << "\nEnter SHC: ";
            cin >> cther;
            cout << "\nEnter ∆T C˚: ";
            cin >> t;
            calc11 = cther * t;
            calc22 = q / calc11;
            cout << "Mass: " <<calc22 << " Kg"; 
            cout << "\n\n";
        }
        else if (find1 == 2){
            cout << "\nFind SHC calculation: Formula --> c = q/m∆t\nEnter Q/Energy Joules: ";
            cin >> q;
            cout << "\nEnter Mass: ";
            cin >> m;
            cout << "\nEnter ∆T C˚: ";
            cin >> t;
            calc11 = m * t;
            calc22 = q / calc11;
            cout << "SHC: " <<  calc22 << " J/Kg*C˚" ;
            cout << "\n\n";
        }
        else if (find1 == 3){
            cout << "\nFind ∆T calculation: Formula --> ∆T = q/mc\nEnter Q/Energy Joules: ";
            cin >> q;
            cout << "\nEnter Mass: ";
            cin >> m;
            cout << "\nEnter SHC: ";
            cin >> cther;
            calc11 = m * cther;
            calc22 = q / calc11;
            cout << "∆T: " << calc22 << " C˚";
            cout << "\n\n";
        }
        else if (find1 == 4){
            cout << "\nFind Q/Energy calculation: Formula --> Q = mc∆t\nEnter Mass: ";
            cin >> m;
            cout << "\nEnter ∆T: ";
            cin >> t;
            cout << "\nEnter SHC: ";
            cin >> cther;
            calc11 = m * cther;
            calc22 = q * calc11;
            cout << "Q: " << calc22 << " Joules";
            cout << "\n\n";
        }
        else{
            cout << "\nChoose correct input next time !\n";
        }
    
    loop();
}


int main(){
        cout << "What would you like to find question\n1)Mass\n2)SHC\n3)Change in temp\n4)Q/energy\nAnswer: ";
        cin >> find1;
        if (find1 == 1){
            cout << "\nFind mass calculation: Formula --> m = q/c∆t\nEnter Q/Energy Joules: ";
            cin >> q;
            cout << "\nEnter SHC: ";
            cin >> cther;
            cout << "\nEnter ∆T C˚: ";
            cin >> t;
            calc11 = cther * t;
            calc22 = q / calc11;
            cout << "Mass: " <<calc22 << " Kg"; 
            cout << "\n\n";
        }
        else if (find1 == 2){
            cout << "\nFind SHC calculation: Formula --> c = q/m∆t\nEnter Q/Energy Joules: ";
            cin >> q;
            cout << "\nEnter Mass: ";
            cin >> m;
            cout << "\nEnter ∆T C˚: ";
            cin >> t;
            calc11 = m * t;
            calc22 = q / calc11;
            cout << "SHC: " <<  calc22 << " J/Kg*C˚" ;
            cout << "\n\n";
        }
        else if (find1 == 3){
            cout << "\nFind ∆T calculation: Formula --> ∆T = q/mc\nEnter Q/Energy Joules: ";
            cin >> q;
            cout << "\nEnter Mass: ";
            cin >> m;
            cout << "\nEnter SHC: ";
            cin >> cther;
            calc11 = m * cther;
            calc22 = q / calc11;
            cout << "∆T: " << calc22 << " C˚";
            cout << "\n\n";
        }
        else if (find1 == 4){
            cout << "\nFind Q/Energy calculation: Formula --> Q = mc∆t\nEnter Mass: ";
            cin >> m;
            cout << "\nEnter ∆T: ";
            cin >> t;
            cout << "\nEnter SHC: ";
            cin >> cther;
            calc11 = m * cther;
            calc22 = q * calc11;
            cout << "Q: " << calc22 << " Joules";
            cout << "\n\n";
        }
        else{
            cout << "\nChoose correct input next time !\n";
        }
    loop();
    
}