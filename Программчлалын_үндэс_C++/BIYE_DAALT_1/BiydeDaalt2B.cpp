#include <iostream>
#include <cmath>
using namespace std;
int main (){
  int n;
double x;
cout << "n bolon x iin utgiig oruulna uu"
  cin >> n >> x;
double sum = 0.0;
double fact = 1.0;
for (int k=1; k <= n; k++){
fact *= k;
double term = 1.0 + sin(k * x) / fact;
sum += term;
}
cout << "niilber = " << sum << endl;
return 0;
}
