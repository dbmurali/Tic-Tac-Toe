#include<iostream>
using namespace std;

//class value{
//public:
bool cellfill(string grid[3][3]){


for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
if(grid[i][j]=="X"||grid[i][j]=="O") {
return false;
}
}
}return true;
}



bool checkwim(string grid[3][3]) {

for(int i=0;i<3;i++) {
if((grid[i][0]==grid[i][1]&&grid[i][1]==grid[i][2])||
   (grid[0][i]==grid[1][i]&&grid[1][i]==grid[2][i])||
   (grid[0][0]==grid[1][1]&&grid[1][1]==grid[2][2])||
   (grid[0][2]==grid[1][1]&&grid[1][1]==grid[2][0])){
   return false;
}

}
 
return true;
}

void print(string grid[3][3]) {

for(int i=0;i<3;i++) {
for(int j=0;j<3;j++) {
cout<<grid[i][j]<<"|";
}
cout<<endl<<"------"<<endl;
}

}

void gameover(int c_player, string grid[3][3]){
print(grid);
if(c_player%2==0) {
print(grid);
cout<<"---GAME OVER--- player 1 win";

}else{
cout<<"---GAME OVER--- player 2 win";
}
}



 void change(string grid[3][3],int c_player){
  int val;
     if(checkwim(grid)){
print(grid);

cout<<"enter the cell\n";
while(true){

cin>>val;
if(val>=0 && val<=9 ){
break;
}
else{
cout<<"invalid input"<<endl;
}
}

if(c_player%2==0){

switch (val){
case 1:
grid[0][0]="O";
break;
case 2:
grid[0][1]="O";
break;
case 3:
grid[0][2]="O";
break;
case 4:
grid[1][0]="O";
break;
case 5:
grid[1][1]="O";
break;
case 6:
grid[1][2]="O";
break;
case 7:
grid[2][0]="O";
break;
case 8:
grid[2][1]="O";
break;
case 9:
grid[2][2]="O";
break;
}

}//if

else{
switch (val){
case 1:
grid[0][0]="X";
break;
case 2:
grid[0][1]="X";
break;
case 3:
grid[0][2]="X";
break;
case 4:
grid[1][0]="X";
break;
case 5:
grid[1][1]="X";
break;
case 6:
grid[1][2]="X";
break;
case 7:
grid[2][0]="X";
break;
case 8:
grid[2][1]="X";
break;
case 9:
grid[2][2]="X";
break;
}
}//else


cout<<endl<<endl;

return change(grid,(c_player+1));
}
else{
gameover(c_player, grid);
}
}






int main() {
int player=1;
string board[3][3]={
{"1","2", "3"},
 {"4", "5", "6"},
  {"7","8","9"}
};
change(board,player);

}

    