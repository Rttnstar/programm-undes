#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {



    cout << "== 1 ===" << endl;
    int x_task1;
    cout << "x тоог оруулна уу: ";
    cin >> x_task1;
    double M = static_cast<double>(x_task1) / 100;
    cout << "Үр дүн M = " << M << endl << endl;



    cout << "=== 2 ===" << endl;
    string ovog, ner, mergejil;
    cout << "Таны овог хэн бэ? ";
    cin >> ovog;
    cout << "Таны нэр хэн бэ? ";
    cin >> ner;
    cout << "Та ямар мэргэжлээр суралцаж байгаа бэ? ";
    cin >> mergejil;
    cout << "Хариулт: " << ovog << " овогтой " << ner << " (" << mergejil << ")" << endl << endl;




    cout << "=== 3 ===" << endl;
    double a, b, c;
    cout << "Гурвалжны 3 талыг оруулна уу (a b c): ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        double p = (a + b + c) / 2.0;
        double S = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Гурвалжны талбай: " << S << endl;
    } else {
        cout << "Ийм гурвалжин оршин тогтнохгүй!" << endl;
    }
    cout << endl;




    cout << "=== 4 ===" << endl;
    double qa, qb, qc;
    cout << "Коэффициентүүдийг оруулна уу (a b c): ";
    cin >> qa >> qb >> qc;
    double D = qb * qb - 4 * qa * qc;
    if (D > 0) {
        double x1 = (-qb + sqrt(D)) / (2 * qa);
        double x2 = (-qb - sqrt(D)) / (2 * qa);
        cout << "Бодит 2 шийд: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (D == 0) {
        double x_sol = -qb / (2 * qa);
        cout << "Давхардсан 1 шийд: x = " << x_sol << endl;
    } else {
        cout << "Бодит шийдгүй (D < 0)" << endl;
    }
    cout << endl;




    cout << "=== 5 ===" << endl;
    int m, n;
    cout << "m ба n тоог оруулна уу: ";
    cin >> m >> n;
    long long power_res = 1;
    for (int i = 1; i <= n; i++) {
        power_res *= m;
    }
    cout << m << "^" << n << " = " << power_res << endl << endl;




    cout << "=== 6 ===" << endl;
    int M_mult;
    cout << "Хүрд эхлүүлэх M тоог оруулна уу: ";
    cin >> M_mult;
    for (int i = 1; i <= 10; i++) {
    cout << M_mult << " * " << i << " = " << (M_mult * i) << endl;
    }
    cout << endl;




    cout << "=== 7 ===" << endl;
    int N;
    cout << "N тоог оруулна уу: ";
    cin >> N;
    long long odd_prod = 1;
    for (int i = 1; i <= N; i += 2) {
        odd_prod *= i;
    }
    cout << "1-ээс " << N << " хүртэлх сондгой тоонуудын үржвэр: " << odd_prod << endl << endl;




    cout << "=== 8 ===" << endl;
    int pair_count = 0;
    int curr_x = 1;
    while (pair_count < 15) {
        int curr_y = curr_x + 2;
        cout << "(" << curr_x << ", " << curr_y << ") ";
        pair_count++;
        curr_x++;
    }
    cout << endl << endl;




    cout << "=== 9 ===" << endl;
    double leg1, leg2;
    cout << "2 катетыг оруулна уу (a b): ";
    cin >> leg1 >> leg2;
    double hyp = sqrt(leg1 * leg1 + leg2 * leg2);
    cout << "Гипотенуз c = " << hyp << endl;

    return 0;
}
