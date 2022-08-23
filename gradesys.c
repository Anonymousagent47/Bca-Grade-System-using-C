#include<stdio.h>
#include<math.h>
void getmarks();
int main()
{
    printf("-: Welcome To School Grade System :-\n");
    getmarks();
    return 0;
}

void getmarks(){
    int ss,guj,sci,math,eng,com,total;
    float perc;
    printf("Enter Marks of Social Science : ");
    scanf("%d",&ss);
    printf("Enter Marks of Science : ");
    scanf("%d",&sci);
    printf("Enter Marks of Gujrati : ");
    scanf("%d",&guj);
    printf("Enter Marks of Maths : ");
    scanf("%d",&math);
    printf("Enter Marks of English : ");
    scanf("%d",&eng);
    printf("Enter Marks of Computer : ");
    scanf("%d",&com);
    total = ss+sci+guj+math+eng+com;
    perc = (total*100)/600;

    printf("Your Total Marks Are %d From 600 \n",total);
    printf("Your Percentage Are %f\n",perc);

    if(perc>=90){
        printf("Grade A !");
    }else if(perc>=80){
        printf("Grade B !");
    }else if(perc>=70){
        printf("Grade C !");
    }else if(perc>=60){
        printf("Grade D !");
    }else if(perc>=50){
        printf("Grade E !");
    }else if(perc>=40){
        printf("Grade F !");
    }else {
        printf("Failed !!");
    }
}