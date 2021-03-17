
#include<stdio.h>
int main(){
char name1[20];
char name2[20];

printf("Enter 1st Team Name\n");
gets(name1);


printf("Enter 2nd Team Name\n");
gets(name2);

int toss;
printf("If 1st team win the toss PRESS 1, else PRESS 2\n");
scanf("%d", &toss);


switch (toss){
case 1:
    {

    printf("%s is win the toss and decide to batting\n\n", name1 );
   //by default, team decide to batting
    int x=0;
    int over;
    int sum[2];
    int run[6];
    int ball=6;
    int i, j;
    int overLeft;
    int runPerOver;
    //int wicket; use if else
    //int count=0;

    int target=0;

    printf("Enter Over\n");
    scanf("%d", &over);
    //int diff[over];

    //start while loop
    while(x!=2){
    if(x==1){
    printf("\n\n %s is batting.\n" ,name2);
    }
    sum[x]=0;

    printf("\nEnter Run:\n");

    //create nested loop for calculating run rer over
    for(j=1; j<=over; j++){
            runPerOver=0;

    for(i=0; i<ball; i++){
        //scanf("%d", &run[i]);
        run[i] = rand() %7;//create random number
        sum[x] += run[i];
        runPerOver += run[i];

    }//end of inner loop




    overLeft = over - j;
    printf("    OVER: %d\n      Total Run: %d", j, sum[x]);
    printf("    Over left: %d", overLeft);
    printf("    Run this over: %d\n\n", runPerOver );

    }//end of for loop.
    target = sum[0];


    //calculte run rate and assign target
    float runRate=0;
    runRate = sum[x]/over;
    printf("    Runrate: %.2f\n", runRate);

    printf("\n TARGET: %d\n",sum[0]+1);

    x++;

    }//end of while loop

    printf("Score of %s: %d\n",name2, sum[1]);
    int dif=0;

    //conditional statement
    if(sum[0]>sum[1]){
        dif=sum[0]-sum[1];
        printf("\nWow! %s win by %d run. It's really amazing.\n", name1, dif);
    }
    else if(sum[0]<sum[1]){
        dif=sum[1]-sum[0];
        printf("\nWow! %s win by %d run. It's really amazing.\n", name2, dif);
    }
    else printf("\nOhhh...Nooo!!! Draw.. Unbeliveable!!!\n");


    break;
}

case 2:
    {

    printf("%s is win the toss.\n\n", name2);

    int x=0;
    int over;
    int sum[2];
    int run[6];
    int ball=6;
    int i, j;
    int overLeft;
    int runPerOver;
    //int wicket; use if else
    //int count=0;

    int target=0;

    printf("Enter Over\n");
    scanf("%d", &over);

    int diff[over];

    //start while loop
    while(x!=2){
    if(x==1){
    printf("\n\n %s is batting.\n" ,name1);
    }

    sum[x]=0;

    printf("\nEnter Run:\n");

    //create nested loop for calculating run rer over
    for(j=1; j<=over; j++){
            runPerOver=0;

    for(i=0; i<ball; i++){
        //scanf("%d", &run[i]);
        run[i] = rand() %7;//create random number
        sum[x] += run[i];
        runPerOver += run[i];

    }//end of inner loop




    overLeft = over - j;
    printf("    OVER: %d\n      Total Run: %d", j, sum[x]);
    printf("    Over left: %d", overLeft);
    printf("    Run this over: %d\n\n", runPerOver );

    }//end of for loop.
    target = sum[0];


    //calculte run rate and assign target
    float runRate=0;
    runRate = sum[x]/over;
    printf("    Runrate: %.2f\n", runRate);

    printf("\n TARGET: %d\n",sum[0]+1);

    x++;

    }//end of while loop

    printf("Score of %s: %d\n",name1, sum[1]);
    int dif=0;

    //conditional statement
    if(sum[0]>sum[1]){
        dif=sum[0]-sum[1];
        printf("\nWow! %s win by %d run. It's really amazing.\n", name2, dif);
    }
    else if(sum[0]<sum[1]){
        dif=sum[1]-sum[0];
        printf("\nWow! %s win by %d run. It's really amazing.\n", name1, dif);
    }
    else printf("\nOhhh...Nooo!!! Draw.. Unbeliveable!!!\n");

    break;
    }
}


return 0;
}

