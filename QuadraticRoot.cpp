#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void QRoots(int a, int b, int c)
{
    if (a == 0) {
        cout << "N/A";
        return;
    }
 
    int D = b * b - 4 * a * c;
    double RootOfD = sqrt(abs(D));
 
    if (D > 0) {
        cout << "Roots are real and different" << endl;
        cout << (double)(-b + RootOfD) / (2 * a) << endl<< (double)(-b - RootOfD) / (2 * a);
    }
    else if (D == 0) {
        cout << "Roots are real and same" << endl;
        cout << (double)-b / (2 * a);
    }
    else 
    {
        cout << "Roots are Imaginary " << endl;
        cout << (double)-b / (2 * a) << " + i"<< RootOfD / (2 * a) << endl<<
        -(double)b / (2 * a) << " - i"<< RootOfD/ (2 * a);
    }
}

int main()
{
    int a , b , c;
    cout<< "Enter the Number" << endl;
    cin>>a >> b >> c;
    QRoots(a , b , c);
    
    return 0;
}
