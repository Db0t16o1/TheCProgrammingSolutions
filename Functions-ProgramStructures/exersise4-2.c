#include<stdio.h>
#include<math.h>
#include<ctype.h>

double string_to_float(char s[]);

int main(void){
        char input_string [20];
//      scanf(“%[^\n]%*s”, input_string);
        fgets(input_string,20,stdin);
        float number = string_to_float(input_string);
        printf("%f\n",number);
        return 0;
}

double string_to_float(char s[]){
        double powd,val,pow10;
        int i,signn,signpow;
        for( i=0;isspace(s[i]);i++);
        signn = (s[i] == '-')? -1: 1;
        if(s[i] == '+' || s[i] == '-')
                i++;
        for(val = 0.0;isdigit(s[i]);i++)
                val = val* 10 + (s[i]-'0');
        if(s[i] == '.')
                i++;
        for(powd = 1;isdigit(s[i]);i++)
{
                val = val* 10 +(s[i]-'0');
                powd = powd*10;

}
        if(s[i] == 'e' || s[i] == 'E')
        {
i++;
        pow10 = string_to_float(&s[i]);
}


return (signn*val * pow(10,pow10))/powd;
}
