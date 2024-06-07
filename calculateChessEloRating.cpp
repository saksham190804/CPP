#include<iostream>
#include<cmath>
using namespace std;

void f(float r1, float r2, float result,int k) {
    float x1 = max(r1, r2);
    float x2 = min(r1, r2);
    float temp = x2 - x1;
    float ea = 1 / (1 + pow(10, temp / 400.0));  

    if (result == 0.5) {
        cout << "Match is drawn! 1/2-1/2" << endl;
        if(r1>r2){
        	cout << "New rating of player 1 is : " << r1 - k * (0.5 - ea) << endl;
            cout << "New rating of player 2 is : " << r2 + k * (0.5 - ea) << endl;
		}
		else if(r1<r2){
        	cout << "New rating of player 1 is : " << r1 + k * (0.5 - ea) << endl;
            cout << "New rating of player 2 is : " << r2 - k * (0.5 - ea) << endl;
		}
		else{
        	cout << "New rating of player 1 is : " << r1 << endl;
            cout << "New rating of player 2 is : " << r2 << endl;
            
		}
        
    } 
	else if (result == 1.0) {
        cout << "Player 1 won the game! 1-0" << endl;
        cout << "New rating of player 1 is : " << r1 + k * (1 - ea) << endl;
        cout << "New rating of player 2 is : " << r2 - k * (1 - ea) << endl;
    } 
	else if (result == 0.0) {
        cout << "Player 2 won the game! 0-1" << endl;
        cout << "New rating of player 1 is : " << r1 - k * (1 - ea) << endl;
        cout << "New rating of player 2 is : " << r2 + k * (1 - ea) << endl;
    } 
	else {
        cout << "Invalid input for game result." << endl;
    }
}

int main() {
    float r1;
    cout << "Enter rating of player 1 : ";
    cin >> r1;
    cout << endl;
    
    float r2;
    cout << "Enter rating of player 2 : ";
    cin >> r2;
    cout << endl;
    
    float result;
    cout << "Type 0.5 if the game is draw" << endl;
    cout << "Type 1 if Player 1 won" << endl;
    cout << "Type 0 if Player 1 lost" << endl;
    cin >> result;
    
	int k;
	cout<<"Enter K-Factor (10,20,30,40) : "<<endl;
	cin>>k;
    f(r1, r2, result,k);

    return 0;
}
