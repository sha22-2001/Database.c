/******************************************************************************* 
 
Create a structure/class for a group of 50 students holding data for their Regn no., Name,
Branch, CGPA
(i) Call linear search function to display data of student with a particular Regn no..
(ii) Call bubble sort function to arrange data of students according to Regn no.
(iii) Apply binary search on the above output (part b) to display data of a student with a
particular Regn no.
(iv) Use and modify Insertion sort logic to arrange data of students in descending order of CGPA

*******************************************************************************/

#include <stdio.h>
#include<string.h>

//This is our Struct

struct DataBase
{
    char Name[30];
    long int Reg_no;
    char Branch[40];
    float CGPA;
};
void Input(struct DataBase Data[],int s);
void Display(struct DataBase Data[],int s);
void LinearSearch(struct DataBase Data[],int s);
void bubblesort(struct DataBase Data[],int s);
void Insertionsort(struct DataBase Data[],int s);
void BinarySearch(struct DataBase Data[],int s);
//This is our main Function

int main()
{
    int range;
    int option;
    
    struct DataBase Data[50];
    printf("\n----------------------------------------------SORRY FOR THE CONVENIENT-----------------------------------------------------------\n\n");  
    printf("   We have our DataBase at a maximum limit of 50\n");
    printf("   So we would request you to enter the detail of the students not  more than 50\n");
    printf("____________________________________________________________________________________________________________________________________\n");
    printf("   So dear customer \n\n");
    printf("   Enter the RANGE of your Data Base :-->> ");
    scanf("%d",&range);
    printf("\n\n");
    
if(range>50){printf("\n----------------------------------------------SORRY-----------------------------------------------------------\n");
printf(" We understand your problem but for now our DataBase has a limit of 50 ,we would like to work on it in future");}
else{
    Input(Data,range);
    int a=0;
    while(a==0)
    {
    printf("_____________________-----------------------------------------------------------------------__________________________\n");
    printf("                      Dear Customer I would like you to chose the option as mentioned below\n");
    printf("_____________________-----------------------------------------------------------------------__________________________\n");
    printf("--:press:--\n");
    printf("<1> For Display of your DATA BASE\n\n");
    printf("<2> For searching detail of particular student DataBase with its Registration Number ------>> { LINEAR SEARCH }\n\n");
    printf("<3> For sorting of Data Base according to the Registration Number (--Bubble Sort--)\n\n");
    printf("<4> For searching detail of particular student DataBase with its Registration Number ------>> { BINARY SEARCH }\n\n");
    printf("<5> For sorting of Data Base according to their CGPA (--Insertion Sort--)\n\n");
    printf("---------------------- Once you chose this option the Data Base will be in sorted order -----------------------\n\n");
    printf("____________________________________________________________________________________________________________________________________\n");
    printf("--YOUR ANS--     -->> ");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        {
            Display(Data,range);
            break;
        }
        case 2:
        {
            LinearSearch(Data,range);
            break;
        }
        case 3:
        {
            int yes_no;
            bubblesort(Data,range);
            printf("--------------------------# SORTED SUCCESSFUL #--------------------------\n");
            printf("--Do you like to print the Sorted Data Base-- \n < 1 for yes / 2 for no >\n");
            scanf("%d",&yes_no);
            if(yes_no ==1)
            {
               Display(Data,range); 
               break;
            }
            else if(yes_no ==2)
            {
                break;
            }
            
            else if(yes_no!=1 && yes_no!=2)
            {
                printf("-------------------Sorry Wrong Input-------------------");
            }
            break;
        }
        case 4:
        {
            bubblesort(Data,range);
            BinarySearch(Data,range);
            break;
        }
        case 5:
        {
            int yes_no;
            Insertionsort(Data,range);
            printf("--------------------------# SORTED SUCCESSFUL #--------------------------\n");
            printf("--Do you like to print the Sorted Data Base-- \n < 1 for yes / 2 for no >\n");
            scanf("%d",&yes_no);
            if(yes_no ==1)
            {
               Display(Data,range); 
               break;
            }
            else if(yes_no ==2)
            {
                break;
            }
            
            else if(yes_no!=1 && yes_no!=2)
            {
                printf("-------------------Sorry Wrong Input-------------------");
            }
            break;
        }
        
        default:
         printf("\n\n---------------!! ERROR !!--------------\n");
         printf(" Sorry but you have chosen wrong option \n");
         printf("----------------------------------------\n");
    }
    int yes_no;
    printf("\n\n---------------Do you want to check out the other option type - < 1 for yes / 2 for no > ---------------\n");
    scanf("%d",&yes_no);
    if(yes_no ==1)
    {
        a=0;
    }
    else if(yes_no ==2)
    {
        a=7;
        printf("----# THANKU FOR USING OUR SERVICES #---- \n");
    }
    else if(yes_no!=1 && yes_no!=2)
    {
        a=7;
        printf("SORRY You have type wrong statement\n");
        printf("So before leaving please \n");
        printf("----# THANKU FOR USING OUR SERVICES #---- \n");
        
    }
    
}
        char feedback[100];
        printf("----# Please Give us a FEEDBACK, so that we can develop our coding skills in future #--- (100 word limit)\n");
        printf(" -->> ");
        scanf("%s",feedback);

    return 0;
}
}

