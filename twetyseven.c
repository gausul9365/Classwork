// WAP to check following condtion using structure 
/*

1. if a student has greter than 90% and less than 1005 after print excillent 
2. if a student havr greatetr than 80% but lwss than 90% very good
3. if a student is greater than 70% but lesser than 80%  good
4. if a sutdent has more than 60% but less than 70% print average
note* -> a student should has five subject 

*/
#include <stdio.h>


struct Student {
    char name[50];
    float marks[5];
    float percentage; 
};


void calculate_percentage(struct Student *student) {
    float total = 0;
    for (int i = 0; i < 5; i++) {
        total += student->marks[i];
    }
    student->percentage = (total / 500) * 100; 
}


void evaluate_result(struct Student *student) {
    if (student->percentage > 90 && student->percentage <= 100) {
        printf("%s: Excellent\n", student->name);
    } else if (student->percentage > 80 && student->percentage <= 90) {
        printf("%s: Very Good\n", student->name);
    } else if (student->percentage > 70 && student->percentage <= 80) {
        printf("%s: Good\n", student->name);
    } else if (student->percentage > 60 && student->percentage <= 70) {
        printf("%s: Average\n", student->name);
    } else {
        printf("%s: Below Average\n", student->name); 
    }
}

int main() {
    struct Student student;

    
    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin); 
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
    }

   
    calculate_percentage(&student);

   
    evaluate_result(&student);

    return 0;
}
