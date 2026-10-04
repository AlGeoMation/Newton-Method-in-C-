#include <iostream>
using namespace std;
int main(){
    double S, x, x_new;
    int iteration=0;
    double epsilon=0.001;

    cout<<"Enter the number you want to find cube root of: ";
    cin>>S;
    cout<<"Enter your initial guess: ";
    cin>>x;

    while (true) {
        x_new=x-(x*x*x-S)/(3*x*x);
        iteration += 1;
        if (abs(x_new-x)<epsilon) {
            break;
        }
        else {
            x=x_new;
        }
    }
    cout<<"The number of iterations: "<<iteration<<endl;
    cout<<x_new<<" closer to the cubre root of "<<S<<endl;
    return 0;
}
