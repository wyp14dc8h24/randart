/* randart.c v9 by jtpg
originally written in 2021
much improved upon in 2022
 
  -^)-)~__\~+^_-+(~).     
  /+)(\\+((-~(^~`- -`     
  \.+)~`.)^  )`+-- _/_)   
  _^ /)\-~(/  \ .(~(\~`\  
   .+\__-/+~     `_/+^-   
   ^_//(+./\      +~ \-// 
   ^~.(()_~(\+    /~_/    
    ^ -+())  ~+)/_)~\-\   
        )    _) +/_```+(^ 
               -)/)  /^\+ 
              )`./+^+^)   
                   ~/--`  
                    +).(  
                   /`^~_``
                      /./)
                     \`+  
                   `~_^   
     )(         )(-_(\-   
   ``~`          ```\_    
   ~~+         - -^+`)    
   )(`~        ^)_ \`_    
   +^\)      ^)_^^\_.     
   ~/)~ \_   ^\(~\_)`\    
   .).+~)   `\/~+_+-~     
  ^.--_)+)(  (^_)^_`_     

this time i've commented the code sirs */
#include <stdio.h>
#include <stdlib.h>
//define size of map
#define AZ 25
#define AX AZ*2

#define DC ((AZ+0xC5)*AX)/(AZ/2+AX/AZ) //optimal available space
int main(){
 char aggr[]={'/','_','\\','^','-','`','+','.',')','(','~'},
      art[AX][AZ]; //map of art
 int curx=AX/2, //cursors coordinates
     curz=0;
for(int i=0;i<AZ;++i){
  for(int j=0;j<AX;++j){ //fill map with spaces
    art[j][i]=' ';
   }   
  }
for(int i=0;i<DC;++i){
 switch(rand()%4){ //chaotically move the cursor
  case 0:curx++; break;
  case 1:curx--; break;
  case 2:curz++; break;
  case 3:curz--; break;
  }
 art[curx][curz]=aggr[rand()%11]; //place random char on cursor
 }
for(int i=0;i<AZ;++i){ //print map
  for(int j=0;j<AX;++j){
    printf("%c",art[j][i]);
  }
  printf("\n"); //newline after completing a line
 }
}
