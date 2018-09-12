#include "pch.h"
#include "header.h"

void tuition_fx()
{
	int tuition_type = 0;

	while (true) //giving options for tuition type
	{
		cin >> tuition_type; //read input

		if (tuition_type == 1 || tuition_type == 2)// checking input
		{
			break;
		}

		else
		{
			cout << "ERROR, Please type either 1 or 2 for selection! \n";
			cin.clear();
			cin.ignore(1, '/n');
			continue;
		}
	}
}

