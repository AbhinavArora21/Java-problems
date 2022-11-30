#include <iostream>
#include <string>
using namespace std;
int Final_marks[10];
void cal_accredited(char subject_external[][100], int
internal[], int external[])
{
 for (int j = 0; j < 4; j++)
 {
 Final_marks[j] = ((2 * external[j]) / 3) + (internal[j] / 
2) + internal[j];
 cout << "Accredited marks of " <<
subject_external[j] << "=" << Final_marks[j] << endl;
 }
 for (int j = 4; j < 8; j++)
 {
 Final_marks[j] = external[j] + internal[j];
 cout << "Accredited marks of " <<
subject_external[j] << "=" << Final_marks[j] << endl;
 }
 Final_marks[8] = internal[8];
 cout << "Accredited marks of " <<
subject_external[8] << "=" << Final_marks[8] << endl;}
 int main()
 {
 char subject_internal[][100] = {"Math", "Pps", 
"Chemistry", "English", "PPSL", "CHEMISTRYL", 
"ENGLISHL", "MP", "MPD"};
 int internal[10];
 char subject_external[][100] = {"Math", "Pps", 
"Chemistry", "English", "PPSL", "CHEMISTRYL", 
"ENGLISHL", "MP"};
 int external[10];
 for (int i = 0; i < 9; i++)
 {
 cout << "Enter marks of internal exam of " <<
subject_internal[i] << endl;
 cin >> internal[i];
 }
 for (int j = 0; j < 8; j++)
 {
 cout << "Enter marks of external exam of " <<
subject_external[j] << endl;
 cin >> external[j];
 }
 cal_accredited(subject_external, internal, 
external);
 }