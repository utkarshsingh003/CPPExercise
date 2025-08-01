#include <iostream>
using namespace std;
int main (){
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    const int penny_value {1};

    int cent {0};
    cout<<"Enter the number of cents you have : "<<endl;
    cin>>cent;

    int balance {0};
    int dollar {0};
    int quarter {0};
    int dime {0};
    int nickel {0};
    int penny {0};


    dollar = cent / dollar_value;
    balance = cent % dollar_value;
    cout << "You have " << dollar << " dollars" << endl;

    quarter = balance / quarter_value;
    balance = balance % quarter_value;
    cout << "You have " << quarter << " quarters" << endl;

    dime = balance / dime_value;
    balance = balance % dime_value;
    cout << "You have " << dime << " dimes" << endl;

    nickel = balance / nickel_value;
    balance = balance % nickel_value;
    cout << "You have " << nickel << " nickels" << endl;

    penny = balance;
    cout << "You have " << penny << " pennies" << endl;

    cout<<endl;
    cout<<"-----------------------------------------------------"<<endl;    
    cout<<endl;
    
//   it can alernatively be written as:

     dollar = cent / dollar_value;
     balance = cent- dollar * dollar_value;
     cout << "You have " << dollar << " dollars" << endl;

     quarter = balance / quarter_value;
     balance -= quarter * quarter_value;
     cout << "You have " << quarter << " quarters" << endl;

        dime = balance / dime_value;
        balance -= dime * dime_value;
        cout << "You have " << dime << " dimes" << endl;

        nickel = balance / nickel_value;
        balance -= nickel * nickel_value;       
        cout << "You have " << nickel << " nickels" << endl;

        penny = balance;
        cout << "You have " << penny << " pennies" << endl; 

    return 0;
}