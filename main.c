#include<stdio.h>   

int main(void) 
{ 
	int year1, year2; 
	double amount1;
	float inflation[25] = { .034,.028,.016,.023,.027,.034,.032,.028,.038,-.004, 
    .016,.032,.021,.015,.016,.001,.013,.021,.024,.018,.012,.047,.08,.041,.029 }; 

start: 

	printf("Input The Starting Amount.\n"); 
	scanf_s("%lf", &amount1); 

	//restarts the program if it is a negative amount input.
	if (amount1 < 0) 
	{ 
		printf("error, negative number.\n\n\n", amount1); 
		goto start; 
	} 
	printf("Input Year For Starting Amount.\n"); 
	scanf_s("%d", &year1); 

	//restarts program if year is less than 2000.  
    if (year1 < 2000) 
    { 
		printf("Invalid Years Input Different Years.\n\n\n"); 
		goto start;

	} 

	printf("Input The Output Year\n"); 
	scanf_s("%d", &year2); 

    //restarts program if year is less than 2000.
	if (year2 >= 2025) 
    { 
		printf("Invalid Years Input Different Years.\n\n\n"); 
		goto start;  
	} 

    //restarts program unless the years have are at least one year apart and non negative. 
	if ( year2 - year1 < 0) 
    { 
		printf("Invalid Years Input Different Years.\n\n\n"); 
		goto start; 
	} 
	else { 
		int k = year1 - 2000; 

        //will repeat increasing the amount by the inflation amount until it reaches the year difference.  
		for (int i = 1; i <= year2 - year1; i++) 
        { 
			amount1 = amount1 + amount1 * inflation[k]; 
			k++; 
		}

		printf("The Value After Inflation Is: %.2lf\n", amount1); 
        //restarts program after value is spat out. 
		goto start; 
	} 
} 