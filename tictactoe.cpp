#include <iostream>
using namespace std;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player = 'X';
void drawboard(){
    system("cls");  //      /// -------> //////  first draw karyu ema j thai jaay etle jetli vaar input karie etli vaar board draw nai thaay
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << " " << board[i][j] << "|";
        }
        if(i<2){
            cout << endl << " " << "--------" << endl;
        }
    }
}
void input(){
    int a;
    cout << endl << player << "'s Turn :" <<"Press the number between 1 to 9: " << endl;
    cin >> a;
    if(a==1){
        if(board[0][0] == '1'){
            board[0][0] = player;
        }
        else {
            cout << "Number already taken!!! Try different number!!" << endl;
            input();
        }
    }
   else if(a==2){
        if(board[0][1] == '2'){
            board[0][1] = player;
        }
        else {
            cout << "Number already taken!!! Try different number!!" << endl;
            input();
        }
    }
   else if(a==3){
        if(board[0][2] == '3'){
            board[0][2] = player;
        }
        else {
            cout << "Number already taken!!! Try different number!!" << endl;
            input();
        }
    }
   else if(a==4){
        if(board[1][0] == '4'){
            board[1][0] = player;
        }
        else {
            cout << "Number already taken!!! Try different number!!" << endl;
            input();
        }
    }
   else if(a==5){
        if(board[1][1] == '5'){
            board[1][1] = player;
        }
        else {
            cout << "Number already taken!!! Try different number!!" << endl;
            input();
        }
    }
    else if(a==6){
        if(board[1][2] == '6'){
            board[1][2] = player;
        }
        else {
            cout << "Number already taken!!! Try different number!!" << endl;
            input();
        }
    }
    else if(a==7){
        if(board[2][0] == '7'){
            board[2][0] = player;
        }
        else {
            cout << "Number already taken!!! Try different number!!" << endl;
            input();
        }
    }
    else if(a==8){
        if(board[2][1] == '8'){
            board[2][1] = player;
        }
        else {
            cout << "Number already taken!!! Try different number!!" << endl;
            input();
        }
    }
    else if(a==9){
        if(board[2][2] == '9'){
            board[2][2] = player;
        }
        else {
            cout << "Number already taken!!! Try different number!!" << endl;
            input();
        }
    }
}
void playerChange(){
    if(player == 'X'){
        player = 'O';
    }
    else {
        player = 'X';
    }
}
char check(){
  //   for first player
    if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X'){
        return 'X';
    }
    if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X'){
        return 'X';
    }
    if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X'){
        return 'X';
    }
    if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X'){
        return 'X';
    }
    if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X'){
        return 'X';
    }
    if(board[0][3] == 'X' && board[1][3] == 'X' && board[2][3] == 'X'){
        return 'X';
    }
    if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X'){
        return 'X';
    }
    if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'){
        return 'X';
    }

    // now for second player 

    if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O'){
        return 'O';
    }
    if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O'){
        return 'O';
    }
    if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O'){
        return 'O';
    }
    if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O'){
        return 'O';
    }
    if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O'){
        return 'O';
    }
    if(board[0][3] == 'O' && board[1][3] == 'O' && board[2][3] == 'O'){
        return 'O';
    }
    if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O'){
        return 'O';
    }
    if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'){
        return 'O';
    }

    return 'd';
}
int main(){
    int count = 0; 
    drawboard();
    while(1){
        input();
        drawboard();
        count++;
        if(check() == 'X'){
            cout << endl << "X wins!!! " << endl << " ---------- Game end ------- " << endl;
            break;
        }
        else if(check() == 'O'){
            cout << endl <<"O wins!!! " << endl << " ---------- Game end ------- " << endl;
            break;
        }
        if(count == 9){
             cout << endl <<"Draw !!!" << endl << " ---------- Game end ------- " << endl;
             break;
        }
        playerChange();
    }
}