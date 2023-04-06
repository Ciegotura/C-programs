#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void wypisz(char t[][3]){
cout<<"  1   2   3"<<endl;
    cout<<"1 "<<t[0][0]<< " | "<<t[0][1]<<" | "<<t[0][2]<<endl;
    cout<<"  ---------\n";
    cout<<"2 "<<t[1][0]<< " | "<<t[1][1]<<" | "<<t[1][2]<<endl;
    cout<<"  ---------\n";
    cout<<"3 "<<t[2][0]<< " | "<<t[2][1]<<" | "<<t[2][2]<<endl;

}
void wpiszx(char t[][3]){
 cout<<"Witamy w grze"<<endl;
 cout<<"Player X Wybiez wspolzendne pktu np 11."<<endl;
int i;
mughals:
    cin>>i;//if()goto mughals;

    switch(i){
    case 11: cout<<"Wpisz x"<<endl;
    if(t[0][0]=='o'||t[0][0]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[0][0];}
        break;
    case 12:cout<<"Wpisz x"<<endl;
     if(t[0][1]=='o'||t[0][1]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[0][1];}
        break;
    case 13:cout<<"Wpisz x"<<endl;
     if(t[0][2]=='o'||t[0][2]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[0][2];}
        break;
    case 21:cout<<"Wpisz x"<<endl;
     if(t[1][0]=='o'||t[1][0]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[1][0];}
        break;
    case 22:cout<<"Wpisz x"<<endl;
     if(t[1][1]=='o'||t[1][1]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[1][1];}
        break;
    case 23:cout<<"Wpisz x"<<endl;
     if(t[1][2]=='o'||t[1][2]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[1][2];}
        break;
    case 31:cout<<"Wpisz x"<<endl;
     if(t[2][0]=='o'||t[2][0]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[2][0];}
        break;
    case 32:cout<<"Wpisz x"<<endl;
     if(t[2][1]=='o'||t[2][1]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[2][1];}
        break;
    case 33:cout<<"Wpisz x"<<endl;
     if(t[2][2]=='o'||t[2][2]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[2][2];}
        break;
    default:
cout<<"nie ma takiej opcji";
        goto mughals;
    }



}
void wpiszo(char t[][3]){
 cout<<"Witamy w grze"<<endl;
 cout<<"Player o Wybiez wspolzendne pktu np 11."<<endl;
int i;
mughals:
    cin>>i;
    switch(i){
    case 11: cout<<"Wpisz o"<<endl;
     if(t[0][0]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[0][0];}
        break;
    case 12:cout<<"Wpisz o"<<endl;
    if(t[0][1]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[0][1];}
        break;
    case 13:cout<<"Wpisz o"<<endl;
    if(t[0][2]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[0][2];}
        break;
    case 21:cout<<"Wpisz o"<<endl;
    if(t[1][0]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[1][0];}
        break;
    case 22:cout<<"Wpisz o"<<endl;
    if(t[1][1]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[1][1];}
        break;
    case 23:cout<<"Wpisz o"<<endl;
    if(t[1][2]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[1][2];}
        break;
    case 31:cout<<"Wpisz o"<<endl;
    if(t[2][0]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[2][0];}
        break;
    case 32:cout<<"Wpisz o"<<endl;
    if(t[2][1]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[2][1];}
        break;
    case 33:cout<<"Wpisz o"<<endl;
    if(t[2][2]=='x'){cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; goto mughals;
    }else{cin>>t[2][2];}
        break;
    default:
        cout<<"nie ma takiej opcji"<<endl;
        goto mughals;
    }



}
int sprawdzacX(char t[][3],int(*w)(int&,char),int &i,char a){

if(t[0][0]=='x' && t[1][1]=='x' && t[2][2]==
   'x'){
cout<<"Gracz x wygral!"<<endl; (*w)(i,a);
return 1;
}
else if(t[0][2]=='x' && t[1][1]=='x' && t[2][0]==
   'x'){
cout<<"Gracz x wygral!"<<endl; (*w)(i,a);
return 1;
}
else if(t[0][0]=='x' && t[0][1]=='x' && t[0][2]==
   'x'){
cout<<"Gracz x wygral!"<<endl; (*w)(i,a);
return 1;
}
else if(t[1][0]=='x' && t[1][1]=='x' && t[1][2]==
   'x'){
cout<<"Gracz x wygral!"<<endl; (*w)(i,a);
return 1;
}
else if(t[2][0]=='x' && t[2][1]=='x' && t[2][2]==
   'x'){
cout<<"Gracz x wygral!"<<endl; (*w)(i,a);
return 1;
}
else if(t[0][0]=='x' && t[1][0]=='x' && t[2][0]==
   'x'){
cout<<"Gracz x wygral!"<<endl; (*w)(i,a);
return 1;
}
else if(t[0][1]=='x' && t[1][1]=='x' && t[2][1]==
   'x'){
cout<<"Gracz x wygral!"<<endl; (*w)(i,a);
return 1;
}
else if(t[0][2]=='x' && t[1][2]=='x' && t[2][2]==
   'x'){
cout<<"Gracz x wygral!"<<endl; (*w)(i,a);
return 1;
}

}
int sprawdzacO(char t[][3],int(*w)(int&,char),int &i,char a){
if(t[0][0]=='o' && t[1][1]=='o' && t[2][2]==
   'o'){
cout<<"Gracz o wygral! 1 "<<endl; (*w)(i,a);
return 1;
}else if(t[0][2]=='o' && t[1][1]=='o' && t[2][0]==
   'o'){
cout<<"Gracz o wygral! 2 "<<endl; (*w)(i,a);
return 1;
}
else if(t[0][0]=='o' && t[0][1]=='o' && t[0][2]==
   'o'){
cout<<"Gracz o wygral! 3 "<<endl;(*w)(i,a);
return 1;
}
else if(t[1][0]=='o' && t[1][1]=='o' && t[1][2]==
   'o'){
cout<<"Gracz o wygral! 4 "<<endl;(*w)(i,a);
return 1;
}
else if(t[2][0]=='o' && t[2][1]=='o' && t[2][2]==
   'o'){
cout<<"Gracz o wygral! 5 "<<endl;(*w)(i,a);
return 1;
}
else if(t[0][0]=='o' && t[1][0]=='o' && t[2][0]==
   'o'){
cout<<"Gracz o wygral! 6 "<<endl;(*w)(i,a);
return 1;
}
else if(t[0][1]=='o' && t[1][1]=='o' && t[2][1]==
   'o'){
cout<<"Gracz o wygral! 7 "<<endl;(*w)(i,a);
return 1;
}
else if(t[0][2]=='o' && t[1][2]=='o' && t[2][2]==
   'o'){
cout<<"Gracz o wygral! 8 "<<endl;(*w)(i,a);
return 1;
}
}
void reset(char t[][3]){
t[0][0]=' ';
t[0][1]=' ';
t[0][2]=' ';
t[1][0]=' ';
t[1][1]=' ';
t[1][2]=' ';
t[2][0]=' ';
t[2][1]=' ';
t[2][2]=' ';

}
int scorix(int &i,char a){

cout<<"Gracz" <<a<< "wygral"<<i<<"razy"<<endl;
i++;
}
void wpiszBoto(char t[0][3],int(*wsk)()){
cout<<"Ruch bota xDDDDD"<<endl;
int i;
mg:
    i=(*wsk)();
    switch((*wsk)()){
    case 11: //cout<<"Wpisz o"<<endl;
     if(t[0][0]=='x'||t[0][0]=='o'){//cout<<"zajente cwelu, wpisz jeszcze raz"<<endl;
     goto mg;
    }else{t[0][0]='o';}
        break;
    case 12://cout<<"Wpisz o"<<endl;
    if(t[0][1]=='x'||t[0][1]=='o'){//cout<<"zajente cwelu, wpisz jeszcze raz"<<endl;
            goto mg;
    }else{t[0][1]='o';}
        break;
    case 13://cout<<"Wpisz o"<<endl;
    if(t[0][2]=='x'||t[0][2]=='o'){//cout<<"zajente cwelu, wpisz jeszcze raz"<<endl;
            goto mg;
    }else{t[0][2]='o';}
        break;
    case 21://cout<<"Wpisz o"<<endl;
    if(t[1][0]=='x'||t[1][0]=='o'){//cout<<"zajente cwelu, wpisz jeszcze raz"<<endl;
            goto mg;
    }else{t[1][0]='o';}
        break;
    case 22://cout<<"Wpisz o"<<endl;
    if(t[1][1]=='x'||t[1][1]=='o'){//cout<<"zajente cwelu, wpisz jeszcze raz"<<endl;
            goto mg;
    }else{t[1][1]='o';}
        break;
    case 23://cout<<"Wpisz o"<<endl;
    if(t[1][2]=='x'||t[1][2]=='o'){//cout<<"zajente cwelu, wpisz jeszcze raz"<<endl;
            goto mg;
    }else{t[1][2]='o';}
        break;
    case 31://cout<<"Wpisz o"<<endl;
    if(t[2][0]=='x'||t[2][0]=='o'){//cout<<"zajente cwelu, wpisz jeszcze raz"<<endl;
            goto mg;
    }else{t[2][0]='o';}
        break;
    case 32://cout<<"Wpisz o"<<endl;
    if(t[2][1]=='x'||t[2][1]=='o'){//cout<<"zajente cwelu, wpisz jeszcze raz"<<endl;
            goto mg;
    }else{t[2][1]='o';}
        break;
    case 33://cout<<"Wpisz o"<<endl;
    if(t[2][2]=='x'||t[2][2]=='o'){/*cout<<"zajente cwelu, wpisz jeszcze raz"<<endl; */
            goto mg;
    }else{t[2][2]='o';}
        break;
    default:
        cout<<"nie ma takiej opcji"<<endl;
        goto mg;
    }


}
int losBot(){
srand(time(NULL));
int o=rand()%3+1, u=rand()%3+1;
char p[2]; int h;
    p[0]=(char)(o+48);
    p[1]=(char)(u+48);
    if(p[0]=='1'&&p[1]=='1'){
        h=11;
        }else if(p[0]=='1'&&p[1]=='2'){
        h=12;
        }else if(p[0]=='1'&&p[1]=='3'){
        h=13;
        }else if(p[0]=='2'&&p[1]=='1'){
        h=21;
        }else if(p[0]=='2'&&p[1]=='2'){
        h=22;
        }else if(p[0]=='2'&&p[1]=='3'){
        h=23;
        }else if(p[0]=='3'&&p[1]=='1'){
        h=31;
        }else if(p[0]=='3'&&p[1]=='2'){
        h=32;
        }else if(p[0]=='3'&&p[1]=='3'){
       // h=33;
        }
       // cout<<"h ="<<h<<endl;
return h;
}
int main()
{
    char t[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
int c,i,j,ii=1,jj=1;  // srand(time(NULL));
cout<<"Menu \n Tryb mulciazy zasranych-1\n gra z botem-2\n else return 0"<<endl;
cin>>c;
if(c==1){
mughals:
cout<<"menu ktory gracz ma zaczynac x-1 czy o-2 else return 0;"<<endl;
cin>>i;
if(i==1){


    wypisz(t);
    wpiszx(t);//x
    system("cls");
    wypisz(t);
    wpiszo(t);//o
system("cls");
    wypisz(t);
     wpiszx(t);//x
     system("cls");
    wypisz(t);
    wpiszo(t);//o
    system("cls");
    wypisz(t);
     wpiszx(t);//x
     system("cls");
     j=sprawdzacX(t,scorix,jj,'x');
     if(j==1){
        cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){
         reset(t);       goto mughals;
        }else
        return 0;
     }
    wypisz(t);
    wpiszo(t);//o
    system("cls");
    j=sprawdzacO(t,scorix,ii,'o');
    if(j==1){
        cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t); goto mughals;
        }else
        return 0;
     }

    wypisz(t);
     wpiszx(t);//x
     system("cls");
     j=sprawdzacX(t,scorix,jj,'x');
     if(j==1){ cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t);goto mughals;
        }else
        return 0;
     }
    wypisz(t);
    wpiszo(t);//o
    system("cls");
    j=sprawdzacO(t,scorix,ii,'o');
    if(j==1){ cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t);goto mughals;
        }else
        return 0;
     }
    wypisz(t);
    wpiszx(t);//x
    system("cls");
    j=sprawdzacX(t,scorix,jj,'x');
    if(j==1){ cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t);goto mughals;
        }}else{
        cout<<"Nikt nie wygrol, grac odnowa 1- tak"<<endl;
        int u;
        cin>>u;
        if(u==1){
            goto mughals;
        }else
        return 0;
     }


    wypisz(t);

}else if(i==2){

    wypisz(t);
    wpiszo(t);//o
    system("cls");
    wypisz(t);
    wpiszx(t);//x
    system("cls");

    wypisz(t);
     wpiszo(t);//o
     system("cls");
    wypisz(t);
    wpiszx(t);//x
    system("cls");
    wypisz(t);
     wpiszo(t);//o
     system("cls");
     j=sprawdzacO(t,scorix,ii,'o');
     if(j==1){
        cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){
         reset(t);       goto mughals;
        }else
        return 0;
     }
    wypisz(t);
    wpiszx(t);//x
    system("cls");
    j=sprawdzacX(t,scorix,jj,'x');
    if(j==1){
        cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t); goto mughals;
        }else
        return 0;
     }

    wypisz(t);
     wpiszo(t);//o
     system("cls");
     j=sprawdzacO(t,scorix,ii,'o');
     if(j==1){ cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t);goto mughals;
        }else
        return 0;
     }
    wypisz(t);
    wpiszx(t);//x
    system("cls");
    j=sprawdzacX(t,scorix,jj,'x');
    if(j==1){ cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t);goto mughals;
        }else
        return 0;
     }
    wypisz(t);
    wpiszo(t);//o
    system("cls");
    j=sprawdzacO(t,scorix,ii,'o');
    if(j==1){ cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t);goto mughals;
        }}else{
        cout<<"Nikt nie wygrol, grac odnowa 1- tak"<<endl;
        int u;
        cin>>u;
        if(u==1){
            goto mughals;
        }else
        return 0;
     }
    wypisz(t);





}else{
return 0; //return od mulciazy
}


}else if(c==2){
//tryb z botem;
minghals:
cout<<"menu\n ktory gracz ma zaczynac\n gracz x-1\n bot o-2 else return 0;"<<endl;
cin>>i;
if(i==1){
        wypisz(t);
        wpiszx(t);//x 1
        system("cls");
        wypisz(t);
        wpiszBoto(t,losBot);// boto 2
        system("cls");
        wypisz(t);
        wpiszx(t);//x 3
        system("cls");
        wypisz(t);
        wpiszBoto(t,losBot);//boto 4
        system("cls");
        wypisz(t);
        wpiszx(t);//x 5
        system("cls");
        wypisz(t);
        j=sprawdzacX(t,scorix,jj,'x');
     if(j==1){
        cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){
         reset(t);       goto minghals;
        }else
        return 0;
     }
     wypisz(t);
     wpiszBoto(t,losBot);//boto 6
     system("cls");
     wypisz(t);
     j=sprawdzacO(t,scorix,ii,'o');
    if(j==1){ cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t);goto minghals;
        }}else{
        cout<<"Nikt nie wygrol, grac odnowa 1- tak"<<endl;
        int u;
        cin>>u;
        if(u==1){
            goto minghals;
        }else
        return 0;
     }
     wypisz(t);
     wpiszx(t);//x 7
     system("cls");
     wypisz(t);
     j=sprawdzacX(t,scorix,jj,'x');
     if(j==1){
        cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){
         reset(t);       goto minghals;
        }else
        return 0;
     }
     wypisz(t);
     wpiszBoto(t,losBot);//boto 8
     system("cls");
     wypisz(t);
     j=sprawdzacO(t,scorix,ii,'o');
    if(j==1){ cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t);goto minghals;
        }}else{
        cout<<"Nikt nie wygrol, grac odnowa 1- tak"<<endl;
        int u;
        cin>>u;
        if(u==1){
            goto minghals;
        }else
        return 0;
     }
     wypisz(t);
     wpiszx(t);//x 9
     system("cls");
     wypisz(t);
     j=sprawdzacX(t,scorix,jj,'x');
     if(j==1){
        cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){
         reset(t);       goto minghals;
        }else
        return 0;
     }
     wypisz(t);



}else if(i==2){
     wypisz(t);
    wpiszBoto(t,losBot);//o
    system("cls");
    wypisz(t);
    wpiszx(t);//x
    system("cls");

    wypisz(t);
     wpiszBoto(t,losBot);//o
     system("cls");
    wypisz(t);
    wpiszx(t);//x
    system("cls");
    wypisz(t);
     wpiszBoto(t,losBot);//o
     system("cls");
     j=sprawdzacO(t,scorix,ii,'o');
     if(j==1){
        cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){
         reset(t);       goto minghals;
        }else
        return 0;
     }
    wypisz(t);
    wpiszx(t);//x
    system("cls");
    j=sprawdzacX(t,scorix,jj,'x');
    if(j==1){
        cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t); goto minghals;
        }else
        return 0;
     }

    wypisz(t);
     wpiszBoto(t,losBot);//o
     system("cls");
     j=sprawdzacO(t,scorix,ii,'o');
     if(j==1){ cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t);goto minghals;
        }else
        return 0;
     }
    wypisz(t);
    wpiszx(t);//x
    system("cls");
    j=sprawdzacX(t,scorix,jj,'x');
    if(j==1){ cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t);goto minghals;
        }else
        return 0;
     }
    wypisz(t);
    wpiszBoto(t,losBot);//o
    system("cls");
    j=sprawdzacO(t,scorix,ii,'o');
    if(j==1){ cout<<"Grosz odnowa?: 1 - tak"<<endl;
        int c;
        cin>>c;
        if(c==1){reset(t);goto minghals;
        }}else{
        cout<<"Nikt nie wygrol, grac odnowa 1- tak"<<endl;
        int u;
        cin>>u;
        if(u==1){
            goto minghals;
        }else
        return 0;
     }
    wypisz(t);




}else{
return 0;// return od bota
}

}else {
return 0;// return od if z C
}

return 0;}//return od maina
