/*
    У меня этот код не работает из-за того что у меня Arduino Nano
    На сколько я знаю он работает только с Arduino Pro Micro/Leonardo 
    
    This code doesn't work for me because I have an Arduino Nano
    As far as I know it only works with Arduino Pro Micro/Leonardo
*/

// #include <Keyboard.h> // Почему то эта библиотека не хочет работать, но оставлю закоментированой / For some reason this library doesn’t want to work, but I’ll leave it commented out


#include <HID-Project.h> // С этими двумя работает / Works with these two
#include <HID-Settings.h>

void setup()
{
    Keyboard.begin(); // Начать связь с клавиатурой / Start communication with keyboard
    delay(2000);
}

void loop()
{
  // Оставляем пустым иначе всё будет работать по кругу / Leave it empty otherwise everything will work in circles
}

void winPlusR() 
{
    Keyboard.press(KEY_LEFT_GUI); // Win (Цифровой код: 33c) / Win (Digital code: 33c)
    Keyboard.press(114); // +R , если не будет работать замените (114) на ('r') / +R , if it doesn't work, replace (114) with ('r')
    delay(45);
    Keyboard.releaseAll(); // Отпускаем все кнопки / Release all buttons
    delay(100);
}

void OpenNotepad()
{
    winPlusR(); // Вызываем функцию / Calling the function
    Keyboard.println("cmd"); // Запусаем командную строку / Launch the cmd
    Keyboard.write(KEY_ENTER); // Enter (Цифровой код: 176) / Enter (Digital code: 176)
    delay(500);
    Keyboard.println("notepad"); // Запускаем Notepad / Launch Notepad
    Keyboard.write(KEY_ENTER); // Enter (Цифровой код: 176) / Enter (Digital code: 176)
    delay(100);
}