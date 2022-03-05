#include <iostream>
#include <string>

using namespace std;

int NumberOfDominatingNumbers(int N);
void CheckInt(int N);



int main() {

  //  NumberOfDominatingNumbers(4);
    CheckInt(142);

    return 0;
}





int NumberOfDominatingNumbers(int N){

    for(int i = 0 ; i <= (N *10) ;i++){



    }

}


void CheckInt(int N){
    char MapArray[] = {'1','2','3','4','5','6','7','8','9','0'};
    string StringOfBooleans = ""; // to load bool for anali
    string number = to_string(N);

    int size = number.length();
    char array[size];

    for(int i=0; i<size; i++)
    {

        array[i] = number[i];
        cout << array[i] << endl;

    }

        for(int i = 0 ; i < size ;i++){

            for(int j = 0 ; j < sizeof (MapArray) ; j++){

                if(array[i]  == MapArray[j] ){
                    cout << "Cout :"<<array[i] << endl;
                    StringOfBooleans += "1";
                    i++;
                    j = 0;
                }

            }
        cout << StringOfBooleans;

        }




}