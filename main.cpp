#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int nilai=0;
    int nilai_rand = 0;
    int tebak = 0;
    char jawab='y';

    while(jawab=='y'){
        int nyawa = 3;
        srand(static_cast<unsigned int>(time(0)));

        cout<<"Masukkan nilai 10-100 : ";cin>>nilai;
        if(nilai<10) nilai=10;
        else if(nilai>100) nilai=100;
        nilai_rand = rand()%nilai+1;
        cout<<"Tebak nilai antara 1 - "<<nilai<<endl;
        cout<<"cheat, nilai yang benar : "<<nilai_rand;
        cout<<"\n";

        while(tebak!=nilai_rand && nyawa!=0){
            cout<<"Tebak nilai : ";cin>>tebak;
            if(tebak == nilai_rand) cout<<"Tebakan Anda Benar"<<endl<<"-Selesai-"<<endl;
            else if(tebak < nilai_rand) cout<<"Tebakan Terlalu Kecil "<<", Sisa Nyawa : "<<nyawa-1<<endl;
            else if(tebak > nilai_rand) cout<<"Tebakan Terlalu Besar "<<", Sisa Nyawa : "<<nyawa-1<<endl;
            nyawa-=1;
        }

        cout<<"\n-----GAME OVER-----"<<endl;
        cout<<"\nIngin bermain lagi ? (y/n)";cin>>jawab;
        cout<<"\n";
    }
    return 0;
}
