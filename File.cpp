#include<iostream>
#include<fstream>
using namespace std;

int main()
{   cout<<"For signup(1) and for login(2): ";
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
    cout<<"Input a info u want to save: "<<endl;
    do{
        string info;
        cin.ignore();
        getline(cin,info);
        data<<info<<endl;
        cout<<"If you want to enter more info enter '1' else '0':"<<endl;
        cin>>inp;
    }while(inp!=0);
        string ex;
        cout<<"Press 'Y' to exit: ";
        cin>>ex;
        cout<<"Done";
        return 0;
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
                cout<<"If u want to read data enter '1' and for write '2': ";
                int red;
                cin>>red;
                if(red==1){
                    while(getline(ff,w)){
                        cout<<w<<endl;
                    }
                    ff.close();
                    string ex;
                    cout<<"Press 'Y' to exit: ";
                    cin>>ex;
                    cout<<"Done";
                    return 0;
                }
                else{
                    ofstream write(nn, ios::app);
                    int inpp;
                    do{
                        string info;
                        cin.ignore();
                        getline(cin,info);
                        write<<info<<endl;
                        cout<<"If you want to enter more info enter '1' else '0':"<<endl;
                        cin>>inpp;
                    }while(inpp!=0);
                    write.close();
                cout<<"Do u want to see your data then enter 'y' else 'n': ";
                string dat;
                cin>>dat;
                if(dat=="y"){
                    ifstream readg(nn);
                    string reading;
                    while(getline(readg,reading)){
                        cout<<reading<<endl;
                    }
                    readg.close();
                }
                else{
                    cout<<"Program ended";
                }
            }   string ex;
                cout<<"Press 'Y' to exit: ";
                cin>>ex;
                cout<<"Done";
                return 0;
            }
        }
        cout<<"User Not found"<<endl;
                string ex;
                cout<<"Press 'Y' to exit: ";
                cin>>ex;
                cout<<"Done";
        file.close();
   }
    return 0;
}