//From this our Input Function Starts

void Input(struct DataBase Datas[50],int s)
{int i;
    printf("_________________________________________------------------------------------------------_______________________________________\n");
    printf("                                          DEAR CUSTOMER ENTER THE DETAIL OF YOUR DATA BASE\n");
    printf("_________________________________________------------------------------------------------_______________________________________\n\n");
    for(i=1;i<=s;i++)
    {
        
     printf("%d.\n",(i));    
     printf("Enter the name of the student --->> ");
     scanf("%s",Datas[i].Name);
     printf("Enter the Registration Number --->> RA");
     scanf("%ld",&Datas[i].Reg_no);
     printf("Enter the Branch              --->> ");
     scanf("%s",Datas[i].Branch);
     printf("Enter the CGPA                --->> ");
     scanf("%f",&Datas[i].CGPA);
     printf("____________________________________________________________________________________________________________________________\n");
     
    }
    printf("\n\n");
}

//From this our Display Function Starts

void Display(struct DataBase Datas[50],int s)
{int i;
    printf("________________________________________________________-----------------________________________________________________________________\n");
    printf("                                                        DATA BASE DISPLAY\n");
    printf("________________________________________________________-----------------________________________________________________________________\n");
    for(i=1;i<=s;i++)
    {
      printf("%d.\n",(i));   
      printf("Name                -->> %s\n",Datas[i].Name);
      printf("Registration Number -->> RA%ld\n",Datas[i].Reg_no);
      printf("Branch              -->> %s\n",Datas[i].Branch);
      printf("CGPA                -->> %.1f\n",Datas[i].CGPA);
      printf("____________________________________________________________________________________________________________________________\n");  
    }
}

//From this our Linear Search Starts

void LinearSearch(struct DataBase Datas[50], int s)
{
    long int search_Reg;
    int value,i;
    
    printf("________________________________________________________------------------______________________________________________________________\n");
    printf("                                                         DATA BASE SEARCH\n");
    printf("________________________________________________________------------------______________________________________________________________\n");
    
    printf("Enter the Registration Number whose detail you want to find -->> RA");
    scanf("%ld",&search_Reg);
    printf("\n");
    for(i=1;i<=s;i++)
    {int c=0;
     // value=strcmp( Datas[i].Reg_no,search_Reg);
     while (c==0){
      if(search_Reg==Datas[i].Reg_no)
      {
          printf("SEARCH SUCCESSFUL");
          
          printf("DETAILS\n");
          
          printf("%d.\n",(i));   
          printf("Name                -->> %s\n",Datas[i].Name);
          printf("Registration Number -->> RA%ld\n",Datas[i].Reg_no);
          printf("Branch              -->> %s\n",Datas[i].Branch);
          printf("CGPA                -->> %.1f\n",Datas[i].CGPA);
          c=1;
          break;
          
      }
      else
      { c++;
      }
     }
     if(c>1)
     {
         printf("SORRY the Search Registration Number are not present in the Data Base");
     }
    }
    
}

