#include<iostream>
#include<cmath>
using namespace std;
void solveQuadratic(float a, float b, float c);
int main(){

    float a;
    cout<<"Enter the value of a: ";
    cin>>a;

    float b;
    cout<<"Enter the value of b: ";
    cin>>b;

    float c;
    cout<<"Enter the value of c: ";
    cin>>c;

    float power = pow(b,2);
    float deter= power - 4*a*c;
    if (deter == 0){

        float root= -b/(2*a);
        cout<< root ;

    }else{
        solveQuadratic(a, b, c);
    }
    return 0;
}
void solveQuadratic(float a, float b, float c){

    float power = pow(b,2);
    float deter= power - 4*a*c;

     if (deter > 0) {

        float root1 = (-b + sqrt(deter)) / (2 * a);
        float root2 = (-b - sqrt(deter)) / (2 * a);
        cout << "Two real roots: " << root1 << " and " << root2 <<"\n";
    } 
    else {
        
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-deter) / (2 * a); 
        cout << "Complex roots: " <<"\n";
        cout<<" x " << realPart << " + " << imaginaryPart << "i" <<"\n";
        cout <<" x " << realPart << " - " << imaginaryPart << "i" <<"\n";
    }


}
    