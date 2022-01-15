#include <iostream>
#include <string>

using namespace std;

int main()
{
    string apartment[10];

    for (int i = 1; i < 11; i++)
    {
        cout << "Input tenant's name in apartment #" << i << ":" << endl;
        cin >> apartment[i - 1];
        cout << endl;
    }

    int current;
    cout << endl;
    
    while (true)
    {
        cout << endl << "Input apartment number:" << endl;
        cin >> current;
        
        if (current > 10 || current < 1)
        {
            cout << "Invalid input. Please try again." << endl;
        }
        else
        {
            current--;
            cout << "Here's living " << apartment[current] << endl;
        }
    }
}
