#include <stdio.h>
#include <string.h>

int main(void) {
    char subject[51];
    double credit;
    char grade[3];

    double total_credit = 0.0;
    double total_grade_point = 0.0;
    
    for (int i = 0; i < 20; i++) {
        scanf("%s %lf %s", subject, &credit, grade);

        if (strcmp(grade, "P") == 0) {
            continue;
        }

        total_credit += credit;

        if (strcmp(grade, "A+") == 0) {
            total_grade_point += credit * 4.5;
        } else if (strcmp(grade, "A0") == 0) {
            total_grade_point += credit * 4.0;
        } else if (strcmp(grade, "B+") == 0) {
            total_grade_point += credit * 3.5;
        } else if (strcmp(grade, "B0") == 0) {
            total_grade_point += credit * 3.0;
        } else if (strcmp(grade, "C+") == 0) {
            total_grade_point += credit * 2.5;
        } else if (strcmp(grade, "C0") == 0) {
            total_grade_point += credit * 2.0;
        } else if (strcmp(grade, "D+") == 0) {
            total_grade_point += credit * 1.5;
        } else if (strcmp(grade, "D0") == 0) {
            total_grade_point += credit * 1.0;
        } else if (strcmp(grade, "F") == 0) {
            total_grade_point += credit * 0.0;
        }
    }

    if (total_credit == 0.0) {
        printf("0.000000\n");
    } else {
        double major_grade = total_grade_point / total_credit;
        printf("%.6lf\n", major_grade);
    }

    return 0;
}