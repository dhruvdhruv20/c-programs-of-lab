/*17.Supposethereisagameknownas“MATCHTHETABLES”,inwhichtheplayerpicksup
twotables(eachhaving10rowsand10columns)andmatchesthem.Ifoutof100
entriesatleast90correspondingentriesmatchthenthetablesaresaidtobeidentical
andtheplayerisdeclaredthewinner.Wapin‘C’toimplementtheabovegame*/

//Here is an example of how you could write a program in C to implement the "MATCH THE TABLES" game:

#include <stdio.h>
#include <stdbool.h>

#define ROWS 10
#define COLUMNS 10

bool match_tables(int table1[][COLUMNS], int table2[][COLUMNS]) {
int num_matches = 0;
for (int i = 0; i < ROWS; i++) {
for (int j = 0; j < COLUMNS; j++) {
if (table1[i][j] == table2[i][j]) {
num_matches++;
}
}
}
return num_matches >= 90;
}

int main(void) {
int table1[ROWS][COLUMNS];
int table2[ROWS][COLUMNS];


// Initialize tables with values
for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
        table1[i][j] = i + j;
        table2[i][j] = i + j;
    }
}

// Modify a few values in table2 to make them different from table1
table2[3][4] = 0;
table2[7][8] = -1;

if (match_tables(table1, table2)) {
    printf("The tables are identical.\n");
} else {
    printf("The tables are not identical.\n");
}

return 0;
}




