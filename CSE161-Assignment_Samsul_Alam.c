#include<stdio.h>
int main()
{
    printf("Weather data in Celsius of January, 2024 - \n");
    int arraySize = 0;
    float dailyWatherTemp[28] = {16.5, 16.4, 16.2, 15.9, 16.0, 16.6, 16.2, 17.0, 17.2, 17.1, 16.9, 17.1, 16.4, 17.0, 17.3, 16.0,
    16.3, 16.1, 16.7, 17.0, 19.3, 19.0, 19.1, 18.9, 18.6, 18.5, 18.2, 20.1};


    for(int i=1; i<29; i++){
        printf("Day_%d: %.1f; ", i, dailyWatherTemp[i-1]);
        if(i%4==0){
            printf("\n");
        }
    }

    printf("\n");

    float maxTemp = dailyWatherTemp[0];
    for(int i=0; i<28; i++){
        if(maxTemp<dailyWatherTemp[i]){
            maxTemp = dailyWatherTemp[i];
        }
    }

    printf("Maximum Temperature in Celsius: %0.1f\n", maxTemp);


    float minTemp = dailyWatherTemp[0];
    for(int i=0; i<4; i++){
        if(minTemp>dailyWatherTemp[i]){
            minTemp = dailyWatherTemp[i];
        }
    }

    printf("Minimum Temperature in Celsius: %0.1f\n", minTemp);


    printf("\n");


    float totalTempOfWeek_1 = 0, totalTempOfWeek_2 = 0, totalTempOfWeek_3 = 0, totalTempOfWeek_4 = 0;

    for(int i=0; i<8; i++){
        totalTempOfWeek_1 += dailyWatherTemp[i];
    }

    for(int i=8; i<15; i++){
        totalTempOfWeek_2 += dailyWatherTemp[i];
    }


    for(int i=15; i<22; i++){
        totalTempOfWeek_3 += dailyWatherTemp[i];
    }

    for(int i=22; i<29; i++){
        totalTempOfWeek_4 += dailyWatherTemp[i];
    }

    float averageTempOfWeek_1 = totalTempOfWeek_1 / 7;

    float averageTempOfWeek_2 = totalTempOfWeek_2 / 7;

    float averageTempOfWeek_3 = totalTempOfWeek_3 / 7;

    float averageTempOfWeek_4 = totalTempOfWeek_4 / 7;



    float arrayOfAverageWeekTemp[4] = {averageTempOfWeek_1, averageTempOfWeek_2, averageTempOfWeek_3, averageTempOfWeek_4};
    printf("Average temperature in Celsius of first week: %.1f;\n", arrayOfAverageWeekTemp[0]);
    printf("Average temperature in Celsius of second week: %.1f;\n", arrayOfAverageWeekTemp[1]);
    printf("Average temperature in Celsius of third week: %.1f;\n", arrayOfAverageWeekTemp[2]);
    printf("Average temperature in Celsius of fourth week: %.1f;\n", arrayOfAverageWeekTemp[3]);


    printf("\n");

    float dailyWatherTempInF[28];

    for(int i=1; i<29; i++){
        dailyWatherTempInF[i] = dailyWatherTemp[i]*(9/5)+32;
    }



    printf("Weather data in Fahrenheit of January, 2024 - \n");

    for(int i=1; i<29; i++){
        printf("Day_%d: %.1f; ", i, dailyWatherTempInF[i]);
        if(i%4==0){
            printf("\n");
        }
    }

    printf("\n");

    float maxTempInF = dailyWatherTempInF[0];
    for(int i=0; i<28; i++){
        if(maxTempInF<dailyWatherTempInF[i]){
            maxTempInF = dailyWatherTempInF[i];
        }
    }

    printf("Maximum Temperature in Fahrenheit: %0.1f\n", maxTempInF);


    float minTempInF = dailyWatherTempInF[0];
    for(int i=0; i<4; i++){
        if(minTempInF>dailyWatherTempInF[i]){
            minTempInF = dailyWatherTempInF[i];
        }
    }

    printf("Minimum Temperature in Fahrenheit: %0.1f\n", minTempInF);

    float totalTempInFOfWeek_1 = 0, totalTempInFOfWeek_2 = 0, totalTempInFOfWeek_3 = 0, totalTempInFOfWeek_4 = 0;

    for(int i=0; i<8; i++){
        totalTempInFOfWeek_1 += dailyWatherTempInF[i];
    }

    for(int i=8; i<15; i++){
        totalTempInFOfWeek_2 += dailyWatherTempInF[i];
    }


    for(int i=15; i<22; i++){
        totalTempInFOfWeek_3 += dailyWatherTempInF[i];
    }

    for(int i=22; i<29; i++){
        totalTempInFOfWeek_4 += dailyWatherTemp[i];
    }

    float averageTempInFOfWeek_1 = totalTempInFOfWeek_1 / 7;

    float averageTempInFOfWeek_2 = totalTempInFOfWeek_2 / 7;

    float averageTempInFOfWeek_3 = totalTempInFOfWeek_3 / 7;

    float averageTempInFOfWeek_4 = totalTempInFOfWeek_4 / 7;



    float averageWeekTempInF[4] = {averageTempInFOfWeek_1, averageTempInFOfWeek_2, averageTempInFOfWeek_3, averageTempInFOfWeek_4};
    printf("Average temperature in Fahrenheit of first week: %.1f;\n", averageWeekTempInF[0]);
    printf("Average temperature in Fahrenheit of second week: %.1f;\n", averageWeekTempInF[1]);
    printf("Average temperature in Fahrenheit of third week: %.1f;\n", averageWeekTempInF[2]);
    printf("Average temperature in Fahrenheit of fourth week: %.1f;\n", averageWeekTempInF[3]);

    return 0;
}
