#include <stdio.h>
#include <stdlib.h>

int validateInput (char type, double val);
void printInputErrorMsg (double maxVal);
void printResult (double zPunkte, double aPunkte, double uePunkte, double erreichbarePunkte);

int main ()
{
    double zwischentestPunkte = 0.0;
    double abschlusstestPunkte = 0.0;
    double uebungsbeispielPunkte = 0.0;

    double erreichbarePunkte = 0.0;

    double inputVal = 0.0;
    char inputType;

    while(1)
    {
        printf("\nZT Punkte: %.2lf", zwischentestPunkte);
        printf("\nAT Punkte: %.2lf", abschlusstestPunkte);
        printf("\nUE Punkte: %.2lf", uebungsbeispielPunkte);
        printf("\nErreichbare Gesamtpunkte: %.2lf", erreichbarePunkte);
        
        printf("\nTyp: ");
        scanf(" %c", &inputType);
        
        if (inputType == '=')
        {
            printResult(
                zwischentestPunkte,
                abschlusstestPunkte, 
                uebungsbeispielPunkte,
                erreichbarePunkte);
            return 0;
        }
        
        printf("\nPunkte: ");
        scanf("%lf", &inputVal);
        
        if(validateInput(inputType, inputVal) != 0)
        {
            continue;
        }
        
        switch(inputType)
        {
            case 'z':
            {        
                erreichbarePunkte += 10;
                zwischentestPunkte += inputVal;
                break;
            }
            case 'a':
            {
                if(abschlusstestPunkte <= 0)
                {
                    erreichbarePunkte += 70;
                }
                abschlusstestPunkte = inputVal;
                break;
            }
            case 'u':
            {
                uebungsbeispielPunkte += inputVal;
                if (uebungsbeispielPunkte > 10)
                {
                    uebungsbeispielPunkte = 10;
                }
                break;
            }
        }
    }
}

int validateInput(char type, double val) 
{
    switch(type)
    {
        case 'z':
        {
            if(val > 10.0 || val < 0)
            {
                printInputErrorMsg(10.0);
                return 1;
            }
            else
            {
                return 0;
            }
        }
        case 'a':
        {
            if (val > 70.0 || val < 0)
            {
                printInputErrorMsg(70.0);
                return 1;
            }
            else
            {
                return 0;
            }
    
            break;
        }
        case 'u':
        {
            if(val > 0.5 || val < 0)
            {
                printInputErrorMsg(0.5);
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        default:
        {
            return 1;
        }
    }
}

void printInputErrorMsg(double maxVal)
{
    printf("\nungueltiger Bereich: min 0.00, max %.2lf", maxVal);
}

void printResult(double zPunkte, double aPunkte, double uePunkte, double erreichbarePunkte)
{
    double erreichtePunkte = 0;
    double prozentPunkte = 0;
    double note = 0; 
    
    if(erreichbarePunkte != 0)
    {
        erreichtePunkte = erreichbarePunkte == 100 ? zPunkte + aPunkte : zPunkte + aPunkte + uePunkte;
        prozentPunkte = (erreichtePunkte / erreichbarePunkte) * 100;    
        note = 5 
            - (((erreichtePunkte
            / erreichbarePunkte) * 100) - 50) 
            / 10;
            
        double temp_prozentPunkte = prozentPunkte - 50;
        for (int i = 5; i > 0; i--)
        {
            if(temp_prozentPunkte <= 0)
            {
                note = i;
                break;
            }
            temp_prozentPunkte -= 12 + (i % 2);
       }
    }

    printf("\nGesamtpunkte absolut: %.2lf", 
        erreichtePunkte);
    printf("\nGesamtpunkte %%: %.2lf %%", prozentPunkte);
    printf("\nNote: %.0f", 
        note);
}
