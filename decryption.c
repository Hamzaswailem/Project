#include <stdio.h>
#include <stdlib.h>
char *decrypt(char *file_name);
char *encrypt(char *file_name);

int main(){
    int choice ;
    char fileName[200];
    printf("Enter 1 for encrypting & 2 for decrypting:");
    scanf("%d", &choice);
    //fgets(fileName,200,stdin);

    char *estr;
    char *dstr;
    if(choice == 1){
        printf("File: \n");
        scanf("%s",fileName);
        estr = encrypt(fileName);
        printf("Here is your Encryption : %s",estr);
    }
    else if(choice == 2){
        printf("File: \n");
        scanf("%s",fileName);
        dstr = decrypt(fileName);
        printf("Here is your Decryption : %s",dstr);
    }
    else{ 
    printf("Wrong value:"); 
    exit(1);
    }
    return 0;
}
char *encrypt(char *file_name){
    FILE *file;
file = fopen(file_name,"r");
if(file == NULL){
    printf("Error opening file");
    return 0;
}

fseek(file,0,SEEK_END);
int length = ftell(file);
fseek(file,0,SEEK_SET);

char *string = malloc(sizeof(char)*(length+1));
char c;
int i = 0;

while((c = fgetc(file)) != EOF){
if(c > 'ا' && c <= 'ي')
        string[i] = c - 1;
    else if(c == 'ا')
        string[i] = 'ي';
    // else if(c == 'A')
    //     string[i] = 'Z';
    else if(c == ' '){
        string[i] = '`';
    }
    else {
        string[i] = c; // Keep other characters unchanged
    }
    i++;
}
string[i] = '\0';
// i = 0;
// while(string[i] != '\0'){
//     string[i] = string[i]+1;
//     i++;
// }
string[i] = '\0';
fclose(file);
return string;
free(string);
}

char *decrypt(char *file_name){
    FILE *file;
file = fopen(file_name,"r");
if(file == NULL){
    printf("Error opening file");
    return 0;
}

fseek(file,0,SEEK_END);
int length = ftell(file);
fseek(file,0,SEEK_SET);

char *string = malloc(sizeof(char)*(length+1));
char c;
int i = 0;
//char str[1000];
while((c = fgetc(file)) != EOF){
    //str[i] = c;
    if(c >= 'ا' && c < 'ي' )
        string[i] = c +1;
    else if(c == 'ي')
        string[i] = 'ا';
    // else if(c == 'Z')
    //     string[i] = 'A';
    else if(c == '`')
        string[i] = ' ';
    else {
            string[i] = c; // Keep other characters unchanged
        }
    i++;
}
string[i] = '\0';
// str[i] = '\0';
// printf("1 : %s",str);
// printf("2 : %s",string);
// i = 0;
// while(string[i] != '\0'){
//     string[i] = string[i]-1;
//     i++;
// }
// string[i] = '\0';
fclose(file);
return string;
free(string);
}