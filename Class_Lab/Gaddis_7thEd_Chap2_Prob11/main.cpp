/* 
 * File:   main.cpp
 * Author: Adam Christensen
 * Created on January 8, 2015, 8:15 PM
 * Purpose: HW number 11 Gaddis
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    float gasTank=20;//Amount of fuel our tank can hold
    float inTown=21.5;//In town miles per gallon
    float onHway=26.8;//Highway mpg
    //Calculate the total miles in and out of town
    float disTown=gasTank*inTown;
    float disHway=gasTank*onHway;
    //Output the results
    cout<<"Distance in town on a tank of gas      = ";
    cout<<disTown<<"(miles)"<<endl;
    cout<<"Distance on Highway on a tank of gas   = ";
    cout<<disHway<<"(miles)"<<endl;
    //Exit Stage Right!
    return 0;
}