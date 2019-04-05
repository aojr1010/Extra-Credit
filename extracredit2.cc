/*
 *      Author: Anthony Owusu-Ansah
 *        Date: April 4, 2019
 * Description: Example that uses string member functions:
 * 		        length, find, erase, substr, replace
 */
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

//function prototypes
int frequency_count(string &txt2, string &txt);
void convert(string &txt, string &txt2);

int main()
{
    
    string txt = "Ohio University is in Ohio, crazy!";
    string txt2 = "oHiO";
    cout << frequency_count(txt2, txt);
    
    return 0;
}

void convert(string &txt, string &txt2){ //in order to ignore case, converts both strings to uppercase
    int y = txt2.length();
    int x = txt.length();

    for(int i=0; i < x; i++){
        txt[i] = toupper(txt[i]);
    }
    for(int i = 0; i < y; i++){
        txt2[i] = toupper(txt2[i]);
    }

}
int frequency_count(string &txt2, string &txt)
{
    convert(txt, txt2); //calls uppercase conversion
    int M = txt2.length();
    int N = txt.length();
    int count = 0;

for (int i = 0; i <= N - M; i++) //checks a matching pattern for the count of i
{
    int j;
    for (j = 0; j < M; j++)
    if (txt[i + j] != txt2[j])
        break;
    if (j == M){
    count++;
    j = 0;
    }
}
    return count;
}


/*
 * Extra credit: Due: Thursday April 4 (11:59 PM).
 * Write a function that counts the number of occurrences of a substring in a line
 * of text. The function should work for both upper and lowercase characters.
 * For example,
 *           number = countOccurrences("aBC", "ABCdeaBcfgAbcd");
 * should assign 3 to number.
 * Write a main program to test your function.
 * To submit the extra credit, you must create a public repository on GitHub and tag me (@nasseef) when
 * you are done.
 *
 */