// Creating the 2D dimensional array and printing on the screen 
# include<stdio.h>

int main()
{
    int arr[2][3] = {{1,2,3,},{4,5,6}};  //  Assuming that  2D array in matrix form. 2 is row and 3 is coloumn
     
     for(int i = 0; i < 2; i++)
     {
         for(int j = 0; j < 3; j++)
         {
             printf(" %d ",arr[i][j]);
         }
     }

    return 0;
}