#include <iostream>

using namespace std;

int main(){

    int col = 5;
    //cin >> col;

    for(int i = 0; i <= col/2; i++){

        int s_index = i;

        for(int j = 0; j <s_index; j++){
            cout <<"*";
        }
        cout <<"\\";
        for(int j = s_index; j < col-s_index; j++){
            cout <<"*";
        }
        cout <<"/";

        for(int j = col-s_index; j <col; j++){
            cout <<"*";
        }
        cout <<"\n";

    }

    for(int i = 0; i <= col/2; i++){
        cout <<"*";
    }
    cout <<"/";
    for(int i = 0; i <= col/2; i++){
        cout <<"*";
    }
    cout <<"\n";


    for(int i = col/2+1; i <= col; i++){
        int s_index = i;

        for(int j = 0; j <col-s_index; j++){
            cout <<"*";
        }
        cout <<"/";

        for(int j = col-s_index; j <s_index ; j++){
            cout <<"*";
        }
        cout <<"\\";

        for(int j = 0; j <col-s_index; j++){
            cout <<"*";
        }
        cout <<"\n";

    }


    return 0;
}
/*

\*****/
*\***/*
**\*/**
***/***
**/*\**
*/***\*
/*****\

*/

