//MLecturers.h
#include <iostream>
#include"MFullTimeCooperative.h"

using namespace std;
class Lecturers
{
  public:
void MLecturers()
{
  cout<<"Is your teacher Lecturer?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
  cout<<"Is your teacher student's advisor?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    cout<<"Your teacher is MR TAHA BIN NIAZ"<<endl;
  }
 else 
  {
    cout<<"Your teacher is MR M. SAJID"<<endl;
  }
  }
  else 

{
  //next class
  teacher.MFullTimeCooperative();
}
}
void lecturer(void)
	{
		cout << "does your teacher ever teach in PAF KIET?" << endl;
		
		cin >> ans;
		if (ans == "yes")
		{
			cout << "your teacher is urooj waheed";
		}
		else if (ans != "yes"){

			cout << "have your teacher done her MBA in 2009 from KUBS ?" << endl;
			
			cin >> ans;
			if (ans == "yes")
			{
				cout << "your teacher is Maryam Feroz";
			}
			else if (ans != "yes")
			{
				cout << "is your teacher's best scope is operating systems?" << endl;
				
				cin >> ans;
				if (ans == "yes")
				{
					cout << "your teacher is Madiha Khurram";
				}
				else if (ans != "yes")
				{
					cout << "is your teacher new in UBIT?" << endl;
					
					cin >> ans;
					if (ans == "yes")
					{
						cout << "your teacher is Yusra Mansoor";
					}
					else if (ans != "yes")
					{
						cout << "is your teacher full time co-operative?" << endl;
					
						cin >> ans;
						if (ans == "yes")
						{
							cout << "your teacher is Amna Iftikhar";
						}
						else{
							cout << "your teacher is Shaista rais";
						}
					}
				
					}
				}
			}
		}
 private:
 string ans;
 FullTimeCooperative teacher;
};