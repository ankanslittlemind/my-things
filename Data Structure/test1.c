#include <stdio.h>
#define MAX 10
#define SIZE 10
typedef struct student
{
    int roll_no;
    char name[25];
    int total_marks;
} stud;

void get_data(stud s[MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of student %d : \n", i + 1);
        printf("Name : ");
        scanf("%s", s[i].name);
        printf("Roll no : ");
        scanf("\n%d", &s[i].roll_no);
        printf("Marks : ");
        scanf("\n%d", &s[i].total_marks);
    }
}

void display(stud s[MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The Details of student %d are : \n", i + 1);
        printf("Name : %s\nRoll no : %d\nMarks : %d\n", s[i].name, s[i].roll_no, s[i].total_marks);
    }
}

void ssort(struct student s[SIZE], int n)
{
	int  j, m, t1, t3;
	char t2[20];
	int i=0;
	do
	{
	int j=i+1;
	do
	{
			if (s[j].roll_no < s[i].roll_no)
			{
			t1 = s[i].roll_no;
			s[i].roll_no = s[j].roll_no;
			s[j].roll_no = t1;
			}
	j++;
    }while(j<n);
	i++;
    }while(i<n-1);
}




int main()
{
    stud s1[MAX];
    int n, key, ch, ch1;
    printf("Enter the Number of students : ");
    scanf("\n%d", &n);
    get_data(s1, n);

start:
    {
        printf("\n1.Enter students details\n2. Display Student data\n3.selection sort\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 2:
            display(s1, n);
            break;
        case 3:
			ssort(s1, n);
			display(s1, n);
			break;
        
        }
    }
    printf("\nPress 1 to start again\n");
    scanf("%d", &ch1);
    if (ch1 == 1)
    {
        goto start;
    }
    else
    {
        printf("\n\nEXIT");
    }
    return 0;
}