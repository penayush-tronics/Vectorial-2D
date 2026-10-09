#include <iostream> //io header
#include <string> //stringg datatype 
#include <cmath> //math
#include <random> //random

int nums[100];

int getRandInt(int lb, int ub){
    std::random_device rd;
    std::mt19937 gen(rd());

    if (lb<0 && ub<0){
        std::uniform_int_distribution<int> negativeDist(lb,ub);
        return negativeDist(gen);
        
    }else if (lb<0 && ub<0)
    {
        std::uniform_int_distribution<int> crossDist(lb,ub);
        return crossDist(gen);
    }else {
        std::uniform_int_distribution<int> distr(lb,ub);
        return distr(gen);
    }

}

void bubbleSort(int size){
    int n=size;
    bool swap=true;
    int temp;
    while (swap){
        swap=false;
        for (int i=0; i<n-1; i++){
            if (nums[i]>nums[i+1]){
                temp=nums[i+1];
                nums[i+1]=nums[i];
                nums[i]=temp;
                swap=true;
        
            }
        }
        n=n-1;
    }
}


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


int main(){
    bool swap=true;
    int n=100;
    int temp;
    printNum("",getRandInt(0,10000));

    for (int i=0; i<100; i++){
        nums[i]=getRandInt(0,100);
        printNum("",nums[i]);
    }
    
    bubbleSort(100);
    print("sorting");
    for (int i=0; i<100; i++){
        printNum("",nums[i]);
    }
    
    return 0;

}
