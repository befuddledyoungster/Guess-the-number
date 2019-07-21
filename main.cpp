#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int digits;
    cout << "Enter the no. of digits of the number you wanna guess."<<endl;
    cin >> digits;

    int ans1 = pow(10 , digits) -1;
    int ans2 = pow(10,digits -1);

    int ans = ans2 + rand()% (ans1 -ans2 +1);

    int temp = 0;
    while(pow(2, temp)< pow(10,digits))
    {
      temp ++;
    }
    int cnt = temp;

    while (cnt --)
    {
        int rand;
        cout << "Guess the number!! You have only "<<cnt <<"chances left."<<endl;
        cin >> rand;
        if (rand < ans)
            cout << "Too low!!" <<endl;
        else if (rand >ans)
            cout << "Too high!!"<< endl;
        else
        {
            cout << "Congratulations you have guessed the correct no.!!!";
                return 0;
        }
    }
    cout << "Sorry, you have no tries left!";
    return 0;
}
