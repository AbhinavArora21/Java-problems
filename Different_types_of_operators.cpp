//#include <iostream>
//using namespace std;
//int main()
//{
//   int a = 4, b = 9;
//    //Airthmetic operators are the following one.
//    cout << "The value of a + b is" << a + b << endl;
//
//       cout << "The value of a - b is" << a - b << endl;
//       cout << "The value of a / b is" << a / b << endl;
//       cout << "The value of a % b is" << a % b << endl;
//       cout << "The value of a ++ is" << a++ << endl;
//       cout << "The value of a -- is" << a-- << endl;
//       cout << "The value of ++ a is" << ++a << endl;
//       cout << "The value of -- a is" << --a << endl;
//       
//    return 0;
//}
//
//
//


#include <iostream>
#include <string>
using namespace std;
int Final_marks[10];
int grade[10];
int credit[10];
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
 for (int i = 0; i < 4; i++)
 {
 if (Final_marks[i] == 100)
 {
 grade[i] = 10;
 }
 else
 grade[i] = Final_marks[i] / 10 + 1;
 }
 for (int i = 4; i < 8; i++)
 {
 if (Final_marks[i] == 50)
 {
 grade[i] = 10;
 }
 else
 grade[i] = Final_marks[i] / 5 + 1;
 }
 if (Final_marks[8] == 100)
 {
 grade[8] = 10;
 }
 else
 grade[8] = Final_marks[8] / 10 + 1;
 for (int i = 0; i < 4; i++)
 {
 if (i == 3)
 {
 credit[3] = 3;
 }
 else
 credit[i] = 4;
 }
 for (int i = 4; i < 9; i++)
 {
 if (i == 8)
 {
 credit[8] = 2;
 }
 else
 credit[i] = 1;
 }
 float sgpa = 0;
 for (int i = 0; i < 9; i++)
 {
 sgpa = sgpa + (grade[i] * credit[i]);
 }
 float SGPA = sgpa / 21;
 cout << SGPA;
 }