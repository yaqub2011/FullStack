#include <iostream>;
using namespace std;

void stepen() {
	int num1 = 0;
	cout << "Enter your number: ";
	cin >> num1;

	cout << num1 << " ** " << "3" << " = " << num1 * num1 * num1;
}

void drawRectangle() {
    int M = 0;
    int K = 0;
    cout << "Enter your length: ", cin >> M;
    cout << "Enter your width: ", cin >> K;
    for (int X = 0; X < M; X++) {
        for (int Y = 0; Y < K; Y++) {
            cout << "*";
        }
        cout << endl;
    }
}
void Bigest() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout << "Enter num1: "; cin >> num1;
    cout << "Enter num2: "; cin >> num2;
    cout << "Enter num3: "; cin >> num3;
    if (num1 > num2 && num1 > num3) {
        cout << "Biggest number: " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3) {
        cout << "Biggest number: " << num2 << endl;
    }
    else {
        cout << "Biggest number: " << num3 << endl;
    }
}
void factorial() {
    int num1 = 1;
    int total = 1;
    cout << "Enter a number: ", cin >> num1;
    for (int i = 2; i <= num1; i++) {
        total *= i;
    }
    cout << "Factorial of " << num1 << " is " << total << endl;
}


int main() {

}
