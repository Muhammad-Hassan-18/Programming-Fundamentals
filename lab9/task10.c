#include <stdio.h>

int basicAttack(int dmg, int hp) {
    printf("Basic Attack! Dealt %d damage.\n", dmg);
    return hp - dmg;
}

int powerStrike(int dmg, int hp) {
    int total = (int)(dmg * 2.5);
    printf("Power Strike! Dealt %d damage.\n", total);
    return hp - total;
}

int heal(int dmg, int hp) {
    printf("Heal used! Restored 20 HP.\n");
    return hp + 20;
}

int poisonAttack(int dmg, int hp) {
    int half = dmg / 2;
    printf("Poison Attack! Dealt %d damage.\n", half);
    printf("Enemy is now poisoned!\n");
    return hp - half;
}

int main() {
    int hp = 100;
    int dmg = 25;
    int choice;
    int turn;
    int (*action)(int, int);

    printf("=== Combat System ===\n");
    printf("Starting HP: %d | Damage: %d\n\n", hp, dmg);

    for (turn = 1; turn <= 3; turn++) {
        printf("--- Turn %d (HP: %d) ---\n", turn, hp);
        printf("1. Basic Attack\n");
        printf("2. Power Strike\n");
        printf("3. Heal\n");
        printf("4. Poison Attack\n");
        printf("Choose action: ");
        scanf("%d", &choice);

        if (choice == 1)
            action = basicAttack;
        else if (choice == 2)
            action = powerStrike;
        else if (choice == 3)
            action = heal;
        else if (choice == 4)
            action = poisonAttack;
        else {
            printf("Invalid choice, skipping turn.\n\n");
            continue;
        }

        hp = action(dmg, hp);
        printf("HP after action: %d\n\n", hp);
    }

    printf("=== Combat Over ===\n");
    printf("Final HP: %d\n", hp);

    return 0;
}
