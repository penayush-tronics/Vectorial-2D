#include <iostream> //io header
#include <string> //stringg datatype 
#include <cmath> //math



void printNum(std::string text, double nums){
    std::cout << text << " " << nums << std::endl;

}

void print(std::string text){
    std::cout << text << std::endl;

}

double enterNum(std::string text){
    double num;
    std::cout << text;
    std::cin >> num;
    return num;
}

std::string enterStr(std::string text){
    std::string str;
    std::cout << text;
    std::cin.ignore();
    std::getline(std::cin, str);  
    return str;
}


int main(){
    double num1;
    double num2;
    double m;
    double d;
    double a;
    double s;
    num1=enterNum("Enter num1: ");
    num2=enterNum("Enter num2: ");
    m=num1*num2;
    d=num1/num2;
    a=num1+num2;
    s=num1-num2;

    printNum("Multiplied:",m);
    printNum("Subtracted:",s);
    printNum("Divided:",d);
    printNum("Added:",a);
    

    print(enterStr("Echo test"));

    return 0;

}
