#include<iostream>
using namespace std;

int main(){
        int num = 5, choice;     
        int size[5] = {5, 2, 6, 7, 8};  

        do {
            cout << "\nMenu:\n";
            cout << "1. Insert  \n";
            cout << "2. View \n";
            cout << "3. Update \n";
            cout << "4. Delete \n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) 
            {
            case 1: {
        
                int pos,Value;
                cout << "Enter the position  value: ";
                cin >> pos;

                    cout << "Enter the new value: ";
                    cin >>Value;

                    for (int i = num; i > pos; i--)
                    {
                        size[i] = size[i - 1];
                    }

                    size[pos]=Value;  
                    num++; 

                break;
            }

            case 2: 
            
                cout << "Array elements are: ";
                for (int i = 0; i < num; i++)
                {
                    cout << size[i] << " "; 
                }
                cout << endl;
                break;

            case 3: 
            {
                int pos,Value;
                cout << "Enter the position to update: ";
                cin >> pos;
                
                    cout << "Enter the new value: ";
                    cin >>Value;
    
                   size[pos] =Value; 
               
                break;
            }

            case 4:
             {
                int pos;
                cout << "Enter the position  delete: ";
                cin >> pos;
                 
                    for (int i = pos; i < num - 1; i++) 
                    {
                        size[i] = size[i + 1];
                    }
                    
                    size[num - 1] = 0;  
                    num--;  
               
                break;
            }

            case 0:
                cout << "Exiting..." << endl;
                break;

            default:    
                cout << "Invalid choice!" << endl;
                break;
            }
        } 
        while (choice != 0);

    }
