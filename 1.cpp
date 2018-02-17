#include <iostream>
using namespace std;
int main(){
int x;
cout << "Please enter an integer: ";
cin >> x;
if (x==0)
{
cout << "The number u entered is zero" << endl;
}
else if (x>0)
{
cout << "The number u entered is positive." << endl;
}
else
{
cout << "The number u entered is negative" << endl;
}
return 0;
}