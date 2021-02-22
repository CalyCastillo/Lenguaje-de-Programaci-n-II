#include <iostream>
#include "starShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion;
    
	cout<<"1 - StarShip"<<endl;
	cout<<"2 - Snake"<<endl;
	cout<<"Que desea jugar?: ";
	cin>>opcion;
	
	switch (opcion)
	{
		case 1:  
		{
			system("cls");
			starShip();
			break;
		}
			
		case 2:
		{
			system("cls");
			snake();
			break;
		}
			
		default:
		break;	
	}

    return 0;
}
