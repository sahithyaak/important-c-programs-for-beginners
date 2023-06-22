#include<stdio.h>
int main()
{
    char Studentname[] = "Ankit";
    int Studentage = 19;
    char Studentgender = 'M';
    int Mathscore = 92;
    int Sciencescore = 95;
    float Englishscore = -2;
    float Total;
    Total = Mathscore + Sciencescore + Englishscore;

    printf("Name of the student: %s\n",Studentname);
    printf("Age of the student: %d\n",Studentage);
    printf("Gender of the student: %c\n",Studentgender);
    printf("Marks obtained: %.2f\n",Total);
    return 0;
}
