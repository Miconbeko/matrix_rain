#include "../inc/header.h"

t_cell ***mx_create_matrix(int height, int width) {
    t_cell ***arr = malloc(height * sizeof(**arr));
    if (arr == NULL)
        return NULL;

    for (int i = 0; i < height; i++) {
        arr[i] = malloc(width * sizeof(*arr));
        if (arr[i] == NULL)
            return NULL;
        for (int x = 0; x < width; x++) {
            arr[i][x] = mx_create_cell();
            if (arr[i][x] == NULL)
                return NULL;
        }
    }
    return arr;
}
