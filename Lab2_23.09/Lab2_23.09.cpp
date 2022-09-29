#include <iostream>
using namespace std;

void fun(int a = 1) {
    int b = 0;
    if (a > 0) {
        for (int i = 1; i <= a; i++) {
            b += i;
        }
        cout << "\n" << "A = " << b << "\n";
    }
    else {
        cout << 0 << "\n";
    }
}
void Four(int a, int b, int& l, int& k) {
    l = a + b;
    k = a * b;
    cout << "l = " << l << "; k = " << k << "\n";
}

int main()
{
    int a[][3] = { {1, 9, 4},{8, 5, 1} };
    int s = 0;
    int sum[3] = { 0, 0, 0 };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            s += a[i][j];
            sum[j] += a[i][j];
        }
    }
    cout << s << "\n";
    for (int i = 0; i < 3; i++) {
        cout << sum[i] << " ";
    }
    cout << "\n";
    float y = 20.84;
    float& n = y;
    float& m = y;
    n = 10.1;
    cout << y << "\n" << n << "\n" << m;
    int p = 10;
    fun();
    int q = 11;
    int w = 3;
    int r = 4;
    int o = 2;
    Four(q, w, r, o);
    int f = 14;
    cout << f << "\n";
    for (int i = 0; i < 3; i++) {
        cout << f << " ";
        string str = "P";
        for (int j = 0; j < 3; j++) {
            cout << str << " ";
        }
        cout << "\n";
    }
    //cout << str;
}
