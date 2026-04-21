#include <stdio.h>
int main()
{
    float basicPay; // Declaring variable for the basic pay of the employee.
    
    printf("Type the basic pay of the employee: \n");
    scanf("%f", &basicPay); // Scan the basic pay of the employee in and set it to the variable basicPay
    
    printf("The basic pay is: %f\n", basicPay); // Display the basic pay
    printf("\n");
    
    float HRA = 0.1 * basicPay; // Declare the house rent allowance variable and calculate it 
    float TA = 0.05 * basicPay; // Declare the travelling allowance variable and calculate it 
    float grossSalary = basicPay + HRA + TA; // Declare the gross salary variable and calculate it 
    
    // Display the house rent allowance, travelling allowance and gross salary
    printf("The house rent allowance is: %f\n", HRA);
    printf("The travelling allowance is: %f\n", TA);
    printf("The gross salary is: %f\n", grossSalary);
    printf("\n");
    
    float professionalTax = 0.02 * grossSalary; // Declare the professional tax variable and calculate it
    
    printf("The professional tax paid is: %f\n", professionalTax); // Display the professional tax paid
    
    float netSalary = grossSalary - professionalTax; // Declare the net salary variable and calculate it 
    printf("Therefore, the net salary is: %f\n", netSalary); // Display the net salary
}