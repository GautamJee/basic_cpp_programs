/* to store rollno and marks of the student of a class (get from the user) and store these details into a file called Marks.dat */

#include<iostream.h>
#include<fstream.h>
int main()
{
ofstream filout;
filout.open("marks.dat",ios::out);
char ans='y';
int rollno;
float marks;
while(ans=='y'||ans=='Y')
{
cout<<"\nEnter roll no:";
cin>>rollno;
cout<<"\nEnter marks:";
cin>>marks;
filout<<rollno<<"\n"<<marks<<"\n";
cout<<"\nwant to enter more:(y/n)";
cin>>ans;
}
filout.close();
return 0;
}