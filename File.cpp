#include<iostream>
#include<fstream>
using namespace std;

int main()
{   cout<<"For signup(1) and for login(2)";
    int n;
    cin>>n;
   if(n==1){
    ofstream file("Data.txt", ios:: app);
    string username;
    string password;
    cout<<"Enter username"<<endl;
    cin>>username;
    file<<username;
    cout<<"Enter password"<<endl;
    cin>>password;
    file<<password<<endl;
    file.close();
    string nn=username+".txt";
    ofstream data(nn);
    
    int inp;
    do{
        string info;
        cin.ignore();
        getline(cin,info);
        data<<info<<endl;
        cout<<"If you want to enter more info enter 'y' else '0':"<<endl;
        cin>>inp;
    }while(inp!=0);
   }
   else{
        ifstream file("Data.txt");
        string username;
        string password;
        string line;
        cout<<"Enter username"<<endl;
        cin>>username;
        cout<<"Enter password"<<endl;
        cin>>password;
        string n=username+password;
        while(getline(file,line)){
            if(n==line){
                string nn=username+".txt";
                ifstream ff(nn);
                string w;
                while(getline(ff,w)){
                    cout<<w<<endl;
                }
                return 0;
            }
        }
        cout<<"User Not found";
        file.close();
   }
    return 0;
}
