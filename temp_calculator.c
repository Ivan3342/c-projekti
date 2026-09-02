#include <stdio.h>

double celsiusToFarenheit(double celsius) {
    return (celsius*9/5)+32;
}

double celsiusToKelvin(double celsius) {
    return celsius+273.15;
}

double farenheitToCelsius(double farenheit) {
    return (farenheit-32)/1.8;
}

double farenheitToKelvin(double farenheit) {
    return (farenheit+459.67)*5/9;
}

double kelvinToCelsius(double kelvin) {
    return kelvin-273.15;
}

double kelvinToFarenheit(double kelvin) {
    return (kelvin-273.15)*1.8+32;
}

int main() {
    int first_selection, second_selection;
    double temp_input;

    printf("Select the current temperature unit:\n");
    printf("1 | Celsius\n");
    printf("2 | Farenheit\n");
    printf("3 | Kelvin\n");

    scanf("%d", &first_selection);

    printf("\nEnter the temperature: ");
    scanf("%lf", &temp_input);
    printf("\nStarting temp: %.2lf\n", temp_input);


    printf("\nSelect the goal of conversion:\n");
    printf("1 | Celsius\n");
    printf("2 | Farenheit\n");
    printf("3 | Kelvin\n");

    scanf("%d", &second_selection);

    printf("Result: ");
    if(first_selection == second_selection) {
        printf("%.2lf", temp_input);
    }
    else if (first_selection == 1 && second_selection == 2) {
        printf("%.2lf", celsiusToFarenheit(temp_input));
    }
    else if (first_selection == 1 && second_selection == 3) {
        printf("%.2lf", celsiusToKelvin(temp_input));
    }
    else if (first_selection == 2 && second_selection == 1) {
        printf("%.2lf", farenheitToCelsius(temp_input));
    }
    else if (first_selection == 2 && second_selection == 3) {
        printf("%.2lf", farenheitToKelvin(temp_input));
    }
    else if (first_selection == 3 && second_selection == 1) {
        printf("%.2lf", kelvinToCelsius(temp_input));
    }
    else if (first_selection == 3 && second_selection == 2) {
        printf("%.2lf", kelvinToFarenheit(temp_input));
    }
    else {
        printf("Error while selecting units.");
        return 1;
    }

    return 0;
}