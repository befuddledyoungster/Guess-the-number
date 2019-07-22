//GUESS THE NUMBER- A random fun game
#include<iostream>
#include <bits/stdc++.h>
#include <time.h>

using namespace std;

int main()
{
    //Initiate seed
    srand(time(0));
    // Takes input as the number of digits of number user wants
    int digits;
    cout << "Enter the no. of digits of the number you wanna guess."<<endl;
    cin >> digits;

    //This is the range between which the random no. is generated.In pyhton its very easy to do while in C and Cpp you need to do this.
    int ans1 = pow(10 , digits) -1;
    int ans2 = pow(10,digits -1);
    int ans = ans2 + srand()% (ans1 -ans2 +1);

    int temp = 0;
    while(pow(2, temp)< pow(10,digits))
    {
      temp ++;
    }
    int cnt = temp - 1 ;

    // Tells you about the tries left and whether you are close to your target or not
    while (cnt >=1)
    {
        int rand;
        cout << "\nGuess the number!! You have only "<<cnt <<" chances left."<<endl;
        cin >> rand;
        if (rand < ans)
            cout << "Guessed number is lower than the answer !!" <<endl;
        else if (rand >ans)
            cout << "Guessed number is higher than the answer !!"<< endl;
        else
        {
            cout << "Congratulations you have guessed the correct no.!!!";
                return 0;
        }
        cnt --;
    }
    cout << "Sorry, you have no tries left!"<<endl;
    cout<< "The correct number is "<< ans;
    return 0;
}
