#include <stdio.h>   //header standar untuk input output
#include <conio.h>   //untuk getch() <opsional, tergantung compiler>

int main () {
  
    char nama[50];
    int nim;
    char kom[10];
    float ip;

    printf("Hello World\n"); //printf untuk fungsi output pada C

    //input nama
    printf("Masukan nama : ");
    gets(nama);

    //input nim
    printf("Masukan NIM : ");
    scanf("%d", &nim);
    getchar(); //membersihkan enter dari buffer

    //input kom
    printf("Masukan kom : ");
    gets(kom);

    //input ip
    printf("Masukan ip : ");
    scanf("%f", &ip);

    //output
    printf("Nama : ");
    puts(nama);

    printf("NIM : %d\n", nim);

    printf("Kom : ");
    puts(kom);

    printf("IP  : %.2f\n", ip);

    getch(); //pause layar <opsional>
    return 0;
}