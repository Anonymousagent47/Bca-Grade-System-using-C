#include<stdio.h>
#include<math.h>
#include<string.h>
void getmarks();
int main()
{
    printf("-: Welcome To School Grade System :-\n");
    getmarks();
    return 0;
}

void getmarks(){
    char name[30];
    int ic,rn,dma,math,cs,cppm,total;
    float perc;
    printf("Enter Your Roll No: ");
    scanf("%d",&rn);
    printf("Enter Your Name: ");
    scanf("%s",&name);
printf("\n\n");
printf("Enter Your Marks as Asks!\n");

    printf("Enter Marks of Introduction of Computer : ");
    scanf("%d",&ic);
    printf("Enter Marks of Data Manipulation & Analysis : ");
    scanf("%d",&dma);
    printf("Enter Marks of Maths : ");
    scanf("%d",&math);
    printf("Enter Marks of Communication Skills : ");
    scanf("%d",&cs);
    printf("Enter Marks of CPPM : ");
    scanf("%d",&cppm);
 

    total = dma+cs+math+cppm+ic;
    perc = (total*100)/500;
printf("\n\n");
printf("** Your Roll No is %d **\n",rn);
printf("* Your Name is %s *\n\n ",name);
printf("Your Total Marks Are %d From 500 \n",total);
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