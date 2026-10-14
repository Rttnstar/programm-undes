#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double x1, y1, x2, y2, x3, y3;

  cout << "A цэгийн координат (x1 y1): ";
  cin >> x1 >> y1;
  cout << "B цэгийн координат (x2 y2): ";
  cin >> x2 >> y2;
  cout << "C цэгийн координат (x3 y3): ";
  cin >> x3 >> y3;

  double S = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

  cout << "Гурвалжны талбай: " << S << endl;

  return 0;
}
