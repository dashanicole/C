/* C Programming Contest */

/* Beginner */

/* Square */
/*
#include <stdio.h>

int main() {
    int size = 5, i, j;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
} */

/* Right-angled Triangle */
/*
#include <stdio.h>

int main() {
    int rows = 5, i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
} */

/* Inverted Right-angled Triangle */
/*
#include <stdio.h>

int main() {
    int rows = 5, i, j;

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
} */

/* Hollow Square */
/*
#include <stdio.h>

int main() {
    int rows = 5, i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            if (i == 1 || i == rows || j == 1 || j == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
} */

/* Intermediate */

/* Perfect Triangle */
/*
#include <stdio.h>

int main() {
    int rows = 5, i, j; 

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
} */

/* Inverted Perfect Triangle */
/*
#include <stdio.h>

int main() {
    int rows = 5, i, j; 

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n"); 
    }

    return 0;
} */

/* Diamond */
/*
#include <stdio.h>

int main() {
    int rows = 5, i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
} */

/* Hollow Diamond */
/*
#include <stdio.h>

int main() {
    int n = 5, i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
		}
        for (j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                printf("*");
			} else {
                printf(" ");
			}
        }
        printf("\n");
    }
	
    for (i = n - 2; i >= 0; i--) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
		}
        for (j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                printf("*");
			} else {
                printf(" ");
			}
        }
        printf("\n");
    }

    return 0;
} */

/* Advanced */

/* Butterfly */
/*
#include <stdio.h>

int main() {
    int rows = 5; 
    int i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        for (j = 1; j <= 2 * (rows - i); j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        for (j = 1; j <= 2 * (rows - i); j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
} */

/* Flag */
/*
#include <stdio.h>

int main() {
    int rows = 5;  
    int i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        for (j = 1; j <= 2 * (rows - i); j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
	
	for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
    	}    
        for (j = 1; j <= 2 * (rows - i); j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
} */

