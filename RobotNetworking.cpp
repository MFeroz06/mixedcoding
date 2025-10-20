#include <iostream>
using namespace std;

int main(){
	
	string name;
	cout << "Please enter your name : "<< endl;
	cin >> name;
	int numberRobotic =0;
	int numberNetworking=0;
	int totalfeesRobotic=0;
	int totalfeesNetworking=0;

	
	
	while (name != "OK"){
		
		int monthcourse;
		cout << "Month of courses : "<<endl;
		cin >> monthcourse;
		
		int numberstudentcourse;
		cout << "Number of courses : "<< endl;
		cin >> numberstudentcourse;
		
		    if (numberstudentcourse = 1 ){
			
			char typecourse;
			cout << "Type of courses : "<< endl;
			cin >> typecourse;
			
			if (typecourse= 'R'){
				
				int robotfee= 55 * monthcourse;
				cout << "Your fee for Robotic course : "<<robotfee<<endl;
				numberRobotic = numberRobotic+1;
				totalfeesRobotic = totalfeesRobotic + robotfee;
				
			}
			else if (typecourse = 'N'){
				
				int networkfee = 105 * monthcourse;
				cout << "Your fee for Network course : "<<networkfee<<endl;
				numberNetworking = numberNetworking + 1;
				totalfeesNetworking = totalfeesNetworking + networkfee;
				
			}
	}
		
	else if (numberstudentcourse = 2 ){
				
				int robotfee = 55 * monthcourse;
				int networkfee = 105 * monthcourse;
				int bothcourse = robotfee + networkfee;
				cout << "Your fee for both course : "<<bothcourse<<endl;
				numberRobotic = numberRobotic + 1;
				numberNetworking = numberNetworking + 1;
				totalfeesRobotic = totalfeesRobotic + robotfee;
				totalfeesNetworking = totalfeesNetworking + networkfee;
			
				
				
				
				
			}
			
			else {
				
				cout << "Invalid choice"<<endl;
			}
			
			
		
			
			cout << "Please enter your name : "<< endl;
	        cin >> name;
	    
			
			
			
			
		}
		
		int totalFees = totalfeesRobotic + totalfeesNetworking;
		cout << "Total Robotic fees : "<<totalfeesRobotic<<endl;
		cout << "Total Networking fees : "<< totalfeesNetworking<< endl;
			cout << "Total fees : "<< totalFees<<endl;
			cout << "Number of student registered for Robotic : "<< numberRobotic << endl;
			cout << "Number of student registered for Networking : "<< numberNetworking << endl;	
			cout << " "<<endl;
			
		
		
		
		
	}
	
	
	
	
	
	

