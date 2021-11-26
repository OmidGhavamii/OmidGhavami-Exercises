#include <stdio.h>

int main()
{
    int weight;
    printf("Enter weight:\n");
    scanf("%d",&weight);
    int age;
    printf("Enter age:\n");
    scanf("%d",&age);

    if( (age>15 && age<=25)&& (weight>=50 && weight <=70) ) {
        printf("\nExercise 2 hours a day - mountaineering once a week - volleyball or basketball twice a week\n" );
    } else if( (age > 15 && age <= 25) && (weight > 70 && weight <= 90) ) {
        printf("\nExercise 4 hours a day - Mountaineering twice a week - Tennis a week 3 hours - Pool twice a week\n" );
    } else if( (age >= 26 && age <= 35) && (weight >= 50 && weight <= 70) ) {
        printf("\nExercise 1 hour and a half a day - Mountaineering once a week - Pool twice a week - Light diet\n" );
    } else if( (age >= 26 && age <= 35) && (weight > 70 && weight <= 90) ) {
        printf("\nExercise 1 hour and a half a day - Mountaineering once a week - Pool twice a week - Heavy diet\n" );
    }
    else if ((age >= 35 && age <= 45) && (weight >= 50 && weight <= 70)) {
        printf("\nExercise 1 hour a day - Mountaineering twice a month - Pool three times a week - Walking twice a week\n");
    }
    else if ((age >= 35 && age <= 45) && (weight > 70 && weight <= 90)) {
        printf("\nExercise 1 hour a day - Mountaineering three times a month - Pool three times a week - Walking every day\n");
    }
    else if ((age >= 45 && age <= 55) && ((weight >= 50 && weight <= 70) || (weight > 70 && weight <= 90))){
        printf("\nExercise 1 hour a day - Exercise (Narmesh) 1 hour every day - Pool twice a week - Walk every day - Balanced diet");
    }
    else
    {
        printf("Exercise 1 hour a day - Exercise every day - Pool twice a week - Mountaineering once a week - Walking every day - Balanced diet");
    }
    return 0;
}


