#include <iostream>
using namespace std;

void list_File(){
	int UserNum;
	cout << "\t--------[LIST FILE DETAILS]--------\n";
	cout << "[1]<-List All Files \n";
	cout << "[2]<-List of Extension Files \n";
	cout << "[3]<-List of Name Wise\n";
	cout << "Enter your Choice: ";
		cin >> UserNum;
		
		if(UserNum == 1){
	cout << "\nList of All(*.*) Files \n";
	cout << "file1.txt\nfile2.cpp\nreport.doc\nimage.jpg\n(continues...)\n";
	cout << "\nTotal Files: 4\n";
	cout << "Press any key  to continue...\n\n";
	
		}
}

void create_Directory(){
	string DName;
	cout << "Enter the Directory name: "<< endl;
		cin >> DName;
	cout << "Current directory: C: \\Users\\UserName\\Documents"<< endl;
	cout << DName << "Directory Successfully Created"<< endl;
	cout << "Press any key to continue...\n"<< endl;
}
 
 void change_Directory() {
    string DName;
    int UserNum;
    cout << "\nCurrent Directory: C:\\Users\\UserName\\Documents\n" << endl;
    cout << "--------[CHANGE DIRECTORY]--------"<< endl;
    cout << "[1]<-Step by Step Backward"<< endl;
    cout << "[2]<-Goto Root Directory"<< endl;
    cout << "[3]<-Forward Directory"<< endl;
    cout << "Enter the Number: ";
    	cin >> UserNum;
    cout <<""<<endl;
    cout << "Please enter the Directory Name: ";
    	cin >> DName;
    cout << "Current Directory: C:\\Users\\UserName\\Documents\\" << DName << endl;
    cout << "Press any key  to continue...\n"<< endl;
}

int main (){
	int UserNum;
   
        cout << "\t--------[MAIN MENU]-------" << endl;
        cout << "[1]<-To Display List of Files"<< endl;
        cout << "[2]<-To Create New Directory"<< endl;
        cout << "[3]<-To Change the Working Directory"<< endl;
        cout << "[4]<-Exit"<< endl;
        cout << "Enter the Number: ";
        cin >> UserNum;
  		
     while (UserNum != 4){
	
        if (UserNum == 1){
        	list_File();
		}else if(UserNum == 2){
			create_Directory();
		}else if(UserNum == 3){
			change_Directory();
		}else if(UserNum == 4){
			cout << "Exiting..." << endl;
		}else {
			cout << "Invalid choice! Try again." << endl;
		}
		cout << "\t--------[MAIN MENU]--------" << endl;
        cout << "[1]<-To Display List of Files"<< endl;
        cout << "[2]<-To Create New Directory"<< endl;
        cout << "[3]<-To Change the Working Directory"<< endl;
        cout << "[4]<-Exit"<< endl;
        cout << "Enter the Number: ";
        cin >> UserNum;

    } 

	return 0;
}
























