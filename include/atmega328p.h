/* ----------- ATmega328p Registers Config. ---------------

---------------- I/0 Direction Registers -----------------*/

void dir_ddrb (char data) {
    
    volatile char *ddrb = (volatile char *)0x24;
    *ddrb = data;
}

void dir_ddrc (char data) {
    
    volatile char *ddrc = (volatile char *)0x27;
    *ddrc = data;
}

void dir_ddrd (char data) {
    
    volatile char *ddrd = (volatile char *)0x2A;
    *ddrd = data;
}


// ---------------- Output Registers -----------------

void out_portb (char data) {
    
    volatile char *portb = (volatile char *)0x25;
    *portb = data;
}

void out_portc (char data) {
    
    volatile char *portc = (volatile char *)0x28;
    *portc = data;
}

void out_portd (char data) {
    
    volatile char *portd = (volatile char *)0x2B;
    *portd = data;
}