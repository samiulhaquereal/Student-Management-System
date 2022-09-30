#include<stdio.h>
#include<stdlib.h>

void logo()
{
    printf("--------------------------------------------------------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||              Team Matrix               ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("--------------------------------------------------------\n");
}
void diulogo()
{
    printf("----------------------------------------------------------------------------------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||         Daffodil International University        ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("----------------------------------------------------------------------------------------\n");
}
void Calculator()
{

    printf("\n----------------------------------------------------\n               C A L C U L A T O R\n----------------------------------------------------\n\n");

    double sum,x,y;
    char z;
    printf("Enter Equation\n\n");
    scanf("%lf %c %lf",&x,&z,&y);
    if (z=='-')
    {
         sum=x-y;
        printf("%.2lf - %.2lf = %.2lf \n\n",x,y,sum);
    }
    else if (z=='+')
    {
         sum=x+y;
        printf("%.2lf + %.2lf = %.2lf \n\n",x,y,sum);
    }
    else if (z=='/')
    {
        sum=x/y;
        printf("%.2lf / %.2lf = %.2lf \n\n",x,y,sum);
    }
    else if (z== '*')
    {
        sum=x*y;
        printf("%.2lf * %.2lf = %.2lf \n\n",x,y,sum);
    }

 int a;
    printf("0.Exit\n");
    printf("1.Retry\n");

    scanf("%d",&a);
    if (a==0)
    {
        system("cls");
        logo();
        Option();
    }
    else if (a==1)
    {
        system("cls");
        cgpa();
    }
}
void Contact()
{
printf("----------------------------------------------------\n      A C C O U N T   O F F I C E   I N F O\n----------------------------------------------------\n\n");

printf("MS. Taslima Akhter(Tusi)\nSenior Account Officer\nContact no : 01847140035\nEmail : Taslima_diu@daffodilvarsity.edu.bd\n\n\nMD. Saiful Islam\nAssistant Account Officer\nContact no : 01847140118 / 01717910377\nEmail : Saifulislam@daffodilvarsity.edu.bd\n\n\nM.AR. Rahman Dhaly\nAccount Officer\nContact no : 01811458896\nEmail : dhaly@daffodilvarsity.edu.bd\n\n\n\n0.Exit\n");
int a;
    scanf("%d",&a);
    if (a==0)
    {
        system("cls");
        logo();
        Option();
    }

}
void Course()
{
    diulogo();
int l, t;
    printf("Enter Level : ");
    scanf("%d",&l);
    printf("Enter Term  : ");
    scanf("%d",&t);
    printf("\n");
    if(l==1 && t==1)
    {
        printf("CSE112     ->               Computer Fundamentals                                            ->     Cr.H : 3\n");
        printf("MAT111     ->                 Basic Mathematics                                              ->     Cr.H : 3\n");
        printf("ENG113     ->     Basic Fundamental English and English Spoken                               ->     Cr.H : 3\n");
        printf("PHY113     ->                 Basic Physics                                                  ->     Cr.H : 3\n");
        printf("PHY114     ->                Basic Physics lab                                               ->     Cr.H : 1\n");
        printf("GED111     ->     History of Bangladesh and Bangla Language                                  ->     Cr.H : 3\n\n");
        printf("                               Total Credit                                                  ->           16\n");
    }
    else if(l==1 && t==2)
    {
        printf("MAT121    ->      Mathematics-II: Calculus, Complex Variable and Linear Algebra              ->     Cr.H : 3\n");
        printf("CSE122    ->             Programming and Problem Solving                                     ->     Cr.H : 2\n");
        printf("CSE123    ->           Programming and Problem Solving lab                                   ->     Cr.H : 2\n");
        printf("ENG123    ->               Writing and Comprehension                                         ->     Cr.H : 3\n");
        printf("CSE124    ->               Business Application Design                                       ->     Cr.H : 1\n");
        printf("GED121    ->                  Bangladesh Studies                                             ->     Cr.H : 3\n\n");
        printf("                                 Total Credit                                                ->           14\n");
    }
    else if(l==1 && t==3)
    {
        printf("CSE131    ->                   Discrete Mathematics                                          ->     Cr.H : 3\n");
        printf("CSE132    ->                    Electrical Circuits                                          ->     Cr.H : 1\n");
        printf("CSE133    ->                   Electrical Circuits Lab                                       ->     Cr.H : 2\n");
        printf("CSE134    ->                       Data Structure                                            ->     Cr.H : 2\n");
        printf("CSE135    ->                     Data Structure Lab                                          ->     Cr.H : 2\n");
        printf("CSE136    ->                    Software Project I                                           ->     Cr.H : 1\n");
        printf("GED131    ->                      Art of Living                                              ->     Cr.H : 3\n\n");
        printf("                                   Total Credit                                              ->           14\n");
    }
    else if(l==2 && t==1)
    {
        printf("MAT211    ->                    Engineering Mathematics                                      ->     Cr.H : 3\n");
        printf("CSE212    ->                       Basic Electronics                                         ->     Cr.H : 1\n");
        printf("CSE213    ->                     Basic Electronics Lab                                       ->     Cr.H : 2\n");
        printf("CSE214    ->                          Algorithms                                             ->     Cr.H : 2\n");
        printf("CSE215    ->                        Algorithms Lab                                           ->     Cr.H : 2\n");
        printf("CSE216    ->                      Software Project II                                        ->     Cr.H : 1\n");
        printf("ACT211    ->                 Financial and Managerial Accounting                             ->     Cr.H : 2\n\n");
        printf("                                    Total Credit                                             ->           13\n");
    }
    else if(l==2 && t==2)
    {
        printf("CSE221    ->                    Object Oriented Programming                                   ->     Cr.H : 2\n");
        printf("CSE222    ->                  Object Oriented Programming Lab                                 ->     Cr.H : 2\n");
        printf("STA221    ->                     Statistics and Probability                                   ->     Cr.H : 3\n");
        printf("CSE223    ->                       Digital Electronics                                        ->     Cr.H : 1\n");
        printf("CSE224    ->                     Digital Electronics Lab                                      ->     Cr.H : 2\n");
        printf("CSE225    ->                        Data Communication                                        ->     Cr.H : 3\n");
        printf("CSE226    ->                       Software Project III                                       ->     Cr.H : 1\n\n");
        printf("                                       Total Credit                                           ->           14\n");
    }
    else if(l==2 && t==3)
    {
        printf("CSE221    ->                   Microprocessor, Embedded System and LoT                        ->     Cr.H : 1\n");
        printf("CSE221    ->                 Microprocessor, Embedded System and LoT Lab                      ->     Cr.H : 2\n");
        printf("CSE221    ->                       Object Oriented Programming II                             ->     Cr.H : 1\n");
        printf("CSE221    ->                      Object Oriented Programming II Lab                          ->     Cr.H : 2\n");
        printf("CSE221    ->                             Numerical Methods                                    ->     Cr.H : 3\n");
        printf("CSE221    ->                         Math for Computer Science                                ->     Cr.H : 2\n");
        printf("CSE221    ->                            Software Project IV                                   ->     Cr.H : 1\n\n");
        printf("                                           Total Credit                                       ->           12\n");
    }
    else if(l==3 && t==1)
    {
        printf("CSE311    ->                            Database Management System                            ->     Cr.H : 2\n");
        printf("CSE312    ->                          Database Management System Lab                          ->     Cr.H : 2\n");
        printf("CSE313    ->                                  Computer Network                                ->     Cr.H : 1\n");
        printf("CSE314    ->                                Computer Network Lab                              ->     Cr.H : 2\n");
        printf("CSE315    ->                               Artificial intelligence                            ->     Cr.H : 1\n");
        printf("CSE316    ->                             Artificial intelligence Lab                          ->     Cr.H : 2\n");
        printf("CSE317    ->                                 software project V                               ->     Cr.H : 1\n\n");
        printf("                                                 Total Credit                                 ->           11\n");
    }
    else if(l==3 && t==2)
    {
        printf("CSE321    ->                      Data Mining and Machine Learning                            ->     Cr.H : 2\n");
        printf("CSE322    ->                    Data Mining and Machine Learning Lab                          ->     Cr.H : 2\n");
        printf("CSE323    ->                              Operating System                                    ->     Cr.H : 1\n");
        printf("CSE324    ->                            Operating System Lab                                  ->     Cr.H : 2\n");
        printf("CSE325    ->                         System Analysis and Design                               ->     Cr.H : 3\n");
        printf("ECO321    ->                                  Economics                                       ->     Cr.H : 2\n");
        printf("CSE326    ->                            Research and Innovation                               ->     Cr.H : 1\n\n");
        printf("                                             Total Credit                                     ->           13\n");
    }
    else if(l==3 && t==3)
    {
        printf("CSE331    ->                                 Compiler Design                                  ->     Cr.H : 2\n");
        printf("CSE332    ->                               Compiler Design Lab                                ->     Cr.H : 2\n");
        printf("CSE333    ->                               Software Engineering                               ->     Cr.H : 3\n");
        printf("CSE33     ->                                Pervasive Computing                               ->     Cr.H : 1\n");
        printf("CSE335    ->                  Pervasive Computing and Mobile App Development Lab              ->     Cr.H : 2\n");
        printf("CSE336    ->                                Software Project VI                               ->     Cr.H : 1\n\n");
        printf("                                               Total Credit                                   ->           11\n");
    }
    else if(l==4 && t==1)
    {
        printf("CSE411    ->                       Computer Architecture and Organization                     ->     Cr.H : 3\n");
        printf("CSE412    ->                                    Big Data and lot                              ->     Cr.H : 1\n");
        printf("CSE413    ->                                  Big Data and lot Lab                            ->     Cr.H : 2\n");
        printf("CSE414    ->                                     Web Engineering                              ->     Cr.H : 1\n");
        printf("CSE415    ->                                   Web Engineering Lab                            ->     Cr.H : 2\n\n");
        printf("                                                  Total Credit                                ->            9\n");
    }
    else if(l==4 && t==2)
    {
        printf("CSE421    ->                                    Computer Graphics                              ->     Cr.H : 1\n");
        printf("CSE422    ->                                  Computer Graphics Lab                            ->     Cr.H : 2\n");
        printf("CSE423    ->                                   Information Security                            ->     Cr.H : 3\n");
        printf("CSEXXX    ->                                         Elective I                                ->     Cr.H : 3\n");
        printf("CSE499    ->             Project / Internship (Phase I, to be completed in level-4 Term-3)     ->     Cr.H : 3\n\n");
        printf("                                                    Total Credit                               ->           12\n");
    }
    else if(l==4 && t==3)
    {
        printf("CSE498    ->                          Social and Professional Issues in Computing               ->     Cr.H : 3\n");
        printf("CSEXXX    ->                                          Elective II                               ->     Cr.H : 3\n");
        printf("CSE499    ->               Project / Internship (Phase II, continued from Level 4 Term 2)       ->     Cr.H : 3\n\n");
        printf("                                                    Total Credit                                ->            9\n");
    }
    else
    {
        printf("Level should be (1-4) & Term should be (1-3)                                 ");
    }
     int a;
    printf("0.Exit\n");
    printf("1.Retry\n");

    scanf("%d",&a);
    if (a==0)
    {
        system("cls");
        logo();
        Option();
    }
    else if (a==1)
    {
        system("cls");
        Course();
    }
}
void Diu()
{
    diulogo();

    int gc,cc,lc,total,waiver,nt,s;
    printf("Input your semester: ");
    scanf("%d",&s);
    printf("\t%d semester",s);
   if(s==1)
   {
       gc=12;
       cc=3;
       lc=1;
   }
   else if(s==2)
   {
       gc=9;
       cc=2;
       lc=3;
   }
   else if(s==3)
   {
       gc=3;
       cc=6;
       lc=5;
   }
   else if(s==4)
   {
       gc=5;
       cc=3;
       lc=5;
   }
   else if(s==5)
   {
       gc=3;
       cc=6;
       lc=5;
   }
   else if(s==6)
   {
       gc=0;
       cc=7;
       lc=5;
   }
   else if(s==7)
   {
       gc=0;
       cc=4;
       lc=7;
   }
   else if(s==8)
   {
       gc=2;
       cc=6;
       lc=5;
   }
   else if(s==9)
   {
       gc=0;
       cc=6;
       lc=5;
   }
   else if(s==10)
   {
       gc=0;
       cc=5;
       lc=4;
   }
   else if(s==11)
   {
       gc=3;
       cc=7;
       lc=2;
   }
   else
   {
       gc=3;
       cc=6;
       lc=0;
   }

    total= (gc*3200)+(cc*4900)+(lc*5000);
    printf("\nYour total tuition fees(without waiver):\t%d\n",total);

    printf("\nEnter your waiver:\t");
    scanf("%d",&waiver);
    int w=(total*waiver)/100;
    nt= total-w;
    printf("\n\nYour tuition fees after waiver:\t%d\n",nt);
    printf("\nYour total semester cost:\t%d\n",nt+13500);
    printf("\nRegistration Fee:\t13500\n");
    printf("\n2nd payment(Mid):\t%d\n",nt/2);
    printf("\n3rd payment(Final):\t%d\n\n\n\n",nt/2);


     int a;
    printf("0.Exit\n");
    printf("1.Retry\n");

    scanf("%d",&a);
    if (a==0)
    {
        system("cls");
        logo();
        Option();
    }
    else if (a==1)
    {
        system("cls");
        Diu();
    }
}
void Option()
{
    int x;
    printf(" 1. Calculator \n");
    printf(" 2. DIU Payment System \n");
    printf(" 3. Course Details \n");
    printf(" 4. CGPA Count \n");
    printf(" 5. Contact Us \n");
    printf(" 6. Exit \n\n\n");
    printf("Enter Number = ");
    scanf("%d",&x);
    if (x==1)
    {
     system("cls");
     Calculator();
    }

    else if (x==2)
    {
     system("cls");
     Diu();
    }
    else if (x==3)
    {
     system("cls");
     Course();
    }
    else if (x==4)
    {
     system("cls");
     cgpa();
    }
    else if (x==5)
    {
     system("cls");
     Contact();
    }
    else if (x==6)
    {
     exit(EXIT_SUCCESS);
    }


}
void cgpa()
{
    diulogo();
    int i, n;
    double sum=0, sgpa[13];
    printf("Enter Total Semester = ");
    scanf("%d",&n);
    if (n>=0 && n<13){


    for(i=1; i<=n; i++)
    {
        printf("Semester %d =\t",i);
        scanf("%lf",&sgpa[i]);
    }
    for(i=1; i<=n; i++)
    {
       sum = sum + sgpa[i];
    }
    }else
    {
      printf("Enter Between 1-12\n\n");
    }
    printf("Total SGPA = %.2lf\n\n\n",sum/n);

         int a;
    printf("0.Exit\n");
    printf("1.Retry\n");

    scanf("%d",&a);
    if (a==0)
    {
        system("cls");
        logo();
        Option();
    }
    else if (a==1)
    {
        system("cls");
        cgpa();
    }


}
int main()
{
logo();
Option();
getch();
}
