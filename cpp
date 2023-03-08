#include <iostream>
#include <vector>
#include <cmath>

int main {

std::cout<< "Please enter the type of equation you would like to solve.
            \n Here are our available equations: 
            \nMean \nMedian \nMode \nRange \nStandard Deviation \nInner Quartile Range \nVariance";

std::cin >> std::string equationType;

std::cout<< "Please enter your number set, separated by a comma. 
             \n Ex: \"1, 2, 3, 4\".";

std::cin >> vector<double> numberSet;

void calcMean(){
    for(std::vector<int>::iterator i = numberSet.begin(); i != numberSet.end(); ++i){
        double sum =+ numberSet[i];
        double mean = (sum / numberSet.size() );
        //add set precision later
        return mean;
    }
void calcMedian(){}

void calcMode(){}

void calcRange(){}

void calcStandardDeviation(){}

void calcIQR(){}

void calcVariance(){}

if(equationType == "Mean" || equationType == "mean"){
    calcMean();
    std::cout << "Here is the " << equationType << " for the given number set" << mean;
}

if else(equationType == "Median" || equationType == "median"){
    calcMedian();
    std::cout << "Here is the " << equationType << " for the given number set" << mode;
}

if else(equationType == "Mode" || equationType == "mode"){
    calcMode();
    std::cout << "Here is the "<< equationType << " for the given number set" << mode;
}

if else(equationType == "Range" || equationType == "range"){
    calcRange();
    std::cout << "Here is the " << equationType << " for the given number set" << range;
}

if else(equationType == "Standard Deviation" || equationType == "standard deviation"){
    calcStandardDeviation();
    std::cout << "Here is the " << equationType << " for the given number set" << mode;
}

if else(equationType == "Inner Quartile Range" || equationType == "inner quartile range" || equationType == "IQR" || equationType == "iqr"){
    calcIQR();
    std::cout << "Here is the " << equationType << " for the given number set" << iqr;
}

if else(equationType == "Variance" || equationType == "variance"){
    calcVariance();
    std::cout << "Here is the " << equationType << " for the given number set" << variance;
}

else{ std::cout << "The equation you have entered is not in our database, please try again"}

}


    return 0;
}