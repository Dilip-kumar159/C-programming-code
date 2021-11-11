// Arrays in multi dimensional 
# include<stdio.h>

int main()
{
    int n_student = 2;
    int n_subjects =3;

    int arr[2][3];
    for(int i=0;i<n_student;i++)
    {
    for(int j=0;j<n_subjects;j++)
    {
         printf("Enter the marks of student %d in subject %d  :  \n",i+1,j+1);
        scanf("%d",&arr[i][j]);
      }
        
    }
    for(int i=0;i<n_student;i++)
    {
    for(int j=0;j<n_subjects;j++)
    {
         printf("The marks of student %d in subject %d is  :  %d \n",i+1,j+1,arr[i][j]);
        
      }
        
    }

    return 0;
}