#include <iostream>
#include <string>
using namespace std;

string history;
string scribe( float a, float b, char h){
    history = history + to_string(a) + " " + h + " " + to_string(b) + "\n";
    return history;
}

int main(void){
    while (true){
        float a;
        float b;
        cout << "";
        cout << " enter two numbers; \n a first, then b \n";
        cin >> a;
        cin >> b;
        /*
        if ( class_list == 'E'){
            cout << "Sorry for your loss";
        }else if (class_list == 'M'){
            cout << "Yay Math";
        }else if ( class_list == 'S'){
            cout << "Yippee";
        } else{
            cout << "Why are you even here then?";

        }
        }
        */
        char c;
        char h;
        cout << "Pick the operation that you would like to perform  \n";
        cout << "A      a + b \n";
        cout << "B      a - b \n";
        cout << "C      a * b \n";
        cout << "D      a / b \n";
        cin >> c;
        double d;
        switch(c){
            case 'A': case 'a' :
            d = a + b;
            h = '+';
            break;

            case 'B': case 'b':
            d = a - b;
            h = '-';
            break;

            case 'C': case 'c':
            d = a * b;
            h = '*';
            break;

            case 'D': case 'd':
            d = a / b;
            h = '/';
            break;

            case 'H': case 'h':
            cout << history;
            break;


            default:
            cout << "what" << endl;



        }
        cout << d;
        history = scribe(a,b,h);
        
    }
    return 0;
}