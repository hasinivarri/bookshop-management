// Book shop Management System
#include<iostream>
#include<conio.h>
using namespace std;
int ascii = 178,i=0;
char ch = ascii;
struct bookshop{
    int id;
    float price;
    string name,a_name,p_name;
}B[30];

//Heading function
void Heading(){

    cout<<"Book Shop Management system";

}

//Insert new book
void Insert(){
    system("cls");
    Heading();
cout<<"\n\n ENTER BOOK ID-> ";
cin>>B[i].id;
cout<<"\n\n ENTER BOOK NAME-> ";
cin>>B[i].name;
cout<<"\n\n ENTER AUTHOR NAME-> ";
cin>>B[i].a_name;
cout<<"\n\n ENTER PUBLISHER NAME-> ";
cin>>B[i].p_name;
cout<<"\n\n ENTER BOOK PRICE-> ";
cin>>B[i].price;
i++;
cout<<"\n\n\n INSERTED NEW BOOK SUCCESFULLY ";
}

//search book
void Search(){
    system("cls");
    Heading();
    if(i==0)
        cout<<"\n\n STRUCTURE IS EMPTY ";
    else{
        int b_id,cnt=0;
        cout<<"\n\n ENTER BOOK ID FOR SEARCH ";
        cin>>b_id;
        for(int j=0;j<i;j++){
            if(b_id == B[j].id){
                cout<<"\n\n BOOK NAME -> "<<B[j].name;
                cout<<"\n\n BOOK AUTHOR NAME -> "<<B[j].a_name;
                cout<<"\n\n BOOK PUBLISHER NAME -> "<<B[j].p_name;
                cout<<"\n\n BOOK PRICE -> "<<B[j].price ;
                cnt++;
            }
        }
        if(cnt==0) cout<<"\n\n PLEASE INSERT VALID BOOK ID ";
    }
}

//UPDATE BOOK
void Update(){
    system("cls");
    Heading();
    if(i==0)
        cout<<"\n\n STRUCTURE IS EMPTY ";
    else{
        int b_id,cnt=0;
        cout<<"\n\n ENTER BOOK ID TO UPDATE ";
        cin>>b_id;
        for(int j=0;j<i;j++){
            if(b_id == B[j].id){

                cout<<"\n\n ENTER BOOK NAME-> ";
                cin>>B[j].name;
                cout<<"\n\n ENTER AUTHOR NAME-> ";
                cin>>B[j].a_name;
                cout<<"\n\n ENTER PUBLISHER NAME-> ";
                cin>>B[j].p_name;
                cout<<"\n\n ENTER BOOK PRICE-> ";
                cin>>B[j].price;
                cout<<"\n\n\n  UPDATE BOOK SUCCESSFUL ";
                cnt++;
                break;
            }
        }
        if(cnt==0) cout<<"\n\n PLEASE INSERT VALID BOOK ID ";
    }
}

//DELETE BOOK
void Delete(){
    system("cls");
    Heading();
    if(i==0)
        cout<<"\n\n STRUCTURE IS EMPTY ";
    else{
        int b_id,cnt=0;
        cout<<"\n\n ENTER BOOK ID TO DELETE ";
        cin>>b_id;
        for(int j=0;j<i;j++){
            if(b_id == B[j].id){

                for(int k=j;k<i;k++){
                    B[k].id=B[k+1].id;
                    B[k].name=B[k+1].name;
                    B[k].a_name=B[k+1].a_name;
                    B[k].p_name=B[k+1].p_name;
                    B[k].price=B[k+1].price;
                }
                cout<<"\n\n\n  DELETE BOOK SUCCESSFUL ";
                cnt++;
                i--;
                break;
            }
        }
        if(cnt==0) cout<<"\n\n PLEASE INSERT VALID BOOK ID ";
    }

}

//SHOW ALL BOOKS
void Show(){
    system("cls");
    Heading();
    if(i==0)
        cout<<"\n\n STRUCTURE IS EMPTY ";
    else{
        for(int j=0;j<i;j++){
            cout<<"\n\n BOOK ID -> "<<B[j].id ;
            cout<<"\n\n BOOK NAME -> "<<B[j].name;
            cout<<"\n\n BOOK AUTHOR NAME -> "<<B[j].a_name;
            cout<<"\n\n BOOK PUBLISHER NAME -> "<<B[j].p_name;
            cout<<"\n\n BOOK PRICE -> "<<B[j].price<<"\n\n\n " ;
        }
    }
}

main(){
    p:
      system("cls");
    int choice;
    cout<<"\n";
    Heading();
        cout<<"\n\n  1. INSERT BOOK";
        cout<<"\n\n  2. SEARCH BOOK";
        cout<<"\n\n  3. UPDATE BOOK";
        cout<<"\n\n  4. DELETE BOOK";
        cout<<"\n\n  5. SHOW ALL BOOKS";
        cout<<"\n\n  6. EXIT\n\n";
        cout<<"\n\n  ENTER YOUR CHOICE";
        cin>>choice;
        switch(choice){
            case 1: Insert();
                break;
            case 2: Search();
                break;
            case 3: Update();
                break;
            case 4: Delete();
                break;
            case 5: Show();
                break;
            case 6:
                exit(0);
            default:
            cout<<"\n\n  PLEASE SELECT CORRECT OPTION "<<"\n\n" ;
        }
        getch();
        goto p;


}
