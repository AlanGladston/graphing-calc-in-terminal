#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

void print_graph(char graph[29][51]);
void set_graph(char graph[29][51]);
void input_graph(char graph[29][51]);
int x_axis = 25;
int y_axis = 14;

struct equation{
    int coefficient;
    int exponent;
}eqn[15];


void main(){
    char graph[29][51];
    set_graph(graph);
    input_graph(graph);
    print_graph(graph);
}


void print_graph(char graph[29][51]){
    for(int i=0;i<29;i++){
        for(int j=0;j<51;j++){
            printf("%c",graph[i][j]);            
        }
        printf("\n");
    }
}

    void input_graph(char graph[29][51]){
        int num;
        printf("Enter the number number of terms \n");
        scanf("%d",&num);
        printf("Enter the coefficients and exponents in a pair\n");
        for(int i=0;i<num;i++){
            printf("Enter term %d\n",i+1);
            scanf("%d",&eqn[i].coefficient);
            scanf("%d",&eqn[i].exponent);
        }

        int mx_val;
        int my_val;
        int x_val;
        int y_val;
        
        for(mx_val=0;mx_val<51;mx_val++){
            x_val=mx_val-25;
            y_val=0;
            for(int k=0;k<num;k++){
                int term = (pow(x_val,eqn[k].exponent));
                y_val+=(eqn[k].coefficient)*term;
            }
            printf("pair computed %d,%d\n",x_val,y_val);
            my_val=14-y_val;
            mx_val=x_val+25;
            if(my_val>=0 && my_val<29){
                if(mx_val>=0 && mx_val<51){
                    printf("%d,%d is acceptable pair \n",mx_val,my_val);
                    graph[my_val][mx_val]='*';
                }
            }
        }

    }

void set_graph(char graph[29][51]){
    for(int i=0;i<29;i++){
        for(int j=0;j<51;j++){
            graph[i][j] = '.';
            if(j==x_axis){
                graph[i][j] = '|';                
            }
            else if(i==y_axis){
                graph[i][j] = '_';                
            }
        }
    }
}