#include <stm32f10x_dma.h>
#include <stdlib.h>
#include "ILI9341_lib/graph.h"

int main(void) {
    LCD_init();

    LCD_setOrientation(ORIENTATION_LANDSCAPE_MIRROR);
    LCD_fillScreen(BLACK);

    u16 colors[] = {RED, CYAN, MAGENTA, YELLOW, GREEN, DGRAY, DGREEN, WHITE};
    LCD_setTextSize(14);
    LCD_setTextColor(CYAN);
    LCD_setTextBgColor(BLACK);
    unsigned char buf[8];

    u8 i = 0;
    for (;;i++) {
        i = i % 100;
        LCD_setCursor(0, 0);
        itoa(i, buf, 10);
        LCD_writeString(buf);
    }
    while (1);
}
