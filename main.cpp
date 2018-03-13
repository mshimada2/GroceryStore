//Author: McDermott Liam Shimada 
#include<iostream>
#include<string>
#include <vector>

using namespace std;

int main()
{
        int numItems = 0;
        char input;
        vector <string> groceryList; 
        
  
        do
        {
                
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;



                if(input == 'a' || input == 'A'){
                        string item;
                        cout<<"What is the item?"<<endl;
                        cin>>item; 
                        
                        groceryList.push_back(item);



                }

        }while(input != 'q' && input != 'Q');

        if(groceryList.size() > 0)
        {

        cout<<"==ITEMS TO BUY==\n";
        
        }

        else
        {

         cout<<"No items to buy!"<<endl;

        }
       

        for(int index = 0; index < groceryList.size(); index++){
               
               string food;
               food = groceryList[index];

                cout<<""<<index + 1<<" "<<food<<"\n";


        }

        
        return 0;
}
