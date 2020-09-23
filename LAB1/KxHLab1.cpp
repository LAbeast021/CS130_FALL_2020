// Hesampour, Kiarash        CS130 Section 24754  09/22/2020
// First Laboratory Assignment - Bitwise Operation Calculator
// ____________________________________________________________

#include<iostream>
#include <iomanip>
using namespace std;

int main(){

    unsigned long long  operand_1, operand_2;
    char rep = 'y', user_option; 

    cout << "Bitwise Operation Calculator - CS130 - 64 bits - Kiarash Hesampour" << endl;

    while(rep == 'y'){
        

        cout
        <<"Enter one of the following choices: " << endl
        <<"& - AND" << endl
        <<"| - OR" << endl
        <<"^ - XOR" << endl
        <<"~ - NOT" << endl
        <<"- - Negate" << endl
        <<"< - Left shift (logical shift only)" << endl
        <<"> - Right shift (logical shift only)" << endl
        <<"# - stop execution" << endl;

        try{
           cin >> user_option; 
        }
        catch(...){
            cout << "Input error, enter choice and values again." <<endl;
        }

        if ((user_option!='~') && (user_option!='<') && (user_option!='>') && (user_option!='-') && (user_option!='#') && (user_option!='^') && (user_option!='|') && (user_option!='&')){
            cout << "Invalid choice " << user_option << ", please try again. " << endl ;
        }
        else {
            if (user_option =='#'){
            cout << "Calculation ended." << endl;
            rep = 'n';
            }
            else {
                switch(user_option){
                        case '&' :
                            cout << "Enter values for first and second operand:" << endl;
                            cin >> operand_1 >> operand_2;
                            cout << "Result:" <<(operand_1 & operand_2) << " [Hexadecimal:" << hex << (operand_1 & operand_2) <<"]" << endl;
                            break;
                            
                        case '|' :
                            cout << "Enter values for first and second operand: " << endl;
                            cin >> operand_1 >> operand_2;
                            cout << "Result:"<< (operand_1 | operand_2) << " [Hexadecimal:"<< hex << (operand_1 | operand_2) <<"]" << endl;
                            break;

                        case '^' :
                            cout << "Enter values for first and second operand:" << endl;
                            cin >> operand_1 >> operand_2;
                            cout << "Result:" << (operand_1 ^ operand_2) <<" [Hexadecimal:" << hex <<(operand_1 ^ operand_2) <<"]" << endl;
                            break;

                        case '~' :
                            cout << "Enter value for operand:" << endl;
                            cin >> operand_1;
                            cout << "Result:" << (~operand_1) << " [Hexadecimal:" << hex << (~operand_1) << "]" << endl;
                            break;

                        case '-' :
                            cout << "Enter value for operand:" << endl;
                            cin >> operand_1;
                            cout << "Result:"<<(-operand_1) << " [Hexadecimal:" << hex << (-operand_1) <<"]" << endl;
                            break;

                        case '<' :
                            cout << "Enter values for first and second operand" << endl;
                            cin >> operand_1 >> operand_2;
                            if(operand_2 > sizeof(operand_1) * 8 ){
                                cout << "Shift operand (" << operand_2 << ") bannot exceed number of bits  (" << sizeof(operand_1) * 8 << ")  - setting result to zero." << endl;
                                cout << "Result: 0 [Hexadecimal: 0]" << endl ;
                            }
                            else{
                                cout << "Result:"<<(operand_1 << operand_2) <<" [Hexadecimal:" << hex << (operand_1 << operand_2) <<"]" <<endl;
                            }
                            break;
                        case '>' :
                            cout << "Enter values for first and second operand" << endl;
                            cin >> operand_1 >> operand_2;
                            if(operand_2 > sizeof(operand_1) * 8){
                                cout << "Shift operand ("<< operand_2 <<") bannot exceed number of bits  (" << sizeof(operand_1) * 8 << ")  - setting result to zero." << endl;
                                cout << "Result: 0 [Hexadecimal: 0]" << endl ;
                                
                            }
                                else{
                                cout << "Result:" << (operand_1 >> operand_2) << " [Hexadecimal:" << hex << (operand_1 >> operand_2) <<"]" << endl;
                            }
                            break;
       }
            }

        
                    
    }
}
    return 0;
}
