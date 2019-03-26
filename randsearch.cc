/*
 *        File: random.cc
 *      Author: Anthony Owusu-Ansah
 *        Date: March 25, 2019
 * Description: Random Integer Extra Credit.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

//function prototypes
int search_seq(const int numbers[], int argc);

int main(int argc, char const *argv[]) {

    int numbers[20];
    int size = 20;
    //array of 20 random numbers
    srand(time(NULL));
    for(int i = 0; i < size; i++)
    {
    numbers[i] = (int)(rand()%100);
    }

    cout << "Random numbers: " << endl;

    for(int i = 0; i < size; i++) 
    {
    cout << numbers[i] << " " << endl;
    }


    cout << "Select your target number: " << endl;
    cin >> argc;
    //calls the sequential search
    search_seq(numbers, argc);
    
    return 0;
}// main

int search_seq(const int numbers[], int argc)
{
    bool check = false; //to check targets existense

    cout << "Target found at location(s): ";
    //search one of the random numbers
    for(int i = 0; i < 20; i++) {
    //if target found
    if(argc == numbers[i]) {
    //print the locations
    cout << i << " ";
    check = true;
    }

    }

    if(check == false)
    cout << "Not found" << endl;

return -1;
}


/* Extra credit: Due Tuesday 3/26/2019 (11:59 PM)
 * Write a program that creates 20 random integers and stores them into
 * an array of integers.
 * Write the sequential search function.
 * In your main program, output all the elements of the array. Ask the user for
 * a target number and call the search function to find and locations of the target
 * in the array. Output the location.
 *
 * Create a public repository on GitHub, push your code to the repository and
 * tag me (@nasseef) in the final commit message. Please make sure your program works
 * before you tag me.
 * Do not email me your program.
 */