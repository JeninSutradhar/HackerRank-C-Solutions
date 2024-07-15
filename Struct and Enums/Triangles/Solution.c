#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle 
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;


// Function to calculate the area of a triangle using Heron's formula
double calc_area(triangle tr) {
    double s = (tr.a + tr.b + tr.c) / 2.0;
    return sqrt(s * (s - tr.a) * (s - tr.b) * (s - tr.c));
}

// Function to compare areas of two triangles for sorting
int compare(const void *a, const void *b) {
    triangle *triangleA = (triangle *)a;
    triangle *triangleB = (triangle *)b;
    
    double areaA = calc_area(*triangleA);
    double areaB = calc_area(*triangleB);
    
    if (areaA < areaB) return -1;
    else if (areaA > areaB) return 1;
    else return 0;
}

// Function to sort triangles by their areas
void sort_by_area(triangle *tr, int n) {
    qsort(tr, n, sizeof(triangle), compare);
}


int main() {
    int n;
    scanf("%d", &n);
    
    // Check if n is non-positive
    if (n <= 0) {
        fprintf(stderr, "Error: Number of triangles must be positive.\n");
        return 1; // indicating error
    }
    
    triangle *tr = malloc(n * sizeof(triangle));
    
    // Check if malloc failed
    if (tr == NULL) {
        fprintf(stderr, "Error: Memory allocation failed.\n");
        return 1; // indicating error
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    
    sort_by_area(tr, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    
    // Free allocated memory
    free(tr);
    
    return 0;
}
