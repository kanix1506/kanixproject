#include<iostream>
using namespace std;

int main(){
    int S;
    int Even=0;
    int Odd=0;

    while (true){
        cout << "Enter an integer : ";
        cin >> S;

        if (S==0){
            break;
        }
        if (S%2==0){
            Even++;
        } else {
            Odd++;
        }
    }

    cout << "#Even numbers = "<< Even << "\n";
    cout << "#Odd numbers = "<< Odd << "\n";
    return 0;
}
