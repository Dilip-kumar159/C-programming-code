// Chapter 05 Functions
# include<stdio.h>
void display(); // function prototype
int main()
{
    int a;
    printf("\tIntializing the function display\n");
    display();
    printf("\tFunction display is finished and it works\n");
    return 0;
}
  void display()
  {
      printf("\tWorking of display function\n");
  }