#include <iostream>
#include <fstream>
#include <string>
using namespace std;
    struct student
    {
      string IDnumber, name;
      int age;
      char grade, gender;
      double score;
 };
   int main(){
     ofstream output;
      student st[5];
      int age=0, score=0;
      static int malecount=0,femalecount=0;


       for(int i=0; i<5;i++){
       cout<<"Enter Student Name: "<<endl;
       cin>> st[i].name;

       cout<<"Enter Student ID:  "<<endl;
       cin>> st[i].IDnumber;

       cout<<"Enter student age: "<<endl;
       cin>> st[i].age;
       age += st[i].age;

       cout<<"Enter student gender: "<<endl;
       cin>> st[i].gender;
       if (st[i].gender == 'm') {
         malecount += 1;
       }else{
         femalecount += 1;
       }

       cout<<"Enter student score: "<<endl;
       cin>> st[i].score;
       score += st[i].score;


       if(st[i].score<= 80 && st[i].score== 100){
        st[i].grade = 'A';
      }
        else if(st[i].score<=70 && st[i].score== 79){
          st[i].grade = 'B';
     }
  else if(st[i].score<=60 && st[i].score==69){
         st[i].grade = 'C';
 }
  else if(st[i].score<= 50 && st[i].score== 59){
         st[i].grade = 'D';
 }
else if(st[i].score<= 49 && st[i].score== 40){
       st[i].grade = 'E';
}
else
{
   st[i].grade = 'F';
 }
 cout <<  "************************************"<<endl;
 cout<< endl;
 cout<< endl;
 //end of loop
}

double averageAge = age / 5;
double averageScore = score / 5;

output.open("nat.txt");


output<<"\tID_Number\t\t Name\t\tAge\t\tGender\t\tScore\t\tGrade"<<endl;
output<<endl;

for(int i= 0; i< 5;i++)
{
      output<<i+1<<"."<<"\t"<<st[i].IDnumber<<"\t\t\t";
      output<<st[i].name<<"\t\t";
      output<<st[i].age<<"\t\t";
      output<<st[i].gender<<"\t\t";
      output<<st[i].score<<"\t\t";
      output<<st[i].grade<<"\t\t"<<endl;
    }
output<<endl;

output << "Average Age: " << averageAge<<endl;
output << "Average score: " << averageScore<<endl;
output << "Male Count: " << malecount<<endl;
output << "Female Count" << femalecount<<endl;


    return 0;
   }
