#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>

using namespace std;

void mainMenu();

class Management{
	public:
		Management()
		{
			mainMenu();
		}
};

class Details{
	public:
		static string name,gender;
		int age;
		string phoneNo;
		string address;
		static string Id;
		char arr[999];
		
		void information()
		{
			cout<<"\n Enter the customer ID: ";
			cin>>Id;
			cout<<"\n Enter the customer Name: ";
			cin>>name;
			cout<<"\n Enter the customer Gender: ";
			cin>>gender;
			cout<<"\n Enter the customer Age: ";
			cin>>age;
			cout<<"\n Enter the customer PhoneNo: ";
			cin>>phoneNo;
			cout<<"\n Enter the customer Address: ";
			cin>>address;
			cout<<"\n Your details are saved with us."<<endl;
		}
};

string Details::Id;
string Details::name;
string Details::gender;


class registration{
	public:
		static int choice;
		int choice1;
		int back;
		static float charge;
		
		void flights()
		{
			string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
			
			for(int a=0;a<6;a++)
			
			{
				cout<<(a+1)<<".flight to "<<flightN[a]<<endl;
			}
			
			cout<<"Wellcome to the Fatima Airlines!"<<endl;
			cout<<"Press the number of the country of which you want to book the flight:";
			cin>>choice;
			system("cls");
			
			switch(choice)
			{
			case 1:
			 {
				cout<<"___________________ Wellcome to the Dubai Emirates ________________________\n"<<endl;
				cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
				cout<<"Following are the Flights.\n"<<endl;
				
				cout<<"1.DUB - 786"<<endl;
				cout<<"\t18-11-2023 8:00 AM 10hrs Rs.20000"<<endl;
				cout<<"2.DUB - 536"<<endl;
				cout<<"\t20-11-2023 10:00 AM 12hrs Rs.14000"<<endl;
				cout<<"3.DUB - 987"<<endl;
				cout<<"\t23-11-2023 3:00 AM 13hrs Rs.12000"<<endl;
				cout<<"Which one you want to book:";
				cin>>choice1;
				system("cls");
				
				if(choice1==1)
				{
					charge=20000;
					cout<<"You have successfully booked flight DUB - 786 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else if(choice1==2)
				{
					charge=14000;
					cout<<"You have successfully booked flight DUB - 536 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else if(choice1==3)
				{
					charge=12000;
					cout<<"You have successfully booked flight DUB - 987 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else
				{
					cout<<"Invalid input,shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press 1 to go back to main menu."<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
			    	mainMenu();
		    	}
		    	
				break;
			}
			
			
			case 2:{
				cout<<"___________________ Wellcome to the Canadian Airlines ________________________\n"<<endl;
				cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
				cout<<"Following are the Flights.\n"<<endl;
				
				cout<<"1.CA - 186"<<endl;
				cout<<"\t19-11-2023 6:00 AM 20hrs Rs.35000"<<endl;
				cout<<"2.CA - 216"<<endl;
				cout<<"\t21-11-2023 4:00 PM 22hrs Rs.27000"<<endl;
				cout<<"3.CA - 017"<<endl;
				cout<<"\t25-11-2023 9:00 PM 24hrs Rs.20000"<<endl;
				cout<<"Which one you want to book:";
				cin>>choice1;
				system("cls");
				
				if(choice1==1)
				{
					charge=35000;
					cout<<"You have successfully booked flight CA - 186 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else if(choice1==2)
				{
					charge=27000;
					cout<<"You have successfully booked flight CA - 216 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else if(choice1==3)
				{
					charge=20000;
					cout<<"You have successfully booked flight CA - 017 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else
				{
					cout<<"Invalid input,shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press 1 to go back to main menu."<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
			    	mainMenu();
			    }
			
				break;
			}
					
			case 3:
			{
				cout<<"___________________ Wellcome to the UK Airways ________________________\n"<<endl;
				cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
				cout<<"Following are the Flights.\n"<<endl;
				
				cout<<"1.UK - 384"<<endl;
				cout<<"\t05-12-2023 3:00 AM 14hrs Rs.45000"<<endl;
				cout<<"2.UK - 081"<<endl;
				cout<<"\t09-12-2023 6:00 PM 16hrs Rs.38000"<<endl;
				cout<<"Which one you want to book:";
				cin>>choice1;
				system("cls");
				
				if(choice1==1)
				{
					charge=45000;
					cout<<"You have successfully booked flight UK - 384 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else if(choice1==2)
				{
					charge=38000;
					cout<<"You have successfully booked flight UK - 081 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				
				else
				{
					cout<<"Invalid input,shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press 1 to go back to main menu."<<endl;
				cin>>back;
				system("cls");
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
			    	mainMenu();
			    }
			
				break;
			}
			
			case 4:
			{
				cout<<"___________________ Wellcome to the US Airways ________________________\n"<<endl;
				cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
				cout<<"Following are the Flights.\n"<<endl;
				
				cout<<"1.US - 489"<<endl;
				cout<<"\t02-12-2023 1:00 PM 15hrs Rs.25000"<<endl;
				cout<<"2.US - 506"<<endl;
				cout<<"\t08-12-2023 12:00 AM 17hrs Rs.20000"<<endl;
				cout<<"Which one you want to book:";
				cin>>choice1;
				system("cls");
				
				if(choice1==1)
				{
					charge=25000;
					cout<<"You have successfully booked flight DUB - 786 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else if(choice1==2)
				{
					charge=20000;
					cout<<"You have successfully booked flight DUB - 536 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else
				{
					cout<<"Invalid input,shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press 1 to go back to main menu."<<endl;
				cin>>back;
				if(back==1)
				{
					mainMenu();
				}
				else
				{
			    	mainMenu();
		 	    } 	
				 	
			    break;
			}	
			
			case 5:
			{
				cout<<"___________________ Wellcome to the Australian Airways ________________________\n"<<endl;
				cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
				cout<<"Following are the Flights.\n"<<endl;
				
				cout<<"1.As - 123"<<endl;
				cout<<"\t15-12-2023 5:00 PM 20hrs Rs.42000"<<endl;
				cout<<"2.As - 321"<<endl;
				cout<<"\t17-12-2023 10:00 AM 23hrs Rs.36000"<<endl;
				cout<<"3.As - 213"<<endl;
				cout<<"\t19-12-2023 3:00 PM 25hrs Rs.27000"<<endl;
				cout<<"Which one you want to book:";
				cin>>choice1;
				
				if(choice1==1)
				{
					charge=42000;
					cout<<"You have successfully booked flight As - 123 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else if(choice1==2)
				{
					charge=36000;
					cout<<"You have successfully booked flight As - 321 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else if(choice1==3)
				{
					charge=27000;
					cout<<"You have successfully booked flight As - 213 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else
				{
					cout<<"Invalid input,shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press 1 to go back to main menu."<<endl;
				cin>>back;
				if(back==1)
				{
					mainMenu();
				}
				else
				{
			    	mainMenu();
			    }
		        break;
			}
			
			case 6:
				{
				cout<<"___________________ Wellcome to the European Airways ________________________\n"<<endl;
				cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
				cout<<"Following are the Flights.\n"<<endl;
				
				cout<<"1.Eu - 123"<<endl;
				cout<<"\t14-12-2023 5:00 PM 20hrs Rs.40000"<<endl;
				cout<<"2.Eu - 321"<<endl;
				cout<<"\t17-12-2023 10:00 AM 23hrs Rs.36000"<<endl;
				cout<<"Which one you want to book:"<<endl;
				cin>>choice1;
				system("cls");
				
				if(choice1==1)
				{
					charge=40000;
					cout<<"You have successfully booked flight Eu - 123 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else if(choice1==2)
				{
					charge=36000;
					cout<<"You have successfully booked flight As - 321 "<<endl;
					cout<<"You can collect your ticket by going back to menu"<<endl;
				}
				else
				{
					cout<<"Invalid input,shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press 1 to go back to main menu."<<endl;
				cin>>back;
				if(back==1)
				{
					mainMenu();
				}
				else
				{
			    	mainMenu();
			    }
			    break;
		}
		
			default:{
				cout<<"Invalid Input , shifting you to the main menu."<<endl;
				mainMenu();
				break;
			}
    	}
    }			
};
				
			
			
float registration::charge;
int registration::choice;

class ticket:public registration, Details
{
	public:
	
		void Bill(){
			string destination="";
			ofstream outf("records.txt",ios::app);
			{
				outf<<"________________FATIMA AIRLINES__________________"<<endl;
				outf<<"_____________________TICKET______________________"<<endl;
				outf<<"_________________________________________________"<<endl;
				
				outf<<"Customer ID: "<<Details::Id<<endl;
				outf<<"Customer Name: "<<Details::name<<endl;
				outf<<"Customer Gender: "<<Details::gender<<endl;
				outf<<"\t\tDescription"<<endl<<endl;
				
				if(registration::choice==1)
				{
					destination="Dubai";
				}
				else if(registration::choice==2)
				{
					destination="Canada";
				}
				else if(registration::choice==3)
				{
					destination="UK";
				}
				else if(registration::choice==4)
				{
					destination="USA";
				}
				else if(registration::choice==5)
				{
					destination="Australia";
				}
				
				outf<<"Destination \t\t"<<destination<<endl;
				outf<<"Flight cost :\t\t"<<registration::charge<<endl;
			}
			outf.close();
		}
		
		void dispBill()
		{
			ifstream ifs("records.txt");
			{
				if(!ifs)
				{
					cout<<"File Error!"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr ,999);
					cout<<arr<<endl;
				}
			}
			
			ifs.close();
		}
};

void mainMenu()
{
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t               WELLCOME TO FATIMA AIRLINES \n"<<endl;
	cout<<"\t________________Main Menu______________________________"<<endl;
	cout<<"\t_______________________________________________________"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t*****Press 1 to add customer details*****"<<endl;
	cout<<"\t*****Press 2 for flight registration*****"<<endl;
	cout<<"\t*****Press 3 for ticket and charges*****"<<endl;
	cout<<"\t*****Press 4 for exit*****"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t________________________________________________________"<<endl;
	
	cout<<"Enter your choice:";
	cin>>lchoice;
	cout<<endl;
	system("cls");
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice){
		case 1:{
			cout<<"\t\t____________CUSTOMER DETAILS______________"<<endl;
			d.information();
			cout<<"Press 1 to go to main menu ";
			cin>>back;
			system("cls");
			{
				mainMenu();
			}
			
			break;
		}
		
		case 2:{
			cout<<"\t\t_______Book a flight using this system_______"<<endl;
			r.flights();
			break;
		}
		
		case 3:{
			cout<<"\t\t_______Get your Ticket________"<<endl;
			t.Bill();
			cout<<"Your ticked is printed,You can collect it \n";
			cout<<"Press 1 to see your ticket ";
			cin>>back;
			if(back==1){
				t.dispBill();
				cout<<"Press 2 to go to main menu ";
			cin>>back;
			system("cls");
			{
				mainMenu();
			}
			break;
		}
		
		case 4:{
			cout<<"\n\n\t__________ THANK YOU ____________"<<endl;
			break;
		}
		
		default:
			{
				cout<<"\t Invalid Input.Try Again. \n"<<endl;
				mainMenu();
				break;
			}
	    }
	}	
}

int main(){
	Management Mobj;
	return 0;
}

