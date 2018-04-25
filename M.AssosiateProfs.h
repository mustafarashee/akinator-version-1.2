//M.AssosiateProfs.h
#include <iostream>
using namespace std;
#include "M.Assistantprofs.h"

class AssosiateProfs
{
public:

void MAssosiateProf()
{
  cout<<"Is your teacher Assosiate Professor?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    cout<<"Is your teacher Depertment's chairperson?"<<endl;
    cin>>ans;
   if(ans == "Yes" || ans == "yes")
   {
     cout<<"Your Teachers is DR SADIQ ALI KHAN"<<endl;
   }
   else
   {
     cout<<"Your Teachers is DR NADEEM MEHMOOD"<<endl;
   }

  }
  else 
  {
//NEXT CLASS
teacher.MAssistantprofs();
  }
}
void visitingfaculty(void)
	{
		cout << "Is your teacher is from urdu department?" << endl;
		
		cin >> ans;
		if (ans == "yes")
		{
			cout << "Is your teacher is assistant professor in urdu department?" << endl;
		
			cin >> ans;
			if (ans == "yes")
			{
				cout << "your teache is Rahat Afshan";
			}
			else if (ans != "yes")
			{
				cout << "Is your teacher is professor in Urdu department?" << endl;
				
				cin >> ans;
				if (ans == "yes")
				{
					cout << "your teacher is Tazeem-ul-Firdoos";
				}
				else {
					cout << "your teacher is Sohaila Farooqi";
				}

			}
		}
			else if (ans != "yes")
			{
				cout << "Is your teacher is from maths department?" << endl;
				
				cin >> ans;
				if (ans == "yes")
				{

					cout << "does your teacher wear gown in class" << endl;
				
					cin >> ans;
					if (ans == "yes")
					{
						cout << "your teacher is Noor Fatima";
					}
					else{
						cout << "your teacher is Durre Shahwar";
					}
				}
				else {
					cout << "your teacher is Zufishan Ghani";
				}
			}
		}
    void perfaculty(void)
	{
		cout << "have your teacher ever been student advisor?" << endl;
		cout << "a:yes   b:no" << endl  ;
		cin >> ans;
		if (ans == "yes")
		{
			teacher.advisor();
		}
		else
		{
			teacher.notadvisor();

		}



	}

 private:
 string ans;
 Assistantprofs teacher;
};