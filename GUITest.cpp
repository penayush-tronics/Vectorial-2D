#include <iostream> //io header
#include <string> //stringg datatype 
#include <cmath> //math
//#include <random> //random

using namespace std;


void printNum(string text, double nums){
    cout << text << " " << nums << endl;

}

void print(string text){
    cout << text << endl;

}

double enterNum(string text){
    double num;
    cout << text;
    cin >> num;
    return num;
}