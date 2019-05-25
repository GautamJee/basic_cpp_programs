/* program to create a single file and then display its content */

#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
void main()
{
system("cls");
ofstream fout("student.dat",ios::out);    //connect student file to output stream fout
char name[30],ch;
float marks=0.0;
//loop to get 5 records
for (int i=0; i<5;i++)
{
cout<<"student"<<(i+1)<<":\t name:";
cin.get(name,30);
cout<<"\t marks:";
cin>>marks;	cin.get(ch);	 //to empty input buffer write to the file
fout<<name<<"\n"<<marks<<"\n";
}
fout.close();	//disconnect student file to input the stream fin
ifstream fin("student",ios::in);
fin.seekg(0);       //to bring file pointe at the file beginning
cout<<"\n";
for(i=0;i<5;i++)  	//display records
{
	fin.get(name,30);                //read name from file student
	fin.get(ch);
	fin>>marks;                     //read marks from the student
	fin.get(ch);
	cout<<"student name:"<<name;
	cout<<"\t marks:"<<marks<<"\n";
}
fin.close();                       //disconnect student file from the stream
getch();
}