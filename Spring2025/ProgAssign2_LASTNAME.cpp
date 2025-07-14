#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
        
    
//PT 1 For Loop/ Counting and Summing / PT 1 For Loop/ Counting and Summing
    int user1;
    int user2;
    int evens = 0;
    cout << "Enter 2 integers\n";
    cin >> user1 >> user2;
    cout << "Your inputs were " << user1 << " & " << user2 << endl;
    
    
    for(int i=user1; i<user2; i++){
        cout << user1 << endl;
        
        if(user1 % 2 ==0){
            evens += user1;
        }
        
        user1++;
    }   cout << user2 << endl;
    if(user2 % 2==0){
        evens += user2;
    }
    cout << "The sum of all the even numbers is " << evens << endl;
    
    
    
//PT 2 While loop / guess the number / PT 2 While loop / guess the number
            srand(time(0));
            cout << "Program 2: Guess a number between 1-100\n";
            int userguess;
            int guessnum = rand() % 100;

            while(userguess != guessnum){
                cin >> userguess;
                if(userguess > guessnum){
                    cout << endl << "Try a lower number" << endl;
                }
                else{cout << endl << "Try a higher number" << endl;}
            } cout << "Congragulations you guessed " << userguess << ". The correct number was " << guessnum << endl;

    

           
//PT 3 Password Retry: CSisFun / PT 3 Password Retry: CSisFun
        string hardcodedpassword = "CSisFun";
        string userpass;
        cout << "Enter Hard Coded Password\n";
        do{
        cin >> userpass;
            if(userpass != hardcodedpassword){
                cout << "Oops thats not the correct password, try again\n";
            }
        }while(userpass != hardcodedpassword);
    cout << "Congragulations you got the password\n";
    
    
    
//PT 4 Pattern Printing / PT 4 Pattern Printing / PT 4 Pattern Printing
        int numrows;
        cout << "Enter number of rows\n";
        cin >> numrows;
        for(int i = 0; i<numrows; i++){
            
                for(int  j=-1; j<i; j++){
                cout << "•";}
            
        cout << endl;}
    
    return 0;
}
