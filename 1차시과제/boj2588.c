# include <stdio.h>
int main() {
    int one;
    int two;
    scanf("%d%d", &one, &two);

    int three = one*((two%100)%10);
    int four = one*((two%100)/10); 
    int five = one*(two/100);
    int six = three + 10*four + 100*five;

    printf("%d\n", three);
    printf("%d\n",four);
    printf("%d\n", five);
    printf("%d\n",six);
    return 0;
}