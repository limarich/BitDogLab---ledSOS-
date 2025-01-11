#include <stdio.h>
#include "pico/stdlib.h"

#define led_pin 11
#define dotDashGap 125
#define letterGap 250
#define wordGap 3000

void blinkDot()
{
    gpio_put(led_pin, true);
    sleep_ms(200);
    gpio_put(led_pin, false);
    sleep_ms(dotDashGap);
}
void blinkDash()
{
    gpio_put(led_pin, true);
    sleep_ms(800);
    gpio_put(led_pin, false);
    sleep_ms(dotDashGap);
}
void makeLetter(char letter)
{
    switch (letter)
    {
    case 'a': // .-
        blinkDot();
        blinkDash();
        break;
    case 'b': // -...
        blinkDash();
        blinkDot();
        blinkDot();
        blinkDot();
        break;
    case 'c': // -.-.
        blinkDash();
        blinkDot();
        blinkDash();
        blinkDot();
        break;
    case 'd': // -..
        blinkDash();
        blinkDot();
        blinkDot();
        break;
    case 'e': // .
        blinkDot();
        break;
    case 'f': // ..-.
        blinkDot();
        blinkDot();
        blinkDash();
        blinkDot();
        break;
    case 'g': // --.
        blinkDash();
        blinkDash();
        blinkDot();
        break;
    case 'h': // ....
        blinkDot();
        blinkDot();
        blinkDot();
        blinkDot();
        break;
    case 'i': // ..
        blinkDot();
        blinkDot();
        break;
    case 'j': // .---
        blinkDot();
        blinkDash();
        blinkDash();
        blinkDash();
        break;
    case 'k': // -.-
        blinkDash();
        blinkDot();
        blinkDash();
        break;
    case 'l': // .-..
        blinkDot();
        blinkDash();
        blinkDot();
        blinkDot();
        break;
    case 'm': // --
        blinkDash();
        blinkDash();
        break;
    case 'n': // -.
        blinkDash();
        blinkDot();
        break;
    case 'o': // ---
        blinkDash();
        blinkDash();
        blinkDash();
        break;
    case 'p': // .--.
        blinkDot();
        blinkDash();
        blinkDash();
        blinkDot();
        break;
    case 'q': // --.-
        blinkDash();
        blinkDash();
        blinkDot();
        blinkDash();
        break;
    case 'r': // .-.
        blinkDot();
        blinkDash();
        blinkDot();
        break;
    case 's': // ...
        blinkDot();
        blinkDot();
        blinkDot();
        break;
    case 't': // -
        blinkDash();
        break;
    case 'u': // ..-
        blinkDot();
        blinkDot();
        blinkDash();
        break;
    case 'v': // ...-
        blinkDot();
        blinkDot();
        blinkDot();
        blinkDash();
        break;
    case 'w': // .--
        blinkDot();
        blinkDash();
        blinkDash();
        break;
    case 'x': // -..-
        blinkDash();
        blinkDot();
        blinkDot();
        blinkDash();
        break;
    case 'y': // -.--
        blinkDash();
        blinkDot();
        blinkDash();
        blinkDash();
        break;
    case 'z': // --..
        blinkDash();
        blinkDash();
        blinkDot();
        blinkDot();
        break;
    default:
        break;
    }
    sleep_ms(letterGap);
}

void convertToMorse(char *text)
{
    char letter; // para não alterar o texto original
    while (*text)
    {
        letter = *text;
        // Converte para minúscula se necessário
        if (letter >= 'A' && letter <= 'Z')
        {
            letter += 32;
        }

        if (letter == ' ')
        {
            sleep_ms(wordGap);
        }
        else
        {
            makeLetter(letter);
        }
        text++;
    }
}

int main()
{
    // stdio_init_all();
    gpio_init(led_pin);
    gpio_set_dir(led_pin, GPIO_OUT);

    while (true)
    {
        // Abordagem mais simples

        // makeLetter('s');
        // makeLetter('o');
        // makeLetter('s');

        // Abordagem mais sofisticada

        convertToMorse("sos");
        sleep_ms(wordGap);
    }
}
