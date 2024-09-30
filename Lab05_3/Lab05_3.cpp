#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

double s(const double x);

#include <iostream>

int main()
{
    double tp, tk, z;
    int n;

    cout << "tp = "; cin >> tp;
    cout << "tk = "; cin >> tk;
    cout << "n = "; cin >> n;

    cout << fixed;
    cout << "--------------------------------" << endl;
    cout << "|" << setw(5) << "t" << "   |"
        << setw(19) << "z" << "  |"
        << endl;
    cout << "--------------------------------" << endl;



    double tg = (tk - tp) / n;
    double t = tp;
    while (t <= tk)
    {
        z = s(2*t + 1) + 2*s(t*t) + sqrt(s(1));
        cout << "|" << setw(7) << setprecision(2) << t << " |"
            << setw(20) << z << " |"
            << endl;

        t += tg;
    }
    cout << "--------------------------------" << endl;
}

double s(const double x) {
    if (abs(x) >= 1 && x == 0) 
        return (cos(x) * cos(x) + 1) / exp(x);
    else {
        double S = 0;
        int k = 0;
        double a = 1;
        S = a;
        do
        {
            k++;
            double R = (2*x*x)/(2*k*k + k);
            a *= R;
            S += a;
        } while (k < 4);
        double res = (1/sin(2*x)) * S;
        cout << x << " " << res << endl;
        return res;
    }
}