void bubblesort(struct DataBase Datas[50], int s)
{
    char tmp_name[30],tmp_Branch[40];
    int i,j;
    long int tmp;
    float tmp_CGPA;
    for(i=1; i<=s;i++)
    {
        for(j=1;j<=s-1;j++)
        {
            if(Datas[j].Reg_no > Datas[j+1].Reg_no)
            {
                
                tmp=Datas[j].Reg_no;
                Datas[j].Reg_no=Datas[j+1].Reg_no;
                Datas[j+1].Reg_no=tmp;
                
               
                strcpy(tmp_Branch,Datas[j].Branch);
                strcpy(Datas[j].Branch,Datas[j+1].Branch);
                strcpy(Datas[j+1].Branch,tmp_Branch);
                
                strcpy(tmp_name,Datas[j].Name);
                strcpy(Datas[j].Name,Datas[j+1].Name);
                strcpy(Datas[j+1].Name,tmp_name);
                
                tmp_CGPA=Datas[j].CGPA;
                Datas[j].CGPA=Datas[j+1].CGPA;
                Datas[j+1].CGPA=tmp_CGPA;

            }
        }
    }
}

void BinarySearch(struct DataBase Datas[50], int s)
{
    int z=0;
    long int search_Reg;
    printf("Enter the Registration Number whose detail you want to find -->> RA");
    scanf("%ld",&search_Reg);
    int i,l=1,h=s,m;
    if(s%2==0)m=s/2;
    else m=(s+1)/2;
    for(i=l;i<=h;i++)
    {
        if(search_Reg == Datas[m].Reg_no) 
        {
            printf("SEARCH SUCCESSFUL");
          
          printf("DETAILS\n");
          
          printf("%d.\n",(m));   
          printf("Name                -->> %s\n",Datas[m].Name);
          printf("Registration Number -->> RA%ld\n",Datas[m].Reg_no);
          printf("Branch              -->> %s\n",Datas[m].Branch);
          printf("CGPA                -->> %.1f\n",Datas[m].CGPA);
          z++;
          break;
        }
        else if(search_Reg > Datas[m].Reg_no)
        {
            l=m+1;
            
        }
        else
        {
            h=m-1;
        }
        m=(l+h)/2;
    }
    if(z==0) {printf("The Details you want to search is not present in the Data Base");}
}

void Insertionsort(struct DataBase Datas[50], int s)
{
    char tmp_name[30],tmp_Branch[40];
    int i,j;
    long int tmp;
    float tmp_CGPA;
    for(i=1; i<=s;i++)
    {
        for(j=1;j<=s-1;j++)
        {
            if(Datas[j].CGPA > Datas[j+1].CGPA)
            {
                
                tmp=Datas[j].Reg_no;
                Datas[j].Reg_no=Datas[j+1].Reg_no;
                Datas[j+1].Reg_no=tmp;
                
               
                strcpy(tmp_Branch,Datas[j].Branch);
                strcpy(Datas[j].Branch,Datas[j+1].Branch);
                strcpy(Datas[j+1].Branch,tmp_Branch);
                
                strcpy(tmp_name,Datas[j].Name);
                strcpy(Datas[j].Name,Datas[j+1].Name);
                strcpy(Datas[j+1].Name,tmp_name);
                
                tmp_CGPA=Datas[j].CGPA;
                Datas[j].CGPA=Datas[j+1].CGPA;
                Datas[j+1].CGPA=tmp_CGPA;

            }
        }
    }
}






