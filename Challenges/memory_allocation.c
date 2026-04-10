#include <stdio.h>
#include <stdlib.h>

char * allocateString(int numChars);
char * allocateCalloc(int numChars);

int main(void) {
    int lengthIP, lengthMask, lengthDomain;
    char *ipLabel, *maskLabel, *domainName;
    
    printf("Enter your IP and your mask for allocation :\n");
    scanf("%d %d", &lengthIP, &lengthMask);

    ipLabel  = allocateString(lengthIP);
    maskLabel = allocateString(lengthMask);

    scanf("%s", ipLabel);
    scanf("%s", maskLabel);

    printf("Network settings: IP=\"%s\", Mask=\"%s\"\n", ipLabel, maskLabel);
    
    printf("Enter your domain length :\n");
    scanf("%d", &lengthDomain);
    
    domainName = allocateCalloc(lengthDomain);
    scanf("%s", domainName);
    
    printf("Domain Name=\"%s\"\n", domainName);
    
    
    free(ipLabel);
    free(maskLabel);
    free(domainName);

    return 0;
}

char * allocateString(int numChars) {
    char *ptr = (char *) malloc(numChars * sizeof(char));
    return ptr;
}

char * allocateCalloc(int numChars) {
    char *ptr = (char *) calloc(numChars + 1, sizeof(char));
    return ptr;
}
