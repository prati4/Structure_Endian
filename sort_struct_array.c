//wap to declare an array of struct with a char data type and initialize the character with "h" ,"e" ,"l","l","o"
// and sort the array in alphabetical order - use malloc / calloc for struct variable

#include <stdio.h>
#include <stdlib.h>

struct alpha{
    char *alp;
}sort[5];

void sortarray(){
	int i,j;
    
    for (i=0;i<5;i++){
        sort[i].alp = (char*)malloc(sizeof(char));
    }
    sort[0].alp='h';
    sort[1].alp='e';
    sort[2].alp='l';
    sort[3].alp='l';
    sort[4].alp='o';
    
    char temp;
    
   
    for ( i=0;i<5;i++){
    	
        for (j=i+1;j<5;j++){
            if (sort[i].alp > sort[j].alp){
                temp = sort[i].alp;
                sort[i].alp = sort[j].alp;
                sort[j].alp = temp;
            }
        }
    }
}

void display(){
	int j;
    for ( j=0;j<5;j++){
        printf("%c ",sort[j].alp);
    }
}
int main() {
    sortarray();
    display();
    return 0;
}
