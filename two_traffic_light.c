void main() {
    // Configuration des ports RB0 à RB5 comme sortie
    TRISB = 0x00;
    PORTB = 0x00;

    while (1) {
        // Étape 1 : Feu 1 -> Vert, Feu 2 -> Rouge (32s)
        PORTB = 0b00000100 | 0b00001000;
        Delay_ms(32000);

        // Étape 2 : Feu 1 -> Orange, Feu 2 -> Rouge + Orange (4s)
        PORTB = 0b00000010 | 0b00011000;
        Delay_ms(4000);

        // Étape 3 : Feu 1 -> Rouge, Feu 2 -> Vert (32s)
        PORTB = 0b00000001 | 0b00100000;
        Delay_ms(32000);

        // Étape 4 : Feu 1 -> Rouge + Orange, Feu 2 -> Orange (4s)
        PORTB = 0b00000011 | 0b00010000;
        Delay_ms(4000);
    }
}
