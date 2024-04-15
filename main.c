#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char opt;
    scanf("%d%*c", &num);
    scanf("%c%*c", &opt);

    switch(opt)
    {
    case 'c':
        for(int l=0; l<num; l++){
            for(int c =0; c < num; c++){
                printf("*");
            }
            printf("\n");
        }
    break;

    case 'b':
        for(int l=0; l<num;l++){
            for(int c=0; c<num; c++){
                if(l>0 && l<(num-1) && c>0 && c<(num-1))
                    printf(" ");
                else{
                    printf("*");
                }
            }
            printf("\n");
        }

    break;

    case 'p':
        for(int l=0; l<num; l++){
            for(int c=0; c<num; c++){
                if(l>0 && l<(num-1) && l!=c && c>0 && c<(num-1))
                    printf(" ");
                else {printf("*");
                }
            }
            printf("\n");
        }

    break;

    case 's':
         for(int l=0; l<num; l++){
            for(int c=0; c<num; c++){
                    if(l>0 && l<(num-1) && ((l+c)!=num-1) && c>0 && c<(num-1))
                        printf(" ");
                    else {printf("*");
                }
            }
            printf("\n");
        }
    break;

    case 'h':
        for(int l=0; l<num; l++){
            for(int c=0; c<num; c++){
                    if(l>0 && l<(num-1) && ((l+c)!=num-1) && c>0 && c<(num-1))
                        printf(" ");
                    else {printf("*");
                }
            }
            printf("\n");
        }

    break;

    case 'v':

    break;

    default:
        printf("Não conheço esse comando");

    }
    return 0;
}
