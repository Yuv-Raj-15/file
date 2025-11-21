#include<iostream>
#include<fstream>
using namespace std;

int main()
{   cout<<"For signup(1) and for login(2)";
    int n;
    cin>>n;
   if(n==1){
    ofstream file("Data.pdf", ios:: app);
    string username;
    string password;
    cout<<"Enter username"<<endl;
    cin>>username;
    file<<username;
    cout<<"Enter password"<<endl;
    cin>>password;
    file<<password<<'\n';
    file.close();
   }
   else{
        ifstream file("Data.pdf");
        string username;
        string password;
        string line;
        cout<<"Enter username"<<endl;
        cin>>username;
        cout<<"Enter password"<<endl;
        cin>>password;
        string n=username+password;
        int count=0;
        while(getline(file,line)){
            if(n==line){
                count++;
                cout<<"User Found";
            }
        }
        if(count==0) cout<<"User Not found";
        file.close();
   }
    return 0;
}
