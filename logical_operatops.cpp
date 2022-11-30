//#include <iostream>
//using namespace std;
//int main()
//{
//    int a = 10, b = 10, c = 20, answer;
//
//    answer = (a == b) && (c > b);
//
//    cout << "For (" << a << " == " << b << ") && (" << b << " != " << c << "), the output is: " << answer << endl;
//    answer = (a == b) && (c < b) && (c > 0);
//
//    cout << "For (" << a << " == " << b << ") && (" << b << " <= " << c << "), the output is: " << answer << endl;
//    answer = (a == b) || (b > c);
//
//    cout << "For (" << a << " == " << b << ") && (" << c << " < " << b << "), the output is: " << answer << endl;
//    answer = (a != b) || (a <= b) || (a > c);
//
//    cout << "For (" << a << " != " << b << ") && (" << c << " < " << b << "), the output is: " << answer << endl;
//    answer = !(a == b);
//
//    cout << "For !(" << a << " == " << b << "), the output is: " << answer << endl;
//    answer = !(a != b);
//
//    cout << "For !(" << a << " != " << b << "), the output is: " << answer << endl;
//    return 0;
//}

#include<iostream>
 
using namespace std;
 
int main()
{  
char ch;
cout<<"Enter any character: ";
cin>>ch;
 
if(ch>=65&&ch<=90)
cout<<endl<<"You entered an uppercase character";
else if(ch>=48&&ch<=57)
cout<<endl<<"You entered a digit";
else if(ch>=97&&ch<=122)
cout<<endl<<"You entered a lowercase character";
else
cout<<endl<<"You entered a special character";
return 0;
}