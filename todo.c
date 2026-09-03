#include <stdio.h>

int main() {

    int todoCount = 3;

    char todoStorage[][255] = {
        "Clean the room",
        "Take out the trash",
        "Do homework"
    };

    showTodos(todoStorage, todoCount);

    return 0;
}

void showTodos(char todoStorage[][255], int todoCount) {
    for(int i = 0; i < todoCount; i++) {
        printf("%d. %s\n", i+1, todoStorage[i]);
    }
}