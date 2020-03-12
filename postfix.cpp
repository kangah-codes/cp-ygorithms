// postfix evaluator
// author Joshua Akangah
#include <iostream>  
#include <string.h>  
  
using namespace std; 
  
// Stack type  
struct Stack  
{  
    int top;  
    unsigned capacity;  
    int* array;  
};  
  
// Stack Operations  
struct Stack* createStack( unsigned capacity )  
{  
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));  
  
    if (!stack) return NULL;  
  
    stack->top = -1;  
    stack->capacity = capacity;  
    stack->array = (int*) malloc(stack->capacity * sizeof(int));  
  
    if (!stack->array) return NULL;  
  
    return stack;  
}  
  
int isEmpty(struct Stack* stack)  
{  
    return stack->top == -1 ;  
}  
  
char peek(struct Stack* stack)  
{  
    return stack->array[stack->top];  
}  
  
char pop(struct Stack* stack)  
{  
    if (!isEmpty(stack))  
        return stack->array[stack->top--] ;  
    return '$';  
}  
  
void push(struct Stack* stack, char op)  
{  
    stack->array[++stack->top] = op;  
}  
  
  
// The main function that returns value of a given postfix expression  
int evaluatePostfix(char* exp)  
{  
    // Create a stack of capacity equal to expression size  
    struct Stack* stack = createStack(strlen(exp));  
    int i;  
  
    // See if stack was created successfully  
    if (!stack) return -1;  
  
    // Scan all characters one by one  
    for (i = 0; exp[i]; ++i)  
    {  
        if (isdigit(exp[i]))  
            push(stack, exp[i] - '0');  
  
        else
        {  
            int val1 = pop(stack);  
            int val2 = pop(stack);  
            switch (exp[i])  
            {  
            case '+': 
            	push(stack, val2 + val1); 
            	break;  
            case '-': 
            	push(stack, val2 - val1);
            	break;  
            case '*': 
            	push(stack, val2 * val1); 
            	break;  
            case '/': 
            	push(stack, val2/val1); 
            	break;  
            }  
        }  
    }  
    return pop(stack);  
}  
  
// Driver program to test above functions  
int main()  
{  
	char exp[100];
	cout << "Enter the expression:";
	cin >> exp;
    cout<<"postfix evaluation: "<< evaluatePostfix(exp) << endl;  
    return 0;  
}  