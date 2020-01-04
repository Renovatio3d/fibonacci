// AUTHOR: Shallu J Nah
// PROGRAM DESCRIPTION: A basic program,Fibonacci series of integer numbers.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

int displayPrompt(string prompt);
void disResult(int seventhTerm, int sum);
int main()
{
    int termCount;
    int n = 10;
    int firsTerm;
    int secondTerm;
    int count = 7;
    int seventhTerm;
    int sum;
    //Read input from user
    cout << " The first 10 elements of a Fibonacci series" << endl << endl;
    firsTerm = displayPrompt(" Enter the first term: ");
    secondTerm = displayPrompt(" Enter the number of second terms: ");
    sum = firsTerm;
    // Output Terms
    cout << " beginning with " << setw(3) << firsTerm << " and " << secondTerm << " are: " << endl;
    cout << setw(3) << firsTerm << " ";
    cout << secondTerm << " ";
    for (int i = 0; i < n - 1; i++) {
        termCount = firsTerm + secondTerm;
        cout << termCount << " ";
        sum = sum + termCount - firsTerm;
        firsTerm = secondTerm;
        secondTerm = termCount;
        count--;
        if (count == 1)
            seventhTerm = firsTerm;
    }
    cout << endl << endl;
    disResult(seventhTerm, sum);


    // Pause cmd window
    system("PAUSE");

    return 0;
}
int displayPrompt(string prompt) {

    int input;

    cout << prompt;
    cin >> input;
    cout << endl;
    while (input <= 0) {
        cout << " ERROR, enter positive number and non-zero! Please try again. " << endl;
        cout << prompt;
        cin >> input;
        cout << endl;
    }

    return input;
}
void disResult(int seventhTerm, int sum) {
    cout << " The sum of the first 10 elements is: " << setw(6) << sum << endl;
    cout << " The seventh element is " << seventhTerm << "." << " 11 x " << seventhTerm << " = " << (11 * seventhTerm) << endl << endl;

}

