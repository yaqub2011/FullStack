#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0)); 

    int arr1[10][10] = { 0 };  
    int arr2[10][10] = { 0 };  

    int x = 5, y = 5;
    arr1[y][x] = 1;

    
    arr1[2][2] = 1;
    arr1[2][3] = 1;
    arr1[2][4] = 1;
    arr1[5][7] = 1;
    arr1[5][8] = 1;
    arr1[5][9] = 1;
    arr1[9][4] = 1;
    arr1[8][2] = 1;
    arr1[7][2] = 1;

   
    arr2[1][1] = 1;
    arr2[1][2] = 1;
    arr2[1][3] = 1; 
    arr2[4][4] = 1;
    arr2[5][4] = 1;
    arr2[6][4] = 1; 
    arr2[8][7] = 1;
    arr2[8][8] = 1; 

   
    while (true)
    {
        system("cls");

       
        for (int i = 0; i < 10; i++)
        {
            
            for (int j = 0; j < 10; j++)
            {
                cout << arr1[i][j] << " ";
            }

            cout << "   "; 

            for (int j = 0; j < 10; j++)
            {
                if (arr2[i][j] == 0)
                    cout << ". "; 
                else if (arr2[i][j] == -1)
                    cout << "X ";  
                else
                    cout << ". ";  
            }

            cout << endl;
        }

       
        cout << "Enter x, y = ";
        int X, Y;
        cin >> X >> Y;

        
        if (arr2[X][Y] == 1)
        {
            cout << "Correct" << endl;
            arr2[X][Y] = -1; 
        }
        else
        {
            cout << "Dodged" << endl;
        }

        
        bool ShipsGone = true;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (arr2[i][j] == 1)
                {
                    ShipsGone = false;
                    break;
                }
            }
            if (!ShipsGone) break;
        }

        if (ShipsGone)
        {
            cout << "You win!" << endl;
            break;
        }

        
        cout << "Press any key..." << endl;
        _getch();
    }

    
}
