class Solution {
public:
    size_t strlen(string s) {
        size_t count=0;
        while(s[count++]!='\0');

        return count-1;
    }
    bool isValid(string s) {
        size_t n = strlen(s);
        char *stack = (char *)malloc(n);
        size_t top=0;

        for(int i=0; i<n; i++) {
            char c = s[i];
            switch(c)
            {
                case '(':
                    stack[top++] = ')';
                    break;
                case '{':
                    stack[top++] = '}';
                    break;
                case '[':
                    stack[top++] = ']';
                    break;
                default:
                    if ((top==0) || (c != stack[top-1])) {
                        free(stack);
                        return false;
                    }
                    top--;
            }

        }
        free(stack);
        return (top==0);
    }
};
