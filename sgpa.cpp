


#include <iostream>

using namespace std;
int grade(float);
int main()
{
 cout<<"SGPA CAlCULATOR"<<endl;
float maths_ext,chem_ext,pps_ext,eng_ext,maths_int,chem_int,pps_int,eng_int,maths_external,chem_external,pps_external,eng_external;
 cout<<"Enter Maths external marks: "; cin>>maths_ext;
 cout<<"Enter Chemistry external marks: ";cin>>chem_ext;
 cout<<"Enter Pps external marks: "; cin>>pps_ext;
 cout<<"Enter English external marks: "; cin>>eng_ext;
 cout<<"Enter Maths internal marks: "; cin>>maths_int;
 cout<<"Enter chemistry internal marks: "; cin>>chem_int;
 cout<<"Enter pps internal marks: "; cin>>pps_int;
 cout<<"Enter english internal marks: ";  cin>>eng_int;
 maths_external=((2*maths_ext/3)+(maths_int/2));
 chem_external=((2*chem_ext/3)+(chem_int/2));
 pps_external=((2*pps_ext/3)+(pps_int/2));
 eng_external=((2*eng_ext/3)+(eng_int/2));
 cout<<"External marks of maths : "<<maths_external<<endl;
 cout<<"External marks of chemistry : "<<chem_external<<endl;
 cout<<"External marks of pps : "<<pps_external<<endl;
 cout<<"External marks of english : "<<eng_external<<endl;
if(maths_external<23 || chem_external<23 || pps_external<23 || eng_external<23)
    cout<<"U R Fail";

int maths_theory,chem_theory,pps_theory,eng_theory;
 maths_theory = maths_external+ maths_int;
 chem_theory = chem_external + chem_int;
 pps_theory = pps_external + pps_int;
 eng_theory = eng_external + eng_int;
 cout<<"Total marks in maths : "<<maths_theory<<endl;
cout<<"Total marks in chemistry : "<<chem_theory<<endl;
cout<<"Total marks in pps : "<<pps_theory<<endl;
cout<<"Total marks in english : "<<eng_theory<<endl;

int final_maths,final_chemistry,final_pps,final_english;

final_maths=grade(maths_theory)*4;
final_chemistry=grade(chem_theory)*4;
final_english=grade(eng_theory)*3;
final_pps=grade(pps_theory)*4;
 int sgpa;
 sgpa = (final_chemistry+final_english+final_maths+final_pps)/15;
 cout<<"Sgpa : "<<sgpa;

 return 0;
}
int grade(float score){
if(score>90 && score<=100){return (10);}
else if(score>80 && score<=90){return (9);}
else if(score>70 && score<=80){return (8);}
else if(score>60 && score<=70){return (7);}
else if(score>50 && score<=60){return (6);}
else if(score>45 && score<=50){return (5);}
else if(score>40 && score<=45){return (4);}
else if(score<40){return (0);}
}