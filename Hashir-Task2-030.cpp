#include<iostream>
using namespace std;
int main()

{
	float points = 0, redPoints, ePoints;
	float purchase,discount;

	cout<< "Enter the total amount of a purchase "<<endl;
	cin >> purchase;
	ePoints = purchase / 10;
	points += ePoints;

		cout << " \nLoyalty points earned: " << points;

		bool redeem = true;

		while (redeem)
		{
			string choice;
			cout << "\nDo you want to redeem the points? (y/n)? :" << endl;
			cin >> choice;

			if (choice == "y")
			{
				
				float p;
				cout << "\nEnter the number of points you want to redeem:" << endl;
				cin >> p;



				if (p > points)
				{
					cout << " \nInsufficient points" << endl;
					break;
				}

				discount = 0.5*p*10;
				points = points - p;
				cout << "Earnt $ " << discount << " on redemption of " << p << " points";

			}
			else
			{
				cout << "\nThank you for checking in" << endl;
				
			}

		}
		
			return 0;

			
		}

    



	


