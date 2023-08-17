#include<iostream>
#include<string>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    int i=6,no;
    no=rand()%i+1;

    string name;
    int amt,temp,curr_amt,bet;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter the amount to be deposited: ";
    cin>>amt;
    curr_amt=amt;

    char op;

    cout<<"\t\t\t Welcome to Casino "<<name<<endl;
    cout<<"\t\t\t -------------------------"<<endl<<endl;
    cout<<"\t\t\t RULES OF THE GAME"<<endl;
    cout<<"1. You have to guess a number between 1 to 6."<<endl;
    cout<<"2. If you guess it right you will get double (2x) of your betting amount."<<endl;
    cout<<"3. If you guess it wrong you will lose the betting amount from your net balance."<<endl;
    cout<<"4. You can continue the game till your net balance is not zero."<<endl<<endl<<endl;


    do{
        cout<<"You current balance is: "<<curr_amt<<endl;
        cout<<"Enter the betting amount: ";
        cin>>bet;

        // Checks if betting no. is not greater than net balance.
        if(bet>curr_amt){
            cout<<"Your betting amount is more than net balance."<<endl;
            cout<<"Kindly enter betting amount less than or equal to "<<curr_amt<<endl;
            cout<<"Enter the betting amount: ";
            cin>>bet;
        }

        cout<<"Guess the number correctly to WIN!!"<<endl;
        cout<<"Enter the number: ";
        cin>>temp;

        if(temp==no){
            cout<<".................YOU WON!!!.................."<<endl;
            curr_amt=curr_amt+bet;  
        }

        else{
            cout<<"OOPS! you have guessed wrong."<<endl;
            cout<<"The correct number is: "<<no<<endl;
            curr_amt=curr_amt-bet;
        }
        cout<<endl<<endl;
        cout<<"You current balance is: "<<curr_amt<<endl;

        // Checks your net balance is more than zero. If not breaks the loop.
        if(curr_amt==0){
            cout<<"Sorry! "<<name;
            cout<<" Your balance is insufficient to continue the game."<<endl;
            break;
        }
        cout<<"Would you like to play again: ";
        cout<<"For YES enter Y or y. For NO enter n or N. "<<endl;
        cin>>op;
        if(op=='y'|| op=='Y' || op=='n'|| op=='N');
        else{
            cout<<"Invalid input."<<endl;
            cout<<"Would you like to play again: ";
            cin>>op;
        }

    }while(op=='y'|| op=='Y');

    cout<<endl<<"THANK YOU FOR PLAYING "<<name<<endl;
    cout<<"Your net balance is "<<curr_amt<<endl;
    

    //...................END OF FILE.......................

    return 0;
}
