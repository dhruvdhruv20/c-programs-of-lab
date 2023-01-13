/*12.Writeaprogramtokeeprecordsandperformstatisticalanalysisforaclassofstudents.
Theclassmayhaveupto10students.Therearethreequizzesduringthesemesterfor
computerprogramming.Eachstudentisidentifiedbyafourdigitrollno.Theprogram
willprintthestudentscoresandcalculateandprintthefollowingstatistics
1.Highscore&Lowscoreforeachquizalongwiththerollnumberofthatstudent.
2.AverageofEachQuizandoverallaverageofallthe3quizzes
3.HighestAverageandLowestaverageofallthethreequizzesalongwithquizno.
4.Highestmarks&lowestmarksofeachstudentinthe3quizzesalongwiththequiz
no*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_STUDENTS 10
#define NUM_QUIZZES 3

struct student {
    int roll_number;
    int scores[NUM_QUIZZES];
};

void input_scores(struct student students[]);
void print_scores(struct student students[]);
void print_statistics(struct student students[]);
int get_high_score(int scores[]);
int get_low_score(int scores[]);
float get_average(int scores[]);

int main() {
    struct student students[NUM_STUDENTS];

    input_scores(students);
    print_scores(students);
    print_statistics(students);

    return 0;
}

void input_scores(struct student students[]) {
    int i, j;

    printf("Enter scores for %d students:\n", NUM_STUDENTS);
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll_number);

        printf("Enter scores for student %d:\n", i + 1);
        for (j = 0; j < NUM_QUIZZES; j++) {
            printf("Quiz %d: ", j + 1);
            scanf("%d", &students[i].scores[j]);
        }
    }
}

void print_scores(struct student students[]) {
    int i, j;

    printf("\nScores:\n");
    printf("Roll No.\tQuiz 1\tQuiz 2\tQuiz 3\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%d\t\t", students[i].roll_number);
        for (j = 0; j < NUM_QUIZZES; j++) {
            printf("%d\t\t", students[i].scores[j]);
        }
        printf("\n");
    }
}


