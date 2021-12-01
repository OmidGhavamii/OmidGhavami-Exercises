#include <stdio.h>
int votes_Counter(int votes[5]);
int all_votes(int[5] , int[5], int[5], int[5]);
int sorter(int[5]);
float winer_checker(int x[5],int x2);
int main() {
    int i  ;

    char ch='%';
    int candidate_A[5] ,
            candidate_B[5],
            candidate_C[5],candidate_D[5];
    printf("Enter the Candidate A votes in 5 area = \n");
    for(i = 0; i < 5; i++) {

        printf("area  %d :  ", i);
        scanf("%d", &candidate_A[i]);
    }
    printf("Enter the Candidate B votes in 5 area = \n");
    for(i = 0; i < 5; i++) {

        printf("area  %d :  ", i);
        scanf("%d", &candidate_B[i]);
    }
    printf("Enter the Candidate C votes in 5 area = \n");
    for(i = 0; i < 5; i++) {

        printf("area  %d :  ", i);
        scanf("%d", &candidate_C[i]);
    }
    printf("Enter the Candidate D votes in 5 area = \n");
    for(i = 0; i < 5; i++) {

        printf("area  %d :  ", i);
        scanf("%d", &candidate_D[i]);
    }

    printf("\n\nHint : Area 0 is the capital\n");
    all_votes(candidate_A,candidate_B,candidate_C,candidate_D);
    int x3=all_votes(candidate_A,candidate_B,candidate_C,candidate_D) ;
    printf("\nCandidate A votes: in 5 area    \n");
    sorter(candidate_A);
    printf("The sum of votes for candidate A  is : %d\n",votes_Counter(candidate_A));
    printf("The candidate A have : %f %c  of all votes \n",winer_checker(candidate_A,x3),ch);

    printf("\n_\n");
    printf("\nCandidate B votes: in 5 area    \n");
    sorter(candidate_B);
    printf("The sum of votes for candidate B  is : %d\n",votes_Counter(candidate_B));
    printf("The candidate B have : %f %c  of all votes \n",winer_checker(candidate_B,x3),ch);
    printf("\n_\n");
    printf("\nCandidate C votes: in 5 area    \n");
    sorter(candidate_C);
    printf("The sum of votes for candidate C  is : %d\n",votes_Counter(candidate_C));
    printf("The candidate C have : %f %c of all votes \n",winer_checker(candidate_C,x3),ch);
    printf("\n_\n");
    printf("\nCandidate D votes: in 5 area    \n");
    sorter(candidate_D);
    printf("The sum of votes for candidate D  is : %d\n",votes_Counter(candidate_D));
    printf("The candidate D have : %f %c  of all votes \n",winer_checker(candidate_D,x3),ch);
    printf("\n_\n");




    return 0;
}
int votes_Counter(int votes[5]){
    int sum_votes;
    sum_votes=votes[0]+votes[1]+votes[2]+votes[3]+votes[4];
    return sum_votes;
}
int all_votes(int A[5] , int B[5], int C[5], int D[5]){
    int all_voters;
    all_voters=votes_Counter(A)+votes_Counter(B)+votes_Counter(C)+votes_Counter(D);
    printf("\n\nAll votes : %d\n\n",all_voters);
    return all_voters;
}
int sorter(int number[5]){
    int n=5;
    int i ,j,a;
    for (i=0; i<n; ++i)

    {

        for (j=i+1; j<n; ++j)

        {

            if (number[i] < number[j])

            {

                a= number[i];

                number[i] = number[j];

                number[j] = a;


            }

        }

    }
    printf ("\nAscending order of number of votes \n");

    for (i=0; i<n; ++i){

        printf("the area %d\t",i); printf (":%d\n",number[i]);
    }
}
float winer_checker(int x[5],int x3 ){
    float percentage;
    float total_marks = x3;
    int votes = x[0]+x[1]+x[2]+x[3]+x[4];
    percentage = (float )votes / total_marks * 100.0;
    if (percentage > 39.9 && percentage >=50){
        printf("\n\a Rank 1  The candidate is : << Election winner >> \n");
    } else if (percentage >=20.1 && percentage <=38.9 ){
        printf("\nThe Rank 2  The candidate is : < Runner-up > \n");
    } else if (percentage <20) {
        printf("\nThe candidate is losing election\n");
    }
    return percentage;
}
