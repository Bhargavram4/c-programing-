#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    int roll_number;
    struct Date birthday;
    struct Date admission_date;
};

int calculate_age(struct Date birthday, struct Date admission_date) {
  
    int age = admission_date.year - birthday.year;
    if (admission_date.month < birthday.month ||
        (admission_date.month == birthday.month && admission_date.day < birthday.day)) {
        age--;
    }
    return age;
}

int main() {
    struct Student student;
    printf("Enter the name of the student: ");
    scanf("%s", student.name);
    printf("Enter the roll number of the student: ");
    scanf("%d", &student.roll_number);
    printf("Enter the birthday of the student (DD MM YYYY): ");
    scanf("%d %d %d", &student.birthday.day, &student.birthday.month, &student.birthday.year);
    printf("Enter the admission date of the student (DD MM YYYY): ");
    scanf("%d %d %d", &student.admission_date.day, &student.admission_date.month, &student.admission_date.year);

    int age = calculate_age(student.birthday, student.admission_date);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll number: %d\n", student.roll_number);
    printf("Birthday: %d/%d/%d\n", student.birthday.day, student.birthday.month, student.birthday.year);
    printf("Admission date: %d/%d/%d\n", student.admission_date.day, student.admission_date.month, student.admission_date.year);
    printf("Age at the time of admission: %d years\n", age);

    return 0;
}
