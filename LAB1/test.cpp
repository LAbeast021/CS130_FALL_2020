//include header files
#include<iostream>
#include <iomanip>

//include std name space
using namespace std;

//
// main function
// Reads the array of minimum 2 elements
// Call the functions to calculate the highest, lowest and average
// display the the highest, lowest and average
// repeat the task, if the user desires
//


int main(void)
{
    unsigned long operand1,//hold first operand
                operand2, // holds second operand
                res; //holds result of bitwise operation

    char rep,//temporary variable to ask for repeat
        op; //holds operation symbol


    // display program info

    cout<<endl<<"This program asks for user to input one/two numbers.";
    cout<<endl<<"The input and outputs are hexa decimal";
    cout<<endl<<"It then displays the results in hexa decimal";

    //loop for repeating the whole task again

    do
    {
        // display menu of operations

        cout<<endl<<"\t------------------------------------";
        cout<<endl<<"\tEnter one of the following choices ";
        cout<<endl<<"\t------------------------------------";
        cout<<endl<<"\t& - AND";
        cout<<endl<<"\t| - OR";
        cout<<endl<<"\t^ - XOR";
        cout<<endl<<"\t~ - NOT";
        cout<<endl<<"\t- - Negate";
        cout<<endl<<"\t< - Left shift (logical shift only)";
        cout<<endl<<"\t> - Right shift (logical shift only)";
        cout<<endl<<"\t# - stop execution";
        cout<<endl<<"\t------------------------------------";
        cout<<endl<<"\tEnter your choice here:";
        cin>>op;
        cin.ignore(1);

        //check for validity of operators

        if ((op!='&')&&(op!='|')&&(op!='^')&&(op!='~')&&
            (op!='-')&&(op!='<')&&(op!='>')&&(op!='#'))
        {
            cout<<endl<<"Invalid choice "<<op<<" please try again.";
            //rep='y';
            continue;
        }

        //check for end of calculations
        else if(op=='#')
        {
            cout<<"Calculation ended.";
            break;
        }
            // if binary operator

            if ((op=='&')||(op=='|')||(op=='^'))
            {
                cout<<endl<<"Enter values for first and second operand:";
                cout<<endl<<"First Operand: ";
                cin>>hex>>operand1;
                cout<<"Second Operand: ";
                cin>>hex>>operand2;
            }

            // if unary operator
            if ((op=='~')||(op=='-')||(op=='<')||(op=='>'))
            {
                cout<<endl<<"Enter values for first second operand:";
                cout<<endl<<"Operand: ";
                cin>>hex>>operand1;
            }

            //perform the operation based on op
            switch(op)
            {
                case '&':
                    res=operand1 & operand2;
                    cout<<std::hex<<setw(6)<<operand1<<" & "<<
                        std::hex<<setw(6)<<operand2<< " = "<<
                        std::hex<<setw(6)<<res;
                    break;
                case '|':
                    res=operand1 | operand2;
                    cout<<std::hex<<setw(6)<<operand1<<" & "<<
                        std::hex<<setw(6)<<operand2<< " = "<<
                        std::hex<<setw(6)<<res;
                    break;
                case '^':
                    res=operand1 ^ operand2;
                    cout<<std::hex<<setw(6)<<operand1<<" & "<<
                        std::hex<<setw(6)<<operand2<< " = "<<
                        std::hex<<setw(6)<<res;
                    break;
                case '~':
                    res=~operand1;
                    cout<<std::hex<<setw(6)<<"~"<<operand1<<" = "<<res;
                    break;
                case '-':
                    res=-operand1;
                    cout<<std::hex<<setw(6)<<"-"<<operand1<<" = "<<res;
                    break;
                case '<':
                    res=operand1 < 1;
                    cout<<std::hex<<setw(6)<<operand1<<" < 1"<<" = "<<res;
                    break;
                case '>':
                    res=operand1 > 1;
                    cout<<std::hex<<setw(6)<<operand1<<" > 1"<<" = "<<res;
                    break;
            }
    }
    while(1); //repeat if desires
    return 0;
}