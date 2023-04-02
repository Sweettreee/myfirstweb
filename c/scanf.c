#include <stdio.h>
int main(void) {
    char name[256];
    printf("what is your name?");
    scanf("%s", name, sizeof(name));

    int age;
    printf("how old are you");
    scanf("%d", &age);
    
    float weight;
    printf("what is your weight");
    scanf("%f", &weight);

    double height;
    printf("what is your height? ");
    scanf("%lf", &height);

    char what[256];
    printf("what crime did you commit?");
    scanf("%s", what, sizeof(what));
    printf("\n\n--- ID of Criminal ---\n\n");
    printf(" name         :%s\n", name);
    printf(" age          :%d\n", age);
    printf(" weight       :%.1f\n", weight);
    printf(" height       :%.1lf\n", height);
    printf(" criminal     :%s\n", what);
    return 0;
}

#include <stdio.h>
int main(void){
// printf("hello world");
// int age = 12;
//     printf("%d\n", age);
// age = 13;
//     printf("%d\n", age);
// float f = 3.17f;
// printf("%.2f\n", f);
// double d = 4.4141414;
// printf("%lf\n", d);
// int YEAR = 2000;
// printf("birth : %d\n", YEAR);
// YEAR = 2001;
// // // printf("birth : %d\n", YEAR);
// // int add = 3+7;
// // printf("3 + 7 = %d\n", add);
// // printf("%d + %d = %d\n", 3, 7, 3 + 7);
// int input;
// printf("Enter a integer: ");
// scanf("%d", &input);
// // printf("Number = %d", input);
// char c = 'A';
// printf("%c\n", c);
char str[256];
scanf("%s", str, sizeof(str));
printf("%s\n", str);
    return 0;
}
