#include <stdio.h>

// this is a celsius fahrenheit converter
//  formula =  °F = °C × 1.8 + 32

int main(void)
{

    int expression;
    float user_input;

    printf("Please enter the unit of temperature with lowercase words, celsius and fahrenheit, you want to convert.\n for celsius enter '1'\n for fahrenheit enter '2'\n");
    scanf("%d", &expression);

    switch (expression)
    {
    case 1:
        printf("Please enter the Celsius value you want to convert to Fahrenheit.\n");
        scanf("%.4f", &user_input);
        user_input = user_input * 1.8 + 32.0;
        printf("The value is %.4f Fahrenheit", user_input);
        break;

    case 2:
        printf("Please enter the Fahrenheit value you want to convert to Celsius.\n");
        scanf("%.4f", &user_input);
        user_input = (user_input - 32) / 1.8;

        printf("The value is %.4f Celsius", user_input);
        break;

    default:
        printf("Invalid input!");
        break;
    }

    getchar();
    getchar();
    printf("Press 'ENTER' to exit.");
    getchar();
    return 0;
}
