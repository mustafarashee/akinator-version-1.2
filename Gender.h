#include <iostream>
using namespace std;
#include "M.AssosiateProfs.h"
class gender
{
  public:
void male()
{
  cout<<"Is your teacher male?"<<endl;
  cin>>ans;
  if(ans == "Yes" || ans == "yes")
  {
    teacher.MAssosiateProf();
  }
  else 
  {
    cout<<"is your teacher is in visiting faculty?"<<endl;
    cin>>ans;
    if(ans=="Yes"||ans=="yes")
    {
teacher.visitingfaculty();
    }
    else{
      teacher.perfaculty();
    }
//female CLASS
  }
}
 private:
 string ans;
 AssosiateProfs teacher;
};