#include <iostream>
using namespace std;

float celsius, fahrenheit,meter,foot; //global variable, usable in all functions

void degToFar(){ //Celsius To Fahrenheit Function
    cout << "\n" << "*********Celsius To Fahrenheit Converter********* \n";
    cout << "\n" << "Enter Celsius Value: ";
    cin >> celsius;
    cout << "\n" << "Temperature is: " << (9*celsius+160)/5 << "Degree Fahrenheit" << "\n";
}

void farToCel(){ //Fahrenheit To Celsius Function
    cout << "\n" << "*********Fahrenheit To Celsius Converter********* \n";
    cout << "\n" << "Enter Fahrenheit value: ";
    cin >> fahrenheit;
    cout << "\n" << "Temperature is: " << (celsius=((fahrenheit-32)*5)/9) << "Degree Fahrenheit" << "\n";
}
void meterToFoot(){ // Meter to Foot Function
    cout << "\n" << "*********Meter to Foot Converter********* \n";
    cout << "\n" << "Enter Meter Value: ";
    cin >> meter;
    cout << "\n" << meter << " meter is equal to " << meter*3.28084 << " foot \n" ;
}


//Main function
int main(){
    int centralInput; //Local Variable, Usable only in this function
    cout << "This multipurpose calculator is developed by Lamm" << "\n \n" << "Type which calculator you're looking for:" << "\n \n";
    cout << "1. Celsius to Fahrenheit \n" << "2. Fahrenheit to Celsius \n" << "3. Meter to feet \n \n";

    cout << "Select: ";
    cin >> centralInput;



if(centralInput==1){
    degToFar(); //Calling the function
}
else if(centralInput==2){
    farToCel(); //Calling the function
}
else if(centralInput==3){
    meterToFoot(); //Calling the function
}
else{
    cout << "Enter a valid choice";
}



return 0;
}

