#include <stdio.h>
int main()
{
  int physcis, chemistry, c_language, data_structure, computer_architecture;
  
  printf("Enter your Marks");
  printf("Physics:");
  scanf("%d", &physcis);

  printf("Chemistery:");
  scanf("%d", &chemistry);

  printf("C language:");
  scanf("%d", &c_language);
    
  printf("Data Structure:");
  scanf("%d", &data_structure);
    
  printf("Computer Architecture:");
  scanf("%d", &computer_architecture);
    
    int sumofmarks = physcis + chemistry + c_language + data_structure + computer_architecture;
    int percentage = (sumofmarks/500)*100;

    if(percentage >= 80 && percentage < 100){
      printf("Congratualtions! u have passed with %d\n", percentage);
      printf("Grade: A");
    }
    else if(percentage >= 60 && percentage <80){
      printf("Congratualtions! u have passed with %d\n", percentage);
      printf("Grade: B");
    }
    else if(percentage >= 33 && percentage <60){
      printf("Congratualtions! u have passed with %d\n", percentage);
      printf("Grade: C");
    }
    else if(percentage>100){
      printf("You have entered the incorrect marks! try again");
        
    }
    else {
      printf("Oho! You will have to ready for retest");
        
    }
    
  return 0;
}


