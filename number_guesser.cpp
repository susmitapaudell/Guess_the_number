//number guessing game
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int check_guess(int a, int b){
    if(a>b){
        cout << "\n - random number is greater than your guess\n ";
            if(abs(a-b) <=25 ){
                cout << " - the number is within the radius of 25 \n";}
            else{
                cout << " - random number is not within the radius of 25\n";
            }
            return 0;
    }
    else if(a<b){
        cout << "\n - random number is less than your guess\n ";
            if(abs(a-b) <=25 ){
                cout << "\n - the number is within the radius of 25\n ";}
            else{
                cout << "\n - random number is not within the radius of  25\n";
            }
            return 0;
    }
    else{
        return 1;
    }

}

int main(){

    //generate random number by the computer
    int ran;
    srand(time(0));
    ran = rand() %100+1;

    int num;
    cout << "\n***enter any number from 1 to 100 (guess)*** \n";
    cin >> num;

    int b;
    int count = 1;
    int guess = 0;

    do{

        b = check_guess(ran , num);
        if (b == 1){
            guess = 1;
            cout << "😍yeah, you got it CORRECT. 🙌 the number is " << ran;

                if ( count == 1){
                    cout << "best performance, you got it correct on the first try\n";
                }
                else if( count == 2){
                    cout << "you got it on a 2nd try";
                }
                else if( count == 3){
                    cout << "you got it on a 3rd try";
                }
                else{
                    cout << "last try and boommm";
                }

        }
        else{
            cout << "try again😔 \n";

            cout << "\n***enter number (guess) again*** \n";
            cin >> num;
            count ++;
    
    }
    } while( b!=1 && count < 5);

if (guess == 0){
    cout << "\nsorry, you couldn't win. the number was " << ran;
    cout << "\n you get 0 points😔";

}
}